#include <iostream>

using namespace std;

int menu_inicial(){
    int opcion=0;
    cout <<"----------------------------------------------"<<endl;
    cout <<"        BIENVENIDO AL WILLY GAME'S            "<<endl;
    cout <<"----------------------------------------------"<<endl;
    cout <<" tiene cuenta o es nuevo por aca"<<endl;
    cout <<" (1) eres un cliente"<<endl;
    cout <<" (2) eres un administrador"<<endl;
    cout <<" (0) Salir"<<endl;
    cout <<"----------------------------------------------"<<endl;
    cout <<"Opcion: ";
    cin>>opcion;
    return opcion;
}
int menu_ingreso_usuario()
{   
    int opcion=0;
    cout <<"----------------------------------------------"<<endl;
    cout <<"        BIENVENIDO AL WILLY GAME'S            "<<endl;
    cout <<"----------------------------------------------"<<endl;
    cout <<" (1)Si es cliente nuevo                       "<<endl;
    cout <<" (2)Si es cliente antiguo                     "<<endl;
    cout <<" (0)Para volver"<<endl;
    cout <<"----------------------------------------------"<<endl;
    cout <<"Opcion: ";
    cin>>opcion;
    return opcion;
}

int menu_opciones_cliente()
{   
    int opcion=0;
    cout <<"----------------------------------------------"<<endl;
    cout <<"        BIENVENIDO AL WILLY GAME'S            "<<endl;
    cout <<"----------------------------------------------"<<endl;
    cout <<"(1)Consolas y mandos  "<<endl;
    cout <<"(2)Juegos "<<endl;
    cout <<"(3)Historial de compras"<<endl;
    cout <<"(0)Salir"<<endl;
    cout <<"----------------------------------------------"<<endl;
    cin>>opcion;
    return opcion;
}

int cuenta_del_administrador()
{
    int opcion=0;
    // cout<<"1 reporte de ventas mes";
    // cout<<"2 reporte de ventas año";
    // cout<<"3 reporte de cuentas ";
    // cout<<"4 facturacion de personas ";
    cout<<"5 Reporte de inventario"<<endl;
    cout<<"6 Adicionar producto"<<endl;
    cout <<"----------------------------------------------"<<endl;
    cout<<"Opcion: ";
    cin>>opcion;
    return opcion;
}


void Mostrar(string mensaje){
    cout<<mensaje<<endl;
}

void playstation(){
    cout<<"------------------------------------------------------------";
    cout<<"                    Playstation                    ";
    cout<<"------------------------------------------------------------";
    cout<<"(1) CONSOLA / PLAYSTATION 4 / 500.bs";
    cout<<"(2) CONSOLA / PLAYSTATION 4 - PRO / 500.bs";
    cout<<"(3) CONSOLA / PLAYSTATION 5 / 500.BS";
    cout<<"(4) CONSOLA / PLAYSTATION 5 -Edicion Digital/ 500.bs";
    cout<<"(5) MANDO / PLAYSTATION 4 - DUALSHOCK - Inalambrico / 5bs";
    cout<<"(6) MANDO / PLAYSTATION 5 - DUALSENSE - Inalambrico / 5bs";
    cout<<"(7) MANDO / PLAYSTATION 5 - CONTROL - Access/ 5bs";
    cout<<"(8) MANDO / PLAYSTATION 5 - VOLNATE - Inalmbrico/ 5bs";
    cout<<"-------------------------------------------------------------";
}

void nintendo(){
    cout<<"(1) CONSOLA / nintendo switch  / 500.bs";
    cout<<"(2) CONSOLA /nintendo switch - lite / 500.bs";
    cout<<"(3) MANDO / nintendo -  joy-con / 5bs";
    cout<<"(4) MANDO / nintendo - Mando-Pro  / 5bs";
    cout<<"(5) MANDO / nintendo - volantes-Mando/3bs";
    cout<<"(6) FUNDA / nintendo - Funda   / 3bs ";
}

void Xbox(){
    cout<<"(1) CONSOLA / Xbox one - Series X / 500.bs";
    cout<<"(2) CONSOLA /Xbox 360 - / 500.bs";
    cout<<"(3) MANDO / Xbox one -  serieX / 5bs";
    cout<<"(4) MANDO / Xbox 360 - / 5bs";
}

