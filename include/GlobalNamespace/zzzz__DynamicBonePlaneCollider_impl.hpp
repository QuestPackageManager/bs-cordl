#pragma once
#include "GlobalNamespace/zzzz__DynamicBoneColliderBase_impl.hpp"
#include "GlobalNamespace/zzzz__DynamicBonePlaneCollider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DynamicBonePlaneCollider.OnValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBonePlaneCollider::*)()>(&::GlobalNamespace::DynamicBonePlaneCollider::OnValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1334edc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBonePlaneCollider*>::get(),
                                                                               "OnValidate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBonePlaneCollider.Collide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBonePlaneCollider::*)(ByRef<::UnityEngine::Vector3>, float_t)>(
    &::GlobalNamespace::DynamicBonePlaneCollider::Collide)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x1334ee0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBonePlaneCollider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBonePlaneCollider*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBonePlaneCollider.OnDrawGizmosSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBonePlaneCollider::*)()>(
    &::GlobalNamespace::DynamicBonePlaneCollider::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1335068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBonePlaneCollider*>::get(),
                                                                               "OnDrawGizmosSelected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBonePlaneCollider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBonePlaneCollider::*)()>(&::GlobalNamespace::DynamicBonePlaneCollider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x13351c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBonePlaneCollider*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DynamicBonePlaneCollider::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBonePlaneCollider*>::get(), "OnValidate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DynamicBonePlaneCollider::Collide(ByRef<::UnityEngine::Vector3> particlePosition, float_t particleRadius) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBonePlaneCollider*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particlePosition, particleRadius);
}
inline void GlobalNamespace::DynamicBonePlaneCollider::OnDrawGizmosSelected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBonePlaneCollider*>::get(),
                                                                             "OnDrawGizmosSelected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DynamicBonePlaneCollider* GlobalNamespace::DynamicBonePlaneCollider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DynamicBonePlaneCollider*>());
}
inline void GlobalNamespace::DynamicBonePlaneCollider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBonePlaneCollider*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DynamicBonePlaneCollider::DynamicBonePlaneCollider() {}
