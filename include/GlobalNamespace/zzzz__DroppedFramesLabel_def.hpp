#pragma once
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
// Type: ::DroppedFramesLabel
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13823))
// CS Name: ::DroppedFramesLabel*
class CORDL_TYPE DroppedFramesLabel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _text, offset 0x18, size 0x8
  __declspec(property(get = __get__text, put = __set__text))::TMPro::TextMeshProUGUI* _text;

  /// @brief Field _expectedFrameRate, offset 0x20, size 0x4
  __declspec(property(get = __get__expectedFrameRate, put = __set__expectedFrameRate)) int32_t _expectedFrameRate;

  /// @brief Field _resetInterval, offset 0x24, size 0x4
  __declspec(property(get = __get__resetInterval, put = __set__resetInterval)) int32_t _resetInterval;

  /// @brief Field _totalNumberOfDroppedFrames, offset 0x28, size 0x4
  __declspec(property(get = __get__totalNumberOfDroppedFrames, put = __set__totalNumberOfDroppedFrames)) int32_t _totalNumberOfDroppedFrames;

  /// @brief Field _syncedFrameTime, offset 0x2c, size 0x4
  __declspec(property(get = __get__syncedFrameTime, put = __set__syncedFrameTime)) float_t _syncedFrameTime;

  /// @brief Field _intervalTime, offset 0x30, size 0x4
  __declspec(property(get = __get__intervalTime, put = __set__intervalTime)) float_t _intervalTime;

  /// @brief Field _maxFrameTimeInInterval, offset 0x34, size 0x4
  __declspec(property(get = __get__maxFrameTimeInInterval, put = __set__maxFrameTimeInInterval)) float_t _maxFrameTimeInInterval;

  /// @brief Field _frameCountInInterval, offset 0x38, size 0x4
  __declspec(property(get = __get__frameCountInInterval, put = __set__frameCountInInterval)) int32_t _frameCountInInterval;

  constexpr ::TMPro::TextMeshProUGUI*& __get__text();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__text() const;

  constexpr void __set__text(::TMPro::TextMeshProUGUI* value);

  constexpr int32_t& __get__expectedFrameRate();

  constexpr int32_t const& __get__expectedFrameRate() const;

  constexpr void __set__expectedFrameRate(int32_t value);

  constexpr int32_t& __get__resetInterval();

  constexpr int32_t const& __get__resetInterval() const;

  constexpr void __set__resetInterval(int32_t value);

  constexpr int32_t& __get__totalNumberOfDroppedFrames();

  constexpr int32_t const& __get__totalNumberOfDroppedFrames() const;

  constexpr void __set__totalNumberOfDroppedFrames(int32_t value);

  constexpr float_t& __get__syncedFrameTime();

  constexpr float_t const& __get__syncedFrameTime() const;

  constexpr void __set__syncedFrameTime(float_t value);

  constexpr float_t& __get__intervalTime();

  constexpr float_t const& __get__intervalTime() const;

  constexpr void __set__intervalTime(float_t value);

  constexpr float_t& __get__maxFrameTimeInInterval();

  constexpr float_t const& __get__maxFrameTimeInInterval() const;

  constexpr void __set__maxFrameTimeInInterval(float_t value);

  constexpr int32_t& __get__frameCountInInterval();

  constexpr int32_t const& __get__frameCountInInterval() const;

  constexpr void __set__frameCountInInterval(int32_t value);

  /// @brief Method Start addr 0x1f92e38 size 0x74 virtual false final false
  inline void Start();

  /// @brief Method Update addr 0x1f92eac size 0x90 virtual false final false
  inline void Update();

  /// @brief Method RefreshText addr 0x1f92f3c size 0x168 virtual false final false
  inline void RefreshText();

  static inline ::GlobalNamespace::DroppedFramesLabel* New_ctor();

  /// @brief Method .ctor addr 0x1f930a4 size 0x14 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DroppedFramesLabel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DroppedFramesLabel(DroppedFramesLabel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DroppedFramesLabel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DroppedFramesLabel(DroppedFramesLabel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DroppedFramesLabel();

public:
  /// @brief Field _text, offset: 0x18, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____text;

  /// @brief Field _expectedFrameRate, offset: 0x20, size: 0x4, def value: None
  int32_t ____expectedFrameRate;

  /// @brief Field _resetInterval, offset: 0x24, size: 0x4, def value: None
  int32_t ____resetInterval;

  /// @brief Field _totalNumberOfDroppedFrames, offset: 0x28, size: 0x4, def value: None
  int32_t ____totalNumberOfDroppedFrames;

  /// @brief Field _syncedFrameTime, offset: 0x2c, size: 0x4, def value: None
  float_t ____syncedFrameTime;

  /// @brief Field _intervalTime, offset: 0x30, size: 0x4, def value: None
  float_t ____intervalTime;

  /// @brief Field _maxFrameTimeInInterval, offset: 0x34, size: 0x4, def value: None
  float_t ____maxFrameTimeInInterval;

  /// @brief Field _frameCountInInterval, offset: 0x38, size: 0x4, def value: None
  int32_t ____frameCountInInterval;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DroppedFramesLabel, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DroppedFramesLabel, ____text) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroppedFramesLabel, ____expectedFrameRate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroppedFramesLabel, ____resetInterval) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroppedFramesLabel, ____totalNumberOfDroppedFrames) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroppedFramesLabel, ____syncedFrameTime) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroppedFramesLabel, ____intervalTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroppedFramesLabel, ____maxFrameTimeInInterval) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroppedFramesLabel, ____frameCountInInterval) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DroppedFramesLabel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DroppedFramesLabel*, "", "DroppedFramesLabel");