void Sega(){
    cout<<"(1) CONSOLA / SEGA - MARK III / 500.bs";
    cout<<"(2) CONSOLA / SEGA - MASTER SYSTEM / 500.bs";
    cout<<"(3) MANDO / SEGA - MEGA DRIVE / 500.bs ";
    cout<<"(4) MANDO / SEGA - MARK III - mando / 5.bs";
    cout<<"(5) MANDO / SEGA - MASTER SYSTEM - mando / 5bs";
    cout<<"(6) MANDO / SEGA - MEGA DRIVE - mando / 5bs";
}

void catalogo_juegos()
{
    cout<<"-------------------------------------- ";
    cout<<"             VIDEOJUEGOS               ";
    cout<<"---------------------------------------";
    cout<<"(1)--[Accion]  ";
    cout<<"(2)--[Aventura]";
    cout<<"(3)--[Deporte] ";
    cout<<"(4)--[Role- Playing games(RPG)]";
    cout<<"(5)--[Shooter]";
    cout<<"(6)--[Simulacion]";
    cout<<"(7)--[Estrategia]";
    cout<<"(8)--[Casual]";
    cout<<"(9)--[Multijugador en linea(MMO)]";
    cout<<"---------------------------------------";
}

void juegos_accion()
{
    cout<<"------------------------------------------------------------";
    cout<<"                    LA CATEGORIA ACCION                     ";
    cout<<"------------------------------------------------------------";
    cout<<"(1)The Legend of Zelda: Breath of the Wild - nintendo switch";
    cout<<"(2)Red Dead Redemption 2 - PS4/ Xbox One    ";
    cout<<"(3)God of War - PS4 / PS5 ";
    cout<<"(4)Grand Theft Auto V - PS4/PS5 ";
    cout<<"(5)Spider-Man (2018)";
    cout<<"(6)Sekiro: Shadows Die Twice";
    cout<<"(7)Resident Evil 2 (Remake)";
    cout<<"(8)Horizon Zero Dawn";
    cout<<"(9)Devil May Cry 5";
    cout<<"(10)Uncharted 4: A Thief's End";
    cout<<"(11)Streets of Rage 2";
    cout<<"------------------------------------------------------------";
}

