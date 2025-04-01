#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneObjectTransformType.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSceneObjectTransformType_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneObjectTransformType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSceneObjectTransformType_Transformation::OVRSceneObjectTransformType_Transformation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneObjectTransformType_Transformation::OVRSceneObjectTransformType_Transformation() {}
constexpr ::GlobalNamespace::OVRSceneObjectTransformType_Transformation GlobalNamespace::OVRSceneObjectTransformType_Transformation::Volume{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRSceneObjectTransformType_Transformation GlobalNamespace::OVRSceneObjectTransformType_Transformation::Plane{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OVRSceneObjectTransformType_Transformation GlobalNamespace::OVRSceneObjectTransformType_Transformation::None{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::OVRSceneObjectTransformType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneObjectTransformType::*)()>(&::GlobalNamespace::OVRSceneObjectTransformType::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4009ac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneObjectTransformType*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRSceneObjectTransformType_Transformation& GlobalNamespace::OVRSceneObjectTransformType::__cordl_internal_get_TransformType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TransformType;
}
constexpr ::GlobalNamespace::OVRSceneObjectTransformType_Transformation const& GlobalNamespace::OVRSceneObjectTransformType::__cordl_internal_get_TransformType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TransformType;
}
constexpr void GlobalNamespace::OVRSceneObjectTransformType::__cordl_internal_set_TransformType(::GlobalNamespace::OVRSceneObjectTransformType_Transformation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TransformType = value;
}
inline void GlobalNamespace::OVRSceneObjectTransformType::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneObjectTransformType*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSceneObjectTransformType* GlobalNamespace::OVRSceneObjectTransformType::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRSceneObjectTransformType*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneObjectTransformType::OVRSceneObjectTransformType() {}
