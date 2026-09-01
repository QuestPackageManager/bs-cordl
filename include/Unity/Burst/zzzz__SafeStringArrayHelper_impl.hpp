#pragma once
// IWYU pragma private; include "Unity\Burst\SafeStringArrayHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/zzzz__SafeStringArrayHelper_def.hpp"
//  Writing Method size for method: ::Unity::Burst::SafeStringArrayHelper.SerialiseStringArraySafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<::StringW>)>(&::Unity::Burst::SafeStringArrayHelper::SerialiseStringArraySafe)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6471b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::SafeStringArrayHelper*>(), { "SerialiseStringArraySafe", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::SafeStringArrayHelper.DeserialiseStringArraySafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::StringW)>(&::Unity::Burst::SafeStringArrayHelper::DeserialiseStringArraySafe)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x6471da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::SafeStringArrayHelper*>(), { "DeserialiseStringArraySafe", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::StringW Unity::Burst::SafeStringArrayHelper::SerialiseStringArraySafe(::ArrayW<::StringW> array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::SafeStringArrayHelper*>(), { "SerialiseStringArraySafe", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, array);
}
inline ::ArrayW<::StringW> Unity::Burst::SafeStringArrayHelper::DeserialiseStringArraySafe(::StringW input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::SafeStringArrayHelper*>(), { "DeserialiseStringArraySafe", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, input);
}
// Ctor Parameters []
constexpr ::Unity::Burst::SafeStringArrayHelper::SafeStringArrayHelper() {}
