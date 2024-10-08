#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_Keyframe.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Keyframe_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HAPI_Keyframe._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HAPI_Keyframe::*)(float_t, float_t, float_t, float_t)>(
    &::HoudiniEngineUnity::HAPI_Keyframe::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39dea1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HAPI_Keyframe>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void HoudiniEngineUnity::HAPI_Keyframe::_ctor(float_t t, float_t v, float_t in_tangent, float_t out_tangent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HAPI_Keyframe>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t, v, in_tangent, out_tangent);
}
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "inTangent", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "outTangent", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_Keyframe::HAPI_Keyframe(float_t time, float_t value, float_t inTangent, float_t outTangent) noexcept {
  this->time = time;
  this->value = value;
  this->inTangent = inTangent;
  this->outTangent = outTangent;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_Keyframe::HAPI_Keyframe() {}
