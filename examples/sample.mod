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
    ENDPROC

    FUNC num Double(num value)
        RETURN value * 2;
    ENDFUNC
ENDMODULE
