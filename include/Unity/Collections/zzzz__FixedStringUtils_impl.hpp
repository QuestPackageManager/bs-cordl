#pragma once
// IWYU pragma private; include "Unity\Collections\FixedStringUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__FixedStringUtils_def.hpp"
#include "Unity/Collections/zzzz__FixedStringUtils_def.hpp"
#include "Unity/Collections/zzzz__ParseError_def.hpp"
constexpr uint32_t& Unity::Collections::FixedStringUtils_UintFloatUnion::__cordl_internal_get_uintValue() {
  return this->___uintValue;
}
constexpr uint32_t const& Unity::Collections::FixedStringUtils_UintFloatUnion::__cordl_internal_get_uintValue() const {
  return this->___uintValue;
}
constexpr void Unity::Collections::FixedStringUtils_UintFloatUnion::__cordl_internal_set_uintValue(uint32_t value) {
  this->___uintValue = value;
}
constexpr float_t& Unity::Collections::FixedStringUtils_UintFloatUnion::__cordl_internal_get_floatValue() {
  return this->___floatValue;
}
constexpr float_t const& Unity::Collections::FixedStringUtils_UintFloatUnion::__cordl_internal_get_floatValue() const {
  return this->___floatValue;
}
constexpr void Unity::Collections::FixedStringUtils_UintFloatUnion::__cordl_internal_set_floatValue(float_t value) {
  this->___floatValue = value;
}
// Ctor Parameters [CppParam { name: "uintValue", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "floatValue", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::FixedStringUtils_UintFloatUnion::FixedStringUtils_UintFloatUnion(uint32_t uintValue, float_t floatValue) noexcept {
  this->uintValue = uintValue;
  this->floatValue = floatValue;
}
// Ctor Parameters []
constexpr ::Unity::Collections::FixedStringUtils_UintFloatUnion::FixedStringUtils_UintFloatUnion() {}
//  Writing Method size for method: ::Unity::Collections::FixedStringUtils.Base10ToBase2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::ParseError (*)(::by_ref<float_t>, uint64_t, int32_t)>(&::Unity::Collections::FixedStringUtils::Base10ToBase2)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x64c1df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringUtils*>(),
                                                             { "Base10ToBase2", {}, { ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedStringUtils.Base2ToBase10
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<uint64_t>, ::by_ref<int32_t>, float_t)>(&::Unity::Collections::FixedStringUtils::Base2ToBase10)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x64c1ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringUtils*>(),
                                                             { "Base2ToBase10", {}, { ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline ::Unity::Collections::ParseError Unity::Collections::FixedStringUtils::Base10ToBase2(::by_ref<float_t> output, uint64_t mantissa10, int32_t exponent10) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringUtils*>(),
                                                           { "Base10ToBase2", {}, { ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::ParseError>(nullptr, ___internal_method, output, mantissa10, exponent10);
}
inline void Unity::Collections::FixedStringUtils::Base2ToBase10(::by_ref<uint64_t> mantissa10, ::by_ref<int32_t> exponent10, float_t input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedStringUtils*>(),
                                                           { "Base2ToBase10", {}, { ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mantissa10, exponent10, input);
}
// Ctor Parameters []
constexpr ::Unity::Collections::FixedStringUtils::FixedStringUtils() {}
