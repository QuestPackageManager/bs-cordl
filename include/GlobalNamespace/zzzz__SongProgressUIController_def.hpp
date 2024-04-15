#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SongProgressUIController)
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace System::Text {
class StringBuilder;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Slider;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class SongProgressUIController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongProgressUIController);
// Type: ::SongProgressUIController
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 108, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SongProgressUIController*
class CORDL_TYPE SongProgressUIController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioTimeSource, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSource, put = __cordl_internal_set__audioTimeSource))::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _durationMinutesText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__durationMinutesText, put = __cordl_internal_set__durationMinutesText))::UnityW<::TMPro::TextMeshProUGUI> _durationMinutesText;

  /// @brief Field _durationSecondsText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__durationSecondsText, put = __cordl_internal_set__durationSecondsText))::UnityW<::TMPro::TextMeshProUGUI> _durationSecondsText;

  /// @brief Field _prevMinutes, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__prevMinutes, put = __cordl_internal_set__prevMinutes)) int32_t _prevMinutes;

  /// @brief Field _prevSeconds, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__prevSeconds, put = __cordl_internal_set__prevSeconds)) int32_t _prevSeconds;

  /// @brief Field _progressImage, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__progressImage, put = __cordl_internal_set__progressImage))::UnityW<::UnityEngine::UI::Image> _progressImage;

  /// @brief Field _progressImageRectTransform, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__progressImageRectTransform,
                      put = __cordl_internal_set__progressImageRectTransform))::UnityW<::UnityEngine::RectTransform> _progressImageRectTransform;

  /// @brief Field _progressMinutesText, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__progressMinutesText, put = __cordl_internal_set__progressMinutesText))::UnityW<::TMPro::TextMeshProUGUI> _progressMinutesText;

  /// @brief Field _progressSecondsText, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__progressSecondsText, put = __cordl_internal_set__progressSecondsText))::UnityW<::TMPro::TextMeshProUGUI> _progressSecondsText;

  /// @brief Field _slider, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__slider, put = __cordl_internal_set__slider))::UnityW<::UnityEngine::UI::Slider> _slider;

  /// @brief Field _stringBuilder, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__stringBuilder, put = __cordl_internal_set__stringBuilder))::System::Text::StringBuilder* _stringBuilder;

  /// @brief Field songLength, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_songLength, put = __cordl_internal_set_songLength)) float_t songLength;

  static inline ::GlobalNamespace::SongProgressUIController* New_ctor();

  /// @brief Method Start, addr 0x25e29b8, size 0x1a4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x25e2b5c, size 0x2cc, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __cordl_internal_get__audioTimeSource() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__durationMinutesText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__durationMinutesText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__durationSecondsText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__durationSecondsText();

  constexpr int32_t const& __cordl_internal_get__prevMinutes() const;

  constexpr int32_t& __cordl_internal_get__prevMinutes();

  constexpr int32_t const& __cordl_internal_get__prevSeconds() const;

  constexpr int32_t& __cordl_internal_get__prevSeconds();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__progressImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__progressImage();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__progressImageRectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__progressImageRectTransform();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__progressMinutesText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__progressMinutesText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__progressSecondsText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__progressSecondsText();

  constexpr ::UnityW<::UnityEngine::UI::Slider> const& __cordl_internal_get__slider() const;

  constexpr ::UnityW<::UnityEngine::UI::Slider>& __cordl_internal_get__slider();

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get__stringBuilder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get__stringBuilder() const;

  constexpr float_t const& __cordl_internal_get_songLength() const;

  constexpr float_t& __cordl_internal_get_songLength();

  constexpr void __cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr void __cordl_internal_set__durationMinutesText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__durationSecondsText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__prevMinutes(int32_t value);

  constexpr void __cordl_internal_set__prevSeconds(int32_t value);

  constexpr void __cordl_internal_set__progressImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__progressImageRectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__progressMinutesText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__progressSecondsText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__slider(::UnityW<::UnityEngine::UI::Slider> value);

  constexpr void __cordl_internal_set__stringBuilder(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set_songLength(float_t value);

  /// @brief Method .ctor, addr 0x25e2e28, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongProgressUIController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SongProgressUIController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongProgressUIController(SongProgressUIController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongProgressUIController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongProgressUIController(SongProgressUIController const&) = delete;

  /// @brief Field _slider, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Slider> ____slider;

  /// @brief Field _progressImage, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____progressImage;

  /// @brief Field _durationMinutesText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____durationMinutesText;

  /// @brief Field _durationSecondsText, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____durationSecondsText;

  /// @brief Field _progressMinutesText, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____progressMinutesText;

  /// @brief Field _progressSecondsText, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____progressSecondsText;

  /// @brief Field _audioTimeSource, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _prevMinutes, offset: 0x50, size: 0x4, def value: None
  int32_t ____prevMinutes;

  /// @brief Field _prevSeconds, offset: 0x54, size: 0x4, def value: None
  int32_t ____prevSeconds;

  /// @brief Field _stringBuilder, offset: 0x58, size: 0x8, def value: None
  ::System::Text::StringBuilder* ____stringBuilder;

  /// @brief Field _progressImageRectTransform, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____progressImageRectTransform;

  /// @brief Field songLength, offset: 0x68, size: 0x4, def value: None
  float_t ___songLength;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongProgressUIController, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProgressUIController, ____slider) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProgressUIController, ____progressImage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProgressUIController, ____durationMinutesText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProgressUIController, ____durationSecondsText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProgressUIController, ____progressMinutesText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProgressUIController, ____progressSecondsText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProgressUIController, ____audioTimeSource) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProgressUIController, ____prevMinutes) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProgressUIController, ____prevSeconds) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProgressUIController, ____stringBuilder) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProgressUIController, ____progressImageRectTransform) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProgressUIController, ___songLength) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongProgressUIController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongProgressUIController*, "", "SongProgressUIController");
