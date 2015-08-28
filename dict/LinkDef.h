#ifdef __CINT__
#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;
#pragma link C++ nestedclass;
#pragma link C++ nestedclasses;

#pragma link C++ namespace WireCell;

// util

#pragma link C++ class WireCell::Interface-!;
#pragma link C++ class WireCell::IFactory-!;
#pragma link C++ class WireCell::INamedFactory-!;

#pragma link C++ class WireCell::BoundingBox-!;
#pragma link C++ class WireCell::Point-!;
#pragma link C++ class WireCell::Vector-!;
#pragma link C++ class WireCell::Ray-!;

#pragma link C++ namespace units;
#pragma link C++ defined_in namespace units;
#pragma link C++ global units::*;

// iface

#pragma link C++ class WireCell::IWire-!;
#pragma link C++ class WireCell::IWire::pointer-!;
#pragma link C++ class WireCell::IWireVector-!;
#pragma link C++ class WireCell::ICell-!;
#pragma link C++ class WireCell::ICell::pointer-!;
#pragma link C++ class WireCell::ICellVector-!;
#pragma link C++ class WireCell::IBlob-!;
#pragma link C++ class WireCell::IDepo-!;
#pragma link C++ class WireCell::IDepo::pointer-!;
#pragma link C++ class WireCell::IFrame-!;
#pragma link C++ class WireCell::ITiling-!;
#pragma link C++ class WireCell::IWireSummary-!;
#pragma link C++ class WireCell::IWireParameters-!;
#pragma link C++ class WireCell::IWireParameters::pointer-!;
#pragma link C++ class WireCell::IGeometry-!;
#pragma link C++ class WireCell::IChannelSlice-!;
#pragma link C++ class WireCell::IPlaneSlice-!;
#pragma link C++ class WireCell::IConfigurable-!;
#pragma link C++ class WireCell::WirePlaneId-!;

#endif
