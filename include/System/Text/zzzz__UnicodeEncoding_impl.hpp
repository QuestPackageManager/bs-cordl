#pragma once
// IWYU pragma private; include "System\Text\UnicodeEncoding.hpp"
#include "System/Text/zzzz__DecoderNLS_impl.hpp"
#include "System/Text/zzzz__Encoding_impl.hpp"
#include "System/Text/zzzz__UnicodeEncoding_def.hpp"
#include "System/Text/zzzz__DecoderNLS_def.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/Text/zzzz__EncoderNLS_def.hpp"
#include "System/Text/zzzz__Encoder_def.hpp"
#include "System/Text/zzzz__UnicodeEncoding_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::Text::UnicodeEncoding_Decoder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UnicodeEncoding_Decoder::*)(::System::Text::UnicodeEncoding*)>(&::System::Text::UnicodeEncoding_Decoder::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5ae6698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding_Decoder*>(), { ".ctor", {}, { ::i2c::type_of<::System::Text::UnicodeEncoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding_Decoder.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UnicodeEncoding_Decoder::*)()>(&::System::Text::UnicodeEncoding_Decoder::Reset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ae6e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding_Decoder*>(), { ::i2c::class_of<::System::Text::UnicodeEncoding_Decoder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding_Decoder.get_HasState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::UnicodeEncoding_Decoder::*)()>(&::System::Text::UnicodeEncoding_Decoder::get_HasState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5ae6ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding_Decoder*>(), { ::i2c::class_of<::System::Text::UnicodeEncoding_Decoder*>(), 14 }));
    return ___internal_method;
  }
};
constexpr int32_t& System::Text::UnicodeEncoding_Decoder::__cordl_internal_get_lastByte() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastByte;
}
constexpr int32_t const& System::Text::UnicodeEncoding_Decoder::__cordl_internal_get_lastByte() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastByte;
}
constexpr void System::Text::UnicodeEncoding_Decoder::__cordl_internal_set_lastByte(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastByte = value;
}
constexpr char16_t& System::Text::UnicodeEncoding_Decoder::__cordl_internal_get_lastChar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastChar;
}
constexpr char16_t const& System::Text::UnicodeEncoding_Decoder::__cordl_internal_get_lastChar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastChar;
}
constexpr void System::Text::UnicodeEncoding_Decoder::__cordl_internal_set_lastChar(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastChar = value;
}
inline void System::Text::UnicodeEncoding_Decoder::_ctor(::System::Text::UnicodeEncoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding_Decoder*>(), { ".ctor", {}, { ::i2c::type_of<::System::Text::UnicodeEncoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoding);
}
inline void System::Text::UnicodeEncoding_Decoder::Reset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UnicodeEncoding_Decoder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Text::UnicodeEncoding_Decoder::get_HasState() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UnicodeEncoding_Decoder*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Text::UnicodeEncoding_Decoder* System::Text::UnicodeEncoding_Decoder::New_ctor(::System::Text::UnicodeEncoding* encoding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::UnicodeEncoding_Decoder*>(encoding));
}
// Ctor Parameters []
constexpr ::System::Text::UnicodeEncoding_Decoder::UnicodeEncoding_Decoder() {}
//  Writing Method size for method: ::System::Text::UnicodeEncoding._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UnicodeEncoding::*)()>(&::System::Text::UnicodeEncoding::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5ae3994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UnicodeEncoding::*)(bool, bool)>(&::System::Text::UnicodeEncoding::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ae39d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UnicodeEncoding::*)(bool, bool, bool)>(&::System::Text::UnicodeEncoding::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ae3a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.SetDefaultFallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UnicodeEncoding::*)()>(&::System::Text::UnicodeEncoding::SetDefaultFallbacks)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5ae3af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding*>(), { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Text::UnicodeEncoding::GetByteCount)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5ae3bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding*>(), { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(::StringW)>(&::System::Text::UnicodeEncoding::GetByteCount)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ae3d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding*>(), { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(char16_t*, int32_t)>(&::System::Text::UnicodeEncoding::GetByteCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5ae3db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding*>(), { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(::StringW, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::System::Text::UnicodeEncoding::GetBytes)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5ae3e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding*>(), { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(::ArrayW<char16_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::System::Text::UnicodeEncoding::GetBytes)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5ae40d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding*>(), { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(char16_t*, int32_t, uint8_t*, int32_t)>(&::System::Text::UnicodeEncoding::GetBytes)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5ae4350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding*>(), { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Text::UnicodeEncoding::GetCharCount)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5ae4448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding*>(), { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(uint8_t*, int32_t)>(&::System::Text::UnicodeEncoding::GetCharCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5ae45d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding*>(), { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t)>(
    &::System::Text::UnicodeEncoding::GetChars)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5ae46a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding*>(), { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(uint8_t*, int32_t, char16_t*, int32_t)>(&::System::Text::UnicodeEncoding::GetChars)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5ae4924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding*>(), { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Text::UnicodeEncoding::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Text::UnicodeEncoding::GetString)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5ae4a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding*>(), { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(char16_t*, int32_t, ::System::Text::EncoderNLS*)>(&::System::Text::UnicodeEncoding::GetByteCount)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0x5ae4bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding*>(), { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(char16_t*, int32_t, uint8_t*, int32_t, ::System::Text::EncoderNLS*)>(
    &::System::Text::UnicodeEncoding::GetBytes)> {
  constexpr static std::size_t size = 0x694;
  constexpr static std::size_t addrs = 0x5ae50c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding*>(), { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(uint8_t*, int32_t, ::System::Text::DecoderNLS*)>(&::System::Text::UnicodeEncoding::GetCharCount)> {
  constexpr static std::size_t size = 0x618;
  constexpr static std::size_t addrs = 0x5ae57b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding*>(), { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(uint8_t*, int32_t, char16_t*, int32_t, ::System::Text::DecoderNLS*)>(
    &::System::Text::UnicodeEncoding::GetChars)> {
  constexpr static std::size_t size = 0x77c;
  constexpr static std::size_t addrs = 0x5ae5dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding*>(), { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetEncoder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoder* (::System::Text::UnicodeEncoding::*)()>(&::System::Text::UnicodeEncoding::GetEncoder)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ae65a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding*>(), { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetDecoder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Decoder* (::System::Text::UnicodeEncoding::*)()>(&::System::Text::UnicodeEncoding::GetDecoder)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ae661c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding*>(), { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetPreamble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Text::UnicodeEncoding::*)()>(&::System::Text::UnicodeEncoding::GetPreamble)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5ae66c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding*>(), { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.get_Preamble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<uint8_t> (::System::Text::UnicodeEncoding::*)()>(&::System::Text::UnicodeEncoding::get_Preamble)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5ae67ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding*>(), { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetMaxByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(int32_t)>(&::System::Text::UnicodeEncoding::GetMaxByteCount)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5ae6970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding*>(), { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetMaxCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(int32_t)>(&::System::Text::UnicodeEncoding::GetMaxCharCount)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5ae6a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding*>(), { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::UnicodeEncoding::*)(::System::Object*)>(&::System::Text::UnicodeEncoding::Equals)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5ae6b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding*>(), { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)()>(&::System::Text::UnicodeEncoding::GetHashCode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ae6c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding*>(), { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 2 }));
    return ___internal_method;
  }
};
constexpr bool& System::Text::UnicodeEncoding::__cordl_internal_get_isThrowException() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isThrowException;
}
constexpr bool const& System::Text::UnicodeEncoding::__cordl_internal_get_isThrowException() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isThrowException;
}
constexpr void System::Text::UnicodeEncoding::__cordl_internal_set_isThrowException(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isThrowException = value;
}
constexpr bool& System::Text::UnicodeEncoding::__cordl_internal_get_bigEndian() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bigEndian;
}
constexpr bool const& System::Text::UnicodeEncoding::__cordl_internal_get_bigEndian() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bigEndian;
}
constexpr void System::Text::UnicodeEncoding::__cordl_internal_set_bigEndian(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bigEndian = value;
}
constexpr bool& System::Text::UnicodeEncoding::__cordl_internal_get_byteOrderMark() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteOrderMark;
}
constexpr bool const& System::Text::UnicodeEncoding::__cordl_internal_get_byteOrderMark() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteOrderMark;
}
constexpr void System::Text::UnicodeEncoding::__cordl_internal_set_byteOrderMark(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___byteOrderMark = value;
}
inline void System::Text::UnicodeEncoding::setStaticF_s_bigEndianDefault(::System::Text::UnicodeEncoding* value) {
  ::cordl_internals::setStaticField<::System::Text::UnicodeEncoding*, "s_bigEndianDefault", ::System::Text::UnicodeEncoding*>(std::forward<::System::Text::UnicodeEncoding*>(value));
}
inline ::System::Text::UnicodeEncoding* System::Text::UnicodeEncoding::getStaticF_s_bigEndianDefault() {
  return ::cordl_internals::getStaticField<::System::Text::UnicodeEncoding*, "s_bigEndianDefault", ::System::Text::UnicodeEncoding*>();
}
inline void System::Text::UnicodeEncoding::setStaticF_s_littleEndianDefault(::System::Text::UnicodeEncoding* value) {
  ::cordl_internals::setStaticField<::System::Text::UnicodeEncoding*, "s_littleEndianDefault", ::System::Text::UnicodeEncoding*>(std::forward<::System::Text::UnicodeEncoding*>(value));
}
inline ::System::Text::UnicodeEncoding* System::Text::UnicodeEncoding::getStaticF_s_littleEndianDefault() {
  return ::cordl_internals::getStaticField<::System::Text::UnicodeEncoding*, "s_littleEndianDefault", ::System::Text::UnicodeEncoding*>();
}
inline void System::Text::UnicodeEncoding::setStaticF_s_bigEndianPreamble(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "s_bigEndianPreamble", ::System::Text::UnicodeEncoding*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Text::UnicodeEncoding::getStaticF_s_bigEndianPreamble() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "s_bigEndianPreamble", ::System::Text::UnicodeEncoding*>();
}
inline void System::Text::UnicodeEncoding::setStaticF_s_littleEndianPreamble(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "s_littleEndianPreamble", ::System::Text::UnicodeEncoding*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Text::UnicodeEncoding::getStaticF_s_littleEndianPreamble() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "s_littleEndianPreamble", ::System::Text::UnicodeEncoding*>();
}
inline void System::Text::UnicodeEncoding::setStaticF_highLowPatternMask(uint64_t value) {
  ::cordl_internals::setStaticField<uint64_t, "highLowPatternMask", ::System::Text::UnicodeEncoding*>(std::forward<uint64_t>(value));
}
inline uint64_t System::Text::UnicodeEncoding::getStaticF_highLowPatternMask() {
  return ::cordl_internals::getStaticField<uint64_t, "highLowPatternMask", ::System::Text::UnicodeEncoding*>();
}
inline void System::Text::UnicodeEncoding::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Text::UnicodeEncoding::_ctor(bool bigEndian, bool byteOrderMark) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bigEndian, byteOrderMark);
}
inline void System::Text::UnicodeEncoding::_ctor(bool bigEndian, bool byteOrderMark, bool throwOnInvalidBytes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UnicodeEncoding*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bigEndian, byteOrderMark, throwOnInvalidBytes);
}
inline void System::Text::UnicodeEncoding::SetDefaultFallbacks() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Text::UnicodeEncoding::GetByteCount(::ArrayW<char16_t> chars, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, index, count);
}
inline int32_t System::Text::UnicodeEncoding::GetByteCount(::StringW s) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s);
}
inline int32_t System::Text::UnicodeEncoding::GetByteCount(char16_t* chars, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, count);
}
inline int32_t System::Text::UnicodeEncoding::GetBytes(::StringW s, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s, charIndex, charCount, bytes, byteIndex);
}
inline int32_t System::Text::UnicodeEncoding::GetBytes(::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, charIndex, charCount, bytes, byteIndex);
}
inline int32_t System::Text::UnicodeEncoding::GetBytes(char16_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, charCount, bytes, byteCount);
}
inline int32_t System::Text::UnicodeEncoding::GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, index, count);
}
inline int32_t System::Text::UnicodeEncoding::GetCharCount(uint8_t* bytes, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, count);
}
inline int32_t System::Text::UnicodeEncoding::GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, byteIndex, byteCount, chars, charIndex);
}
inline int32_t System::Text::UnicodeEncoding::GetChars(uint8_t* bytes, int32_t byteCount, char16_t* chars, int32_t charCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, byteCount, chars, charCount);
}
inline ::StringW System::Text::UnicodeEncoding::GetString(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, bytes, index, count);
}
inline int32_t System::Text::UnicodeEncoding::GetByteCount(char16_t* chars, int32_t count, ::System::Text::EncoderNLS* encoder) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, count, encoder);
}
inline int32_t System::Text::UnicodeEncoding::GetBytes(char16_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, ::System::Text::EncoderNLS* encoder) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, charCount, bytes, byteCount, encoder);
}
inline int32_t System::Text::UnicodeEncoding::GetCharCount(uint8_t* bytes, int32_t count, ::System::Text::DecoderNLS* baseDecoder) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, count, baseDecoder);
}
inline int32_t System::Text::UnicodeEncoding::GetChars(uint8_t* bytes, int32_t byteCount, char16_t* chars, int32_t charCount, ::System::Text::DecoderNLS* baseDecoder) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, byteCount, chars, charCount, baseDecoder);
}
inline ::System::Text::Encoder* System::Text::UnicodeEncoding::GetEncoder() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoder*>(this, ___internal_method);
}
inline ::System::Text::Decoder* System::Text::UnicodeEncoding::GetDecoder() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Decoder*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Text::UnicodeEncoding::GetPreamble() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::System::ReadOnlySpan_1<uint8_t> System::Text::UnicodeEncoding::get_Preamble() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<uint8_t>>(this, ___internal_method);
}
inline int32_t System::Text::UnicodeEncoding::GetMaxByteCount(int32_t charCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, charCount);
}
inline int32_t System::Text::UnicodeEncoding::GetMaxCharCount(int32_t byteCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, byteCount);
}
inline bool System::Text::UnicodeEncoding::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t System::Text::UnicodeEncoding::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UnicodeEncoding*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Text::UnicodeEncoding* System::Text::UnicodeEncoding::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::UnicodeEncoding*>());
}
inline ::System::Text::UnicodeEncoding* System::Text::UnicodeEncoding::New_ctor(bool bigEndian, bool byteOrderMark) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::UnicodeEncoding*>(bigEndian, byteOrderMark));
}
inline ::System::Text::UnicodeEncoding* System::Text::UnicodeEncoding::New_ctor(bool bigEndian, bool byteOrderMark, bool throwOnInvalidBytes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::UnicodeEncoding*>(bigEndian, byteOrderMark, throwOnInvalidBytes));
}
// Ctor Parameters []
constexpr ::System::Text::UnicodeEncoding::UnicodeEncoding() {}
