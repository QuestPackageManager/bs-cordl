#pragma once
// IWYU pragma private; include "System/Text/BinHexEncoding.hpp"
#include "System/Text/zzzz__Encoding_impl.hpp"
#include "System/Text/zzzz__BinHexEncoding_def.hpp"
//  Writing Method size for method: ::System::Text::BinHexEncoding.GetMaxByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::BinHexEncoding::*)(int32_t)>(&::System::Text::BinHexEncoding::GetMaxByteCount)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x612cf88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::BinHexEncoding*>(), { ::i2c::class_of<::System::Text::BinHexEncoding*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::BinHexEncoding.GetByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::BinHexEncoding::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Text::BinHexEncoding::GetByteCount)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x612d0a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::BinHexEncoding*>(), { ::i2c::class_of<::System::Text::BinHexEncoding*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::BinHexEncoding.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::BinHexEncoding::*)(::ArrayW<char16_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::System::Text::BinHexEncoding::GetBytes)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x612d0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::BinHexEncoding*>(), { ::i2c::class_of<::System::Text::BinHexEncoding*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::BinHexEncoding.GetMaxCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::BinHexEncoding::*)(int32_t)>(&::System::Text::BinHexEncoding::GetMaxCharCount)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x612d604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::BinHexEncoding*>(), { ::i2c::class_of<::System::Text::BinHexEncoding*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::BinHexEncoding.GetCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::BinHexEncoding::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Text::BinHexEncoding::GetCharCount)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x612d710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::BinHexEncoding*>(), { ::i2c::class_of<::System::Text::BinHexEncoding*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::BinHexEncoding.GetChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::BinHexEncoding::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t)>(
    &::System::Text::BinHexEncoding::GetChars)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x612d724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::BinHexEncoding*>(), { ::i2c::class_of<::System::Text::BinHexEncoding*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::BinHexEncoding._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::BinHexEncoding::*)()>(&::System::Text::BinHexEncoding::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x612db7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::BinHexEncoding*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Text::BinHexEncoding::setStaticF_char2val(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "char2val", ::System::Text::BinHexEncoding*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Text::BinHexEncoding::getStaticF_char2val() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "char2val", ::System::Text::BinHexEncoding*>();
}
inline void System::Text::BinHexEncoding::setStaticF_val2char(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "val2char", ::System::Text::BinHexEncoding*>(std::forward<::StringW>(value));
}
inline ::StringW System::Text::BinHexEncoding::getStaticF_val2char() {
  return ::cordl_internals::getStaticField<::StringW, "val2char", ::System::Text::BinHexEncoding*>();
}
inline int32_t System::Text::BinHexEncoding::GetMaxByteCount(int32_t charCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::BinHexEncoding*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, charCount);
}
inline int32_t System::Text::BinHexEncoding::GetByteCount(::ArrayW<char16_t> chars, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::BinHexEncoding*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, index, count);
}
inline int32_t System::Text::BinHexEncoding::GetBytes(::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::BinHexEncoding*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, charIndex, charCount, bytes, byteIndex);
}
inline int32_t System::Text::BinHexEncoding::GetMaxCharCount(int32_t byteCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::BinHexEncoding*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, byteCount);
}
inline int32_t System::Text::BinHexEncoding::GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::BinHexEncoding*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, index, count);
}
inline int32_t System::Text::BinHexEncoding::GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::BinHexEncoding*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, byteIndex, byteCount, chars, charIndex);
}
inline void System::Text::BinHexEncoding::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::BinHexEncoding*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::BinHexEncoding* System::Text::BinHexEncoding::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::BinHexEncoding*>());
}
// Ctor Parameters []
constexpr ::System::Text::BinHexEncoding::BinHexEncoding() {}
