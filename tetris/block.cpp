#include "block.h"
#include "raylib.h"

Block::Block() :
    cell_size(25),
    rotation_state(0),
    colors(GetCellColors()),
    row_offset(0),
    col_offset(0)
{
    // Initialization list is preferred for member initialization
}

void Block::Draw() {
    std::vector<Position> tiles = GetCellPosition();
    for (Position item : tiles) {
        DrawRectangle(item.col * cell_size + 1,
            item.row * cell_size + 1,
            cell_size - 1,
            cell_size - 1,
            colors[id]);
    }
}

void Block::Move(int rows, int cols) {
    row_offset += rows;
    col_offset += cols;
}

std::vector<Position> Block::GetCellPosition() {
    std::vector<Position> tiles = cells[rotation_state];
    std::vector<Position> moved_tiles;

    for (Position item : tiles) {
        Position new_pos = Position(item.row + row_offset, item.col + col_offset);
        moved_tiles.push_back(new_pos);
    }

    return moved_tiles;
}