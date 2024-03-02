#pragma once
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Profiling::ProfilerMarker (::UnityEngine::UIElements::VisualTreeBindingsUpdater::*)()>(
    &::UnityEngine::UIElements::VisualTreeBindingsUpdater::get_profilerMarker)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2f8cca8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater.GetBindingObjectFromElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IBinding* (
    ::UnityEngine::UIElements::VisualTreeBindingsUpdater::*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::VisualTreeBindingsUpdater::GetBindingObjectFromElement)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2f8cd00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(), "GetBindingObjectFromElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater.StartTracking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeBindingsUpdater::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeBindingsUpdater::StartTracking)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2f8cec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(), "StartTracking", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater.StopTracking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeBindingsUpdater::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeBindingsUpdater::StopTracking)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2f8cf40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(), "StopTracking", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater.get_temporaryObjectCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* (
    ::UnityEngine::UIElements::VisualTreeBindingsUpdater::*)()>(&::UnityEngine::UIElements::VisualTreeBindingsUpdater::get_temporaryObjectCache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f8cfc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(),
                                                                               "get_temporaryObjectCache", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater.GetAdditionalBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IBinding* (*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeBindingsUpdater::GetAdditionalBinding)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2f8ce38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(), "GetAdditionalBinding", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater.StartTrackingRecursive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeBindingsUpdater::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeBindingsUpdater::StartTrackingRecursive)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2f8cfc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(), "StartTrackingRecursive", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater.StopTrackingRecursive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeBindingsUpdater::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeBindingsUpdater::StopTrackingRecursive)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2f8d0e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(), "StopTrackingRecursive", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater.OnVersionChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeBindingsUpdater::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(&::UnityEngine::UIElements::VisualTreeBindingsUpdater::OnVersionChanged)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2f8d1ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater.OnHierarchyChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeBindingsUpdater::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::HierarchyChangeType)>(&::UnityEngine::UIElements::VisualTreeBindingsUpdater::OnHierarchyChange)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2f8d2e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater.CurrentTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&::UnityEngine::UIElements::VisualTreeBindingsUpdater::CurrentTime)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2f8d2fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(),
                                                                               "CurrentTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater.PerformTrackingOperations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeBindingsUpdater::*)()>(
    &::UnityEngine::UIElements::VisualTreeBindingsUpdater::PerformTrackingOperations)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x2f8d34c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(),
                                                                               "PerformTrackingOperations", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeBindingsUpdater::*)()>(
    &::UnityEngine::UIElements::VisualTreeBindingsUpdater::Update)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x2f8d5d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater.UpdateBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeBindingsUpdater::*)()>(
    &::UnityEngine::UIElements::VisualTreeBindingsUpdater::UpdateBindings)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x2f8dbd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(),
                                                                               "UpdateBindings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeBindingsUpdater._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeBindingsUpdater::*)()>(
    &::UnityEngine::UIElements::VisualTreeBindingsUpdater::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2f8e104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_get_m_ElementsWithBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElementsWithBindings;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*> const&
UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_get_m_ElementsWithBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElementsWithBindings;
}
constexpr void
UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_set_m_ElementsWithBindings(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ElementsWithBindings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_get_m_ElementsToAdd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElementsToAdd;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*> const&
UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_get_m_ElementsToAdd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElementsToAdd;
}
constexpr void UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_set_m_ElementsToAdd(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ElementsToAdd)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_get_m_ElementsToRemove() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElementsToRemove;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*> const&
UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_get_m_ElementsToRemove() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElementsToRemove;
}
constexpr void
UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_set_m_ElementsToRemove(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ElementsToRemove)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*> const&
UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_get_m_ElementsToBind() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElementsToBind;
}
constexpr void UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_set_m_ElementsToBind(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ElementsToBind)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*&
UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_get__temporaryObjectCache_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____temporaryObjectCache_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*> const&
UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_get__temporaryObjectCache_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____temporaryObjectCache_k__BackingField;
}
constexpr void UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_set__temporaryObjectCache_k__BackingField(
    ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____temporaryObjectCache_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBinding*>*& UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_get_updatedBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___updatedBindings;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBinding*>*> const&
UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_get_updatedBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___updatedBindings;
}
constexpr void UnityEngine::UIElements::VisualTreeBindingsUpdater::__cordl_internal_set_updatedBindings(::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBinding*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___updatedBindings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::setStaticF_s_BindingRequestObjectVEPropertyName(::UnityEngine::PropertyName value) {
  ::cordl_internals::setStaticField<::UnityEngine::PropertyName, "s_BindingRequestObjectVEPropertyName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get>(
      std::forward<::UnityEngine::PropertyName>(value));
}
inline ::UnityEngine::PropertyName UnityEngine::UIElements::VisualTreeBindingsUpdater::getStaticF_s_BindingRequestObjectVEPropertyName() {
  return ::cordl_internals::getStaticField<::UnityEngine::PropertyName, "s_BindingRequestObjectVEPropertyName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get>();
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::setStaticF_s_AdditionalBindingObjectVEPropertyName(::UnityEngine::PropertyName value) {
  ::cordl_internals::setStaticField<::UnityEngine::PropertyName, "s_AdditionalBindingObjectVEPropertyName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get>(
      std::forward<::UnityEngine::PropertyName>(value));
}
inline ::UnityEngine::PropertyName UnityEngine::UIElements::VisualTreeBindingsUpdater::getStaticF_s_AdditionalBindingObjectVEPropertyName() {
  return ::cordl_internals::getStaticField<::UnityEngine::PropertyName, "s_AdditionalBindingObjectVEPropertyName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get>();
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::setStaticF_s_Description(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_Description", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::VisualTreeBindingsUpdater::getStaticF_s_Description() {
  return ::cordl_internals::getStaticField<::StringW, "s_Description", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get>();
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::setStaticF_s_ProfilerMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ProfilerMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeBindingsUpdater::getStaticF_s_ProfilerMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ProfilerMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get>();
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::setStaticF_s_ProfilerBindingRequestsMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ProfilerBindingRequestsMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeBindingsUpdater::getStaticF_s_ProfilerBindingRequestsMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ProfilerBindingRequestsMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get>();
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::setStaticF_s_MarkerUpdate(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerUpdate",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeBindingsUpdater::getStaticF_s_MarkerUpdate() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerUpdate",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get>();
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::setStaticF_s_MarkerPoll(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerPoll",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeBindingsUpdater::getStaticF_s_MarkerPoll() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerPoll",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get>();
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::setStaticF__disableBindingsThrottling_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<disableBindingsThrottling>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get>(std::forward<bool>(value));
}
inline bool UnityEngine::UIElements::VisualTreeBindingsUpdater::getStaticF__disableBindingsThrottling_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<disableBindingsThrottling>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get>();
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeBindingsUpdater::get_profilerMarker() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerMarker, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::IBinding* UnityEngine::UIElements::VisualTreeBindingsUpdater::GetBindingObjectFromElement(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(), "GetBindingObjectFromElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IBinding*, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::StartTracking(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(), "StartTracking", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::StopTracking(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(), "StopTracking", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* UnityEngine::UIElements::VisualTreeBindingsUpdater::get_temporaryObjectCache() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(),
                                                                             "get_temporaryObjectCache", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::IBinding* UnityEngine::UIElements::VisualTreeBindingsUpdater::GetAdditionalBinding(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(), "GetAdditionalBinding", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IBinding*, false>(nullptr, ___internal_method, ve);
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::StartTrackingRecursive(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(), "StartTrackingRecursive", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::StopTrackingRecursive(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(), "StopTrackingRecursive", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, versionChangeType);
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::OnHierarchyChange(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::HierarchyChangeType type) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, type);
}
inline int64_t UnityEngine::UIElements::VisualTreeBindingsUpdater::CurrentTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(),
                                                                             "CurrentTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::PerformTrackingOperations() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(),
                                                                             "PerformTrackingOperations", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::Update() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::UpdateBindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(),
                                                                             "UpdateBindings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualTreeBindingsUpdater* UnityEngine::UIElements::VisualTreeBindingsUpdater::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>());
}
inline void UnityEngine::UIElements::VisualTreeBindingsUpdater::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeBindingsUpdater*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeBindingsUpdater::VisualTreeBindingsUpdater() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
