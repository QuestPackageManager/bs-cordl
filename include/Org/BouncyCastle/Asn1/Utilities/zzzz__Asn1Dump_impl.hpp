#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Utilities\Asn1Dump.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/Utilities/zzzz__Asn1Dump_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerApplicationSpecific_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Utilities::Asn1Dump._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Utilities::Asn1Dump::*)()>(&::Org::BouncyCastle::Asn1::Utilities::Asn1Dump::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3552a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Utilities::Asn1Dump*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Utilities::Asn1Dump.AsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, bool, ::Org::BouncyCastle::Asn1::Asn1Object*, ::System::Text::StringBuilder*)>(
    &::Org::BouncyCastle::Asn1::Utilities::Asn1Dump::AsString)> {
  constexpr static std::size_t size = 0x2564;
  constexpr static std::size_t addrs = 0x3552a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Asn1::Utilities::Asn1Dump*>(),
            { "AsString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Object*>(), ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Utilities::Asn1Dump.outputApplicationSpecific
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, bool, ::Org::BouncyCastle::Asn1::DerApplicationSpecific*)>(
    &::Org::BouncyCastle::Asn1::Utilities::Asn1Dump::outputApplicationSpecific)> {
  constexpr static std::size_t size = 0x994;
  constexpr static std::size_t addrs = 0x355521c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Utilities::Asn1Dump*>(),
                            { "outputApplicationSpecific",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerApplicationSpecific*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Utilities::Asn1Dump.DumpAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Utilities::Asn1Dump::DumpAsString)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x3555bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Utilities::Asn1Dump*>(), { "DumpAsString", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Utilities::Asn1Dump.DumpAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Org::BouncyCastle::Asn1::Asn1Encodable*)>(&::Org::BouncyCastle::Asn1::Utilities::Asn1Dump::DumpAsString)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3555d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Utilities::Asn1Dump*>(), { "DumpAsString", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Utilities::Asn1Dump.DumpAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Org::BouncyCastle::Asn1::Asn1Encodable*, bool)>(&::Org::BouncyCastle::Asn1::Utilities::Asn1Dump::DumpAsString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3555d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Utilities::Asn1Dump*>(),
                                                             { "DumpAsString", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Utilities::Asn1Dump.dumpBinaryDataAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Asn1::Utilities::Asn1Dump::dumpBinaryDataAsString)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x3554f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Utilities::Asn1Dump*>(),
                                                                                           { "dumpBinaryDataAsString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Utilities::Asn1Dump.calculateAscString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Org::BouncyCastle::Asn1::Utilities::Asn1Dump::calculateAscString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3555e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Utilities::Asn1Dump*>(),
                                                             { "calculateAscString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Utilities::Asn1Dump::setStaticF_NewLine(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "NewLine", ::Org::BouncyCastle::Asn1::Utilities::Asn1Dump*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Asn1::Utilities::Asn1Dump::getStaticF_NewLine() {
  return ::cordl_internals::getStaticField<::StringW, "NewLine", ::Org::BouncyCastle::Asn1::Utilities::Asn1Dump*>();
}
inline void Org::BouncyCastle::Asn1::Utilities::Asn1Dump::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Utilities::Asn1Dump*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::Utilities::Asn1Dump::AsString(::StringW indent, bool verbose, ::Org::BouncyCastle::Asn1::Asn1Object* obj, ::System::Text::StringBuilder* buf) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Asn1::Utilities::Asn1Dump*>(),
          { "AsString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Object*>(), ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, indent, verbose, obj, buf);
}
inline ::StringW Org::BouncyCastle::Asn1::Utilities::Asn1Dump::outputApplicationSpecific(::StringW type, ::StringW indent, bool verbose, ::Org::BouncyCastle::Asn1::DerApplicationSpecific* app) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Utilities::Asn1Dump*>(), { "outputApplicationSpecific",
                                                                                                                    {},
                                                                                                                    { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(),
                                                                                                                      ::i2c::type_of<::Org::BouncyCastle::Asn1::DerApplicationSpecific*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type, indent, verbose, app);
}
inline ::StringW Org::BouncyCastle::Asn1::Utilities::Asn1Dump::DumpAsString(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Utilities::Asn1Dump*>(), { "DumpAsString", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, obj);
}
inline ::StringW Org::BouncyCastle::Asn1::Utilities::Asn1Dump::DumpAsString(::Org::BouncyCastle::Asn1::Asn1Encodable* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Utilities::Asn1Dump*>(), { "DumpAsString", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, obj);
}
inline ::StringW Org::BouncyCastle::Asn1::Utilities::Asn1Dump::DumpAsString(::Org::BouncyCastle::Asn1::Asn1Encodable* obj, bool verbose) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Utilities::Asn1Dump*>(),
                                                           { "DumpAsString", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, obj, verbose);
}
inline ::StringW Org::BouncyCastle::Asn1::Utilities::Asn1Dump::dumpBinaryDataAsString(::StringW indent, ::ArrayW<uint8_t> bytes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Utilities::Asn1Dump*>(),
                                                                                         { "dumpBinaryDataAsString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, indent, bytes);
}
inline ::StringW Org::BouncyCastle::Asn1::Utilities::Asn1Dump::calculateAscString(::ArrayW<uint8_t> bytes, int32_t off, int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Utilities::Asn1Dump*>(),
                                                           { "calculateAscString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, bytes, off, len);
}
inline ::Org::BouncyCastle::Asn1::Utilities::Asn1Dump* Org::BouncyCastle::Asn1::Utilities::Asn1Dump::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Utilities::Asn1Dump*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Utilities::Asn1Dump::Asn1Dump() {}
