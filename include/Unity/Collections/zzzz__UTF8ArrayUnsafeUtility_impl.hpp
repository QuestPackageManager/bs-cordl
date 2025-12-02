#pragma once
// IWYU pragma private; include "Unity/Collections/UTF8ArrayUnsafeUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__UTF8ArrayUnsafeUtility_def.hpp"
#include "Unity/Collections/zzzz__ConversionError_def.hpp"
#include "Unity/Collections/zzzz__CopyError_def.hpp"
#include "Unity/Collections/zzzz__FormatError_def.hpp"
#include "Unity/Collections/zzzz__UTF8ArrayUnsafeUtility_def.hpp"
#include "Unity/Collections/zzzz__Unicode_def.hpp"
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility_Comparison._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::UTF8ArrayUnsafeUtility_Comparison::*)(
    ::Unity::Collections::Unicode_Rune, ::Unity::Collections::ConversionError, ::Unity::Collections::Unicode_Rune, ::Unity::Collections::ConversionError)>(
    &::Unity::Collections::UTF8ArrayUnsafeUtility_Comparison::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x62ab7c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility_Comparison>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Unicode_Rune>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::ConversionError>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Unicode_Rune>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::ConversionError>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Collections::UTF8ArrayUnsafeUtility_Comparison::_ctor(::Unity::Collections::Unicode_Rune runeA, ::Unity::Collections::ConversionError errorA,
                                                                         ::Unity::Collections::Unicode_Rune runeB, ::Unity::Collections::ConversionError errorB) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility_Comparison>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Unicode_Rune>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::ConversionError>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Unicode_Rune>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::ConversionError>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, runeA, errorA, runeB, errorB);
}
// Ctor Parameters [CppParam { name: "terminates", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "result", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::UTF8ArrayUnsafeUtility_Comparison::UTF8ArrayUnsafeUtility_Comparison(bool terminates, int32_t result) noexcept {
  this->terminates = terminates;
  this->result = result;
}
// Ctor Parameters []
constexpr ::Unity::Collections::UTF8ArrayUnsafeUtility_Comparison::UTF8ArrayUnsafeUtility_Comparison() {}
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.Copy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::CopyError (*)(uint8_t*, ::ByRef<int32_t>, int32_t, char16_t*, int32_t)>(
    &::Unity::Collections::UTF8ArrayUnsafeUtility::Copy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62a5c50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "Copy", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.Copy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::CopyError (*)(uint8_t*, ::ByRef<uint16_t>, uint16_t, char16_t*, int32_t)>(
    &::Unity::Collections::UTF8ArrayUnsafeUtility::Copy)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x62ab47c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "Copy", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.Copy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::CopyError (*)(uint8_t*, ::ByRef<int32_t>, int32_t, uint8_t*, int32_t)>(
    &::Unity::Collections::UTF8ArrayUnsafeUtility::Copy)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x62ab4c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "Copy", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.Copy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::CopyError (*)(uint8_t*, ::ByRef<uint16_t>, uint16_t, uint8_t*, uint16_t)>(
    &::Unity::Collections::UTF8ArrayUnsafeUtility::Copy)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x62ab508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "Copy", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.Copy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::CopyError (*)(char16_t*, ::ByRef<int32_t>, int32_t, uint8_t*, int32_t)>(
    &::Unity::Collections::UTF8ArrayUnsafeUtility::Copy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62ab54c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "Copy", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.Copy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::CopyError (*)(char16_t*, ::ByRef<uint16_t>, uint16_t, uint8_t*, uint16_t)>(
    &::Unity::Collections::UTF8ArrayUnsafeUtility::Copy)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x62ab56c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "Copy", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.AppendUTF8Bytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::FormatError (*)(uint8_t*, ::ByRef<int32_t>, int32_t, uint8_t*, int32_t)>(
    &::Unity::Collections::UTF8ArrayUnsafeUtility::AppendUTF8Bytes)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x62ab5b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "AppendUTF8Bytes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.Append
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::CopyError (*)(uint8_t*, ::ByRef<uint16_t>, uint16_t, uint8_t*, uint16_t)>(
    &::Unity::Collections::UTF8ArrayUnsafeUtility::Append)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x62ab640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "Append", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.Append
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::CopyError (*)(uint8_t*, ::ByRef<uint16_t>, uint16_t, char16_t*, int32_t)>(
    &::Unity::Collections::UTF8ArrayUnsafeUtility::Append)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x62ab694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "Append", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.Append
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::CopyError (*)(char16_t*, ::ByRef<uint16_t>, uint16_t, uint8_t*, uint16_t)>(
    &::Unity::Collections::UTF8ArrayUnsafeUtility::Append)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x62ab6e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "Append", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.StrCmp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(uint8_t*, int32_t, uint8_t*, int32_t)>(&::Unity::Collections::UTF8ArrayUnsafeUtility::StrCmp)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x62ab73c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "StrCmp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.StrCmp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(uint8_t*, int32_t, ::Unity::Collections::Unicode_Rune*, int32_t)>(
    &::Unity::Collections::UTF8ArrayUnsafeUtility::StrCmp)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x62ab7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "StrCmp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Unicode_Rune*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.StrCmp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(char16_t*, int32_t, char16_t*, int32_t)>(&::Unity::Collections::UTF8ArrayUnsafeUtility::StrCmp)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x62ab878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "StrCmp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.EqualsUTF8Bytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint8_t*, int32_t, uint8_t*, int32_t)>(&::Unity::Collections::UTF8ArrayUnsafeUtility::EqualsUTF8Bytes)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x62a6e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "EqualsUTF8Bytes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.StrCmp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(uint8_t*, int32_t, char16_t*, int32_t)>(&::Unity::Collections::UTF8ArrayUnsafeUtility::StrCmp)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x62ab900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "StrCmp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.StrCmp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(char16_t*, int32_t, uint8_t*, int32_t)>(&::Unity::Collections::UTF8ArrayUnsafeUtility::StrCmp)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x62ab988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "StrCmp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline ::Unity::Collections::CopyError Unity::Collections::UTF8ArrayUnsafeUtility::Copy(uint8_t* dest, ::ByRef<int32_t> destLength, int32_t destUTF8MaxLengthInBytes, char16_t* src,
                                                                                        int32_t srcLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "Copy", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::CopyError, false>(nullptr, ___internal_method, dest, destLength, destUTF8MaxLengthInBytes, src, srcLength);
}
inline ::Unity::Collections::CopyError Unity::Collections::UTF8ArrayUnsafeUtility::Copy(uint8_t* dest, ::ByRef<uint16_t> destLength, uint16_t destUTF8MaxLengthInBytes, char16_t* src,
                                                                                        int32_t srcLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "Copy", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::CopyError, false>(nullptr, ___internal_method, dest, destLength, destUTF8MaxLengthInBytes, src, srcLength);
}
inline ::Unity::Collections::CopyError Unity::Collections::UTF8ArrayUnsafeUtility::Copy(uint8_t* dest, ::ByRef<int32_t> destLength, int32_t destUTF8MaxLengthInBytes, uint8_t* src, int32_t srcLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "Copy", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::CopyError, false>(nullptr, ___internal_method, dest, destLength, destUTF8MaxLengthInBytes, src, srcLength);
}
inline ::Unity::Collections::CopyError Unity::Collections::UTF8ArrayUnsafeUtility::Copy(uint8_t* dest, ::ByRef<uint16_t> destLength, uint16_t destUTF8MaxLengthInBytes, uint8_t* src,
                                                                                        uint16_t srcLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "Copy", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::CopyError, false>(nullptr, ___internal_method, dest, destLength, destUTF8MaxLengthInBytes, src, srcLength);
}
inline ::Unity::Collections::CopyError Unity::Collections::UTF8ArrayUnsafeUtility::Copy(char16_t* dest, ::ByRef<int32_t> destLength, int32_t destUCS2MaxLengthInChars, uint8_t* src,
                                                                                        int32_t srcLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "Copy", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::CopyError, false>(nullptr, ___internal_method, dest, destLength, destUCS2MaxLengthInChars, src, srcLength);
}
inline ::Unity::Collections::CopyError Unity::Collections::UTF8ArrayUnsafeUtility::Copy(char16_t* dest, ::ByRef<uint16_t> destLength, uint16_t destUCS2MaxLengthInChars, uint8_t* src,
                                                                                        uint16_t srcLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "Copy", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::CopyError, false>(nullptr, ___internal_method, dest, destLength, destUCS2MaxLengthInChars, src, srcLength);
}
inline ::Unity::Collections::FormatError Unity::Collections::UTF8ArrayUnsafeUtility::AppendUTF8Bytes(uint8_t* dest, ::ByRef<int32_t> destLength, int32_t destCapacity, uint8_t* src,
                                                                                                     int32_t srcLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "AppendUTF8Bytes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError, false>(nullptr, ___internal_method, dest, destLength, destCapacity, src, srcLength);
}
inline ::Unity::Collections::CopyError Unity::Collections::UTF8ArrayUnsafeUtility::Append(uint8_t* dest, ::ByRef<uint16_t> destLength, uint16_t destUTF8MaxLengthInBytes, uint8_t* src,
                                                                                          uint16_t srcLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "Append", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::CopyError, false>(nullptr, ___internal_method, dest, destLength, destUTF8MaxLengthInBytes, src, srcLength);
}
inline ::Unity::Collections::CopyError Unity::Collections::UTF8ArrayUnsafeUtility::Append(uint8_t* dest, ::ByRef<uint16_t> destLength, uint16_t destUTF8MaxLengthInBytes, char16_t* src,
                                                                                          int32_t srcLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "Append", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::CopyError, false>(nullptr, ___internal_method, dest, destLength, destUTF8MaxLengthInBytes, src, srcLength);
}
inline ::Unity::Collections::CopyError Unity::Collections::UTF8ArrayUnsafeUtility::Append(char16_t* dest, ::ByRef<uint16_t> destLength, uint16_t destUCS2MaxLengthInChars, uint8_t* src,
                                                                                          uint16_t srcLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "Append", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::CopyError, false>(nullptr, ___internal_method, dest, destLength, destUCS2MaxLengthInChars, src, srcLength);
}
inline int32_t Unity::Collections::UTF8ArrayUnsafeUtility::StrCmp(uint8_t* utf8BufferA, int32_t utf8LengthInBytesA, uint8_t* utf8BufferB, int32_t utf8LengthInBytesB) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "StrCmp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, utf8BufferA, utf8LengthInBytesA, utf8BufferB, utf8LengthInBytesB);
}
inline int32_t Unity::Collections::UTF8ArrayUnsafeUtility::StrCmp(uint8_t* utf8BufferA, int32_t utf8LengthInBytesA, ::Unity::Collections::Unicode_Rune* runeBufferB, int32_t lengthInRunesB) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "StrCmp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Unicode_Rune*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, utf8BufferA, utf8LengthInBytesA, runeBufferB, lengthInRunesB);
}
inline int32_t Unity::Collections::UTF8ArrayUnsafeUtility::StrCmp(char16_t* utf16BufferA, int32_t utf16LengthInCharsA, char16_t* utf16BufferB, int32_t utf16LengthInCharsB) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "StrCmp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, utf16BufferA, utf16LengthInCharsA, utf16BufferB, utf16LengthInCharsB);
}
inline bool Unity::Collections::UTF8ArrayUnsafeUtility::EqualsUTF8Bytes(uint8_t* aBytes, int32_t aLength, uint8_t* bBytes, int32_t bLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "EqualsUTF8Bytes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, aBytes, aLength, bBytes, bLength);
}
inline int32_t Unity::Collections::UTF8ArrayUnsafeUtility::StrCmp(uint8_t* utf8Buffer, int32_t utf8LengthInBytes, char16_t* utf16Buffer, int32_t utf16LengthInChars) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "StrCmp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, utf8Buffer, utf8LengthInBytes, utf16Buffer, utf16LengthInChars);
}
inline int32_t Unity::Collections::UTF8ArrayUnsafeUtility::StrCmp(char16_t* utf16Buffer, int32_t utf16LengthInChars, uint8_t* utf8Buffer, int32_t utf8LengthInBytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::UTF8ArrayUnsafeUtility*>::get(), "StrCmp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, utf16Buffer, utf16LengthInChars, utf8Buffer, utf8LengthInBytes);
}
// Ctor Parameters []
constexpr ::Unity::Collections::UTF8ArrayUnsafeUtility::UTF8ArrayUnsafeUtility() {}
