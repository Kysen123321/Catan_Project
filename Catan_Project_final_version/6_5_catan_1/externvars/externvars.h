#pragma once
#include "terrain.h"
#include "point.h"
#include "player_enum.h"
#include "player_state_enum.h"
#include "point_disp.h"
#include <QGraphicsView>
#include <QGraphicsScene>
#include "player.h"
#include <QLabel>
#include "construction_button.h"
extern vector<Terrain_type> types;
extern vector<int> numbers;
extern vector<int> xs;
extern vector<int> ys;
extern vector<Terrain> terrains;
extern vector<Terrain_disp> terrain_disps;
extern vector<Point> points;
extern vector<Point_disp*>points_disp;
extern vector<int>point_x_pos;
extern vector<int>point_y_pos;
extern vector<vector<int>>points_neighbour_points;
extern vector<vector<int>>points_neighbour_terrain;
extern player_type current_player;
extern player_state current_player_state;
extern vector<QGraphicsView*>points_view;
extern vector<QGraphicsScene*>points_scene;
extern vector<QLabel*>source_card_number;//顺序存放lumber grain brick wool ore的资源数QLabel
extern vector<QLabel*>score_labels;//顺序存放red green blue玩家的分数QLabel
extern vector<QLabel*>rescard_number_labels;//顺序存放red green blue玩家的手上资源牌总数QLabel
extern vector<QLabel*>longest_road_number_labels;//顺序存放　red green blue 玩家的路的长度QLabel
extern vector<Player>players;//顺序存放red green blue玩家对象
extern vector<QLabel*>bk_labels;//顺序存放red green blue玩家的面板显示label
extern vector<int>current_point_able_to_build_road;
extern vector<int>current_point_able_to_build_small_house;
extern vector<int>current_point_able_to_build_big_house;
extern int current_player_index;
extern vector<Construction_button*>construction_buttons;
extern bool is_in_normal_round;
extern int game_status;//0——所有Point激活，1——红方建了一个房子，与其相连的路被激活，2——剩下所有可建房子激活点激活，3——绿方建了一个房子，与其相连的路被激活 4——剩下可建房子点被激活 5——蓝方建了一个房子，与其相连的路被激活
//6.剩下可建房子点激活 7——蓝方建了一个房子，获取了这个房子的相邻地形资源，相连路激活 8——剩下可建房子点激活 9——绿方建了一个房子，获取了这个房子的相邻地形资源，相连路激活 10——剩下可建房子点激活 11——红方建了一个房子，获取了这个房子的相邻地形资源，相连路激活
//12——骰子使能，game_status更新到13 13——直接break
extern vector<int>sea_shore_point;
extern map<Terrain_type,int>sea_shore_trade_condition;
extern bool is_sea_shore_mode;
