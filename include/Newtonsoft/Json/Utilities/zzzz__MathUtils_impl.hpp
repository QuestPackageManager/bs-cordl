#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/MathUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__MathUtils_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::MathUtils.IntLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t)>(&::Newtonsoft::Json::Utilities::MathUtils::IntLength)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5d2b450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::MathUtils*>(), { "IntLength", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::MathUtils.IntToHex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(int32_t)>(&::Newtonsoft::Json::Utilities::MathUtils::IntToHex)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d2b614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::MathUtils*>(), { "IntToHex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::MathUtils.Min
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (*)(::System::Nullable_1<int32_t>, ::System::Nullable_1<int32_t>)>(
    &::Newtonsoft::Json::Utilities::MathUtils::Min)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5d2b62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::MathUtils*>(),
                                                             { "Min", {}, { ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::MathUtils.Max
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (*)(::System::Nullable_1<int32_t>, ::System::Nullable_1<int32_t>)>(
    &::Newtonsoft::Json::Utilities::MathUtils::Max)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5d2b6fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::MathUtils*>(),
                                                             { "Max", {}, { ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::MathUtils.Max
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<double_t> (*)(::System::Nullable_1<double_t>, ::System::Nullable_1<double_t>)>(
    &::Newtonsoft::Json::Utilities::MathUtils::Max)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5d2b7cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::MathUtils*>(),
                                                             { "Max", {}, { ::i2c::type_of<::System::Nullable_1<double_t>>(), ::i2c::type_of<::System::Nullable_1<double_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::MathUtils.ApproxEquals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(double_t, double_t)>(&::Newtonsoft::Json::Utilities::MathUtils::ApproxEquals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5d2b8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::MathUtils*>(), { "ApproxEquals", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
inline int32_t Newtonsoft::Json::Utilities::MathUtils::IntLength(uint64_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::MathUtils*>(), { "IntLength", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, i);
}
inline char16_t Newtonsoft::Json::Utilities::MathUtils::IntToHex(int32_t n) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::MathUtils*>(), { "IntToHex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, n);
}
inline ::System::Nullable_1<int32_t> Newtonsoft::Json::Utilities::MathUtils::Min(::System::Nullable_1<int32_t> val1, ::System::Nullable_1<int32_t> val2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::MathUtils*>(),
                                                           { "Min", {}, { ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(nullptr, ___internal_method, val1, val2);
}
inline ::System::Nullable_1<int32_t> Newtonsoft::Json::Utilities::MathUtils::Max(::System::Nullable_1<int32_t> val1, ::System::Nullable_1<int32_t> val2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::MathUtils*>(),
                                                           { "Max", {}, { ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(nullptr, ___internal_method, val1, val2);
}
inline ::System::Nullable_1<double_t> Newtonsoft::Json::Utilities::MathUtils::Max(::System::Nullable_1<double_t> val1, ::System::Nullable_1<double_t> val2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::MathUtils*>(),
                                                           { "Max", {}, { ::i2c::type_of<::System::Nullable_1<double_t>>(), ::i2c::type_of<::System::Nullable_1<double_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<double_t>>(nullptr, ___internal_method, val1, val2);
}
inline bool Newtonsoft::Json::Utilities::MathUtils::ApproxEquals(double_t d1, double_t d2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::MathUtils*>(), { "ApproxEquals", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d1, d2);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::MathUtils::MathUtils() {}
