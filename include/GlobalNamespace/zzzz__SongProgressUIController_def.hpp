#pragma once
// IWYU pragma private; include "GlobalNamespace/SongProgressUIController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SongProgressUIController)
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class SongController;
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
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 145, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SongProgressUIController*
class CORDL_TYPE SongProgressUIController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioTimeSource, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSource, put = __cordl_internal_set__audioTimeSource))::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _durationMinutesText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__durationMinutesText, put = __cordl_internal_set__durationMinutesText))::UnityW<::TMPro::TextMeshProUGUI> _durationMinutesText;

  /// @brief Field _durationRectTransform, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__durationRectTransform, put = __cordl_internal_set__durationRectTransform))::UnityW<::UnityEngine::RectTransform> _durationRectTransform;

  /// @brief Field _durationSecondsText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__durationSecondsText, put = __cordl_internal_set__durationSecondsText))::UnityW<::TMPro::TextMeshProUGUI> _durationSecondsText;

  /// @brief Field _durationTextOffsetLong, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__durationTextOffsetLong, put = __cordl_internal_set__durationTextOffsetLong)) float_t _durationTextOffsetLong;

  /// @brief Field _durationTextOffsetShort, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__durationTextOffsetShort, put = __cordl_internal_set__durationTextOffsetShort)) float_t _durationTextOffsetShort;

  /// @brief Field _prevMinutes, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__prevMinutes, put = __cordl_internal_set__prevMinutes)) int32_t _prevMinutes;

  /// @brief Field _prevSeconds, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__prevSeconds, put = __cordl_internal_set__prevSeconds)) int32_t _prevSeconds;

  /// @brief Field _progressImage, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__progressImage, put = __cordl_internal_set__progressImage))::UnityW<::UnityEngine::UI::Image> _progressImage;

  /// @brief Field _progressImageRectTransform, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__progressImageRectTransform,
                      put = __cordl_internal_set__progressImageRectTransform))::UnityW<::UnityEngine::RectTransform> _progressImageRectTransform;

  /// @brief Field _progressMinutesFormatString, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__progressMinutesFormatString, put = __cordl_internal_set__progressMinutesFormatString))::StringW _progressMinutesFormatString;

  /// @brief Field _progressMinutesText, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__progressMinutesText, put = __cordl_internal_set__progressMinutesText))::UnityW<::TMPro::TextMeshProUGUI> _progressMinutesText;

  /// @brief Field _progressSecondsText, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__progressSecondsText, put = __cordl_internal_set__progressSecondsText))::UnityW<::TMPro::TextMeshProUGUI> _progressSecondsText;

  /// @brief Field _slider, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__slider, put = __cordl_internal_set__slider))::UnityW<::UnityEngine::UI::Slider> _slider;

  /// @brief Field _songController, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__songController, put = __cordl_internal_set__songController))::UnityW<::GlobalNamespace::SongController> _songController;

  /// @brief Field _songDidFinish, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get__songDidFinish, put = __cordl_internal_set__songDidFinish)) bool _songDidFinish;

  /// @brief Field _songLength, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__songLength, put = __cordl_internal_set__songLength)) float_t _songLength;

  /// @brief Field _stringBuilder, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__stringBuilder, put = __cordl_internal_set__stringBuilder))::System::Text::StringBuilder* _stringBuilder;

  /// @brief Method HandleSongDidFinish, addr 0x270e7f4, size 0x4c, virtual false, abstract: false, final false
  inline void HandleSongDidFinish();

  static inline ::GlobalNamespace::SongProgressUIController* New_ctor();

  /// @brief Method OnDestroy, addr 0x270e3e4, size 0xd4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x270e16c, size 0x278, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x270e4b8, size 0xf8, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateSongProgressUIElements, addr 0x270e5b0, size 0x244, virtual false, abstract: false, final false
  inline void UpdateSongProgressUIElements(int32_t minutes, int32_t seconds);

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __cordl_internal_get__audioTimeSource() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__durationMinutesText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__durationMinutesText();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__durationRectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__durationRectTransform();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__durationSecondsText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__durationSecondsText();

  constexpr float_t const& __cordl_internal_get__durationTextOffsetLong() const;

  constexpr float_t& __cordl_internal_get__durationTextOffsetLong();

  constexpr float_t const& __cordl_internal_get__durationTextOffsetShort() const;

  constexpr float_t& __cordl_internal_get__durationTextOffsetShort();

  constexpr int32_t const& __cordl_internal_get__prevMinutes() const;

  constexpr int32_t& __cordl_internal_get__prevMinutes();

  constexpr int32_t const& __cordl_internal_get__prevSeconds() const;

  constexpr int32_t& __cordl_internal_get__prevSeconds();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__progressImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__progressImage();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__progressImageRectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__progressImageRectTransform();

  constexpr ::StringW const& __cordl_internal_get__progressMinutesFormatString() const;

  constexpr ::StringW& __cordl_internal_get__progressMinutesFormatString();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__progressMinutesText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__progressMinutesText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__progressSecondsText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__progressSecondsText();

  constexpr ::UnityW<::UnityEngine::UI::Slider> const& __cordl_internal_get__slider() const;

  constexpr ::UnityW<::UnityEngine::UI::Slider>& __cordl_internal_get__slider();

  constexpr ::UnityW<::GlobalNamespace::SongController> const& __cordl_internal_get__songController() const;

  constexpr ::UnityW<::GlobalNamespace::SongController>& __cordl_internal_get__songController();

  constexpr bool const& __cordl_internal_get__songDidFinish() const;

  constexpr bool& __cordl_internal_get__songDidFinish();

  constexpr float_t const& __cordl_internal_get__songLength() const;

  constexpr float_t& __cordl_internal_get__songLength();

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get__stringBuilder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get__stringBuilder() const;

  constexpr void __cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr void __cordl_internal_set__durationMinutesText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__durationRectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__durationSecondsText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__durationTextOffsetLong(float_t value);

  constexpr void __cordl_internal_set__durationTextOffsetShort(float_t value);

  constexpr void __cordl_internal_set__prevMinutes(int32_t value);

  constexpr void __cordl_internal_set__prevSeconds(int32_t value);

  constexpr void __cordl_internal_set__progressImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__progressImageRectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__progressMinutesFormatString(::StringW value);

  constexpr void __cordl_internal_set__progressMinutesText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__progressSecondsText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__slider(::UnityW<::UnityEngine::UI::Slider> value);

  constexpr void __cordl_internal_set__songController(::UnityW<::GlobalNamespace::SongController> value);

  constexpr void __cordl_internal_set__songDidFinish(bool value);

  constexpr void __cordl_internal_set__songLength(float_t value);

  constexpr void __cordl_internal_set__stringBuilder(::System::Text::StringBuilder* value);

  /// @brief Method .ctor, addr 0x270e840, size 0x1c, virtual false, abstract: false, final false
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

  /// @brief Field _durationRectTransform, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____durationRectTransform;

  /// @brief Field _durationTextOffsetShort, offset: 0x50, size: 0x4, def value: None
  float_t ____durationTextOffsetShort;

  /// @brief Field _durationTextOffsetLong, offset: 0x54, size: 0x4, def value: None
  float_t ____durationTextOffsetLong;

  /// @brief Field _audioTimeSource, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _songController, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongController> ____songController;

  /// @brief Field _prevMinutes, offset: 0x68, size: 0x4, def value: None
  int32_t ____prevMinutes;

  /// @brief Field _prevSeconds, offset: 0x6c, size: 0x4, def value: None
  int32_t ____prevSeconds;

  /// @brief Field _stringBuilder, offset: 0x70, size: 0x8, def value: None
  ::System::Text::StringBuilder* ____stringBuilder;

  /// @brief Field _progressImageRectTransform, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____progressImageRectTransform;

  /// @brief Field _songLength, offset: 0x80, size: 0x4, def value: None
  float_t ____songLength;

  /// @brief Field _progressMinutesFormatString, offset: 0x88, size: 0x8, def value: None
  ::StringW ____progressMinutesFormatString;

  /// @brief Field _songDidFinish, offset: 0x90, size: 0x1, def value: None
  bool ____songDidFinish;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongProgressUIController, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProgressUIController, ____slider) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProgressUIController, ____progressImage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProgressUIController, ____durationMinutesText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProgressUIController, ____durationSecondsText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProgressUIController, ____progressMinutesText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProgressUIController, ____progressSecondsText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProgressUIController, ____durationRectTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProgressUIController, ____durationTextOffsetShort) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProgressUIController, ____durationTextOffsetLong) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProgressUIController, ____audioTimeSource) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProgressUIController, ____songController) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProgressUIController, ____prevMinutes) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProgressUIController, ____prevSeconds) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProgressUIController, ____stringBuilder) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProgressUIController, ____progressImageRectTransform) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProgressUIController, ____songLength) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProgressUIController, ____progressMinutesFormatString) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongProgressUIController, ____songDidFinish) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongProgressUIController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongProgressUIController*, "", "SongProgressUIController");
