#pragma once
// IWYU pragma private; include "OSCE/Analytics/BaseAnalyticsEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OSCE/Analytics/zzzz__BaseAnalyticsEvent_def.hpp"
#include "GlobalNamespace/zzzz__IDType_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
#include "OSCE/Analytics/zzzz__LoggerAnalyticsEvent_def.hpp"
#include "OSCE/Networking/zzzz__IPureCSharpPoolElement_def.hpp"
//  Writing Method size for method: ::OSCE::Analytics::BaseAnalyticsEvent.get_logger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OSCE::Analytics::BaseAnalyticsEvent::*)()>(&::OSCE::Analytics::BaseAnalyticsEvent::get_logger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8ae6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(), "get_logger",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::BaseAnalyticsEvent.set_logger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::BaseAnalyticsEvent::*)(::StringW)>(&::OSCE::Analytics::BaseAnalyticsEvent::set_logger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8ae74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(), "set_logger", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::BaseAnalyticsEvent.get_CreatedByPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OSCE::Analytics::BaseAnalyticsEvent::*)()>(&::OSCE::Analytics::BaseAnalyticsEvent::get_CreatedByPool)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8ae7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(),
                                                                               "get_CreatedByPool", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::BaseAnalyticsEvent.set_CreatedByPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::BaseAnalyticsEvent::*)(bool)>(&::OSCE::Analytics::BaseAnalyticsEvent::set_CreatedByPool)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8ae84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(), "set_CreatedByPool",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::BaseAnalyticsEvent.GetIDType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IDType (::OSCE::Analytics::BaseAnalyticsEvent::*)()>(
    &::OSCE::Analytics::BaseAnalyticsEvent::GetIDType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8ae8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::BaseAnalyticsEvent.EventRequiresAnalyticsID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OSCE::Analytics::BaseAnalyticsEvent::*)()>(
    &::OSCE::Analytics::BaseAnalyticsEvent::EventRequiresAnalyticsID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d8ae94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::BaseAnalyticsEvent.ReturnedToPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::BaseAnalyticsEvent::*)()>(&::OSCE::Analytics::BaseAnalyticsEvent::ReturnedToPool)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5d8aeb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::BaseAnalyticsEvent.ReturnEventToPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::BaseAnalyticsEvent::*)()>(&::OSCE::Analytics::BaseAnalyticsEvent::ReturnEventToPool)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d8af04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::BaseAnalyticsEvent.ConvertToLoggerEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OSCE::Analytics::LoggerAnalyticsEvent (::OSCE::Analytics::BaseAnalyticsEvent::*)()>(
    &::OSCE::Analytics::BaseAnalyticsEvent::ConvertToLoggerEvent)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d8af74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::BaseAnalyticsEvent.ApplyTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::BaseAnalyticsEvent::*)(::OSCE::Analytics::AnalyticsManager*)>(
    &::OSCE::Analytics::BaseAnalyticsEvent::ApplyTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d8afe0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::BaseAnalyticsEvent.ApplyBasicFields
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::BaseAnalyticsEvent::*)(::OSCE::Analytics::AnalyticsManager*)>(
    &::OSCE::Analytics::BaseAnalyticsEvent::ApplyBasicFields)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5d8b03c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OSCE::Analytics::BaseAnalyticsEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OSCE::Analytics::BaseAnalyticsEvent::*)()>(&::OSCE::Analytics::BaseAnalyticsEvent::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d8b068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& OSCE::Analytics::BaseAnalyticsEvent::__cordl_internal_get_client_time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client_time;
}
constexpr int32_t const& OSCE::Analytics::BaseAnalyticsEvent::__cordl_internal_get_client_time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client_time;
}
constexpr void OSCE::Analytics::BaseAnalyticsEvent::__cordl_internal_set_client_time(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___client_time = value;
}
constexpr ::StringW& OSCE::Analytics::BaseAnalyticsEvent::__cordl_internal_get__logger_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger_k__BackingField;
}
constexpr ::StringW const& OSCE::Analytics::BaseAnalyticsEvent::__cordl_internal_get__logger_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logger_k__BackingField;
}
constexpr void OSCE::Analytics::BaseAnalyticsEvent::__cordl_internal_set__logger_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____logger_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& OSCE::Analytics::BaseAnalyticsEvent::__cordl_internal_get__CreatedByPool_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CreatedByPool_k__BackingField;
}
constexpr bool const& OSCE::Analytics::BaseAnalyticsEvent::__cordl_internal_get__CreatedByPool_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CreatedByPool_k__BackingField;
}
constexpr void OSCE::Analytics::BaseAnalyticsEvent::__cordl_internal_set__CreatedByPool_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CreatedByPool_k__BackingField = value;
}
inline ::StringW OSCE::Analytics::BaseAnalyticsEvent::get_logger() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(), "get_logger",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void OSCE::Analytics::BaseAnalyticsEvent::set_logger(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(), "set_logger", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool OSCE::Analytics::BaseAnalyticsEvent::get_CreatedByPool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(), "get_CreatedByPool",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void OSCE::Analytics::BaseAnalyticsEvent::set_CreatedByPool(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(), "set_CreatedByPool",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::IDType OSCE::Analytics::BaseAnalyticsEvent::GetIDType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IDType, false>(this, ___internal_method);
}
inline bool OSCE::Analytics::BaseAnalyticsEvent::EventRequiresAnalyticsID() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void OSCE::Analytics::BaseAnalyticsEvent::ReturnedToPool() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OSCE::Analytics::BaseAnalyticsEvent::ReturnEventToPool() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OSCE::Analytics::LoggerAnalyticsEvent OSCE::Analytics::BaseAnalyticsEvent::ConvertToLoggerEvent() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::OSCE::Analytics::LoggerAnalyticsEvent, false>(this, ___internal_method);
}
inline void OSCE::Analytics::BaseAnalyticsEvent::ApplyTime(::OSCE::Analytics::AnalyticsManager* manager) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, manager);
}
inline void OSCE::Analytics::BaseAnalyticsEvent::ApplyBasicFields(::OSCE::Analytics::AnalyticsManager* manager) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, manager);
}
inline void OSCE::Analytics::BaseAnalyticsEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OSCE::Analytics::BaseAnalyticsEvent*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OSCE::Analytics::BaseAnalyticsEvent* OSCE::Analytics::BaseAnalyticsEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OSCE::Analytics::BaseAnalyticsEvent*>());
}
/// @brief Convert operator to "::OSCE::Networking::IPureCSharpPoolElement"
constexpr OSCE::Analytics::BaseAnalyticsEvent::operator ::OSCE::Networking::IPureCSharpPoolElement*() noexcept {
  return static_cast<::OSCE::Networking::IPureCSharpPoolElement*>(static_cast<void*>(this));
}
/// @brief Convert to "::OSCE::Networking::IPureCSharpPoolElement"
constexpr ::OSCE::Networking::IPureCSharpPoolElement* OSCE::Analytics::BaseAnalyticsEvent::i___OSCE__Networking__IPureCSharpPoolElement() noexcept {
  return static_cast<::OSCE::Networking::IPureCSharpPoolElement*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OSCE::Analytics::BaseAnalyticsEvent::BaseAnalyticsEvent() {}
