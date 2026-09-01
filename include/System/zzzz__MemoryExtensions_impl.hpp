#pragma once
// IWYU pragma private; include "System\MemoryExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__MemoryExtensions_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__StringComparison_def.hpp"
//  Writing Method size for method: ::System::MemoryExtensions.EqualsOrdinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>)>(&::System::MemoryExtensions::EqualsOrdinal)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5c4a4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(),
                                                             { "EqualsOrdinal", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MemoryExtensions.EqualsOrdinalIgnoreCase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>)>(&::System::MemoryExtensions::EqualsOrdinalIgnoreCase)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5c4a5ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(),
                                                { "EqualsOrdinalIgnoreCase", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MemoryExtensions.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, char16_t)>(&::System::MemoryExtensions::Contains)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c4a6ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(), { "Contains", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MemoryExtensions.ToUpperInvariant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Span_1<char16_t>)>(&::System::MemoryExtensions::ToUpperInvariant)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5c4a750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(),
                                                             { "ToUpperInvariant", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Span_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MemoryExtensions.EndsWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::StringComparison)>(
    &::System::MemoryExtensions::EndsWith)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x5c4a8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::MemoryExtensions*>(),
            { "EndsWith", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::StringComparison>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MemoryExtensions.AsSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (*)(::StringW)>(&::System::MemoryExtensions::AsSpan)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c4abf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(), { "AsSpan", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MemoryExtensions.AsSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (*)(::StringW, int32_t)>(&::System::MemoryExtensions::AsSpan)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c4ac50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(), { "AsSpan", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MemoryExtensions.AsSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (*)(::StringW, int32_t, int32_t)>(&::System::MemoryExtensions::AsSpan)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5c4acd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(), { "AsSpan", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MemoryExtensions.Trim
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::MemoryExtensions::Trim)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c41394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(), { "Trim", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MemoryExtensions.TrimStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::MemoryExtensions::TrimStart)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5c4ad64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(), { "TrimStart", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MemoryExtensions.TrimEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::MemoryExtensions::TrimEnd)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5c4ae54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(), { "TrimEnd", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
inline bool System::MemoryExtensions::EqualsOrdinal(::System::ReadOnlySpan_1<char16_t> span, ::System::ReadOnlySpan_1<char16_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(),
                                                           { "EqualsOrdinal", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, span, value);
}
inline bool System::MemoryExtensions::EqualsOrdinalIgnoreCase(::System::ReadOnlySpan_1<char16_t> span, ::System::ReadOnlySpan_1<char16_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(),
                                              { "EqualsOrdinalIgnoreCase", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, span, value);
}
inline bool System::MemoryExtensions::Contains(::System::ReadOnlySpan_1<char16_t> source, char16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(), { "Contains", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value);
}
inline int32_t System::MemoryExtensions::ToUpperInvariant(::System::ReadOnlySpan_1<char16_t> source, ::System::Span_1<char16_t> destination) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(),
                                                           { "ToUpperInvariant", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Span_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, destination);
}
inline bool System::MemoryExtensions::EndsWith(::System::ReadOnlySpan_1<char16_t> span, ::System::ReadOnlySpan_1<char16_t> value, ::System::StringComparison comparisonType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::MemoryExtensions*>(),
          { "EndsWith", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::StringComparison>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, span, value, comparisonType);
}
template <typename T> inline ::System::Span_1<T> System::MemoryExtensions::AsSpan(::ArrayW<T> array, int32_t start) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(), { "AsSpan", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Span_1<T>>(nullptr, ___internal_method, array, start);
}
inline ::System::ReadOnlySpan_1<char16_t> System::MemoryExtensions::AsSpan(::StringW text) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(), { "AsSpan", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(nullptr, ___internal_method, text);
}
inline ::System::ReadOnlySpan_1<char16_t> System::MemoryExtensions::AsSpan(::StringW text, int32_t start) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(), { "AsSpan", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(nullptr, ___internal_method, text, start);
}
inline ::System::ReadOnlySpan_1<char16_t> System::MemoryExtensions::AsSpan(::StringW text, int32_t start, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(), { "AsSpan", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(nullptr, ___internal_method, text, start, length);
}
inline ::System::ReadOnlySpan_1<char16_t> System::MemoryExtensions::Trim(::System::ReadOnlySpan_1<char16_t> span) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(), { "Trim", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(nullptr, ___internal_method, span);
}
inline ::System::ReadOnlySpan_1<char16_t> System::MemoryExtensions::TrimStart(::System::ReadOnlySpan_1<char16_t> span) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(), { "TrimStart", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(nullptr, ___internal_method, span);
}
inline ::System::ReadOnlySpan_1<char16_t> System::MemoryExtensions::TrimEnd(::System::ReadOnlySpan_1<char16_t> span) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(), { "TrimEnd", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(nullptr, ___internal_method, span);
}
template <typename T> inline int32_t System::MemoryExtensions::IndexOf(::System::Span_1<T> span, T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(), { "IndexOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Span_1<T>>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, span, value);
}
template <typename T> inline int32_t System::MemoryExtensions::IndexOf(::System::Span_1<T> span, ::System::ReadOnlySpan_1<T> value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(),
                                                           { "IndexOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Span_1<T>>(), ::i2c::type_of<::System::ReadOnlySpan_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, span, value);
}
template <typename T> inline int32_t System::MemoryExtensions::IndexOf(::System::ReadOnlySpan_1<T> span, T value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(), { "IndexOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::ReadOnlySpan_1<T>>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, span, value);
}
template <typename T> inline int32_t System::MemoryExtensions::IndexOfAny(::System::ReadOnlySpan_1<T> span, ::System::ReadOnlySpan_1<T> values) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(),
                                              { "IndexOfAny", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::ReadOnlySpan_1<T>>(), ::i2c::type_of<::System::ReadOnlySpan_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, span, values);
}
template <typename T> inline bool System::MemoryExtensions::SequenceEqual(::System::ReadOnlySpan_1<T> span, ::System::ReadOnlySpan_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(),
                                              { "SequenceEqual", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::ReadOnlySpan_1<T>>(), ::i2c::type_of<::System::ReadOnlySpan_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, span, other);
}
template <typename T> inline bool System::MemoryExtensions::StartsWith(::System::ReadOnlySpan_1<T> span, ::System::ReadOnlySpan_1<T> value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(),
                                              { "StartsWith", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::ReadOnlySpan_1<T>>(), ::i2c::type_of<::System::ReadOnlySpan_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, span, value);
}
template <typename T> inline bool System::MemoryExtensions::EndsWith(::System::ReadOnlySpan_1<T> span, ::System::ReadOnlySpan_1<T> value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(),
                                              { "EndsWith", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::ReadOnlySpan_1<T>>(), ::i2c::type_of<::System::ReadOnlySpan_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, span, value);
}
template <typename T> inline ::System::Span_1<T> System::MemoryExtensions::AsSpan(::ArrayW<T> array) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(), { "AsSpan", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Span_1<T>>(nullptr, ___internal_method, array);
}
template <typename T> inline ::System::Span_1<T> System::MemoryExtensions::AsSpan(::ArrayW<T> array, int32_t start, int32_t length) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(),
                                                           { "AsSpan", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Span_1<T>>(nullptr, ___internal_method, array, start, length);
}
template <typename T> inline void System::MemoryExtensions::CopyTo(::ArrayW<T> source, ::System::Span_1<T> destination) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(), { "CopyTo", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Span_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, destination);
}
template <typename T> inline bool System::MemoryExtensions::IsTypeComparableAsBytes(::by_ref<uint64_t> size) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MemoryExtensions*>(), { "IsTypeComparableAsBytes", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<uint64_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, size);
}
// Ctor Parameters []
constexpr ::System::MemoryExtensions::MemoryExtensions() {}
