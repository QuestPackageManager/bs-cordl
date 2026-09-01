#pragma once
// IWYU pragma private; include "System\Security\Cryptography\X509Certificates\X509Extension.hpp"
#include "System/Security/Cryptography/zzzz__AsnEncodedData_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Extension_def.hpp"
#include "System/Security/Cryptography/zzzz__AsnEncodedData_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Extension._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Extension::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Extension::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63afa1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Extension*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Extension._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Extension::*)(::StringW, ::ArrayW<uint8_t>, bool)>(
    &::System::Security::Cryptography::X509Certificates::X509Extension::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x63b0690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Extension*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Extension.get_Critical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509Extension::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509Extension::get_Critical)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63b06b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Extension*>(), { "get_Critical", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Extension.set_Critical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Extension::*)(bool)>(
    &::System::Security::Cryptography::X509Certificates::X509Extension::set_Critical)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63b06c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Extension*>(), { "set_Critical", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Extension.CopyFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509Extension::*)(::System::Security::Cryptography::AsnEncodedData*)>(
    &::System::Security::Cryptography::X509Certificates::X509Extension::CopyFrom)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x63b06c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Extension*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Extension*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509Extension.FormatUnkownData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X509Extension::*)(::ArrayW<uint8_t>)>(
    &::System::Security::Cryptography::X509Certificates::X509Extension::FormatUnkownData)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x63b057c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Extension*>(), { "FormatUnkownData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
constexpr bool& System::Security::Cryptography::X509Certificates::X509Extension::__cordl_internal_get__critical() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____critical;
}
constexpr bool const& System::Security::Cryptography::X509Certificates::X509Extension::__cordl_internal_get__critical() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____critical;
}
constexpr void System::Security::Cryptography::X509Certificates::X509Extension::__cordl_internal_set__critical(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____critical = value;
}
inline void System::Security::Cryptography::X509Certificates::X509Extension::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Extension*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509Extension::_ctor(::StringW oid, ::ArrayW<uint8_t> rawData, bool critical) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Extension*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oid, rawData, critical);
}
inline bool System::Security::Cryptography::X509Certificates::X509Extension::get_Critical() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Extension*>(), { "get_Critical", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509Extension::set_Critical(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Extension*>(), { "set_Critical", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Security::Cryptography::X509Certificates::X509Extension::CopyFrom(::System::Security::Cryptography::AsnEncodedData* asnEncodedData) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Extension*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asnEncodedData);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509Extension::FormatUnkownData(::ArrayW<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509Extension*>(), { "FormatUnkownData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, data);
}
inline ::System::Security::Cryptography::X509Certificates::X509Extension* System::Security::Cryptography::X509Certificates::X509Extension::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509Extension*>());
}
inline ::System::Security::Cryptography::X509Certificates::X509Extension* System::Security::Cryptography::X509Certificates::X509Extension::New_ctor(::StringW oid, ::ArrayW<uint8_t> rawData,
                                                                                                                                                    bool critical) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509Extension*>(oid, rawData, critical));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509Extension::X509Extension() {}
