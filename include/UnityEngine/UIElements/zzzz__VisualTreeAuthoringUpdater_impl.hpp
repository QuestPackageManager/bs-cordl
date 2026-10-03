#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeAuthoringUpdater.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAuthoringUpdater_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__AuthoringChanges_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__HierarchyChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualElementChangeProcessor_def.hpp"
#include "UnityEngine/UIElements/zzzz__VersionChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAuthoringUpdater.get_profilerMarker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::ProfilerMarker (::UnityEngine::UIElements::VisualTreeAuthoringUpdater::*)()>(
    &::UnityEngine::UIElements::VisualTreeAuthoringUpdater::get_profilerMarker)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x7083870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAuthoringUpdater*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeAuthoringUpdater*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAuthoringUpdater.get_shouldUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::VisualTreeAuthoringUpdater::*)()>(&::UnityEngine::UIElements::VisualTreeAuthoringUpdater::get_shouldUpdate)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x70838cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAuthoringUpdater*>(), { "get_shouldUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAuthoringUpdater._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAuthoringUpdater::*)()>(&::UnityEngine::UIElements::VisualTreeAuthoringUpdater::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x7083934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAuthoringUpdater*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAuthoringUpdater.OnVersionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAuthoringUpdater::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(&::UnityEngine::UIElements::VisualTreeAuthoringUpdater::OnVersionChanged)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x7083a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAuthoringUpdater*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeAuthoringUpdater*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAuthoringUpdater.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAuthoringUpdater::*)()>(&::UnityEngine::UIElements::VisualTreeAuthoringUpdater::Update)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x7083ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAuthoringUpdater*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeAuthoringUpdater*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAuthoringUpdater.OnPanelChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAuthoringUpdater::*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(
    &::UnityEngine::UIElements::VisualTreeAuthoringUpdater::OnPanelChanged)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x70840f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAuthoringUpdater*>(),
                                                                                           { "OnPanelChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAuthoringUpdater.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAuthoringUpdater::*)(bool)>(&::UnityEngine::UIElements::VisualTreeAuthoringUpdater::Dispose)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x70841e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAuthoringUpdater*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeAuthoringUpdater*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAuthoringUpdater.OnHierarchyChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAuthoringUpdater::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::HierarchyChangeType, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::VisualElement*>*)>(
    &::UnityEngine::UIElements::VisualTreeAuthoringUpdater::OnHierarchyChange)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x70844e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAuthoringUpdater*>(),
                                                             { "OnHierarchyChange",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::HierarchyChangeType>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAuthoringUpdater.SwapBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAuthoringUpdater::*)()>(&::UnityEngine::UIElements::VisualTreeAuthoringUpdater::SwapBuffers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x70840dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAuthoringUpdater*>(), { "SwapBuffers", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IVisualElementChangeProcessor*>*&
UnityEngine::UIElements::VisualTreeAuthoringUpdater::__cordl_internal_get_m_RegisteredProcessors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RegisteredProcessors;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IVisualElementChangeProcessor*>* const&
UnityEngine::UIElements::VisualTreeAuthoringUpdater::__cordl_internal_get_m_RegisteredProcessors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RegisteredProcessors;
}
constexpr void UnityEngine::UIElements::VisualTreeAuthoringUpdater::__cordl_internal_set_m_RegisteredProcessors(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IVisualElementChangeProcessor*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RegisteredProcessors = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IVisualElementChangeProcessor*>*&
UnityEngine::UIElements::VisualTreeAuthoringUpdater::__cordl_internal_get_m_ProcessorRegistrationList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProcessorRegistrationList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IVisualElementChangeProcessor*>* const&
UnityEngine::UIElements::VisualTreeAuthoringUpdater::__cordl_internal_get_m_ProcessorRegistrationList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProcessorRegistrationList;
}
constexpr void UnityEngine::UIElements::VisualTreeAuthoringUpdater::__cordl_internal_set_m_ProcessorRegistrationList(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IVisualElementChangeProcessor*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProcessorRegistrationList = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IVisualElementChangeProcessor*>*&
UnityEngine::UIElements::VisualTreeAuthoringUpdater::__cordl_internal_get_m_ProcessorUnregistrationList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProcessorUnregistrationList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IVisualElementChangeProcessor*>* const&
UnityEngine::UIElements::VisualTreeAuthoringUpdater::__cordl_internal_get_m_ProcessorUnregistrationList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProcessorUnregistrationList;
}
constexpr void UnityEngine::UIElements::VisualTreeAuthoringUpdater::__cordl_internal_set_m_ProcessorUnregistrationList(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IVisualElementChangeProcessor*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProcessorUnregistrationList = value;
}
constexpr ::UnityEngine::UIElements::BaseVisualElementPanel*& UnityEngine::UIElements::VisualTreeAuthoringUpdater::__cordl_internal_get_m_AttachedPanel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AttachedPanel;
}
constexpr ::UnityEngine::UIElements::BaseVisualElementPanel* const& UnityEngine::UIElements::VisualTreeAuthoringUpdater::__cordl_internal_get_m_AttachedPanel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AttachedPanel;
}
constexpr void UnityEngine::UIElements::VisualTreeAuthoringUpdater::__cordl_internal_set_m_AttachedPanel(::UnityEngine::UIElements::BaseVisualElementPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AttachedPanel = value;
}
constexpr ::UnityEngine::UIElements::AuthoringChanges*& UnityEngine::UIElements::VisualTreeAuthoringUpdater::__cordl_internal_get_m_Changes1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Changes1;
}
constexpr ::UnityEngine::UIElements::AuthoringChanges* const& UnityEngine::UIElements::VisualTreeAuthoringUpdater::__cordl_internal_get_m_Changes1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Changes1;
}
constexpr void UnityEngine::UIElements::VisualTreeAuthoringUpdater::__cordl_internal_set_m_Changes1(::UnityEngine::UIElements::AuthoringChanges* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Changes1 = value;
}
constexpr ::UnityEngine::UIElements::AuthoringChanges*& UnityEngine::UIElements::VisualTreeAuthoringUpdater::__cordl_internal_get_m_Changes2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Changes2;
}
constexpr ::UnityEngine::UIElements::AuthoringChanges* const& UnityEngine::UIElements::VisualTreeAuthoringUpdater::__cordl_internal_get_m_Changes2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Changes2;
}
constexpr void UnityEngine::UIElements::VisualTreeAuthoringUpdater::__cordl_internal_set_m_Changes2(::UnityEngine::UIElements::AuthoringChanges* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Changes2 = value;
}
constexpr ::UnityEngine::UIElements::AuthoringChanges*& UnityEngine::UIElements::VisualTreeAuthoringUpdater::__cordl_internal_get_m_Accumulator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Accumulator;
}
constexpr ::UnityEngine::UIElements::AuthoringChanges* const& UnityEngine::UIElements::VisualTreeAuthoringUpdater::__cordl_internal_get_m_Accumulator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Accumulator;
}
constexpr void UnityEngine::UIElements::VisualTreeAuthoringUpdater::__cordl_internal_set_m_Accumulator(::UnityEngine::UIElements::AuthoringChanges* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Accumulator = value;
}
constexpr ::UnityEngine::UIElements::AuthoringChanges*& UnityEngine::UIElements::VisualTreeAuthoringUpdater::__cordl_internal_get_m_Notifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Notifier;
}
constexpr ::UnityEngine::UIElements::AuthoringChanges* const& UnityEngine::UIElements::VisualTreeAuthoringUpdater::__cordl_internal_get_m_Notifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Notifier;
}
constexpr void UnityEngine::UIElements::VisualTreeAuthoringUpdater::__cordl_internal_set_m_Notifier(::UnityEngine::UIElements::AuthoringChanges* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Notifier = value;
}
constexpr bool& UnityEngine::UIElements::VisualTreeAuthoringUpdater::__cordl_internal_get_m_AccumulatingChanges() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AccumulatingChanges;
}
constexpr bool const& UnityEngine::UIElements::VisualTreeAuthoringUpdater::__cordl_internal_get_m_AccumulatingChanges() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AccumulatingChanges;
}
constexpr void UnityEngine::UIElements::VisualTreeAuthoringUpdater::__cordl_internal_set_m_AccumulatingChanges(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AccumulatingChanges = value;
}
inline void UnityEngine::UIElements::VisualTreeAuthoringUpdater::setStaticF_s_UpdateProfilerMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_UpdateProfilerMarker", ::UnityEngine::UIElements::VisualTreeAuthoringUpdater*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeAuthoringUpdater::getStaticF_s_UpdateProfilerMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_UpdateProfilerMarker", ::UnityEngine::UIElements::VisualTreeAuthoringUpdater*>();
}
inline void UnityEngine::UIElements::VisualTreeAuthoringUpdater::setStaticF_s_UpdateChangeProfilerMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_UpdateChangeProfilerMarker", ::UnityEngine::UIElements::VisualTreeAuthoringUpdater*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeAuthoringUpdater::getStaticF_s_UpdateChangeProfilerMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_UpdateChangeProfilerMarker", ::UnityEngine::UIElements::VisualTreeAuthoringUpdater*>();
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeAuthoringUpdater::get_profilerMarker() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeAuthoringUpdater*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerMarker>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::VisualTreeAuthoringUpdater::get_shouldUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAuthoringUpdater*>(), { "get_shouldUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAuthoringUpdater::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAuthoringUpdater*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAuthoringUpdater::OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeAuthoringUpdater*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, versionChangeType);
}
inline void UnityEngine::UIElements::VisualTreeAuthoringUpdater::Update() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeAuthoringUpdater*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAuthoringUpdater::OnPanelChanged(::UnityEngine::UIElements::BaseVisualElementPanel* p) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAuthoringUpdater*>(),
                                                                                         { "OnPanelChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline void UnityEngine::UIElements::VisualTreeAuthoringUpdater::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeAuthoringUpdater*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void UnityEngine::UIElements::VisualTreeAuthoringUpdater::OnHierarchyChange(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::HierarchyChangeType type,
                                                                                   ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::VisualElement*>* additionalContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAuthoringUpdater*>(),
                                                           { "OnHierarchyChange",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::HierarchyChangeType>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, type, additionalContext);
}
inline void UnityEngine::UIElements::VisualTreeAuthoringUpdater::SwapBuffers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAuthoringUpdater*>(), { "SwapBuffers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualTreeAuthoringUpdater* UnityEngine::UIElements::VisualTreeAuthoringUpdater::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::VisualTreeAuthoringUpdater*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeAuthoringUpdater::VisualTreeAuthoringUpdater() {}
