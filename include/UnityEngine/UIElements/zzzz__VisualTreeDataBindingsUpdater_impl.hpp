#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeDataBindingsUpdater.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeDataBindingsUpdater_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "Unity/Properties/zzzz__PropertyPath_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingResult_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingUpdater_def.hpp"
#include "UnityEngine/UIElements/zzzz__Binding_def.hpp"
#include "UnityEngine/UIElements/zzzz__DataBindingManager_def.hpp"
#include "UnityEngine/UIElements/zzzz__HierarchyChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__VersionChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeDataBindingsUpdater_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater_VersionInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater_VersionInfo::*)(::System::Object*, int64_t)>(
    &::UnityEngine::UIElements::VisualTreeDataBindingsUpdater_VersionInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a7d440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater_VersionInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater_VersionInfo::_ctor(::System::Object* source, int64_t version) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater_VersionInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, version);
}
// Ctor Parameters [CppParam { name: "source", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "version", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater_VersionInfo::VisualTreeDataBindingsUpdater_VersionInfo(::System::Object* source, int64_t version) noexcept {
  this->source = source;
  this->version = version;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater_VersionInfo::VisualTreeDataBindingsUpdater_VersionInfo() {}
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c::*)()>(
    &::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a7d8ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c._ProcessDataSourceChangedRequests_b__29_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c::_ProcessDataSourceChangedRequests_b__29_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6a7d8f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c*>::get(), "<ProcessDataSourceChangedRequests>b__29_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c::setStaticF___9(::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c*>::get>(
      std::forward<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c*>(value));
}
inline ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c* UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c*>::get>();
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c::setStaticF___9__29_0(::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>*, "<>9__29_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c*>::get>(
      std::forward<::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>*>(value));
}
inline ::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c::getStaticF___9__29_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>*, "<>9__29_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c*>::get>();
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c::_ProcessDataSourceChangedRequests_b__29_0(::UnityEngine::UIElements::VisualElement* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c*>::get(), "<ProcessDataSourceChangedRequests>b__29_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, e);
}
inline ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c* UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c::VisualTreeDataBindingsUpdater___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater.get_bindingManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::DataBindingManager* (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)()>(
    &::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::get_bindingManager)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6a7b2b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(),
                                                                               "get_bindingManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater.get_profilerMarker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Profiling::ProfilerMarker (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)()>(
    &::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::get_profilerMarker)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a7b2d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)()>(
    &::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::_ctor)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x6a7b330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater.OnHierarchyChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::HierarchyChangeType, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::VisualElement*>*)>(
    &::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::OnHierarchyChange)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x6a7b5b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(), "OnHierarchyChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::HierarchyChangeType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::VisualElement*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater.OnVersionChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(&::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::OnVersionChanged)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6a7b994;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater.CacheAndLogBindingResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)(
    bool, ::ByRef<::UnityEngine::UIElements::DataBindingManager_BindingData*>, ::ByRef<::UnityEngine::UIElements::BindingResult>)>(
    &::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::CacheAndLogBindingResult)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6a7ba90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(), "CacheAndLogBindingResult", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::DataBindingManager_BindingData*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::BindingResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater.LogResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)(
    ::ByRef<::UnityEngine::UIElements::BindingResult>)>(&::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::LogResult)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6a7bbc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(), "LogResult", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::BindingResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)()>(
    &::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::Update)> {
  constexpr static std::size_t size = 0xda8;
  constexpr static std::size_t addrs = 0x6a7bd04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater.GetDataSourceVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<bool, int64_t> (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)(
    ::System::Object*)>(&::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::GetDataSourceVersion)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6a7d294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(), "GetDataSourceVersion",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater.IsPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)(
    ::ByRef<::Unity::Properties::PropertyPath>, ::ByRef<::Unity::Properties::PropertyPath>)>(&::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::IsPrefix)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6a7d448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(), "IsPrefix", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Properties::PropertyPath>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Properties::PropertyPath>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater.ProcessDataSourceChangedRequests
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)()>(
    &::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::ProcessDataSourceChangedRequests)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x6a7cc9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(),
                                                 "ProcessDataSourceChangedRequests", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater.OnPanelChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)(
    ::UnityEngine::UIElements::BaseVisualElementPanel*)>(&::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::OnPanelChanged)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6a7d5b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(), "OnPanelChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVisualElementPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)(bool)>(
    &::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6a7d6a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater.ProcessAllBindingRequests
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)()>(
    &::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::ProcessAllBindingRequests)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x6a7caac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(),
                                                                               "ProcessAllBindingRequests", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater.ProcessBindingRequests
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::ProcessBindingRequests)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6a7d6e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(), "ProcessBindingRequests", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater.ProcessPropertyChangedEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)(
    ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Binding*>*)>(&::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::ProcessPropertyChangedEvents)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x6a7cf6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(), "ProcessPropertyChangedEvents",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Binding*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::BindingUpdater*& UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_get_m_Updater() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Updater;
}
constexpr ::UnityEngine::UIElements::BindingUpdater* const& UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_get_m_Updater() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Updater;
}
constexpr void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_set_m_Updater(::UnityEngine::UIElements::BindingUpdater* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Updater)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*&
UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_get_m_BindingRegistrationRequests() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingRegistrationRequests;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* const&
UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_get_m_BindingRegistrationRequests() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingRegistrationRequests;
}
constexpr void
UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_set_m_BindingRegistrationRequests(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BindingRegistrationRequests)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*&
UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_get_m_DataSourceChangedRequests() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DataSourceChangedRequests;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* const&
UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_get_m_DataSourceChangedRequests() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DataSourceChangedRequests;
}
constexpr void
UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_set_m_DataSourceChangedRequests(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DataSourceChangedRequests)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_get_m_RemovedElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RemovedElements;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* const&
UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_get_m_RemovedElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RemovedElements;
}
constexpr void
UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_set_m_RemovedElements(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RemovedElements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_get_m_BoundsElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BoundsElement;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* const&
UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_get_m_BoundsElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BoundsElement;
}
constexpr void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_set_m_BoundsElement(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BoundsElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater_VersionInfo>*&
UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_get_m_VersionChanges() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VersionChanges;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater_VersionInfo>* const&
UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_get_m_VersionChanges() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VersionChanges;
}
constexpr void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_set_m_VersionChanges(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater_VersionInfo>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VersionChanges)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Object*>*& UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_get_m_TrackedObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackedObjects;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Object*>* const& UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_get_m_TrackedObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackedObjects;
}
constexpr void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_set_m_TrackedObjects(::System::Collections::Generic::HashSet_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TrackedObjects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Binding*>*& UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_get_m_RanUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RanUpdate;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Binding*>* const& UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_get_m_RanUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RanUpdate;
}
constexpr void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_set_m_RanUpdate(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Binding*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RanUpdate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Object*>*& UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_get_m_KnownSources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KnownSources;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Object*>* const& UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_get_m_KnownSources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KnownSources;
}
constexpr void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_set_m_KnownSources(::System::Collections::Generic::HashSet_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_KnownSources)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Binding*>*& UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_get_m_DirtyBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DirtyBindings;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Binding*>* const& UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_get_m_DirtyBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DirtyBindings;
}
constexpr void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_set_m_DirtyBindings(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Binding*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DirtyBindings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::BaseVisualElementPanel*& UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_get_m_AttachedPanel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AttachedPanel;
}
constexpr ::UnityEngine::UIElements::BaseVisualElementPanel* const& UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_get_m_AttachedPanel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AttachedPanel;
}
constexpr void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::__cordl_internal_set_m_AttachedPanel(::UnityEngine::UIElements::BaseVisualElementPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AttachedPanel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::setStaticF_s_UpdateProfilerMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_UpdateProfilerMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeDataBindingsUpdater::getStaticF_s_UpdateProfilerMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_UpdateProfilerMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get>();
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::setStaticF_s_ProcessBindingRequestsProfilerMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ProcessBindingRequestsProfilerMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeDataBindingsUpdater::getStaticF_s_ProcessBindingRequestsProfilerMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ProcessBindingRequestsProfilerMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get>();
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::setStaticF_s_ProcessDataSourcesProfilerMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ProcessDataSourcesProfilerMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeDataBindingsUpdater::getStaticF_s_ProcessDataSourcesProfilerMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ProcessDataSourcesProfilerMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get>();
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::setStaticF_s_ShouldUpdateBindingProfilerMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ShouldUpdateBindingProfilerMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeDataBindingsUpdater::getStaticF_s_ShouldUpdateBindingProfilerMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ShouldUpdateBindingProfilerMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get>();
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::setStaticF_s_UpdateBindingProfilerMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_UpdateBindingProfilerMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeDataBindingsUpdater::getStaticF_s_UpdateBindingProfilerMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_UpdateBindingProfilerMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get>();
}
inline ::UnityEngine::UIElements::DataBindingManager* UnityEngine::UIElements::VisualTreeDataBindingsUpdater::get_bindingManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(),
                                                                             "get_bindingManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DataBindingManager*, false>(this, ___internal_method);
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeDataBindingsUpdater::get_profilerMarker() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerMarker, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::OnHierarchyChange(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::HierarchyChangeType type,
                                                                                      ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::VisualElement*>* additionalContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(), "OnHierarchyChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::HierarchyChangeType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::VisualElement*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, type, additionalContext);
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, versionChangeType);
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::CacheAndLogBindingResult(bool appliedOnUiCache, ::ByRef<::UnityEngine::UIElements::DataBindingManager_BindingData*> bindingData,
                                                                                             ::ByRef<::UnityEngine::UIElements::BindingResult> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(), "CacheAndLogBindingResult", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::DataBindingManager_BindingData*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::BindingResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, appliedOnUiCache, bindingData, result);
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::LogResult(::ByRef<::UnityEngine::UIElements::BindingResult> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(), "LogResult", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::BindingResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::Update() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::ValueTuple_2<bool, int64_t> UnityEngine::UIElements::VisualTreeDataBindingsUpdater::GetDataSourceVersion(::System::Object* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(), "GetDataSourceVersion",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<bool, int64_t>, false>(this, ___internal_method, source);
}
inline bool UnityEngine::UIElements::VisualTreeDataBindingsUpdater::IsPrefix(::ByRef<::Unity::Properties::PropertyPath> prefix, ::ByRef<::Unity::Properties::PropertyPath> path) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(), "IsPrefix", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Properties::PropertyPath>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Properties::PropertyPath>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, prefix, path);
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::ProcessDataSourceChangedRequests() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(),
                                                                             "ProcessDataSourceChangedRequests", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::OnPanelChanged(::UnityEngine::UIElements::BaseVisualElementPanel* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(), "OnPanelChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVisualElementPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p);
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::ProcessAllBindingRequests() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(),
                                                                             "ProcessAllBindingRequests", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::ProcessBindingRequests(::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(), "ProcessBindingRequests", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element);
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::ProcessPropertyChangedEvents(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Binding*>* ranUpdate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>::get(), "ProcessPropertyChangedEvents",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Binding*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ranUpdate);
}
inline ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater* UnityEngine::UIElements::VisualTreeDataBindingsUpdater::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::VisualTreeDataBindingsUpdater() {}
