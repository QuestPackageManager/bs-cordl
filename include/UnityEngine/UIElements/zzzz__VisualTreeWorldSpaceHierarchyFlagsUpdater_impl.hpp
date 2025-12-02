#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeWorldSpaceHierarchyFlagsUpdater.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeHierarchyFlagsUpdater_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeWorldSpaceHierarchyFlagsUpdater_def.hpp"
#include "UnityEngine/UIElements/zzzz__VersionChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementFlags_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater.OnVersionChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(&::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater::OnVersionChanged)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6a99a10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater.GetParentMustDirtyFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::UIElements::VisualElementFlags (::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater::*)(::UnityEngine::UIElements::VisualElement*)>(
        &::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater::GetParentMustDirtyFlags)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6a99b48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater*>::get(), "GetParentMustDirtyFlags",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater::*)()>(
    &::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a99b7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater::*)()>(
    &::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6a99b80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater::OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve,
                                                                                                 ::UnityEngine::UIElements::VersionChangeType versionChangeType) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, versionChangeType);
}
inline ::UnityEngine::UIElements::VisualElementFlags UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater::GetParentMustDirtyFlags(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater*>::get(), "GetParentMustDirtyFlags",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElementFlags, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater::Update() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater* UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater::VisualTreeWorldSpaceHierarchyFlagsUpdater() {}
