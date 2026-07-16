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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater_VersionInfo::*)(::System::Object*, int64_t)>(
    &::UnityEngine::UIElements::VisualTreeDataBindingsUpdater_VersionInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c45778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater_VersionInfo>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater_VersionInfo::_ctor(::System::Object* source, int64_t version) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater_VersionInfo>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, version);
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c::*)()>(
    &::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c45c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c._ProcessDataSourceChangedRequests_b__29_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c::_ProcessDataSourceChangedRequests_b__29_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c45c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c*>(),
                                                             { "<ProcessDataSourceChangedRequests>b__29_0", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c::setStaticF___9(::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c*, "<>9", ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c*>(
      std::forward<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c*>(value));
}
inline ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c* UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c*, "<>9", ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c*>();
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c::setStaticF___9__29_0(::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>*, "<>9__29_0", ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c*>(
      std::forward<::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>*>(value));
}
inline ::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c::getStaticF___9__29_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>*, "<>9__29_0", ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c*>();
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c::_ProcessDataSourceChangedRequests_b__29_0(::UnityEngine::UIElements::VisualElement* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c*>(),
                                                           { "<ProcessDataSourceChangedRequests>b__29_0", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e);
}
inline ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c* UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater___c::VisualTreeDataBindingsUpdater___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater.get_bindingManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::DataBindingManager* (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)()>(
    &::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::get_bindingManager)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c435ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(), { "get_bindingManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater.get_profilerMarker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::ProfilerMarker (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)()>(
    &::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::get_profilerMarker)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6c4360c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)()>(&::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::_ctor)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x6c43668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater.OnHierarchyChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::HierarchyChangeType, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::VisualElement*>*)>(
    &::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::OnHierarchyChange)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x6c438ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(),
                                                             { "OnHierarchyChange",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::HierarchyChangeType>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater.OnVersionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(&::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::OnVersionChanged)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6c43ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater.CacheAndLogBindingResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)(bool, ::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*>,
                                                                                                                          ::by_ref<::UnityEngine::UIElements::BindingResult>)>(
    &::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::CacheAndLogBindingResult)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6c43dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(),
                                                             { "CacheAndLogBindingResult",
                                                               {},
                                                               { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingResult>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater.LogResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)(::by_ref<::UnityEngine::UIElements::BindingResult>)>(
    &::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::LogResult)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6c43ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(),
                                                                                           { "LogResult", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingResult>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)()>(&::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::Update)> {
  constexpr static std::size_t size = 0xda8;
  constexpr static std::size_t addrs = 0x6c4403c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater.GetDataSourceVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<bool, int64_t> (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)(::System::Object*)>(
    &::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::GetDataSourceVersion)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6c455cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(), { "GetDataSourceVersion", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater.IsPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)(
    ::by_ref<::Unity::Properties::PropertyPath>, ::by_ref<::Unity::Properties::PropertyPath>)>(&::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::IsPrefix)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6c45780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(),
                                                { "IsPrefix", {}, { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>(), ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater.ProcessDataSourceChangedRequests
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)()>(
    &::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::ProcessDataSourceChangedRequests)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x6c44fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(), { "ProcessDataSourceChangedRequests", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater.OnPanelChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(
    &::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::OnPanelChanged)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6c458ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(),
                                                                                           { "OnPanelChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)(bool)>(&::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6c459dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater.ProcessAllBindingRequests
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)()>(
    &::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::ProcessAllBindingRequests)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x6c44de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(), { "ProcessAllBindingRequests", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater.ProcessBindingRequests
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::ProcessBindingRequests)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6c45a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(),
                                                                                           { "ProcessBindingRequests", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater.ProcessPropertyChangedEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::*)(
    ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Binding*>*)>(&::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::ProcessPropertyChangedEvents)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x6c452a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(),
                                                { "ProcessPropertyChangedEvents", {}, { ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Binding*>*>() } })));
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
  this->___m_Updater = value;
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
  this->___m_BindingRegistrationRequests = value;
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
  this->___m_DataSourceChangedRequests = value;
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
  this->___m_RemovedElements = value;
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
  this->___m_BoundsElement = value;
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
  this->___m_VersionChanges = value;
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
  this->___m_TrackedObjects = value;
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
  this->___m_RanUpdate = value;
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
  this->___m_KnownSources = value;
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
  this->___m_DirtyBindings = value;
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
  this->___m_AttachedPanel = value;
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::setStaticF_s_UpdateProfilerMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_UpdateProfilerMarker", ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeDataBindingsUpdater::getStaticF_s_UpdateProfilerMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_UpdateProfilerMarker", ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>();
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::setStaticF_s_ProcessBindingRequestsProfilerMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ProcessBindingRequestsProfilerMarker", ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeDataBindingsUpdater::getStaticF_s_ProcessBindingRequestsProfilerMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ProcessBindingRequestsProfilerMarker", ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>();
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::setStaticF_s_ProcessDataSourcesProfilerMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ProcessDataSourcesProfilerMarker", ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeDataBindingsUpdater::getStaticF_s_ProcessDataSourcesProfilerMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ProcessDataSourcesProfilerMarker", ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>();
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::setStaticF_s_ShouldUpdateBindingProfilerMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ShouldUpdateBindingProfilerMarker", ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeDataBindingsUpdater::getStaticF_s_ShouldUpdateBindingProfilerMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ShouldUpdateBindingProfilerMarker", ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>();
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::setStaticF_s_UpdateBindingProfilerMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_UpdateBindingProfilerMarker", ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeDataBindingsUpdater::getStaticF_s_UpdateBindingProfilerMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_UpdateBindingProfilerMarker", ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>();
}
inline ::UnityEngine::UIElements::DataBindingManager* UnityEngine::UIElements::VisualTreeDataBindingsUpdater::get_bindingManager() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(), { "get_bindingManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DataBindingManager*>(this, ___internal_method);
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeDataBindingsUpdater::get_profilerMarker() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerMarker>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::OnHierarchyChange(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::HierarchyChangeType type,
                                                                                      ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::VisualElement*>* additionalContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(),
                                                           { "OnHierarchyChange",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::HierarchyChangeType>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, type, additionalContext);
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, versionChangeType);
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::CacheAndLogBindingResult(bool appliedOnUiCache, ::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*> bindingData,
                                                                                             ::by_ref<::UnityEngine::UIElements::BindingResult> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(),
                                                           { "CacheAndLogBindingResult",
                                                             {},
                                                             { ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, appliedOnUiCache, bindingData, result);
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::LogResult(::by_ref<::UnityEngine::UIElements::BindingResult> result) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(),
                                                                                         { "LogResult", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::Update() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ValueTuple_2<bool, int64_t> UnityEngine::UIElements::VisualTreeDataBindingsUpdater::GetDataSourceVersion(::System::Object* source) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(), { "GetDataSourceVersion", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<bool, int64_t>>(this, ___internal_method, source);
}
inline bool UnityEngine::UIElements::VisualTreeDataBindingsUpdater::IsPrefix(::by_ref<::Unity::Properties::PropertyPath> prefix, ::by_ref<::Unity::Properties::PropertyPath> path) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(),
                                              { "IsPrefix", {}, { ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>(), ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, prefix, path);
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::ProcessDataSourceChangedRequests() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(), { "ProcessDataSourceChangedRequests", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::OnPanelChanged(::UnityEngine::UIElements::BaseVisualElementPanel* p) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(),
                                                                                         { "OnPanelChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::ProcessAllBindingRequests() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(), { "ProcessAllBindingRequests", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::ProcessBindingRequests(::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(),
                                                                                         { "ProcessBindingRequests", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void UnityEngine::UIElements::VisualTreeDataBindingsUpdater::ProcessPropertyChangedEvents(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Binding*>* ranUpdate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>(),
                                              { "ProcessPropertyChangedEvents", {}, { ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Binding*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ranUpdate);
}
inline ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater* UnityEngine::UIElements::VisualTreeDataBindingsUpdater::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::VisualTreeDataBindingsUpdater*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeDataBindingsUpdater::VisualTreeDataBindingsUpdater() {}
