#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_SphereInfo.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_SphereInfo_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HAPI_SphereInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HAPI_SphereInfo::*)(bool)>(&::HoudiniEngineUnity::HAPI_SphereInfo::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x39dea98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HAPI_SphereInfo>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void HoudiniEngineUnity::HAPI_SphereInfo::_ctor(bool initialize_fields) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HAPI_SphereInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialize_fields);
}
// Ctor Parameters [CppParam { name: "center", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "radius", ty: "float_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_SphereInfo::HAPI_SphereInfo(::ArrayW<float_t, ::Array<float_t>*> center, float_t radius) noexcept {
  this->center = center;
  this->radius = radius;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_SphereInfo::HAPI_SphereInfo() {}
