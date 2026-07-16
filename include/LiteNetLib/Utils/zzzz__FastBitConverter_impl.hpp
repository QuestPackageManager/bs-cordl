#pragma once
// IWYU pragma private; include "LiteNetLib/Utils/FastBitConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/Utils/zzzz__FastBitConverter_def.hpp"
#include "LiteNetLib/Utils/zzzz__FastBitConverter_def.hpp"
constexpr uint64_t& LiteNetLib::Utils::FastBitConverter_ConverterHelperDouble::__cordl_internal_get_Along() {
  return this->___Along;
}
constexpr uint64_t const& LiteNetLib::Utils::FastBitConverter_ConverterHelperDouble::__cordl_internal_get_Along() const {
  return this->___Along;
}
constexpr void LiteNetLib::Utils::FastBitConverter_ConverterHelperDouble::__cordl_internal_set_Along(uint64_t value) {
  this->___Along = value;
}
constexpr double_t& LiteNetLib::Utils::FastBitConverter_ConverterHelperDouble::__cordl_internal_get_Adouble() {
  return this->___Adouble;
}
constexpr double_t const& LiteNetLib::Utils::FastBitConverter_ConverterHelperDouble::__cordl_internal_get_Adouble() const {
  return this->___Adouble;
}
constexpr void LiteNetLib::Utils::FastBitConverter_ConverterHelperDouble::__cordl_internal_set_Adouble(double_t value) {
  this->___Adouble = value;
}
// Ctor Parameters [CppParam { name: "Along", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Adouble", ty: "double_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::Utils::FastBitConverter_ConverterHelperDouble::FastBitConverter_ConverterHelperDouble(uint64_t Along, double_t Adouble) noexcept {
  this->Along = Along;
  this->Adouble = Adouble;
}
// Ctor Parameters []
constexpr ::LiteNetLib::Utils::FastBitConverter_ConverterHelperDouble::FastBitConverter_ConverterHelperDouble() {}
constexpr int32_t& LiteNetLib::Utils::FastBitConverter_ConverterHelperFloat::__cordl_internal_get_Aint() {
  return this->___Aint;
}
constexpr int32_t const& LiteNetLib::Utils::FastBitConverter_ConverterHelperFloat::__cordl_internal_get_Aint() const {
  return this->___Aint;
}
constexpr void LiteNetLib::Utils::FastBitConverter_ConverterHelperFloat::__cordl_internal_set_Aint(int32_t value) {
  this->___Aint = value;
}
constexpr float_t& LiteNetLib::Utils::FastBitConverter_ConverterHelperFloat::__cordl_internal_get_Afloat() {
  return this->___Afloat;
}
constexpr float_t const& LiteNetLib::Utils::FastBitConverter_ConverterHelperFloat::__cordl_internal_get_Afloat() const {
  return this->___Afloat;
}
constexpr void LiteNetLib::Utils::FastBitConverter_ConverterHelperFloat::__cordl_internal_set_Afloat(float_t value) {
  this->___Afloat = value;
}
// Ctor Parameters [CppParam { name: "Aint", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Afloat", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::Utils::FastBitConverter_ConverterHelperFloat::FastBitConverter_ConverterHelperFloat(int32_t Aint, float_t Afloat) noexcept {
  this->Aint = Aint;
  this->Afloat = Afloat;
}
// Ctor Parameters []
constexpr ::LiteNetLib::Utils::FastBitConverter_ConverterHelperFloat::FastBitConverter_ConverterHelperFloat() {}
//  Writing Method size for method: ::LiteNetLib::Utils::FastBitConverter.WriteLittleEndian
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, uint64_t)>(&::LiteNetLib::Utils::FastBitConverter::WriteLittleEndian)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x58abb28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::FastBitConverter*>(),
                                                             { "WriteLittleEndian", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::FastBitConverter.WriteLittleEndian
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::LiteNetLib::Utils::FastBitConverter::WriteLittleEndian)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x58abc18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::FastBitConverter*>(),
                                                             { "WriteLittleEndian", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::FastBitConverter.WriteLittleEndian
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, int16_t)>(&::LiteNetLib::Utils::FastBitConverter::WriteLittleEndian)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x58abc98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::FastBitConverter*>(),
                                                             { "WriteLittleEndian", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::FastBitConverter.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, double_t)>(&::LiteNetLib::Utils::FastBitConverter::GetBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58abce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::FastBitConverter*>(),
                                                             { "GetBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::FastBitConverter.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, float_t)>(&::LiteNetLib::Utils::FastBitConverter::GetBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58abce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::FastBitConverter*>(),
                                                             { "GetBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::FastBitConverter.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, int16_t)>(&::LiteNetLib::Utils::FastBitConverter::GetBytes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58abcf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::FastBitConverter*>(),
                                                             { "GetBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::FastBitConverter.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, uint16_t)>(&::LiteNetLib::Utils::FastBitConverter::GetBytes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58a6348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::FastBitConverter*>(),
                                                             { "GetBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::FastBitConverter.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::LiteNetLib::Utils::FastBitConverter::GetBytes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58a678c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::FastBitConverter*>(),
                                                             { "GetBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::FastBitConverter.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, uint32_t)>(&::LiteNetLib::Utils::FastBitConverter::GetBytes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58abcf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::FastBitConverter*>(),
                                                             { "GetBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::FastBitConverter.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, int64_t)>(&::LiteNetLib::Utils::FastBitConverter::GetBytes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58a2a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::FastBitConverter*>(),
                                                             { "GetBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::FastBitConverter.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, uint64_t)>(&::LiteNetLib::Utils::FastBitConverter::GetBytes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58abcf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::FastBitConverter*>(),
                                                             { "GetBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
inline void LiteNetLib::Utils::FastBitConverter::WriteLittleEndian(::ArrayW<uint8_t> buffer, int32_t offset, uint64_t data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::FastBitConverter*>(),
                                                           { "WriteLittleEndian", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, offset, data);
}
inline void LiteNetLib::Utils::FastBitConverter::WriteLittleEndian(::ArrayW<uint8_t> buffer, int32_t offset, int32_t data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::FastBitConverter*>(),
                                                           { "WriteLittleEndian", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, offset, data);
}
inline void LiteNetLib::Utils::FastBitConverter::WriteLittleEndian(::ArrayW<uint8_t> buffer, int32_t offset, int16_t data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::FastBitConverter*>(),
                                                           { "WriteLittleEndian", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, offset, data);
}
inline void LiteNetLib::Utils::FastBitConverter::GetBytes(::ArrayW<uint8_t> bytes, int32_t startIndex, double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::FastBitConverter*>(),
                                                           { "GetBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bytes, startIndex, value);
}
inline void LiteNetLib::Utils::FastBitConverter::GetBytes(::ArrayW<uint8_t> bytes, int32_t startIndex, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::FastBitConverter*>(),
                                                           { "GetBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bytes, startIndex, value);
}
inline void LiteNetLib::Utils::FastBitConverter::GetBytes(::ArrayW<uint8_t> bytes, int32_t startIndex, int16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::FastBitConverter*>(),
                                                           { "GetBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bytes, startIndex, value);
}
inline void LiteNetLib::Utils::FastBitConverter::GetBytes(::ArrayW<uint8_t> bytes, int32_t startIndex, uint16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::FastBitConverter*>(),
                                                           { "GetBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bytes, startIndex, value);
}
inline void LiteNetLib::Utils::FastBitConverter::GetBytes(::ArrayW<uint8_t> bytes, int32_t startIndex, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::FastBitConverter*>(),
                                                           { "GetBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bytes, startIndex, value);
}
inline void LiteNetLib::Utils::FastBitConverter::GetBytes(::ArrayW<uint8_t> bytes, int32_t startIndex, uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::FastBitConverter*>(),
                                                           { "GetBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bytes, startIndex, value);
}
inline void LiteNetLib::Utils::FastBitConverter::GetBytes(::ArrayW<uint8_t> bytes, int32_t startIndex, int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::FastBitConverter*>(),
                                                           { "GetBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bytes, startIndex, value);
}
inline void LiteNetLib::Utils::FastBitConverter::GetBytes(::ArrayW<uint8_t> bytes, int32_t startIndex, uint64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::FastBitConverter*>(),
                                                           { "GetBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bytes, startIndex, value);
}
// Ctor Parameters []
constexpr ::LiteNetLib::Utils::FastBitConverter::FastBitConverter() {}
