#ifndef ROAD_H
#define ROAD_H

#define ROAR_PARTS_ROWS       8
#define ROAD_PARTS_COLUMNS    4
#define ROAD_PARTS_BLOCKS     5
#define ROAD_MATERIAL_SIZE    8

PROGMEM const uint8_t roadData[] = {
// road data length
0x24,
// Parts Data x 4 =
// one screen
// (128 x 64)
0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x01,
0x02, 0x02, 0x02, 0x03,
0x00, 0x00, 0x00, 0x04,
0x05, 0x05, 0x05, 0x06,
0x00, 0x00, 0x00, 0x01,
0x03, 0x01, 0x03, 0x04,
0x05, 0x06, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00,
};

PROGMEM const uint8_t roadPartsData[] = {
// 0x00
0x01, 0x01, 0x01, 0x01,
0x10, 0x10, 0x10, 0x10,
0x00, 0x00, 0x00, 0x00,
0x0a, 0x00, 0x0a, 0x00,
0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00,
0x1b, 0x1b, 0x1b, 0x1b,
0x01, 0x01, 0x01, 0x01,
// 0x01
0x01, 0x01, 0x01, 0x01,
0x11, 0x12, 0x13, 0x14,
0x00, 0x00, 0x16, 0x17,
0x00, 0x00, 0x00, 0x00,
0x0d, 0x00, 0x0c, 0x00,
0x00, 0x00, 0x00, 0x00,
0x1a, 0x19, 0x23, 0x22,
0x08, 0x00, 0x20, 0x1f,
// 0x02
0x01, 0x01, 0x01, 0x01,
0x15, 0x15, 0x15, 0x15,
0x18, 0x18, 0x18, 0x18,
0x00, 0x00, 0x00, 0x00,
0x0b, 0x00, 0x0b, 0x00,
0x00, 0x00, 0x00, 0x00,
0x21, 0x21, 0x21, 0x21,
0x1e, 0x1e, 0x1e, 0x1e,
// 0x03
0x01, 0x01, 0x01, 0x01,
0x14, 0x13, 0x12, 0x11,
0x17, 0x16, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00,
0x0c, 0x00, 0x0d, 0x00,
0x00, 0x00, 0x00, 0x00,
0x22, 0x23, 0x19, 0x1a,
0x1f, 0x20, 0x00, 0x08,
// 0x04
0x04, 0x00, 0x15, 0x14,
0x0f, 0x0e, 0x18, 0x17,
0x00, 0x00, 0x00, 0x00,
0x0a, 0x00, 0x0a, 0x00,
0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00,
0x1a, 0x19, 0x23, 0x22,
0x08, 0x00, 0x20, 0x1f,
// 0x05
0x13, 0x13, 0x13, 0x13,
0x16, 0x16, 0x16, 0x16,
0x00, 0x00, 0x00, 0x00,
0x0a, 0x00, 0x0a, 0x00,
0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00,
0x21, 0x21, 0x21, 0x21,
0x1e, 0x1e, 0x1e, 0x1e,
// 0x06
0x14, 0x15, 0x00, 0x05,
0x17, 0x18, 0x0e, 0x0f,
0x00, 0x00, 0x00, 0x00,
0x0a, 0x00, 0x0a, 0x00,
0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00,
0x22, 0x23, 0x19, 0x1a,
0x1f, 0x20, 0x00, 0x09,
// 0x07
0x01, 0x01, 0x01, 0x01,
0x10, 0x10, 0x10, 0x10,
0x00, 0x00, 0x00, 0x00,
0x0a, 0x00, 0x0a, 0x00,
0x00, 0x00, 0x00, 0x00,
0x00, 0x24, 0x00, 0x00,
0x1b, 0x1b, 0x1b, 0x1b,
0x01, 0x01, 0x01, 0x01,
// 0x08
0x01, 0x01, 0x01, 0x01,
0x11, 0x12, 0x13, 0x14,
0x00, 0x00, 0x16, 0x17,
0x00, 0x00, 0x00, 0x00,
0x0d, 0x00, 0x0c, 0x00,
0x00, 0x24, 0x00, 0x00,
0x1a, 0x19, 0x23, 0x22,
0x08, 0x00, 0x20, 0x1f,
// 0x09
0x01, 0x01, 0x01, 0x01,
0x15, 0x15, 0x15, 0x15,
0x18, 0x18, 0x18, 0x18,
0x00, 0x00, 0x00, 0x00,
0x0b, 0x00, 0x0b, 0x00,
0x00, 0x24, 0x00, 0x00,
0x21, 0x21, 0x21, 0x21,
0x1e, 0x1e, 0x1e, 0x1e,
};

