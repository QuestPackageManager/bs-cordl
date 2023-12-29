#pragma once
#include "GlobalNamespace/zzzz__MultiplayerStatusData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerStatusData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerStatusData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus::__MultiplayerStatusData__AvailabilityStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus::__MultiplayerStatusData__AvailabilityStatus() {}
constexpr ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus::Online{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus::MaintenanceUpcoming{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus::Offline{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::*)()>(
    &::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2204f68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::__get_language() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___language;
}
constexpr ::StringW const& GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::__get_language() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___language;
}
constexpr void GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::__set_language(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___language)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::__get_message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___message;
}
constexpr ::StringW const& GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::__get_message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___message;
}
constexpr void GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::__set_message(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___message)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage* GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>());
}
inline void GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage::__MultiplayerStatusData__UserMessage__LocalizedMessage() {}
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerStatusData__UserMessage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerStatusData__UserMessage::*)()>(
    &::GlobalNamespace::__MultiplayerStatusData__UserMessage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2204f60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerStatusData__UserMessage*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*, ::Array<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>*>&
GlobalNamespace::__MultiplayerStatusData__UserMessage::__get_localizations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizations;
}
constexpr ::ArrayW<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*, ::Array<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>*> const&
GlobalNamespace::__MultiplayerStatusData__UserMessage::__get_localizations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizations;
}
constexpr void GlobalNamespace::__MultiplayerStatusData__UserMessage::__set_localizations(
    ::ArrayW<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*, ::Array<::GlobalNamespace::__MultiplayerStatusData__UserMessage__LocalizedMessage*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___localizations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__MultiplayerStatusData__UserMessage* GlobalNamespace::__MultiplayerStatusData__UserMessage::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MultiplayerStatusData__UserMessage*>());
}
inline void GlobalNamespace::__MultiplayerStatusData__UserMessage::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerStatusData__UserMessage*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerStatusData__UserMessage::__MultiplayerStatusData__UserMessage() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.get__minimumAppVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::MultiplayerStatusData::*)()>(
    &::GlobalNamespace::MultiplayerStatusData::get__minimumAppVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2204f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                                                                               "get__minimumAppVersion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.set__minimumAppVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)(::StringW)>(
    &::GlobalNamespace::MultiplayerStatusData::set__minimumAppVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2204f08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(), "set__minimumAppVersion",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.get__maintenanceStartTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::MultiplayerStatusData::*)()>(
    &::GlobalNamespace::MultiplayerStatusData::get__maintenanceStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2204f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                                                                               "get__maintenanceStartTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.set__maintenanceStartTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)(int64_t)>(
    &::GlobalNamespace::MultiplayerStatusData::set__maintenanceStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2204f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(), "set__maintenanceStartTime",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.get__userMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__MultiplayerStatusData__UserMessage* (::GlobalNamespace::MultiplayerStatusData::*)()>(
    &::GlobalNamespace::MultiplayerStatusData::get__userMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2204f20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                                                                               "get__userMessage", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.set__userMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)(::GlobalNamespace::__MultiplayerStatusData__UserMessage*)>(
    &::GlobalNamespace::MultiplayerStatusData::set__userMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2204f28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(), "set__userMessage", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerStatusData__UserMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.get__useGamelift
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerStatusData::*)()>(&::GlobalNamespace::MultiplayerStatusData::get__useGamelift)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2204f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                                                                               "get__useGamelift", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.set__useGamelift
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)(bool)>(
    &::GlobalNamespace::MultiplayerStatusData::set__useGamelift)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2204f38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(), "set__useGamelift",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.get__useXPlatformAuth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerStatusData::*)()>(
    &::GlobalNamespace::MultiplayerStatusData::get__useXPlatformAuth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2204f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                                                                               "get__useXPlatformAuth", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData.set__useXPlatformAuth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)(bool)>(
    &::GlobalNamespace::MultiplayerStatusData::set__useXPlatformAuth)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2204f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(), "set__useXPlatformAuth",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerStatusData::*)()>(&::GlobalNamespace::MultiplayerStatusData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2204f58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MultiplayerStatusData::__get_minimumAppVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minimumAppVersion;
}
constexpr ::StringW const& GlobalNamespace::MultiplayerStatusData::__get_minimumAppVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minimumAppVersion;
}
constexpr void GlobalNamespace::MultiplayerStatusData::__set_minimumAppVersion(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___minimumAppVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus& GlobalNamespace::MultiplayerStatusData::__get_status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr ::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus const& GlobalNamespace::MultiplayerStatusData::__get_status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr void GlobalNamespace::MultiplayerStatusData::__set_status(::GlobalNamespace::__MultiplayerStatusData__AvailabilityStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___status = value;
}
constexpr int64_t& GlobalNamespace::MultiplayerStatusData::__get_maintenanceStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maintenanceStartTime;
}
constexpr int64_t const& GlobalNamespace::MultiplayerStatusData::__get_maintenanceStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maintenanceStartTime;
}
constexpr void GlobalNamespace::MultiplayerStatusData::__set_maintenanceStartTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maintenanceStartTime = value;
}
constexpr int64_t& GlobalNamespace::MultiplayerStatusData::__get_maintenanceEndTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maintenanceEndTime;
}
constexpr int64_t const& GlobalNamespace::MultiplayerStatusData::__get_maintenanceEndTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maintenanceEndTime;
}
constexpr void GlobalNamespace::MultiplayerStatusData::__set_maintenanceEndTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maintenanceEndTime = value;
}
constexpr ::GlobalNamespace::__MultiplayerStatusData__UserMessage*& GlobalNamespace::MultiplayerStatusData::__get_userMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userMessage;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerStatusData__UserMessage*> const& GlobalNamespace::MultiplayerStatusData::__get_userMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userMessage;
}
constexpr void GlobalNamespace::MultiplayerStatusData::__set_userMessage(::GlobalNamespace::__MultiplayerStatusData__UserMessage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userMessage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MultiplayerStatusData::__get_useGamelift() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useGamelift;
}
constexpr bool const& GlobalNamespace::MultiplayerStatusData::__get_useGamelift() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useGamelift;
}
constexpr void GlobalNamespace::MultiplayerStatusData::__set_useGamelift(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useGamelift = value;
}
constexpr bool& GlobalNamespace::MultiplayerStatusData::__get_useXPlatformAuth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useXPlatformAuth;
}
constexpr bool const& GlobalNamespace::MultiplayerStatusData::__get_useXPlatformAuth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useXPlatformAuth;
}
constexpr void GlobalNamespace::MultiplayerStatusData::__set_useXPlatformAuth(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useXPlatformAuth = value;
}
inline ::StringW GlobalNamespace::MultiplayerStatusData::get__minimumAppVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                                                                             "get__minimumAppVersion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerStatusData::set__minimumAppVersion(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(), "set__minimumAppVersion",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int64_t GlobalNamespace::MultiplayerStatusData::get__maintenanceStartTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                                                                             "get__maintenanceStartTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerStatusData::set__maintenanceStartTime(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(), "set__maintenanceStartTime",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__MultiplayerStatusData__UserMessage* GlobalNamespace::MultiplayerStatusData::get__userMessage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                                                                             "get__userMessage", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__MultiplayerStatusData__UserMessage*, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerStatusData::set__userMessage(::GlobalNamespace::__MultiplayerStatusData__UserMessage* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(), "set__userMessage", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerStatusData__UserMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MultiplayerStatusData::get__useGamelift() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                                                                             "get__useGamelift", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerStatusData::set__useGamelift(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(), "set__useGamelift",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MultiplayerStatusData::get__useXPlatformAuth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(),
                                                                             "get__useXPlatformAuth", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerStatusData::set__useXPlatformAuth(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(), "set__useXPlatformAuth",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MultiplayerStatusData* GlobalNamespace::MultiplayerStatusData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerStatusData*>());
}
inline void GlobalNamespace::MultiplayerStatusData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerStatusData*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerStatusData::MultiplayerStatusData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
