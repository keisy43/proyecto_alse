#include "datosu.h"

datosu::datosu()
{

}

string datosu::nombre() const
{
    return _nombre;
}

void datosu::setNombre(const string &nombre)
{
    _nombre = nombre;
}

string datosu::apellido() const
{
    return _apellido;
}

void datosu::setApellido(const string &apellido)
{
    _apellido = apellido;
}

float datosu::docident() const
{
    return _docident;
}

void datosu::setDocident(float docident)
{
    _docident = docident;
}

string datosu::getDireccion() const
{
    return direccion;
}

void datosu::setDireccion(const string &value)
{
    direccion = value;
}

string datosu::getFechan() const
{
    return _fechan;
}

void datosu::setFechan(const string &fechan)
{
    _fechan = fechan;
}

string datosu::getUser() const
{
    return user;
}

void datosu::setUser(const string &value)
{
    user = value;
}

string datosu::getContra() const
{
    return _contra;
}

void datosu::setContra(const string &contra)
{
    _contra = contra;
}
