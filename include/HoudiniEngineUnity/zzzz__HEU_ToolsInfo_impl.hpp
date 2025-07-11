#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_ToolsInfo.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ToolsInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ToolsInfo_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode::HEU_ToolsInfo_PaintMergeMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode::HEU_ToolsInfo_PaintMergeMode() {}
constexpr ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode::REPLACE{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode::ADD{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode::SUBTRACT{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode::MULTIPLY{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMeshVisibility::HEU_ToolsInfo_PaintMeshVisibility(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMeshVisibility::HEU_ToolsInfo_PaintMeshVisibility() {}
constexpr ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMeshVisibility HoudiniEngineUnity::HEU_ToolsInfo_PaintMeshVisibility::AUTO{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMeshVisibility HoudiniEngineUnity::HEU_ToolsInfo_PaintMeshVisibility::SHOW{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMeshVisibility HoudiniEngineUnity::HEU_ToolsInfo_PaintMeshVisibility::HIDE{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ToolsInfo.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_ToolsInfo::*)(::HoudiniEngineUnity::HEU_ToolsInfo*)>(
    &::HoudiniEngineUnity::HEU_ToolsInfo::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0x3a9cd20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ToolsInfo*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ToolsInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ToolsInfo::*)()>(&::HoudiniEngineUnity::HEU_ToolsInfo::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3a9d330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ToolsInfo*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__paintBrushSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paintBrushSize;
}
constexpr float_t const& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__paintBrushSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paintBrushSize;
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_set__paintBrushSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____paintBrushSize = value;
}
constexpr float_t& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__paintBrushOpacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paintBrushOpacity;
}
constexpr float_t const& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__paintBrushOpacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paintBrushOpacity;
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_set__paintBrushOpacity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____paintBrushOpacity = value;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__paintIntValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paintIntValue;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__paintIntValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paintIntValue;
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_set__paintIntValue(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____paintIntValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__paintFloatValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paintFloatValue;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__paintFloatValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paintFloatValue;
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_set__paintFloatValue(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____paintFloatValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__paintStringValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paintStringValue;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__paintStringValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paintStringValue;
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_set__paintStringValue(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____paintStringValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__lastAttributesGeoID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastAttributesGeoID;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__lastAttributesGeoID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastAttributesGeoID;
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_set__lastAttributesGeoID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastAttributesGeoID = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__lastAttributesPartID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastAttributesPartID;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__lastAttributesPartID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastAttributesPartID;
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_set__lastAttributesPartID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastAttributesPartID = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__lastAttributeNodeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastAttributeNodeName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__lastAttributeNodeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastAttributeNodeName;
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_set__lastAttributeNodeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastAttributeNodeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__lastAttributeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastAttributeName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__lastAttributeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastAttributeName;
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_set__lastAttributeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastAttributeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__brushHandleColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____brushHandleColor;
}
constexpr ::UnityEngine::Color const& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__brushHandleColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____brushHandleColor;
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_set__brushHandleColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____brushHandleColor = value;
}
constexpr ::UnityEngine::Color& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__affectedAreaPaintColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____affectedAreaPaintColor;
}
constexpr ::UnityEngine::Color const& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__affectedAreaPaintColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____affectedAreaPaintColor;
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_set__affectedAreaPaintColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____affectedAreaPaintColor = value;
}
constexpr bool& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__liveUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____liveUpdate;
}
constexpr bool const& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__liveUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____liveUpdate;
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_set__liveUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____liveUpdate = value;
}
constexpr bool& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__isPainting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPainting;
}
constexpr bool const& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__isPainting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPainting;
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_set__isPainting(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isPainting = value;
}
constexpr float_t& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__editPointBoxSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editPointBoxSize;
}
constexpr float_t const& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__editPointBoxSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editPointBoxSize;
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_set__editPointBoxSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____editPointBoxSize = value;
}
constexpr ::UnityEngine::Color& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__editPointBoxUnselectedColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editPointBoxUnselectedColor;
}
constexpr ::UnityEngine::Color const& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__editPointBoxUnselectedColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editPointBoxUnselectedColor;
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_set__editPointBoxUnselectedColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____editPointBoxUnselectedColor = value;
}
constexpr ::UnityEngine::Color& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__editPointBoxSelectedColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editPointBoxSelectedColor;
}
constexpr ::UnityEngine::Color const& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__editPointBoxSelectedColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editPointBoxSelectedColor;
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_set__editPointBoxSelectedColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____editPointBoxSelectedColor = value;
}
constexpr bool& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__recacheRequired() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recacheRequired;
}
constexpr bool const& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__recacheRequired() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recacheRequired;
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_set__recacheRequired(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____recacheRequired = value;
}
constexpr ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__paintMergeMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paintMergeMode;
}
constexpr ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode const& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__paintMergeMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paintMergeMode;
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_set__paintMergeMode(::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____paintMergeMode = value;
}
constexpr bool& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__showOnlyEditGeometry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showOnlyEditGeometry;
}
constexpr bool const& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__showOnlyEditGeometry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showOnlyEditGeometry;
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_set__showOnlyEditGeometry(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showOnlyEditGeometry = value;
}
constexpr bool& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__alwaysCookUpstream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alwaysCookUpstream;
}
constexpr bool const& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__alwaysCookUpstream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alwaysCookUpstream;
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_set__alwaysCookUpstream(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alwaysCookUpstream = value;
}
constexpr ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMeshVisibility& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__paintMeshVisiblity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paintMeshVisiblity;
}
constexpr ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMeshVisibility const& HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_get__paintMeshVisiblity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paintMeshVisiblity;
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__cordl_internal_set__paintMeshVisiblity(::HoudiniEngineUnity::HEU_ToolsInfo_PaintMeshVisibility value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____paintMeshVisiblity = value;
}
inline bool HoudiniEngineUnity::HEU_ToolsInfo::IsEquivalentTo(::HoudiniEngineUnity::HEU_ToolsInfo* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ToolsInfo*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline void HoudiniEngineUnity::HEU_ToolsInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ToolsInfo*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_ToolsInfo* HoudiniEngineUnity::HEU_ToolsInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_ToolsInfo*>());
}
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_ToolsInfo>>"
constexpr HoudiniEngineUnity::HEU_ToolsInfo::operator ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_ToolsInfo>>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_ToolsInfo>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_ToolsInfo>>"
constexpr ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_ToolsInfo>>*
HoudiniEngineUnity::HEU_ToolsInfo::i___HoudiniEngineUnity__IEquivable_1___UnityW___HoudiniEngineUnity__HEU_ToolsInfo__() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_ToolsInfo>>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_ToolsInfo::HEU_ToolsInfo() {}
