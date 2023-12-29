#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_RSTOrder_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_RSTOrder_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HAPI_Transform._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HAPI_Transform::*)(bool)>(&::HoudiniEngineUnity::HAPI_Transform::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2031ff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HAPI_Transform>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HAPI_Transform.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HAPI_Transform::*)()>(&::HoudiniEngineUnity::HAPI_Transform::Init)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x203b034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HAPI_Transform>::get(), "Init",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void HoudiniEngineUnity::HAPI_Transform::_ctor(bool initializeFields) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HAPI_Transform>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initializeFields);
}
inline void HoudiniEngineUnity::HAPI_Transform::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HAPI_Transform>::get(), "Init",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "position", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "rotationQuaternion", ty:
// "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "scale", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "shear", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "rstOrder", ty: "::HoudiniEngineUnity::HAPI_RSTOrder", modifiers:
// "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_Transform::HAPI_Transform(::ArrayW<float_t, ::Array<float_t>*> position, ::ArrayW<float_t, ::Array<float_t>*> rotationQuaternion,
                                                               ::ArrayW<float_t, ::Array<float_t>*> scale, ::ArrayW<float_t, ::Array<float_t>*> shear,
                                                               ::HoudiniEngineUnity::HAPI_RSTOrder rstOrder) noexcept {
  this->position = position;
  this->rotationQuaternion = rotationQuaternion;
  this->scale = scale;
  this->shear = shear;
  this->rstOrder = rstOrder;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_Transform::HAPI_Transform() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
