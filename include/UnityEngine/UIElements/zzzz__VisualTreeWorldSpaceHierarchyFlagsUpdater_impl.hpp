#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\VisualTreeWorldSpaceHierarchyFlagsUpdater.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeHierarchyFlagsUpdater_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeWorldSpaceHierarchyFlagsUpdater_def.hpp"
#include "UnityEngine/UIElements/zzzz__VersionChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementFlags_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater.OnVersionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(&::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater::OnVersionChanged)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6cce154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater.GetParentMustDirtyFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElementFlags (::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater::*)(
    ::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater::GetParentMustDirtyFlags)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6cce28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater*>(),
                                                                                           { "GetParentMustDirtyFlags", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater::*)()>(
    &::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cce2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater::*)()>(
    &::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6cce2c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater::OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve,
                                                                                                 ::UnityEngine::UIElements::VersionChangeType versionChangeType) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, versionChangeType);
}
inline ::UnityEngine::UIElements::VisualElementFlags UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater::GetParentMustDirtyFlags(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater*>(),
                                                                                         { "GetParentMustDirtyFlags", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElementFlags>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater::Update() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater* UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeWorldSpaceHierarchyFlagsUpdater::VisualTreeWorldSpaceHierarchyFlagsUpdater() {}
