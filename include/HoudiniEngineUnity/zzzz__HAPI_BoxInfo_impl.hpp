#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_BoxInfo.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_BoxInfo_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HAPI_BoxInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HAPI_BoxInfo::*)(bool)>(&::HoudiniEngineUnity::HAPI_BoxInfo::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3a4dce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HAPI_BoxInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void HoudiniEngineUnity::HAPI_BoxInfo::_ctor(bool initialize_fields) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HAPI_BoxInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialize_fields);
}
// Ctor Parameters [CppParam { name: "center", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "size", ty: "::ArrayW<float_t,::Array<float_t>*>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_BoxInfo::HAPI_BoxInfo(::ArrayW<float_t, ::Array<float_t>*> center, ::ArrayW<float_t, ::Array<float_t>*> size,
                                                           ::ArrayW<float_t, ::Array<float_t>*> rotation) noexcept {
  this->center = center;
  this->size = size;
  this->rotation = rotation;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_BoxInfo::HAPI_BoxInfo() {}
