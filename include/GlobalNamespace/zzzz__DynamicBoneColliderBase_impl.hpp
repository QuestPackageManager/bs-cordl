#pragma once
#include "GlobalNamespace/zzzz__DynamicBoneColliderBase_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__DynamicBoneColliderBase_def.hpp"
#include "GlobalNamespace/zzzz__DynamicBoneColliderBase_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Direction::__DynamicBoneColliderBase__Direction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Direction::__DynamicBoneColliderBase__Direction() {}
constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Direction GlobalNamespace::__DynamicBoneColliderBase__Direction::X{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Direction GlobalNamespace::__DynamicBoneColliderBase__Direction::Y{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Direction GlobalNamespace::__DynamicBoneColliderBase__Direction::Z{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Bound::__DynamicBoneColliderBase__Bound(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Bound::__DynamicBoneColliderBase__Bound() {}
constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Bound GlobalNamespace::__DynamicBoneColliderBase__Bound::Outside{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Bound GlobalNamespace::__DynamicBoneColliderBase__Bound::Inside{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::DynamicBoneColliderBase.Collide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBoneColliderBase::*)(ByRef<::UnityEngine::Vector3>, float_t)>(
    &::GlobalNamespace::DynamicBoneColliderBase::Collide)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x12cb994;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBoneColliderBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBoneColliderBase*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBoneColliderBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBoneColliderBase::*)()>(&::GlobalNamespace::DynamicBoneColliderBase::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x12cb930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBoneColliderBase*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Direction& GlobalNamespace::DynamicBoneColliderBase::__cordl_internal_get_m_Direction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Direction;
}
constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Direction const& GlobalNamespace::DynamicBoneColliderBase::__cordl_internal_get_m_Direction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Direction;
}
constexpr void GlobalNamespace::DynamicBoneColliderBase::__cordl_internal_set_m_Direction(::GlobalNamespace::__DynamicBoneColliderBase__Direction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Direction = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::DynamicBoneColliderBase::__cordl_internal_get_m_Center() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Center;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::DynamicBoneColliderBase::__cordl_internal_get_m_Center() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Center;
}
constexpr void GlobalNamespace::DynamicBoneColliderBase::__cordl_internal_set_m_Center(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Center = value;
}
constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Bound& GlobalNamespace::DynamicBoneColliderBase::__cordl_internal_get_m_Bound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Bound;
}
constexpr ::GlobalNamespace::__DynamicBoneColliderBase__Bound const& GlobalNamespace::DynamicBoneColliderBase::__cordl_internal_get_m_Bound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Bound;
}
constexpr void GlobalNamespace::DynamicBoneColliderBase::__cordl_internal_set_m_Bound(::GlobalNamespace::__DynamicBoneColliderBase__Bound value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Bound = value;
}
inline void GlobalNamespace::DynamicBoneColliderBase::Collide(ByRef<::UnityEngine::Vector3> particlePosition, float_t particleRadius) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBoneColliderBase*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particlePosition, particleRadius);
}
inline ::GlobalNamespace::DynamicBoneColliderBase* GlobalNamespace::DynamicBoneColliderBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DynamicBoneColliderBase*>());
}
inline void GlobalNamespace::DynamicBoneColliderBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBoneColliderBase*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DynamicBoneColliderBase::DynamicBoneColliderBase() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
