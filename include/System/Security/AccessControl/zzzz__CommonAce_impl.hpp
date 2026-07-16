#pragma once
// IWYU pragma private; include "System/Security/AccessControl/CommonAce.hpp"
#include "System/Security/AccessControl/zzzz__QualifiedAce_impl.hpp"
#include "System/Security/AccessControl/zzzz__CommonAce_def.hpp"
#include "System/Security/AccessControl/zzzz__AceFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__AceQualifier_def.hpp"
#include "System/Security/AccessControl/zzzz__AceType_def.hpp"
#include "System/Security/Principal/zzzz__SecurityIdentifier_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::CommonAce._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::CommonAce::*)(
    ::System::Security::AccessControl::AceFlags, ::System::Security::AccessControl::AceQualifier, int32_t, ::System::Security::Principal::SecurityIdentifier*, bool, ::ArrayW<uint8_t>)>(
    &::System::Security::AccessControl::CommonAce::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b1a8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAce*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::System::Security::AccessControl::AceFlags>(), ::i2c::type_of<::System::Security::AccessControl::AceQualifier>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<::System::Security::Principal::SecurityIdentifier*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAce._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::CommonAce::*)(::ArrayW<uint8_t>, int32_t)>(&::System::Security::AccessControl::CommonAce::_ctor)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5b1aa70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAce*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAce.get_BinaryLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::AccessControl::CommonAce::*)()>(&::System::Security::AccessControl::CommonAce::get_BinaryLength)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b1adb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAce*>(), { ::i2c::class_of<::System::Security::AccessControl::CommonAce*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAce.GetBinaryForm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::CommonAce::*)(::ArrayW<uint8_t>, int32_t)>(
    &::System::Security::AccessControl::CommonAce::GetBinaryForm)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5b1ae04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAce*>(), { ::i2c::class_of<::System::Security::AccessControl::CommonAce*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAce.ConvertType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::AceType (*)(::System::Security::AccessControl::AceQualifier, bool)>(
    &::System::Security::AccessControl::CommonAce::ConvertType)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5b1a93c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAce*>(),
                                                             { "ConvertType", {}, { ::i2c::type_of<::System::Security::AccessControl::AceQualifier>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void System::Security::AccessControl::CommonAce::_ctor(::System::Security::AccessControl::AceFlags flags, ::System::Security::AccessControl::AceQualifier qualifier, int32_t accessMask,
                                                              ::System::Security::Principal::SecurityIdentifier* sid, bool isCallback, ::ArrayW<uint8_t> opaque) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAce*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::System::Security::AccessControl::AceFlags>(), ::i2c::type_of<::System::Security::AccessControl::AceQualifier>(), ::i2c::type_of<int32_t>(),
                                           ::i2c::type_of<::System::Security::Principal::SecurityIdentifier*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flags, qualifier, accessMask, sid, isCallback, opaque);
}
inline void System::Security::AccessControl::CommonAce::_ctor(::ArrayW<uint8_t> binaryForm, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAce*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binaryForm, offset);
}
inline int32_t System::Security::AccessControl::CommonAce::get_BinaryLength() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::CommonAce*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Security::AccessControl::CommonAce::GetBinaryForm(::ArrayW<uint8_t> binaryForm, int32_t offset) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::CommonAce*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binaryForm, offset);
}
inline ::System::Security::AccessControl::AceType System::Security::AccessControl::CommonAce::ConvertType(::System::Security::AccessControl::AceQualifier qualifier, bool isCallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::CommonAce*>(),
                                                           { "ConvertType", {}, { ::i2c::type_of<::System::Security::AccessControl::AceQualifier>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::AceType>(nullptr, ___internal_method, qualifier, isCallback);
}
inline ::System::Security::AccessControl::CommonAce* System::Security::AccessControl::CommonAce::New_ctor(::System::Security::AccessControl::AceFlags flags,
                                                                                                          ::System::Security::AccessControl::AceQualifier qualifier, int32_t accessMask,
                                                                                                          ::System::Security::Principal::SecurityIdentifier* sid, bool isCallback,
                                                                                                          ::ArrayW<uint8_t> opaque) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::CommonAce*>(flags, qualifier, accessMask, sid, isCallback, opaque));
}
inline ::System::Security::AccessControl::CommonAce* System::Security::AccessControl::CommonAce::New_ctor(::ArrayW<uint8_t> binaryForm, int32_t offset) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::CommonAce*>(binaryForm, offset));
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::CommonAce::CommonAce() {}
