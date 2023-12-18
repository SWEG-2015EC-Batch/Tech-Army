pseudocode:
function generatePattern(rows, cols):
    for i from 1 to rows do
        for j from 1 to cols do
            if i equals 1 or i equals rows or j equals 1 or j equals cols then
                print "* "
            else
                print "  "
            end if
        end for
        print newline
    end for
end function

# Call the function with rows = 7 and cols = 8
generatePattern(7, 8)
