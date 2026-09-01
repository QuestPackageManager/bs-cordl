#pragma once
// IWYU pragma private; include "System\Text\EncodingNLS.hpp"
#include "System/Text/zzzz__Encoding_impl.hpp"
#include "System/Text/zzzz__EncodingNLS_def.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/Text/zzzz__Encoder_def.hpp"
//  Writing Method size for method: ::System::Text::EncodingNLS._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::EncodingNLS::*)(int32_t)>(&::System::Text::EncodingNLS::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ad591c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncodingNLS*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingNLS.GetByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::EncodingNLS::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Text::EncodingNLS::GetByteCount)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5ad5924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncodingNLS*>(), { ::i2c::class_of<::System::Text::EncodingNLS*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingNLS.GetByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::EncodingNLS::*)(::StringW)>(&::System::Text::EncodingNLS::GetByteCount)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ad5aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncodingNLS*>(), { ::i2c::class_of<::System::Text::EncodingNLS*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingNLS.GetByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::EncodingNLS::*)(char16_t*, int32_t)>(&::System::Text::EncodingNLS::GetByteCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5ad5b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncodingNLS*>(), { ::i2c::class_of<::System::Text::EncodingNLS*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingNLS.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::EncodingNLS::*)(::StringW, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&::System::Text::EncodingNLS::GetBytes)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5ad5be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncodingNLS*>(), { ::i2c::class_of<::System::Text::EncodingNLS*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingNLS.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::EncodingNLS::*)(::ArrayW<char16_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::System::Text::EncodingNLS::GetBytes)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5ad5e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncodingNLS*>(), { ::i2c::class_of<::System::Text::EncodingNLS*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingNLS.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::EncodingNLS::*)(char16_t*, int32_t, uint8_t*, int32_t)>(&::System::Text::EncodingNLS::GetBytes)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5ad60b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncodingNLS*>(), { ::i2c::class_of<::System::Text::EncodingNLS*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingNLS.GetCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::EncodingNLS::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Text::EncodingNLS::GetCharCount)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5ad61a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncodingNLS*>(), { ::i2c::class_of<::System::Text::EncodingNLS*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingNLS.GetCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::EncodingNLS::*)(uint8_t*, int32_t)>(&::System::Text::EncodingNLS::GetCharCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5ad6330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncodingNLS*>(), { ::i2c::class_of<::System::Text::EncodingNLS*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingNLS.GetChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::EncodingNLS::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t)>(
    &::System::Text::EncodingNLS::GetChars)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5ad6400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncodingNLS*>(), { ::i2c::class_of<::System::Text::EncodingNLS*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingNLS.GetChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::EncodingNLS::*)(uint8_t*, int32_t, char16_t*, int32_t)>(&::System::Text::EncodingNLS::GetChars)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5ad6684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncodingNLS*>(), { ::i2c::class_of<::System::Text::EncodingNLS*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingNLS.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Text::EncodingNLS::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Text::EncodingNLS::GetString)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5ad677c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncodingNLS*>(), { ::i2c::class_of<::System::Text::EncodingNLS*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingNLS.GetDecoder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Decoder* (::System::Text::EncodingNLS::*)()>(&::System::Text::EncodingNLS::GetDecoder)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ad690c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncodingNLS*>(), { ::i2c::class_of<::System::Text::EncodingNLS*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingNLS.GetEncoder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoder* (::System::Text::EncodingNLS::*)()>(&::System::Text::EncodingNLS::GetEncoder)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ad6980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncodingNLS*>(), { ::i2c::class_of<::System::Text::EncodingNLS*>(), 32 }));
    return ___internal_method;
  }
};
inline void System::Text::EncodingNLS::_ctor(int32_t codePage) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncodingNLS*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, codePage);
}
inline int32_t System::Text::EncodingNLS::GetByteCount(::ArrayW<char16_t> chars, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncodingNLS*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, index, count);
}
inline int32_t System::Text::EncodingNLS::GetByteCount(::StringW s) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncodingNLS*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s);
}
inline int32_t System::Text::EncodingNLS::GetByteCount(char16_t* chars, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncodingNLS*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, count);
}
inline int32_t System::Text::EncodingNLS::GetBytes(::StringW s, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncodingNLS*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s, charIndex, charCount, bytes, byteIndex);
}
inline int32_t System::Text::EncodingNLS::GetBytes(::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncodingNLS*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, charIndex, charCount, bytes, byteIndex);
}
inline int32_t System::Text::EncodingNLS::GetBytes(char16_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncodingNLS*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, charCount, bytes, byteCount);
}
inline int32_t System::Text::EncodingNLS::GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncodingNLS*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, index, count);
}
inline int32_t System::Text::EncodingNLS::GetCharCount(uint8_t* bytes, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncodingNLS*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, count);
}
inline int32_t System::Text::EncodingNLS::GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncodingNLS*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, byteIndex, byteCount, chars, charIndex);
}
inline int32_t System::Text::EncodingNLS::GetChars(uint8_t* bytes, int32_t byteCount, char16_t* chars, int32_t charCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncodingNLS*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, byteCount, chars, charCount);
}
inline ::StringW System::Text::EncodingNLS::GetString(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncodingNLS*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, bytes, index, count);
}
inline ::System::Text::Decoder* System::Text::EncodingNLS::GetDecoder() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncodingNLS*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Decoder*>(this, ___internal_method);
}
inline ::System::Text::Encoder* System::Text::EncodingNLS::GetEncoder() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncodingNLS*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoder*>(this, ___internal_method);
}
inline ::System::Text::EncodingNLS* System::Text::EncodingNLS::New_ctor(int32_t codePage) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::EncodingNLS*>(codePage));
}
// Ctor Parameters []
constexpr ::System::Text::EncodingNLS::EncodingNLS() {}
