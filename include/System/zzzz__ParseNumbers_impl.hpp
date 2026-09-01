#pragma once
// IWYU pragma private; include "System\ParseNumbers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ParseNumbers_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::ParseNumbers.StringToLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::ReadOnlySpan_1<char16_t>, int32_t, int32_t)>(&::System::ParseNumbers::StringToLong)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c5800c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ParseNumbers*>(),
                                                             { "StringToLong", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ParseNumbers.StringToLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::ReadOnlySpan_1<char16_t>, int32_t, int32_t, ::by_ref<int32_t>)>(&::System::ParseNumbers::StringToLong)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x5c58024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::ParseNumbers*>(),
                         { "StringToLong", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ParseNumbers.StringToInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<char16_t>, int32_t, int32_t)>(&::System::ParseNumbers::StringToInt)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c5860c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ParseNumbers*>(),
                                                             { "StringToInt", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ParseNumbers.StringToInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<char16_t>, int32_t, int32_t, ::by_ref<int32_t>)>(&::System::ParseNumbers::StringToInt)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x5c58624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::ParseNumbers*>(),
                         { "StringToInt", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ParseNumbers.IntToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, int32_t, int32_t, char16_t, int32_t)>(&::System::ParseNumbers::IntToString)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x5c58bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::ParseNumbers*>(),
                            { "IntToString", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ParseNumbers.LongToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int64_t, int32_t, int32_t, char16_t, int32_t)>(&::System::ParseNumbers::LongToString)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x5c58f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::ParseNumbers*>(),
                            { "LongToString", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ParseNumbers.EatWhiteSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<int32_t>)>(&::System::ParseNumbers::EatWhiteSpace)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5c5838c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::ParseNumbers*>(), { "EatWhiteSpace", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ParseNumbers.GrabLongs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int32_t, ::System::ReadOnlySpan_1<char16_t>, ::by_ref<int32_t>, bool)>(&::System::ParseNumbers::GrabLongs)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5c5844c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::ParseNumbers*>(),
                            { "GrabLongs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ParseNumbers.GrabInts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::System::ReadOnlySpan_1<char16_t>, ::by_ref<int32_t>, bool)>(&::System::ParseNumbers::GrabInts)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5c589e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::ParseNumbers*>(),
                            { "GrabInts", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ParseNumbers.ThrowOverflowInt32Exception
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::ParseNumbers::ThrowOverflowInt32Exception)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c5936c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ParseNumbers*>(), { "ThrowOverflowInt32Exception", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ParseNumbers.ThrowOverflowInt64Exception
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::ParseNumbers::ThrowOverflowInt64Exception)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c592dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ParseNumbers*>(), { "ThrowOverflowInt64Exception", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ParseNumbers.ThrowOverflowUInt32Exception
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::ParseNumbers::ThrowOverflowUInt32Exception)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c593b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ParseNumbers*>(), { "ThrowOverflowUInt32Exception", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ParseNumbers.ThrowOverflowUInt64Exception
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::ParseNumbers::ThrowOverflowUInt64Exception)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c59324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ParseNumbers*>(), { "ThrowOverflowUInt64Exception", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ParseNumbers.IsDigit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t, int32_t, ::by_ref<int32_t>)>(&::System::ParseNumbers::IsDigit)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5c593fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::ParseNumbers*>(), { "IsDigit", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
inline int64_t System::ParseNumbers::StringToLong(::System::ReadOnlySpan_1<char16_t> s, int32_t radix, int32_t flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ParseNumbers*>(),
                                                           { "StringToLong", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, s, radix, flags);
}
inline int64_t System::ParseNumbers::StringToLong(::System::ReadOnlySpan_1<char16_t> s, int32_t radix, int32_t flags, ::by_ref<int32_t> currPos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::ParseNumbers*>(),
                       { "StringToLong", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, s, radix, flags, currPos);
}
inline int32_t System::ParseNumbers::StringToInt(::System::ReadOnlySpan_1<char16_t> s, int32_t radix, int32_t flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ParseNumbers*>(),
                                                           { "StringToInt", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s, radix, flags);
}
inline int32_t System::ParseNumbers::StringToInt(::System::ReadOnlySpan_1<char16_t> s, int32_t radix, int32_t flags, ::by_ref<int32_t> currPos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::ParseNumbers*>(),
                          { "StringToInt", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s, radix, flags, currPos);
}
inline ::StringW System::ParseNumbers::IntToString(int32_t n, int32_t radix, int32_t width, char16_t paddingChar, int32_t flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::ParseNumbers*>(),
                          { "IntToString", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, n, radix, width, paddingChar, flags);
}
inline ::StringW System::ParseNumbers::LongToString(int64_t n, int32_t radix, int32_t width, char16_t paddingChar, int32_t flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::ParseNumbers*>(),
                          { "LongToString", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, n, radix, width, paddingChar, flags);
}
inline void System::ParseNumbers::EatWhiteSpace(::System::ReadOnlySpan_1<char16_t> s, ::by_ref<int32_t> i) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::ParseNumbers*>(), { "EatWhiteSpace", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, s, i);
}
inline int64_t System::ParseNumbers::GrabLongs(int32_t radix, ::System::ReadOnlySpan_1<char16_t> s, ::by_ref<int32_t> i, bool isUnsigned) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::ParseNumbers*>(),
                          { "GrabLongs", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, radix, s, i, isUnsigned);
}
inline int32_t System::ParseNumbers::GrabInts(int32_t radix, ::System::ReadOnlySpan_1<char16_t> s, ::by_ref<int32_t> i, bool isUnsigned) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::ParseNumbers*>(),
                          { "GrabInts", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, radix, s, i, isUnsigned);
}
inline void System::ParseNumbers::ThrowOverflowInt32Exception() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ParseNumbers*>(), { "ThrowOverflowInt32Exception", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::ParseNumbers::ThrowOverflowInt64Exception() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ParseNumbers*>(), { "ThrowOverflowInt64Exception", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::ParseNumbers::ThrowOverflowUInt32Exception() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ParseNumbers*>(), { "ThrowOverflowUInt32Exception", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::ParseNumbers::ThrowOverflowUInt64Exception() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ParseNumbers*>(), { "ThrowOverflowUInt64Exception", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool System::ParseNumbers::IsDigit(char16_t c, int32_t radix, ::by_ref<int32_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::ParseNumbers*>(), { "IsDigit", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c, radix, result);
}
// Ctor Parameters []
constexpr ::System::ParseNumbers::ParseNumbers() {}
