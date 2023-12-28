#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SongProgressUIController)
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
namespace System::Text {
class StringBuilder;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine::UI {
class Slider;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
// Forward declare root types
namespace GlobalNamespace {
class SongProgressUIController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongProgressUIController);
// Type: ::SongProgressUIController
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5048))
// CS Name: ::SongProgressUIController*
class CORDL_TYPE SongProgressUIController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _slider, offset 0x18, size 0x8
  __declspec(property(get = __get__slider, put = __set__slider))::UnityEngine::UI::Slider* _slider;

  /// @brief Field _progressImage, offset 0x20, size 0x8
  __declspec(property(get = __get__progressImage, put = __set__progressImage))::UnityEngine::UI::Image* _progressImage;

  /// @brief Field _durationMinutesText, offset 0x28, size 0x8
  __declspec(property(get = __get__durationMinutesText, put = __set__durationMinutesText))::TMPro::TextMeshProUGUI* _durationMinutesText;

  /// @brief Field _durationSecondsText, offset 0x30, size 0x8
  __declspec(property(get = __get__durationSecondsText, put = __set__durationSecondsText))::TMPro::TextMeshProUGUI* _durationSecondsText;

  /// @brief Field _progressMinutesText, offset 0x38, size 0x8
  __declspec(property(get = __get__progressMinutesText, put = __set__progressMinutesText))::TMPro::TextMeshProUGUI* _progressMinutesText;

  /// @brief Field _progressSecondsText, offset 0x40, size 0x8
  __declspec(property(get = __get__progressSecondsText, put = __set__progressSecondsText))::TMPro::TextMeshProUGUI* _progressSecondsText;

  /// @brief Field _audioTimeSource, offset 0x48, size 0x8
  __declspec(property(get = __get__audioTimeSource, put = __set__audioTimeSource))::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _prevMinutes, offset 0x50, size 0x4
  __declspec(property(get = __get__prevMinutes, put = __set__prevMinutes)) int32_t _prevMinutes;

  /// @brief Field _prevSeconds, offset 0x54, size 0x4
  __declspec(property(get = __get__prevSeconds, put = __set__prevSeconds)) int32_t _prevSeconds;

  /// @brief Field _stringBuilder, offset 0x58, size 0x8
  __declspec(property(get = __get__stringBuilder, put = __set__stringBuilder))::System::Text::StringBuilder* _stringBuilder;

  /// @brief Field _progressImageRectTransform, offset 0x60, size 0x8
  __declspec(property(get = __get__progressImageRectTransform, put = __set__progressImageRectTransform))::UnityEngine::RectTransform* _progressImageRectTransform;

  constexpr ::UnityEngine::UI::Slider*& __get__slider();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Slider*> const& __get__slider() const;

  constexpr void __set__slider(::UnityEngine::UI::Slider* value);

  constexpr ::UnityEngine::UI::Image*& __get__progressImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__progressImage() const;

  constexpr void __set__progressImage(::UnityEngine::UI::Image* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__durationMinutesText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__durationMinutesText() const;

  constexpr void __set__durationMinutesText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__durationSecondsText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__durationSecondsText() const;

  constexpr void __set__durationSecondsText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__progressMinutesText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__progressMinutesText() const;

  constexpr void __set__progressMinutesText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__progressSecondsText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__progressSecondsText() const;

  constexpr void __set__progressSecondsText(::TMPro::TextMeshProUGUI* value);

  constexpr ::GlobalNamespace::IAudioTimeSource*& __get__audioTimeSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __get__audioTimeSource() const;

  constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr int32_t& __get__prevMinutes();

  constexpr int32_t const& __get__prevMinutes() const;

  constexpr void __set__prevMinutes(int32_t value);

  constexpr int32_t& __get__prevSeconds();

  constexpr int32_t const& __get__prevSeconds() const;

  constexpr void __set__prevSeconds(int32_t value);

  constexpr ::System::Text::StringBuilder*& __get__stringBuilder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __get__stringBuilder() const;

  constexpr void __set__stringBuilder(::System::Text::StringBuilder* value);

  constexpr ::UnityEngine::RectTransform*& __get__progressImageRectTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get__progressImageRectTransform() const;

  constexpr void __set__progressImageRectTransform(::UnityEngine::RectTransform* value);

  /// @brief Method Start addr 0x23c32f8 size 0x1a4 virtual false final false
  inline void Start();

  /// @brief Method Update addr 0x23c349c size 0x2c0 virtual false final false
  inline void Update();

  static inline ::GlobalNamespace::SongProgressUIController* New_ctor();

  /// @brief Method .ctor addr 0x23c375c size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SongProgressUIController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongProgressUIController(SongProgressUIController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongProgressUIController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongProgressUIController(SongProgressUIController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongProgressUIController();

public:
  /// @brief Field _slider, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UI::Slider* ____slider;

  /// @brief Field _progressImage, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____progressImage;

  /// @brief Field _durationMinutesText, offset: 0x28, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____durationMinutesText;

  /// @brief Field _durationSecondsText, offset: 0x30, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____durationSecondsText;

  /// @brief Field _progressMinutesText, offset: 0x38, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____progressMinutesText;

  /// @brief Field _progressSecondsText, offset: 0x40, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____progressSecondsText;

  /// @brief Field _audioTimeSource, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _prevMinutes, offset: 0x50, size: 0x4, def value: None
  int32_t ____prevMinutes;

  /// @brief Field _prevSeconds, offset: 0x54, size: 0x4, def value: None
  int32_t ____prevSeconds;

  /// @brief Field _stringBuilder, offset: 0x58, size: 0x8, def value: None
  ::System::Text::StringBuilder* ____stringBuilder;

  /// @brief Field _progressImageRectTransform, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ____progressImageRectTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongProgressUIController, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongProgressUIController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongProgressUIController*, "", "SongProgressUIController");
