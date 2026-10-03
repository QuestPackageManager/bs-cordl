#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeLayoutUpdater.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeLayoutUpdater_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextJobSystem_def.hpp"
#include "UnityEngine/UIElements/zzzz__VersionChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeLayoutUpdater.get_profilerMarker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::ProfilerMarker (::UnityEngine::UIElements::VisualTreeLayoutUpdater::*)()>(
    &::UnityEngine::UIElements::VisualTreeLayoutUpdater::get_profilerMarker)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x71595f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeLayoutUpdater*>(), { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeLayoutUpdater*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeLayoutUpdater.OnVersionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeLayoutUpdater::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(&::UnityEngine::UIElements::VisualTreeLayoutUpdater::OnVersionChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x7159650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeLayoutUpdater*>(), { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeLayoutUpdater*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeLayoutUpdater.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeLayoutUpdater::*)()>(&::UnityEngine::UIElements::VisualTreeLayoutUpdater::Update)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x71596b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeLayoutUpdater*>(), { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeLayoutUpdater*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeLayoutUpdater.UpdateHierarchyDisplayed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(
    ::UnityEngine::UIElements::VisualElement*, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>*,
    bool)>(&::UnityEngine::UIElements::VisualTreeLayoutUpdater::UpdateHierarchyDisplayed)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x715a8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeLayoutUpdater*>(),
                            { "UpdateHierarchyDisplayed",
                              {},
                              { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>*>(),
                                ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeLayoutUpdater.UpdateSubTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeLayoutUpdater::*)(
    ::UnityEngine::UIElements::VisualElement*, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>*)>(
    &::UnityEngine::UIElements::VisualTreeLayoutUpdater::UpdateSubTree)> {
  constexpr static std::size_t size = 0x7cc;
  constexpr static std::size_t addrs = 0x7159aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::VisualTreeLayoutUpdater*>(),
            { "UpdateSubTree",
              {},
              { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeLayoutUpdater.DispatchChangeEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeLayoutUpdater::*)(
    ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>*, int32_t)>(
    &::UnityEngine::UIElements::VisualTreeLayoutUpdater::DispatchChangeEvents)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x715a274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeLayoutUpdater*>(),
                            { "DispatchChangeEvents",
                              {},
                              { ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>*>(),
                                ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeLayoutUpdater.DispatchMissedHierarchyChangeEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeLayoutUpdater::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*, int32_t)>(&::UnityEngine::UIElements::VisualTreeLayoutUpdater::DispatchMissedHierarchyChangeEvents)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x715a55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::VisualTreeLayoutUpdater*>(),
            { "DispatchMissedHierarchyChangeEvents", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeLayoutUpdater._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeLayoutUpdater::*)()>(&::UnityEngine::UIElements::VisualTreeLayoutUpdater::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x715ac50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeLayoutUpdater*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>*&
UnityEngine::UIElements::VisualTreeLayoutUpdater::__cordl_internal_get_changeEventsList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___changeEventsList;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* const&
UnityEngine::UIElements::VisualTreeLayoutUpdater::__cordl_internal_get_changeEventsList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___changeEventsList;
}
constexpr void UnityEngine::UIElements::VisualTreeLayoutUpdater::__cordl_internal_set_changeEventsList(
    ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___changeEventsList = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::VisualTreeLayoutUpdater::__cordl_internal_get_missedHierarchyChangeEventsList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missedHierarchyChangeEventsList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* const&
UnityEngine::UIElements::VisualTreeLayoutUpdater::__cordl_internal_get_missedHierarchyChangeEventsList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missedHierarchyChangeEventsList;
}
constexpr void
UnityEngine::UIElements::VisualTreeLayoutUpdater::__cordl_internal_set_missedHierarchyChangeEventsList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___missedHierarchyChangeEventsList = value;
}
constexpr ::UnityEngine::UIElements::TextJobSystem*& UnityEngine::UIElements::VisualTreeLayoutUpdater::__cordl_internal_get_m_TextJobSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextJobSystem;
}
constexpr ::UnityEngine::UIElements::TextJobSystem* const& UnityEngine::UIElements::VisualTreeLayoutUpdater::__cordl_internal_get_m_TextJobSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextJobSystem;
}
constexpr void UnityEngine::UIElements::VisualTreeLayoutUpdater::__cordl_internal_set_m_TextJobSystem(::UnityEngine::UIElements::TextJobSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextJobSystem = value;
}
inline void UnityEngine::UIElements::VisualTreeLayoutUpdater::setStaticF_s_Description(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_Description", ::UnityEngine::UIElements::VisualTreeLayoutUpdater*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::VisualTreeLayoutUpdater::getStaticF_s_Description() {
  return ::cordl_internals::getStaticField<::StringW, "s_Description", ::UnityEngine::UIElements::VisualTreeLayoutUpdater*>();
}
inline void UnityEngine::UIElements::VisualTreeLayoutUpdater::setStaticF_s_ProfilerMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ProfilerMarker", ::UnityEngine::UIElements::VisualTreeLayoutUpdater*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeLayoutUpdater::getStaticF_s_ProfilerMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ProfilerMarker", ::UnityEngine::UIElements::VisualTreeLayoutUpdater*>();
}
inline void UnityEngine::UIElements::VisualTreeLayoutUpdater::setStaticF_k_ComputeLayoutMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ComputeLayoutMarker", ::UnityEngine::UIElements::VisualTreeLayoutUpdater*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeLayoutUpdater::getStaticF_k_ComputeLayoutMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ComputeLayoutMarker", ::UnityEngine::UIElements::VisualTreeLayoutUpdater*>();
}
inline void UnityEngine::UIElements::VisualTreeLayoutUpdater::setStaticF_k_UpdateSubTreeMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateSubTreeMarker", ::UnityEngine::UIElements::VisualTreeLayoutUpdater*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeLayoutUpdater::getStaticF_k_UpdateSubTreeMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateSubTreeMarker", ::UnityEngine::UIElements::VisualTreeLayoutUpdater*>();
}
inline void UnityEngine::UIElements::VisualTreeLayoutUpdater::setStaticF_k_DispatchChangeEventsMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_DispatchChangeEventsMarker", ::UnityEngine::UIElements::VisualTreeLayoutUpdater*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeLayoutUpdater::getStaticF_k_DispatchChangeEventsMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_DispatchChangeEventsMarker", ::UnityEngine::UIElements::VisualTreeLayoutUpdater*>();
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeLayoutUpdater::get_profilerMarker() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeLayoutUpdater*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerMarker>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeLayoutUpdater::OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeLayoutUpdater*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, versionChangeType);
}
inline void UnityEngine::UIElements::VisualTreeLayoutUpdater::Update() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeLayoutUpdater*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::VisualTreeLayoutUpdater::UpdateHierarchyDisplayed(
    ::UnityEngine::UIElements::VisualElement* ve,
    ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* changeEvents, bool inheritedDisplayed) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeLayoutUpdater*>(),
                          { "UpdateHierarchyDisplayed",
                            {},
                            { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                              ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>*>(),
                              ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ve, changeEvents, inheritedDisplayed);
}
inline void UnityEngine::UIElements::VisualTreeLayoutUpdater::UpdateSubTree(
    ::UnityEngine::UIElements::VisualElement* ve,
    ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* changeEvents) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::VisualTreeLayoutUpdater*>(),
          { "UpdateSubTree",
            {},
            { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
              ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, changeEvents);
}
inline void UnityEngine::UIElements::VisualTreeLayoutUpdater::DispatchChangeEvents(
    ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* changeEvents, int32_t currentLayoutPass) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeLayoutUpdater*>(),
                          { "DispatchChangeEvents",
                            {},
                            { ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>*>(),
                              ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, changeEvents, currentLayoutPass);
}
inline void
UnityEngine::UIElements::VisualTreeLayoutUpdater::DispatchMissedHierarchyChangeEvents(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* missedHierarchyChangeEvents,
                                                                                      int32_t currentLayoutPass) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::VisualTreeLayoutUpdater*>(),
          { "DispatchMissedHierarchyChangeEvents", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, missedHierarchyChangeEvents, currentLayoutPass);
}
inline void UnityEngine::UIElements::VisualTreeLayoutUpdater::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeLayoutUpdater*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualTreeLayoutUpdater* UnityEngine::UIElements::VisualTreeLayoutUpdater::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::VisualTreeLayoutUpdater*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeLayoutUpdater::VisualTreeLayoutUpdater() {}
