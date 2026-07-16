#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIRLayoutUpdater.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UIRLayoutUpdater_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__VersionChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIRLayoutUpdater.get_profilerMarker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::ProfilerMarker (::UnityEngine::UIElements::UIRLayoutUpdater::*)()>(
    &::UnityEngine::UIElements::UIRLayoutUpdater::get_profilerMarker)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6dbb638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRLayoutUpdater*>(), { ::i2c::class_of<::UnityEngine::UIElements::UIRLayoutUpdater*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRLayoutUpdater.OnVersionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIRLayoutUpdater::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(
    &::UnityEngine::UIElements::UIRLayoutUpdater::OnVersionChanged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dbb694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRLayoutUpdater*>(), { ::i2c::class_of<::UnityEngine::UIElements::UIRLayoutUpdater*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRLayoutUpdater.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIRLayoutUpdater::*)()>(&::UnityEngine::UIElements::UIRLayoutUpdater::Update)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x6dbb6e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRLayoutUpdater*>(), { ::i2c::class_of<::UnityEngine::UIElements::UIRLayoutUpdater*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRLayoutUpdater.UpdateHierarchyDisplayed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(
    ::UnityEngine::UIElements::VisualElement*, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>*,
    bool)>(&::UnityEngine::UIElements::UIRLayoutUpdater::UpdateHierarchyDisplayed)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x6dbc320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRLayoutUpdater*>(),
                            { "UpdateHierarchyDisplayed",
                              {},
                              { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>*>(),
                                ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRLayoutUpdater.UpdateSubTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIRLayoutUpdater::*)(
    ::UnityEngine::UIElements::VisualElement*, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>*)>(
    &::UnityEngine::UIElements::UIRLayoutUpdater::UpdateSubTree)> {
  constexpr static std::size_t size = 0x73c;
  constexpr static std::size_t addrs = 0x6dbb924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::UIRLayoutUpdater*>(),
            { "UpdateSubTree",
              {},
              { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRLayoutUpdater.DispatchChangeEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIRLayoutUpdater::*)(
    ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>*, int32_t)>(
    &::UnityEngine::UIElements::UIRLayoutUpdater::DispatchChangeEvents)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x6dbc060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRLayoutUpdater*>(),
                            { "DispatchChangeEvents",
                              {},
                              { ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>*>(),
                                ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRLayoutUpdater._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIRLayoutUpdater::*)()>(&::UnityEngine::UIElements::UIRLayoutUpdater::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6dbc614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRLayoutUpdater*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>*&
UnityEngine::UIElements::UIRLayoutUpdater::__cordl_internal_get_changeEventsList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___changeEventsList;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* const&
UnityEngine::UIElements::UIRLayoutUpdater::__cordl_internal_get_changeEventsList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___changeEventsList;
}
constexpr void UnityEngine::UIElements::UIRLayoutUpdater::__cordl_internal_set_changeEventsList(
    ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___changeEventsList = value;
}
inline void UnityEngine::UIElements::UIRLayoutUpdater::setStaticF_s_Description(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_Description", ::UnityEngine::UIElements::UIRLayoutUpdater*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::UIRLayoutUpdater::getStaticF_s_Description() {
  return ::cordl_internals::getStaticField<::StringW, "s_Description", ::UnityEngine::UIElements::UIRLayoutUpdater*>();
}
inline void UnityEngine::UIElements::UIRLayoutUpdater::setStaticF_s_ProfilerMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ProfilerMarker", ::UnityEngine::UIElements::UIRLayoutUpdater*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIRLayoutUpdater::getStaticF_s_ProfilerMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ProfilerMarker", ::UnityEngine::UIElements::UIRLayoutUpdater*>();
}
inline void UnityEngine::UIElements::UIRLayoutUpdater::setStaticF_k_ComputeLayoutMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ComputeLayoutMarker", ::UnityEngine::UIElements::UIRLayoutUpdater*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIRLayoutUpdater::getStaticF_k_ComputeLayoutMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ComputeLayoutMarker", ::UnityEngine::UIElements::UIRLayoutUpdater*>();
}
inline void UnityEngine::UIElements::UIRLayoutUpdater::setStaticF_k_UpdateSubTreeMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateSubTreeMarker", ::UnityEngine::UIElements::UIRLayoutUpdater*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIRLayoutUpdater::getStaticF_k_UpdateSubTreeMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_UpdateSubTreeMarker", ::UnityEngine::UIElements::UIRLayoutUpdater*>();
}
inline void UnityEngine::UIElements::UIRLayoutUpdater::setStaticF_k_DispatchChangeEventsMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_DispatchChangeEventsMarker", ::UnityEngine::UIElements::UIRLayoutUpdater*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIRLayoutUpdater::getStaticF_k_DispatchChangeEventsMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_DispatchChangeEventsMarker", ::UnityEngine::UIElements::UIRLayoutUpdater*>();
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIRLayoutUpdater::get_profilerMarker() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UIRLayoutUpdater*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerMarker>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIRLayoutUpdater::OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UIRLayoutUpdater*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, versionChangeType);
}
inline void UnityEngine::UIElements::UIRLayoutUpdater::Update() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UIRLayoutUpdater*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIRLayoutUpdater::UpdateHierarchyDisplayed(
    ::UnityEngine::UIElements::VisualElement* ve,
    ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* changeEvents, bool inheritedDisplayed) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRLayoutUpdater*>(),
                          { "UpdateHierarchyDisplayed",
                            {},
                            { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                              ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>*>(),
                              ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ve, changeEvents, inheritedDisplayed);
}
inline void UnityEngine::UIElements::UIRLayoutUpdater::UpdateSubTree(
    ::UnityEngine::UIElements::VisualElement* ve,
    ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* changeEvents) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::UIRLayoutUpdater*>(),
          { "UpdateSubTree",
            {},
            { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
              ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, changeEvents);
}
inline void UnityEngine::UIElements::UIRLayoutUpdater::DispatchChangeEvents(
    ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>* changeEvents, int32_t currentLayoutPass) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRLayoutUpdater*>(),
                          { "DispatchChangeEvents",
                            {},
                            { ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*>>*>(),
                              ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, changeEvents, currentLayoutPass);
}
inline void UnityEngine::UIElements::UIRLayoutUpdater::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRLayoutUpdater*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIRLayoutUpdater* UnityEngine::UIElements::UIRLayoutUpdater::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIRLayoutUpdater*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIRLayoutUpdater::UIRLayoutUpdater() {}
