# Tower Of Hanoi
# Recursive Method
function Hanoi(n, from, to , via)
{
    if (n==0) return;
    
    Hanoi(n-1, from, via , to);
    
    moveDisk(from,to);
    
    // callStack.push([from,to]); // save parameters to callStack array
    
    Hanoi(n-1, via, to , from);
}

'use strict';

function stepsToSolveHanoiT(height, srcP, desP, bufferP) {
    if (height >= 1) {
        
        // Move a tower of height-1 to the buffer peg, using the destination peg.
        stepsToSolveHanoiT(height - 1, srcP, bufferP, desP);
        
        // Move the remaining disk to the destination peg.
        console.log('Move disk from Tower ', srcP, ' to Tower ', desP);
        
        // Move the tower of `height-1` from the `buffer peg` to the `destination peg` using the `source peg`.
        stepsToSolveHanoiT(height - 1, bufferP, desP, srcP);
    }
    return;
}
stepsToSolveHanoiT(3, "A", "C", "B");

# Other Method
function animateMove()
{  var elem = moveInfo.elem;
    var dir = moveInfo.dir;
    var styleInfo = window.getComputedStyle(elem);
    var pos = parseInt(styleInfo[moveInfo.whichPos]);
    
    if (((dir==1) && (pos >= moveInfo.endPos)) ||
        ((dir==-1) && (pos <= moveInfo.endPos)))
    {  // alert(moveInfo.state);
        if (moveInfo.state == "up")
        {  moveInfo.state = "hor";
            moveInfo.whichPos ="left";
            moveInfo.dir = 1;
            if ( moveInfo.fromBar >  moveInfo.toBar) moveInfo.dir = -1;
            //alert("toBar:" + moveInfo.toBar);
            var toBar = document.getElementById("bar"+ moveInfo.toBar);
            // alert(toBar.offsetLeft);
            
            moveInfo.endPos = toBar.offsetLeft -
            Math.floor(elem.offsetWidth/2)+15; // 15 is half of tower width
            return;
        }
        
        else if (moveInfo.state  == "hor" ) // move down
        {  // alert("here");
            moveInfo.state = "down";
            moveInfo.whichPos ="top";
            moveInfo.dir = 1;
            //alert(elem.offsetHeight);
            moveInfo.endPos = document.getElementById("bottombar").offsetTop -
            (barsInfo[moveInfo.toBar].disks.length+1)*elem.offsetHeight;
            return;
        }
        
        else // end of current call to moveDisk, issue next call
        {  clearInterval(myTimer);  // cancel timer
            barsInfo[moveInfo.toBar].disks.push(elem.id);
            moveDisk();
            return;
        }
    }
    
    pos = pos + dir*moveInc;
    elem.style[moveInfo.whichPos] = pos+ "px";
}
