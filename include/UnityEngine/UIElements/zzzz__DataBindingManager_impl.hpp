#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DataBindingManager.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__HierarchyTraversal_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingLogLevel_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingResult_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingTarget_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DataSourceContext_impl.hpp"
#include "UnityEngine/zzzz__PropertyName_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DataBindingManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/zzzz__PropertyPath_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindablePropertyChangedEventArgs_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingLogLevel_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingResult_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingTarget_def.hpp"
#include "UnityEngine/UIElements/zzzz__Binding_def.hpp"
#include "UnityEngine/UIElements/zzzz__DataBindingManager_def.hpp"
#include "UnityEngine/UIElements/zzzz__DataSourceContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallback_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__PropertyChangedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_BindingRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager_BindingRequest::*)(
    ::by_ref<::UnityEngine::UIElements::BindingId>, ::UnityEngine::UIElements::Binding*, bool)>(&::UnityEngine::UIElements::DataBindingManager_BindingRequest::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6c3ee30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_BindingRequest>(),
                            { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>(), ::i2c::type_of<::UnityEngine::UIElements::Binding*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_BindingRequest.CancelRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::DataBindingManager_BindingRequest (::UnityEngine::UIElements::DataBindingManager_BindingRequest::*)()>(
    &::UnityEngine::UIElements::DataBindingManager_BindingRequest::CancelRequest)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6c3ee00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_BindingRequest>(), { "CancelRequest", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::DataBindingManager_BindingRequest::_ctor(::by_ref<::UnityEngine::UIElements::BindingId> bindingId, ::UnityEngine::UIElements::Binding* binding,
                                                                              bool shouldProcess) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_BindingRequest>(),
                          { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>(), ::i2c::type_of<::UnityEngine::UIElements::Binding*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bindingId, binding, shouldProcess);
}
inline ::UnityEngine::UIElements::DataBindingManager_BindingRequest UnityEngine::UIElements::DataBindingManager_BindingRequest::CancelRequest() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_BindingRequest>(), { "CancelRequest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DataBindingManager_BindingRequest>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "bindingId", ty: "::UnityEngine::UIElements::BindingId", modifiers: "", def_value: Some("{}") }, CppParam { name: "binding", ty:
// "::UnityEngine::UIElements::Binding*", modifiers: "", def_value: Some("{}") }, CppParam { name: "shouldProcess", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::DataBindingManager_BindingRequest::DataBindingManager_BindingRequest(::UnityEngine::UIElements::BindingId bindingId, ::UnityEngine::UIElements::Binding* binding,
                                                                                                          bool shouldProcess) noexcept {
  this->bindingId = bindingId;
  this->binding = binding;
  this->shouldProcess = shouldProcess;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DataBindingManager_BindingRequest::DataBindingManager_BindingRequest() {}
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::DataBindingManager_BindingDataCollection (*)()>(
    &::UnityEngine::UIElements::DataBindingManager_BindingDataCollection::Create)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6c4018c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection.AddBindingData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager_BindingDataCollection::*)(::UnityEngine::UIElements::DataBindingManager_BindingData*)>(
    &::UnityEngine::UIElements::DataBindingManager_BindingDataCollection::AddBindingData)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6c40254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>(),
                                                             { "AddBindingData", {}, { ::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection.TryGetBindingData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::DataBindingManager_BindingDataCollection::*)(
    ::by_ref<::UnityEngine::UIElements::BindingId>, ::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*>)>(
    &::UnityEngine::UIElements::DataBindingManager_BindingDataCollection::TryGetBindingData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c3d144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>(),
                            { "TryGetBindingData",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection.RemoveBindingData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::DataBindingManager_BindingDataCollection::*)(::UnityEngine::UIElements::DataBindingManager_BindingData*)>(
    &::UnityEngine::UIElements::DataBindingManager_BindingDataCollection::RemoveBindingData)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6c403dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>(),
                                                             { "RemoveBindingData", {}, { ::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection.GetBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>* (
    ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection::*)()>(&::UnityEngine::UIElements::DataBindingManager_BindingDataCollection::GetBindings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c3d0c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>(), { "GetBindings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection.GetBindingCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::DataBindingManager_BindingDataCollection::*)()>(
    &::UnityEngine::UIElements::DataBindingManager_BindingDataCollection::GetBindingCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6c40508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>(), { "GetBindingCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager_BindingDataCollection::*)()>(
    &::UnityEngine::UIElements::DataBindingManager_BindingDataCollection::Dispose)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6c40558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection UnityEngine::UIElements::DataBindingManager_BindingDataCollection::Create() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::DataBindingManager_BindingDataCollection::AddBindingData(::UnityEngine::UIElements::DataBindingManager_BindingData* bindingData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>(),
                                                                                         { "AddBindingData", {}, { ::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bindingData);
}
inline bool UnityEngine::UIElements::DataBindingManager_BindingDataCollection::TryGetBindingData(::by_ref<::UnityEngine::UIElements::BindingId> bindingId,
                                                                                                 ::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>(),
          { "TryGetBindingData", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, bindingId, data);
}
inline bool UnityEngine::UIElements::DataBindingManager_BindingDataCollection::RemoveBindingData(::UnityEngine::UIElements::DataBindingManager_BindingData* bindingData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>(),
                                                           { "RemoveBindingData", {}, { ::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, bindingData);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>* UnityEngine::UIElements::DataBindingManager_BindingDataCollection::GetBindings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>(), { "GetBindings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>*>(*this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::DataBindingManager_BindingDataCollection::GetBindingCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>(), { "GetBindingCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::DataBindingManager_BindingDataCollection::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::DataBindingManager_BindingDataCollection::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::DataBindingManager_BindingDataCollection::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_BindingPerId", ty:
// "::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::BindingId,::UnityEngine::UIElements::DataBindingManager_BindingData*>*", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_Bindings", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection::DataBindingManager_BindingDataCollection(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::BindingId, ::UnityEngine::UIElements::DataBindingManager_BindingData*>* m_BindingPerId,
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>* m_Bindings) noexcept {
  this->m_BindingPerId = m_BindingPerId;
  this->m_Bindings = m_Bindings;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection::DataBindingManager_BindingDataCollection() {}
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_BindingData.get_localDataSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::UIElements::DataBindingManager_BindingData::*)()>(
    &::UnityEngine::UIElements::DataBindingManager_BindingData::get_localDataSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c40634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>(), { "get_localDataSource", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_BindingData.set_localDataSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager_BindingData::*)(::System::Object*)>(
    &::UnityEngine::UIElements::DataBindingManager_BindingData::set_localDataSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c4063c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>(), { "set_localDataSource", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_BindingData.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager_BindingData::*)()>(&::UnityEngine::UIElements::DataBindingManager_BindingData::Reset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c3ffe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_BindingData.set_context
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager_BindingData::*)(::UnityEngine::UIElements::DataSourceContext)>(
    &::UnityEngine::UIElements::DataBindingManager_BindingData::set_context)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6c40644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>(),
                                                                                           { "set_context", {}, { ::i2c::type_of<::UnityEngine::UIElements::DataSourceContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_BindingData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager_BindingData::*)()>(&::UnityEngine::UIElements::DataBindingManager_BindingData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c3ffdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int64_t& UnityEngine::UIElements::DataBindingManager_BindingData::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr int64_t const& UnityEngine::UIElements::DataBindingManager_BindingData::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void UnityEngine::UIElements::DataBindingManager_BindingData::__cordl_internal_set_version(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr ::UnityEngine::UIElements::BindingTarget& UnityEngine::UIElements::DataBindingManager_BindingData::__cordl_internal_get_target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr ::UnityEngine::UIElements::BindingTarget const& UnityEngine::UIElements::DataBindingManager_BindingData::__cordl_internal_get_target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr void UnityEngine::UIElements::DataBindingManager_BindingData::__cordl_internal_set_target(::UnityEngine::UIElements::BindingTarget value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___target = value;
}
constexpr ::UnityEngine::UIElements::Binding*& UnityEngine::UIElements::DataBindingManager_BindingData::__cordl_internal_get_binding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binding;
}
constexpr ::UnityEngine::UIElements::Binding* const& UnityEngine::UIElements::DataBindingManager_BindingData::__cordl_internal_get_binding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binding;
}
constexpr void UnityEngine::UIElements::DataBindingManager_BindingData::__cordl_internal_set_binding(::UnityEngine::UIElements::Binding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binding = value;
}
constexpr ::UnityEngine::UIElements::DataSourceContext& UnityEngine::UIElements::DataBindingManager_BindingData::__cordl_internal_get_m_LastContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastContext;
}
constexpr ::UnityEngine::UIElements::DataSourceContext const& UnityEngine::UIElements::DataBindingManager_BindingData::__cordl_internal_get_m_LastContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastContext;
}
constexpr void UnityEngine::UIElements::DataBindingManager_BindingData::__cordl_internal_set_m_LastContext(::UnityEngine::UIElements::DataSourceContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastContext = value;
}
constexpr ::System::Object*& UnityEngine::UIElements::DataBindingManager_BindingData::__cordl_internal_get__localDataSource_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localDataSource_k__BackingField;
}
constexpr ::System::Object* const& UnityEngine::UIElements::DataBindingManager_BindingData::__cordl_internal_get__localDataSource_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localDataSource_k__BackingField;
}
constexpr void UnityEngine::UIElements::DataBindingManager_BindingData::__cordl_internal_set__localDataSource_k__BackingField(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localDataSource_k__BackingField = value;
}
constexpr ::System::Nullable_1<::UnityEngine::UIElements::BindingResult>& UnityEngine::UIElements::DataBindingManager_BindingData::__cordl_internal_get_m_SourceToUILastUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceToUILastUpdate;
}
constexpr ::System::Nullable_1<::UnityEngine::UIElements::BindingResult> const& UnityEngine::UIElements::DataBindingManager_BindingData::__cordl_internal_get_m_SourceToUILastUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceToUILastUpdate;
}
constexpr void UnityEngine::UIElements::DataBindingManager_BindingData::__cordl_internal_set_m_SourceToUILastUpdate(::System::Nullable_1<::UnityEngine::UIElements::BindingResult> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SourceToUILastUpdate = value;
}
constexpr ::System::Nullable_1<::UnityEngine::UIElements::BindingResult>& UnityEngine::UIElements::DataBindingManager_BindingData::__cordl_internal_get_m_UIToSourceLastUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UIToSourceLastUpdate;
}
constexpr ::System::Nullable_1<::UnityEngine::UIElements::BindingResult> const& UnityEngine::UIElements::DataBindingManager_BindingData::__cordl_internal_get_m_UIToSourceLastUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UIToSourceLastUpdate;
}
constexpr void UnityEngine::UIElements::DataBindingManager_BindingData::__cordl_internal_set_m_UIToSourceLastUpdate(::System::Nullable_1<::UnityEngine::UIElements::BindingResult> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UIToSourceLastUpdate = value;
}
inline ::System::Object* UnityEngine::UIElements::DataBindingManager_BindingData::get_localDataSource() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>(), { "get_localDataSource", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DataBindingManager_BindingData::set_localDataSource(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>(), { "set_localDataSource", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::DataBindingManager_BindingData::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DataBindingManager_BindingData::set_context(::UnityEngine::UIElements::DataSourceContext value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>(),
                                                                                         { "set_context", {}, { ::i2c::type_of<::UnityEngine::UIElements::DataSourceContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::DataBindingManager_BindingData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::DataBindingManager_BindingData* UnityEngine::UIElements::DataBindingManager_BindingData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::DataBindingManager_BindingData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DataBindingManager_BindingData::DataBindingManager_BindingData() {}
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_ChangesFromUI._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager_ChangesFromUI::*)(::UnityEngine::UIElements::DataBindingManager_BindingData*)>(
    &::UnityEngine::UIElements::DataBindingManager_ChangesFromUI::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c40748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_ChangesFromUI>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_ChangesFromUI.get_IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::DataBindingManager_ChangesFromUI::*)()>(
    &::UnityEngine::UIElements::DataBindingManager_ChangesFromUI::get_IsValid)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c40768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_ChangesFromUI>(), { "get_IsValid", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::DataBindingManager_ChangesFromUI::_ctor(::UnityEngine::UIElements::DataBindingManager_BindingData* bindingData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_ChangesFromUI>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bindingData);
}
inline bool UnityEngine::UIElements::DataBindingManager_ChangesFromUI::get_IsValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_ChangesFromUI>(), { "get_IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "version", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "binding", ty: "::UnityEngine::UIElements::Binding*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "bindingData", ty: "::UnityEngine::UIElements::DataBindingManager_BindingData*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::DataBindingManager_ChangesFromUI::DataBindingManager_ChangesFromUI(int64_t version, ::UnityEngine::UIElements::Binding* binding,
                                                                                                        ::UnityEngine::UIElements::DataBindingManager_BindingData* bindingData) noexcept {
  this->version = version;
  this->binding = binding;
  this->bindingData = bindingData;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DataBindingManager_ChangesFromUI::DataBindingManager_ChangesFromUI() {}
//  Writing Method size for method: ::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter.get_boundElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* (
    ::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter::*)()>(
    &::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter::get_boundElements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c40a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter*>(), { "get_boundElements", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter.set_boundElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter::*)(
    ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*)>(
    &::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter::set_boundElements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c40aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter*>(),
                                                { "set_boundElements", {}, { ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter.get_results
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* (
    ::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter::*)()>(
    &::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter::get_results)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c40aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter*>(), { "get_results", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter.set_results
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*)>(
    &::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter::set_results)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c40ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter*>(),
                                                             { "set_results", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter.TraverseRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter::*)(
    ::UnityEngine::UIElements::VisualElement*, int32_t)>(&::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter::TraverseRecursive)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6c40ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter*>(),
                                                            { ::i2c::class_of<::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter::*)()>(
    &::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c40844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*&
UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter::__cordl_internal_get__boundElements_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundElements_k__BackingField;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* const&
UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter::__cordl_internal_get__boundElements_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundElements_k__BackingField;
}
constexpr void UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter::__cordl_internal_set__boundElements_k__BackingField(
    ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____boundElements_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*&
UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter::__cordl_internal_get__results_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____results_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* const&
UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter::__cordl_internal_get__results_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____results_k__BackingField;
}
constexpr void UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter::__cordl_internal_set__results_k__BackingField(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____results_k__BackingField = value;
}
inline ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*
UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter::get_boundElements() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter*>(), { "get_boundElements", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter::set_boundElements(
    ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter*>(),
                                                           { "set_boundElements", {}, { ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*
UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter::get_results() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter*>(), { "get_results", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>(this, ___internal_method);
}
inline void
UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter::set_results(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter*>(),
                                                           { "set_results", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter::TraverseRecursive(::UnityEngine::UIElements::VisualElement* element, int32_t depth) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element, depth);
}
inline void UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter*
UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter() {}
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker.GetTrackedElementsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::*)()>(
    &::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::GetTrackedElementsCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6c3cd90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker*>(), { "GetTrackedElementsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker.GetBoundElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* (
    ::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::*)()>(&::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::GetBoundElements)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c3cdf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker*>(), { "GetBoundElements", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(
    &::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::_ctor)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6c3c364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker.SetDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::*)()>(
    &::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::SetDirty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c3f8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker*>(), { "SetDirty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker.TryGetBindingCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::*)(
    ::UnityEngine::UIElements::VisualElement*, ::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>)>(
    &::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::TryGetBindingCollection)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6c3d058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker*>(),
                            { "TryGetBindingCollection",
                              {},
                              { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker.IsTrackingElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::IsTrackingElement)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c3e3a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker*>(),
                                                                                           { "IsTrackingElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker.StartTrackingBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataBindingManager_BindingData*)>(
        &::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::StartTrackingBinding)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x6c3db00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker*>(),
            { "StartTrackingBinding", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker.OnPropertyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::*)(
    ::UnityEngine::UIElements::PropertyChangedEvent*,
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>*)>(
    &::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::OnPropertyChanged)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x6c40848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker*>(),
            { "OnPropertyChanged",
              {},
              { ::i2c::type_of<::UnityEngine::UIElements::PropertyChangedEvent*>(),
                ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker.StopTrackingBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataBindingManager_BindingData*)>(
        &::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::StopTrackingBinding)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x6c3dfec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker*>(),
            { "StopTrackingBinding", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker.StopTrackingElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::StopTrackingElement)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6c3e72c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker*>(),
                                                                                           { "StopTrackingElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::*)()>(
    &::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::Dispose)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x6c3eb28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker.OrderBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::OrderBindings)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6c407a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker*>(),
                                                                                           { "OrderBindings", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::BaseVisualElementPanel*& UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::__cordl_internal_get_m_Panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Panel;
}
constexpr ::UnityEngine::UIElements::BaseVisualElementPanel* const& UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::__cordl_internal_get_m_Panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Panel;
}
constexpr void UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::__cordl_internal_set_m_Panel(::UnityEngine::UIElements::BaseVisualElementPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Panel = value;
}
constexpr ::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter*&
UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::__cordl_internal_get_m_BindingSorter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingSorter;
}
constexpr ::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter* const&
UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::__cordl_internal_get_m_BindingSorter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingSorter;
}
constexpr void UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::__cordl_internal_set_m_BindingSorter(
    ::UnityEngine::UIElements::HierarchyBindingTracker_DataBindingManager_HierarchicalBindingsSorter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BindingSorter = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>*&
UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::__cordl_internal_get_m_BindingDataPerElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingDataPerElement;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>* const&
UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::__cordl_internal_get_m_BindingDataPerElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingDataPerElement;
}
constexpr void UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::__cordl_internal_set_m_BindingDataPerElement(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BindingDataPerElement = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*&
UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::__cordl_internal_get_m_BoundElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BoundElements;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* const&
UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::__cordl_internal_get_m_BoundElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BoundElements;
}
constexpr void
UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::__cordl_internal_set_m_BoundElements(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BoundElements = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*&
UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::__cordl_internal_get_m_OrderedBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OrderedBindings;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* const&
UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::__cordl_internal_get_m_OrderedBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OrderedBindings;
}
constexpr void
UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::__cordl_internal_set_m_OrderedBindings(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OrderedBindings = value;
}
constexpr bool& UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::__cordl_internal_get_m_IsDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsDirty;
}
constexpr bool const& UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::__cordl_internal_get_m_IsDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsDirty;
}
constexpr void UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::__cordl_internal_set_m_IsDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsDirty = value;
}
constexpr ::UnityEngine::UIElements::EventCallback_2<
    ::UnityEngine::UIElements::PropertyChangedEvent*,
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>*>*&
UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::__cordl_internal_get_m_OnPropertyChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnPropertyChanged;
}
constexpr ::UnityEngine::UIElements::EventCallback_2<
    ::UnityEngine::UIElements::PropertyChangedEvent*,
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>*>* const&
UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::__cordl_internal_get_m_OnPropertyChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnPropertyChanged;
}
constexpr void UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::__cordl_internal_set_m_OnPropertyChanged(
    ::UnityEngine::UIElements::EventCallback_2<
        ::UnityEngine::UIElements::PropertyChangedEvent*,
        ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnPropertyChanged = value;
}
inline int32_t UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::GetTrackedElementsCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker*>(), { "GetTrackedElementsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::GetBoundElements() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker*>(), { "GetBoundElements", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::_ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline void UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::SetDirty() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker*>(), { "SetDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::TryGetBindingCollection(::UnityEngine::UIElements::VisualElement* element,
                                                                                                         ::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingDataCollection> collection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker*>(),
                          { "TryGetBindingCollection",
                            {},
                            { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, element, collection);
}
inline bool UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::IsTrackingElement(::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker*>(),
                                                                                         { "IsTrackingElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, element);
}
inline void UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::StartTrackingBinding(::UnityEngine::UIElements::VisualElement* element,
                                                                                                      ::UnityEngine::UIElements::DataBindingManager_BindingData* binding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker*>(),
                       { "StartTrackingBinding", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element, binding);
}
inline void UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::OnPropertyChanged(
    ::UnityEngine::UIElements::PropertyChangedEvent* evt,
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>* bindingCollection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker*>(),
          { "OnPropertyChanged",
            {},
            { ::i2c::type_of<::UnityEngine::UIElements::PropertyChangedEvent*>(),
              ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataBindingManager_BindingDataCollection>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, bindingCollection);
}
inline void UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::StopTrackingBinding(::UnityEngine::UIElements::VisualElement* element,
                                                                                                     ::UnityEngine::UIElements::DataBindingManager_BindingData* binding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker*>(),
                       { "StopTrackingBinding", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element, binding);
}
inline void UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::StopTrackingElement(::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker*>(),
                                                                                         { "StopTrackingElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::OrderBindings(::UnityEngine::UIElements::VisualElement* root) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker*>(),
                                                                                         { "OrderBindings", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root);
}
inline ::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker*
UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::New_ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker*>(panel));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker::DataBindingManager_HierarchyBindingTracker() {}
//  Writing Method size for method: ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo.get_lastVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::*)()>(
    &::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::get_lastVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c41554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>(), { "get_lastVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo.set_lastVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::*)(int64_t)>(
    &::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::set_lastVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c4155c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>(),
                                                                                           { "set_lastVersion", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo.get_refCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::*)()>(
    &::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::get_refCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c41564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>(), { "get_refCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo.set_refCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::*)(int32_t)>(
    &::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::set_refCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c4156c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>(),
                                                                                           { "set_refCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo.get_detectedChanges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::HashSet_1<::Unity::Properties::PropertyPath>* (::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::*)()>(
        &::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::get_detectedChanges)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c41470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>(), { "get_detectedChanges", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo.get_detectedChangesNoAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::HashSet_1<::Unity::Properties::PropertyPath>* (::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::*)()>(
        &::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::get_detectedChangesNoAlloc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c41574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>(), { "get_detectedChangesNoAlloc", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::*)()>(
    &::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c40cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::Unity::Properties::PropertyPath>*&
UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::__cordl_internal_get_m_DetectedChanges() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DetectedChanges;
}
constexpr ::System::Collections::Generic::HashSet_1<::Unity::Properties::PropertyPath>* const&
UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::__cordl_internal_get_m_DetectedChanges() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DetectedChanges;
}
constexpr void UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::__cordl_internal_set_m_DetectedChanges(
    ::System::Collections::Generic::HashSet_1<::Unity::Properties::PropertyPath>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DetectedChanges = value;
}
constexpr int64_t& UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::__cordl_internal_get__lastVersion_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastVersion_k__BackingField;
}
constexpr int64_t const& UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::__cordl_internal_get__lastVersion_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastVersion_k__BackingField;
}
constexpr void UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::__cordl_internal_set__lastVersion_k__BackingField(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastVersion_k__BackingField = value;
}
constexpr int32_t& UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::__cordl_internal_get__refCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refCount_k__BackingField;
}
constexpr int32_t const& UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::__cordl_internal_get__refCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refCount_k__BackingField;
}
constexpr void UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::__cordl_internal_set__refCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____refCount_k__BackingField = value;
}
inline int64_t UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::get_lastVersion() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>(), { "get_lastVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::set_lastVersion(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>(),
                                                                                         { "set_lastVersion", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::get_refCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>(), { "get_refCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::set_refCount(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>(),
                                                                                         { "set_refCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::HashSet_1<::Unity::Properties::PropertyPath>* UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::get_detectedChanges() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>(), { "get_detectedChanges", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::Unity::Properties::PropertyPath>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::HashSet_1<::Unity::Properties::PropertyPath>* UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::get_detectedChangesNoAlloc() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>(), { "get_detectedChangesNoAlloc", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::Unity::Properties::PropertyPath>*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo* UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo::HierarchyDataSourceTracker_DataBindingManager_SourceInfo() {}
//  Writing Method size for method: ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal::*)(
    ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*)>(&::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6c40dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal.Invalidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*, ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*)>(
    &::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal::Invalidate)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x6c40fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal*>(),
                                                             { "Invalidate",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal.TraverseRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal::*)(
    ::UnityEngine::UIElements::VisualElement*, int32_t)>(&::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal::TraverseRecursive)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6c4157c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal*>(),
                                                            { ::i2c::class_of<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*&
UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal::__cordl_internal_get_m_DataSourceTracker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DataSourceTracker;
}
constexpr ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker* const&
UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal::__cordl_internal_get_m_DataSourceTracker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DataSourceTracker;
}
constexpr void UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal::__cordl_internal_set_m_DataSourceTracker(
    ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DataSourceTracker = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*&
UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal::__cordl_internal_get_m_VisitedElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisitedElements;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* const&
UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal::__cordl_internal_get_m_VisitedElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisitedElements;
}
constexpr void UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal::__cordl_internal_set_m_VisitedElements(
    ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VisitedElements = value;
}
inline void UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal::_ctor(
    ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker* dataSourceTracker) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSourceTracker);
}
inline void UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal::Invalidate(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* addedOrMovedElements,
    ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* removedElements) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal*>(),
                                                           { "Invalidate",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, addedOrMovedElements, removedElements);
}
inline void UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal::TraverseRecursive(::UnityEngine::UIElements::VisualElement* element, int32_t depth) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element, depth);
}
inline ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal*
UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal::New_ctor(
    ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker* dataSourceTracker) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal*>(dataSourceTracker));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal() {}
//  Writing Method size for method: ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_ObjectComparer.System_Collections_Generic_IEqualityComparer_System_Object__Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_ObjectComparer::*)(::System::Object*, ::System::Object*)>(
    &::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_ObjectComparer::System_Collections_Generic_IEqualityComparer_System_Object__Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6c41668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_ObjectComparer*>(),
                                         { "System.Collections.Generic.IEqualityComparer<System.Object>.Equals", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_ObjectComparer.System_Collections_Generic_IEqualityComparer_System_Object__GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_ObjectComparer::*)(::System::Object*)>(
    &::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_ObjectComparer::System_Collections_Generic_IEqualityComparer_System_Object__GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c416f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_ObjectComparer*>(),
                                                             { "System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_ObjectComparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_ObjectComparer::*)()>(
    &::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_ObjectComparer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c40dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_ObjectComparer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_ObjectComparer::System_Collections_Generic_IEqualityComparer_System_Object__Equals(::System::Object* x,
                                                                                                                                                                      ::System::Object* y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_ObjectComparer*>(),
                                       { "System.Collections.Generic.IEqualityComparer<System.Object>.Equals", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_ObjectComparer::System_Collections_Generic_IEqualityComparer_System_Object__GetHashCode(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_ObjectComparer*>(),
                                                           { "System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_ObjectComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_ObjectComparer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_ObjectComparer* UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_ObjectComparer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_ObjectComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::System::Object*>"
constexpr UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_ObjectComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*
UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_ObjectComparer::i___System__Collections__Generic__IEqualityComparer_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::System::Object*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_ObjectComparer::HierarchyDataSourceTracker_DataBindingManager_ObjectComparer() {}
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker.GetPooledSourceInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo* (
    ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::*)()>(&::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::GetPooledSourceInfo)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6c40bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(), { "GetPooledSourceInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker.ReleasePooledSourceInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::*)(
    ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*)>(&::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::ReleasePooledSourceInfo)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6c40cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                                                { "ReleasePooledSourceInfo", {}, { ::i2c::type_of<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::*)(::UnityEngine::UIElements::DataBindingManager*)>(
    &::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::_ctor)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x6c3c034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::DataBindingManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker.IncreaseBindingRefCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::*)(
    ::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*>)>(&::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::IncreaseBindingRefCount)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x6c3d928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                                                             { "IncreaseBindingRefCount", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker.DecreaseBindingRefCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::*)(
    ::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*>)>(&::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::DecreaseBindingRefCount)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6c3d648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                                                             { "DecreaseBindingRefCount", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker.IncreaseRefCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::*)(::System::Object*)>(
    &::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::IncreaseRefCount)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x6c3fb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                                                                                           { "IncreaseRefCount", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker.OnVisualElementPropertyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::*)(::UnityEngine::UIElements::PropertyChangedEvent*, ::UnityEngine::UIElements::VisualElement*)>(
        &::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::OnVisualElementPropertyChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c40e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
            { "OnVisualElementPropertyChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::PropertyChangedEvent*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker.DecreaseRefCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::*)(::System::Object*)>(
    &::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::DecreaseRefCount)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x6c3f8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                                                                                           { "DecreaseRefCount", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker.GetTrackedDataSourcesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::*)()>(
    &::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::GetTrackedDataSourcesCount)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6c3c530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(), { "GetTrackedDataSourcesCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker.GetChangesFromSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::Unity::Properties::PropertyPath>* (
    ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::*)(::System::Object*)>(&::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::GetChangesFromSource)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6c3ce54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                                                                                           { "GetChangesFromSource", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker.ClearChangesFromSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::*)(::System::Object*)>(
    &::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::ClearChangesFromSource)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6c3cef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                                                                                           { "ClearChangesFromSource", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker.InvalidateCachedDataSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::*)(
    ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*, ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*)>(
    &::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::InvalidateCachedDataSource)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x6c3e824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                                                             { "InvalidateCachedDataSource",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker.GetResolvedDataSourceContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::DataSourceContext (::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataBindingManager_BindingData*)>(
    &::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::GetResolvedDataSourceContext)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x6c3c97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
            { "GetResolvedDataSourceContext", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker.TrackPropertyChanges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::*)(
    ::System::Object*, ::UnityEngine::UIElements::BindablePropertyChangedEventArgs)>(&::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::TrackPropertyChanges)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6c413cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                                         { "TrackPropertyChanges", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker.TrackPropertyChanges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::*)(::System::Object*, ::Unity::Properties::PropertyPath)>(
    &::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::TrackPropertyChanges)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6c40ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                                                             { "TrackPropertyChanges", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Unity::Properties::PropertyPath>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker.TryGetLastVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::*)(::System::Object*, ::by_ref<int64_t>)>(
    &::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::TryGetLastVersion)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6c3c59c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                                                                                           { "TryGetLastVersion", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker.UpdateVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::*)(::System::Object*, int64_t)>(
    &::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::UpdateVersion)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6c3c654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                                                                                           { "UpdateVersion", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker.GetHierarchicalDataSourceContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::DataSourceContext (::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::*)(
    ::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::GetHierarchicalDataSourceContext)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x6c411bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                                                             { "GetHierarchicalDataSourceContext", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker.RemoveHierarchyDataSourceContextFromElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::RemoveHierarchyDataSourceContextFromElement)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c414f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                                                             { "RemoveHierarchyDataSourceContextFromElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::*)()>(
    &::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::Dispose)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6c3ecf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker.ClearSourceCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::*)()>(
    &::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::ClearSourceCache)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x6c3fd4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(), { "ClearSourceCache", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>*&
UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::__cordl_internal_get_m_SourceInfosPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceInfosPool;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>* const&
UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::__cordl_internal_get_m_SourceInfosPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceInfosPool;
}
constexpr void UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::__cordl_internal_set_m_SourceInfosPool(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SourceInfosPool = value;
}
constexpr ::UnityEngine::UIElements::DataBindingManager*& UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::__cordl_internal_get_m_DataBindingManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DataBindingManager;
}
constexpr ::UnityEngine::UIElements::DataBindingManager* const& UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::__cordl_internal_get_m_DataBindingManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DataBindingManager;
}
constexpr void UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::__cordl_internal_set_m_DataBindingManager(::UnityEngine::UIElements::DataBindingManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DataBindingManager = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataSourceContext>*&
UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::__cordl_internal_get_m_ResolvedHierarchicalDataSourceContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResolvedHierarchicalDataSourceContext;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataSourceContext>* const&
UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::__cordl_internal_get_m_ResolvedHierarchicalDataSourceContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResolvedHierarchicalDataSourceContext;
}
constexpr void UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::__cordl_internal_set_m_ResolvedHierarchicalDataSourceContext(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataSourceContext>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ResolvedHierarchicalDataSourceContext = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Binding*, int32_t>*&
UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::__cordl_internal_get_m_BindingRefCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingRefCount;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Binding*, int32_t>* const&
UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::__cordl_internal_get_m_BindingRefCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingRefCount;
}
constexpr void UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::__cordl_internal_set_m_BindingRefCount(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Binding*, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BindingRefCount = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>*&
UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::__cordl_internal_get_m_SourceInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceInfos;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>* const&
UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::__cordl_internal_get_m_SourceInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceInfos;
}
constexpr void UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::__cordl_internal_set_m_SourceInfos(
    ::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SourceInfos = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Object*>*& UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::__cordl_internal_get_m_SourcesToRemove() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourcesToRemove;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Object*>* const& UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::__cordl_internal_get_m_SourcesToRemove() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourcesToRemove;
}
constexpr void UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::__cordl_internal_set_m_SourcesToRemove(::System::Collections::Generic::HashSet_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SourcesToRemove = value;
}
constexpr ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal*&
UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::__cordl_internal_get_m_InvalidateResolvedDataSources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InvalidateResolvedDataSources;
}
constexpr ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal* const&
UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::__cordl_internal_get_m_InvalidateResolvedDataSources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InvalidateResolvedDataSources;
}
constexpr void UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::__cordl_internal_set_m_InvalidateResolvedDataSources(
    ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_InvalidateDataSourcesTraversal* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InvalidateResolvedDataSources = value;
}
constexpr ::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>*&
UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::__cordl_internal_get_m_Handler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Handler;
}
constexpr ::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>* const&
UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::__cordl_internal_get_m_Handler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Handler;
}
constexpr void
UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::__cordl_internal_set_m_Handler(::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Handler = value;
}
constexpr ::UnityEngine::UIElements::EventCallback_2<::UnityEngine::UIElements::PropertyChangedEvent*, ::UnityEngine::UIElements::VisualElement*>*&
UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::__cordl_internal_get_m_VisualElementHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisualElementHandler;
}
constexpr ::UnityEngine::UIElements::EventCallback_2<::UnityEngine::UIElements::PropertyChangedEvent*, ::UnityEngine::UIElements::VisualElement*>* const&
UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::__cordl_internal_get_m_VisualElementHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisualElementHandler;
}
constexpr void UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::__cordl_internal_set_m_VisualElementHandler(
    ::UnityEngine::UIElements::EventCallback_2<::UnityEngine::UIElements::PropertyChangedEvent*, ::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VisualElementHandler = value;
}
inline ::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo* UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::GetPooledSourceInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(), { "GetPooledSourceInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::ReleasePooledSourceInfo(::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                                              { "ReleasePooledSourceInfo", {}, { ::i2c::type_of<::UnityEngine::UIElements::HierarchyDataSourceTracker_DataBindingManager_SourceInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::_ctor(::UnityEngine::UIElements::DataBindingManager* manager) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::DataBindingManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, manager);
}
inline void UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::IncreaseBindingRefCount(::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*> bindingData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                                                           { "IncreaseBindingRefCount", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindingData);
}
inline void UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::DecreaseBindingRefCount(::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*> bindingData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                                                           { "DecreaseBindingRefCount", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindingData);
}
inline void UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::IncreaseRefCount(::System::Object* dataSource) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                                                                                         { "IncreaseRefCount", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSource);
}
inline void UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::OnVisualElementPropertyChanged(::UnityEngine::UIElements::PropertyChangedEvent* evt,
                                                                                                                   ::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                       { "OnVisualElementPropertyChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::PropertyChangedEvent*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, element);
}
inline void UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::DecreaseRefCount(::System::Object* dataSource) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                                                                                         { "DecreaseRefCount", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSource);
}
inline int32_t UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::GetTrackedDataSourcesCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(), { "GetTrackedDataSourcesCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::HashSet_1<::Unity::Properties::PropertyPath>*
UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::GetChangesFromSource(::System::Object* dataSource) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                                                                                         { "GetChangesFromSource", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::Unity::Properties::PropertyPath>*>(this, ___internal_method, dataSource);
}
inline void UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::ClearChangesFromSource(::System::Object* dataSource) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                                                                                         { "ClearChangesFromSource", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSource);
}
inline void UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::InvalidateCachedDataSource(
    ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* elements,
    ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* removedElements) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                                                           { "InvalidateCachedDataSource",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elements, removedElements);
}
inline ::UnityEngine::UIElements::DataSourceContext
UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::GetResolvedDataSourceContext(::UnityEngine::UIElements::VisualElement* element,
                                                                                                     ::UnityEngine::UIElements::DataBindingManager_BindingData* bindingData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
          { "GetResolvedDataSourceContext", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DataSourceContext>(this, ___internal_method, element, bindingData);
}
inline void UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::TrackPropertyChanges(::System::Object* sender, ::UnityEngine::UIElements::BindablePropertyChangedEventArgs args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                                              { "TrackPropertyChanges", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, args);
}
inline void UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::TrackPropertyChanges(::System::Object* sender, ::Unity::Properties::PropertyPath propertyPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                                                           { "TrackPropertyChanges", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Unity::Properties::PropertyPath>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, propertyPath);
}
inline bool UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::TryGetLastVersion(::System::Object* source, ::by_ref<int64_t> version) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                                                                                         { "TryGetLastVersion", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, version);
}
inline void UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::UpdateVersion(::System::Object* source, int64_t version) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                                                                                         { "UpdateVersion", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, version);
}
inline ::UnityEngine::UIElements::DataSourceContext
UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::GetHierarchicalDataSourceContext(::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                                                                                         { "GetHierarchicalDataSourceContext", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DataSourceContext>(this, ___internal_method, element);
}
inline void UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::RemoveHierarchyDataSourceContextFromElement(::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(),
                                                           { "RemoveHierarchyDataSourceContextFromElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::ClearSourceCache() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(), { "ClearSourceCache", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*
UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::New_ctor(::UnityEngine::UIElements::DataBindingManager* manager) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*>(manager));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker::DataBindingManager_HierarchyDataSourceTracker() {}
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.get_logLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BindingLogLevel (::UnityEngine::UIElements::DataBindingManager::*)()>(
    &::UnityEngine::UIElements::DataBindingManager::get_logLevel)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6c3be68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(), { "get_logLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.set_logLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager::*)(::UnityEngine::UIElements::BindingLogLevel)>(
    &::UnityEngine::UIElements::DataBindingManager::set_logLevel)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6c2d418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(), { "set_logLevel", {}, { ::i2c::type_of<::UnityEngine::UIElements::BindingLogLevel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.ResetLogLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager::*)()>(&::UnityEngine::UIElements::DataBindingManager::ResetLogLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c2d500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(), { "ResetLogLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager::*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(
    &::UnityEngine::UIElements::DataBindingManager::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6c3bf04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.GetTrackedDataSourcesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::DataBindingManager::*)()>(&::UnityEngine::UIElements::DataBindingManager::GetTrackedDataSourcesCount)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c3c51c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(), { "GetTrackedDataSourcesCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.TryGetLastVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::DataBindingManager::*)(::System::Object*, ::by_ref<int64_t>)>(
    &::UnityEngine::UIElements::DataBindingManager::TryGetLastVersion)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c3c588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                                                                           { "TryGetLastVersion", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.UpdateVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager::*)(::System::Object*, int64_t)>(
    &::UnityEngine::UIElements::DataBindingManager::UpdateVersion)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c3c640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                                                                           { "UpdateVersion", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.CacheUIBindingResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager::*)(
    ::UnityEngine::UIElements::DataBindingManager_BindingData*, ::UnityEngine::UIElements::BindingResult)>(&::UnityEngine::UIElements::DataBindingManager::CacheUIBindingResult)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6c3c704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
            { "CacheUIBindingResult", {}, { ::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>(), ::i2c::type_of<::UnityEngine::UIElements::BindingResult>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.TryGetLastUIBindingResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::DataBindingManager::*)(
    ::UnityEngine::UIElements::DataBindingManager_BindingData*, ::by_ref<::UnityEngine::UIElements::BindingResult>)>(&::UnityEngine::UIElements::DataBindingManager::TryGetLastUIBindingResult)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6c3c774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                         { "TryGetLastUIBindingResult",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingResult>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.CacheSourceBindingResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager::*)(
    ::UnityEngine::UIElements::DataBindingManager_BindingData*, ::UnityEngine::UIElements::BindingResult)>(&::UnityEngine::UIElements::DataBindingManager::CacheSourceBindingResult)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6c3c800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
            { "CacheSourceBindingResult", {}, { ::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>(), ::i2c::type_of<::UnityEngine::UIElements::BindingResult>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.TryGetLastSourceBindingResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::DataBindingManager::*)(
    ::UnityEngine::UIElements::DataBindingManager_BindingData*, ::by_ref<::UnityEngine::UIElements::BindingResult>)>(&::UnityEngine::UIElements::DataBindingManager::TryGetLastSourceBindingResult)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6c3c870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                         { "TryGetLastSourceBindingResult",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingResult>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.GetResolvedDataSourceContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::DataSourceContext (::UnityEngine::UIElements::DataBindingManager::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::DataBindingManager_BindingData*)>(&::UnityEngine::UIElements::DataBindingManager::GetResolvedDataSourceContext)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6c3c8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
            { "GetResolvedDataSourceContext", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.GetBoundElementsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::DataBindingManager::*)()>(&::UnityEngine::UIElements::DataBindingManager::GetBoundElementsCount)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c3cd7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(), { "GetBoundElementsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.GetBoundElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::VisualElement*>* (::UnityEngine::UIElements::DataBindingManager::*)()>(
    &::UnityEngine::UIElements::DataBindingManager::GetBoundElements)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c3cde0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(), { "GetBoundElements", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.GetChangedDetectedFromUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_ChangesFromUI>* (
    ::UnityEngine::UIElements::DataBindingManager::*)()>(&::UnityEngine::UIElements::DataBindingManager::GetChangedDetectedFromUI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c3ce38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(), { "GetChangedDetectedFromUI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.GetChangedDetectedFromSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::Unity::Properties::PropertyPath>* (
    ::UnityEngine::UIElements::DataBindingManager::*)(::System::Object*)>(&::UnityEngine::UIElements::DataBindingManager::GetChangedDetectedFromSource)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c3ce40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(), { "GetChangedDetectedFromSource", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.ClearChangesFromSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager::*)(::System::Object*)>(
    &::UnityEngine::UIElements::DataBindingManager::ClearChangesFromSource)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c3cedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(), { "ClearChangesFromSource", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.GetBindingData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>* (
    ::UnityEngine::UIElements::DataBindingManager::*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::DataBindingManager::GetBindingData)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6c3cfa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                                                                           { "GetBindingData", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.TryGetBindingData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::DataBindingManager::*)(
    ::UnityEngine::UIElements::VisualElement*, ::by_ref<::UnityEngine::UIElements::BindingId>, ::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*>)>(
    &::UnityEngine::UIElements::DataBindingManager::TryGetBindingData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6c3d0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                                             { "TryGetBindingData",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.RegisterBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager::*)(
    ::UnityEngine::UIElements::VisualElement*, ::by_ref<::UnityEngine::UIElements::BindingId>, ::UnityEngine::UIElements::Binding*)>(&::UnityEngine::UIElements::DataBindingManager::RegisterBinding)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x6c3d1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                                             { "RegisterBinding",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::Binding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.UnregisterBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager::*)(
    ::UnityEngine::UIElements::VisualElement*, ::by_ref<::UnityEngine::UIElements::BindingId>)>(&::UnityEngine::UIElements::DataBindingManager::UnregisterBinding)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x6c3dcec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                            { "UnregisterBinding", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.TransferBindingRequests
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::DataBindingManager::TransferBindingRequests)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6c3e258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                                                                           { "TransferBindingRequests", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.InvalidateCachedDataSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager::*)(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*,
                                                                                                               ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*)>(
    &::UnityEngine::UIElements::DataBindingManager::InvalidateCachedDataSource)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c3e810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                                             { "InvalidateCachedDataSource",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager::*)()>(&::UnityEngine::UIElements::DataBindingManager::Dispose)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c3ea98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.CreateBindingRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::by_ref<::UnityEngine::UIElements::BindingId>, ::UnityEngine::UIElements::Binding*)>(
    &::UnityEngine::UIElements::DataBindingManager::CreateBindingRequest)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x6c3e40c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                                             { "CreateBindingRequest",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::Binding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.ProcessBindingRequests
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::DataBindingManager::ProcessBindingRequests)> {
  constexpr static std::size_t size = 0x558;
  constexpr static std::size_t addrs = 0x6c3ee60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                                                                           { "ProcessBindingRequests", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.ClearAllBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::DataBindingManager::ClearAllBindings)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x6c3f3b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                                                                           { "ClearAllBindings", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.AnyPendingBindingRequests
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::DataBindingManager::AnyPendingBindingRequests)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6c3f60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                                                                           { "AnyPendingBindingRequests", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.TryGetBindingRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*, ::by_ref<::UnityEngine::UIElements::BindingId>,
                                                                ::by_ref<::UnityEngine::UIElements::Binding*>)>(&::UnityEngine::UIElements::DataBindingManager::TryGetBindingRequest)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6c3f6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                                             { "TryGetBindingRequest",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Binding*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.DirtyBindingOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager::*)()>(&::UnityEngine::UIElements::DataBindingManager::DirtyBindingOrder)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c3f890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(), { "DirtyBindingOrder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.TrackDataSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager::*)(::System::Object*, ::System::Object*)>(
    &::UnityEngine::UIElements::DataBindingManager::TrackDataSource)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6c3f8b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                                                                           { "TrackDataSource", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.ClearSourceCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager::*)()>(&::UnityEngine::UIElements::DataBindingManager::ClearSourceCache)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c3fd38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(), { "ClearSourceCache", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.GetPooledBindingData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::DataBindingManager_BindingData* (
    ::UnityEngine::UIElements::DataBindingManager::*)(::UnityEngine::UIElements::BindingTarget, ::UnityEngine::UIElements::Binding*)>(
    &::UnityEngine::UIElements::DataBindingManager::GetPooledBindingData)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6c3d824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                         { "GetPooledBindingData", {}, { ::i2c::type_of<::UnityEngine::UIElements::BindingTarget>(), ::i2c::type_of<::UnityEngine::UIElements::Binding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBindingManager.ReleasePoolBindingData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBindingManager::*)(::UnityEngine::UIElements::DataBindingManager_BindingData*)>(
    &::UnityEngine::UIElements::DataBindingManager::ReleasePoolBindingData)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6c3e184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                                             { "ReleasePoolBindingData", {}, { ::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>*&
UnityEngine::UIElements::DataBindingManager::__cordl_internal_get_m_BindingDataLocalPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingDataLocalPool;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>* const&
UnityEngine::UIElements::DataBindingManager::__cordl_internal_get_m_BindingDataLocalPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingDataLocalPool;
}
constexpr void
UnityEngine::UIElements::DataBindingManager::__cordl_internal_set_m_BindingDataLocalPool(::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BindingDataLocalPool = value;
}
constexpr ::System::Nullable_1<::UnityEngine::UIElements::BindingLogLevel>& UnityEngine::UIElements::DataBindingManager::__cordl_internal_get_m_LogLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LogLevel;
}
constexpr ::System::Nullable_1<::UnityEngine::UIElements::BindingLogLevel> const& UnityEngine::UIElements::DataBindingManager::__cordl_internal_get_m_LogLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LogLevel;
}
constexpr void UnityEngine::UIElements::DataBindingManager::__cordl_internal_set_m_LogLevel(::System::Nullable_1<::UnityEngine::UIElements::BindingLogLevel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LogLevel = value;
}
constexpr ::UnityEngine::UIElements::BaseVisualElementPanel*& UnityEngine::UIElements::DataBindingManager::__cordl_internal_get_m_Panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Panel;
}
constexpr ::UnityEngine::UIElements::BaseVisualElementPanel* const& UnityEngine::UIElements::DataBindingManager::__cordl_internal_get_m_Panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Panel;
}
constexpr void UnityEngine::UIElements::DataBindingManager::__cordl_internal_set_m_Panel(::UnityEngine::UIElements::BaseVisualElementPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Panel = value;
}
constexpr ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker*& UnityEngine::UIElements::DataBindingManager::__cordl_internal_get_m_DataSourceTracker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DataSourceTracker;
}
constexpr ::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker* const& UnityEngine::UIElements::DataBindingManager::__cordl_internal_get_m_DataSourceTracker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DataSourceTracker;
}
constexpr void UnityEngine::UIElements::DataBindingManager::__cordl_internal_set_m_DataSourceTracker(::UnityEngine::UIElements::DataBindingManager_HierarchyDataSourceTracker* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DataSourceTracker = value;
}
constexpr ::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker*& UnityEngine::UIElements::DataBindingManager::__cordl_internal_get_m_BindingsTracker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingsTracker;
}
constexpr ::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker* const& UnityEngine::UIElements::DataBindingManager::__cordl_internal_get_m_BindingsTracker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingsTracker;
}
constexpr void UnityEngine::UIElements::DataBindingManager::__cordl_internal_set_m_BindingsTracker(::UnityEngine::UIElements::DataBindingManager_HierarchyBindingTracker* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BindingsTracker = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_ChangesFromUI>*&
UnityEngine::UIElements::DataBindingManager::__cordl_internal_get_m_DetectedChangesFromUI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DetectedChangesFromUI;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_ChangesFromUI>* const&
UnityEngine::UIElements::DataBindingManager::__cordl_internal_get_m_DetectedChangesFromUI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DetectedChangesFromUI;
}
constexpr void
UnityEngine::UIElements::DataBindingManager::__cordl_internal_set_m_DetectedChangesFromUI(::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_ChangesFromUI>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DetectedChangesFromUI = value;
}
inline void UnityEngine::UIElements::DataBindingManager::setStaticF_k_RequestBindingPropertyName(::UnityEngine::PropertyName value) {
  ::cordl_internals::setStaticField<::UnityEngine::PropertyName, "k_RequestBindingPropertyName", ::UnityEngine::UIElements::DataBindingManager*>(std::forward<::UnityEngine::PropertyName>(value));
}
inline ::UnityEngine::PropertyName UnityEngine::UIElements::DataBindingManager::getStaticF_k_RequestBindingPropertyName() {
  return ::cordl_internals::getStaticField<::UnityEngine::PropertyName, "k_RequestBindingPropertyName", ::UnityEngine::UIElements::DataBindingManager*>();
}
inline void UnityEngine::UIElements::DataBindingManager::setStaticF_k_ClearBindingsToken(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "k_ClearBindingsToken", ::UnityEngine::UIElements::DataBindingManager*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::DataBindingManager::getStaticF_k_ClearBindingsToken() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "k_ClearBindingsToken", ::UnityEngine::UIElements::DataBindingManager*>();
}
inline void UnityEngine::UIElements::DataBindingManager::setStaticF_globalLogLevel(::UnityEngine::UIElements::BindingLogLevel value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingLogLevel, "globalLogLevel", ::UnityEngine::UIElements::DataBindingManager*>(
      std::forward<::UnityEngine::UIElements::BindingLogLevel>(value));
}
inline ::UnityEngine::UIElements::BindingLogLevel UnityEngine::UIElements::DataBindingManager::getStaticF_globalLogLevel() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingLogLevel, "globalLogLevel", ::UnityEngine::UIElements::DataBindingManager*>();
}
inline void UnityEngine::UIElements::DataBindingManager::setStaticF_s_Empty(::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>*, "s_Empty", ::UnityEngine::UIElements::DataBindingManager*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>* UnityEngine::UIElements::DataBindingManager::getStaticF_s_Empty() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>*, "s_Empty",
                                           ::UnityEngine::UIElements::DataBindingManager*>();
}
inline ::UnityEngine::UIElements::BindingLogLevel UnityEngine::UIElements::DataBindingManager::get_logLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(), { "get_logLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BindingLogLevel>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DataBindingManager::set_logLevel(::UnityEngine::UIElements::BindingLogLevel value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(), { "set_logLevel", {}, { ::i2c::type_of<::UnityEngine::UIElements::BindingLogLevel>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::DataBindingManager::ResetLogLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(), { "ResetLogLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DataBindingManager::_ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline int32_t UnityEngine::UIElements::DataBindingManager::GetTrackedDataSourcesCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(), { "GetTrackedDataSourcesCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::DataBindingManager::TryGetLastVersion(::System::Object* source, ::by_ref<int64_t> version) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                                                                         { "TryGetLastVersion", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, version);
}
inline void UnityEngine::UIElements::DataBindingManager::UpdateVersion(::System::Object* source, int64_t version) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                                                                         { "UpdateVersion", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, version);
}
inline void UnityEngine::UIElements::DataBindingManager::CacheUIBindingResult(::UnityEngine::UIElements::DataBindingManager_BindingData* bindingData, ::UnityEngine::UIElements::BindingResult result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                       { "CacheUIBindingResult", {}, { ::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>(), ::i2c::type_of<::UnityEngine::UIElements::BindingResult>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindingData, result);
}
inline bool UnityEngine::UIElements::DataBindingManager::TryGetLastUIBindingResult(::UnityEngine::UIElements::DataBindingManager_BindingData* bindingData,
                                                                                   ::by_ref<::UnityEngine::UIElements::BindingResult> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                       { "TryGetLastUIBindingResult",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bindingData, result);
}
inline void UnityEngine::UIElements::DataBindingManager::CacheSourceBindingResult(::UnityEngine::UIElements::DataBindingManager_BindingData* bindingData,
                                                                                  ::UnityEngine::UIElements::BindingResult result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
          { "CacheSourceBindingResult", {}, { ::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>(), ::i2c::type_of<::UnityEngine::UIElements::BindingResult>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindingData, result);
}
inline bool UnityEngine::UIElements::DataBindingManager::TryGetLastSourceBindingResult(::UnityEngine::UIElements::DataBindingManager_BindingData* bindingData,
                                                                                       ::by_ref<::UnityEngine::UIElements::BindingResult> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                       { "TryGetLastSourceBindingResult",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingResult>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bindingData, result);
}
inline ::UnityEngine::UIElements::DataSourceContext UnityEngine::UIElements::DataBindingManager::GetResolvedDataSourceContext(::UnityEngine::UIElements::VisualElement* element,
                                                                                                                              ::UnityEngine::UIElements::DataBindingManager_BindingData* bindingData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
          { "GetResolvedDataSourceContext", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DataSourceContext>(this, ___internal_method, element, bindingData);
}
inline int32_t UnityEngine::UIElements::DataBindingManager::GetBoundElementsCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(), { "GetBoundElementsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::DataBindingManager::GetBoundElements() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(), { "GetBoundElements", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::VisualElement*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_ChangesFromUI>* UnityEngine::UIElements::DataBindingManager::GetChangedDetectedFromUI() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(), { "GetChangedDetectedFromUI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_ChangesFromUI>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::HashSet_1<::Unity::Properties::PropertyPath>* UnityEngine::UIElements::DataBindingManager::GetChangedDetectedFromSource(::System::Object* dataSource) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(), { "GetChangedDetectedFromSource", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::Unity::Properties::PropertyPath>*>(this, ___internal_method, dataSource);
}
inline void UnityEngine::UIElements::DataBindingManager::ClearChangesFromSource(::System::Object* dataSource) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(), { "ClearChangesFromSource", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSource);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>*
UnityEngine::UIElements::DataBindingManager::GetBindingData(::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(), { "GetBindingData", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::DataBindingManager_BindingData*>*>(this, ___internal_method, element);
}
inline bool UnityEngine::UIElements::DataBindingManager::TryGetBindingData(::UnityEngine::UIElements::VisualElement* element, ::by_ref<::UnityEngine::UIElements::BindingId> bindingId,
                                                                           ::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*> bindingData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                                           { "TryGetBindingData",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::UIElements::DataBindingManager_BindingData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, element, bindingId, bindingData);
}
inline void UnityEngine::UIElements::DataBindingManager::RegisterBinding(::UnityEngine::UIElements::VisualElement* element, ::by_ref<::UnityEngine::UIElements::BindingId> bindingId,
                                                                         ::UnityEngine::UIElements::Binding* binding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                                           { "RegisterBinding",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::Binding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element, bindingId, binding);
}
inline void UnityEngine::UIElements::DataBindingManager::UnregisterBinding(::UnityEngine::UIElements::VisualElement* element, ::by_ref<::UnityEngine::UIElements::BindingId> bindingId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                          { "UnregisterBinding", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element, bindingId);
}
inline void UnityEngine::UIElements::DataBindingManager::TransferBindingRequests(::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                                                                         { "TransferBindingRequests", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void UnityEngine::UIElements::DataBindingManager::InvalidateCachedDataSource(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* addedOrMovedElements,
                                                                                    ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* removedElements) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                                           { "InvalidateCachedDataSource",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, addedOrMovedElements, removedElements);
}
inline void UnityEngine::UIElements::DataBindingManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DataBindingManager::CreateBindingRequest(::UnityEngine::UIElements::VisualElement* target, ::by_ref<::UnityEngine::UIElements::BindingId> bindingId,
                                                                              ::UnityEngine::UIElements::Binding* binding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                                           { "CreateBindingRequest",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::Binding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target, bindingId, binding);
}
inline void UnityEngine::UIElements::DataBindingManager::ProcessBindingRequests(::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                                                                         { "ProcessBindingRequests", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void UnityEngine::UIElements::DataBindingManager::ClearAllBindings(::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                                                                         { "ClearAllBindings", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline bool UnityEngine::UIElements::DataBindingManager::AnyPendingBindingRequests(::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                                                                         { "AnyPendingBindingRequests", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, element);
}
inline bool UnityEngine::UIElements::DataBindingManager::TryGetBindingRequest(::UnityEngine::UIElements::VisualElement* element, ::by_ref<::UnityEngine::UIElements::BindingId> bindingId,
                                                                              ::by_ref<::UnityEngine::UIElements::Binding*> binding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                                           { "TryGetBindingRequest",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Binding*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, element, bindingId, binding);
}
inline void UnityEngine::UIElements::DataBindingManager::DirtyBindingOrder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(), { "DirtyBindingOrder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DataBindingManager::TrackDataSource(::System::Object* previous, ::System::Object* current) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                                                                         { "TrackDataSource", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline void UnityEngine::UIElements::DataBindingManager::ClearSourceCache() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(), { "ClearSourceCache", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::DataBindingManager_BindingData* UnityEngine::UIElements::DataBindingManager::GetPooledBindingData(::UnityEngine::UIElements::BindingTarget target,
                                                                                                                                    ::UnityEngine::UIElements::Binding* binding) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                              { "GetPooledBindingData", {}, { ::i2c::type_of<::UnityEngine::UIElements::BindingTarget>(), ::i2c::type_of<::UnityEngine::UIElements::Binding*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DataBindingManager_BindingData*>(this, ___internal_method, target, binding);
}
inline void UnityEngine::UIElements::DataBindingManager::ReleasePoolBindingData(::UnityEngine::UIElements::DataBindingManager_BindingData* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBindingManager*>(),
                                                           { "ReleasePoolBindingData", {}, { ::i2c::type_of<::UnityEngine::UIElements::DataBindingManager_BindingData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::UnityEngine::UIElements::DataBindingManager* UnityEngine::UIElements::DataBindingManager::New_ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::DataBindingManager*>(panel));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::DataBindingManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::DataBindingManager::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DataBindingManager::DataBindingManager() {}
