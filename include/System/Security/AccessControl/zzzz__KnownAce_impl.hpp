#pragma once
// IWYU pragma private; include "System\Security\AccessControl\KnownAce.hpp"
#include "System/Security/AccessControl/zzzz__GenericAce_impl.hpp"
#include "System/Security/AccessControl/zzzz__KnownAce_def.hpp"
#include "System/Security/AccessControl/zzzz__AceFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__AceType_def.hpp"
#include "System/Security/Principal/zzzz__SecurityIdentifier_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::KnownAce._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::KnownAce::*)(::System::Security::AccessControl::AceType, ::System::Security::AccessControl::AceFlags)>(
    &::System::Security::AccessControl::KnownAce::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b1ff40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::KnownAce*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Security::AccessControl::AceType>(), ::i2c::type_of<::System::Security::AccessControl::AceFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::KnownAce._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::KnownAce::*)(::ArrayW<uint8_t>, int32_t)>(&::System::Security::AccessControl::KnownAce::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b1ff44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::KnownAce*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::KnownAce.get_AccessMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::AccessControl::KnownAce::*)()>(&::System::Security::AccessControl::KnownAce::get_AccessMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1ff48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::KnownAce*>(), { "get_AccessMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::KnownAce.set_AccessMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::KnownAce::*)(int32_t)>(&::System::Security::AccessControl::KnownAce::set_AccessMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1ff50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::KnownAce*>(), { "set_AccessMask", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::KnownAce.get_SecurityIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Principal::SecurityIdentifier* (::System::Security::AccessControl::KnownAce::*)()>(
    &::System::Security::AccessControl::KnownAce::get_SecurityIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1ff58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::KnownAce*>(), { "get_SecurityIdentifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::KnownAce.set_SecurityIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::KnownAce::*)(::System::Security::Principal::SecurityIdentifier*)>(
    &::System::Security::AccessControl::KnownAce::set_SecurityIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1ff60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::KnownAce*>(),
                                                             { "set_SecurityIdentifier", {}, { ::i2c::type_of<::System::Security::Principal::SecurityIdentifier*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Security::AccessControl::KnownAce::__cordl_internal_get_access_mask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___access_mask;
}
constexpr int32_t const& System::Security::AccessControl::KnownAce::__cordl_internal_get_access_mask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___access_mask;
}
constexpr void System::Security::AccessControl::KnownAce::__cordl_internal_set_access_mask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___access_mask = value;
}
constexpr ::System::Security::Principal::SecurityIdentifier*& System::Security::AccessControl::KnownAce::__cordl_internal_get_identifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___identifier;
}
constexpr ::System::Security::Principal::SecurityIdentifier* const& System::Security::AccessControl::KnownAce::__cordl_internal_get_identifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___identifier;
}
constexpr void System::Security::AccessControl::KnownAce::__cordl_internal_set_identifier(::System::Security::Principal::SecurityIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___identifier = value;
}
inline void System::Security::AccessControl::KnownAce::_ctor(::System::Security::AccessControl::AceType type, ::System::Security::AccessControl::AceFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::KnownAce*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Security::AccessControl::AceType>(), ::i2c::type_of<::System::Security::AccessControl::AceFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, flags);
}
inline void System::Security::AccessControl::KnownAce::_ctor(::ArrayW<uint8_t> binaryForm, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::KnownAce*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binaryForm, offset);
}
inline int32_t System::Security::AccessControl::KnownAce::get_AccessMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::KnownAce*>(), { "get_AccessMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Security::AccessControl::KnownAce::set_AccessMask(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::KnownAce*>(), { "set_AccessMask", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Principal::SecurityIdentifier* System::Security::AccessControl::KnownAce::get_SecurityIdentifier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::KnownAce*>(), { "get_SecurityIdentifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Principal::SecurityIdentifier*>(this, ___internal_method);
}
inline void System::Security::AccessControl::KnownAce::set_SecurityIdentifier(::System::Security::Principal::SecurityIdentifier* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::KnownAce*>(),
                                                                                         { "set_SecurityIdentifier", {}, { ::i2c::type_of<::System::Security::Principal::SecurityIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::AccessControl::KnownAce* System::Security::AccessControl::KnownAce::New_ctor(::System::Security::AccessControl::AceType type,
                                                                                                        ::System::Security::AccessControl::AceFlags flags) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::KnownAce*>(type, flags));
}
inline ::System::Security::AccessControl::KnownAce* System::Security::AccessControl::KnownAce::New_ctor(::ArrayW<uint8_t> binaryForm, int32_t offset) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::KnownAce*>(binaryForm, offset));
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::KnownAce::KnownAce() {}
