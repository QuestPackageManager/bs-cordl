#pragma once
#include "GlobalNamespace/zzzz__OVRSceneObjectTransformType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSceneObjectTransformType_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneObjectTransformType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRSceneObjectTransformType__Transformation::__OVRSceneObjectTransformType__Transformation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSceneObjectTransformType__Transformation::__OVRSceneObjectTransformType__Transformation() {}
constexpr ::GlobalNamespace::__OVRSceneObjectTransformType__Transformation GlobalNamespace::__OVRSceneObjectTransformType__Transformation::Volume{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRSceneObjectTransformType__Transformation GlobalNamespace::__OVRSceneObjectTransformType__Transformation::Plane{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRSceneObjectTransformType__Transformation GlobalNamespace::__OVRSceneObjectTransformType__Transformation::None{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::OVRSceneObjectTransformType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneObjectTransformType::*)()>(&::GlobalNamespace::OVRSceneObjectTransformType::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2786ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneObjectTransformType*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__OVRSceneObjectTransformType__Transformation& GlobalNamespace::OVRSceneObjectTransformType::__get_TransformType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TransformType;
}
constexpr ::GlobalNamespace::__OVRSceneObjectTransformType__Transformation const& GlobalNamespace::OVRSceneObjectTransformType::__get_TransformType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TransformType;
}
constexpr void GlobalNamespace::OVRSceneObjectTransformType::__set_TransformType(::GlobalNamespace::__OVRSceneObjectTransformType__Transformation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TransformType = value;
}
inline ::GlobalNamespace::OVRSceneObjectTransformType* GlobalNamespace::OVRSceneObjectTransformType::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRSceneObjectTransformType*>());
}
inline void GlobalNamespace::OVRSceneObjectTransformType::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneObjectTransformType*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneObjectTransformType::OVRSceneObjectTransformType() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
