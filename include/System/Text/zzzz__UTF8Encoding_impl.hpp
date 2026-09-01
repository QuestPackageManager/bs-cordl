#pragma once
// IWYU pragma private; include "System\Text\UTF8Encoding.hpp"
#include "System/Text/zzzz__DecoderNLS_impl.hpp"
#include "System/Text/zzzz__EncoderNLS_impl.hpp"
#include "System/Text/zzzz__Encoding_impl.hpp"
#include "System/Text/zzzz__UTF8Encoding_def.hpp"
#include "System/Text/zzzz__DecoderFallbackBuffer_def.hpp"
#include "System/Text/zzzz__DecoderNLS_def.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/Text/zzzz__EncoderNLS_def.hpp"
#include "System/Text/zzzz__Encoder_def.hpp"
#include "System/Text/zzzz__UTF8Encoding_UTF8EncodingSealed_def.hpp"
#include "System/Text/zzzz__UTF8Encoding_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::Text::UTF8Encoding_UTF8Encoder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UTF8Encoding_UTF8Encoder::*)(::System::Text::UTF8Encoding*)>(&::System::Text::UTF8Encoding_UTF8Encoder::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ae38e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding_UTF8Encoder*>(), { ".ctor", {}, { ::i2c::type_of<::System::Text::UTF8Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding_UTF8Encoder.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UTF8Encoding_UTF8Encoder::*)()>(&::System::Text::UTF8Encoding_UTF8Encoder::Reset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ae390c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding_UTF8Encoder*>(), { ::i2c::class_of<::System::Text::UTF8Encoding_UTF8Encoder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding_UTF8Encoder.get_HasState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::UTF8Encoding_UTF8Encoder::*)()>(&::System::Text::UTF8Encoding_UTF8Encoder::get_HasState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ae392c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding_UTF8Encoder*>(), { ::i2c::class_of<::System::Text::UTF8Encoding_UTF8Encoder*>(), 11 }));
    return ___internal_method;
  }
};
constexpr int32_t& System::Text::UTF8Encoding_UTF8Encoder::__cordl_internal_get_surrogateChar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___surrogateChar;
}
constexpr int32_t const& System::Text::UTF8Encoding_UTF8Encoder::__cordl_internal_get_surrogateChar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___surrogateChar;
}
constexpr void System::Text::UTF8Encoding_UTF8Encoder::__cordl_internal_set_surrogateChar(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___surrogateChar = value;
}
inline void System::Text::UTF8Encoding_UTF8Encoder::_ctor(::System::Text::UTF8Encoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding_UTF8Encoder*>(), { ".ctor", {}, { ::i2c::type_of<::System::Text::UTF8Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoding);
}
inline void System::Text::UTF8Encoding_UTF8Encoder::Reset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF8Encoding_UTF8Encoder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Text::UTF8Encoding_UTF8Encoder::get_HasState() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF8Encoding_UTF8Encoder*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Text::UTF8Encoding_UTF8Encoder* System::Text::UTF8Encoding_UTF8Encoder::New_ctor(::System::Text::UTF8Encoding* encoding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::UTF8Encoding_UTF8Encoder*>(encoding));
}
// Ctor Parameters []
constexpr ::System::Text::UTF8Encoding_UTF8Encoder::UTF8Encoding_UTF8Encoder() {}
//  Writing Method size for method: ::System::Text::UTF8Encoding_UTF8Decoder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UTF8Encoding_UTF8Decoder::*)(::System::Text::UTF8Encoding*)>(&::System::Text::UTF8Encoding_UTF8Decoder::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ae393c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding_UTF8Decoder*>(), { ".ctor", {}, { ::i2c::type_of<::System::Text::UTF8Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding_UTF8Decoder.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UTF8Encoding_UTF8Decoder::*)()>(&::System::Text::UTF8Encoding_UTF8Decoder::Reset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ae3964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding_UTF8Decoder*>(), { ::i2c::class_of<::System::Text::UTF8Encoding_UTF8Decoder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding_UTF8Decoder.get_HasState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::UTF8Encoding_UTF8Decoder::*)()>(&::System::Text::UTF8Encoding_UTF8Decoder::get_HasState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ae3984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding_UTF8Decoder*>(), { ::i2c::class_of<::System::Text::UTF8Encoding_UTF8Decoder*>(), 14 }));
    return ___internal_method;
  }
};
constexpr int32_t& System::Text::UTF8Encoding_UTF8Decoder::__cordl_internal_get_bits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bits;
}
constexpr int32_t const& System::Text::UTF8Encoding_UTF8Decoder::__cordl_internal_get_bits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bits;
}
constexpr void System::Text::UTF8Encoding_UTF8Decoder::__cordl_internal_set_bits(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bits = value;
}
inline void System::Text::UTF8Encoding_UTF8Decoder::_ctor(::System::Text::UTF8Encoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding_UTF8Decoder*>(), { ".ctor", {}, { ::i2c::type_of<::System::Text::UTF8Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoding);
}
inline void System::Text::UTF8Encoding_UTF8Decoder::Reset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF8Encoding_UTF8Decoder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Text::UTF8Encoding_UTF8Decoder::get_HasState() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF8Encoding_UTF8Decoder*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Text::UTF8Encoding_UTF8Decoder* System::Text::UTF8Encoding_UTF8Decoder::New_ctor(::System::Text::UTF8Encoding* encoding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::UTF8Encoding_UTF8Decoder*>(encoding));
}
// Ctor Parameters []
constexpr ::System::Text::UTF8Encoding_UTF8Decoder::UTF8Encoding_UTF8Decoder() {}
//  Writing Method size for method: ::System::Text::UTF8Encoding._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UTF8Encoding::*)()>(&::System::Text::UTF8Encoding::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5ae03b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UTF8Encoding::*)(bool)>(&::System::Text::UTF8Encoding::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5ae03e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UTF8Encoding::*)(bool, bool)>(&::System::Text::UTF8Encoding::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ae0420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.SetDefaultFallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::UTF8Encoding::*)()>(&::System::Text::UTF8Encoding::SetDefaultFallbacks)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5ae0480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Text::UTF8Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5ae0544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(::StringW)>(&::System::Text::UTF8Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ae06cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(char16_t*, int32_t)>(&::System::Text::UTF8Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5ae0738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(::StringW, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&::System::Text::UTF8Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5ae0808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(::ArrayW<char16_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::System::Text::UTF8Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5ae0a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(char16_t*, int32_t, uint8_t*, int32_t)>(&::System::Text::UTF8Encoding::GetBytes)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5ae0cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Text::UTF8Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5ae0dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(uint8_t*, int32_t)>(&::System::Text::UTF8Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5ae0f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t)>(
    &::System::Text::UTF8Encoding::GetChars)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5ae1020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(uint8_t*, int32_t, char16_t*, int32_t)>(&::System::Text::UTF8Encoding::GetChars)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5ae12a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Text::UTF8Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Text::UTF8Encoding::GetString)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5ae139c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(char16_t*, int32_t, ::System::Text::EncoderNLS*)>(&::System::Text::UTF8Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x5ae152c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.PtrDiff
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t*, char16_t*)>(&::System::Text::UTF8Encoding::PtrDiff)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ae1b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { "PtrDiff", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.PtrDiff
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*, uint8_t*)>(&::System::Text::UTF8Encoding::PtrDiff)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ae1b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { "PtrDiff", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.InRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t, int32_t)>(&::System::Text::UTF8Encoding::InRange)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ae1b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { "InRange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(char16_t*, int32_t, uint8_t*, int32_t, ::System::Text::EncoderNLS*)>(
    &::System::Text::UTF8Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x738;
  constexpr static std::size_t addrs = 0x5ae1b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(uint8_t*, int32_t, ::System::Text::DecoderNLS*)>(&::System::Text::UTF8Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x5ae226c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(uint8_t*, int32_t, char16_t*, int32_t, ::System::Text::DecoderNLS*)>(
    &::System::Text::UTF8Encoding::GetChars)> {
  constexpr static std::size_t size = 0x628;
  constexpr static std::size_t addrs = 0x5ae2774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.FallbackInvalidByteSequence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::UTF8Encoding::*)(::by_ref<uint8_t*>, int32_t, ::System::Text::DecoderFallbackBuffer*, ::by_ref<char16_t*>)>(
    &::System::Text::UTF8Encoding::FallbackInvalidByteSequence)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ae2d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(),
                            { "FallbackInvalidByteSequence",
                              {},
                              { ::i2c::type_of<::by_ref<uint8_t*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::DecoderFallbackBuffer*>(), ::i2c::type_of<::by_ref<char16_t*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.FallbackInvalidByteSequence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(uint8_t*, int32_t, ::System::Text::DecoderFallbackBuffer*)>(
    &::System::Text::UTF8Encoding::FallbackInvalidByteSequence)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5ae2734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(),
                                         { "FallbackInvalidByteSequence", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::DecoderFallbackBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetBytesUnknown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Text::UTF8Encoding::*)(::by_ref<uint8_t*>, int32_t)>(&::System::Text::UTF8Encoding::GetBytesUnknown)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5ae2e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { "GetBytesUnknown", {}, { ::i2c::type_of<::by_ref<uint8_t*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetDecoder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Decoder* (::System::Text::UTF8Encoding::*)()>(&::System::Text::UTF8Encoding::GetDecoder)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ae3018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetEncoder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoder* (::System::Text::UTF8Encoding::*)()>(&::System::Text::UTF8Encoding::GetEncoder)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ae308c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetMaxByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(int32_t)>(&::System::Text::UTF8Encoding::GetMaxByteCount)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5ae3100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetMaxCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(int32_t)>(&::System::Text::UTF8Encoding::GetMaxCharCount)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5ae31fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetPreamble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Text::UTF8Encoding::*)()>(&::System::Text::UTF8Encoding::GetPreamble)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5ae32f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.get_Preamble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<uint8_t> (::System::Text::UTF8Encoding::*)()>(&::System::Text::UTF8Encoding::get_Preamble)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5ae33f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::UTF8Encoding::*)(::System::Object*)>(&::System::Text::UTF8Encoding::Equals)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5ae3554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::UTF8Encoding::*)()>(&::System::Text::UTF8Encoding::GetHashCode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ae362c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 2 }));
    return ___internal_method;
  }
};
constexpr bool& System::Text::UTF8Encoding::__cordl_internal_get__emitUTF8Identifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emitUTF8Identifier;
}
constexpr bool const& System::Text::UTF8Encoding::__cordl_internal_get__emitUTF8Identifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emitUTF8Identifier;
}
constexpr void System::Text::UTF8Encoding::__cordl_internal_set__emitUTF8Identifier(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____emitUTF8Identifier = value;
}
constexpr bool& System::Text::UTF8Encoding::__cordl_internal_get__isThrowException() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isThrowException;
}
constexpr bool const& System::Text::UTF8Encoding::__cordl_internal_get__isThrowException() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isThrowException;
}
constexpr void System::Text::UTF8Encoding::__cordl_internal_set__isThrowException(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isThrowException = value;
}
inline void System::Text::UTF8Encoding::setStaticF_s_default(::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed*, "s_default", ::System::Text::UTF8Encoding*>(
      std::forward<::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed*>(value));
}
inline ::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed* System::Text::UTF8Encoding::getStaticF_s_default() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed*, "s_default", ::System::Text::UTF8Encoding*>();
}
inline void System::Text::UTF8Encoding::setStaticF_s_preamble(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "s_preamble", ::System::Text::UTF8Encoding*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Text::UTF8Encoding::getStaticF_s_preamble() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "s_preamble", ::System::Text::UTF8Encoding*>();
}
inline void System::Text::UTF8Encoding::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Text::UTF8Encoding::_ctor(bool encoderShouldEmitUTF8Identifier) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoderShouldEmitUTF8Identifier);
}
inline void System::Text::UTF8Encoding::_ctor(bool encoderShouldEmitUTF8Identifier, bool throwOnInvalidBytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoderShouldEmitUTF8Identifier, throwOnInvalidBytes);
}
inline void System::Text::UTF8Encoding::SetDefaultFallbacks() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Text::UTF8Encoding::GetByteCount(::ArrayW<char16_t> chars, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, index, count);
}
inline int32_t System::Text::UTF8Encoding::GetByteCount(::StringW chars) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars);
}
inline int32_t System::Text::UTF8Encoding::GetByteCount(char16_t* chars, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, count);
}
inline int32_t System::Text::UTF8Encoding::GetBytes(::StringW s, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s, charIndex, charCount, bytes, byteIndex);
}
inline int32_t System::Text::UTF8Encoding::GetBytes(::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, charIndex, charCount, bytes, byteIndex);
}
inline int32_t System::Text::UTF8Encoding::GetBytes(char16_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, charCount, bytes, byteCount);
}
inline int32_t System::Text::UTF8Encoding::GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, index, count);
}
inline int32_t System::Text::UTF8Encoding::GetCharCount(uint8_t* bytes, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, count);
}
inline int32_t System::Text::UTF8Encoding::GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, byteIndex, byteCount, chars, charIndex);
}
inline int32_t System::Text::UTF8Encoding::GetChars(uint8_t* bytes, int32_t byteCount, char16_t* chars, int32_t charCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, byteCount, chars, charCount);
}
inline ::StringW System::Text::UTF8Encoding::GetString(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, bytes, index, count);
}
inline int32_t System::Text::UTF8Encoding::GetByteCount(char16_t* chars, int32_t count, ::System::Text::EncoderNLS* baseEncoder) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, count, baseEncoder);
}
inline int32_t System::Text::UTF8Encoding::PtrDiff(char16_t* a, char16_t* b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { "PtrDiff", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b);
}
inline int32_t System::Text::UTF8Encoding::PtrDiff(uint8_t* a, uint8_t* b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { "PtrDiff", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b);
}
inline bool System::Text::UTF8Encoding::InRange(int32_t ch, int32_t start, int32_t end) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { "InRange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch, start, end);
}
inline int32_t System::Text::UTF8Encoding::GetBytes(char16_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, ::System::Text::EncoderNLS* baseEncoder) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, charCount, bytes, byteCount, baseEncoder);
}
inline int32_t System::Text::UTF8Encoding::GetCharCount(uint8_t* bytes, int32_t count, ::System::Text::DecoderNLS* baseDecoder) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, count, baseDecoder);
}
inline int32_t System::Text::UTF8Encoding::GetChars(uint8_t* bytes, int32_t byteCount, char16_t* chars, int32_t charCount, ::System::Text::DecoderNLS* baseDecoder) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, byteCount, chars, charCount, baseDecoder);
}
inline bool System::Text::UTF8Encoding::FallbackInvalidByteSequence(::by_ref<uint8_t*> pSrc, int32_t ch, ::System::Text::DecoderFallbackBuffer* fallback, ::by_ref<char16_t*> pTarget) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(),
                          { "FallbackInvalidByteSequence",
                            {},
                            { ::i2c::type_of<::by_ref<uint8_t*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::DecoderFallbackBuffer*>(), ::i2c::type_of<::by_ref<char16_t*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pSrc, ch, fallback, pTarget);
}
inline int32_t System::Text::UTF8Encoding::FallbackInvalidByteSequence(uint8_t* pSrc, int32_t ch, ::System::Text::DecoderFallbackBuffer* fallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(),
                                       { "FallbackInvalidByteSequence", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::DecoderFallbackBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, pSrc, ch, fallback);
}
inline ::ArrayW<uint8_t> System::Text::UTF8Encoding::GetBytesUnknown(::by_ref<uint8_t*> pSrc, int32_t ch) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::UTF8Encoding*>(), { "GetBytesUnknown", {}, { ::i2c::type_of<::by_ref<uint8_t*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, pSrc, ch);
}
inline ::System::Text::Decoder* System::Text::UTF8Encoding::GetDecoder() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Decoder*>(this, ___internal_method);
}
inline ::System::Text::Encoder* System::Text::UTF8Encoding::GetEncoder() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoder*>(this, ___internal_method);
}
inline int32_t System::Text::UTF8Encoding::GetMaxByteCount(int32_t charCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, charCount);
}
inline int32_t System::Text::UTF8Encoding::GetMaxCharCount(int32_t byteCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, byteCount);
}
inline ::ArrayW<uint8_t> System::Text::UTF8Encoding::GetPreamble() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::System::ReadOnlySpan_1<uint8_t> System::Text::UTF8Encoding::get_Preamble() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<uint8_t>>(this, ___internal_method);
}
inline bool System::Text::UTF8Encoding::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t System::Text::UTF8Encoding::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::UTF8Encoding*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Text::UTF8Encoding* System::Text::UTF8Encoding::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::UTF8Encoding*>());
}
inline ::System::Text::UTF8Encoding* System::Text::UTF8Encoding::New_ctor(bool encoderShouldEmitUTF8Identifier) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::UTF8Encoding*>(encoderShouldEmitUTF8Identifier));
}
inline ::System::Text::UTF8Encoding* System::Text::UTF8Encoding::New_ctor(bool encoderShouldEmitUTF8Identifier, bool throwOnInvalidBytes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::UTF8Encoding*>(encoderShouldEmitUTF8Identifier, throwOnInvalidBytes));
}
// Ctor Parameters []
constexpr ::System::Text::UTF8Encoding::UTF8Encoding() {}
