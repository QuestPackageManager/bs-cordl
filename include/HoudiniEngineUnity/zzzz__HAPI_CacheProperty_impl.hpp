#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_CacheProperty_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_CacheProperty::HAPI_CacheProperty(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_CacheProperty::HAPI_CacheProperty() {}
constexpr ::HoudiniEngineUnity::HAPI_CacheProperty HoudiniEngineUnity::HAPI_CacheProperty::HAPI_CACHEPROP_CURRENT{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_CacheProperty HoudiniEngineUnity::HAPI_CacheProperty::HAPI_CACHEPROP_HAS_MIN{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_CacheProperty HoudiniEngineUnity::HAPI_CacheProperty::HAPI_CACHEPROP_MIN{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_CacheProperty HoudiniEngineUnity::HAPI_CacheProperty::HAPI_CACHEPROP_HAS_MAX{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HAPI_CacheProperty HoudiniEngineUnity::HAPI_CacheProperty::HAPI_CACHEPROP_MAX{ static_cast<int32_t>(0x4) };
constexpr ::HoudiniEngineUnity::HAPI_CacheProperty HoudiniEngineUnity::HAPI_CacheProperty::HAPI_CACHEPROP_CULL_LEVEL{ static_cast<int32_t>(0x5) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
