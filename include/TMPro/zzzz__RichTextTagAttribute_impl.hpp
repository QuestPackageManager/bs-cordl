#pragma once
// IWYU pragma private; include "TMPro/RichTextTagAttribute.hpp"
#include "TMPro/zzzz__TagUnitType_impl.hpp"
#include "TMPro/zzzz__TagValueType_impl.hpp"
#include "TMPro/zzzz__RichTextTagAttribute_def.hpp"
//  Writing Method size for method: ::TMPro::RichTextTagAttribute.get_Default
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::RichTextTagAttribute (*)()>(&::TMPro::RichTextTagAttribute::get_Default)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6dc374c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::RichTextTagAttribute>(), { "get_Default", {}, {} })));
    return ___internal_method;
  }
};
inline void TMPro::RichTextTagAttribute::setStaticF_k_Default(::TMPro::RichTextTagAttribute value) {
  ::cordl_internals::setStaticField<::TMPro::RichTextTagAttribute, "k_Default", ::TMPro::RichTextTagAttribute>(std::forward<::TMPro::RichTextTagAttribute>(value));
}
inline ::TMPro::RichTextTagAttribute TMPro::RichTextTagAttribute::getStaticF_k_Default() {
  return ::cordl_internals::getStaticField<::TMPro::RichTextTagAttribute, "k_Default", ::TMPro::RichTextTagAttribute>();
}
inline ::TMPro::RichTextTagAttribute TMPro::RichTextTagAttribute::get_Default() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::RichTextTagAttribute>(), { "get_Default", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::RichTextTagAttribute>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "nameHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "valueHashCode", ty: "int32_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "valueType", ty: "::TMPro::TagValueType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "valueStartIndex", ty: "int32_t",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "valueLength", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "unitType", ty:
// "::TMPro::TagUnitType", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::TMPro::RichTextTagAttribute::RichTextTagAttribute(int32_t nameHashCode, int32_t valueHashCode, ::TMPro::TagValueType valueType, int32_t valueStartIndex, int32_t valueLength,
                                                              ::TMPro::TagUnitType unitType) noexcept {
  this->nameHashCode = nameHashCode;
  this->valueHashCode = valueHashCode;
  this->valueType = valueType;
  this->valueStartIndex = valueStartIndex;
  this->valueLength = valueLength;
  this->unitType = unitType;
}
// Ctor Parameters []
constexpr ::TMPro::RichTextTagAttribute::RichTextTagAttribute() {}
