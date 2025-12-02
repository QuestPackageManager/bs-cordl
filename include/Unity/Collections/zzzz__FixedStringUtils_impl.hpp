#pragma once
// IWYU pragma private; include "Unity/Collections/FixedStringUtils.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::ParseError (*)(::ByRef<float_t>, uint64_t, int32_t)>(
    &::Unity::Collections::FixedStringUtils::Base10ToBase2)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x62a3be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedStringUtils*>::get(), "Base10ToBase2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::FixedStringUtils.Base2ToBase10
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<uint64_t>, ::ByRef<int32_t>, float_t)>(&::Unity::Collections::FixedStringUtils::Base2ToBase10)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x62a3ccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedStringUtils*>::get(), "Base2ToBase10", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline ::Unity::Collections::ParseError Unity::Collections::FixedStringUtils::Base10ToBase2(::ByRef<float_t> output, uint64_t mantissa10, int32_t exponent10) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedStringUtils*>::get(), "Base10ToBase2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::ParseError, false>(nullptr, ___internal_method, output, mantissa10, exponent10);
}
inline void Unity::Collections::FixedStringUtils::Base2ToBase10(::ByRef<uint64_t> mantissa10, ::ByRef<int32_t> exponent10, float_t input) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedStringUtils*>::get(), "Base2ToBase10", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mantissa10, exponent10, input);
}
// Ctor Parameters []
constexpr ::Unity::Collections::FixedStringUtils::FixedStringUtils() {}
