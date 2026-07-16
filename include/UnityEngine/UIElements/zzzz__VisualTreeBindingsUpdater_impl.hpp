#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeBindingsUpdater.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeHierarchyTrackerUpdater_impl.hpp"
#include "UnityEngine/zzzz__PropertyName_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeBindingsUpdater_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__HierarchyChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__IBinding_def.hpp"
#include "UnityEngine/UIElements/zzzz__VersionChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater.get_profilerMarker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::ProfilerMarker (::UnityEngine::UIElements::VisualTreeBindingsUpdater::*)()>(
    &::UnityEngine::UIElements::VisualTreeBindingsUpdater::get_profilerMarker)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6c41ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater.get_disableBindingsThrottling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::UIElements::VisualTreeBindingsUpdater::get_disableBindingsThrottling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6c41f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(), { "get_disableBindingsThrottling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater.GetBindingObjectFromElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IBinding* (::UnityEngine::UIElements::VisualTreeBindingsUpdater::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeBindingsUpdater::GetBindingObjectFromElement)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6c41f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(),
                                                                                           { "GetBindingObjectFromElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater.StartTracking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeBindingsUpdater::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeBindingsUpdater::StartTracking)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6c42148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(),
                                                                                           { "StartTracking", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater.StopTracking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeBindingsUpdater::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeBindingsUpdater::StopTracking)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6c421e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(),
                                                                                           { "StopTracking", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater.get_temporaryObjectCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* (::UnityEngine::UIElements::VisualTreeBindingsUpdater::*)()>(
    &::UnityEngine::UIElements::VisualTreeBindingsUpdater::get_temporaryObjectCache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c42280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(), { "get_temporaryObjectCache", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater.GetAdditionalBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IBinding* (*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeBindingsUpdater::GetAdditionalBinding)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c420b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(),
                                                                                           { "GetAdditionalBinding", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater.StartTrackingRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeBindingsUpdater::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeBindingsUpdater::StartTrackingRecursive)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6c42288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(),
                                                                                           { "StartTrackingRecursive", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater.StopTrackingRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeBindingsUpdater::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeBindingsUpdater::StopTrackingRecursive)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6c423b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(),
                                                                                           { "StopTrackingRecursive", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater.OnVersionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeBindingsUpdater::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(&::UnityEngine::UIElements::VisualTreeBindingsUpdater::OnVersionChanged)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6c424c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater.OnHierarchyChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeBindingsUpdater::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::HierarchyChangeType)>(&::UnityEngine::UIElements::VisualTreeBindingsUpdater::OnHierarchyChange)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c425cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater.CurrentTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::UnityEngine::UIElements::VisualTreeBindingsUpdater::CurrentTime)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c425e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(), { "CurrentTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater.ShouldProcessBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t)>(&::UnityEngine::UIElements::VisualTreeBindingsUpdater::ShouldProcessBindings)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6c42638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(), { "ShouldProcessBindings", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater.PerformTrackingOperations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeBindingsUpdater::*)()>(
    &::UnityEngine::UIElements::VisualTreeBindingsUpdater::PerformTrackingOperations)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x6c42700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(), { "PerformTrackingOperations", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeBindingsUpdater::*)()>(&::UnityEngine::UIElements::VisualTreeBindingsUpdater::Update)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0x6c42904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater.UpdateBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeBindingsUpdater::*)()>(&::UnityEngine::UIElements::VisualTreeBindingsUpdater::UpdateBindings)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x6c42e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(), { "UpdateBindings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeBindingsUpdater::*)(bool)>(&::UnityEngine::UIElements::VisualTreeBindingsUpdater::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c432c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeBindingsUpdater::*)()>(&::UnityEngine::UIElements::VisualTreeBindingsUpdater::_ctor)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6c432cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_get_m_ElementsWithBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElementsWithBindings;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* const&
UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_get_m_ElementsWithBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElementsWithBindings;
}
constexpr void
UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_set_m_ElementsWithBindings(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ElementsWithBindings = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_get_m_ElementsToAdd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElementsToAdd;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* const&
UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_get_m_ElementsToAdd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElementsToAdd;
}
constexpr void UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_set_m_ElementsToAdd(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ElementsToAdd = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_get_m_ElementsToRemove() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElementsToRemove;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* const&
UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_get_m_ElementsToRemove() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElementsToRemove;
}
constexpr void
UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_set_m_ElementsToRemove(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ElementsToRemove = value;
}
constexpr int64_t& UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_get_m_LastUpdateTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastUpdateTime;
}
constexpr int64_t const& UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_get_m_LastUpdateTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastUpdateTime;
}
constexpr void UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_set_m_LastUpdateTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastUpdateTime = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_get_m_ElementsToBind() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElementsToBind;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* const&
UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_get_m_ElementsToBind() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElementsToBind;
}
constexpr void UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_set_m_ElementsToBind(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ElementsToBind = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*&
UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_get__temporaryObjectCache_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____temporaryObjectCache_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* const&
UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_get__temporaryObjectCache_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____temporaryObjectCache_k__BackingField;
}
constexpr void UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_set__temporaryObjectCache_k__BackingField(
    ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____temporaryObjectCache_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBinding*>*& UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_get_updatedBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___updatedBindings;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBinding*>* const& UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_get_updatedBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___updatedBindings;
}
constexpr void UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_set_updatedBindings(::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBinding*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___updatedBindings = value;
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::setStaticF_s_BindingRequestObjectVEPropertyName(::UnityEngine::PropertyName value) {
  ::cordl_internals::setStaticField<::UnityEngine::PropertyName, "s_BindingRequestObjectVEPropertyName", ::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(
      std::forward<::UnityEngine::PropertyName>(value));
}
inline ::UnityEngine::PropertyName UnityEngine::UIElements::VisualTreeBindingsUpdater::getStaticF_s_BindingRequestObjectVEPropertyName() {
  return ::cordl_internals::getStaticField<::UnityEngine::PropertyName, "s_BindingRequestObjectVEPropertyName", ::UnityEngine::UIElements::VisualTreeBindingsUpdater*>();
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::setStaticF_s_AdditionalBindingObjectVEPropertyName(::UnityEngine::PropertyName value) {
  ::cordl_internals::setStaticField<::UnityEngine::PropertyName, "s_AdditionalBindingObjectVEPropertyName", ::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(
      std::forward<::UnityEngine::PropertyName>(value));
}
inline ::UnityEngine::PropertyName UnityEngine::UIElements::VisualTreeBindingsUpdater::getStaticF_s_AdditionalBindingObjectVEPropertyName() {
  return ::cordl_internals::getStaticField<::UnityEngine::PropertyName, "s_AdditionalBindingObjectVEPropertyName", ::UnityEngine::UIElements::VisualTreeBindingsUpdater*>();
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::setStaticF_s_Description(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_Description", ::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::VisualTreeBindingsUpdater::getStaticF_s_Description() {
  return ::cordl_internals::getStaticField<::StringW, "s_Description", ::UnityEngine::UIElements::VisualTreeBindingsUpdater*>();
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::setStaticF_s_ProfilerMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ProfilerMarker", ::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeBindingsUpdater::getStaticF_s_ProfilerMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ProfilerMarker", ::UnityEngine::UIElements::VisualTreeBindingsUpdater*>();
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::setStaticF_s_ProfilerBindingRequestsMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ProfilerBindingRequestsMarker", ::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeBindingsUpdater::getStaticF_s_ProfilerBindingRequestsMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ProfilerBindingRequestsMarker", ::UnityEngine::UIElements::VisualTreeBindingsUpdater*>();
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::setStaticF_s_MarkerUpdate(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerUpdate", ::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeBindingsUpdater::getStaticF_s_MarkerUpdate() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerUpdate", ::UnityEngine::UIElements::VisualTreeBindingsUpdater*>();
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::setStaticF_s_MarkerPoll(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerPoll", ::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeBindingsUpdater::getStaticF_s_MarkerPoll() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerPoll", ::UnityEngine::UIElements::VisualTreeBindingsUpdater*>();
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::setStaticF__disableBindingsThrottling_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<disableBindingsThrottling>k__BackingField", ::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(std::forward<bool>(value));
}
inline bool UnityEngine::UIElements::VisualTreeBindingsUpdater::getStaticF__disableBindingsThrottling_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<disableBindingsThrottling>k__BackingField", ::UnityEngine::UIElements::VisualTreeBindingsUpdater*>();
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeBindingsUpdater::get_profilerMarker() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerMarker>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::VisualTreeBindingsUpdater::get_disableBindingsThrottling() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(), { "get_disableBindingsThrottling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::UIElements::IBinding* UnityEngine::UIElements::VisualTreeBindingsUpdater::GetBindingObjectFromElement(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(),
                                                                                         { "GetBindingObjectFromElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IBinding*>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::StartTracking(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(),
                                                                                         { "StartTracking", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::StopTracking(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(),
                                                                                         { "StopTracking", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* UnityEngine::UIElements::VisualTreeBindingsUpdater::get_temporaryObjectCache() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(), { "get_temporaryObjectCache", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::IBinding* UnityEngine::UIElements::VisualTreeBindingsUpdater::GetAdditionalBinding(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(),
                                                                                         { "GetAdditionalBinding", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IBinding*>(nullptr, ___internal_method, ve);
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::StartTrackingRecursive(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(),
                                                                                         { "StartTrackingRecursive", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::StopTrackingRecursive(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(),
                                                                                         { "StopTrackingRecursive", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, versionChangeType);
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::OnHierarchyChange(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::HierarchyChangeType type) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, type);
}
inline int64_t UnityEngine::UIElements::VisualTreeBindingsUpdater::CurrentTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(), { "CurrentTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline bool UnityEngine::UIElements::VisualTreeBindingsUpdater::ShouldProcessBindings(int64_t startTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(), { "ShouldProcessBindings", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, startTime);
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::PerformTrackingOperations() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(), { "PerformTrackingOperations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::Update() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::UpdateBindings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(), { "UpdateBindings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualTreeBindingsUpdater* UnityEngine::UIElements::VisualTreeBindingsUpdater::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeBindingsUpdater::VisualTreeBindingsUpdater() {}
