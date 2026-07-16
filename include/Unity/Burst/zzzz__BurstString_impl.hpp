#pragma once
// IWYU pragma private; include "Unity/Burst/BurstString.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/zzzz__BurstString_def.hpp"
#include "Unity/Burst/zzzz__BurstString_def.hpp"
//  Writing Method size for method: ::Unity::Burst::BurstString_PreserveAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstString_PreserveAttribute::*)()>(&::Unity::Burst::BurstString_PreserveAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6472980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_PreserveAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Burst::BurstString_PreserveAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_PreserveAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Burst::BurstString_PreserveAttribute* Unity::Burst::BurstString_PreserveAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Burst::BurstString_PreserveAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstString_PreserveAttribute::BurstString_PreserveAttribute() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Burst::BurstString_NumberBufferKind::BurstString_NumberBufferKind(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstString_NumberBufferKind::BurstString_NumberBufferKind() {}
constexpr ::Unity::Burst::BurstString_NumberBufferKind Unity::Burst::BurstString_NumberBufferKind::Integer{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Burst::BurstString_NumberBufferKind Unity::Burst::BurstString_NumberBufferKind::Float{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::Unity::Burst::BurstString_NumberBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstString_NumberBuffer::*)(::Unity::Burst::BurstString_NumberBufferKind, uint8_t*, int32_t, int32_t, bool)>(
    &::Unity::Burst::BurstString_NumberBuffer::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x646f85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_NumberBuffer>(), { ".ctor",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::Unity::Burst::BurstString_NumberBufferKind>(), ::i2c::type_of<uint8_t*>(),
                                                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString_NumberBuffer.GetDigitsPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (::Unity::Burst::BurstString_NumberBuffer::*)()>(&::Unity::Burst::BurstString_NumberBuffer::GetDigitsPointer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6472984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_NumberBuffer>(), { "GetDigitsPointer", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Burst::BurstString_NumberBuffer::_ctor(::Unity::Burst::BurstString_NumberBufferKind kind, uint8_t* buffer, int32_t digitsCount, int32_t scale, bool isNegative) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_NumberBuffer>(), { ".ctor",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::Unity::Burst::BurstString_NumberBufferKind>(), ::i2c::type_of<uint8_t*>(),
                                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, kind, buffer, digitsCount, scale, isNegative);
}
inline uint8_t* Unity::Burst::BurstString_NumberBuffer::GetDigitsPointer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_NumberBuffer>(), { "GetDigitsPointer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_buffer", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Kind", ty: "::Unity::Burst::BurstString_NumberBufferKind", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "DigitsCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Scale", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "IsNegative", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Burst::BurstString_NumberBuffer::BurstString_NumberBuffer(uint8_t* _buffer, ::Unity::Burst::BurstString_NumberBufferKind Kind, int32_t DigitsCount, int32_t Scale,
                                                                             bool IsNegative) noexcept {
  this->_buffer = _buffer;
  this->Kind = Kind;
  this->DigitsCount = DigitsCount;
  this->Scale = Scale;
  this->IsNegative = IsNegative;
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstString_NumberBuffer::BurstString_NumberBuffer() {}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Burst::BurstString_NumberFormatKind::BurstString_NumberFormatKind(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstString_NumberFormatKind::BurstString_NumberFormatKind() {}
constexpr ::Unity::Burst::BurstString_NumberFormatKind Unity::Burst::BurstString_NumberFormatKind::General{ static_cast<uint8_t>(0x0u) };
constexpr ::Unity::Burst::BurstString_NumberFormatKind Unity::Burst::BurstString_NumberFormatKind::Decimal{ static_cast<uint8_t>(0x1u) };
constexpr ::Unity::Burst::BurstString_NumberFormatKind Unity::Burst::BurstString_NumberFormatKind::DecimalForceSigned{ static_cast<uint8_t>(0x2u) };
constexpr ::Unity::Burst::BurstString_NumberFormatKind Unity::Burst::BurstString_NumberFormatKind::Hexadecimal{ static_cast<uint8_t>(0x3u) };
//  Writing Method size for method: ::Unity::Burst::BurstString_FormatOptions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstString_FormatOptions::*)(::Unity::Burst::BurstString_NumberFormatKind, int8_t, uint8_t, bool)>(
    &::Unity::Burst::BurstString_FormatOptions::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64704f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_FormatOptions>(),
                            { ".ctor", {}, { ::i2c::type_of<::Unity::Burst::BurstString_NumberFormatKind>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString_FormatOptions.get_Uppercase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Burst::BurstString_FormatOptions::*)()>(&::Unity::Burst::BurstString_FormatOptions::get_Uppercase)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x646f810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_FormatOptions>(), { "get_Uppercase", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString_FormatOptions.EncodeToRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Burst::BurstString_FormatOptions::*)()>(&::Unity::Burst::BurstString_FormatOptions::EncodeToRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x647298c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_FormatOptions>(), { "EncodeToRaw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString_FormatOptions.GetBase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Burst::BurstString_FormatOptions::*)()>(&::Unity::Burst::BurstString_FormatOptions::GetBase)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x646f7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_FormatOptions>(), { "GetBase", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString_FormatOptions.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Burst::BurstString_FormatOptions::*)()>(&::Unity::Burst::BurstString_FormatOptions::ToString)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x6472994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_FormatOptions>(), { ::i2c::class_of<::Unity::Burst::BurstString_FormatOptions>(), 3 }));
    return ___internal_method;
  }
};
inline void Unity::Burst::BurstString_FormatOptions::_ctor(::Unity::Burst::BurstString_NumberFormatKind kind, int8_t alignAndSize, uint8_t specifier, bool lowercase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_FormatOptions>(),
                          { ".ctor", {}, { ::i2c::type_of<::Unity::Burst::BurstString_NumberFormatKind>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, kind, alignAndSize, specifier, lowercase);
}
inline bool Unity::Burst::BurstString_FormatOptions::get_Uppercase() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_FormatOptions>(), { "get_Uppercase", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t Unity::Burst::BurstString_FormatOptions::EncodeToRaw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_FormatOptions>(), { "EncodeToRaw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Unity::Burst::BurstString_FormatOptions::GetBase() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_FormatOptions>(), { "GetBase", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Unity::Burst::BurstString_FormatOptions::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Burst::BurstString_FormatOptions>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Kind", ty: "::Unity::Burst::BurstString_NumberFormatKind", modifiers: "", def_value: Some("{}") }, CppParam { name: "AlignAndSize", ty: "int8_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "Specifier", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Lowercase", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Burst::BurstString_FormatOptions::BurstString_FormatOptions(::Unity::Burst::BurstString_NumberFormatKind Kind, int8_t AlignAndSize, uint8_t Specifier, bool Lowercase) noexcept {
  this->Kind = Kind;
  this->AlignAndSize = AlignAndSize;
  this->Specifier = Specifier;
  this->Lowercase = Lowercase;
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstString_FormatOptions::BurstString_FormatOptions() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Burst::tBigInt_BurstString__m_blocks_e__FixedBuffer::tBigInt_BurstString__m_blocks_e__FixedBuffer(uint32_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::Unity::Burst::tBigInt_BurstString__m_blocks_e__FixedBuffer::tBigInt_BurstString__m_blocks_e__FixedBuffer() {}
//  Writing Method size for method: ::Unity::Burst::BurstString_tBigInt.GetLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Burst::BurstString_tBigInt::*)()>(&::Unity::Burst::BurstString_tBigInt::GetLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6472c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_tBigInt>(), { "GetLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString_tBigInt.GetBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Unity::Burst::BurstString_tBigInt::*)(int32_t)>(&::Unity::Burst::BurstString_tBigInt::GetBlock)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6472088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_tBigInt>(), { "GetBlock", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString_tBigInt.SetZero
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstString_tBigInt::*)()>(&::Unity::Burst::BurstString_tBigInt::SetZero)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6472c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_tBigInt>(), { "SetZero", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString_tBigInt.IsZero
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Burst::BurstString_tBigInt::*)()>(&::Unity::Burst::BurstString_tBigInt::IsZero)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6472094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_tBigInt>(), { "IsZero", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString_tBigInt.SetU64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstString_tBigInt::*)(uint64_t)>(&::Unity::Burst::BurstString_tBigInt::SetU64)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6472058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_tBigInt>(), { "SetU64", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString_tBigInt.SetU32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstString_tBigInt::*)(uint32_t)>(&::Unity::Burst::BurstString_tBigInt::SetU32)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6470f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_tBigInt>(), { "SetU32", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString_tBigInt.GetU32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Unity::Burst::BurstString_tBigInt::*)()>(&::Unity::Burst::BurstString_tBigInt::GetU32)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6472c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_tBigInt>(), { "GetU32", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t Unity::Burst::BurstString_tBigInt::GetLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_tBigInt>(), { "GetLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline uint32_t Unity::Burst::BurstString_tBigInt::GetBlock(int32_t idx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_tBigInt>(), { "GetBlock", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, idx);
}
inline void Unity::Burst::BurstString_tBigInt::SetZero() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_tBigInt>(), { "SetZero", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool Unity::Burst::BurstString_tBigInt::IsZero() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_tBigInt>(), { "IsZero", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Unity::Burst::BurstString_tBigInt::SetU64(uint64_t val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_tBigInt>(), { "SetU64", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, val);
}
inline void Unity::Burst::BurstString_tBigInt::SetU32(uint32_t val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_tBigInt>(), { "SetU32", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, val);
}
inline uint32_t Unity::Burst::BurstString_tBigInt::GetU32() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_tBigInt>(), { "GetU32", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_length", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_blocks", ty: "::Unity::Burst::tBigInt_BurstString__m_blocks_e__FixedBuffer",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Burst::BurstString_tBigInt::BurstString_tBigInt(int32_t m_length, ::Unity::Burst::tBigInt_BurstString__m_blocks_e__FixedBuffer m_blocks) noexcept {
  this->m_length = m_length;
  this->m_blocks = m_blocks;
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstString_tBigInt::BurstString_tBigInt() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Burst::BurstString_CutoffMode::BurstString_CutoffMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstString_CutoffMode::BurstString_CutoffMode() {}
constexpr ::Unity::Burst::BurstString_CutoffMode Unity::Burst::BurstString_CutoffMode::Unique{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Burst::BurstString_CutoffMode Unity::Burst::BurstString_CutoffMode::TotalLength{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Burst::BurstString_CutoffMode Unity::Burst::BurstString_CutoffMode::FractionLength{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Burst::BurstString_PrintFloatFormat::BurstString_PrintFloatFormat(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstString_PrintFloatFormat::BurstString_PrintFloatFormat() {}
constexpr ::Unity::Burst::BurstString_PrintFloatFormat Unity::Burst::BurstString_PrintFloatFormat::Positional{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Burst::BurstString_PrintFloatFormat Unity::Burst::BurstString_PrintFloatFormat::Scientific{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::Unity::Burst::BurstString_tFloatUnion32.IsNegative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Burst::BurstString_tFloatUnion32::*)()>(&::Unity::Burst::BurstString_tFloatUnion32::IsNegative)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6472790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_tFloatUnion32>(), { "IsNegative", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString_tFloatUnion32.GetExponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Unity::Burst::BurstString_tFloatUnion32::*)()>(&::Unity::Burst::BurstString_tFloatUnion32::GetExponent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6472778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_tFloatUnion32>(), { "GetExponent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString_tFloatUnion32.GetMantissa
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Unity::Burst::BurstString_tFloatUnion32::*)()>(&::Unity::Burst::BurstString_tFloatUnion32::GetMantissa)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6472784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_tFloatUnion32>(), { "GetMantissa", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& Unity::Burst::BurstString_tFloatUnion32::__cordl_internal_get_m_floatingPoint() {
  return this->___m_floatingPoint;
}
constexpr float_t const& Unity::Burst::BurstString_tFloatUnion32::__cordl_internal_get_m_floatingPoint() const {
  return this->___m_floatingPoint;
}
constexpr void Unity::Burst::BurstString_tFloatUnion32::__cordl_internal_set_m_floatingPoint(float_t value) {
  this->___m_floatingPoint = value;
}
constexpr uint32_t& Unity::Burst::BurstString_tFloatUnion32::__cordl_internal_get_m_integer() {
  return this->___m_integer;
}
constexpr uint32_t const& Unity::Burst::BurstString_tFloatUnion32::__cordl_internal_get_m_integer() const {
  return this->___m_integer;
}
constexpr void Unity::Burst::BurstString_tFloatUnion32::__cordl_internal_set_m_integer(uint32_t value) {
  this->___m_integer = value;
}
inline bool Unity::Burst::BurstString_tFloatUnion32::IsNegative() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_tFloatUnion32>(), { "IsNegative", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline uint32_t Unity::Burst::BurstString_tFloatUnion32::GetExponent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_tFloatUnion32>(), { "GetExponent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline uint32_t Unity::Burst::BurstString_tFloatUnion32::GetMantissa() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_tFloatUnion32>(), { "GetMantissa", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_floatingPoint", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_integer", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Burst::BurstString_tFloatUnion32::BurstString_tFloatUnion32(float_t m_floatingPoint, uint32_t m_integer) noexcept {
  this->m_floatingPoint = m_floatingPoint;
  this->m_integer = m_integer;
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstString_tFloatUnion32::BurstString_tFloatUnion32() {}
//  Writing Method size for method: ::Unity::Burst::BurstString_tFloatUnion64.IsNegative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Burst::BurstString_tFloatUnion64::*)()>(&::Unity::Burst::BurstString_tFloatUnion64::IsNegative)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64727b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_tFloatUnion64>(), { "IsNegative", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString_tFloatUnion64.GetExponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Unity::Burst::BurstString_tFloatUnion64::*)()>(&::Unity::Burst::BurstString_tFloatUnion64::GetExponent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x647279c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_tFloatUnion64>(), { "GetExponent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString_tFloatUnion64.GetMantissa
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Unity::Burst::BurstString_tFloatUnion64::*)()>(&::Unity::Burst::BurstString_tFloatUnion64::GetMantissa)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64727a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_tFloatUnion64>(), { "GetMantissa", {}, {} })));
    return ___internal_method;
  }
};
constexpr double_t& Unity::Burst::BurstString_tFloatUnion64::__cordl_internal_get_m_floatingPoint() {
  return this->___m_floatingPoint;
}
constexpr double_t const& Unity::Burst::BurstString_tFloatUnion64::__cordl_internal_get_m_floatingPoint() const {
  return this->___m_floatingPoint;
}
constexpr void Unity::Burst::BurstString_tFloatUnion64::__cordl_internal_set_m_floatingPoint(double_t value) {
  this->___m_floatingPoint = value;
}
constexpr uint64_t& Unity::Burst::BurstString_tFloatUnion64::__cordl_internal_get_m_integer() {
  return this->___m_integer;
}
constexpr uint64_t const& Unity::Burst::BurstString_tFloatUnion64::__cordl_internal_get_m_integer() const {
  return this->___m_integer;
}
constexpr void Unity::Burst::BurstString_tFloatUnion64::__cordl_internal_set_m_integer(uint64_t value) {
  this->___m_integer = value;
}
inline bool Unity::Burst::BurstString_tFloatUnion64::IsNegative() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_tFloatUnion64>(), { "IsNegative", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline uint32_t Unity::Burst::BurstString_tFloatUnion64::GetExponent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_tFloatUnion64>(), { "GetExponent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline uint64_t Unity::Burst::BurstString_tFloatUnion64::GetMantissa() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString_tFloatUnion64>(), { "GetMantissa", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_floatingPoint", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_integer", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Burst::BurstString_tFloatUnion64::BurstString_tFloatUnion64(double_t m_floatingPoint, uint64_t m_integer) noexcept {
  this->m_floatingPoint = m_floatingPoint;
  this->m_integer = m_integer;
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstString_tFloatUnion64::BurstString_tFloatUnion64() {}
//  Writing Method size for method: ::Unity::Burst::BurstString.CopyFixedString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, int32_t, uint8_t*, int32_t)>(&::Unity::Burst::BurstString::CopyFixedString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x646e2b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                                                { "CopyFixedString", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, uint8_t*, int32_t, int32_t)>(&::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x646e318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "Format",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(),
                                                                                                     ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, float_t, int32_t)>(&::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x646e578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                            { "Format", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, double_t, int32_t)>(&::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x646e898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                            { "Format", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, bool, int32_t)>(&::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x646ebbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                            { "Format", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, char16_t, int32_t)>(&::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x646ed88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                            { "Format", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, uint8_t, int32_t)>(&::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x646ef88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                            { "Format", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, uint16_t, int32_t)>(&::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x646f098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                            { "Format", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, uint32_t, int32_t)>(&::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x646f120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                            { "Format", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, uint64_t, int32_t)>(&::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x646f010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                            { "Format", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, int8_t, int32_t)>(&::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x646f348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                            { "Format", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, int16_t, int32_t)>(&::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x646f5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                            { "Format", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, int32_t, int32_t)>(&::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x646f670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                            { "Format", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, int64_t, int32_t)>(&::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x646f734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                            { "Format", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.ConvertUnsignedIntegerToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, uint64_t, ::Unity::Burst::BurstString_FormatOptions)>(
    &::Unity::Burst::BurstString::ConvertUnsignedIntegerToString)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x646f1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "ConvertUnsignedIntegerToString",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(),
                                                                                                     ::i2c::type_of<uint64_t>(), ::i2c::type_of<::Unity::Burst::BurstString_FormatOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.GetLengthIntegerToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int64_t, int32_t, int32_t)>(&::Unity::Burst::BurstString::GetLengthIntegerToString)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x646fad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "GetLengthIntegerToString", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.ConvertIntegerToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, int64_t, ::Unity::Burst::BurstString_FormatOptions)>(
    &::Unity::Burst::BurstString::ConvertIntegerToString)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x646f40c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "ConvertIntegerToString",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(),
                                                                                                     ::i2c::type_of<int64_t>(), ::i2c::type_of<::Unity::Burst::BurstString_FormatOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.FormatNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, ::by_ref<::Unity::Burst::BurstString_NumberBuffer>, int32_t,
                                                                ::Unity::Burst::BurstString_FormatOptions)>(&::Unity::Burst::BurstString::FormatNumber)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x646f870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "FormatNumber",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(),
                                                                                                     ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_NumberBuffer>>(), ::i2c::type_of<int32_t>(),
                                                                                                     ::i2c::type_of<::Unity::Burst::BurstString_FormatOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.FormatDecimalOrHexadecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, ::by_ref<::Unity::Burst::BurstString_NumberBuffer>, int32_t, bool)>(
    &::Unity::Burst::BurstString::FormatDecimalOrHexadecimal)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x646fafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                                                             { "FormatDecimalOrHexadecimal",
                                                               {},
                                                               { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_NumberBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.ValueToIntegerChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(int32_t, bool)>(&::Unity::Burst::BurstString::ValueToIntegerChar)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x646f820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "ValueToIntegerChar", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.OptsSplit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<::StringW>, ::by_ref<::StringW>)>(&::Unity::Burst::BurstString::OptsSplit)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6470038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                                                             { "OptsSplit", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.ParseFormatToFormatOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Burst::BurstString_FormatOptions (*)(::StringW)>(&::Unity::Burst::BurstString::ParseFormatToFormatOptions)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x64701a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "ParseFormatToFormatOptions", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.AlignRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t*, ::by_ref<int32_t>, int32_t, int32_t, int32_t)>(&::Unity::Burst::BurstString::AlignRight)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x646e4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Unity::Burst::BurstString*>(),
                         { "AlignRight", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.AlignLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t*, ::by_ref<int32_t>, int32_t, int32_t, int32_t)>(&::Unity::Burst::BurstString::AlignLeft)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x646e46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Unity::Burst::BurstString*>(),
                         { "AlignLeft", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.GetLengthForFormatGeneral
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::Unity::Burst::BurstString_NumberBuffer>, int32_t)>(&::Unity::Burst::BurstString::GetLengthForFormatGeneral)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x646fcd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                                                { "GetLengthForFormatGeneral", {}, { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_NumberBuffer>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.FormatGeneral
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, ::by_ref<::Unity::Burst::BurstString_NumberBuffer>, int32_t, uint8_t)>(
    &::Unity::Burst::BurstString::FormatGeneral)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x646fe38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                                                             { "FormatGeneral",
                                                               {},
                                                               { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_NumberBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.RoundNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Burst::BurstString_NumberBuffer>, int32_t, bool)>(&::Unity::Burst::BurstString::RoundNumber)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x646fb9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                                                { "RoundNumber", {}, { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_NumberBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.ShouldRoundUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t*, int32_t, bool)>(&::Unity::Burst::BurstString::ShouldRoundUp)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6470508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "ShouldRoundUp", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.LogBase2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::Unity::Burst::BurstString::LogBase2)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6470524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "LogBase2", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::Unity::Burst::BurstString_tBigInt>, ::by_ref<::Unity::Burst::BurstString_tBigInt>)>(
    &::Unity::Burst::BurstString::BigInt_Compare)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6470674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                            { "BigInt_Compare", {}, { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Burst::BurstString_tBigInt>, ::by_ref<::Unity::Burst::BurstString_tBigInt>,
                                                                ::by_ref<::Unity::Burst::BurstString_tBigInt>)>(&::Unity::Burst::BurstString::BigInt_Add)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x64706d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                                                             { "BigInt_Add",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Add_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Burst::BurstString_tBigInt>, ::by_ref<::Unity::Burst::BurstString_tBigInt>,
                                                                ::by_ref<::Unity::Burst::BurstString_tBigInt>)>(&::Unity::Burst::BurstString::BigInt_Add_internal)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6470768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                                                             { "BigInt_Add_internal",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Burst::BurstString_tBigInt>, ::by_ref<::Unity::Burst::BurstString_tBigInt>,
                                                                ::by_ref<::Unity::Burst::BurstString_tBigInt>)>(&::Unity::Burst::BurstString::BigInt_Multiply)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6470808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                                                             { "BigInt_Multiply",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Multiply_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Burst::BurstString_tBigInt>, ::by_ref<::Unity::Burst::BurstString_tBigInt>,
                                                                ::by_ref<::Unity::Burst::BurstString_tBigInt>)>(&::Unity::Burst::BurstString::BigInt_Multiply_internal)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x64708a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                                                             { "BigInt_Multiply_internal",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Burst::BurstString_tBigInt>, ::by_ref<::Unity::Burst::BurstString_tBigInt>, uint32_t)>(
    &::Unity::Burst::BurstString::BigInt_Multiply)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x64709d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "BigInt_Multiply",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(),
                                                                                                     ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Multiply2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Burst::BurstString_tBigInt>, ::by_ref<::Unity::Burst::BurstString_tBigInt>)>(
    &::Unity::Burst::BurstString::BigInt_Multiply2)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6470a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                            { "BigInt_Multiply2", {}, { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Multiply2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Burst::BurstString_tBigInt>)>(&::Unity::Burst::BurstString::BigInt_Multiply2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6470a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "BigInt_Multiply2", {}, { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Multiply10
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Burst::BurstString_tBigInt>)>(&::Unity::Burst::BurstString::BigInt_Multiply10)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6470ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "BigInt_Multiply10", {}, { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.g_PowerOf10_Big
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Burst::BurstString_tBigInt (*)(int32_t)>(&::Unity::Burst::BurstString::g_PowerOf10_Big)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x6470b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "g_PowerOf10_Big", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Pow10
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Burst::BurstString_tBigInt>, uint32_t)>(&::Unity::Burst::BurstString::BigInt_Pow10)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6470d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "BigInt_Pow10", {}, { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_MultiplyPow10
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Burst::BurstString_tBigInt>, ::by_ref<::Unity::Burst::BurstString_tBigInt>, uint32_t)>(
    &::Unity::Burst::BurstString::BigInt_MultiplyPow10)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6470f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "BigInt_MultiplyPow10",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(),
                                                                                                     ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Pow2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Burst::BurstString_tBigInt>, uint32_t)>(&::Unity::Burst::BurstString::BigInt_Pow2)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6471100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "BigInt_Pow2", {}, { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_DivideWithRemainder_MaxQuotient9
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::by_ref<::Unity::Burst::BurstString_tBigInt>, ::by_ref<::Unity::Burst::BurstString_tBigInt>)>(
    &::Unity::Burst::BurstString::BigInt_DivideWithRemainder_MaxQuotient9)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x64711d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Burst::BurstString*>(),
            { "BigInt_DivideWithRemainder_MaxQuotient9", {}, { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_ShiftLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Burst::BurstString_tBigInt>, uint32_t)>(&::Unity::Burst::BurstString::BigInt_ShiftLeft)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x6471338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                                                             { "BigInt_ShiftLeft", {}, { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Dragon4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint64_t, int32_t, uint32_t, bool, ::Unity::Burst::BurstString_CutoffMode, uint32_t, uint8_t*, uint32_t, ::by_ref<int32_t>)>(
    &::Unity::Burst::BurstString::Dragon4)> {
  constexpr static std::size_t size = 0xb04;
  constexpr static std::size_t addrs = 0x6471554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "Dragon4",
                                                                                            {},
                                                                                            { ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(),
                                                                                              ::i2c::type_of<::Unity::Burst::BurstString_CutoffMode>(), ::i2c::type_of<uint32_t>(),
                                                                                              ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.FormatPositional
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*, uint32_t, uint64_t, int32_t, uint32_t, bool, int32_t)>(&::Unity::Burst::BurstString::FormatPositional)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x64720a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "FormatPositional",
                                                                               {},
                                                                               { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(),
                                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.FormatScientific
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*, uint32_t, uint64_t, int32_t, uint32_t, bool, int32_t)>(&::Unity::Burst::BurstString::FormatScientific)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x647230c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "FormatScientific",
                                                                               {},
                                                                               { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(),
                                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.FormatInfinityNaN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, uint64_t, bool, ::Unity::Burst::BurstString_FormatOptions)>(
    &::Unity::Burst::BurstString::FormatInfinityNaN)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x6472584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "FormatInfinityNaN",
                                                                               {},
                                                                               { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>(),
                                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Burst::BurstString_FormatOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.ConvertFloatToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, float_t, ::Unity::Burst::BurstString_FormatOptions)>(
    &::Unity::Burst::BurstString::ConvertFloatToString)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x646e608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "ConvertFloatToString",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(),
                                                                                                     ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Burst::BurstString_FormatOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.ConvertDoubleToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, double_t, ::Unity::Burst::BurstString_FormatOptions)>(
    &::Unity::Burst::BurstString::ConvertDoubleToString)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x646e928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "ConvertDoubleToString",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(),
                                                                                                     ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Burst::BurstString_FormatOptions>() } })));
    return ___internal_method;
  }
};
inline void Unity::Burst::BurstString::setStaticF_SplitByColon(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "SplitByColon", ::Unity::Burst::BurstString*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> Unity::Burst::BurstString::getStaticF_SplitByColon() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "SplitByColon", ::Unity::Burst::BurstString*>();
}
inline void Unity::Burst::BurstString::setStaticF_logTable(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "logTable", ::Unity::Burst::BurstString*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Unity::Burst::BurstString::getStaticF_logTable() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "logTable", ::Unity::Burst::BurstString*>();
}
inline void Unity::Burst::BurstString::setStaticF_g_PowerOf10_U32(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "g_PowerOf10_U32", ::Unity::Burst::BurstString*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Unity::Burst::BurstString::getStaticF_g_PowerOf10_U32() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "g_PowerOf10_U32", ::Unity::Burst::BurstString*>();
}
inline void Unity::Burst::BurstString::setStaticF_InfinityString(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "InfinityString", ::Unity::Burst::BurstString*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Unity::Burst::BurstString::getStaticF_InfinityString() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "InfinityString", ::Unity::Burst::BurstString*>();
}
inline void Unity::Burst::BurstString::setStaticF_NanString(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "NanString", ::Unity::Burst::BurstString*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Unity::Burst::BurstString::getStaticF_NanString() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "NanString", ::Unity::Burst::BurstString*>();
}
inline void Unity::Burst::BurstString::CopyFixedString(uint8_t* dest, int32_t destLength, uint8_t* src, int32_t srcLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                                              { "CopyFixedString", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destLength, src, srcLength);
}
inline void Unity::Burst::BurstString::Format(uint8_t* dest, ::by_ref<int32_t> destIndex, int32_t destLength, uint8_t* src, int32_t srcLength, int32_t formatOptionsRaw) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "Format",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(),
                                                                                                   ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, src, srcLength, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(uint8_t* dest, ::by_ref<int32_t> destIndex, int32_t destLength, float_t value, int32_t formatOptionsRaw) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                          { "Format", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(uint8_t* dest, ::by_ref<int32_t> destIndex, int32_t destLength, double_t value, int32_t formatOptionsRaw) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                          { "Format", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(uint8_t* dest, ::by_ref<int32_t> destIndex, int32_t destLength, bool value, int32_t formatOptionsRaw) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                          { "Format", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(uint8_t* dest, ::by_ref<int32_t> destIndex, int32_t destLength, char16_t value, int32_t formatOptionsRaw) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                          { "Format", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(uint8_t* dest, ::by_ref<int32_t> destIndex, int32_t destLength, uint8_t value, int32_t formatOptionsRaw) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                          { "Format", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(uint8_t* dest, ::by_ref<int32_t> destIndex, int32_t destLength, uint16_t value, int32_t formatOptionsRaw) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                          { "Format", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(uint8_t* dest, ::by_ref<int32_t> destIndex, int32_t destLength, uint32_t value, int32_t formatOptionsRaw) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                          { "Format", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(uint8_t* dest, ::by_ref<int32_t> destIndex, int32_t destLength, uint64_t value, int32_t formatOptionsRaw) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                          { "Format", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(uint8_t* dest, ::by_ref<int32_t> destIndex, int32_t destLength, int8_t value, int32_t formatOptionsRaw) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                          { "Format", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(uint8_t* dest, ::by_ref<int32_t> destIndex, int32_t destLength, int16_t value, int32_t formatOptionsRaw) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                          { "Format", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(uint8_t* dest, ::by_ref<int32_t> destIndex, int32_t destLength, int32_t value, int32_t formatOptionsRaw) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                          { "Format", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(uint8_t* dest, ::by_ref<int32_t> destIndex, int32_t destLength, int64_t value, int32_t formatOptionsRaw) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                          { "Format", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::ConvertUnsignedIntegerToString(uint8_t* dest, ::by_ref<int32_t> destIndex, int32_t destLength, uint64_t value,
                                                                      ::Unity::Burst::BurstString_FormatOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "ConvertUnsignedIntegerToString",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(),
                                                                                                   ::i2c::type_of<uint64_t>(), ::i2c::type_of<::Unity::Burst::BurstString_FormatOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, options);
}
inline int32_t Unity::Burst::BurstString::GetLengthIntegerToString(int64_t value, int32_t basis, int32_t zeroPadding) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "GetLengthIntegerToString", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, basis, zeroPadding);
}
inline void Unity::Burst::BurstString::ConvertIntegerToString(uint8_t* dest, ::by_ref<int32_t> destIndex, int32_t destLength, int64_t value, ::Unity::Burst::BurstString_FormatOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "ConvertIntegerToString",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(),
                                                                                                   ::i2c::type_of<int64_t>(), ::i2c::type_of<::Unity::Burst::BurstString_FormatOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, options);
}
inline void Unity::Burst::BurstString::FormatNumber(uint8_t* dest, ::by_ref<int32_t> destIndex, int32_t destLength, ::by_ref<::Unity::Burst::BurstString_NumberBuffer> number, int32_t nMaxDigits,
                                                    ::Unity::Burst::BurstString_FormatOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "FormatNumber",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(),
                                                                                                   ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_NumberBuffer>>(), ::i2c::type_of<int32_t>(),
                                                                                                   ::i2c::type_of<::Unity::Burst::BurstString_FormatOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, number, nMaxDigits, options);
}
inline void Unity::Burst::BurstString::FormatDecimalOrHexadecimal(uint8_t* dest, ::by_ref<int32_t> destIndex, int32_t destLength, ::by_ref<::Unity::Burst::BurstString_NumberBuffer> number,
                                                                  int32_t zeroPadding, bool outputPositiveSign) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                                                           { "FormatDecimalOrHexadecimal",
                                                             {},
                                                             { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_NumberBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, number, zeroPadding, outputPositiveSign);
}
inline uint8_t Unity::Burst::BurstString::ValueToIntegerChar(int32_t value, bool uppercase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "ValueToIntegerChar", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value, uppercase);
}
inline void Unity::Burst::BurstString::OptsSplit(::StringW fullFormat, ::by_ref<::StringW> padding, ::by_ref<::StringW> format) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                                                           { "OptsSplit", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fullFormat, padding, format);
}
inline ::Unity::Burst::BurstString_FormatOptions Unity::Burst::BurstString::ParseFormatToFormatOptions(::StringW fullFormat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "ParseFormatToFormatOptions", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Burst::BurstString_FormatOptions>(nullptr, ___internal_method, fullFormat);
}
inline bool Unity::Burst::BurstString::AlignRight(uint8_t* dest, ::by_ref<int32_t> destIndex, int32_t destLength, int32_t align, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                          { "AlignRight", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dest, destIndex, destLength, align, length);
}
inline bool Unity::Burst::BurstString::AlignLeft(uint8_t* dest, ::by_ref<int32_t> destIndex, int32_t destLength, int32_t align, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                          { "AlignLeft", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dest, destIndex, destLength, align, length);
}
inline int32_t Unity::Burst::BurstString::GetLengthForFormatGeneral(::by_ref<::Unity::Burst::BurstString_NumberBuffer> number, int32_t nMaxDigits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                                                           { "GetLengthForFormatGeneral", {}, { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_NumberBuffer>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, number, nMaxDigits);
}
inline void Unity::Burst::BurstString::FormatGeneral(uint8_t* dest, ::by_ref<int32_t> destIndex, int32_t destLength, ::by_ref<::Unity::Burst::BurstString_NumberBuffer> number, int32_t nMaxDigits,
                                                     uint8_t expChar) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                                                           { "FormatGeneral",
                                                             {},
                                                             { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_NumberBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, number, nMaxDigits, expChar);
}
inline void Unity::Burst::BurstString::RoundNumber(::by_ref<::Unity::Burst::BurstString_NumberBuffer> number, int32_t pos, bool isCorrectlyRounded) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                                              { "RoundNumber", {}, { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_NumberBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, number, pos, isCorrectlyRounded);
}
inline bool Unity::Burst::BurstString::ShouldRoundUp(uint8_t* dig, int32_t i, bool isCorrectlyRounded) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "ShouldRoundUp", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dig, i, isCorrectlyRounded);
}
inline uint32_t Unity::Burst::BurstString::LogBase2(uint32_t val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "LogBase2", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, val);
}
inline int32_t Unity::Burst::BurstString::BigInt_Compare(::by_ref<::Unity::Burst::BurstString_tBigInt> lhs, ::by_ref<::Unity::Burst::BurstString_tBigInt> rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                          { "BigInt_Compare", {}, { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, lhs, rhs);
}
inline void Unity::Burst::BurstString::BigInt_Add(::by_ref<::Unity::Burst::BurstString_tBigInt> pResult, ::by_ref<::Unity::Burst::BurstString_tBigInt> lhs,
                                                  ::by_ref<::Unity::Burst::BurstString_tBigInt> rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                                                           { "BigInt_Add",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pResult, lhs, rhs);
}
inline void Unity::Burst::BurstString::BigInt_Add_internal(::by_ref<::Unity::Burst::BurstString_tBigInt> pResult, ::by_ref<::Unity::Burst::BurstString_tBigInt> pLarge,
                                                           ::by_ref<::Unity::Burst::BurstString_tBigInt> pSmall) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                                                           { "BigInt_Add_internal",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pResult, pLarge, pSmall);
}
inline void Unity::Burst::BurstString::BigInt_Multiply(::by_ref<::Unity::Burst::BurstString_tBigInt> pResult, ::by_ref<::Unity::Burst::BurstString_tBigInt> lhs,
                                                       ::by_ref<::Unity::Burst::BurstString_tBigInt> rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                                                           { "BigInt_Multiply",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pResult, lhs, rhs);
}
inline void Unity::Burst::BurstString::BigInt_Multiply_internal(::by_ref<::Unity::Burst::BurstString_tBigInt> pResult, ::by_ref<::Unity::Burst::BurstString_tBigInt> pLarge,
                                                                ::by_ref<::Unity::Burst::BurstString_tBigInt> pSmall) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                                                           { "BigInt_Multiply_internal",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pResult, pLarge, pSmall);
}
inline void Unity::Burst::BurstString::BigInt_Multiply(::by_ref<::Unity::Burst::BurstString_tBigInt> pResult, ::by_ref<::Unity::Burst::BurstString_tBigInt> lhs, uint32_t rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "BigInt_Multiply",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(),
                                                                                                   ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pResult, lhs, rhs);
}
inline void Unity::Burst::BurstString::BigInt_Multiply2(::by_ref<::Unity::Burst::BurstString_tBigInt> pResult, ::by_ref<::Unity::Burst::BurstString_tBigInt> input) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                          { "BigInt_Multiply2", {}, { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pResult, input);
}
inline void Unity::Burst::BurstString::BigInt_Multiply2(::by_ref<::Unity::Burst::BurstString_tBigInt> pResult) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "BigInt_Multiply2", {}, { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pResult);
}
inline void Unity::Burst::BurstString::BigInt_Multiply10(::by_ref<::Unity::Burst::BurstString_tBigInt> pResult) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "BigInt_Multiply10", {}, { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pResult);
}
inline ::Unity::Burst::BurstString_tBigInt Unity::Burst::BurstString::g_PowerOf10_Big(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "g_PowerOf10_Big", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Burst::BurstString_tBigInt>(nullptr, ___internal_method, i);
}
inline void Unity::Burst::BurstString::BigInt_Pow10(::by_ref<::Unity::Burst::BurstString_tBigInt> pResult, uint32_t exponent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "BigInt_Pow10", {}, { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pResult, exponent);
}
inline void Unity::Burst::BurstString::BigInt_MultiplyPow10(::by_ref<::Unity::Burst::BurstString_tBigInt> pResult, ::by_ref<::Unity::Burst::BurstString_tBigInt> input, uint32_t exponent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "BigInt_MultiplyPow10",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(),
                                                                                                   ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pResult, input, exponent);
}
inline void Unity::Burst::BurstString::BigInt_Pow2(::by_ref<::Unity::Burst::BurstString_tBigInt> pResult, uint32_t exponent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "BigInt_Pow2", {}, { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pResult, exponent);
}
inline uint32_t Unity::Burst::BurstString::BigInt_DivideWithRemainder_MaxQuotient9(::by_ref<::Unity::Burst::BurstString_tBigInt> pDividend, ::by_ref<::Unity::Burst::BurstString_tBigInt> divisor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Burst::BurstString*>(),
          { "BigInt_DivideWithRemainder_MaxQuotient9", {}, { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, pDividend, divisor);
}
inline void Unity::Burst::BurstString::BigInt_ShiftLeft(::by_ref<::Unity::Burst::BurstString_tBigInt> pResult, uint32_t shift) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(),
                                                           { "BigInt_ShiftLeft", {}, { ::i2c::type_of<::by_ref<::Unity::Burst::BurstString_tBigInt>>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pResult, shift);
}
inline uint32_t Unity::Burst::BurstString::Dragon4(uint64_t mantissa, int32_t exponent, uint32_t mantissaHighBitIdx, bool hasUnequalMargins, ::Unity::Burst::BurstString_CutoffMode cutoffMode,
                                                   uint32_t cutoffNumber, uint8_t* pOutBuffer, uint32_t bufferSize, ::by_ref<int32_t> pOutExponent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "Dragon4",
                                                                                          {},
                                                                                          { ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(),
                                                                                            ::i2c::type_of<::Unity::Burst::BurstString_CutoffMode>(), ::i2c::type_of<uint32_t>(),
                                                                                            ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, mantissa, exponent, mantissaHighBitIdx, hasUnequalMargins, cutoffMode, cutoffNumber, pOutBuffer, bufferSize,
                                                       pOutExponent);
}
inline int32_t Unity::Burst::BurstString::FormatPositional(uint8_t* pOutBuffer, uint32_t bufferSize, uint64_t mantissa, int32_t exponent, uint32_t mantissaHighBitIdx, bool hasUnequalMargins,
                                                           int32_t precision) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "FormatPositional",
                                                                             {},
                                                                             { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(),
                                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pOutBuffer, bufferSize, mantissa, exponent, mantissaHighBitIdx, hasUnequalMargins, precision);
}
inline int32_t Unity::Burst::BurstString::FormatScientific(uint8_t* pOutBuffer, uint32_t bufferSize, uint64_t mantissa, int32_t exponent, uint32_t mantissaHighBitIdx, bool hasUnequalMargins,
                                                           int32_t precision) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "FormatScientific",
                                                                             {},
                                                                             { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(),
                                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pOutBuffer, bufferSize, mantissa, exponent, mantissaHighBitIdx, hasUnequalMargins, precision);
}
inline void Unity::Burst::BurstString::FormatInfinityNaN(uint8_t* dest, ::by_ref<int32_t> destIndex, int32_t destLength, uint64_t mantissa, bool isNegative,
                                                         ::Unity::Burst::BurstString_FormatOptions formatOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "FormatInfinityNaN",
                                                                             {},
                                                                             { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>(),
                                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Burst::BurstString_FormatOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, mantissa, isNegative, formatOptions);
}
inline void Unity::Burst::BurstString::ConvertFloatToString(uint8_t* dest, ::by_ref<int32_t> destIndex, int32_t destLength, float_t value, ::Unity::Burst::BurstString_FormatOptions formatOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "ConvertFloatToString",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(),
                                                                                                   ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Burst::BurstString_FormatOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptions);
}
inline void Unity::Burst::BurstString::ConvertDoubleToString(uint8_t* dest, ::by_ref<int32_t> destIndex, int32_t destLength, double_t value, ::Unity::Burst::BurstString_FormatOptions formatOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstString*>(), { "ConvertDoubleToString",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(),
                                                                                                   ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Burst::BurstString_FormatOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptions);
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstString::BurstString() {}
