// -*- coding: utf-8 -*-
// Copyright (C) 2023
//
// This file is part of OpenRAVE.
// OpenRAVE is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
#include <openrave/units.h>
#include <cstring>

namespace OpenRAVE {

const char* GetLengthUnitString(LengthUnit unit)
{
    switch(unit) {
    case LU_Meter: return "m";
    case LU_Millimeter: return "mm";
    case LU_Micrometer: return "um";
    case LU_Nanometer: return "nm";
    case LU_Centimeter: return "cm";
    case LU_Decimeter: return "dm";
    case LU_Inch: return "in";
    case LU_Foot: return "ft";
    case LU_DeciMillimeter: return "dmm";
    }
    return "(unknown)";
}

LengthUnit GetLengthUnitFromString(const char* pLengthUnit, LengthUnit defaultLengthUnit)
{
    if( pLengthUnit[0] == 0 ) {
        return defaultLengthUnit;
    }
    if( strcmp(pLengthUnit, "m") == 0 ) {
        return LU_Meter;
    }
    if( strcmp(pLengthUnit, "mm") == 0 ) {
        return LU_Millimeter;
    }
    if( strcmp(pLengthUnit, "um") == 0 ) {
        return LU_Micrometer;
    }
    if( strcmp(pLengthUnit, "nm") == 0 ) {
        return LU_Nanometer;
    }
    if( strcmp(pLengthUnit, "meter") == 0 ) { // rare so do later
        return LU_Meter;
    }
    if( strcmp(pLengthUnit, "cm") == 0 ) {
        return LU_Centimeter;
    }
    if( strcmp(pLengthUnit, "dm") == 0 ) {
        return LU_Decimeter;
    }
    if( strcmp(pLengthUnit, "in") == 0 || strcmp(pLengthUnit, "inch") == 0 ) {
        return LU_Inch;
    }
    if( strcmp(pLengthUnit, "ft") == 0 || strcmp(pLengthUnit, "foot") == 0 || strcmp(pLengthUnit, "feet") == 0 ) {
        return LU_Foot;
    }
    if( strcmp(pLengthUnit, "dmm") == 0 ) {
        return LU_DeciMillimeter;
    }
    if( strcmp(pLengthUnit, "millimeter") == 0 ) {
        return LU_Millimeter;
    }
    if( strcmp(pLengthUnit, "micrometer") == 0 ) {
        return LU_Micrometer;
    }
    throw OpenRAVEException(str(boost::format("Do not support LengthUnit '%s'")%pLengthUnit), ORE_LengthUnitInvalid);
}

LengthUnit GetLengthUnitFromString(const std::string& pLengthUnit, LengthUnit defaultLengthUnit)
{
    return GetLengthUnitFromString(pLengthUnit.c_str(), defaultLengthUnit);
}

const char* GetMassUnitString(MassUnit unit)
{
    switch(unit) {
    case MU_Gram: return "g";
    case MU_Milligram: return "mg";
    case MU_Kilogram: return "kg";
    case MU_Pound: return "lb";
    }
    return "(unknown)";
}

MassUnit GetMassUnitFromString(const char* pMassUnit, MassUnit defaultMassUnit)
{
    if( pMassUnit[0] == 0 ) {
        return defaultMassUnit;
    }
    if( strcmp(pMassUnit, "g") == 0 ) {
        return MU_Gram;
    }
    if( strcmp(pMassUnit, "mg") == 0 ) {
        return MU_Milligram;
    }
    if( strcmp(pMassUnit, "kg") == 0 ) {
        return MU_Kilogram;
    }
    if( strcmp(pMassUnit, "lb") == 0 ) {
        return MU_Pound;
    }
    throw OpenRAVEException(str(boost::format("Do not support MassUnit '%s'")%pMassUnit), ORE_MassUnitInvalid);
}

MassUnit GetMassUnitFromString(const std::string& pMassUnit, MassUnit defaultMassUnit)
{
    return GetMassUnitFromString(pMassUnit.c_str(), defaultMassUnit);
}

const char* GetTimeUnitString(TimeUnit unit)
{
    switch(unit) {
    case TU_Second: return "s";
    case TU_Millisecond: return "ms";
    case TU_Microsecond: return "us";
    case TU_Nanosecond: return "ns";
    case TU_Picosecond: return "ps";
    }
    return "(unknown)";
}

TimeUnit GetTimeUnitFromString(const char* pTimeUnit, TimeUnit defaultTimeUnit)
{
    if( pTimeUnit[0] == 0 ) {
        return defaultTimeUnit;
    }
    if( strcmp(pTimeUnit, "s") == 0 ) {
        return TU_Second;
    }
    if( strcmp(pTimeUnit, "ms") == 0 ) {
        return TU_Millisecond;
    }
    if( strcmp(pTimeUnit, "us") == 0 ) {
        return TU_Microsecond;
    }
    if( strcmp(pTimeUnit, "ns") == 0 ) {
        return TU_Nanosecond;
    }
    if( strcmp(pTimeUnit, "ps") == 0 ) {
        return TU_Picosecond;
    }
    throw OpenRAVEException(str(boost::format("Do not support TimeUnit '%s'")%pTimeUnit), ORE_TimeUnitInvalid);
}

TimeUnit GetTimeUnitFromString(const std::string& pTimeUnit, TimeUnit defaultTimeUnit)
{
    return GetTimeUnitFromString(pTimeUnit.c_str(), defaultTimeUnit);
}

const char* GetAngleUnitString(AngleUnit unit)
{
    switch(unit) {
    case AU_Radian: return "rad";
    case AU_Degree: return "deg";
    }
    return "(unknown)";
}

AngleUnit GetAngleUnitFromString(const char* pAngleUnit, AngleUnit defaultAngleUnit)
{
    if( pAngleUnit[0] == 0 ) {
        return defaultAngleUnit;
    }
    if( strcmp(pAngleUnit, "rad") == 0 ) {
        return AU_Radian;
    }
    if( strcmp(pAngleUnit, "deg") == 0 ) {
        return AU_Degree;
    }
    throw OpenRAVEException(str(boost::format("Do not support AngleUnit '%s'")%pAngleUnit), ORE_AngleUnitInvalid);
}

AngleUnit GetAngleUnitFromString(const std::string& pAngleUnit, AngleUnit defaultAngleUnit)
{
    return GetAngleUnitFromString(pAngleUnit.c_str(), defaultAngleUnit);
}

} // end namespace OpenRAVE
