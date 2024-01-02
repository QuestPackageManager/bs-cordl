#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HEU_BoundingVolume_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HEU_BoundingVolume.get_BoundingCollider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Collider* (::GlobalNamespace::HEU_BoundingVolume::*)()>(
    &::GlobalNamespace::HEU_BoundingVolume::get_BoundingCollider)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x214ac6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_BoundingVolume*>::get(),
                                                                               "get_BoundingCollider", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HEU_BoundingVolume.GetAllIntersectingObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* (::GlobalNamespace::HEU_BoundingVolume::*)()>(
    &::GlobalNamespace::HEU_BoundingVolume::GetAllIntersectingObjects)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x214acb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_BoundingVolume*>::get(),
                                                                               "GetAllIntersectingObjects", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HEU_BoundingVolume._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HEU_BoundingVolume::*)()>(&::GlobalNamespace::HEU_BoundingVolume::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x214af68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_BoundingVolume*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::Collider* GlobalNamespace::HEU_BoundingVolume::get_BoundingCollider() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_BoundingVolume*>::get(),
                                                                             "get_BoundingCollider", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Collider*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GlobalNamespace::HEU_BoundingVolume::GetAllIntersectingObjects() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_BoundingVolume*>::get(),
                                                                             "GetAllIntersectingObjects", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::HEU_BoundingVolume* GlobalNamespace::HEU_BoundingVolume::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::HEU_BoundingVolume*>());
}
inline void GlobalNamespace::HEU_BoundingVolume::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_BoundingVolume*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HEU_BoundingVolume::HEU_BoundingVolume() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
