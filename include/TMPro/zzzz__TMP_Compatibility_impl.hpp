#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__TMP_Compatibility_def.hpp"
#include "TMPro/zzzz__TMP_Compatibility_def.hpp"
#include "TMPro/zzzz__TextAlignmentOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::__TMP_Compatibility__AnchorPositions::__TMP_Compatibility__AnchorPositions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TMPro::__TMP_Compatibility__AnchorPositions::__TMP_Compatibility__AnchorPositions() {}
constexpr ::TMPro::__TMP_Compatibility__AnchorPositions TMPro::__TMP_Compatibility__AnchorPositions::TopLeft{ static_cast<int32_t>(0x0) };
constexpr ::TMPro::__TMP_Compatibility__AnchorPositions TMPro::__TMP_Compatibility__AnchorPositions::Top{ static_cast<int32_t>(0x1) };
constexpr ::TMPro::__TMP_Compatibility__AnchorPositions TMPro::__TMP_Compatibility__AnchorPositions::TopRight{ static_cast<int32_t>(0x2) };
constexpr ::TMPro::__TMP_Compatibility__AnchorPositions TMPro::__TMP_Compatibility__AnchorPositions::Left{ static_cast<int32_t>(0x3) };
constexpr ::TMPro::__TMP_Compatibility__AnchorPositions TMPro::__TMP_Compatibility__AnchorPositions::Center{ static_cast<int32_t>(0x4) };
constexpr ::TMPro::__TMP_Compatibility__AnchorPositions TMPro::__TMP_Compatibility__AnchorPositions::Right{ static_cast<int32_t>(0x5) };
constexpr ::TMPro::__TMP_Compatibility__AnchorPositions TMPro::__TMP_Compatibility__AnchorPositions::BottomLeft{ static_cast<int32_t>(0x6) };
constexpr ::TMPro::__TMP_Compatibility__AnchorPositions TMPro::__TMP_Compatibility__AnchorPositions::Bottom{ static_cast<int32_t>(0x7) };
constexpr ::TMPro::__TMP_Compatibility__AnchorPositions TMPro::__TMP_Compatibility__AnchorPositions::BottomRight{ static_cast<int32_t>(0x8) };
constexpr ::TMPro::__TMP_Compatibility__AnchorPositions TMPro::__TMP_Compatibility__AnchorPositions::BaseLine{ static_cast<int32_t>(0x9) };
constexpr ::TMPro::__TMP_Compatibility__AnchorPositions TMPro::__TMP_Compatibility__AnchorPositions::None{ static_cast<int32_t>(0xa) };
//  Writing Method size for method: ::TMPro::TMP_Compatibility.ConvertTextAlignmentEnumValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TextAlignmentOptions (*)(::TMPro::TextAlignmentOptions)>(
    &::TMPro::TMP_Compatibility::ConvertTextAlignmentEnumValues)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2bfec1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Compatibility*>::get(), "ConvertTextAlignmentEnumValues", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TextAlignmentOptions>::get() })));
    return ___internal_method;
  }
};
inline ::TMPro::TextAlignmentOptions TMPro::TMP_Compatibility::ConvertTextAlignmentEnumValues(::TMPro::TextAlignmentOptions oldValue) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Compatibility*>::get(), "ConvertTextAlignmentEnumValues", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TextAlignmentOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TextAlignmentOptions, false>(nullptr, ___internal_method, oldValue);
}
// Ctor Parameters []
constexpr ::TMPro::TMP_Compatibility::TMP_Compatibility() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
