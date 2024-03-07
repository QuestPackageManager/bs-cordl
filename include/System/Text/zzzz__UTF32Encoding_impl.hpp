#pragma once
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
//  Writing Method size for method: ::System::Text::__UTF32Encoding__UTF32Decoder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::__UTF32Encoding__UTF32Decoder::*)(::System::Text::UTF32Encoding*)>(
    &::System::Text::__UTF32Encoding__UTF32Decoder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25949c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF32Encoding__UTF32Decoder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::UTF32Encoding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__UTF32Encoding__UTF32Decoder.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::__UTF32Encoding__UTF32Decoder::*)()>(&::System::Text::__UTF32Encoding__UTF32Decoder::Reset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25950f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF32Encoding__UTF32Decoder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF32Encoding__UTF32Decoder*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__UTF32Encoding__UTF32Decoder.get_HasState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::__UTF32Encoding__UTF32Decoder::*)()>(
    &::System::Text::__UTF32Encoding__UTF32Decoder::get_HasState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2595114;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF32Encoding__UTF32Decoder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF32Encoding__UTF32Decoder*>::get(), 14));
    return ___internal_method;
  }
};
constexpr int32_t& System::Text::__UTF32Encoding__UTF32Decoder::__cordl_internal_get_iChar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iChar;
}
constexpr int32_t const& System::Text::__UTF32Encoding__UTF32Decoder::__cordl_internal_get_iChar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iChar;
}
constexpr void System::Text::__UTF32Encoding__UTF32Decoder::__cordl_internal_set_iChar(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iChar = value;
}
constexpr int32_t& System::Text::__UTF32Encoding__UTF32Decoder::__cordl_internal_get_readByteCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readByteCount;
}
constexpr int32_t const& System::Text::__UTF32Encoding__UTF32Decoder::__cordl_internal_get_readByteCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readByteCount;
}
constexpr void System::Text::__UTF32Encoding__UTF32Decoder::__cordl_internal_set_readByteCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readByteCount = value;
}
inline ::System::Text::__UTF32Encoding__UTF32Decoder* System::Text::__UTF32Encoding__UTF32Decoder::New_ctor(::System::Text::UTF32Encoding* encoding) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::__UTF32Encoding__UTF32Decoder*>(encoding));
}
inline void System::Text::__UTF32Encoding__UTF32Decoder::_ctor(::System::Text::UTF32Encoding* encoding) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF32Encoding__UTF32Decoder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::UTF32Encoding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encoding);
}
inline void System::Text::__UTF32Encoding__UTF32Decoder::Reset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF32Encoding__UTF32Decoder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Text::__UTF32Encoding__UTF32Decoder::get_HasState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UTF32Encoding__UTF32Decoder*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Text::__UTF32Encoding__UTF32Decoder::__UTF32Encoding__UTF32Decoder() {}
//  Writing Method size for method: ::System::Text::UTF32Encoding._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::UTF32Encoding::*)()>(&::System::Text::UTF32Encoding::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2592928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::UTF32Encoding::*)(bool, bool)>(&::System::Text::UTF32Encoding::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x25929c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::UTF32Encoding::*)(bool, bool, bool)>(&::System::Text::UTF32Encoding::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2592950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.SetDefaultFallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::UTF32Encoding::*)()>(&::System::Text::UTF32Encoding::SetDefaultFallbacks)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2592a00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetByteCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF32Encoding::*)(::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t)>(
    &::System::Text::UTF32Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2592ad4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetByteCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF32Encoding::*)(::StringW)>(&::System::Text::UTF32Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2592c58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetByteCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF32Encoding::*)(::cordl_internals::Ptr<char16_t>, int32_t)>(
    &::System::Text::UTF32Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2592ce8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Text::UTF32Encoding::*)(::StringW, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::System::Text::UTF32Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x2592dc0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF32Encoding::*)(
    ::ArrayW<char16_t, ::Array<char16_t>*>, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::System::Text::UTF32Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x2593020;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Text::UTF32Encoding::*)(::cordl_internals::Ptr<char16_t>, int32_t, ::cordl_internals::Ptr<uint8_t>, int32_t)>(&::System::Text::UTF32Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x259329c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetCharCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF32Encoding::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Text::UTF32Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x259339c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetCharCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF32Encoding::*)(::cordl_internals::Ptr<uint8_t>, int32_t)>(
    &::System::Text::UTF32Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2593520;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF32Encoding::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<char16_t, ::Array<char16_t>*>, int32_t)>(&::System::Text::UTF32Encoding::GetChars)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x25935f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Text::UTF32Encoding::*)(::cordl_internals::Ptr<uint8_t>, int32_t, ::cordl_internals::Ptr<char16_t>, int32_t)>(&::System::Text::UTF32Encoding::GetChars)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2593874;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Text::UTF32Encoding::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Text::UTF32Encoding::GetString)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x2593974;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetByteCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF32Encoding::*)(::cordl_internals::Ptr<char16_t>, int32_t, ::System::Text::EncoderNLS*)>(
    &::System::Text::UTF32Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x2593b3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF32Encoding::*)(
    ::cordl_internals::Ptr<char16_t>, int32_t, ::cordl_internals::Ptr<uint8_t>, int32_t, ::System::Text::EncoderNLS*)>(&::System::Text::UTF32Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x2593e14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetCharCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF32Encoding::*)(::cordl_internals::Ptr<uint8_t>, int32_t, ::System::Text::DecoderNLS*)>(
    &::System::Text::UTF32Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x25941f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF32Encoding::*)(
    ::cordl_internals::Ptr<uint8_t>, int32_t, ::cordl_internals::Ptr<char16_t>, int32_t, ::System::Text::DecoderNLS*)>(&::System::Text::UTF32Encoding::GetChars)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x2594540;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetSurrogate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Text::UTF32Encoding::*)(char16_t, char16_t)>(&::System::Text::UTF32Encoding::GetSurrogate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25941dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), "GetSurrogate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetHighSurrogate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Text::UTF32Encoding::*)(uint32_t)>(&::System::Text::UTF32Encoding::GetHighSurrogate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x259493c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), "GetHighSurrogate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetLowSurrogate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Text::UTF32Encoding::*)(uint32_t)>(&::System::Text::UTF32Encoding::GetLowSurrogate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2594950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), "GetLowSurrogate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetDecoder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Decoder* (::System::Text::UTF32Encoding::*)()>(&::System::Text::UTF32Encoding::GetDecoder)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x259495c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetEncoder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoder* (::System::Text::UTF32Encoding::*)()>(&::System::Text::UTF32Encoding::GetEncoder)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x25949c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetMaxByteCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF32Encoding::*)(int32_t)>(&::System::Text::UTF32Encoding::GetMaxByteCount)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2594a28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetMaxCharCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF32Encoding::*)(int32_t)>(&::System::Text::UTF32Encoding::GetMaxCharCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2594b30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetPreamble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Text::UTF32Encoding::*)()>(
    &::System::Text::UTF32Encoding::GetPreamble)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2594c00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.get_Preamble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ReadOnlySpan_1<uint8_t> (::System::Text::UTF32Encoding::*)()>(
    &::System::Text::UTF32Encoding::get_Preamble)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2594d04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::UTF32Encoding::*)(::System::Object*)>(&::System::Text::UTF32Encoding::Equals)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2594e74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UTF32Encoding.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UTF32Encoding::*)()>(&::System::Text::UTF32Encoding::GetHashCode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2594f38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 2));
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
  ::cordl_internals::setStaticField<::System::Text::UTF32Encoding*, "s_default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get>(
      std::forward<::System::Text::UTF32Encoding*>(value));
}
inline ::System::Text::UTF32Encoding* System::Text::UTF32Encoding::getStaticF_s_default() {
  return ::cordl_internals::getStaticField<::System::Text::UTF32Encoding*, "s_default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get>();
}
inline void System::Text::UTF32Encoding::setStaticF_s_bigEndianDefault(::System::Text::UTF32Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::UTF32Encoding*, "s_bigEndianDefault", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get>(
      std::forward<::System::Text::UTF32Encoding*>(value));
}
inline ::System::Text::UTF32Encoding* System::Text::UTF32Encoding::getStaticF_s_bigEndianDefault() {
  return ::cordl_internals::getStaticField<::System::Text::UTF32Encoding*, "s_bigEndianDefault", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get>();
}
inline void System::Text::UTF32Encoding::setStaticF_s_bigEndianPreamble(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "s_bigEndianPreamble", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Text::UTF32Encoding::getStaticF_s_bigEndianPreamble() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "s_bigEndianPreamble", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get>();
}
inline void System::Text::UTF32Encoding::setStaticF_s_littleEndianPreamble(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "s_littleEndianPreamble", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Text::UTF32Encoding::getStaticF_s_littleEndianPreamble() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "s_littleEndianPreamble",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get>();
}
inline ::System::Text::UTF32Encoding* System::Text::UTF32Encoding::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::UTF32Encoding*>());
}
inline void System::Text::UTF32Encoding::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Text::UTF32Encoding* System::Text::UTF32Encoding::New_ctor(bool bigEndian, bool byteOrderMark) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::UTF32Encoding*>(bigEndian, byteOrderMark));
}
inline void System::Text::UTF32Encoding::_ctor(bool bigEndian, bool byteOrderMark) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bigEndian, byteOrderMark);
}
inline ::System::Text::UTF32Encoding* System::Text::UTF32Encoding::New_ctor(bool bigEndian, bool byteOrderMark, bool throwOnInvalidCharacters) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::UTF32Encoding*>(bigEndian, byteOrderMark, throwOnInvalidCharacters));
}
inline void System::Text::UTF32Encoding::_ctor(bool bigEndian, bool byteOrderMark, bool throwOnInvalidCharacters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bigEndian, byteOrderMark, throwOnInvalidCharacters);
}
inline void System::Text::UTF32Encoding::SetDefaultFallbacks() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Text::UTF32Encoding::GetByteCount(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, index, count);
}
inline int32_t System::Text::UTF32Encoding::GetByteCount(::StringW s) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, s);
}
inline int32_t System::Text::UTF32Encoding::GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, count);
}
inline int32_t System::Text::UTF32Encoding::GetBytes(::StringW s, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, s, charIndex, charCount, bytes, byteIndex);
}
inline int32_t System::Text::UTF32Encoding::GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes,
                                                     int32_t byteIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, charIndex, charCount, bytes, byteIndex);
}
inline int32_t System::Text::UTF32Encoding::GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, charCount, bytes, byteCount);
}
inline int32_t System::Text::UTF32Encoding::GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, index, count);
}
inline int32_t System::Text::UTF32Encoding::GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, count);
}
inline int32_t System::Text::UTF32Encoding::GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars,
                                                     int32_t charIndex) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, byteIndex, byteCount, chars, charIndex);
}
inline int32_t System::Text::UTF32Encoding::GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, byteCount, chars, charCount);
}
inline ::StringW System::Text::UTF32Encoding::GetString(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, bytes, index, count);
}
inline int32_t System::Text::UTF32Encoding::GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count, ::System::Text::EncoderNLS* encoder) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, count, encoder);
}
inline int32_t System::Text::UTF32Encoding::GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount,
                                                     ::System::Text::EncoderNLS* encoder) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, charCount, bytes, byteCount, encoder);
}
inline int32_t System::Text::UTF32Encoding::GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count, ::System::Text::DecoderNLS* baseDecoder) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, count, baseDecoder);
}
inline int32_t System::Text::UTF32Encoding::GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount,
                                                     ::System::Text::DecoderNLS* baseDecoder) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, byteCount, chars, charCount, baseDecoder);
}
inline uint32_t System::Text::UTF32Encoding::GetSurrogate(char16_t cHigh, char16_t cLow) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), "GetSurrogate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, cHigh, cLow);
}
inline char16_t System::Text::UTF32Encoding::GetHighSurrogate(uint32_t iChar) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), "GetHighSurrogate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method, iChar);
}
inline char16_t System::Text::UTF32Encoding::GetLowSurrogate(uint32_t iChar) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), "GetLowSurrogate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method, iChar);
}
inline ::System::Text::Decoder* System::Text::UTF32Encoding::GetDecoder() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Decoder*, false>(this, ___internal_method);
}
inline ::System::Text::Encoder* System::Text::UTF32Encoding::GetEncoder() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoder*, false>(this, ___internal_method);
}
inline int32_t System::Text::UTF32Encoding::GetMaxByteCount(int32_t charCount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, charCount);
}
inline int32_t System::Text::UTF32Encoding::GetMaxCharCount(int32_t byteCount) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, byteCount);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Text::UTF32Encoding::GetPreamble() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::System::ReadOnlySpan_1<uint8_t> System::Text::UTF32Encoding::get_Preamble() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<uint8_t>, false>(this, ___internal_method);
}
inline bool System::Text::UTF32Encoding::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline int32_t System::Text::UTF32Encoding::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UTF32Encoding*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Text::UTF32Encoding::UTF32Encoding() {}
