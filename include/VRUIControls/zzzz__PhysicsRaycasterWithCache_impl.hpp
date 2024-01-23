#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Ray_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "VRUIControls/zzzz__PhysicsRaycasterWithCache_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "VRUIControls/zzzz__PhysicsRaycasterWithCache_def.hpp"
//  Writing Method size for method: ::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast::*)(
    bool, ::UnityEngine::Ray, ::UnityEngine::RaycastHit, float_t, int32_t)>(&::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2eb4adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast::_ctor(bool wasHit, ::UnityEngine::Ray ray, ::UnityEngine::RaycastHit hitInfo, float_t maxDistance, int32_t layerMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, wasHit, ray, hitInfo, maxDistance, layerMask);
}
// Ctor Parameters [CppParam { name: "wasHit", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "ray", ty: "::UnityEngine::Ray", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "hitInfo", ty: "::UnityEngine::RaycastHit", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "layerMask", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast::__PhysicsRaycasterWithCache__CachedRaycast(bool wasHit, ::UnityEngine::Ray ray, ::UnityEngine::RaycastHit hitInfo,
                                                                                                                 float_t maxDistance, int32_t layerMask) noexcept {
  this->wasHit = wasHit;
  this->ray = ray;
  this->hitInfo = hitInfo;
  this->maxDistance = maxDistance;
  this->layerMask = layerMask;
}
// Ctor Parameters []
constexpr ::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast::__PhysicsRaycasterWithCache__CachedRaycast() {}
//  Writing Method size for method: ::VRUIControls::PhysicsRaycasterWithCache.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::VRUIControls::PhysicsRaycasterWithCache::*)(::UnityEngine::Ray, ByRef<::UnityEngine::RaycastHit>, float_t, int32_t)>(&::VRUIControls::PhysicsRaycasterWithCache::Raycast)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x2eb4570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::PhysicsRaycasterWithCache*>::get(), "Raycast", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::RaycastHit>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::PhysicsRaycasterWithCache._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::PhysicsRaycasterWithCache::*)()>(&::VRUIControls::PhysicsRaycasterWithCache::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2eb4b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::PhysicsRaycasterWithCache*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast>*& VRUIControls::PhysicsRaycasterWithCache::__cordl_internal_get__cachedRaycasts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedRaycasts;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast>*> const&
VRUIControls::PhysicsRaycasterWithCache::__cordl_internal_get__cachedRaycasts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedRaycasts;
}
constexpr void
VRUIControls::PhysicsRaycasterWithCache::__cordl_internal_set__cachedRaycasts(::System::Collections::Generic::List_1<::VRUIControls::__PhysicsRaycasterWithCache__CachedRaycast>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cachedRaycasts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VRUIControls::PhysicsRaycasterWithCache::__cordl_internal_get__lastFrameCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastFrameCount;
}
constexpr int32_t const& VRUIControls::PhysicsRaycasterWithCache::__cordl_internal_get__lastFrameCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastFrameCount;
}
constexpr void VRUIControls::PhysicsRaycasterWithCache::__cordl_internal_set__lastFrameCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastFrameCount = value;
}
inline bool VRUIControls::PhysicsRaycasterWithCache::Raycast(::UnityEngine::Ray ray, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::PhysicsRaycasterWithCache*>::get(), "Raycast", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::RaycastHit>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ray, hitInfo, maxDistance, layerMask);
}
inline ::VRUIControls::PhysicsRaycasterWithCache* VRUIControls::PhysicsRaycasterWithCache::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VRUIControls::PhysicsRaycasterWithCache*>());
}
inline void VRUIControls::PhysicsRaycasterWithCache::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::PhysicsRaycasterWithCache*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::VRUIControls::PhysicsRaycasterWithCache::PhysicsRaycasterWithCache() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
