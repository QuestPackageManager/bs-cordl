#pragma once
// IWYU pragma private; include "System/Text/UTF8Encoding.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::UTF8Encoding_UTF8Encoder::*)(::System::Text::UTF8Encoding*)>(
    &::System::Text::UTF8Encoding_UTF8Encoder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c889cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding_UTF8Encoder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::UTF8Encoding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding_UTF8Encoder.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::UTF8Encoding_UTF8Encoder::*)()>(&::System::Text::UTF8Encoding_UTF8Encoder::Reset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3c889d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding_UTF8Encoder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding_UTF8Encoder*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding_UTF8Encoder.get_HasState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::UTF8Encoding_UTF8Encoder::*)()>(&::System::Text::UTF8Encoding_UTF8Encoder::get_HasState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3c889f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding_UTF8Encoder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding_UTF8Encoder*>::get(), 11));
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
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding_UTF8Encoder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::UTF8Encoding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encoding);
}
inline void System::Text::UTF8Encoding_UTF8Encoder::Reset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding_UTF8Encoder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Text::UTF8Encoding_UTF8Encoder::get_HasState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding_UTF8Encoder*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Text::UTF8Encoding_UTF8Encoder* System::Text::UTF8Encoding_UTF8Encoder::New_ctor(::System::Text::UTF8Encoding* encoding) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::UTF8Encoding_UTF8Encoder*>(encoding));
}
// Ctor Parameters []
constexpr ::System::Text::UTF8Encoding_UTF8Encoder::UTF8Encoding_UTF8Encoder() {}
//  Writing Method size for method: ::System::Text::UTF8Encoding_UTF8Decoder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::UTF8Encoding_UTF8Decoder::*)(::System::Text::UTF8Encoding*)>(
    &::System::Text::UTF8Encoding_UTF8Decoder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c88a04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding_UTF8Decoder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::UTF8Encoding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding_UTF8Decoder.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::UTF8Encoding_UTF8Decoder::*)()>(&::System::Text::UTF8Encoding_UTF8Decoder::Reset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3c88a0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding_UTF8Decoder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding_UTF8Decoder*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding_UTF8Decoder.get_HasState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::UTF8Encoding_UTF8Decoder::*)()>(&::System::Text::UTF8Encoding_UTF8Decoder::get_HasState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3c88a2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding_UTF8Decoder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding_UTF8Decoder*>::get(), 14));
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
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding_UTF8Decoder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::UTF8Encoding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encoding);
}
inline void System::Text::UTF8Encoding_UTF8Decoder::Reset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding_UTF8Decoder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Text::UTF8Encoding_UTF8Decoder::get_HasState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding_UTF8Decoder*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Text::UTF8Encoding_UTF8Decoder* System::Text::UTF8Encoding_UTF8Decoder::New_ctor(::System::Text::UTF8Encoding* encoding) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::UTF8Encoding_UTF8Decoder*>(encoding));
}
// Ctor Parameters []
constexpr ::System::Text::UTF8Encoding_UTF8Decoder::UTF8Encoding_UTF8Decoder() {}
//  Writing Method size for method: ::System::Text::UTF8Encoding._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::UTF8Encoding::*)()>(&::System::Text::UTF8Encoding::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3c854f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::UTF8Encoding::*)(bool)>(&::System::Text::UTF8Encoding::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3c85510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::UTF8Encoding::*)(bool, bool)>(&::System::Text::UTF8Encoding::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3c85540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.SetDefaultFallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::UTF8Encoding::*)()>(&::System::Text::UTF8Encoding::SetDefaultFallbacks)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3c855a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetByteCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::Text::UTF8Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x3c8565c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetByteCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(::StringW)>(&::System::Text::UTF8Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3c857d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetByteCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(::cordl_internals::Ptr<char16_t>, int32_t)>(
    &::System::Text::UTF8Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3c85860;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Text::UTF8Encoding::*)(::StringW, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::System::Text::UTF8Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x3c85930;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(
    ::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::System::Text::UTF8Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x3c85b78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Text::UTF8Encoding::*)(::cordl_internals::Ptr<char16_t>, int32_t, ::cordl_internals::Ptr<uint8_t>, int32_t)>(&::System::Text::UTF8Encoding::GetBytes)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3c85ddc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetCharCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Text::UTF8Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x3c85ed4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetCharCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(::cordl_internals::Ptr<uint8_t>, int32_t)>(
    &::System::Text::UTF8Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3c8604c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<char16_t, ::Array<char16_t>*>, int32_t)>(&::System::Text::UTF8Encoding::GetChars)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x3c8611c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Text::UTF8Encoding::*)(::cordl_internals::Ptr<uint8_t>, int32_t, ::cordl_internals::Ptr<char16_t>, int32_t)>(&::System::Text::UTF8Encoding::GetChars)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3c86380;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Text::UTF8Encoding::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Text::UTF8Encoding::GetString)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x3c86478;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetByteCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(::cordl_internals::Ptr<char16_t>, int32_t, ::System::Text::EncoderNLS*)>(
    &::System::Text::UTF8Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x5ec;
  constexpr static std::size_t addrs = 0x3c86634;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.PtrDiff
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::cordl_internals::Ptr<char16_t>, ::cordl_internals::Ptr<char16_t>)>(
    &::System::Text::UTF8Encoding::PtrDiff)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3c86c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), "PtrDiff", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.PtrDiff
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::cordl_internals::Ptr<uint8_t>, ::cordl_internals::Ptr<uint8_t>)>(
    &::System::Text::UTF8Encoding::PtrDiff)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c86c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), "PtrDiff", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.InRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, int32_t, int32_t)>(&::System::Text::UTF8Encoding::InRange)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3c86c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), "InRange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(
    ::cordl_internals::Ptr<char16_t>, int32_t, ::cordl_internals::Ptr<uint8_t>, int32_t, ::System::Text::EncoderNLS*)>(&::System::Text::UTF8Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x74c;
  constexpr static std::size_t addrs = 0x3c86c48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetCharCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(::cordl_internals::Ptr<uint8_t>, int32_t, ::System::Text::DecoderNLS*)>(
    &::System::Text::UTF8Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x3c87394;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(
    ::cordl_internals::Ptr<uint8_t>, int32_t, ::cordl_internals::Ptr<char16_t>, int32_t, ::System::Text::DecoderNLS*)>(&::System::Text::UTF8Encoding::GetChars)> {
  constexpr static std::size_t size = 0x6a0;
  constexpr static std::size_t addrs = 0x3c87878;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.FallbackInvalidByteSequence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::Text::UTF8Encoding::*)(::ByRef<::cordl_internals::Ptr<uint8_t>>, int32_t, ::System::Text::DecoderFallbackBuffer*, ::ByRef<::cordl_internals::Ptr<char16_t>>)>(
        &::System::Text::UTF8Encoding::FallbackInvalidByteSequence)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3c87f18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), "FallbackInvalidByteSequence", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::cordl_internals::Ptr<uint8_t>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::DecoderFallbackBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::cordl_internals::Ptr<char16_t>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.FallbackInvalidByteSequence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(
    ::cordl_internals::Ptr<uint8_t>, int32_t, ::System::Text::DecoderFallbackBuffer*)>(&::System::Text::UTF8Encoding::FallbackInvalidByteSequence)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3c87838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), "FallbackInvalidByteSequence", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::DecoderFallbackBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetBytesUnknown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Text::UTF8Encoding::*)(::ByRef<::cordl_internals::Ptr<uint8_t>>, int32_t)>(&::System::Text::UTF8Encoding::GetBytesUnknown)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x3c87f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), "GetBytesUnknown", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::cordl_internals::Ptr<uint8_t>>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetDecoder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Decoder* (::System::Text::UTF8Encoding::*)()>(&::System::Text::UTF8Encoding::GetDecoder)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3c88178;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetEncoder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoder* (::System::Text::UTF8Encoding::*)()>(&::System::Text::UTF8Encoding::GetEncoder)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3c881d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetMaxByteCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(int32_t)>(&::System::Text::UTF8Encoding::GetMaxByteCount)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3c88230;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetMaxCharCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF8Encoding::*)(int32_t)>(&::System::Text::UTF8Encoding::GetMaxCharCount)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3c88330;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetPreamble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Text::UTF8Encoding::*)()>(
    &::System::Text::UTF8Encoding::GetPreamble)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3c88430;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.get_Preamble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ReadOnlySpan_1<uint8_t> (::System::Text::UTF8Encoding::*)()>(&::System::Text::UTF8Encoding::get_Preamble)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x3c88514;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::UTF8Encoding::*)(::System::Object*)>(&::System::Text::UTF8Encoding::Equals)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3c88684;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF8Encoding.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF8Encoding::*)()>(&::System::Text::UTF8Encoding::GetHashCode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3c88754;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 2));
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
  ::cordl_internals::setStaticField<::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed*, "s_default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get>(
      std::forward<::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed*>(value));
}
inline ::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed* System::Text::UTF8Encoding::getStaticF_s_default() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed*, "s_default",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get>();
}
inline void System::Text::UTF8Encoding::setStaticF_s_preamble(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "s_preamble", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Text::UTF8Encoding::getStaticF_s_preamble() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "s_preamble", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get>();
}
inline void System::Text::UTF8Encoding::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Text::UTF8Encoding::_ctor(bool encoderShouldEmitUTF8Identifier) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encoderShouldEmitUTF8Identifier);
}
inline void System::Text::UTF8Encoding::_ctor(bool encoderShouldEmitUTF8Identifier, bool throwOnInvalidBytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encoderShouldEmitUTF8Identifier, throwOnInvalidBytes);
}
inline void System::Text::UTF8Encoding::SetDefaultFallbacks() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Text::UTF8Encoding::GetByteCount(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, index, count);
}
inline int32_t System::Text::UTF8Encoding::GetByteCount(::StringW chars) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars);
}
inline int32_t System::Text::UTF8Encoding::GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, count);
}
inline int32_t System::Text::UTF8Encoding::GetBytes(::StringW s, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, s, charIndex, charCount, bytes, byteIndex);
}
inline int32_t System::Text::UTF8Encoding::GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, charIndex, charCount, bytes, byteIndex);
}
inline int32_t System::Text::UTF8Encoding::GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, charCount, bytes, byteCount);
}
inline int32_t System::Text::UTF8Encoding::GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, index, count);
}
inline int32_t System::Text::UTF8Encoding::GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, count);
}
inline int32_t System::Text::UTF8Encoding::GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, byteIndex, byteCount, chars, charIndex);
}
inline int32_t System::Text::UTF8Encoding::GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, byteCount, chars, charCount);
}
inline ::StringW System::Text::UTF8Encoding::GetString(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, bytes, index, count);
}
inline int32_t System::Text::UTF8Encoding::GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count, ::System::Text::EncoderNLS* baseEncoder) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, count, baseEncoder);
}
inline int32_t System::Text::UTF8Encoding::PtrDiff(::cordl_internals::Ptr<char16_t> a, ::cordl_internals::Ptr<char16_t> b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), "PtrDiff", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, a, b);
}
inline int32_t System::Text::UTF8Encoding::PtrDiff(::cordl_internals::Ptr<uint8_t> a, ::cordl_internals::Ptr<uint8_t> b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), "PtrDiff", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, a, b);
}
inline bool System::Text::UTF8Encoding::InRange(int32_t ch, int32_t start, int32_t end) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), "InRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch, start, end);
}
inline int32_t System::Text::UTF8Encoding::GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount,
                                                    ::System::Text::EncoderNLS* baseEncoder) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, charCount, bytes, byteCount, baseEncoder);
}
inline int32_t System::Text::UTF8Encoding::GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count, ::System::Text::DecoderNLS* baseDecoder) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, count, baseDecoder);
}
inline int32_t System::Text::UTF8Encoding::GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount,
                                                    ::System::Text::DecoderNLS* baseDecoder) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, byteCount, chars, charCount, baseDecoder);
}
inline bool System::Text::UTF8Encoding::FallbackInvalidByteSequence(::ByRef<::cordl_internals::Ptr<uint8_t>> pSrc, int32_t ch, ::System::Text::DecoderFallbackBuffer* fallback,
                                                                    ::ByRef<::cordl_internals::Ptr<char16_t>> pTarget) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), "FallbackInvalidByteSequence", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::cordl_internals::Ptr<uint8_t>>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::DecoderFallbackBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::cordl_internals::Ptr<char16_t>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pSrc, ch, fallback, pTarget);
}
inline int32_t System::Text::UTF8Encoding::FallbackInvalidByteSequence(::cordl_internals::Ptr<uint8_t> pSrc, int32_t ch, ::System::Text::DecoderFallbackBuffer* fallback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), "FallbackInvalidByteSequence", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::DecoderFallbackBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, pSrc, ch, fallback);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Text::UTF8Encoding::GetBytesUnknown(::ByRef<::cordl_internals::Ptr<uint8_t>> pSrc, int32_t ch) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), "GetBytesUnknown", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::cordl_internals::Ptr<uint8_t>>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, pSrc, ch);
}
inline ::System::Text::Decoder* System::Text::UTF8Encoding::GetDecoder() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Decoder*, false>(this, ___internal_method);
}
inline ::System::Text::Encoder* System::Text::UTF8Encoding::GetEncoder() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoder*, false>(this, ___internal_method);
}
inline int32_t System::Text::UTF8Encoding::GetMaxByteCount(int32_t charCount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, charCount);
}
inline int32_t System::Text::UTF8Encoding::GetMaxCharCount(int32_t byteCount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, byteCount);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Text::UTF8Encoding::GetPreamble() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::System::ReadOnlySpan_1<uint8_t> System::Text::UTF8Encoding::get_Preamble() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<uint8_t>, false>(this, ___internal_method);
}
inline bool System::Text::UTF8Encoding::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline int32_t System::Text::UTF8Encoding::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF8Encoding*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Text::UTF8Encoding* System::Text::UTF8Encoding::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::UTF8Encoding*>());
}
inline ::System::Text::UTF8Encoding* System::Text::UTF8Encoding::New_ctor(bool encoderShouldEmitUTF8Identifier) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::UTF8Encoding*>(encoderShouldEmitUTF8Identifier));
}
inline ::System::Text::UTF8Encoding* System::Text::UTF8Encoding::New_ctor(bool encoderShouldEmitUTF8Identifier, bool throwOnInvalidBytes) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::UTF8Encoding*>(encoderShouldEmitUTF8Identifier, throwOnInvalidBytes));
}
// Ctor Parameters []
constexpr ::System::Text::UTF8Encoding::UTF8Encoding() {}
