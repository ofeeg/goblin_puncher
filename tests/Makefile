#This will compile multiple unit test executables which can be run individually.

CC = g++
CFLAGS = -c -g -Wall

EVENT_CSRC = ../world/event.cc
EVENT_TSRC = event_test.cc
EVENT_COBJ = $(EVENT_CSRC:.cc=.o)
EVENT_TOBJ = $(EVENT_TSRC:.cc=.o)
EVENT_EXE =  event_test
CHARA_CSRC = ../world/character.cc ../world/item.cc
CHARA_TSRC = character_test.cc
CHARA_COBJ = $(CHARA_CSRC:.cc=.o)
CHARA_TOBJ = $(CHARA_TSRC:.cc=.o)
CHARA_EXE =  character_test
ABILT_CSRC = ../world/ability.hh
ABILT_TSRC = ability_test.cc
ABILT_TOBJ = $(ABILT_TSRC:.cc=.o)
ABILT_EXE = ability_test
MAP_CSRC = ../world/event.cc ../world/map.cc
MAP_TSRC = map_test.cc
MAP_COBJ = $(MAP_CSRC:.cc=.o)
MAP_TOBJ = $(MAP_TSRC:.cc=.o)
MAP_EXE = map_test
ITEM_CSRC =  ../world/item.cc
ITEM_TSRC = item_test.cc
ITEM_COBJ = $(ITEM_CSRC:.cc=.o)
ITEM_TOBJ = $(ITEM_TSRC:.cc=.o)
ITEM_EXE = item_test
BATTLE_CSRC = ../world/battle/battle.cc ../world/character.cc ../world/item.cc
BATTLE_TSRC = battle_test.cc
BATTLE_COBJ = $(BATTLE_CSRC:.cc=.o)
BATTLE_TOBJ = $(BATTLE_TSRC:.cc=.o)
BATTLE_EXE = battle_test
WORLD_CSRC = ../world/world.cc ../world/character.cc ../world/item.cc ../world/map.cc ../world/event.cc
WORLD_TSRC = world_test.cc
WORLD_COBJ = $(WORLD_CSRC:.cc=.o)
WORLD_TOBJ = $(WORLD_TSRC:.cc=.o)
WORLD_EXE = world_test
PLAYR_CSRC = ../player/player.cc ../world/character.cc ../world/item.cc
PLAYR_TSRC = player_test.cc
PLAYR_COBJ = $(PLAYR_CSRC:.cc=.o)
PLAYR_TOBJ = $(PLAYR_TSRC:.cc=.o)
PLAYR_EXE = player_test
MNGR_CSRC = ../world/world.cc ../world/character.cc ../world/item.cc ../world/map.cc ../world/event.cc ../world/battle/battle.cc ../player/player.cc ../world/manager.cc
MNGR_TSRC = manager_test.cc
MNGR_COBJ = $(MNGR_CSRC:.cc=.o)
MNGR_TOBJ = $(MNGR_TSRC:.cc=.o)
MNGR_EXE = manager_test

.PHONY : all

all : $(EVENT_EXE) $(CHARA_EXE) $(ITEM_EXE) $(MAP_EXE) $(ABILT_EXE) $(BATTLE_EXE) $(WORLD_EXE) $(PLAYER_EXE) $(MNGR_EXE)

$(EVENT_EXE) : $(EVENT_COBJ) $(EVENT_TOBJ)
	$(CC) $^ -o $@
$(CHARA_EXE) : $(CHARA_COBJ) $(CHARA_TOBJ)
	$(CC) $^ -o $@
$(ITEM_EXE) : $(ITEM_COBJ) $(ITEM_TOBJ)
	$(CC) $^ -o $@
$(MAP_EXE) : $(MAP_COBJ) $(MAP_TOBJ)
	$(CC) $^ -o $@
$(ABILT_EXE) : $(ABILT_COBJ) $(ABILT_TOBJ)
	$(CC) $(ABILT_TOBJ) -o $@
$(BATTLE_EXE) : $(BATTLE_COBJ) $(BATTLE_TOBJ)
	$(CC) $^ -o $@
$(WORLD_EXE) : $(WORLD_COBJ) $(WORLD_TOBJ)
	$(CC) $^ -o $@
$(PLAYR_EXE) : $(PLAYR_COBJ) $(PLAYR_TOBJ)
	$(CC) $^ -o $@
$(MNGR_EXE) : $(MNGR_COBJ) $(MNGR_TOBJ)
	$(CC) $^ -o $@

.cc.o:
	$(CC) $(CFLAGS) $< -o $@


clean :
	$(RM) *.o  ../world/*.o *~ $(CHARA_EXE) $(EVENT_EXE) $(MAP_EXE) $(ITEM_EXE) $(ABILT_EXE) $(BATTLE_EXE) $(WORLD_EXE) $(PLAYR_EXE) $(MNGR_EXE)
