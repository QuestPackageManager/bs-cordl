#pragma once
// IWYU pragma private; include "GlobalNamespace/DroppedFramesLabel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DroppedFramesLabel)
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class DroppedFramesLabel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DroppedFramesLabel);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DroppedFramesLabel
class CORDL_TYPE DroppedFramesLabel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _expectedFrameRate, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__expectedFrameRate, put = __cordl_internal_set__expectedFrameRate)) int32_t _expectedFrameRate;

  /// @brief Field _frameCountInInterval, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__frameCountInInterval, put = __cordl_internal_set__frameCountInInterval)) int32_t _frameCountInInterval;

  /// @brief Field _intervalTime, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__intervalTime, put = __cordl_internal_set__intervalTime)) float_t _intervalTime;

  /// @brief Field _maxFrameTimeInInterval, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__maxFrameTimeInInterval, put = __cordl_internal_set__maxFrameTimeInInterval)) float_t _maxFrameTimeInInterval;

  /// @brief Field _resetInterval, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__resetInterval, put = __cordl_internal_set__resetInterval)) int32_t _resetInterval;

  /// @brief Field _syncedFrameTime, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__syncedFrameTime, put = __cordl_internal_set__syncedFrameTime)) float_t _syncedFrameTime;

  /// @brief Field _text, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text)) ::UnityW<::TMPro::TextMeshProUGUI> _text;

  /// @brief Field _totalNumberOfDroppedFrames, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__totalNumberOfDroppedFrames, put = __cordl_internal_set__totalNumberOfDroppedFrames)) int32_t _totalNumberOfDroppedFrames;

  static inline ::GlobalNamespace::DroppedFramesLabel* New_ctor();

  /// @brief Method RefreshText, addr 0x39c01cc, size 0x168, virtual false, abstract: false, final false
  inline void RefreshText();

  /// @brief Method Start, addr 0x39c00c8, size 0x74, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x39c013c, size 0x90, virtual false, abstract: false, final false
  inline void Update();

  constexpr int32_t const& __cordl_internal_get__expectedFrameRate() const;

  constexpr int32_t& __cordl_internal_get__expectedFrameRate();

  constexpr int32_t const& __cordl_internal_get__frameCountInInterval() const;

  constexpr int32_t& __cordl_internal_get__frameCountInInterval();

  constexpr float_t const& __cordl_internal_get__intervalTime() const;

  constexpr float_t& __cordl_internal_get__intervalTime();

  constexpr float_t const& __cordl_internal_get__maxFrameTimeInInterval() const;

  constexpr float_t& __cordl_internal_get__maxFrameTimeInInterval();

  constexpr int32_t const& __cordl_internal_get__resetInterval() const;

  constexpr int32_t& __cordl_internal_get__resetInterval();

  constexpr float_t const& __cordl_internal_get__syncedFrameTime() const;

  constexpr float_t& __cordl_internal_get__syncedFrameTime();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__text();

  constexpr int32_t const& __cordl_internal_get__totalNumberOfDroppedFrames() const;

  constexpr int32_t& __cordl_internal_get__totalNumberOfDroppedFrames();

  constexpr void __cordl_internal_set__expectedFrameRate(int32_t value);

  constexpr void __cordl_internal_set__frameCountInInterval(int32_t value);

  constexpr void __cordl_internal_set__intervalTime(float_t value);

  constexpr void __cordl_internal_set__maxFrameTimeInInterval(float_t value);

  constexpr void __cordl_internal_set__resetInterval(int32_t value);

  constexpr void __cordl_internal_set__syncedFrameTime(float_t value);

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__totalNumberOfDroppedFrames(int32_t value);

  /// @brief Method .ctor, addr 0x39c0334, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DroppedFramesLabel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DroppedFramesLabel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DroppedFramesLabel(DroppedFramesLabel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DroppedFramesLabel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DroppedFramesLabel(DroppedFramesLabel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16406 };

  /// @brief Field _text, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____text;

  /// @brief Field _expectedFrameRate, offset: 0x28, size: 0x4, def value: None
  int32_t ____expectedFrameRate;

  /// @brief Field _resetInterval, offset: 0x2c, size: 0x4, def value: None
  int32_t ____resetInterval;

  /// @brief Field _totalNumberOfDroppedFrames, offset: 0x30, size: 0x4, def value: None
  int32_t ____totalNumberOfDroppedFrames;

  /// @brief Field _syncedFrameTime, offset: 0x34, size: 0x4, def value: None
  float_t ____syncedFrameTime;

  /// @brief Field _intervalTime, offset: 0x38, size: 0x4, def value: None
  float_t ____intervalTime;

  /// @brief Field _maxFrameTimeInInterval, offset: 0x3c, size: 0x4, def value: None
  float_t ____maxFrameTimeInInterval;

  /// @brief Field _frameCountInInterval, offset: 0x40, size: 0x4, def value: None
  int32_t ____frameCountInInterval;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DroppedFramesLabel, ____text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroppedFramesLabel, ____expectedFrameRate) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroppedFramesLabel, ____resetInterval) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroppedFramesLabel, ____totalNumberOfDroppedFrames) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroppedFramesLabel, ____syncedFrameTime) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroppedFramesLabel, ____intervalTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroppedFramesLabel, ____maxFrameTimeInInterval) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroppedFramesLabel, ____frameCountInInterval) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DroppedFramesLabel, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DroppedFramesLabel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DroppedFramesLabel*, "", "DroppedFramesLabel");
