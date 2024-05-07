#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_RSTOrder.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_RSTOrder_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_RSTOrder::HAPI_RSTOrder(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_RSTOrder::HAPI_RSTOrder() {}
constexpr ::HoudiniEngineUnity::HAPI_RSTOrder HoudiniEngineUnity::HAPI_RSTOrder::HAPI_TRS{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_RSTOrder HoudiniEngineUnity::HAPI_RSTOrder::HAPI_TSR{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_RSTOrder HoudiniEngineUnity::HAPI_RSTOrder::HAPI_RTS{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_RSTOrder HoudiniEngineUnity::HAPI_RSTOrder::HAPI_RST{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HAPI_RSTOrder HoudiniEngineUnity::HAPI_RSTOrder::HAPI_STR{ static_cast<int32_t>(0x4) };
constexpr ::HoudiniEngineUnity::HAPI_RSTOrder HoudiniEngineUnity::HAPI_RSTOrder::HAPI_SRT{ static_cast<int32_t>(0x5) };
constexpr ::HoudiniEngineUnity::HAPI_RSTOrder HoudiniEngineUnity::HAPI_RSTOrder::HAPI_RSTORDER_DEFAULT{ static_cast<int32_t>(0x5) };
