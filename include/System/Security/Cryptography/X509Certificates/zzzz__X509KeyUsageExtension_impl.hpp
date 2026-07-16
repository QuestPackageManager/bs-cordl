#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509KeyUsageExtension.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Extension_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyUsageFlags_impl.hpp"
#include "System/Security/Cryptography/zzzz__AsnDecodeStatus_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyUsageExtension_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyUsageFlags_def.hpp"
#include "System/Security/Cryptography/zzzz__AsnDecodeStatus_def.hpp"
#include "System/Security/Cryptography/zzzz__AsnEncodedData_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x63abc08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::*)(::System::Security::Cryptography::AsnEncodedData*, bool)>(
    &::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x63abc94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::AsnEncodedData*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::*)(
    ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags, bool)>(&::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x63abf04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension.get_KeyUsages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags (
    ::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::*)()>(&::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::get_KeyUsages)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x63ac130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*>(), { "get_KeyUsages", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension.CopyFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::*)(::System::Security::Cryptography::AsnEncodedData*)>(
    &::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::CopyFrom)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x63ac194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension.GetValidFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags (
    ::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::*)(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags)>(
    &::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::GetValidFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x63abfcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*>(),
                                                             { "GetValidFlags", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::AsnDecodeStatus (::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::*)(
    ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::Decode)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x63abd54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*>(), { "Decode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::Encode)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x63abfdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*>(), { "Encode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::*)(bool)>(
    &::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::ToString)> {
  constexpr static std::size_t size = 0x59c;
  constexpr static std::size_t addrs = 0x63ac358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags& System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::__cordl_internal_get__keyUsages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyUsages;
}
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const&
System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::__cordl_internal_get__keyUsages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyUsages;
}
constexpr void System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::__cordl_internal_set__keyUsages(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keyUsages = value;
}
constexpr ::System::Security::Cryptography::AsnDecodeStatus& System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::__cordl_internal_get__status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____status;
}
constexpr ::System::Security::Cryptography::AsnDecodeStatus const& System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::__cordl_internal_get__status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____status;
}
constexpr void System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::__cordl_internal_set__status(::System::Security::Cryptography::AsnDecodeStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____status = value;
}
inline void System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::_ctor(::System::Security::Cryptography::AsnEncodedData* encodedKeyUsage, bool critical) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::AsnEncodedData*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encodedKeyUsage, critical);
}
inline void System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::_ctor(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags keyUsages, bool critical) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyUsages, critical);
}
inline ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::get_KeyUsages() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*>(), { "get_KeyUsages", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags>(this, ___internal_method);
}
inline void System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::CopyFrom(::System::Security::Cryptography::AsnEncodedData* asnEncodedData) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asnEncodedData);
}
inline ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags
System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::GetValidFlags(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*>(),
                                                           { "GetValidFlags", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags>(this, ___internal_method, flags);
}
inline ::System::Security::Cryptography::AsnDecodeStatus System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::Decode(::ArrayW<uint8_t> extension) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*>(), { "Decode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::AsnDecodeStatus>(this, ___internal_method, extension);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::Encode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*>(), { "Encode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::ToString(bool multiLine) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, multiLine);
}
inline ::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension* System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*>());
}
inline ::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*
System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::New_ctor(::System::Security::Cryptography::AsnEncodedData* encodedKeyUsage, bool critical) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*>(encodedKeyUsage, critical));
}
inline ::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*
System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::New_ctor(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags keyUsages, bool critical) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*>(keyUsages, critical));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::X509KeyUsageExtension() {}
constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::all{ static_cast<int32_t>(0x80ff) };
