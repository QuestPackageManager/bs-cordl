#pragma once
// IWYU pragma private; include "System\Text\UTF32Encoding.hpp"
#include "System/Text/zzzz__DecoderNLS_impl.hpp"
#include "System/Text/zzzz__Encoding_impl.hpp"
#include "System/Text/zzzz__UTF32Encoding_def.hpp"
#include "System/Text/zzzz__DecoderNLS_def.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/Text/zzzz__EncoderNLS_def.hpp"
#include "System/Text/zzzz__Encoder_def.hpp"
#include "System/Text/zzzz__UTF32Encoding_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::Text::UTF32Encoding_UTF32Decoder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UTF32Encoding_UTF32Decoder::*)(::System::Text::UTF32Encoding*)>(&::System::Text::UTF32Encoding_UTF32Decoder::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5addbdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding_UTF32Decoder*>(), { ".ctor", {}, { ::i2c::type_of<::System::Text::UTF32Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding_UTF32Decoder.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UTF32Encoding_UTF32Decoder::*)()>(&::System::Text::UTF32Encoding_UTF32Decoder::Reset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ade390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding_UTF32Decoder*>(), { ::i2c::class_of<::System::Text::UTF32Encoding_UTF32Decoder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding_UTF32Decoder.get_HasState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::UTF32Encoding_UTF32Decoder::*)()>(&::System::Text::UTF32Encoding_UTF32Decoder::get_HasState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ade3b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding_UTF32Decoder*>(), { ::i2c::class_of<::System::Text::UTF32Encoding_UTF32Decoder*>(), 14 }));
    return ___internal_method;
  }
};
constexpr int32_t& System::Text::UTF32Encoding_UTF32Decoder::__cordl_internal_get_iChar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iChar;
}
constexpr int32_t const& System::Text::UTF32Encoding_UTF32Decoder::__cordl_internal_get_iChar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iChar;
}
constexpr void System::Text::UTF32Encoding_UTF32Decoder::__cordl_internal_set_iChar(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iChar = value;
}
constexpr int32_t& System::Text::UTF32Encoding_UTF32Decoder::__cordl_internal_get_readByteCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readByteCount;
}
constexpr int32_t const& System::Text::UTF32Encoding_UTF32Decoder::__cordl_internal_get_readByteCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readByteCount;
}
constexpr void System::Text::UTF32Encoding_UTF32Decoder::__cordl_internal_set_readByteCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readByteCount = value;
}
inline void System::Text::UTF32Encoding_UTF32Decoder::_ctor(::System::Text::UTF32Encoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding_UTF32Decoder*>(), { ".ctor", {}, { ::i2c::type_of<::System::Text::UTF32Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoding);
}
inline void System::Text::UTF32Encoding_UTF32Decoder::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF32Encoding_UTF32Decoder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Text::UTF32Encoding_UTF32Decoder::get_HasState() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF32Encoding_UTF32Decoder*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Text::UTF32Encoding_UTF32Decoder* System::Text::UTF32Encoding_UTF32Decoder::New_ctor(::System::Text::UTF32Encoding* encoding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::UTF32Encoding_UTF32Decoder*>(encoding));
}
// Ctor Parameters []
constexpr ::System::Text::UTF32Encoding_UTF32Decoder::UTF32Encoding_UTF32Decoder() {}
//  Writing Method size for method: ::System::Text::UTF32Encoding._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UTF32Encoding::*)()>(&::System::Text::UTF32Encoding::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5adbbfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UTF32Encoding::*)(bool, bool)>(&::System::Text::UTF32Encoding::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5adbca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UTF32Encoding::*)(bool, bool, bool)>(&::System::Text::UTF32Encoding::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5adbc38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.SetDefaultFallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UTF32Encoding::*)()>(&::System::Text::UTF32Encoding::SetDefaultFallbacks)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5adbce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF32Encoding::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Text::UTF32Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5adbda8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF32Encoding::*)(::StringW)>(&::System::Text::UTF32Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5adbf30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF32Encoding::*)(char16_t*, int32_t)>(&::System::Text::UTF32Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5adbf9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF32Encoding::*)(::StringW, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&::System::Text::UTF32Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5adc06c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF32Encoding::*)(::ArrayW<char16_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::System::Text::UTF32Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5adc2b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF32Encoding::*)(char16_t*, int32_t, uint8_t*, int32_t)>(&::System::Text::UTF32Encoding::GetBytes)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5adc534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF32Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Text::UTF32Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5adc62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF32Encoding::*)(uint8_t*, int32_t)>(&::System::Text::UTF32Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5adc7b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF32Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t)>(
    &::System::Text::UTF32Encoding::GetChars)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5adc884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF32Encoding::*)(uint8_t*, int32_t, char16_t*, int32_t)>(&::System::Text::UTF32Encoding::GetChars)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5adcb08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Text::UTF32Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Text::UTF32Encoding::GetString)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5adcc00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF32Encoding::*)(char16_t*, int32_t, ::System::Text::EncoderNLS*)>(&::System::Text::UTF32Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5adcd90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF32Encoding::*)(char16_t*, int32_t, uint8_t*, int32_t, ::System::Text::EncoderNLS*)>(
    &::System::Text::UTF32Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x5add038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF32Encoding::*)(uint8_t*, int32_t, ::System::Text::DecoderNLS*)>(&::System::Text::UTF32Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x5add3fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF32Encoding::*)(uint8_t*, int32_t, char16_t*, int32_t, ::System::Text::DecoderNLS*)>(
    &::System::Text::UTF32Encoding::GetChars)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x5add734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetSurrogate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::System::Text::UTF32Encoding::*)(char16_t, char16_t)>(&::System::Text::UTF32Encoding::GetSurrogate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5add3e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { "GetSurrogate", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetHighSurrogate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Text::UTF32Encoding::*)(uint32_t)>(&::System::Text::UTF32Encoding::GetHighSurrogate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5addb48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { "GetHighSurrogate", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetLowSurrogate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Text::UTF32Encoding::*)(uint32_t)>(&::System::Text::UTF32Encoding::GetLowSurrogate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5addb5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { "GetLowSurrogate", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetDecoder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Decoder* (::System::Text::UTF32Encoding::*)()>(&::System::Text::UTF32Encoding::GetDecoder)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5addb68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetEncoder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoder* (::System::Text::UTF32Encoding::*)()>(&::System::Text::UTF32Encoding::GetEncoder)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5addc04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetMaxByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF32Encoding::*)(int32_t)>(&::System::Text::UTF32Encoding::GetMaxByteCount)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5addc78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetMaxCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF32Encoding::*)(int32_t)>(&::System::Text::UTF32Encoding::GetMaxCharCount)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5addd74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetPreamble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Text::UTF32Encoding::*)()>(&::System::Text::UTF32Encoding::GetPreamble)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5adde3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.get_Preamble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<uint8_t> (::System::Text::UTF32Encoding::*)()>(&::System::Text::UTF32Encoding::get_Preamble)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5addf68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::UTF32Encoding::*)(::System::Object*)>(&::System::Text::UTF32Encoding::Equals)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5ade0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF32Encoding::*)()>(&::System::Text::UTF32Encoding::GetHashCode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ade1b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 2 }));
    return ___internal_method;
  }
};
constexpr bool& System::Text::UTF32Encoding::__cordl_internal_get__emitUTF32ByteOrderMark() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emitUTF32ByteOrderMark;
}
constexpr bool const& System::Text::UTF32Encoding::__cordl_internal_get__emitUTF32ByteOrderMark() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emitUTF32ByteOrderMark;
}
constexpr void System::Text::UTF32Encoding::__cordl_internal_set__emitUTF32ByteOrderMark(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____emitUTF32ByteOrderMark = value;
}
constexpr bool& System::Text::UTF32Encoding::__cordl_internal_get__isThrowException() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isThrowException;
}
constexpr bool const& System::Text::UTF32Encoding::__cordl_internal_get__isThrowException() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isThrowException;
}
constexpr void System::Text::UTF32Encoding::__cordl_internal_set__isThrowException(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isThrowException = value;
}
constexpr bool& System::Text::UTF32Encoding::__cordl_internal_get__bigEndian() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bigEndian;
}
constexpr bool const& System::Text::UTF32Encoding::__cordl_internal_get__bigEndian() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bigEndian;
}
constexpr void System::Text::UTF32Encoding::__cordl_internal_set__bigEndian(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bigEndian = value;
}
inline void System::Text::UTF32Encoding::setStaticF_s_default(::System::Text::UTF32Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::UTF32Encoding*, "s_default", ::System::Text::UTF32Encoding*>(std::forward<::System::Text::UTF32Encoding*>(value));
}
inline ::System::Text::UTF32Encoding* System::Text::UTF32Encoding::getStaticF_s_default() {
  return ::cordl_internals::getStaticField<::System::Text::UTF32Encoding*, "s_default", ::System::Text::UTF32Encoding*>();
}
inline void System::Text::UTF32Encoding::setStaticF_s_bigEndianDefault(::System::Text::UTF32Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::UTF32Encoding*, "s_bigEndianDefault", ::System::Text::UTF32Encoding*>(std::forward<::System::Text::UTF32Encoding*>(value));
}
inline ::System::Text::UTF32Encoding* System::Text::UTF32Encoding::getStaticF_s_bigEndianDefault() {
  return ::cordl_internals::getStaticField<::System::Text::UTF32Encoding*, "s_bigEndianDefault", ::System::Text::UTF32Encoding*>();
}
inline void System::Text::UTF32Encoding::setStaticF_s_bigEndianPreamble(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "s_bigEndianPreamble", ::System::Text::UTF32Encoding*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Text::UTF32Encoding::getStaticF_s_bigEndianPreamble() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "s_bigEndianPreamble", ::System::Text::UTF32Encoding*>();
}
inline void System::Text::UTF32Encoding::setStaticF_s_littleEndianPreamble(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "s_littleEndianPreamble", ::System::Text::UTF32Encoding*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Text::UTF32Encoding::getStaticF_s_littleEndianPreamble() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "s_littleEndianPreamble", ::System::Text::UTF32Encoding*>();
}
inline void System::Text::UTF32Encoding::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Text::UTF32Encoding::_ctor(bool bigEndian, bool byteOrderMark) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bigEndian, byteOrderMark);
}
inline void System::Text::UTF32Encoding::_ctor(bool bigEndian, bool byteOrderMark, bool throwOnInvalidCharacters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bigEndian, byteOrderMark, throwOnInvalidCharacters);
}
inline void System::Text::UTF32Encoding::SetDefaultFallbacks() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Text::UTF32Encoding::GetByteCount(::ArrayW<char16_t> chars, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, index, count);
}
inline int32_t System::Text::UTF32Encoding::GetByteCount(::StringW s) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s);
}
inline int32_t System::Text::UTF32Encoding::GetByteCount(char16_t* chars, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, count);
}
inline int32_t System::Text::UTF32Encoding::GetBytes(::StringW s, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s, charIndex, charCount, bytes, byteIndex);
}
inline int32_t System::Text::UTF32Encoding::GetBytes(::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, charIndex, charCount, bytes, byteIndex);
}
inline int32_t System::Text::UTF32Encoding::GetBytes(char16_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, charCount, bytes, byteCount);
}
inline int32_t System::Text::UTF32Encoding::GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, index, count);
}
inline int32_t System::Text::UTF32Encoding::GetCharCount(uint8_t* bytes, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, count);
}
inline int32_t System::Text::UTF32Encoding::GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, byteIndex, byteCount, chars, charIndex);
}
inline int32_t System::Text::UTF32Encoding::GetChars(uint8_t* bytes, int32_t byteCount, char16_t* chars, int32_t charCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, byteCount, chars, charCount);
}
inline ::StringW System::Text::UTF32Encoding::GetString(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, bytes, index, count);
}
inline int32_t System::Text::UTF32Encoding::GetByteCount(char16_t* chars, int32_t count, ::System::Text::EncoderNLS* encoder) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, count, encoder);
}
inline int32_t System::Text::UTF32Encoding::GetBytes(char16_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, ::System::Text::EncoderNLS* encoder) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, charCount, bytes, byteCount, encoder);
}
inline int32_t System::Text::UTF32Encoding::GetCharCount(uint8_t* bytes, int32_t count, ::System::Text::DecoderNLS* baseDecoder) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, count, baseDecoder);
}
inline int32_t System::Text::UTF32Encoding::GetChars(uint8_t* bytes, int32_t byteCount, char16_t* chars, int32_t charCount, ::System::Text::DecoderNLS* baseDecoder) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, byteCount, chars, charCount, baseDecoder);
}
inline uint32_t System::Text::UTF32Encoding::GetSurrogate(char16_t cHigh, char16_t cLow) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { "GetSurrogate", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, cHigh, cLow);
}
inline char16_t System::Text::UTF32Encoding::GetHighSurrogate(uint32_t iChar) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { "GetHighSurrogate", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, iChar);
}
inline char16_t System::Text::UTF32Encoding::GetLowSurrogate(uint32_t iChar) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF32Encoding*>(), { "GetLowSurrogate", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, iChar);
}
inline ::System::Text::Decoder* System::Text::UTF32Encoding::GetDecoder() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Decoder*>(this, ___internal_method);
}
inline ::System::Text::Encoder* System::Text::UTF32Encoding::GetEncoder() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoder*>(this, ___internal_method);
}
inline int32_t System::Text::UTF32Encoding::GetMaxByteCount(int32_t charCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, charCount);
}
inline int32_t System::Text::UTF32Encoding::GetMaxCharCount(int32_t byteCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, byteCount);
}
inline ::ArrayW<uint8_t> System::Text::UTF32Encoding::GetPreamble() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::System::ReadOnlySpan_1<uint8_t> System::Text::UTF32Encoding::get_Preamble() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<uint8_t>>(this, ___internal_method);
}
inline bool System::Text::UTF32Encoding::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t System::Text::UTF32Encoding::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF32Encoding*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Text::UTF32Encoding* System::Text::UTF32Encoding::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::UTF32Encoding*>());
}
inline ::System::Text::UTF32Encoding* System::Text::UTF32Encoding::New_ctor(bool bigEndian, bool byteOrderMark) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::UTF32Encoding*>(bigEndian, byteOrderMark));
}
inline ::System::Text::UTF32Encoding* System::Text::UTF32Encoding::New_ctor(bool bigEndian, bool byteOrderMark, bool throwOnInvalidCharacters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::UTF32Encoding*>(bigEndian, byteOrderMark, throwOnInvalidCharacters));
}
// Ctor Parameters []
constexpr ::System::Text::UTF32Encoding::UTF32Encoding() {}
