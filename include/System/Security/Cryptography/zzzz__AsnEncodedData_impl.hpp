#pragma once
// IWYU pragma private; include "System/Security/Cryptography/AsnEncodedData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__AsnEncodedData_def.hpp"
#include "System/Security/Cryptography/zzzz__Oid_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::AsnEncodedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsnEncodedData::*)()>(&::System::Security::Cryptography::AsnEncodedData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x639cfcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsnEncodedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsnEncodedData::*)(::StringW, ::ArrayW<uint8_t>)>(
    &::System::Security::Cryptography::AsnEncodedData::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x639cfd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsnEncodedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsnEncodedData::*)(::System::Security::Cryptography::Oid*, ::ArrayW<uint8_t>)>(
    &::System::Security::Cryptography::AsnEncodedData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x639d128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::Oid*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsnEncodedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsnEncodedData::*)(::System::Security::Cryptography::AsnEncodedData*)>(
    &::System::Security::Cryptography::AsnEncodedData::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x639d1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::AsnEncodedData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsnEncodedData.get_Oid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::Oid* (::System::Security::Cryptography::AsnEncodedData::*)()>(
    &::System::Security::Cryptography::AsnEncodedData::get_Oid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x639d298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), { "get_Oid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsnEncodedData.set_Oid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsnEncodedData::*)(::System::Security::Cryptography::Oid*)>(
    &::System::Security::Cryptography::AsnEncodedData::set_Oid)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x639d150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), { "set_Oid", {}, { ::i2c::type_of<::System::Security::Cryptography::Oid*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsnEncodedData.get_RawData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::AsnEncodedData::*)()>(&::System::Security::Cryptography::AsnEncodedData::get_RawData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x639d2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), { "get_RawData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsnEncodedData.set_RawData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsnEncodedData::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::AsnEncodedData::set_RawData)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x639d044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), { "set_RawData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsnEncodedData.CopyFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsnEncodedData::*)(::System::Security::Cryptography::AsnEncodedData*)>(
    &::System::Security::Cryptography::AsnEncodedData::CopyFrom)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x639d2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), { ::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsnEncodedData.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::AsnEncodedData::*)(bool)>(&::System::Security::Cryptography::AsnEncodedData::Format)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x639d3a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), { ::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsnEncodedData.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::AsnEncodedData::*)(bool)>(&::System::Security::Cryptography::AsnEncodedData::ToString)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x639d508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), { ::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsnEncodedData.Default
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::AsnEncodedData::*)(bool)>(&::System::Security::Cryptography::AsnEncodedData::Default)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x639d3e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), { "Default", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsnEncodedData.BasicConstraintsExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::AsnEncodedData::*)(bool)>(
    &::System::Security::Cryptography::AsnEncodedData::BasicConstraintsExtension)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x639d6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), { "BasicConstraintsExtension", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsnEncodedData.EnhancedKeyUsageExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::AsnEncodedData::*)(bool)>(
    &::System::Security::Cryptography::AsnEncodedData::EnhancedKeyUsageExtension)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x639d7e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), { "EnhancedKeyUsageExtension", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsnEncodedData.KeyUsageExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::AsnEncodedData::*)(bool)>(&::System::Security::Cryptography::AsnEncodedData::KeyUsageExtension)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x639d8ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), { "KeyUsageExtension", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsnEncodedData.SubjectKeyIdentifierExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::AsnEncodedData::*)(bool)>(
    &::System::Security::Cryptography::AsnEncodedData::SubjectKeyIdentifierExtension)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x639d9f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), { "SubjectKeyIdentifierExtension", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsnEncodedData.SubjectAltName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::AsnEncodedData::*)(bool)>(&::System::Security::Cryptography::AsnEncodedData::SubjectAltName)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x639db04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), { "SubjectAltName", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsnEncodedData.NetscapeCertType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::AsnEncodedData::*)(bool)>(&::System::Security::Cryptography::AsnEncodedData::NetscapeCertType)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x639df10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), { "NetscapeCertType", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::Oid*& System::Security::Cryptography::AsnEncodedData::__cordl_internal_get__oid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oid;
}
constexpr ::System::Security::Cryptography::Oid* const& System::Security::Cryptography::AsnEncodedData::__cordl_internal_get__oid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oid;
}
constexpr void System::Security::Cryptography::AsnEncodedData::__cordl_internal_set__oid(::System::Security::Cryptography::Oid* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____oid = value;
}
constexpr ::ArrayW<uint8_t>& System::Security::Cryptography::AsnEncodedData::__cordl_internal_get__raw() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____raw;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Cryptography::AsnEncodedData::__cordl_internal_get__raw() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____raw;
}
constexpr void System::Security::Cryptography::AsnEncodedData::__cordl_internal_set__raw(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____raw = value;
}
inline void System::Security::Cryptography::AsnEncodedData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::AsnEncodedData::_ctor(::StringW oid, ::ArrayW<uint8_t> rawData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oid, rawData);
}
inline void System::Security::Cryptography::AsnEncodedData::_ctor(::System::Security::Cryptography::Oid* oid, ::ArrayW<uint8_t> rawData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::Oid*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oid, rawData);
}
inline void System::Security::Cryptography::AsnEncodedData::_ctor(::System::Security::Cryptography::AsnEncodedData* asnEncodedData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::AsnEncodedData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asnEncodedData);
}
inline ::System::Security::Cryptography::Oid* System::Security::Cryptography::AsnEncodedData::get_Oid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), { "get_Oid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::Oid*>(this, ___internal_method);
}
inline void System::Security::Cryptography::AsnEncodedData::set_Oid(::System::Security::Cryptography::Oid* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), { "set_Oid", {}, { ::i2c::type_of<::System::Security::Cryptography::Oid*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::AsnEncodedData::get_RawData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), { "get_RawData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Security::Cryptography::AsnEncodedData::set_RawData(::ArrayW<uint8_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), { "set_RawData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Security::Cryptography::AsnEncodedData::CopyFrom(::System::Security::Cryptography::AsnEncodedData* asnEncodedData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asnEncodedData);
}
inline ::StringW System::Security::Cryptography::AsnEncodedData::Format(bool multiLine) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, multiLine);
}
inline ::StringW System::Security::Cryptography::AsnEncodedData::ToString(bool multiLine) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, multiLine);
}
inline ::StringW System::Security::Cryptography::AsnEncodedData::Default(bool multiLine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), { "Default", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, multiLine);
}
inline ::StringW System::Security::Cryptography::AsnEncodedData::BasicConstraintsExtension(bool multiLine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), { "BasicConstraintsExtension", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, multiLine);
}
inline ::StringW System::Security::Cryptography::AsnEncodedData::EnhancedKeyUsageExtension(bool multiLine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), { "EnhancedKeyUsageExtension", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, multiLine);
}
inline ::StringW System::Security::Cryptography::AsnEncodedData::KeyUsageExtension(bool multiLine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), { "KeyUsageExtension", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, multiLine);
}
inline ::StringW System::Security::Cryptography::AsnEncodedData::SubjectKeyIdentifierExtension(bool multiLine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), { "SubjectKeyIdentifierExtension", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, multiLine);
}
inline ::StringW System::Security::Cryptography::AsnEncodedData::SubjectAltName(bool multiLine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), { "SubjectAltName", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, multiLine);
}
inline ::StringW System::Security::Cryptography::AsnEncodedData::NetscapeCertType(bool multiLine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsnEncodedData*>(), { "NetscapeCertType", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, multiLine);
}
inline ::System::Security::Cryptography::AsnEncodedData* System::Security::Cryptography::AsnEncodedData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::AsnEncodedData*>());
}
inline ::System::Security::Cryptography::AsnEncodedData* System::Security::Cryptography::AsnEncodedData::New_ctor(::StringW oid, ::ArrayW<uint8_t> rawData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::AsnEncodedData*>(oid, rawData));
}
inline ::System::Security::Cryptography::AsnEncodedData* System::Security::Cryptography::AsnEncodedData::New_ctor(::System::Security::Cryptography::Oid* oid, ::ArrayW<uint8_t> rawData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::AsnEncodedData*>(oid, rawData));
}
inline ::System::Security::Cryptography::AsnEncodedData* System::Security::Cryptography::AsnEncodedData::New_ctor(::System::Security::Cryptography::AsnEncodedData* asnEncodedData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::AsnEncodedData*>(asnEncodedData));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::AsnEncodedData::AsnEncodedData() {}
