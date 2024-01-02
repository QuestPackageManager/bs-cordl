#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_RSTOrder_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_XYZOrder_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_TransformEuler_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_XYZOrder_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_RSTOrder_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HAPI_TransformEuler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HAPI_TransformEuler::*)(bool)>(&::HoudiniEngineUnity::HAPI_TransformEuler::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2188610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HAPI_TransformEuler>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HAPI_TransformEuler.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HAPI_TransformEuler::*)()>(&::HoudiniEngineUnity::HAPI_TransformEuler::Init)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2191ab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HAPI_TransformEuler>::get(), "Init",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void HoudiniEngineUnity::HAPI_TransformEuler::_ctor(bool initializeFields) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HAPI_TransformEuler>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initializeFields);
}
inline void HoudiniEngineUnity::HAPI_TransformEuler::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HAPI_TransformEuler>::get(), "Init",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "position", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "rotationEuler", ty:
// "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "scale", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "shear", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "rotationOrder", ty: "::HoudiniEngineUnity::HAPI_XYZOrder",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "rstOrder", ty: "::HoudiniEngineUnity::HAPI_RSTOrder", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_TransformEuler::HAPI_TransformEuler(::ArrayW<float_t, ::Array<float_t>*> position, ::ArrayW<float_t, ::Array<float_t>*> rotationEuler,
                                                                         ::ArrayW<float_t, ::Array<float_t>*> scale, ::ArrayW<float_t, ::Array<float_t>*> shear,
                                                                         ::HoudiniEngineUnity::HAPI_XYZOrder rotationOrder, ::HoudiniEngineUnity::HAPI_RSTOrder rstOrder) noexcept {
  this->position = position;
  this->rotationEuler = rotationEuler;
  this->scale = scale;
  this->shear = shear;
  this->rotationOrder = rotationOrder;
  this->rstOrder = rstOrder;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_TransformEuler::HAPI_TransformEuler() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
