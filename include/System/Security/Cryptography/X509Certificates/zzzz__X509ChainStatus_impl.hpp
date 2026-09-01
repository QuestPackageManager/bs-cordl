#pragma once
// IWYU pragma private; include "System\Security\Cryptography\X509Certificates\X509ChainStatus.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatusFlags_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatus_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatusFlags_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainStatus._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainStatus::*)(
    ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags)>(&::System::Security::Cryptography::X509Certificates::X509ChainStatus::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63af7dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainStatus>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainStatus.get_Status
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags (
    ::System::Security::Cryptography::X509Certificates::X509ChainStatus::*)()>(&::System::Security::Cryptography::X509Certificates::X509ChainStatus::get_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63af978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainStatus>(), { "get_Status", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainStatus.set_Status
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainStatus::*)(
    ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags)>(&::System::Security::Cryptography::X509Certificates::X509ChainStatus::set_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63af980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainStatus>(),
                                                             { "set_Status", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainStatus.set_StatusInformation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ChainStatus::*)(::StringW)>(
    &::System::Security::Cryptography::X509Certificates::X509ChainStatus::set_StatusInformation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63af988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainStatus>(), { "set_StatusInformation", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ChainStatus.GetInformation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags)>(
    &::System::Security::Cryptography::X509Certificates::X509ChainStatus::GetInformation)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x63af7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainStatus>(),
                                                             { "GetInformation", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>() } })));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::X509Certificates::X509ChainStatus::_ctor(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flag) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainStatus>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, flag);
}
inline ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags System::Security::Cryptography::X509Certificates::X509ChainStatus::get_Status() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainStatus>(), { "get_Status", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>(*this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509ChainStatus::set_Status(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainStatus>(),
                                                           { "set_Status", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::Security::Cryptography::X509Certificates::X509ChainStatus::set_StatusInformation(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainStatus>(), { "set_StatusInformation", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509ChainStatus::GetInformation(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ChainStatus>(),
                                                           { "GetInformation", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, flags);
}
// Ctor Parameters [CppParam { name: "status", ty: "::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "info", ty:
// "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatus::X509ChainStatus(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags status,
                                                                                               ::StringW info) noexcept {
  this->status = status;
  this->info = info;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatus::X509ChainStatus() {}
