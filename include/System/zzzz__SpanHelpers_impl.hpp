#pragma once
// IWYU pragma private; include "System/SpanHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__SpanHelpers_def.hpp"
#include "System/Globalization/zzzz__CompareInfo_def.hpp"
#include "System/Numerics/zzzz__Vector_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::SpanHelpers.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<uint8_t>, int32_t, ::by_ref<uint8_t>, int32_t)>(&::System::SpanHelpers::IndexOf)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5c5a3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(),
                                         { "IndexOf", {}, { ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SpanHelpers.IndexOfAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<uint8_t>, int32_t, ::by_ref<uint8_t>, int32_t)>(&::System::SpanHelpers::IndexOfAny)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c5a5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(),
                                         { "IndexOfAny", {}, { ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SpanHelpers.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<uint8_t>, uint8_t, int32_t)>(&::System::SpanHelpers::IndexOf)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5c5a478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(), { "IndexOf", {}, { ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SpanHelpers.SequenceEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<uint8_t>, ::by_ref<uint8_t>, uint64_t)>(&::System::SpanHelpers::SequenceEqual)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c5a64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(),
                                                             { "SequenceEqual", {}, { ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SpanHelpers.SequenceCompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<char16_t>, int32_t, ::by_ref<char16_t>, int32_t)>(&::System::SpanHelpers::SequenceCompareTo)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5c5a6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(),
                            { "SequenceCompareTo", {}, { ::i2c::type_of<::by_ref<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<char16_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SpanHelpers.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<char16_t>, char16_t, int32_t)>(&::System::SpanHelpers::IndexOf)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5c5a818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(), { "IndexOf", {}, { ::i2c::type_of<::by_ref<char16_t>>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SpanHelpers.LastIndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<char16_t>, char16_t, int32_t)>(&::System::SpanHelpers::LastIndexOf)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5c5a978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(), { "LastIndexOf", {}, { ::i2c::type_of<::by_ref<char16_t>>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SpanHelpers.LocateFirstFoundChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Numerics::Vector_1<uint16_t>)>(&::System::SpanHelpers::LocateFirstFoundChar)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5c5ab10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(), { "LocateFirstFoundChar", {}, { ::i2c::type_of<::System::Numerics::Vector_1<uint16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SpanHelpers.LocateFirstFoundChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t)>(&::System::SpanHelpers::LocateFirstFoundChar)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c5ad24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(), { "LocateFirstFoundChar", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SpanHelpers.LocateLastFoundChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Numerics::Vector_1<uint16_t>)>(&::System::SpanHelpers::LocateLastFoundChar)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5c5ad44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(), { "LocateLastFoundChar", {}, { ::i2c::type_of<::System::Numerics::Vector_1<uint16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SpanHelpers.LocateLastFoundChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t)>(&::System::SpanHelpers::LocateLastFoundChar)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5c5af54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(), { "LocateLastFoundChar", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SpanHelpers.EndsWithCultureHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::CompareInfo*)>(
    &::System::SpanHelpers::EndsWithCultureHelper)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5c5af80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(), { "EndsWithCultureHelper",
                                                                                      {},
                                                                                      { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                        ::i2c::type_of<::System::Globalization::CompareInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SpanHelpers.EndsWithCultureIgnoreCaseHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::CompareInfo*)>(
    &::System::SpanHelpers::EndsWithCultureIgnoreCaseHelper)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5c5b12c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(), { "EndsWithCultureIgnoreCaseHelper",
                                                                                      {},
                                                                                      { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                        ::i2c::type_of<::System::Globalization::CompareInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SpanHelpers.EndsWithOrdinalIgnoreCaseHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>)>(&::System::SpanHelpers::EndsWithOrdinalIgnoreCaseHelper)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5c5b26c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(),
                                         { "EndsWithOrdinalIgnoreCaseHelper", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SpanHelpers.ClearWithoutReferences
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<uint8_t>, uint64_t)>(&::System::SpanHelpers::ClearWithoutReferences)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5c5b364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(), { "ClearWithoutReferences", {}, { ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SpanHelpers.ClearWithReferences
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>, uint64_t)>(&::System::SpanHelpers::ClearWithReferences)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c5b590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(), { "ClearWithReferences", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
inline int32_t System::SpanHelpers::IndexOf(::by_ref<uint8_t> searchSpace, int32_t searchSpaceLength, ::by_ref<uint8_t> value, int32_t valueLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(),
                                              { "IndexOf", {}, { ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, searchSpace, searchSpaceLength, value, valueLength);
}
inline int32_t System::SpanHelpers::IndexOfAny(::by_ref<uint8_t> searchSpace, int32_t searchSpaceLength, ::by_ref<uint8_t> value, int32_t valueLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(),
                                       { "IndexOfAny", {}, { ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, searchSpace, searchSpaceLength, value, valueLength);
}
inline int32_t System::SpanHelpers::IndexOf(::by_ref<uint8_t> searchSpace, uint8_t value, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(), { "IndexOf", {}, { ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, searchSpace, value, length);
}
inline bool System::SpanHelpers::SequenceEqual(::by_ref<uint8_t> first, ::by_ref<uint8_t> second, uint64_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(),
                                                           { "SequenceEqual", {}, { ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, first, second, length);
}
inline int32_t System::SpanHelpers::SequenceCompareTo(::by_ref<char16_t> first, int32_t firstLength, ::by_ref<char16_t> second, int32_t secondLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(),
                          { "SequenceCompareTo", {}, { ::i2c::type_of<::by_ref<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<char16_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, first, firstLength, second, secondLength);
}
inline int32_t System::SpanHelpers::IndexOf(::by_ref<char16_t> searchSpace, char16_t value, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(), { "IndexOf", {}, { ::i2c::type_of<::by_ref<char16_t>>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, searchSpace, value, length);
}
inline int32_t System::SpanHelpers::LastIndexOf(::by_ref<char16_t> searchSpace, char16_t value, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(), { "LastIndexOf", {}, { ::i2c::type_of<::by_ref<char16_t>>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, searchSpace, value, length);
}
inline int32_t System::SpanHelpers::LocateFirstFoundChar(::System::Numerics::Vector_1<uint16_t> match) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(), { "LocateFirstFoundChar", {}, { ::i2c::type_of<::System::Numerics::Vector_1<uint16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, match);
}
inline int32_t System::SpanHelpers::LocateFirstFoundChar(uint64_t match) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(), { "LocateFirstFoundChar", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, match);
}
inline int32_t System::SpanHelpers::LocateLastFoundChar(::System::Numerics::Vector_1<uint16_t> match) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(), { "LocateLastFoundChar", {}, { ::i2c::type_of<::System::Numerics::Vector_1<uint16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, match);
}
inline int32_t System::SpanHelpers::LocateLastFoundChar(uint64_t match) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(), { "LocateLastFoundChar", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, match);
}
template <typename T> inline int32_t System::SpanHelpers::IndexOf(::by_ref<T> searchSpace, int32_t searchSpaceLength, ::by_ref<T> value, int32_t valueLength) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(),
                          { "IndexOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, searchSpace, searchSpaceLength, value, valueLength);
}
template <typename T> inline int32_t System::SpanHelpers::IndexOf(::by_ref<T> searchSpace, T value, int32_t length) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(), { "IndexOf", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<T>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, searchSpace, value, length);
}
template <typename T> inline int32_t System::SpanHelpers::IndexOfAny(::by_ref<T> searchSpace, int32_t searchSpaceLength, ::by_ref<T> value, int32_t valueLength) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(),
                          { "IndexOfAny", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, searchSpace, searchSpaceLength, value, valueLength);
}
template <typename T> inline bool System::SpanHelpers::SequenceEqual(::by_ref<T> first, ::by_ref<T> second, int32_t length) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(),
                                              { "SequenceEqual", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, first, second, length);
}
inline bool System::SpanHelpers::EndsWithCultureHelper(::System::ReadOnlySpan_1<char16_t> span, ::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::CompareInfo* compareInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(), { "EndsWithCultureHelper",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                             ::i2c::type_of<::System::Globalization::CompareInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, span, value, compareInfo);
}
inline bool System::SpanHelpers::EndsWithCultureIgnoreCaseHelper(::System::ReadOnlySpan_1<char16_t> span, ::System::ReadOnlySpan_1<char16_t> value, ::System::Globalization::CompareInfo* compareInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(), { "EndsWithCultureIgnoreCaseHelper",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(),
                                                                                             ::i2c::type_of<::System::Globalization::CompareInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, span, value, compareInfo);
}
inline bool System::SpanHelpers::EndsWithOrdinalIgnoreCaseHelper(::System::ReadOnlySpan_1<char16_t> span, ::System::ReadOnlySpan_1<char16_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(),
                                       { "EndsWithOrdinalIgnoreCaseHelper", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, span, value);
}
inline void System::SpanHelpers::ClearWithoutReferences(::by_ref<uint8_t> b, uint64_t byteLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(), { "ClearWithoutReferences", {}, { ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, b, byteLength);
}
inline void System::SpanHelpers::ClearWithReferences(::by_ref<::System::IntPtr> ip, uint64_t pointerSizeLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SpanHelpers*>(), { "ClearWithReferences", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ip, pointerSizeLength);
}
// Ctor Parameters []
constexpr ::System::SpanHelpers::SpanHelpers() {}
