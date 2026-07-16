#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509BasicConstraintsExtension.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Extension_impl.hpp"
#include "System/Security/Cryptography/zzzz__AsnDecodeStatus_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509BasicConstraintsExtension_def.hpp"
#include "System/Security/Cryptography/zzzz__AsnDecodeStatus_def.hpp"
#include "System/Security/Cryptography/zzzz__AsnEncodedData_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x639f818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::*)(
    ::System::Security::Cryptography::AsnEncodedData*, bool)>(&::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x639e30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::AsnEncodedData*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::*)(bool, bool, int32_t, bool)>(
    &::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x639fa7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension.get_CertificateAuthority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::get_CertificateAuthority)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x639fce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*>(), { "get_CertificateAuthority", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension.get_HasPathLengthConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::get_HasPathLengthConstraint)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x639fd44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*>(), { "get_HasPathLengthConstraint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension.get_PathLengthConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::get_PathLengthConstraint)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x639fda8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*>(), { "get_PathLengthConstraint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension.CopyFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::*)(::System::Security::Cryptography::AsnEncodedData*)>(
    &::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::CopyFrom)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x639fe0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*>(),
                                                            { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::AsnDecodeStatus (::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::*)(
    ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::Decode)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x639f8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*>(),
                                                                                           { "Decode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::Encode)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x639fba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*>(), { "Encode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::*)(bool)>(
    &::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::ToString)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x639ffcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*>(),
                                                            { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*>(), 6 }));
    return ___internal_method;
  }
};
constexpr bool& System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::__cordl_internal_get__certificateAuthority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certificateAuthority;
}
constexpr bool const& System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::__cordl_internal_get__certificateAuthority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certificateAuthority;
}
constexpr void System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::__cordl_internal_set__certificateAuthority(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____certificateAuthority = value;
}
constexpr bool& System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::__cordl_internal_get__hasPathLengthConstraint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasPathLengthConstraint;
}
constexpr bool const& System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::__cordl_internal_get__hasPathLengthConstraint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasPathLengthConstraint;
}
constexpr void System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::__cordl_internal_set__hasPathLengthConstraint(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasPathLengthConstraint = value;
}
constexpr int32_t& System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::__cordl_internal_get__pathLengthConstraint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pathLengthConstraint;
}
constexpr int32_t const& System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::__cordl_internal_get__pathLengthConstraint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pathLengthConstraint;
}
constexpr void System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::__cordl_internal_set__pathLengthConstraint(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pathLengthConstraint = value;
}
constexpr ::System::Security::Cryptography::AsnDecodeStatus& System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::__cordl_internal_get__status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____status;
}
constexpr ::System::Security::Cryptography::AsnDecodeStatus const& System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::__cordl_internal_get__status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____status;
}
constexpr void System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::__cordl_internal_set__status(::System::Security::Cryptography::AsnDecodeStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____status = value;
}
inline void System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::_ctor(::System::Security::Cryptography::AsnEncodedData* encodedBasicConstraints, bool critical) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::AsnEncodedData*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encodedBasicConstraints, critical);
}
inline void System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::_ctor(bool certificateAuthority, bool hasPathLengthConstraint, int32_t pathLengthConstraint,
                                                                                                   bool critical) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificateAuthority, hasPathLengthConstraint, pathLengthConstraint, critical);
}
inline bool System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::get_CertificateAuthority() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*>(), { "get_CertificateAuthority", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::get_HasPathLengthConstraint() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*>(), { "get_HasPathLengthConstraint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::get_PathLengthConstraint() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*>(), { "get_PathLengthConstraint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::CopyFrom(::System::Security::Cryptography::AsnEncodedData* asnEncodedData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asnEncodedData);
}
inline ::System::Security::Cryptography::AsnDecodeStatus System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::Decode(::ArrayW<uint8_t> extension) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*>(),
                                                                                         { "Decode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::AsnDecodeStatus>(this, ___internal_method, extension);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::Encode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*>(), { "Encode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::ToString(bool multiLine) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, multiLine);
}
inline ::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension* System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*>());
}
inline ::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*
System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::New_ctor(::System::Security::Cryptography::AsnEncodedData* encodedBasicConstraints, bool critical) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*>(encodedBasicConstraints, critical));
}
inline ::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*
System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::New_ctor(bool certificateAuthority, bool hasPathLengthConstraint, int32_t pathLengthConstraint, bool critical) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*>(certificateAuthority, hasPathLengthConstraint,
                                                                                                                                              pathLengthConstraint, critical));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::X509BasicConstraintsExtension() {}
