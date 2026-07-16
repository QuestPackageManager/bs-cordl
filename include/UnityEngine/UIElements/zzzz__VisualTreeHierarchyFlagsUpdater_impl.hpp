#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeHierarchyFlagsUpdater.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeHierarchyFlagsUpdater_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__VersionChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementFlags_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater.get_profilerMarker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::ProfilerMarker (::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::*)()>(
    &::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::get_profilerMarker)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6cca7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater.OnVersionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(&::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::OnVersionChanged)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6cca844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater.GetChildrenMustDirtyFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElementFlags (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(
    &::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::GetChildrenMustDirtyFlags)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6ccaa68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater*>(),
                            { "GetChildrenMustDirtyFlags", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VersionChangeType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater.DirtyHierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElementFlags)>(
    &::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::DirtyHierarchy)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6cca92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater*>(),
                                         { "DirtyHierarchy", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElementFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater.DirtyBoundingBoxHierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::DirtyBoundingBoxHierarchy)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6ccaa18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater*>(),
                                                                                           { "DirtyBoundingBoxHierarchy", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater.DirtyParentHierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElementFlags)>(
    &::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::DirtyParentHierarchy)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6ccaa9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater*>(),
                            { "DirtyParentHierarchy", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElementFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::*)()>(&::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::Update)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6ccaad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::*)()>(&::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ccab30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr uint32_t& UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr uint32_t const& UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::__cordl_internal_set_m_Version(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
constexpr uint32_t& UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::__cordl_internal_get_m_LastVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastVersion;
}
constexpr uint32_t const& UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::__cordl_internal_get_m_LastVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastVersion;
}
constexpr void UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::__cordl_internal_set_m_LastVersion(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastVersion = value;
}
inline void UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::setStaticF_s_Description(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_Description", ::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::getStaticF_s_Description() {
  return ::cordl_internals::getStaticField<::StringW, "s_Description", ::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater*>();
}
inline void UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::setStaticF_s_ProfilerMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ProfilerMarker", ::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::getStaticF_s_ProfilerMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ProfilerMarker", ::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater*>();
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::get_profilerMarker() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerMarker>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, versionChangeType);
}
inline ::UnityEngine::UIElements::VisualElementFlags
UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::GetChildrenMustDirtyFlags(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater*>(),
                          { "GetChildrenMustDirtyFlags", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VersionChangeType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElementFlags>(nullptr, ___internal_method, ve, versionChangeType);
}
inline void UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::DirtyHierarchy(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VisualElementFlags mustDirtyFlags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater*>(),
                                       { "DirtyHierarchy", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElementFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ve, mustDirtyFlags);
}
inline void UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::DirtyBoundingBoxHierarchy(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater*>(),
                                                                                         { "DirtyBoundingBoxHierarchy", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ve);
}
inline void UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::DirtyParentHierarchy(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VisualElementFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater*>(),
                          { "DirtyParentHierarchy", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElementFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ve, flags);
}
inline void UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::Update() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater* UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeHierarchyFlagsUpdater::VisualTreeHierarchyFlagsUpdater() {}
