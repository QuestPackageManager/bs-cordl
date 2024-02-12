#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPointerVisualizer_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRPointerVisualizer.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPointerVisualizer::*)()>(&::GlobalNamespace::OVRPointerVisualizer::Update)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x279d038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPointerVisualizer*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPointerVisualizer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPointerVisualizer::*)()>(&::GlobalNamespace::OVRPointerVisualizer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x279d1d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPointerVisualizer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OVRPointerVisualizer::__cordl_internal_get_rayTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rayTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OVRPointerVisualizer::__cordl_internal_get_rayTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rayTransform;
}
constexpr void GlobalNamespace::OVRPointerVisualizer::__cordl_internal_set_rayTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rayTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::LineRenderer>& GlobalNamespace::OVRPointerVisualizer::__cordl_internal_get_linePointer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linePointer;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& GlobalNamespace::OVRPointerVisualizer::__cordl_internal_get_linePointer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linePointer;
}
constexpr void GlobalNamespace::OVRPointerVisualizer::__cordl_internal_set_linePointer(::UnityW<::UnityEngine::LineRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___linePointer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::OVRPointerVisualizer::__cordl_internal_get_rayDrawDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rayDrawDistance;
}
constexpr float_t const& GlobalNamespace::OVRPointerVisualizer::__cordl_internal_get_rayDrawDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rayDrawDistance;
}
constexpr void GlobalNamespace::OVRPointerVisualizer::__cordl_internal_set_rayDrawDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rayDrawDistance = value;
}
inline void GlobalNamespace::OVRPointerVisualizer::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPointerVisualizer*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPointerVisualizer* GlobalNamespace::OVRPointerVisualizer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRPointerVisualizer*>());
}
inline void GlobalNamespace::OVRPointerVisualizer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPointerVisualizer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPointerVisualizer::OVRPointerVisualizer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
