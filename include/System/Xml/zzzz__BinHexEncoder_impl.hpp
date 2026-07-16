#pragma once
// IWYU pragma private; include "System/Xml/BinHexEncoder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__BinHexEncoder_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::BinHexEncoder.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Xml::XmlWriter*)>(&::System::Xml::BinHexEncoder::Encode)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x618dab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::BinHexEncoder*>(),
                            { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinHexEncoder.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::BinHexEncoder::Encode)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x618dd84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::BinHexEncoder*>(), { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinHexEncoder.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>)>(&::System::Xml::BinHexEncoder::Encode)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x618dc54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::BinHexEncoder*>(),
                                         { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::BinHexEncoder::Encode(::ArrayW<uint8_t> buffer, int32_t index, int32_t count, ::System::Xml::XmlWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::BinHexEncoder*>(),
                                       { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, index, count, writer);
}
inline ::StringW System::Xml::BinHexEncoder::Encode(::ArrayW<uint8_t> inArray, int32_t offsetIn, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::BinHexEncoder*>(), { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, inArray, offsetIn, count);
}
inline int32_t System::Xml::BinHexEncoder::Encode(::ArrayW<uint8_t> inArray, int32_t offsetIn, int32_t count, ::ArrayW<char16_t> outArray) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinHexEncoder*>(),
                                              { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, inArray, offsetIn, count, outArray);
}
// Ctor Parameters []
constexpr ::System::Xml::BinHexEncoder::BinHexEncoder() {}
