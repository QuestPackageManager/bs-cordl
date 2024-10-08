#pragma once
// IWYU pragma private; include "TMPro/FontAssetCreationSettings.hpp"
#include "TMPro/zzzz__FontAssetCreationSettings_def.hpp"
//  Writing Method size for method: ::TMPro::FontAssetCreationSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::FontAssetCreationSettings::*)(::StringW, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t,
                                                                                                                               ::StringW, int32_t)>(&::TMPro::FontAssetCreationSettings::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x475d2d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FontAssetCreationSettings>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 10>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void TMPro::FontAssetCreationSettings::_ctor(::StringW sourceFontFileGUID, int32_t pointSize, int32_t pointSizeSamplingMode, int32_t padding, int32_t packingMode, int32_t atlasWidth,
                                                    int32_t atlasHeight, int32_t characterSelectionMode, ::StringW characterSet, int32_t renderMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FontAssetCreationSettings>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 10>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sourceFontFileGUID, pointSize, pointSizeSamplingMode, padding, packingMode, atlasWidth, atlasHeight,
                                                          characterSelectionMode, characterSet, renderMode);
}
// Ctor Parameters [CppParam { name: "sourceFontFileName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "sourceFontFileGUID", ty: "::StringW", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "pointSizeSamplingMode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pointSize", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "padding", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "packingMode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "atlasWidth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "atlasHeight", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "characterSetSelectionMode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "characterSequence", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "referencedFontAssetGUID", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "referencedTextAssetGUID", ty: "::StringW", modifiers: "", def_value: Some("nullptr")
// }, CppParam { name: "fontStyle", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontStyleModifier", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "renderMode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "includeFontFeatures", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::FontAssetCreationSettings::FontAssetCreationSettings(::StringW sourceFontFileName, ::StringW sourceFontFileGUID, int32_t pointSizeSamplingMode, int32_t pointSize, int32_t padding,
                                                                        int32_t packingMode, int32_t atlasWidth, int32_t atlasHeight, int32_t characterSetSelectionMode, ::StringW characterSequence,
                                                                        ::StringW referencedFontAssetGUID, ::StringW referencedTextAssetGUID, int32_t fontStyle, float_t fontStyleModifier,
                                                                        int32_t renderMode, bool includeFontFeatures) noexcept {
  this->sourceFontFileName = sourceFontFileName;
  this->sourceFontFileGUID = sourceFontFileGUID;
  this->pointSizeSamplingMode = pointSizeSamplingMode;
  this->pointSize = pointSize;
  this->padding = padding;
  this->packingMode = packingMode;
  this->atlasWidth = atlasWidth;
  this->atlasHeight = atlasHeight;
  this->characterSetSelectionMode = characterSetSelectionMode;
  this->characterSequence = characterSequence;
  this->referencedFontAssetGUID = referencedFontAssetGUID;
  this->referencedTextAssetGUID = referencedTextAssetGUID;
  this->fontStyle = fontStyle;
  this->fontStyleModifier = fontStyleModifier;
  this->renderMode = renderMode;
  this->includeFontFeatures = includeFontFeatures;
}
// Ctor Parameters []
constexpr ::TMPro::FontAssetCreationSettings::FontAssetCreationSettings() {}
