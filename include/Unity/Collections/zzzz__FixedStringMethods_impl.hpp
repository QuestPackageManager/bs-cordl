#pragma once
// IWYU pragma private; include "Unity\Collections\FixedStringMethods.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__FixedStringMethods_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeText_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__CopyError_def.hpp"
#include "Unity/Collections/zzzz__FormatError_def.hpp"
#include "Unity/Collections/zzzz__NativeText_def.hpp"
#include "Unity/Collections/zzzz__ParseError_def.hpp"
#include "Unity/Collections/zzzz__Unicode_def.hpp"
//  Writing Method size for method: ::Unity::Collections::FixedStringMethods.CheckSubstringInRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, int32_t)>(&::Unity::Collections::FixedStringMethods::CheckSubstringInRange)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x64b5718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                             { "CheckSubstringInRange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedStringMethods.Substring
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeText (*)(
    ::by_ref<::Unity::Collections::NativeText>, int32_t, int32_t, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::FixedStringMethods::Substring)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x64b5828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                             { "Substring",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedStringMethods.Substring
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeText (*)(
    ::by_ref<::Unity::Collections::NativeText>, int32_t, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::FixedStringMethods::Substring)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x64b5954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(), { "Substring",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<int32_t>(),
                                                                                                           ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedStringMethods.Substring
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeText (*)(::by_ref<::Unity::Collections::NativeText>, int32_t, int32_t)>(
    &::Unity::Collections::FixedStringMethods::Substring)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64b59e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                { "Substring", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedStringMethods.Substring
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeText (*)(::by_ref<::Unity::Collections::NativeText>, int32_t)>(
    &::Unity::Collections::FixedStringMethods::Substring)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x64b59f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                             { "Substring", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedStringMethods.TrimStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::LowLevel::Unsafe::UnsafeText (*)(
    ::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText>, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::FixedStringMethods::TrimStart)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x64b5a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
            { "TrimStart", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedStringMethods.TrimStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeText (*)(::by_ref<::Unity::Collections::NativeText>, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::FixedStringMethods::TrimStart)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x64b5bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                            { "TrimStart", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedStringMethods.TrimStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::LowLevel::Unsafe::UnsafeText (*)(
    ::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText>, ::Unity::Collections::AllocatorManager_AllocatorHandle, ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune>)>(
    &::Unity::Collections::FixedStringMethods::TrimStart)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x64b5ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                         { "TrimStart",
                                           {},
                                           { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
                                             ::i2c::type_of<::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedStringMethods.TrimStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeText (*)(::by_ref<::Unity::Collections::NativeText>, ::Unity::Collections::AllocatorManager_AllocatorHandle,
                                                                                            ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune>)>(
    &::Unity::Collections::FixedStringMethods::TrimStart)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x64b5e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                             { "TrimStart",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
                                                                 ::i2c::type_of<::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedStringMethods.TrimEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::LowLevel::Unsafe::UnsafeText (*)(
    ::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText>, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::FixedStringMethods::TrimEnd)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x64b5f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
            { "TrimEnd", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedStringMethods.TrimEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeText (*)(::by_ref<::Unity::Collections::NativeText>, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::FixedStringMethods::TrimEnd)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x64b6030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                            { "TrimEnd", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedStringMethods.TrimEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::LowLevel::Unsafe::UnsafeText (*)(
    ::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText>, ::Unity::Collections::AllocatorManager_AllocatorHandle, ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune>)>(
    &::Unity::Collections::FixedStringMethods::TrimEnd)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x64b6100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                         { "TrimEnd",
                                           {},
                                           { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
                                             ::i2c::type_of<::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedStringMethods.TrimEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeText (*)(::by_ref<::Unity::Collections::NativeText>, ::Unity::Collections::AllocatorManager_AllocatorHandle,
                                                                                            ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune>)>(
    &::Unity::Collections::FixedStringMethods::TrimEnd)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x64b61dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                             { "TrimEnd",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
                                                                 ::i2c::type_of<::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedStringMethods.Trim
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::LowLevel::Unsafe::UnsafeText (*)(
    ::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText>, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::FixedStringMethods::Trim)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x64b62c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
            { "Trim", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedStringMethods.Trim
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeText (*)(::by_ref<::Unity::Collections::NativeText>, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::FixedStringMethods::Trim)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x64b644c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                         { "Trim", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedStringMethods.Trim
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::LowLevel::Unsafe::UnsafeText (*)(
    ::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText>, ::Unity::Collections::AllocatorManager_AllocatorHandle, ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune>)>(
    &::Unity::Collections::FixedStringMethods::Trim)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x64b65f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                         { "Trim",
                                           {},
                                           { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
                                             ::i2c::type_of<::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedStringMethods.Trim
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeText (*)(::by_ref<::Unity::Collections::NativeText>, ::Unity::Collections::AllocatorManager_AllocatorHandle,
                                                                                            ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune>)>(
    &::Unity::Collections::FixedStringMethods::Trim)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x64b6790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                             { "Trim",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
                                                                 ::i2c::type_of<::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedStringMethods.ToLowerAscii
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::LowLevel::Unsafe::UnsafeText (*)(
    ::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText>, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::FixedStringMethods::ToLowerAscii)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x64b694c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
            { "ToLowerAscii", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedStringMethods.ToLowerAscii
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeText (*)(::by_ref<::Unity::Collections::NativeText>, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::FixedStringMethods::ToLowerAscii)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x64b6a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                            { "ToLowerAscii", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedStringMethods.ToUpperAscii
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::LowLevel::Unsafe::UnsafeText (*)(
    ::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText>, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::FixedStringMethods::ToUpperAscii)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x64b6be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
            { "ToUpperAscii", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedStringMethods.ToUpperAscii
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeText (*)(::by_ref<::Unity::Collections::NativeText>, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::FixedStringMethods::ToUpperAscii)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x64b6d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                            { "ToUpperAscii", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
template <typename T> inline ::Unity::Collections::FormatError Unity::Collections::FixedStringMethods::Append(::by_ref<T> fs, ::Unity::Collections::Unicode_Rune rune) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "Append", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::Unity::Collections::Unicode_Rune>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(nullptr, ___internal_method, fs, rune);
}
template <typename T> inline ::Unity::Collections::FormatError Unity::Collections::FixedStringMethods::Append(::by_ref<T> fs, char16_t ch) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                                                              { "Append", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<char16_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(nullptr, ___internal_method, fs, ch);
}
template <typename T> inline ::Unity::Collections::FormatError Unity::Collections::FixedStringMethods::AppendRawByte(::by_ref<T> fs, uint8_t a) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(), { "AppendRawByte", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<uint8_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(nullptr, ___internal_method, fs, a);
}
template <typename T> inline ::Unity::Collections::FormatError Unity::Collections::FixedStringMethods::Append(::by_ref<T> fs, ::Unity::Collections::Unicode_Rune rune, int32_t count) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                       { "Append", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::Unity::Collections::Unicode_Rune>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(nullptr, ___internal_method, fs, rune, count);
}
template <typename T> inline ::Unity::Collections::FormatError Unity::Collections::FixedStringMethods::Append(::by_ref<T> fs, int64_t input) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                                                              { "Append", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int64_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(nullptr, ___internal_method, fs, input);
}
template <typename T> inline ::Unity::Collections::FormatError Unity::Collections::FixedStringMethods::Append(::by_ref<T> fs, int32_t input) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                                                              { "Append", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(nullptr, ___internal_method, fs, input);
}
template <typename T> inline ::Unity::Collections::FormatError Unity::Collections::FixedStringMethods::Append(::by_ref<T> fs, uint64_t input) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                                                              { "Append", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<uint64_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(nullptr, ___internal_method, fs, input);
}
template <typename T> inline ::Unity::Collections::FormatError Unity::Collections::FixedStringMethods::Append(::by_ref<T> fs, uint32_t input) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                                                              { "Append", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<uint32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(nullptr, ___internal_method, fs, input);
}
template <typename T> inline ::Unity::Collections::FormatError Unity::Collections::FixedStringMethods::Append(::by_ref<T> fs, float_t input, char16_t decimalSeparator) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "Append", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<char16_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(nullptr, ___internal_method, fs, input, decimalSeparator);
}
template <typename T, typename T2> inline ::Unity::Collections::FormatError Unity::Collections::FixedStringMethods::Append(::by_ref<T> fs, ::by_ref<T2> input) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "Append", { ::i2c::class_of<T>(), ::i2c::class_of<T2>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<T2>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<T2>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(nullptr, ___internal_method, fs, input);
}
template <typename T, typename T2> inline ::Unity::Collections::CopyError Unity::Collections::FixedStringMethods::CopyFrom(::by_ref<T> fs, ::by_ref<T2> input) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "CopyFrom", { ::i2c::class_of<T>(), ::i2c::class_of<T2>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<T2>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<T2>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::CopyError>(nullptr, ___internal_method, fs, input);
}
template <typename T> inline ::Unity::Collections::FormatError Unity::Collections::FixedStringMethods::Append(::by_ref<T> fs, uint8_t* utf8Bytes, int32_t utf8BytesLength) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "Append", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(nullptr, ___internal_method, fs, utf8Bytes, utf8BytesLength);
}
template <typename T> inline ::Unity::Collections::FormatError Unity::Collections::FixedStringMethods::Append(::by_ref<T> fs, ::StringW s) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                                                              { "Append", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(nullptr, ___internal_method, fs, s);
}
template <typename T> inline ::Unity::Collections::CopyError Unity::Collections::FixedStringMethods::CopyFrom(::by_ref<T> fs, ::StringW s) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(), { "CopyFrom", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::CopyError>(nullptr, ___internal_method, fs, s);
}
template <typename T> inline ::Unity::Collections::CopyError Unity::Collections::FixedStringMethods::CopyFromTruncated(::by_ref<T> fs, ::StringW s) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "CopyFromTruncated", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::CopyError>(nullptr, ___internal_method, fs, s);
}
template <typename T, typename T2> inline ::Unity::Collections::CopyError Unity::Collections::FixedStringMethods::CopyFromTruncated(::by_ref<T> fs, ::by_ref<T2> input) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                              { "CopyFromTruncated", { ::i2c::class_of<T>(), ::i2c::class_of<T2>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<T2>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<T2>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::CopyError>(nullptr, ___internal_method, fs, input);
}
template <typename T, typename U, typename T0> inline ::Unity::Collections::FormatError Unity::Collections::FixedStringMethods::AppendFormat(::by_ref<T> dest, ::by_ref<U> format, ::by_ref<T0> arg0) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                                                              { "AppendFormat",
                                                                                                { ::i2c::class_of<T>(), ::i2c::class_of<U>(), ::i2c::class_of<T0>() },
                                                                                                { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<U>>(), ::i2c::type_of<::by_ref<T0>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>(), ::i2c::class_of<T0>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(nullptr, ___internal_method, dest, format, arg0);
}
template <typename T, typename U, typename T0, typename T1>
inline ::Unity::Collections::FormatError Unity::Collections::FixedStringMethods::AppendFormat(::by_ref<T> dest, ::by_ref<U> format, ::by_ref<T0> arg0, ::by_ref<T1> arg1) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "AppendFormat",
                                                             { ::i2c::class_of<T>(), ::i2c::class_of<U>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>() },
                                                             { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<U>>(), ::i2c::type_of<::by_ref<T0>>(), ::i2c::type_of<::by_ref<T1>>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(nullptr, ___internal_method, dest, format, arg0, arg1);
}
template <typename T, typename U, typename T0, typename T1, typename T2>
inline ::Unity::Collections::FormatError Unity::Collections::FixedStringMethods::AppendFormat(::by_ref<T> dest, ::by_ref<U> format, ::by_ref<T0> arg0, ::by_ref<T1> arg1, ::by_ref<T2> arg2) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                          { "AppendFormat",
                            { ::i2c::class_of<T>(), ::i2c::class_of<U>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>() },
                            { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<U>>(), ::i2c::type_of<::by_ref<T0>>(), ::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>() } })));
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(nullptr, ___internal_method, dest, format, arg0, arg1, arg2);
}
template <typename T, typename U, typename T0, typename T1, typename T2, typename T3>
inline ::Unity::Collections::FormatError Unity::Collections::FixedStringMethods::AppendFormat(::by_ref<T> dest, ::by_ref<U> format, ::by_ref<T0> arg0, ::by_ref<T1> arg1, ::by_ref<T2> arg2,
                                                                                              ::by_ref<T3> arg3) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "AppendFormat",
                                                             { ::i2c::class_of<T>(), ::i2c::class_of<U>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>() },
                                                             { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<U>>(), ::i2c::type_of<::by_ref<T0>>(), ::i2c::type_of<::by_ref<T1>>(),
                                                               ::i2c::type_of<::by_ref<T2>>(), ::i2c::type_of<::by_ref<T3>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>(), ::i2c::class_of<T0>(),
                                                                                                                     ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(nullptr, ___internal_method, dest, format, arg0, arg1, arg2, arg3);
}
template <typename T, typename U, typename T0, typename T1, typename T2, typename T3, typename T4>
inline ::Unity::Collections::FormatError Unity::Collections::FixedStringMethods::AppendFormat(::by_ref<T> dest, ::by_ref<U> format, ::by_ref<T0> arg0, ::by_ref<T1> arg1, ::by_ref<T2> arg2,
                                                                                              ::by_ref<T3> arg3, ::by_ref<T4> arg4) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                          { "AppendFormat",
                            { ::i2c::class_of<T>(), ::i2c::class_of<U>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>() },
                            { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<U>>(), ::i2c::type_of<::by_ref<T0>>(), ::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>(),
                              ::i2c::type_of<::by_ref<T3>>(), ::i2c::type_of<::by_ref<T4>>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(),
                                                                                       ::i2c::class_of<T3>(), ::i2c::class_of<T4>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(nullptr, ___internal_method, dest, format, arg0, arg1, arg2, arg3, arg4);
}
template <typename T, typename U, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
inline ::Unity::Collections::FormatError Unity::Collections::FixedStringMethods::AppendFormat(::by_ref<T> dest, ::by_ref<U> format, ::by_ref<T0> arg0, ::by_ref<T1> arg1, ::by_ref<T2> arg2,
                                                                                              ::by_ref<T3> arg3, ::by_ref<T4> arg4, ::by_ref<T5> arg5) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "AppendFormat",
                                                             { ::i2c::class_of<T>(), ::i2c::class_of<U>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(),
                                                               ::i2c::class_of<T4>(), ::i2c::class_of<T5>() },
                                                             { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<U>>(), ::i2c::type_of<::by_ref<T0>>(), ::i2c::type_of<::by_ref<T1>>(),
                                                               ::i2c::type_of<::by_ref<T2>>(), ::i2c::type_of<::by_ref<T3>>(), ::i2c::type_of<::by_ref<T4>>(), ::i2c::type_of<::by_ref<T5>>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(),
                                                                                       ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(nullptr, ___internal_method, dest, format, arg0, arg1, arg2, arg3, arg4, arg5);
}
template <typename T, typename U, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
inline ::Unity::Collections::FormatError Unity::Collections::FixedStringMethods::AppendFormat(::by_ref<T> dest, ::by_ref<U> format, ::by_ref<T0> arg0, ::by_ref<T1> arg1, ::by_ref<T2> arg2,
                                                                                              ::by_ref<T3> arg3, ::by_ref<T4> arg4, ::by_ref<T5> arg5, ::by_ref<T6> arg6) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                       { "AppendFormat",
                                         { ::i2c::class_of<T>(), ::i2c::class_of<U>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(),
                                           ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>() },
                                         { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<U>>(), ::i2c::type_of<::by_ref<T0>>(), ::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>(),
                                           ::i2c::type_of<::by_ref<T3>>(), ::i2c::type_of<::by_ref<T4>>(), ::i2c::type_of<::by_ref<T5>>(), ::i2c::type_of<::by_ref<T6>>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(),
                                                                                       ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(nullptr, ___internal_method, dest, format, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}
template <typename T, typename U, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
inline ::Unity::Collections::FormatError Unity::Collections::FixedStringMethods::AppendFormat(::by_ref<T> dest, ::by_ref<U> format, ::by_ref<T0> arg0, ::by_ref<T1> arg1, ::by_ref<T2> arg2,
                                                                                              ::by_ref<T3> arg3, ::by_ref<T4> arg4, ::by_ref<T5> arg5, ::by_ref<T6> arg6, ::by_ref<T7> arg7) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                          { "AppendFormat",
                            { ::i2c::class_of<T>(), ::i2c::class_of<U>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(),
                              ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>() },
                            { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<U>>(), ::i2c::type_of<::by_ref<T0>>(), ::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>(),
                              ::i2c::type_of<::by_ref<T3>>(), ::i2c::type_of<::by_ref<T4>>(), ::i2c::type_of<::by_ref<T5>>(), ::i2c::type_of<::by_ref<T6>>(), ::i2c::type_of<::by_ref<T7>>() } })));
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(),
                                                                          ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(nullptr, ___internal_method, dest, format, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}
template <typename T, typename U, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
inline ::Unity::Collections::FormatError Unity::Collections::FixedStringMethods::AppendFormat(::by_ref<T> dest, ::by_ref<U> format, ::by_ref<T0> arg0, ::by_ref<T1> arg1, ::by_ref<T2> arg2,
                                                                                              ::by_ref<T3> arg3, ::by_ref<T4> arg4, ::by_ref<T5> arg5, ::by_ref<T6> arg6, ::by_ref<T7> arg7,
                                                                                              ::by_ref<T8> arg8) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "AppendFormat",
                                                             { ::i2c::class_of<T>(), ::i2c::class_of<U>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(),
                                                               ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>() },
                                                             { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<U>>(), ::i2c::type_of<::by_ref<T0>>(), ::i2c::type_of<::by_ref<T1>>(),
                                                               ::i2c::type_of<::by_ref<T2>>(), ::i2c::type_of<::by_ref<T3>>(), ::i2c::type_of<::by_ref<T4>>(), ::i2c::type_of<::by_ref<T5>>(),
                                                               ::i2c::type_of<::by_ref<T6>>(), ::i2c::type_of<::by_ref<T7>>(), ::i2c::type_of<::by_ref<T8>>() } })));
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(),
                                                      ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(nullptr, ___internal_method, dest, format, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}
template <typename T, typename U, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
inline ::Unity::Collections::FormatError Unity::Collections::FixedStringMethods::AppendFormat(::by_ref<T> dest, ::by_ref<U> format, ::by_ref<T0> arg0, ::by_ref<T1> arg1, ::by_ref<T2> arg2,
                                                                                              ::by_ref<T3> arg3, ::by_ref<T4> arg4, ::by_ref<T5> arg5, ::by_ref<T6> arg6, ::by_ref<T7> arg7,
                                                                                              ::by_ref<T8> arg8, ::by_ref<T9> arg9) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                              { "AppendFormat",
                                                { ::i2c::class_of<T>(), ::i2c::class_of<U>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(),
                                                  ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>() },
                                                { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<U>>(), ::i2c::type_of<::by_ref<T0>>(), ::i2c::type_of<::by_ref<T1>>(),
                                                  ::i2c::type_of<::by_ref<T2>>(), ::i2c::type_of<::by_ref<T3>>(), ::i2c::type_of<::by_ref<T4>>(), ::i2c::type_of<::by_ref<T5>>(),
                                                  ::i2c::type_of<::by_ref<T6>>(), ::i2c::type_of<::by_ref<T7>>(), ::i2c::type_of<::by_ref<T8>>(), ::i2c::type_of<::by_ref<T9>>() } })));
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>(), ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(),
                                                      ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(nullptr, ___internal_method, dest, format, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}
template <typename T> inline ::Unity::Collections::FormatError Unity::Collections::FixedStringMethods::Append(::by_ref<T> fs, char16_t a, char16_t b) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "Append", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(nullptr, ___internal_method, fs, a, b);
}
template <typename T> inline ::Unity::Collections::FormatError Unity::Collections::FixedStringMethods::Append(::by_ref<T> fs, char16_t a, char16_t b, char16_t c) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                       { "Append", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(nullptr, ___internal_method, fs, a, b, c);
}
template <typename T>
inline ::Unity::Collections::FormatError Unity::Collections::FixedStringMethods::Append(::by_ref<T> fs, char16_t a, char16_t b, char16_t c, char16_t d, char16_t e, char16_t f, char16_t g,
                                                                                        char16_t h) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                              { "Append",
                                                { ::i2c::class_of<T>() },
                                                { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(),
                                                  ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(nullptr, ___internal_method, fs, a, b, c, d, e, f, g, h);
}
template <typename T>
inline ::Unity::Collections::FormatError Unity::Collections::FixedStringMethods::AppendScientific(::by_ref<T> fs, char16_t* source, int32_t sourceLength, int32_t decimalExponent,
                                                                                                  char16_t decimalSeparator) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                              { "AppendScientific",
                                                { ::i2c::class_of<T>() },
                                                { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(nullptr, ___internal_method, fs, source, sourceLength, decimalExponent, decimalSeparator);
}
template <typename T> inline bool Unity::Collections::FixedStringMethods::Found(::by_ref<T> fs, ::by_ref<int32_t> offset, char16_t a, char16_t b, char16_t c) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                          { "Found",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fs, offset, a, b, c);
}
template <typename T>
inline bool Unity::Collections::FixedStringMethods::Found(::by_ref<T> fs, ::by_ref<int32_t> offset, char16_t a, char16_t b, char16_t c, char16_t d, char16_t e, char16_t f, char16_t g, char16_t h) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                       { "Found",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(),
                                           ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fs, offset, a, b, c, d, e, f, g, h);
}
inline void Unity::Collections::FixedStringMethods::CheckSubstringInRange(int32_t strLength, int32_t startIndex, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "CheckSubstringInRange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, strLength, startIndex, length);
}
template <typename T> inline T Unity::Collections::FixedStringMethods::Substring(::by_ref<T> str, int32_t startIndex, int32_t length) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "Substring", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, str, startIndex, length);
}
template <typename T> inline T Unity::Collections::FixedStringMethods::Substring(::by_ref<T> str, int32_t startIndex) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(), { "Substring", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, str, startIndex);
}
inline ::Unity::Collections::NativeText Unity::Collections::FixedStringMethods::Substring(::by_ref<::Unity::Collections::NativeText> str, int32_t startIndex, int32_t length,
                                                                                          ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                                                         { "Substring",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeText>(nullptr, ___internal_method, str, startIndex, length, allocator);
}
inline ::Unity::Collections::NativeText Unity::Collections::FixedStringMethods::Substring(::by_ref<::Unity::Collections::NativeText> str, int32_t startIndex,
                                                                                          ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
          { "Substring", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeText>(nullptr, ___internal_method, str, startIndex, allocator);
}
inline ::Unity::Collections::NativeText Unity::Collections::FixedStringMethods::Substring(::by_ref<::Unity::Collections::NativeText> str, int32_t startIndex, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                              { "Substring", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeText>(nullptr, ___internal_method, str, startIndex, length);
}
inline ::Unity::Collections::NativeText Unity::Collections::FixedStringMethods::Substring(::by_ref<::Unity::Collections::NativeText> str, int32_t startIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "Substring", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeText>(nullptr, ___internal_method, str, startIndex);
}
template <typename T> inline int32_t Unity::Collections::FixedStringMethods::IndexOf(::by_ref<T> fs, ::Unity::Collections::Unicode_Rune rune) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "IndexOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::Unity::Collections::Unicode_Rune>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fs, rune);
}
template <typename T> inline int32_t Unity::Collections::FixedStringMethods::IndexOf(::by_ref<T> fs, uint8_t* bytes, int32_t bytesLen) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "IndexOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fs, bytes, bytesLen);
}
template <typename T> inline int32_t Unity::Collections::FixedStringMethods::IndexOf(::by_ref<T> fs, uint8_t* bytes, int32_t bytesLen, int32_t startIndex, int32_t distance) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
          { "IndexOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fs, bytes, bytesLen, startIndex, distance);
}
template <typename T, typename T2> inline int32_t Unity::Collections::FixedStringMethods::IndexOf(::by_ref<T> fs, ::by_ref<T2> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "IndexOf", { ::i2c::class_of<T>(), ::i2c::class_of<T2>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<T2>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<T2>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fs, other);
}
template <typename T, typename T2> inline int32_t Unity::Collections::FixedStringMethods::IndexOf(::by_ref<T> fs, ::by_ref<T2> other, int32_t startIndex, int32_t distance) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
          { "IndexOf", { ::i2c::class_of<T>(), ::i2c::class_of<T2>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<T2>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<T2>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fs, other, startIndex, distance);
}
template <typename T, typename T2> inline bool Unity::Collections::FixedStringMethods::Contains(::by_ref<T> fs, ::by_ref<T2> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "Contains", { ::i2c::class_of<T>(), ::i2c::class_of<T2>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<T2>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<T2>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fs, other);
}
template <typename T> inline int32_t Unity::Collections::FixedStringMethods::LastIndexOf(::by_ref<T> fs, ::Unity::Collections::Unicode_Rune rune) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "LastIndexOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::Unity::Collections::Unicode_Rune>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fs, rune);
}
template <typename T> inline int32_t Unity::Collections::FixedStringMethods::LastIndexOf(::by_ref<T> fs, uint8_t* bytes, int32_t bytesLen) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "LastIndexOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fs, bytes, bytesLen);
}
template <typename T> inline int32_t Unity::Collections::FixedStringMethods::LastIndexOf(::by_ref<T> fs, uint8_t* bytes, int32_t bytesLen, int32_t startIndex, int32_t distance) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                              { "LastIndexOf",
                                                { ::i2c::class_of<T>() },
                                                { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fs, bytes, bytesLen, startIndex, distance);
}
template <typename T, typename T2> inline int32_t Unity::Collections::FixedStringMethods::LastIndexOf(::by_ref<T> fs, ::by_ref<T2> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "LastIndexOf", { ::i2c::class_of<T>(), ::i2c::class_of<T2>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<T2>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<T2>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fs, other);
}
template <typename T, typename T2> inline int32_t Unity::Collections::FixedStringMethods::LastIndexOf(::by_ref<T> fs, ::by_ref<T2> other, int32_t startIndex, int32_t distance) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "LastIndexOf",
                                                             { ::i2c::class_of<T>(), ::i2c::class_of<T2>() },
                                                             { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<T2>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<T2>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fs, other, startIndex, distance);
}
template <typename T> inline int32_t Unity::Collections::FixedStringMethods::CompareTo(::by_ref<T> fs, uint8_t* bytes, int32_t bytesLen) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "CompareTo", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fs, bytes, bytesLen);
}
template <typename T, typename T2> inline int32_t Unity::Collections::FixedStringMethods::CompareTo(::by_ref<T> fs, ::by_ref<T2> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "CompareTo", { ::i2c::class_of<T>(), ::i2c::class_of<T2>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<T2>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<T2>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fs, other);
}
template <typename T> inline bool Unity::Collections::FixedStringMethods::Equals(::by_ref<T> fs, uint8_t* bytes, int32_t bytesLen) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "Equals", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fs, bytes, bytesLen);
}
template <typename T, typename T2> inline bool Unity::Collections::FixedStringMethods::Equals(::by_ref<T> fs, ::by_ref<T2> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "Equals", { ::i2c::class_of<T>(), ::i2c::class_of<T2>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<T2>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<T2>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fs, other);
}
template <typename T> inline ::Unity::Collections::Unicode_Rune Unity::Collections::FixedStringMethods::Peek(::by_ref<T> fs, int32_t index) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                                                              { "Peek", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::Unicode_Rune>(nullptr, ___internal_method, fs, index);
}
template <typename T> inline ::Unity::Collections::Unicode_Rune Unity::Collections::FixedStringMethods::Read(::by_ref<T> fs, ::by_ref<int32_t> index) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(), { "Read", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::Unicode_Rune>(nullptr, ___internal_method, fs, index);
}
template <typename T> inline ::Unity::Collections::FormatError Unity::Collections::FixedStringMethods::Write(::by_ref<T> fs, ::by_ref<int32_t> index, ::Unity::Collections::Unicode_Rune rune) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                          { "Write", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::Unity::Collections::Unicode_Rune>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(nullptr, ___internal_method, fs, index, rune);
}
template <typename T> inline ::StringW Unity::Collections::FixedStringMethods::ConvertToString(::by_ref<T> fs) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(), { "ConvertToString", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, fs);
}
template <typename T> inline int32_t Unity::Collections::FixedStringMethods::ComputeHashCode(::by_ref<T> fs) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(), { "ComputeHashCode", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fs);
}
template <typename T> inline int32_t Unity::Collections::FixedStringMethods::EffectiveSizeOf(::by_ref<T> fs) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(), { "EffectiveSizeOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fs);
}
template <typename T> inline bool Unity::Collections::FixedStringMethods::StartsWith(::by_ref<T> fs, ::Unity::Collections::Unicode_Rune rune) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "StartsWith", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::Unity::Collections::Unicode_Rune>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fs, rune);
}
template <typename T, typename U> inline bool Unity::Collections::FixedStringMethods::StartsWith(::by_ref<T> fs, ::by_ref<U> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "StartsWith", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<U>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fs, other);
}
template <typename T> inline bool Unity::Collections::FixedStringMethods::EndsWith(::by_ref<T> fs, ::Unity::Collections::Unicode_Rune rune) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "EndsWith", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::Unity::Collections::Unicode_Rune>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fs, rune);
}
template <typename T, typename U> inline bool Unity::Collections::FixedStringMethods::EndsWith(::by_ref<T> fs, ::by_ref<U> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "EndsWith", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<U>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fs, other);
}
template <typename T> inline int32_t Unity::Collections::FixedStringMethods::TrimStartIndex(::by_ref<T> fs) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(), { "TrimStartIndex", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fs);
}
template <typename T> inline int32_t Unity::Collections::FixedStringMethods::TrimStartIndex(::by_ref<T> fs, ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                          { "TrimStartIndex", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fs, trimRunes);
}
template <typename T> inline int32_t Unity::Collections::FixedStringMethods::TrimEndIndex(::by_ref<T> fs) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(), { "TrimEndIndex", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fs);
}
template <typename T> inline int32_t Unity::Collections::FixedStringMethods::TrimEndIndex(::by_ref<T> fs, ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                          { "TrimEndIndex", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fs, trimRunes);
}
template <typename T> inline T Unity::Collections::FixedStringMethods::TrimStart(::by_ref<T> fs) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(), { "TrimStart", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, fs);
}
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeText Unity::Collections::FixedStringMethods::TrimStart(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText> fs,
                                                                                                            ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
          { "TrimStart", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeText>(nullptr, ___internal_method, fs, allocator);
}
inline ::Unity::Collections::NativeText Unity::Collections::FixedStringMethods::TrimStart(::by_ref<::Unity::Collections::NativeText> fs,
                                                                                          ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                          { "TrimStart", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeText>(nullptr, ___internal_method, fs, allocator);
}
template <typename T> inline T Unity::Collections::FixedStringMethods::TrimStart(::by_ref<T> fs, ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                       { "TrimStart", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, fs, trimRunes);
}
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeText Unity::Collections::FixedStringMethods::TrimStart(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText> fs,
                                                                                                            ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                                                                                            ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                       { "TrimStart",
                                         {},
                                         { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
                                           ::i2c::type_of<::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeText>(nullptr, ___internal_method, fs, allocator, trimRunes);
}
inline ::Unity::Collections::NativeText Unity::Collections::FixedStringMethods::TrimStart(::by_ref<::Unity::Collections::NativeText> fs,
                                                                                          ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                                                                          ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "TrimStart",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
                                                               ::i2c::type_of<::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeText>(nullptr, ___internal_method, fs, allocator, trimRunes);
}
template <typename T> inline T Unity::Collections::FixedStringMethods::TrimEnd(::by_ref<T> fs) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(), { "TrimEnd", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, fs);
}
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeText Unity::Collections::FixedStringMethods::TrimEnd(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText> fs,
                                                                                                          ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
          { "TrimEnd", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeText>(nullptr, ___internal_method, fs, allocator);
}
inline ::Unity::Collections::NativeText Unity::Collections::FixedStringMethods::TrimEnd(::by_ref<::Unity::Collections::NativeText> fs,
                                                                                        ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                       { "TrimEnd", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeText>(nullptr, ___internal_method, fs, allocator);
}
template <typename T> inline T Unity::Collections::FixedStringMethods::TrimEnd(::by_ref<T> fs, ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                       { "TrimEnd", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, fs, trimRunes);
}
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeText Unity::Collections::FixedStringMethods::TrimEnd(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText> fs,
                                                                                                          ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                                                                                          ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                       { "TrimEnd",
                                         {},
                                         { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
                                           ::i2c::type_of<::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeText>(nullptr, ___internal_method, fs, allocator, trimRunes);
}
inline ::Unity::Collections::NativeText Unity::Collections::FixedStringMethods::TrimEnd(::by_ref<::Unity::Collections::NativeText> fs, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                                                                        ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "TrimEnd",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
                                                               ::i2c::type_of<::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeText>(nullptr, ___internal_method, fs, allocator, trimRunes);
}
template <typename T> inline T Unity::Collections::FixedStringMethods::Trim(::by_ref<T> fs) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(), { "Trim", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, fs);
}
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeText Unity::Collections::FixedStringMethods::Trim(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText> fs,
                                                                                                       ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                       { "Trim", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeText>(nullptr, ___internal_method, fs, allocator);
}
inline ::Unity::Collections::NativeText Unity::Collections::FixedStringMethods::Trim(::by_ref<::Unity::Collections::NativeText> fs, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                       { "Trim", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeText>(nullptr, ___internal_method, fs, allocator);
}
template <typename T> inline T Unity::Collections::FixedStringMethods::Trim(::by_ref<T> fs, ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                       { "Trim", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, fs, trimRunes);
}
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeText Unity::Collections::FixedStringMethods::Trim(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText> fs,
                                                                                                       ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                                                                                       ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                       { "Trim",
                                         {},
                                         { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
                                           ::i2c::type_of<::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeText>(nullptr, ___internal_method, fs, allocator, trimRunes);
}
inline ::Unity::Collections::NativeText Unity::Collections::FixedStringMethods::Trim(::by_ref<::Unity::Collections::NativeText> fs, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                                                                     ::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune> trimRunes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                                           { "Trim",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(),
                                                               ::i2c::type_of<::System::ReadOnlySpan_1<::Unity::Collections::Unicode_Rune>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeText>(nullptr, ___internal_method, fs, allocator, trimRunes);
}
template <typename T> inline T Unity::Collections::FixedStringMethods::ToLowerAscii(::by_ref<T> fs) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(), { "ToLowerAscii", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, fs);
}
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeText Unity::Collections::FixedStringMethods::ToLowerAscii(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText> fs,
                                                                                                               ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
          { "ToLowerAscii", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeText>(nullptr, ___internal_method, fs, allocator);
}
inline ::Unity::Collections::NativeText Unity::Collections::FixedStringMethods::ToLowerAscii(::by_ref<::Unity::Collections::NativeText> fs,
                                                                                             ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                          { "ToLowerAscii", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeText>(nullptr, ___internal_method, fs, allocator);
}
template <typename T> inline T Unity::Collections::FixedStringMethods::ToUpperAscii(::by_ref<T> fs) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(), { "ToUpperAscii", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, fs);
}
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeText Unity::Collections::FixedStringMethods::ToUpperAscii(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText> fs,
                                                                                                               ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
          { "ToUpperAscii", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeText>(nullptr, ___internal_method, fs, allocator);
}
inline ::Unity::Collections::NativeText Unity::Collections::FixedStringMethods::ToUpperAscii(::by_ref<::Unity::Collections::NativeText> fs,
                                                                                             ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                          { "ToUpperAscii", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeText>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeText>(nullptr, ___internal_method, fs, allocator);
}
template <typename T> inline bool Unity::Collections::FixedStringMethods::ParseLongInternal(::by_ref<T> fs, ::by_ref<int32_t> offset, ::by_ref<int64_t> value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                          { "ParseLongInternal", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int64_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fs, offset, value);
}
template <typename T> inline ::Unity::Collections::ParseError Unity::Collections::FixedStringMethods::Parse(::by_ref<T> fs, ::by_ref<int32_t> offset, ::by_ref<int32_t> output) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                              { "Parse", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::ParseError>(nullptr, ___internal_method, fs, offset, output);
}
template <typename T> inline ::Unity::Collections::ParseError Unity::Collections::FixedStringMethods::Parse(::by_ref<T> fs, ::by_ref<int32_t> offset, ::by_ref<uint32_t> output) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
                                              { "Parse", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::ParseError>(nullptr, ___internal_method, fs, offset, output);
}
template <typename T>
inline ::Unity::Collections::ParseError Unity::Collections::FixedStringMethods::Parse(::by_ref<T> fs, ::by_ref<int32_t> offset, ::by_ref<float_t> output, char16_t decimalSeparator) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::FixedStringMethods*>(),
          { "Parse", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<char16_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::ParseError>(nullptr, ___internal_method, fs, offset, output, decimalSeparator);
}
// Ctor Parameters []
constexpr ::Unity::Collections::FixedStringMethods::FixedStringMethods() {}
