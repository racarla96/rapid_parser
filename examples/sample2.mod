MODULE TestModule
    ! global persistent counter
    PERS num counter:=0;

    PROC main()
        VAR num i;

        FOR i FROM 1 TO 10 STEP 1 DO
            counter := counter + i;

            IF counter > 20 THEN
                TPWrite "Counter exceeded 20";
            ELSEIF counter = 20 THEN
                TPWrite "Counter is exactly 20";
            ELSE
                TPWrite "Counter is " + NumToStr(counter, 0);
            ENDIF
        ENDFOR

        WHILE counter > 0 DO
            counter := counter - 1;
        ENDWHILE

        ! ---- Move instructions ----

        ! plain positional arguments
        MoveAbsJ jpos1, v1000, z50, tool0;

        ! \Conc switch, named arguments, \V and \Z switches
        MoveAbsJ \Conc, ToJointPos:=jpos2, Speed:=v500 \V:=200, Zone:=fine \Z:=10, Tool:=tool1 \WObj:=wobj1;

        ! linear / joint moves with a robtarget
        MoveL p1, v1000, z10, tool0;
        MoveJ p2, vmax \T:=5, fine, tool0 \WObj:=wobj0;

        ! circular move (CirPoint, ToPoint)
        MoveC p1, p2, v500, z5, tool0;
    ENDPROC

    FUNC num Double(num value)
        RETURN value * 2;
    ENDFUNC
ENDMODULE
