#pragma once
// IWYU pragma private; include "GlobalNamespace/VisualMetronome.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VisualMetronome)
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class VisualMetronome;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VisualMetronome);
// Type: ::VisualMetronome
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 125, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VisualMetronome*
class CORDL_TYPE VisualMetronome : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioSource, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioSource, put = __cordl_internal_set__audioSource)) ::UnityW<::UnityEngine::AudioSource> _audioSource;

  /// @brief Field _direction, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__direction, put = __cordl_internal_set__direction)) float_t _direction;

  /// @brief Field _dontTickThisFrame, offset 0x7c, size 0x1
  __declspec(property(get = __cordl_internal_get__dontTickThisFrame, put = __cordl_internal_set__dontTickThisFrame)) bool _dontTickThisFrame;

  /// @brief Field _leftPadding, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__leftPadding, put = __cordl_internal_set__leftPadding)) float_t _leftPadding;

  /// @brief Field _metronomeInterval, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__metronomeInterval, put = __cordl_internal_set__metronomeInterval)) float_t _metronomeInterval;

  /// @brief Field _movingTicker, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__movingTicker, put = __cordl_internal_set__movingTicker)) ::UnityW<::UnityEngine::RectTransform> _movingTicker;

  /// @brief Field _movingTickerImage, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__movingTickerImage, put = __cordl_internal_set__movingTickerImage)) ::UnityW<::UnityEngine::UI::Image> _movingTickerImage;

  /// @brief Field _normalTickerSize, offset 0x54, size 0x8
  __declspec(property(get = __cordl_internal_get__normalTickerSize, put = __cordl_internal_set__normalTickerSize)) ::UnityEngine::Vector2 _normalTickerSize;

  /// @brief Field _prevAudioTime, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__prevAudioTime, put = __cordl_internal_set__prevAudioTime)) float_t _prevAudioTime;

  /// @brief Field _rightPadding, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__rightPadding, put = __cordl_internal_set__rightPadding)) float_t _rightPadding;

  /// @brief Field _smooth, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__smooth, put = __cordl_internal_set__smooth)) float_t _smooth;

  /// @brief Field _tickTickerSize0, offset 0x5c, size 0x8
  __declspec(property(get = __cordl_internal_get__tickTickerSize0, put = __cordl_internal_set__tickTickerSize0)) ::UnityEngine::Vector2 _tickTickerSize0;

  /// @brief Field _tickTickerSize1, offset 0x64, size 0x8
  __declspec(property(get = __cordl_internal_get__tickTickerSize1, put = __cordl_internal_set__tickTickerSize1)) ::UnityEngine::Vector2 _tickTickerSize1;

  /// @brief Field _ticker, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__ticker, put = __cordl_internal_set__ticker)) ::UnityW<::UnityEngine::RectTransform> _ticker;

  /// @brief Field _tickerImage, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__tickerImage, put = __cordl_internal_set__tickerImage)) ::UnityW<::UnityEngine::UI::Image> _tickerImage;

  /// @brief Field _zeroOffset, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get__zeroOffset, put = __cordl_internal_set__zeroOffset)) float_t _zeroOffset;

  __declspec(property(put = set_movingTickerColor)) ::UnityEngine::Color movingTickerColor;

  __declspec(property(put = set_tickerColor)) ::UnityEngine::Color tickerColor;

  __declspec(property(get = get_zeroOffset, put = set_zeroOffset)) float_t zeroOffset;

  /// @brief Method Awake, addr 0x3b7cd24, size 0x98, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::VisualMetronome* New_ctor();

  /// @brief Method OnDisable, addr 0x3b7ce04, size 0x48, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3b7cdbc, size 0x48, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method SetMovingTickerNormalizedPosition, addr 0x3b7cf98, size 0xa4, virtual false, abstract: false, final false
  inline void SetMovingTickerNormalizedPosition(float_t t);

  /// @brief Method Update, addr 0x3b7ce4c, size 0x14c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource();

  constexpr float_t const& __cordl_internal_get__direction() const;

  constexpr float_t& __cordl_internal_get__direction();

  constexpr bool const& __cordl_internal_get__dontTickThisFrame() const;

  constexpr bool& __cordl_internal_get__dontTickThisFrame();

  constexpr float_t const& __cordl_internal_get__leftPadding() const;

  constexpr float_t& __cordl_internal_get__leftPadding();

  constexpr float_t const& __cordl_internal_get__metronomeInterval() const;

  constexpr float_t& __cordl_internal_get__metronomeInterval();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__movingTicker() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__movingTicker();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__movingTickerImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__movingTickerImage();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__normalTickerSize() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__normalTickerSize();

  constexpr float_t const& __cordl_internal_get__prevAudioTime() const;

  constexpr float_t& __cordl_internal_get__prevAudioTime();

  constexpr float_t const& __cordl_internal_get__rightPadding() const;

  constexpr float_t& __cordl_internal_get__rightPadding();

  constexpr float_t const& __cordl_internal_get__smooth() const;

  constexpr float_t& __cordl_internal_get__smooth();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__tickTickerSize0() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__tickTickerSize0();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__tickTickerSize1() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__tickTickerSize1();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__ticker() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__ticker();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__tickerImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__tickerImage();

  constexpr float_t const& __cordl_internal_get__zeroOffset() const;

  constexpr float_t& __cordl_internal_get__zeroOffset();

  constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set__direction(float_t value);

  constexpr void __cordl_internal_set__dontTickThisFrame(bool value);

  constexpr void __cordl_internal_set__leftPadding(float_t value);

  constexpr void __cordl_internal_set__metronomeInterval(float_t value);

  constexpr void __cordl_internal_set__movingTicker(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__movingTickerImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__normalTickerSize(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__prevAudioTime(float_t value);

  constexpr void __cordl_internal_set__rightPadding(float_t value);

  constexpr void __cordl_internal_set__smooth(float_t value);

  constexpr void __cordl_internal_set__tickTickerSize0(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__tickTickerSize1(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__ticker(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__tickerImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__zeroOffset(float_t value);

  /// @brief Method .ctor, addr 0x3b7d03c, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_zeroOffset, addr 0x3b7cd1c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_zeroOffset();

  /// @brief Method set_movingTickerColor, addr 0x3b7cce8, size 0x24, virtual false, abstract: false, final false
  inline void set_movingTickerColor(::UnityEngine::Color value);

  /// @brief Method set_tickerColor, addr 0x3b7ccc4, size 0x24, virtual false, abstract: false, final false
  inline void set_tickerColor(::UnityEngine::Color value);

  /// @brief Method set_zeroOffset, addr 0x3b7cd0c, size 0x10, virtual false, abstract: false, final false
  inline void set_zeroOffset(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualMetronome();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualMetronome", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualMetronome(VisualMetronome&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualMetronome", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualMetronome(VisualMetronome const&) = delete;

  /// @brief Field _audioSource, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ____audioSource;

  /// @brief Field _leftPadding, offset: 0x28, size: 0x4, def value: None
  float_t ____leftPadding;

  /// @brief Field _rightPadding, offset: 0x2c, size: 0x4, def value: None
  float_t ____rightPadding;

  /// @brief Field _ticker, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____ticker;

  /// @brief Field _movingTicker, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____movingTicker;

  /// @brief Field _tickerImage, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____tickerImage;

  /// @brief Field _movingTickerImage, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____movingTickerImage;

  /// @brief Field _metronomeInterval, offset: 0x50, size: 0x4, def value: None
  float_t ____metronomeInterval;

  /// @brief Field _normalTickerSize, offset: 0x54, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____normalTickerSize;

  /// @brief Field _tickTickerSize0, offset: 0x5c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____tickTickerSize0;

  /// @brief Field _tickTickerSize1, offset: 0x64, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____tickTickerSize1;

  /// @brief Field _smooth, offset: 0x6c, size: 0x4, def value: None
  float_t ____smooth;

  /// @brief Field _prevAudioTime, offset: 0x70, size: 0x4, def value: None
  float_t ____prevAudioTime;

  /// @brief Field _zeroOffset, offset: 0x74, size: 0x4, def value: None
  float_t ____zeroOffset;

  /// @brief Field _direction, offset: 0x78, size: 0x4, def value: None
  float_t ____direction;

  /// @brief Field _dontTickThisFrame, offset: 0x7c, size: 0x1, def value: None
  bool ____dontTickThisFrame;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4715 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VisualMetronome, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualMetronome, ____audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualMetronome, ____leftPadding) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualMetronome, ____rightPadding) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualMetronome, ____ticker) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualMetronome, ____movingTicker) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualMetronome, ____tickerImage) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualMetronome, ____movingTickerImage) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualMetronome, ____metronomeInterval) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualMetronome, ____normalTickerSize) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualMetronome, ____tickTickerSize0) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualMetronome, ____tickTickerSize1) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualMetronome, ____smooth) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualMetronome, ____prevAudioTime) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualMetronome, ____zeroOffset) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualMetronome, ____direction) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualMetronome, ____dontTickThisFrame) == 0x7c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VisualMetronome);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VisualMetronome*, "", "VisualMetronome");
