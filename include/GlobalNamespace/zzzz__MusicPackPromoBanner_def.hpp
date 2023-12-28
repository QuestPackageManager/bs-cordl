#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MusicPackPromoBanner)
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class GameObject;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class __DlcPromoPanelDataSO__MusicPackPromoInfo;
}
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace GlobalNamespace {
class MusicPackPromoBanner;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MusicPackPromoBanner);
// Type: ::MusicPackPromoBanner
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5799))
// CS Name: ::MusicPackPromoBanner*
class CORDL_TYPE MusicPackPromoBanner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _promoBannerGo, offset 0x18, size 0x8
  __declspec(property(get = __get__promoBannerGo, put = __set__promoBannerGo))::UnityEngine::GameObject* _promoBannerGo;

  /// @brief Field _promoBannerTransform, offset 0x20, size 0x8
  __declspec(property(get = __get__promoBannerTransform, put = __set__promoBannerTransform))::UnityEngine::RectTransform* _promoBannerTransform;

  /// @brief Field _promoText, offset 0x28, size 0x8
  __declspec(property(get = __get__promoText, put = __set__promoText))::TMPro::TextMeshProUGUI* _promoText;

  /// @brief Field _backgroundImage, offset 0x30, size 0x8
  __declspec(property(get = __get__backgroundImage, put = __set__backgroundImage))::UnityEngine::UI::Image* _backgroundImage;

  /// @brief Field _currentPromoMusicPack, offset 0x38, size 0x8
  __declspec(property(get = __get__currentPromoMusicPack, put = __set__currentPromoMusicPack))::GlobalNamespace::IBeatmapLevelPack* _currentPromoMusicPack;

  /// @brief Field _currentPromoBeatmapLevel, offset 0x40, size 0x8
  __declspec(property(get = __get__currentPromoBeatmapLevel, put = __set__currentPromoBeatmapLevel))::GlobalNamespace::IPreviewBeatmapLevel* _currentPromoBeatmapLevel;

  /// @brief Field _text, offset 0x48, size 0x8
  __declspec(property(get = __get__text, put = __set__text))::StringW _text;

  __declspec(property(get = get_currentPromoBeatmapLevel))::GlobalNamespace::IPreviewBeatmapLevel* currentPromoBeatmapLevel;

  __declspec(property(get = get_currentPromoMusicPack))::GlobalNamespace::IBeatmapLevelPack* currentPromoMusicPack;

  __declspec(property(get = get_promoButtonText))::StringW promoButtonText;

  constexpr ::UnityEngine::GameObject*& __get__promoBannerGo();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__promoBannerGo() const;

  constexpr void __set__promoBannerGo(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::RectTransform*& __get__promoBannerTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get__promoBannerTransform() const;

  constexpr void __set__promoBannerTransform(::UnityEngine::RectTransform* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__promoText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__promoText() const;

  constexpr void __set__promoText(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::UI::Image*& __get__backgroundImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__backgroundImage() const;

  constexpr void __set__backgroundImage(::UnityEngine::UI::Image* value);

  constexpr ::GlobalNamespace::IBeatmapLevelPack*& __get__currentPromoMusicPack();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPack*> const& __get__currentPromoMusicPack() const;

  constexpr void __set__currentPromoMusicPack(::GlobalNamespace::IBeatmapLevelPack* value);

  constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& __get__currentPromoBeatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& __get__currentPromoBeatmapLevel() const;

  constexpr void __set__currentPromoBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel* value);

  constexpr ::StringW& __get__text();

  constexpr ::StringW const& __get__text() const;

  constexpr void __set__text(::StringW value);

  /// @brief Method get_currentPromoBeatmapLevel addr 0x22e77a8 size 0x8 virtual false final false
  inline ::GlobalNamespace::IPreviewBeatmapLevel* get_currentPromoBeatmapLevel();

  /// @brief Method get_currentPromoMusicPack addr 0x22e77b0 size 0x8 virtual false final false
  inline ::GlobalNamespace::IBeatmapLevelPack* get_currentPromoMusicPack();

  /// @brief Method get_promoButtonText addr 0x22e77b8 size 0x8 virtual false final false
  inline ::StringW get_promoButtonText();

  /// @brief Method Setup addr 0x22e77c0 size 0x110 virtual false final false
  inline void Setup(::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo* musicPackPromoData, bool probablyOwned);

  static inline ::GlobalNamespace::MusicPackPromoBanner* New_ctor();

  /// @brief Method .ctor addr 0x22e78d0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MusicPackPromoBanner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MusicPackPromoBanner(MusicPackPromoBanner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MusicPackPromoBanner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MusicPackPromoBanner(MusicPackPromoBanner const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MusicPackPromoBanner();

public:
  /// @brief Field _promoBannerGo, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____promoBannerGo;

  /// @brief Field _promoBannerTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ____promoBannerTransform;

  /// @brief Field _promoText, offset: 0x28, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____promoText;

  /// @brief Field _backgroundImage, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____backgroundImage;

  /// @brief Field _currentPromoMusicPack, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelPack* ____currentPromoMusicPack;

  /// @brief Field _currentPromoBeatmapLevel, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* ____currentPromoBeatmapLevel;

  /// @brief Field _text, offset: 0x48, size: 0x8, def value: None
  ::StringW ____text;

  /// @brief Field kPlayNow offset 0xffffffff size 0x8
  static constexpr ::ConstString kPlayNow{ u"PROMO_BANNER_PLAY_NOW_LABEL" };

  /// @brief Field kGetNow offset 0xffffffff size 0x8
  static constexpr ::ConstString kGetNow{ u"PROMO_GET_NOW_LABEL" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MusicPackPromoBanner, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MusicPackPromoBanner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MusicPackPromoBanner*, "", "MusicPackPromoBanner");
