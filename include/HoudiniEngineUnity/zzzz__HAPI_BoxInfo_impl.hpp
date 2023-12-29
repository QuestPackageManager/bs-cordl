#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_BoxInfo_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HAPI_BoxInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HAPI_BoxInfo::*)(bool)>(&::HoudiniEngineUnity::HAPI_BoxInfo::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x203b514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HAPI_BoxInfo>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void HoudiniEngineUnity::HAPI_BoxInfo::_ctor(bool initialize_fields) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HAPI_BoxInfo>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialize_fields);
}
// Ctor Parameters [CppParam { name: "center", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "size", ty:
// "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "rotation", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: Some("nullptr")
// }]
constexpr ::HoudiniEngineUnity::HAPI_BoxInfo::HAPI_BoxInfo(::ArrayW<float_t, ::Array<float_t>*> center, ::ArrayW<float_t, ::Array<float_t>*> size,
                                                           ::ArrayW<float_t, ::Array<float_t>*> rotation) noexcept {
  this->center = center;
  this->size = size;
  this->rotation = rotation;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_BoxInfo::HAPI_BoxInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
