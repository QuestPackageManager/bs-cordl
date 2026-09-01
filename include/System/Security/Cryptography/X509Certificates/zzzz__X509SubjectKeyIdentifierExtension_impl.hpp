#pragma once
// IWYU pragma private; include "System\Security\Cryptography\X509Certificates\X509SubjectKeyIdentifierExtension.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Extension_impl.hpp"
#include "System/Security/Cryptography/zzzz__AsnDecodeStatus_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509SubjectKeyIdentifierExtension_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__PublicKey_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509SubjectKeyIdentifierHashAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__AsnDecodeStatus_def.hpp"
#include "System/Security/Cryptography/zzzz__AsnEncodedData_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x63b26e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::*)(
    ::System::Security::Cryptography::AsnEncodedData*, bool)>(&::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x63b2770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::AsnEncodedData*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::*)(::ArrayW<uint8_t>, bool)>(
    &::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::_ctor)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x63b298c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::*)(::StringW, bool)>(
    &::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x63b2b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::*)(
    ::System::Security::Cryptography::X509Certificates::PublicKey*, bool)>(&::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x63b2dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::PublicKey*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::*)(
    ::System::Security::Cryptography::X509Certificates::PublicKey*, ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm, bool)>(
    &::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::_ctor)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x63b2de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::PublicKey*>(),
                                                    ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension.get_SubjectKeyIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::get_SubjectKeyIdentifier)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x63b3178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(), { "get_SubjectKeyIdentifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension.CopyFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::*)(
    ::System::Security::Cryptography::AsnEncodedData*)>(&::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::CopyFrom)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x63b31fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(),
                                                            { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension.FromHexChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(char16_t)>(&::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::FromHexChar)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x63b33c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(),
                                                                                           { "FromHexChar", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension.FromHexChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(char16_t, char16_t)>(&::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::FromHexChars)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x63b33fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(),
                                                                                           { "FromHexChars", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension.FromHex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::FromHex)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x63b2ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(),
                                                                                           { "FromHex", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::AsnDecodeStatus (::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::*)(
    ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::Decode)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x63b2830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(),
                                                                                           { "Decode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::Encode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x63b2b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(), { "Encode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::*)(bool)>(
    &::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::ToString)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x63b3498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(),
                                                            { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::__cordl_internal_get__subjectKeyIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subjectKeyIdentifier;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::__cordl_internal_get__subjectKeyIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subjectKeyIdentifier;
}
constexpr void System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::__cordl_internal_set__subjectKeyIdentifier(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____subjectKeyIdentifier = value;
}
constexpr ::StringW& System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::__cordl_internal_get__ski() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ski;
}
constexpr ::StringW const& System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::__cordl_internal_get__ski() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ski;
}
constexpr void System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::__cordl_internal_set__ski(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ski = value;
}
constexpr ::System::Security::Cryptography::AsnDecodeStatus& System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::__cordl_internal_get__status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____status;
}
constexpr ::System::Security::Cryptography::AsnDecodeStatus const& System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::__cordl_internal_get__status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____status;
}
constexpr void System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::__cordl_internal_set__status(::System::Security::Cryptography::AsnDecodeStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____status = value;
}
inline void System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::_ctor(::System::Security::Cryptography::AsnEncodedData* encodedSubjectKeyIdentifier, bool critical) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::AsnEncodedData*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encodedSubjectKeyIdentifier, critical);
}
inline void System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::_ctor(::ArrayW<uint8_t> subjectKeyIdentifier, bool critical) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subjectKeyIdentifier, critical);
}
inline void System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::_ctor(::StringW subjectKeyIdentifier, bool critical) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subjectKeyIdentifier, critical);
}
inline void System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::_ctor(::System::Security::Cryptography::X509Certificates::PublicKey* key, bool critical) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::PublicKey*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, critical);
}
inline void System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::_ctor(
    ::System::Security::Cryptography::X509Certificates::PublicKey* key, ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm algorithm, bool critical) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::PublicKey*>(),
                                                  ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, algorithm, critical);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::get_SubjectKeyIdentifier() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(), { "get_SubjectKeyIdentifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::CopyFrom(::System::Security::Cryptography::AsnEncodedData* asnEncodedData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asnEncodedData);
}
inline uint8_t System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::FromHexChar(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(),
                                                                                         { "FromHexChar", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, c);
}
inline uint8_t System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::FromHexChars(char16_t c1, char16_t c2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(),
                                                                                         { "FromHexChars", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, c1, c2);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::FromHex(::StringW hex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(), { "FromHex", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, hex);
}
inline ::System::Security::Cryptography::AsnDecodeStatus System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::Decode(::ArrayW<uint8_t> extension) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(),
                                                                                         { "Decode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::AsnDecodeStatus>(this, ___internal_method, extension);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::Encode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(), { "Encode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::ToString(bool multiLine) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, multiLine);
}
inline ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension* System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>());
}
inline ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*
System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::New_ctor(::System::Security::Cryptography::AsnEncodedData* encodedSubjectKeyIdentifier, bool critical) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(encodedSubjectKeyIdentifier, critical));
}
inline ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*
System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::New_ctor(::ArrayW<uint8_t> subjectKeyIdentifier, bool critical) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(subjectKeyIdentifier, critical));
}
inline ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*
System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::New_ctor(::StringW subjectKeyIdentifier, bool critical) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(subjectKeyIdentifier, critical));
}
inline ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*
System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::New_ctor(::System::Security::Cryptography::X509Certificates::PublicKey* key, bool critical) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(key, critical));
}
inline ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension* System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::New_ctor(
    ::System::Security::Cryptography::X509Certificates::PublicKey* key, ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm algorithm, bool critical) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension*>(key, algorithm, critical));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension::X509SubjectKeyIdentifierExtension() {}
