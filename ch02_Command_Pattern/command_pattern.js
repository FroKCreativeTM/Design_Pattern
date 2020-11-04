function unit(x, y) {
    let x = x;
    let y = y;

    function moveTo(x, y) {
        x = x;
        y = y;
    }
}

function makeMoveUnitCommand(unit, x, y) {
    let xBefore, yBefore;
    return {
        execute : function() {
            xBefore = unit.x;
            yBefore = unit.y;
            unit.moveTo(x, y);
        },
        undo : function() {
            unit.moveTo(xBefore, yBefore);
        }
    }
}