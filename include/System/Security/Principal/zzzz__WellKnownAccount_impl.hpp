#pragma once
// IWYU pragma private; include "System\Security\Principal\WellKnownAccount.hpp"
#include "System/Security/Principal/zzzz__WellKnownSidType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Principal/zzzz__WellKnownAccount_def.hpp"
#include "System/Security/Principal/zzzz__WellKnownSidType_def.hpp"
//  Writing Method size for method: ::System::Security::Principal::WellKnownAccount.set_WellKnownValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Principal::WellKnownAccount::*)(::System::Security::Principal::WellKnownSidType)>(
    &::System::Security::Principal::WellKnownAccount::set_WellKnownValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b15090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WellKnownAccount*>(),
                                                                                           { "set_WellKnownValue", {}, { ::i2c::type_of<::System::Security::Principal::WellKnownSidType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WellKnownAccount.get_IsAbsolute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Principal::WellKnownAccount::*)()>(&::System::Security::Principal::WellKnownAccount::get_IsAbsolute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b15098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WellKnownAccount*>(), { "get_IsAbsolute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WellKnownAccount.set_IsAbsolute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Principal::WellKnownAccount::*)(bool)>(&::System::Security::Principal::WellKnownAccount::set_IsAbsolute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b150a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WellKnownAccount*>(), { "set_IsAbsolute", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WellKnownAccount.get_Sid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Principal::WellKnownAccount::*)()>(&::System::Security::Principal::WellKnownAccount::get_Sid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b150a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WellKnownAccount*>(), { "get_Sid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WellKnownAccount.set_Sid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Principal::WellKnownAccount::*)(::StringW)>(&::System::Security::Principal::WellKnownAccount::set_Sid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b150b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WellKnownAccount*>(), { "set_Sid", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WellKnownAccount.set_Rid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Principal::WellKnownAccount::*)(::StringW)>(&::System::Security::Principal::WellKnownAccount::set_Rid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b150b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WellKnownAccount*>(), { "set_Rid", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WellKnownAccount.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Principal::WellKnownAccount::*)()>(&::System::Security::Principal::WellKnownAccount::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b150c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WellKnownAccount*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WellKnownAccount.set_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Principal::WellKnownAccount::*)(::StringW)>(&::System::Security::Principal::WellKnownAccount::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b150c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WellKnownAccount*>(), { "set_Name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WellKnownAccount.get_SddlForm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Principal::WellKnownAccount::*)()>(&::System::Security::Principal::WellKnownAccount::get_SddlForm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b150d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WellKnownAccount*>(), { "get_SddlForm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WellKnownAccount.set_SddlForm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Principal::WellKnownAccount::*)(::StringW)>(&::System::Security::Principal::WellKnownAccount::set_SddlForm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b150d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WellKnownAccount*>(), { "set_SddlForm", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WellKnownAccount.LookupBySid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Principal::WellKnownAccount* (*)(::StringW)>(&::System::Security::Principal::WellKnownAccount::LookupBySid)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5b14ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WellKnownAccount*>(), { "LookupBySid", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WellKnownAccount.LookupByName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Principal::WellKnownAccount* (*)(::StringW)>(&::System::Security::Principal::WellKnownAccount::LookupByName)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5b13c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WellKnownAccount*>(), { "LookupByName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WellKnownAccount.LookupBySddlForm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Principal::WellKnownAccount* (*)(::StringW)>(&::System::Security::Principal::WellKnownAccount::LookupBySddlForm)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5b14d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WellKnownAccount*>(), { "LookupBySddlForm", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WellKnownAccount._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Principal::WellKnownAccount::*)()>(&::System::Security::Principal::WellKnownAccount::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b150e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WellKnownAccount*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Security::Principal::WellKnownSidType& System::Security::Principal::WellKnownAccount::__cordl_internal_get__WellKnownValue_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WellKnownValue_k__BackingField;
}
constexpr ::System::Security::Principal::WellKnownSidType const& System::Security::Principal::WellKnownAccount::__cordl_internal_get__WellKnownValue_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WellKnownValue_k__BackingField;
}
constexpr void System::Security::Principal::WellKnownAccount::__cordl_internal_set__WellKnownValue_k__BackingField(::System::Security::Principal::WellKnownSidType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____WellKnownValue_k__BackingField = value;
}
constexpr bool& System::Security::Principal::WellKnownAccount::__cordl_internal_get__IsAbsolute_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsAbsolute_k__BackingField;
}
constexpr bool const& System::Security::Principal::WellKnownAccount::__cordl_internal_get__IsAbsolute_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsAbsolute_k__BackingField;
}
constexpr void System::Security::Principal::WellKnownAccount::__cordl_internal_set__IsAbsolute_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsAbsolute_k__BackingField = value;
}
constexpr ::StringW& System::Security::Principal::WellKnownAccount::__cordl_internal_get__Sid_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Sid_k__BackingField;
}
constexpr ::StringW const& System::Security::Principal::WellKnownAccount::__cordl_internal_get__Sid_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Sid_k__BackingField;
}
constexpr void System::Security::Principal::WellKnownAccount::__cordl_internal_set__Sid_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Sid_k__BackingField = value;
}
constexpr ::StringW& System::Security::Principal::WellKnownAccount::__cordl_internal_get__Rid_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Rid_k__BackingField;
}
constexpr ::StringW const& System::Security::Principal::WellKnownAccount::__cordl_internal_get__Rid_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Rid_k__BackingField;
}
constexpr void System::Security::Principal::WellKnownAccount::__cordl_internal_set__Rid_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Rid_k__BackingField = value;
}
constexpr ::StringW& System::Security::Principal::WellKnownAccount::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& System::Security::Principal::WellKnownAccount::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void System::Security::Principal::WellKnownAccount::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Name_k__BackingField = value;
}
constexpr ::StringW& System::Security::Principal::WellKnownAccount::__cordl_internal_get__SddlForm_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SddlForm_k__BackingField;
}
constexpr ::StringW const& System::Security::Principal::WellKnownAccount::__cordl_internal_get__SddlForm_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SddlForm_k__BackingField;
}
constexpr void System::Security::Principal::WellKnownAccount::__cordl_internal_set__SddlForm_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SddlForm_k__BackingField = value;
}
inline void System::Security::Principal::WellKnownAccount::setStaticF_accounts(::ArrayW<::System::Security::Principal::WellKnownAccount*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Security::Principal::WellKnownAccount*>, "accounts", ::System::Security::Principal::WellKnownAccount*>(
      std::forward<::ArrayW<::System::Security::Principal::WellKnownAccount*>>(value));
}
inline ::ArrayW<::System::Security::Principal::WellKnownAccount*> System::Security::Principal::WellKnownAccount::getStaticF_accounts() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Security::Principal::WellKnownAccount*>, "accounts", ::System::Security::Principal::WellKnownAccount*>();
}
inline void System::Security::Principal::WellKnownAccount::set_WellKnownValue(::System::Security::Principal::WellKnownSidType value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WellKnownAccount*>(),
                                                                                         { "set_WellKnownValue", {}, { ::i2c::type_of<::System::Security::Principal::WellKnownSidType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Security::Principal::WellKnownAccount::get_IsAbsolute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WellKnownAccount*>(), { "get_IsAbsolute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Security::Principal::WellKnownAccount::set_IsAbsolute(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WellKnownAccount*>(), { "set_IsAbsolute", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Security::Principal::WellKnownAccount::get_Sid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WellKnownAccount*>(), { "get_Sid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Security::Principal::WellKnownAccount::set_Sid(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WellKnownAccount*>(), { "set_Sid", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Security::Principal::WellKnownAccount::set_Rid(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WellKnownAccount*>(), { "set_Rid", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Security::Principal::WellKnownAccount::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WellKnownAccount*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Security::Principal::WellKnownAccount::set_Name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WellKnownAccount*>(), { "set_Name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Security::Principal::WellKnownAccount::get_SddlForm() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WellKnownAccount*>(), { "get_SddlForm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Security::Principal::WellKnownAccount::set_SddlForm(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WellKnownAccount*>(), { "set_SddlForm", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Principal::WellKnownAccount* System::Security::Principal::WellKnownAccount::LookupBySid(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WellKnownAccount*>(), { "LookupBySid", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Principal::WellKnownAccount*>(nullptr, ___internal_method, s);
}
inline ::System::Security::Principal::WellKnownAccount* System::Security::Principal::WellKnownAccount::LookupByName(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WellKnownAccount*>(), { "LookupByName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Principal::WellKnownAccount*>(nullptr, ___internal_method, s);
}
inline ::System::Security::Principal::WellKnownAccount* System::Security::Principal::WellKnownAccount::LookupBySddlForm(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WellKnownAccount*>(), { "LookupBySddlForm", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Principal::WellKnownAccount*>(nullptr, ___internal_method, s);
}
inline void System::Security::Principal::WellKnownAccount::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WellKnownAccount*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Principal::WellKnownAccount* System::Security::Principal::WellKnownAccount::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Principal::WellKnownAccount*>());
}
// Ctor Parameters []
constexpr ::System::Security::Principal::WellKnownAccount::WellKnownAccount() {}
