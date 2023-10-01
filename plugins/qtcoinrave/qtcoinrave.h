// Copyright (C) 2006-2008 Carnegie Mellon University (rdiankov@cs.cmu.edu)
//
// This program is free software: you can redistribute it and/or modify
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
#ifndef OPENRAVE_PLUGIN_QTCOINRAVE_H
#define OPENRAVE_PLUGIN_QTCOINRAVE_H

#include <openrave/plugin.h>

struct QtCoinRavePlugin : public RavePlugin {
    QtCoinRavePlugin();
    ~QtCoinRavePlugin() override;

    void Destroy() override;
    OpenRAVE::InterfaceBasePtr CreateInterface(OpenRAVE::InterfaceType type, const std::string& interfacename, std::istream& sinput, OpenRAVE::EnvironmentBasePtr penv) override;
    const InterfaceMap& GetInterfaces() const override;
    const std::string& GetPluginName() const override;

private:
    InterfaceMap _interfaces;
};

#endif // OPENRAVE_PLUGIN_QTCOINRAVE_H