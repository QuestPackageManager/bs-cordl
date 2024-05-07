#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_Result.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Result_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_Result::HAPI_Result(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_Result::HAPI_Result() {}
constexpr ::HoudiniEngineUnity::HAPI_Result HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_SUCCESS{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_Result HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_FAILURE{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_Result HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_ALREADY_INITIALIZED{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_Result HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_NOT_INITIALIZED{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HAPI_Result HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_CANT_LOADFILE{ static_cast<int32_t>(0x4) };
constexpr ::HoudiniEngineUnity::HAPI_Result HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_PARM_SET_FAILED{ static_cast<int32_t>(0x5) };
constexpr ::HoudiniEngineUnity::HAPI_Result HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_INVALID_ARGUMENT{ static_cast<int32_t>(0x6) };
constexpr ::HoudiniEngineUnity::HAPI_Result HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_CANT_LOAD_GEO{ static_cast<int32_t>(0x7) };
constexpr ::HoudiniEngineUnity::HAPI_Result HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_CANT_GENERATE_PRESET{ static_cast<int32_t>(0x8) };
constexpr ::HoudiniEngineUnity::HAPI_Result HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_CANT_LOAD_PRESET{ static_cast<int32_t>(0x9) };
constexpr ::HoudiniEngineUnity::HAPI_Result HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_ASSET_DEF_ALREADY_LOADED{ static_cast<int32_t>(0xa) };
constexpr ::HoudiniEngineUnity::HAPI_Result HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_NO_LICENSE_FOUND{ static_cast<int32_t>(0x6e) };
constexpr ::HoudiniEngineUnity::HAPI_Result HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_DISALLOWED_NC_LICENSE_FOUND{ static_cast<int32_t>(0x78) };
constexpr ::HoudiniEngineUnity::HAPI_Result HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_C_LICENSE{ static_cast<int32_t>(0x82) };
constexpr ::HoudiniEngineUnity::HAPI_Result HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_LC_LICENSE{ static_cast<int32_t>(0x8c) };
constexpr ::HoudiniEngineUnity::HAPI_Result HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_DISALLOWED_LC_ASSET_WITH_C_LICENSE{ static_cast<int32_t>(0x96) };
constexpr ::HoudiniEngineUnity::HAPI_Result HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_DISALLOWED_HENGINEINDIE_W_3PARTY_PLUGIN{ static_cast<int32_t>(0xa0) };
constexpr ::HoudiniEngineUnity::HAPI_Result HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_ASSET_INVALID{ static_cast<int32_t>(0xc8) };
constexpr ::HoudiniEngineUnity::HAPI_Result HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_NODE_INVALID{ static_cast<int32_t>(0xd2) };
constexpr ::HoudiniEngineUnity::HAPI_Result HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_USER_INTERRUPTED{ static_cast<int32_t>(0x12c) };
constexpr ::HoudiniEngineUnity::HAPI_Result HoudiniEngineUnity::HAPI_Result::HAPI_RESULT_INVALID_SESSION{ static_cast<int32_t>(0x190) };
