#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidConfiguration.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidHardwareKeyboardHidden_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidKeyboardHidden_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidKeyboard_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidNavigationHidden_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidNavigation_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidOrientation_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidTouchScreen_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidConfiguration)
namespace UnityEngine::Android {
struct AndroidColorModeHdr;
}
namespace UnityEngine::Android {
struct AndroidColorModeWideColorGamut;
}
namespace UnityEngine::Android {
struct AndroidHardwareKeyboardHidden;
}
namespace UnityEngine::Android {
struct AndroidKeyboardHidden;
}
namespace UnityEngine::Android {
struct AndroidKeyboard;
}
namespace UnityEngine::Android {
class AndroidLocale;
}
namespace UnityEngine::Android {
struct AndroidNavigationHidden;
}
namespace UnityEngine::Android {
struct AndroidNavigation;
}
namespace UnityEngine::Android {
struct AndroidOrientation;
}
namespace UnityEngine::Android {
struct AndroidScreenLayoutDirection;
}
namespace UnityEngine::Android {
struct AndroidScreenLayoutLong;
}
namespace UnityEngine::Android {
struct AndroidScreenLayoutRound;
}
namespace UnityEngine::Android {
struct AndroidScreenLayoutSize;
}
namespace UnityEngine::Android {
struct AndroidTouchScreen;
}
namespace UnityEngine::Android {
struct AndroidUIModeNight;
}
namespace UnityEngine::Android {
struct AndroidUIModeType;
}
// Forward declare root types
namespace UnityEngine::Android {
class AndroidConfiguration;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Android::AndroidConfiguration);
// Dependencies System.Object, UnityEngine.Android.AndroidHardwareKeyboardHidden, UnityEngine.Android.AndroidKeyboard, UnityEngine.Android.AndroidKeyboardHidden, UnityEngine.Android.AndroidNavigation,
// UnityEngine.Android.AndroidNavigationHidden, UnityEngine.Android.AndroidOrientation, UnityEngine.Android.AndroidTouchScreen
namespace UnityEngine::Android {
// Is value type: false
// CS Name: UnityEngine.Android.AndroidConfiguration
class CORDL_TYPE AndroidConfiguration : public ::System::Object {
public:
  // Declarations
  /// @brief Field <colorMode>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__colorMode_k__BackingField, put = __cordl_internal_set__colorMode_k__BackingField)) int32_t _colorMode_k__BackingField;

  /// @brief Field <densityDpi>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__densityDpi_k__BackingField, put = __cordl_internal_set__densityDpi_k__BackingField)) int32_t _densityDpi_k__BackingField;

  /// @brief Field <fontScale>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__fontScale_k__BackingField, put = __cordl_internal_set__fontScale_k__BackingField)) float_t _fontScale_k__BackingField;