PROGMEM const uint8_t roadMaterialData[] = {
// parts
0x11, 0x44, 0x11, 0x44, 0x11, 0x44, 0x11, 0x44,
// parts (top)
0x11, 0x44, 0x11, 0x44, 0x11, 0x04, 0x01, 0x00,
0x01, 0x04, 0x11, 0x44, 0x11, 0x44, 0x11, 0x44,
0x01, 0x04, 0x01, 0x04, 0x01, 0x04, 0x01, 0x00,
0x01, 0x04, 0x01, 0x04, 0x01, 0x04, 0x01, 0x04,
// parts (bottom)
0x11, 0x44, 0x11, 0x44, 0x11, 0x44, 0x10, 0x40,
0x00, 0x40, 0x10, 0x44, 0x11, 0x44, 0x11, 0x44,
0x10, 0x40, 0x10, 0x40, 0x10, 0x40, 0x10, 0x40,
0x00, 0x40, 0x10, 0x40, 0x10, 0x40, 0x10, 0x40,
// centerline
0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00,
0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00,
0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00,
0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00,
// side line (top)
0x05, 0x0d, 0x0d, 0x0d, 0x09, 0x01, 0x01, 0x01,
0x0a, 0x1a, 0x1a, 0x1a, 0x12, 0x02, 0x02, 0x02,
0x14, 0x34, 0x34, 0x34, 0x24, 0x04, 0x04, 0x04,
0x28, 0x68, 0x68, 0x68, 0x48, 0x08, 0x08, 0x08,
0x50, 0xd0, 0xd0, 0xd0, 0x90, 0x10, 0x10, 0x10,
0xa0, 0xa0, 0xa0, 0xa0, 0x20, 0x20, 0x20, 0x20,
0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00,
0x01, 0x03, 0x03, 0x03, 0x02, 0x00, 0x00, 0x00,
0x02, 0x06, 0x06, 0x06, 0x04, 0x00, 0x00, 0x00,
// side line (bottom)
0xa0, 0xb0, 0xb0, 0xb0, 0x90, 0x80, 0x80, 0x80,
0x50, 0x58, 0x58, 0x58, 0x48, 0x40, 0x40, 0x40,
0x28, 0x2c, 0x2c, 0x2c, 0x24, 0x20, 0x20, 0x20,
0x14, 0x16, 0x16, 0x16, 0x12, 0x10, 0x10, 0x10,
0x0a, 0x0b, 0x0b, 0x0b, 0x09, 0x08, 0x08, 0x08,
0x05, 0x05, 0x05, 0x05, 0x04, 0x04, 0x04, 0x04,
0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00,
0x80, 0xc0, 0xc0, 0xc0, 0x40, 0x00, 0x00, 0x00,
0x40, 0x60, 0x60, 0x60, 0x20, 0x00, 0x00, 0x00,
// rock
0x38, 0x44, 0x82, 0x89, 0x85, 0x81, 0x42, 0x3c,
};

void drawRoadParts(int16_t x, int16_t y, uint8_t id)
{
  uint8_t parts_pos = id * 32;
  uint8_t road_part;
  for (uint8_t row = 0; row < ROAR_PARTS_ROWS; row++)
  {
    for (uint8_t column = 0; column < ROAD_PARTS_COLUMNS; column++)
    {
      road_part = pgm_read_byte_near(roadPartsData + parts_pos + (row * ROAD_PARTS_COLUMNS) + column);
      if(road_part == 0)
      {
        arduboy.fillRect(x + (column * ROAD_MATERIAL_SIZE), y + (row * ROAD_MATERIAL_SIZE), ROAD_MATERIAL_SIZE, ROAD_MATERIAL_SIZE, BLACK);
      }
      else
      {
        arduboy.drawBitmap(x + (column * ROAD_MATERIAL_SIZE), y + (row * ROAD_MATERIAL_SIZE),
        roadMaterialData + ((road_part - 1) * ROAD_MATERIAL_SIZE), ROAD_MATERIAL_SIZE, ROAD_MATERIAL_SIZE, WHITE);
      }      
    }  
  
  }  
}

void drawRoad()
{
  static uint8_t road_pos = 0;
  static uint8_t road_len = 0;
  static uint8_t counter = 0;
  uint8_t road_data;
  
  counter++;
  counter++; // test
  
  // init
  if (road_len == 0)
  {
    road_len = pgm_read_byte_near(roadData);
    road_pos = 1;
  }
   
  for (uint8_t block = 0; block < ROAD_PARTS_BLOCKS; block++)
  {
    road_data = pgm_read_byte_near(roadData + road_pos + block);
    drawRoadParts((block * ROAR_PARTS_ROWS * ROAD_PARTS_COLUMNS) - counter, 0, road_data);  
  }

  if (counter >= ROAR_PARTS_ROWS * ROAD_PARTS_COLUMNS)
  {
    counter = 0;
    road_pos++;
    
    if (road_pos > (road_len - ROAD_PARTS_BLOCKS))
    {
      road_pos = 1;
    }
  }
}


#endif