void juegos_aventura()
{
    cout<<"------------------------------------------------------------";
    cout<<"                    LA CATEGORIA AVENTURA                   ";
    cout<<"------------------------------------------------------------";
    cout<<"(1)The Last of Us Part II  ";
    cout<<"(2)Ghost of Tsushima";
    cout<<"(3)Ori and the Will of the Wisps";
    cout<<"(4)Cyberpunk 2077";
    cout<<"(5)Assassin's Creed Valhalla";
    cout<<"(6)Death Stranding";
    cout<<"(7)Marvel's Spider-Man: Miles Morales";
    cout<<"(8)Subnautica";
    cout<<"(9)A Plague Tale: Innocence";
    cout<<"(10)Hades";
    cout<<"(11)Shining Force II";
    cout<<"(12)Phantasy Star IV";
    cout<<"-------------------------------------------------------------";

}
void juegos_deportes()
{
cout<<"------------------------------------------------------------";
    cout<<"                    LA CATEGORIA DEPORTES                   ";
    cout<<"------------------------------------------------------------";
    cout<<"(1)FIFA 23";
    cout<<"(2)NBA 2K23";
    cout<<"(3)Madden NFL 23";
    cout<<"(4)MLB The Show 23";
    cout<<"(5)Tony Hawk's Pro Skater 1 + 2";
    cout<<"(6)Rocket League";
    cout<<"(7)PGA Tour 2K23";
    cout<<"(8)F1 2023";
    cout<<"(9)Football Manager 2023";
    cout<<"(10)Mario Tennis Aces";
    cout<<"(11)NHL 23";
    cout<<"(12)Virtua Tennis";
    cout<<"(13)NHL '94";
    cout<<"-------------------------------------------------------------";
}
void juegos_RPG()
{
    cout<<"------------------------------------------------------------";
    cout<<"                    LA CATEGORIA RPG                        ";
    cout<<"------------------------------------------------------------";
    cout<<"(1)The Witcher 3: Wild Hunt";
    cout<<"(2)Final Fantasy VII Remake";
    cout<<"(3)Persona 5 Royal";
    cout<<"(4)Cyberpunk 2077";
    cout<<"(5)Dragon Age: Inquisition";
    cout<<"(6)The Elder Scrolls V: Skyrim";
    cout<<"(7)Mass Effect Legendary Edition";
    cout<<"(8)Diablo III";
    cout<<"(9)Nier: Automata";
    cout<<"(10)Divinity: Original Sin 2";
    cout<<"(11)Phantasy Star IV";
    cout<<"(12)Shining Force II";
    cout<<"(13)Landstalker";
    cout<<"(14)Skies of Arcadia";
    cout<<"-------------------------------------------------------------";
}
void juegos_Shooter()
{
    cout<<"------------------------------------------------------------";
    cout<<"                    LA CATEGORIA SHOOTERS                   ";
    cout<<"------------------------------------------------------------";
    cout<<"(1)Call of Duty: Modern Warfare";
    cout<<"(2)Doom Eternal";
    cout<<"(3)Overwatch";
    cout<<"(4)Apex Legends";
    cout<<"(5)Battlefield V";
    cout<<"(6)Destiny 2";
    cout<<"(7)Halo: The Master Chief Collection";
    cout<<"(8)Rainbow Six Siege";
    cout<<"(9)Counter-Strike: Global Offensive";
    cout<<"(10)Gears 5";
    cout<<"(11)Gunstar Heroes";
    cout<<"(12)Space Harrier II";
    cout<<"(13)Alien Soldier";
    cout<<"-------------------------------------------------------------";
}
void juego_Simulacion()
{
    cout<<"------------------------------------------------------------";
    cout<<"                    LA CATEGORIA SIMULACION                 ";
    cout<<"------------------------------------------------------------";
    cout<<"(1)The Sims 4";
    cout<<"(2)Cities: Skylines";
    cout<<"(3)Flight Simulator 2020";
    cout<<"(4)Planet Zoo";
    cout<<"(5)Farming Simulator 22";
    cout<<"(6)Two Point Hospital";
    cout<<"(7)Kerbal Space Program";
    cout<<"(8)RollerCoaster Tycoon Classic";
    cout<<"(9)SimCity 4";
    cout<<"(10)Sega Bass Fishing";
    cout<<"(11)F-22 Interceptor";
    cout<<"(12)Theme Hospital";
    cout<<"-------------------------------------------------------------";
}
void juegos_Estrategia()
{
    cout<<"------------------------------------------------------------";
    cout<<"                  LA CATEGORIA ESTRATEGIA                   ";
    cout<<"------------------------------------------------------------";
    cout<<"(1)Warcraft II: Tides of Darkness";
    cout<<"(2)Herzog Zwei";
    cout<<"(3)Dune II: Battle for Arrakis";
    cout<<"(4)Shining Force";
    cout<<"(5)Phantasy Star II";
    cout<<"(6)Tropico 6";
    cout<<"(7)Command & Conquer Remastered Collection";
    cout<<"(8)Company of Heroes 2";
    cout<<"(9)Warcraft III: Reforged";
    cout<<"(10)XCOM 2";
    cout<<"(11)Civilization VI";
    cout<<"(12)StarCraft II";
    cout<<"-------------------------------------------------------------";
}
void juegos_Casual()
{
    cout<<"------------------------------------------------------------";
    cout<<"                    LA CATEGORIA CASUAL                     ";
    cout<<"------------------------------------------------------------";
    cout<<"(1)Among Us";
    cout<<"(2)Stardew Valley";
    cout<<"(3)Animal Crossing: New Horizons";
    cout<<"(4)Tetris";
    cout<<"(5)Plants vs. Zombies";
    cout<<"(6)Monument Valley";
    cout<<"(7)Crossy Road";
    cout<<"(8)ChuChu Rocket!";
    cout<<"(9)Columns";
    cout<<"(10)Dr. Robotnik's Mean Bean Machine";
    cout<<"(11)Crazy Taxi";
    cout<<"(12)Sonic the Hedgehog";
    cout<<"-------------------------------------------------------------";
}
void juegos_MMO_online()
{
    cout<<"------------------------------------------------------------";
    cout<<"                  LA CATEGORIA MMO ONLINE                   ";
    cout<<"------------------------------------------------------------";
    cout<<"(1)World of Warcraft)";
    cout<<"(2)Final Fantasy XIV";
    cout<<"(3)Guild Wars 2";
    cout<<"(4)The Elder Scrolls Online";
    cout<<"(5)Star Wars: The Old Republic";
    cout<<"(6)Black Desert Online";
    cout<<"(7)EVE Online";
    cout<<"(8)Runescape ";
    cout<<"(9)he Lord of the Rings Online";
    cout<<"(10)Albion Online";
    cout<<"(11)Phantasy Star Online";
    cout<<"(12)Phantasy Star Online 2";
    cout<<"-------------------------------------------------------------";
}