  /// @brief Field <fontWeightAdjustment>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__fontWeightAdjustment_k__BackingField,
                      put = __cordl_internal_set__fontWeightAdjustment_k__BackingField)) int32_t _fontWeightAdjustment_k__BackingField;

  /// @brief Field <hardKeyboardHidden>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__hardKeyboardHidden_k__BackingField,
                      put = __cordl_internal_set__hardKeyboardHidden_k__BackingField)) ::UnityEngine::Android::AndroidHardwareKeyboardHidden _hardKeyboardHidden_k__BackingField;

  /// @brief Field <keyboardHidden>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__keyboardHidden_k__BackingField,
                      put = __cordl_internal_set__keyboardHidden_k__BackingField)) ::UnityEngine::Android::AndroidKeyboardHidden _keyboardHidden_k__BackingField;

  /// @brief Field <keyboard>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__keyboard_k__BackingField, put = __cordl_internal_set__keyboard_k__BackingField)) ::UnityEngine::Android::AndroidKeyboard _keyboard_k__BackingField;

  /// @brief Field <mobileCountryCode>k__BackingField, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__mobileCountryCode_k__BackingField, put = __cordl_internal_set__mobileCountryCode_k__BackingField)) int32_t _mobileCountryCode_k__BackingField;

  /// @brief Field <mobileNetworkCode>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__mobileNetworkCode_k__BackingField, put = __cordl_internal_set__mobileNetworkCode_k__BackingField)) int32_t _mobileNetworkCode_k__BackingField;

  /// @brief Field <navigationHidden>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__navigationHidden_k__BackingField,
                      put = __cordl_internal_set__navigationHidden_k__BackingField)) ::UnityEngine::Android::AndroidNavigationHidden _navigationHidden_k__BackingField;

  /// @brief Field <navigation>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__navigation_k__BackingField,
                      put = __cordl_internal_set__navigation_k__BackingField)) ::UnityEngine::Android::AndroidNavigation _navigation_k__BackingField;

  /// @brief Field <orientation>k__BackingField, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__orientation_k__BackingField,
                      put = __cordl_internal_set__orientation_k__BackingField)) ::UnityEngine::Android::AndroidOrientation _orientation_k__BackingField;

  /// @brief Field <primaryLocaleCountry>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__primaryLocaleCountry_k__BackingField,
                      put = __cordl_internal_set__primaryLocaleCountry_k__BackingField)) ::StringW _primaryLocaleCountry_k__BackingField;

  /// @brief Field <primaryLocaleLanguage>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__primaryLocaleLanguage_k__BackingField,
                      put = __cordl_internal_set__primaryLocaleLanguage_k__BackingField)) ::StringW _primaryLocaleLanguage_k__BackingField;

  /// @brief Field <screenHeightDp>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__screenHeightDp_k__BackingField, put = __cordl_internal_set__screenHeightDp_k__BackingField)) int32_t _screenHeightDp_k__BackingField;

  /// @brief Field <screenLayout>k__BackingField, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__screenLayout_k__BackingField, put = __cordl_internal_set__screenLayout_k__BackingField)) int32_t _screenLayout_k__BackingField;

  /// @brief Field <screenWidthDp>k__BackingField, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__screenWidthDp_k__BackingField, put = __cordl_internal_set__screenWidthDp_k__BackingField)) int32_t _screenWidthDp_k__BackingField;

  /// @brief Field <smallestScreenWidthDp>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__smallestScreenWidthDp_k__BackingField,
                      put = __cordl_internal_set__smallestScreenWidthDp_k__BackingField)) int32_t _smallestScreenWidthDp_k__BackingField;

  /// @brief Field <touchScreen>k__BackingField, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__touchScreen_k__BackingField,
                      put = __cordl_internal_set__touchScreen_k__BackingField)) ::UnityEngine::Android::AndroidTouchScreen _touchScreen_k__BackingField;

  /// @brief Field <uiMode>k__BackingField, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__uiMode_k__BackingField, put = __cordl_internal_set__uiMode_k__BackingField)) int32_t _uiMode_k__BackingField;

  __declspec(property(get = get_colorMode)) int32_t colorMode;

  __declspec(property(get = get_colorModeHdr)) ::UnityEngine::Android::AndroidColorModeHdr colorModeHdr;

  __declspec(property(get = get_colorModeWideColorGamut)) ::UnityEngine::Android::AndroidColorModeWideColorGamut colorModeWideColorGamut;

  __declspec(property(get = get_densityDpi)) int32_t densityDpi;

  __declspec(property(get = get_fontScale)) float_t fontScale;

  __declspec(property(get = get_fontWeightAdjustment)) int32_t fontWeightAdjustment;

  __declspec(property(get = get_hardKeyboardHidden)) ::UnityEngine::Android::AndroidHardwareKeyboardHidden hardKeyboardHidden;

  __declspec(property(get = get_keyboard)) ::UnityEngine::Android::AndroidKeyboard keyboard;

  __declspec(property(get = get_keyboardHidden)) ::UnityEngine::Android::AndroidKeyboardHidden keyboardHidden;

  __declspec(property(get = get_locales)) ::ArrayW<::UnityEngine::Android::AndroidLocale*, ::Array<::UnityEngine::Android::AndroidLocale*>*> locales;

  __declspec(property(get = get_mobileCountryCode)) int32_t mobileCountryCode;

  __declspec(property(get = get_mobileNetworkCode)) int32_t mobileNetworkCode;

  __declspec(property(get = get_navigation)) ::UnityEngine::Android::AndroidNavigation navigation;

  __declspec(property(get = get_navigationHidden)) ::UnityEngine::Android::AndroidNavigationHidden navigationHidden;

  __declspec(property(get = get_orientation)) ::UnityEngine::Android::AndroidOrientation orientation;

  __declspec(property(get = get_primaryLocaleCountry)) ::StringW primaryLocaleCountry;

  __declspec(property(get = get_primaryLocaleLanguage)) ::StringW primaryLocaleLanguage;

  __declspec(property(get = get_screenHeightDp)) int32_t screenHeightDp;

  __declspec(property(get = get_screenLayout)) int32_t screenLayout;

  __declspec(property(get = get_screenLayoutDirection)) ::UnityEngine::Android::AndroidScreenLayoutDirection screenLayoutDirection;

  __declspec(property(get = get_screenLayoutLong)) ::UnityEngine::Android::AndroidScreenLayoutLong screenLayoutLong;

  __declspec(property(get = get_screenLayoutRound)) ::UnityEngine::Android::AndroidScreenLayoutRound screenLayoutRound;

  __declspec(property(get = get_screenLayoutSize)) ::UnityEngine::Android::AndroidScreenLayoutSize screenLayoutSize;

  __declspec(property(get = get_screenWidthDp)) int32_t screenWidthDp;

  __declspec(property(get = get_smallestScreenWidthDp)) int32_t smallestScreenWidthDp;

  __declspec(property(get = get_touchScreen)) ::UnityEngine::Android::AndroidTouchScreen touchScreen;

  __declspec(property(get = get_uiMode)) int32_t uiMode;

  __declspec(property(get = get_uiModeNight)) ::UnityEngine::Android::AndroidUIModeNight uiModeNight;

  __declspec(property(get = get_uiModeType)) ::UnityEngine::Android::AndroidUIModeType uiModeType;

  /// @brief Method ToString, addr 0x67fc900, size 0x11b0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr int32_t const& __cordl_internal_get__colorMode_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__colorMode_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__densityDpi_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__densityDpi_k__BackingField();

  constexpr float_t const& __cordl_internal_get__fontScale_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__fontScale_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__fontWeightAdjustment_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__fontWeightAdjustment_k__BackingField();

  constexpr ::UnityEngine::Android::AndroidHardwareKeyboardHidden const& __cordl_internal_get__hardKeyboardHidden_k__BackingField() const;

  constexpr ::UnityEngine::Android::AndroidHardwareKeyboardHidden& __cordl_internal_get__hardKeyboardHidden_k__BackingField();

  constexpr ::UnityEngine::Android::AndroidKeyboardHidden const& __cordl_internal_get__keyboardHidden_k__BackingField() const;

  constexpr ::UnityEngine::Android::AndroidKeyboardHidden& __cordl_internal_get__keyboardHidden_k__BackingField();

  constexpr ::UnityEngine::Android::AndroidKeyboard const& __cordl_internal_get__keyboard_k__BackingField() const;

  constexpr ::UnityEngine::Android::AndroidKeyboard& __cordl_internal_get__keyboard_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__mobileCountryCode_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__mobileCountryCode_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__mobileNetworkCode_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__mobileNetworkCode_k__BackingField();

  constexpr ::UnityEngine::Android::AndroidNavigationHidden const& __cordl_internal_get__navigationHidden_k__BackingField() const;

  constexpr ::UnityEngine::Android::AndroidNavigationHidden& __cordl_internal_get__navigationHidden_k__BackingField();

  constexpr ::UnityEngine::Android::AndroidNavigation const& __cordl_internal_get__navigation_k__BackingField() const;

  constexpr ::UnityEngine::Android::AndroidNavigation& __cordl_internal_get__navigation_k__BackingField();

  constexpr ::UnityEngine::Android::AndroidOrientation const& __cordl_internal_get__orientation_k__BackingField() const;

  constexpr ::UnityEngine::Android::AndroidOrientation& __cordl_internal_get__orientation_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__primaryLocaleCountry_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__primaryLocaleCountry_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__primaryLocaleLanguage_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__primaryLocaleLanguage_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__screenHeightDp_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__screenHeightDp_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__screenLayout_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__screenLayout_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__screenWidthDp_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__screenWidthDp_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__smallestScreenWidthDp_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__smallestScreenWidthDp_k__BackingField();

  constexpr ::UnityEngine::Android::AndroidTouchScreen const& __cordl_internal_get__touchScreen_k__BackingField() const;

  constexpr ::UnityEngine::Android::AndroidTouchScreen& __cordl_internal_get__touchScreen_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__uiMode_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__uiMode_k__BackingField();

  constexpr void __cordl_internal_set__colorMode_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__densityDpi_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__fontScale_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__fontWeightAdjustment_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__hardKeyboardHidden_k__BackingField(::UnityEngine::Android::AndroidHardwareKeyboardHidden value);

  constexpr void __cordl_internal_set__keyboardHidden_k__BackingField(::UnityEngine::Android::AndroidKeyboardHidden value);

  constexpr void __cordl_internal_set__keyboard_k__BackingField(::UnityEngine::Android::AndroidKeyboard value);

  constexpr void __cordl_internal_set__mobileCountryCode_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__mobileNetworkCode_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__navigationHidden_k__BackingField(::UnityEngine::Android::AndroidNavigationHidden value);

  constexpr void __cordl_internal_set__navigation_k__BackingField(::UnityEngine::Android::AndroidNavigation value);

  constexpr void __cordl_internal_set__orientation_k__BackingField(::UnityEngine::Android::AndroidOrientation value);

  constexpr void __cordl_internal_set__primaryLocaleCountry_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__primaryLocaleLanguage_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__screenHeightDp_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__screenLayout_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__screenWidthDp_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__smallestScreenWidthDp_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__touchScreen_k__BackingField(::UnityEngine::Android::AndroidTouchScreen value);

  constexpr void __cordl_internal_set__uiMode_k__BackingField(int32_t value);

  /// @brief Method get_colorMode, addr 0x67fc708, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_colorMode();

  /// @brief Method get_colorModeHdr, addr 0x67fc8a0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Android::AndroidColorModeHdr get_colorModeHdr();

  /// @brief Method get_colorModeWideColorGamut, addr 0x67fc8ac, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Android::AndroidColorModeWideColorGamut get_colorModeWideColorGamut();

  /// @brief Method get_densityDpi, addr 0x67fc710, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_densityDpi();

  /// @brief Method get_fontScale, addr 0x67fc718, size 0x8, virtual false, abstract: false, final false
  inline float_t get_fontScale();

  /// @brief Method get_fontWeightAdjustment, addr 0x67fc720, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_fontWeightAdjustment();

  /// @brief Method get_hardKeyboardHidden, addr 0x67fc730, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Android::AndroidHardwareKeyboardHidden get_hardKeyboardHidden();

  /// @brief Method get_keyboard, addr 0x67fc728, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Android::AndroidKeyboard get_keyboard();

  /// @brief Method get_keyboardHidden, addr 0x67fc738, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Android::AndroidKeyboardHidden get_keyboardHidden();

  /// @brief Method get_locales, addr 0x67fc7a8, size 0xf8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Android::AndroidLocale*, ::Array<::UnityEngine::Android::AndroidLocale*>*> get_locales();

  /// @brief Method get_mobileCountryCode, addr 0x67fc740, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_mobileCountryCode();

  /// @brief Method get_mobileNetworkCode, addr 0x67fc748, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_mobileNetworkCode();

  /// @brief Method get_navigation, addr 0x67fc750, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Android::AndroidNavigation get_navigation();

  /// @brief Method get_navigationHidden, addr 0x67fc758, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Android::AndroidNavigationHidden get_navigationHidden();

  /// @brief Method get_orientation, addr 0x67fc760, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Android::AndroidOrientation get_orientation();

  /// @brief Method get_primaryLocaleCountry, addr 0x67fc798, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_primaryLocaleCountry();

  /// @brief Method get_primaryLocaleLanguage, addr 0x67fc7a0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_primaryLocaleLanguage();

  /// @brief Method get_screenHeightDp, addr 0x67fc768, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_screenHeightDp();

  /// @brief Method get_screenLayout, addr 0x67fc780, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_screenLayout();

  /// @brief Method get_screenLayoutDirection, addr 0x67fc8b8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Android::AndroidScreenLayoutDirection get_screenLayoutDirection();

  /// @brief Method get_screenLayoutLong, addr 0x67fc8c4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Android::AndroidScreenLayoutLong get_screenLayoutLong();

  /// @brief Method get_screenLayoutRound, addr 0x67fc8d0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Android::AndroidScreenLayoutRound get_screenLayoutRound();

  /// @brief Method get_screenLayoutSize, addr 0x67fc8dc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Android::AndroidScreenLayoutSize get_screenLayoutSize();

  /// @brief Method get_screenWidthDp, addr 0x67fc770, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_screenWidthDp();

  /// @brief Method get_smallestScreenWidthDp, addr 0x67fc778, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_smallestScreenWidthDp();

  /// @brief Method get_touchScreen, addr 0x67fc788, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Android::AndroidTouchScreen get_touchScreen();

  /// @brief Method get_uiMode, addr 0x67fc790, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_uiMode();

  /// @brief Method get_uiModeNight, addr 0x67fc8e8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Android::AndroidUIModeNight get_uiModeNight();

  /// @brief Method get_uiModeType, addr 0x67fc8f4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Android::AndroidUIModeType get_uiModeType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidConfiguration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidConfiguration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidConfiguration(AndroidConfiguration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidConfiguration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidConfiguration(AndroidConfiguration const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19925 };

  /// @brief Field <colorMode>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____colorMode_k__BackingField;

  /// @brief Field <densityDpi>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t ____densityDpi_k__BackingField;

  /// @brief Field <fontScale>k__BackingField, offset: 0x18, size: 0x4, def value: None
  float_t ____fontScale_k__BackingField;

  /// @brief Field <fontWeightAdjustment>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t ____fontWeightAdjustment_k__BackingField;

  /// @brief Field <keyboard>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::Android::AndroidKeyboard ____keyboard_k__BackingField;

  /// @brief Field <hardKeyboardHidden>k__BackingField, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::Android::AndroidHardwareKeyboardHidden ____hardKeyboardHidden_k__BackingField;

  /// @brief Field <keyboardHidden>k__BackingField, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::Android::AndroidKeyboardHidden ____keyboardHidden_k__BackingField;

  /// @brief Field <mobileCountryCode>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  int32_t ____mobileCountryCode_k__BackingField;

  /// @brief Field <mobileNetworkCode>k__BackingField, offset: 0x30, size: 0x4, def value: None
  int32_t ____mobileNetworkCode_k__BackingField;

  /// @brief Field <navigation>k__BackingField, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::Android::AndroidNavigation ____navigation_k__BackingField;

  /// @brief Field <navigationHidden>k__BackingField, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::Android::AndroidNavigationHidden ____navigationHidden_k__BackingField;

  /// @brief Field <orientation>k__BackingField, offset: 0x3c, size: 0x4, def value: None
  ::UnityEngine::Android::AndroidOrientation ____orientation_k__BackingField;

  /// @brief Field <screenHeightDp>k__BackingField, offset: 0x40, size: 0x4, def value: None
  int32_t ____screenHeightDp_k__BackingField;

  /// @brief Field <screenWidthDp>k__BackingField, offset: 0x44, size: 0x4, def value: None
  int32_t ____screenWidthDp_k__BackingField;

  /// @brief Field <smallestScreenWidthDp>k__BackingField, offset: 0x48, size: 0x4, def value: None
  int32_t ____smallestScreenWidthDp_k__BackingField;

  /// @brief Field <screenLayout>k__BackingField, offset: 0x4c, size: 0x4, def value: None
  int32_t ____screenLayout_k__BackingField;

  /// @brief Field <touchScreen>k__BackingField, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::Android::AndroidTouchScreen ____touchScreen_k__BackingField;

  /// @brief Field <uiMode>k__BackingField, offset: 0x54, size: 0x4, def value: None
  int32_t ____uiMode_k__BackingField;

  /// @brief Field <primaryLocaleCountry>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::StringW ____primaryLocaleCountry_k__BackingField;

  /// @brief Field <primaryLocaleLanguage>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::StringW ____primaryLocaleLanguage_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Android::AndroidConfiguration, ____colorMode_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidConfiguration, ____densityDpi_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidConfiguration, ____fontScale_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidConfiguration, ____fontWeightAdjustment_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidConfiguration, ____keyboard_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidConfiguration, ____hardKeyboardHidden_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidConfiguration, ____keyboardHidden_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidConfiguration, ____mobileCountryCode_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidConfiguration, ____mobileNetworkCode_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidConfiguration, ____navigation_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidConfiguration, ____navigationHidden_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidConfiguration, ____orientation_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidConfiguration, ____screenHeightDp_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidConfiguration, ____screenWidthDp_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidConfiguration, ____smallestScreenWidthDp_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidConfiguration, ____screenLayout_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidConfiguration, ____touchScreen_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidConfiguration, ____uiMode_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidConfiguration, ____primaryLocaleCountry_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidConfiguration, ____primaryLocaleLanguage_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::AndroidConfiguration, 0x68>, "Size mismatch!");

} // namespace UnityEngine::Android
NEED_NO_BOX(::UnityEngine::Android::AndroidConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidConfiguration*, "UnityEngine.Android", "AndroidConfiguration");
