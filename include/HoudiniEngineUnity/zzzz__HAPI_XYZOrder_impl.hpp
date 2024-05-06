#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_XYZOrder.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_XYZOrder_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_XYZOrder::HAPI_XYZOrder(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_XYZOrder::HAPI_XYZOrder() {}
constexpr ::HoudiniEngineUnity::HAPI_XYZOrder HoudiniEngineUnity::HAPI_XYZOrder::HAPI_XYZ{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_XYZOrder HoudiniEngineUnity::HAPI_XYZOrder::HAPI_XZY{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_XYZOrder HoudiniEngineUnity::HAPI_XYZOrder::HAPI_YXZ{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_XYZOrder HoudiniEngineUnity::HAPI_XYZOrder::HAPI_YZX{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HAPI_XYZOrder HoudiniEngineUnity::HAPI_XYZOrder::HAPI_ZXY{ static_cast<int32_t>(0x4) };
constexpr ::HoudiniEngineUnity::HAPI_XYZOrder HoudiniEngineUnity::HAPI_XYZOrder::HAPI_ZYX{ static_cast<int32_t>(0x5) };
constexpr ::HoudiniEngineUnity::HAPI_XYZOrder HoudiniEngineUnity::HAPI_XYZOrder::HAPI_XYZORDER_DEFAULT{ static_cast<int32_t>(0x0) };
