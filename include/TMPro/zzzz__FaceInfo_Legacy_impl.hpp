#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__FaceInfo_Legacy_def.hpp"
//  Writing Method size for method: ::TMPro::FaceInfo_Legacy._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::FaceInfo_Legacy::*)()>(&::TMPro::FaceInfo_Legacy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c10188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FaceInfo_Legacy*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& TMPro::FaceInfo_Legacy::__get_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr ::StringW const& TMPro::FaceInfo_Legacy::__get_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr void TMPro::FaceInfo_Legacy::__set_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& TMPro::FaceInfo_Legacy::__get_PointSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PointSize;
}
constexpr float_t const& TMPro::FaceInfo_Legacy::__get_PointSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PointSize;
}
constexpr void TMPro::FaceInfo_Legacy::__set_PointSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PointSize = value;
}
constexpr float_t& TMPro::FaceInfo_Legacy::__get_Scale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Scale;
}
constexpr float_t const& TMPro::FaceInfo_Legacy::__get_Scale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Scale;
}
constexpr void TMPro::FaceInfo_Legacy::__set_Scale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Scale = value;
}
constexpr int32_t& TMPro::FaceInfo_Legacy::__get_CharacterCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CharacterCount;
}
constexpr int32_t const& TMPro::FaceInfo_Legacy::__get_CharacterCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CharacterCount;
}
constexpr void TMPro::FaceInfo_Legacy::__set_CharacterCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CharacterCount = value;
}
constexpr float_t& TMPro::FaceInfo_Legacy::__get_LineHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LineHeight;
}
constexpr float_t const& TMPro::FaceInfo_Legacy::__get_LineHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LineHeight;
}
constexpr void TMPro::FaceInfo_Legacy::__set_LineHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LineHeight = value;
}
constexpr float_t& TMPro::FaceInfo_Legacy::__get_Baseline() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Baseline;
}
constexpr float_t const& TMPro::FaceInfo_Legacy::__get_Baseline() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Baseline;
}
constexpr void TMPro::FaceInfo_Legacy::__set_Baseline(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Baseline = value;
}
constexpr float_t& TMPro::FaceInfo_Legacy::__get_Ascender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Ascender;
}
constexpr float_t const& TMPro::FaceInfo_Legacy::__get_Ascender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Ascender;
}
constexpr void TMPro::FaceInfo_Legacy::__set_Ascender(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Ascender = value;
}
constexpr float_t& TMPro::FaceInfo_Legacy::__get_CapHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CapHeight;
}
constexpr float_t const& TMPro::FaceInfo_Legacy::__get_CapHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CapHeight;
}
constexpr void TMPro::FaceInfo_Legacy::__set_CapHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CapHeight = value;
}
constexpr float_t& TMPro::FaceInfo_Legacy::__get_Descender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Descender;
}
constexpr float_t const& TMPro::FaceInfo_Legacy::__get_Descender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Descender;
}
constexpr void TMPro::FaceInfo_Legacy::__set_Descender(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Descender = value;
}
constexpr float_t& TMPro::FaceInfo_Legacy::__get_CenterLine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CenterLine;
}
constexpr float_t const& TMPro::FaceInfo_Legacy::__get_CenterLine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CenterLine;
}
constexpr void TMPro::FaceInfo_Legacy::__set_CenterLine(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CenterLine = value;
}
constexpr float_t& TMPro::FaceInfo_Legacy::__get_SuperscriptOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SuperscriptOffset;
}
constexpr float_t const& TMPro::FaceInfo_Legacy::__get_SuperscriptOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SuperscriptOffset;
}
constexpr void TMPro::FaceInfo_Legacy::__set_SuperscriptOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SuperscriptOffset = value;
}
constexpr float_t& TMPro::FaceInfo_Legacy::__get_SubscriptOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SubscriptOffset;
}
constexpr float_t const& TMPro::FaceInfo_Legacy::__get_SubscriptOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SubscriptOffset;
}
constexpr void TMPro::FaceInfo_Legacy::__set_SubscriptOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SubscriptOffset = value;
}
constexpr float_t& TMPro::FaceInfo_Legacy::__get_SubSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SubSize;
}
constexpr float_t const& TMPro::FaceInfo_Legacy::__get_SubSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SubSize;
}
constexpr void TMPro::FaceInfo_Legacy::__set_SubSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SubSize = value;
}
constexpr float_t& TMPro::FaceInfo_Legacy::__get_Underline() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Underline;
}
constexpr float_t const& TMPro::FaceInfo_Legacy::__get_Underline() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Underline;
}
constexpr void TMPro::FaceInfo_Legacy::__set_Underline(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Underline = value;
}
constexpr float_t& TMPro::FaceInfo_Legacy::__get_UnderlineThickness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UnderlineThickness;
}
constexpr float_t const& TMPro::FaceInfo_Legacy::__get_UnderlineThickness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UnderlineThickness;
}
constexpr void TMPro::FaceInfo_Legacy::__set_UnderlineThickness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UnderlineThickness = value;
}
constexpr float_t& TMPro::FaceInfo_Legacy::__get_strikethrough() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strikethrough;
}
constexpr float_t const& TMPro::FaceInfo_Legacy::__get_strikethrough() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strikethrough;
}
constexpr void TMPro::FaceInfo_Legacy::__set_strikethrough(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strikethrough = value;
}
constexpr float_t& TMPro::FaceInfo_Legacy::__get_strikethroughThickness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strikethroughThickness;
}
constexpr float_t const& TMPro::FaceInfo_Legacy::__get_strikethroughThickness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strikethroughThickness;
}
constexpr void TMPro::FaceInfo_Legacy::__set_strikethroughThickness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strikethroughThickness = value;
}
constexpr float_t& TMPro::FaceInfo_Legacy::__get_TabWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TabWidth;
}
constexpr float_t const& TMPro::FaceInfo_Legacy::__get_TabWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TabWidth;
}
constexpr void TMPro::FaceInfo_Legacy::__set_TabWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TabWidth = value;
}
constexpr float_t& TMPro::FaceInfo_Legacy::__get_Padding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Padding;
}
constexpr float_t const& TMPro::FaceInfo_Legacy::__get_Padding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Padding;
}
constexpr void TMPro::FaceInfo_Legacy::__set_Padding(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Padding = value;
}
constexpr float_t& TMPro::FaceInfo_Legacy::__get_AtlasWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AtlasWidth;
}
constexpr float_t const& TMPro::FaceInfo_Legacy::__get_AtlasWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AtlasWidth;
}
constexpr void TMPro::FaceInfo_Legacy::__set_AtlasWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AtlasWidth = value;
}
constexpr float_t& TMPro::FaceInfo_Legacy::__get_AtlasHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AtlasHeight;
}
constexpr float_t const& TMPro::FaceInfo_Legacy::__get_AtlasHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AtlasHeight;
}
constexpr void TMPro::FaceInfo_Legacy::__set_AtlasHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AtlasHeight = value;
}
inline ::TMPro::FaceInfo_Legacy* TMPro::FaceInfo_Legacy::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::TMPro::FaceInfo_Legacy*>());
}
inline void TMPro::FaceInfo_Legacy::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FaceInfo_Legacy*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::TMPro::FaceInfo_Legacy::FaceInfo_Legacy() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
