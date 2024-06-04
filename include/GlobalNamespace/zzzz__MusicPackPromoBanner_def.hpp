#pragma once
// IWYU pragma private; include "GlobalNamespace/MusicPackPromoBanner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MusicPackPromoBanner)
namespace GlobalNamespace {
class __DlcPromoPanelModel__PromoInfo;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class MusicPackPromoBanner;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MusicPackPromoBanner);
// Type: ::MusicPackPromoBanner
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MusicPackPromoBanner*
class CORDL_TYPE MusicPackPromoBanner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _backgroundImage, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__backgroundImage, put = __cordl_internal_set__backgroundImage))::UnityW<::UnityEngine::UI::Image> _backgroundImage;

  /// @brief Field _goButton, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__goButton, put = __cordl_internal_set__goButton))::UnityW<::UnityEngine::UI::Button> _goButton;

  /// @brief Field _loadingIndicator, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__loadingIndicator, put = __cordl_internal_set__loadingIndicator))::UnityW<::UnityEngine::GameObject> _loadingIndicator;

  /// @brief Field _promoBannerGo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__promoBannerGo, put = __cordl_internal_set__promoBannerGo))::UnityW<::UnityEngine::GameObject> _promoBannerGo;

  /// @brief Field _promoBannerTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__promoBannerTransform, put = __cordl_internal_set__promoBannerTransform))::UnityW<::UnityEngine::RectTransform> _promoBannerTransform;

  /// @brief Field <promoInfo>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__promoInfo_k__BackingField,
                      put = __cordl_internal_set__promoInfo_k__BackingField))::GlobalNamespace::__DlcPromoPanelModel__PromoInfo* _promoInfo_k__BackingField;

  /// @brief Field _promoText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__promoText, put = __cordl_internal_set__promoText))::UnityW<::TMPro::TextMeshProUGUI> _promoText;

  /// @brief Field _text, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text))::StringW _text;

  __declspec(property(get = get_promoButtonText))::StringW promoButtonText;

  __declspec(property(get = get_promoInfo, put = set_promoInfo))::GlobalNamespace::__DlcPromoPanelModel__PromoInfo* promoInfo;

  static inline ::GlobalNamespace::MusicPackPromoBanner* New_ctor();

  /// @brief Method Setup, addr 0x26873a0, size 0x14c, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo* newPromoInfo, bool probablyOwned);

  /// @brief Method StartLoading, addr 0x2687334, size 0x6c, virtual false, abstract: false, final false
  inline void StartLoading();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__backgroundImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__backgroundImage();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__goButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__goButton();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__loadingIndicator() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__loadingIndicator();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__promoBannerGo() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__promoBannerGo();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__promoBannerTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__promoBannerTransform();

  constexpr ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*& __cordl_internal_get__promoInfo_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*> const& __cordl_internal_get__promoInfo_k__BackingField() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__promoText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__promoText();

  constexpr ::StringW const& __cordl_internal_get__text() const;

  constexpr ::StringW& __cordl_internal_get__text();

  constexpr void __cordl_internal_set__backgroundImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__goButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__loadingIndicator(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__promoBannerGo(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__promoBannerTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__promoInfo_k__BackingField(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo* value);

  constexpr void __cordl_internal_set__promoText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__text(::StringW value);

  /// @brief Method .ctor, addr 0x26874ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_promoButtonText, addr 0x268732c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_promoButtonText();

  /// @brief Method get_promoInfo, addr 0x268731c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo* get_promoInfo();

  /// @brief Method set_promoInfo, addr 0x2687324, size 0x8, virtual false, abstract: false, final false
  inline void set_promoInfo(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MusicPackPromoBanner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MusicPackPromoBanner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MusicPackPromoBanner(MusicPackPromoBanner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MusicPackPromoBanner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MusicPackPromoBanner(MusicPackPromoBanner const&) = delete;

  /// @brief Field _promoBannerGo, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____promoBannerGo;

  /// @brief Field _loadingIndicator, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____loadingIndicator;

  /// @brief Field _promoBannerTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____promoBannerTransform;

  /// @brief Field _promoText, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____promoText;

  /// @brief Field _backgroundImage, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____backgroundImage;

  /// @brief Field _goButton, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____goButton;

  /// @brief Field <promoInfo>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo* ____promoInfo_k__BackingField;

  /// @brief Field _text, offset: 0x50, size: 0x8, def value: None
  ::StringW ____text;

  /// @brief Field kGetNow offset 0xffffffff size 0x8
  static constexpr ::ConstString kGetNow{ u"PROMO_GET_NOW_LABEL" };

  /// @brief Field kPlayNow offset 0xffffffff size 0x8
  static constexpr ::ConstString kPlayNow{ u"PROMO_BANNER_PLAY_NOW_LABEL" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MusicPackPromoBanner, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPackPromoBanner, ____promoBannerGo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPackPromoBanner, ____loadingIndicator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPackPromoBanner, ____promoBannerTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPackPromoBanner, ____promoText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPackPromoBanner, ____backgroundImage) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPackPromoBanner, ____goButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPackPromoBanner, ____promoInfo_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicPackPromoBanner, ____text) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MusicPackPromoBanner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MusicPackPromoBanner*, "", "MusicPackPromoBanner");
