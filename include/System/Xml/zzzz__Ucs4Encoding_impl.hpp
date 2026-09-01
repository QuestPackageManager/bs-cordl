#pragma once
// IWYU pragma private; include "System\Xml\Ucs4Encoding.hpp"
#include "System/Text/zzzz__Encoding_impl.hpp"
#include "System/Xml/zzzz__Ucs4Encoding_def.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/Text/zzzz__Encoder_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Xml/zzzz__Ucs4Decoder_def.hpp"
//  Writing Method size for method: ::System::Xml::Ucs4Encoding.get_WebName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Ucs4Encoding::*)()>(&::System::Xml::Ucs4Encoding::get_WebName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62e3478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Encoding*>(), { ::i2c::class_of<::System::Xml::Ucs4Encoding*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Ucs4Encoding.GetDecoder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Decoder* (::System::Xml::Ucs4Encoding::*)()>(&::System::Xml::Ucs4Encoding::GetDecoder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62e3484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Encoding*>(), { ::i2c::class_of<::System::Xml::Ucs4Encoding*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Ucs4Encoding.GetByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Ucs4Encoding::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::Ucs4Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x62e348c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Encoding*>(), { ::i2c::class_of<::System::Xml::Ucs4Encoding*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Ucs4Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Xml::Ucs4Encoding::*)(::StringW)>(&::System::Xml::Ucs4Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62e34f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Encoding*>(), { ::i2c::class_of<::System::Xml::Ucs4Encoding*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Ucs4Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Ucs4Encoding::*)(::ArrayW<char16_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::System::Xml::Ucs4Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62e34fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Encoding*>(), { ::i2c::class_of<::System::Xml::Ucs4Encoding*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Ucs4Encoding.GetMaxByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Ucs4Encoding::*)(int32_t)>(&::System::Xml::Ucs4Encoding::GetMaxByteCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62e3504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Encoding*>(), { ::i2c::class_of<::System::Xml::Ucs4Encoding*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Ucs4Encoding.GetCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Ucs4Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::Ucs4Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x62e350c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Encoding*>(), { ::i2c::class_of<::System::Xml::Ucs4Encoding*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Ucs4Encoding.GetChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Ucs4Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t)>(
    &::System::Xml::Ucs4Encoding::GetChars)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x62e3528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Encoding*>(), { ::i2c::class_of<::System::Xml::Ucs4Encoding*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Ucs4Encoding.GetMaxCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Ucs4Encoding::*)(int32_t)>(&::System::Xml::Ucs4Encoding::GetMaxCharCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x62e3544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Encoding*>(), { ::i2c::class_of<::System::Xml::Ucs4Encoding*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Ucs4Encoding.get_CodePage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Ucs4Encoding::*)()>(&::System::Xml::Ucs4Encoding::get_CodePage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62e355c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Encoding*>(), { ::i2c::class_of<::System::Xml::Ucs4Encoding*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Ucs4Encoding.GetEncoder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoder* (::System::Xml::Ucs4Encoding::*)()>(&::System::Xml::Ucs4Encoding::GetEncoder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62e3564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Encoding*>(), { ::i2c::class_of<::System::Xml::Ucs4Encoding*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Ucs4Encoding.get_UCS4_Littleendian
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (*)()>(&::System::Xml::Ucs4Encoding::get_UCS4_Littleendian)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x62e356c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Encoding*>(), { "get_UCS4_Littleendian", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Ucs4Encoding.get_UCS4_Bigendian
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (*)()>(&::System::Xml::Ucs4Encoding::get_UCS4_Bigendian)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x62e3634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Encoding*>(), { "get_UCS4_Bigendian", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Ucs4Encoding.get_UCS4_2143
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (*)()>(&::System::Xml::Ucs4Encoding::get_UCS4_2143)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x62e36fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Encoding*>(), { "get_UCS4_2143", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Ucs4Encoding.get_UCS4_3412
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (*)()>(&::System::Xml::Ucs4Encoding::get_UCS4_3412)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x62e37c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Encoding*>(), { "get_UCS4_3412", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Ucs4Encoding._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Ucs4Encoding::*)()>(&::System::Xml::Ucs4Encoding::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x62e388c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Encoding*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Ucs4Decoder*& System::Xml::Ucs4Encoding::__cordl_internal_get_ucs4Decoder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ucs4Decoder;
}
constexpr ::System::Xml::Ucs4Decoder* const& System::Xml::Ucs4Encoding::__cordl_internal_get_ucs4Decoder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ucs4Decoder;
}
constexpr void System::Xml::Ucs4Encoding::__cordl_internal_set_ucs4Decoder(::System::Xml::Ucs4Decoder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ucs4Decoder = value;
}
inline ::StringW System::Xml::Ucs4Encoding::get_WebName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Ucs4Encoding*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Text::Decoder* System::Xml::Ucs4Encoding::GetDecoder() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Ucs4Encoding*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Decoder*>(this, ___internal_method);
}
inline int32_t System::Xml::Ucs4Encoding::GetByteCount(::ArrayW<char16_t> chars, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Ucs4Encoding*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, index, count);
}
inline ::ArrayW<uint8_t> System::Xml::Ucs4Encoding::GetBytes(::StringW s) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Ucs4Encoding*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, s);
}
inline int32_t System::Xml::Ucs4Encoding::GetBytes(::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Ucs4Encoding*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, charIndex, charCount, bytes, byteIndex);
}
inline int32_t System::Xml::Ucs4Encoding::GetMaxByteCount(int32_t charCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Ucs4Encoding*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, charCount);
}
inline int32_t System::Xml::Ucs4Encoding::GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Ucs4Encoding*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, index, count);
}
inline int32_t System::Xml::Ucs4Encoding::GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Ucs4Encoding*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, byteIndex, byteCount, chars, charIndex);
}
inline int32_t System::Xml::Ucs4Encoding::GetMaxCharCount(int32_t byteCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Ucs4Encoding*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, byteCount);
}
inline int32_t System::Xml::Ucs4Encoding::get_CodePage() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Ucs4Encoding*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Text::Encoder* System::Xml::Ucs4Encoding::GetEncoder() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Ucs4Encoding*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoder*>(this, ___internal_method);
}
inline ::System::Text::Encoding* System::Xml::Ucs4Encoding::get_UCS4_Littleendian() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Encoding*>(), { "get_UCS4_Littleendian", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(nullptr, ___internal_method);
}
inline ::System::Text::Encoding* System::Xml::Ucs4Encoding::get_UCS4_Bigendian() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Encoding*>(), { "get_UCS4_Bigendian", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(nullptr, ___internal_method);
}
inline ::System::Text::Encoding* System::Xml::Ucs4Encoding::get_UCS4_2143() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Encoding*>(), { "get_UCS4_2143", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(nullptr, ___internal_method);
}
inline ::System::Text::Encoding* System::Xml::Ucs4Encoding::get_UCS4_3412() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Encoding*>(), { "get_UCS4_3412", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(nullptr, ___internal_method);
}
inline void System::Xml::Ucs4Encoding::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Ucs4Encoding*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Ucs4Encoding* System::Xml::Ucs4Encoding::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Ucs4Encoding*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Ucs4Encoding::Ucs4Encoding() {}
