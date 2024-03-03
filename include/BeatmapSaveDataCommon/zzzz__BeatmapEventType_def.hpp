#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapEventType)
// Forward declare root types
namespace BeatmapSaveDataCommon {
struct BeatmapEventType;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataCommon::BeatmapEventType);
// Type: BeatmapSaveDataCommon::BeatmapEventType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataCommon {
// Is value type: true
// CS Name: ::BeatmapSaveDataCommon::BeatmapEventType
struct CORDL_TYPE BeatmapEventType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BeatmapEventType_Unwrapped
  enum struct __BeatmapEventType_Unwrapped : int32_t {
    __E_Event0 = static_cast<int32_t>(0x0),
    __E_Event1 = static_cast<int32_t>(0x1),
    __E_Event2 = static_cast<int32_t>(0x2),
    __E_Event3 = static_cast<int32_t>(0x3),
    __E_Event4 = static_cast<int32_t>(0x4),
    __E_Event5 = static_cast<int32_t>(0x5),
    __E_Event6 = static_cast<int32_t>(0x6),
    __E_Event7 = static_cast<int32_t>(0x7),
    __E_Event8 = static_cast<int32_t>(0x8),
    __E_Event9 = static_cast<int32_t>(0x9),
    __E_Event10 = static_cast<int32_t>(0xa),
    __E_Event11 = static_cast<int32_t>(0xb),
    __E_Event12 = static_cast<int32_t>(0xc),
    __E_Event13 = static_cast<int32_t>(0xd),
    __E_Event14 = static_cast<int32_t>(0xe),
    __E_Event15 = static_cast<int32_t>(0xf),
    __E_Event16 = static_cast<int32_t>(0x10),
    __E_Event17 = static_cast<int32_t>(0x11),
    __E_VoidEvent = static_cast<int32_t>(0xffffffff),
    __E_Special0 = static_cast<int32_t>(0x28),
    __E_Special1 = static_cast<int32_t>(0x29),
    __E_Special2 = static_cast<int32_t>(0x2a),
    __E_Special3 = static_cast<int32_t>(0x2b),
    __E_BpmChange = static_cast<int32_t>(0x64),
    __E_ColorBoostEventType = static_cast<int32_t>(0x5),
    __E_LegacyBpmEventType = static_cast<int32_t>(0xa),
    __E_EarlyRotationEventType = static_cast<int32_t>(0xe),
    __E_LateRotationEventType = static_cast<int32_t>(0xf),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BeatmapEventType_Unwrapped() const noexcept {
    return static_cast<__BeatmapEventType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEventType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BeatmapEventType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BpmChange value: static_cast<int32_t>(0x64)
  static ::BeatmapSaveDataCommon::BeatmapEventType const BpmChange;

  /// @brief Field ColorBoostEventType value: static_cast<int32_t>(0x5)
  static ::BeatmapSaveDataCommon::BeatmapEventType const ColorBoostEventType;

  /// @brief Field EarlyRotationEventType value: static_cast<int32_t>(0xe)
  static ::BeatmapSaveDataCommon::BeatmapEventType const EarlyRotationEventType;

  /// @brief Field Event0 value: static_cast<int32_t>(0x0)
  static ::BeatmapSaveDataCommon::BeatmapEventType const Event0;

  /// @brief Field Event1 value: static_cast<int32_t>(0x1)
  static ::BeatmapSaveDataCommon::BeatmapEventType const Event1;

  /// @brief Field Event10 value: static_cast<int32_t>(0xa)
  static ::BeatmapSaveDataCommon::BeatmapEventType const Event10;

  /// @brief Field Event11 value: static_cast<int32_t>(0xb)
  static ::BeatmapSaveDataCommon::BeatmapEventType const Event11;

  /// @brief Field Event12 value: static_cast<int32_t>(0xc)
  static ::BeatmapSaveDataCommon::BeatmapEventType const Event12;

  /// @brief Field Event13 value: static_cast<int32_t>(0xd)
  static ::BeatmapSaveDataCommon::BeatmapEventType const Event13;

  /// @brief Field Event14 value: static_cast<int32_t>(0xe)
  static ::BeatmapSaveDataCommon::BeatmapEventType const Event14;

  /// @brief Field Event15 value: static_cast<int32_t>(0xf)
  static ::BeatmapSaveDataCommon::BeatmapEventType const Event15;

  /// @brief Field Event16 value: static_cast<int32_t>(0x10)
  static ::BeatmapSaveDataCommon::BeatmapEventType const Event16;

  /// @brief Field Event17 value: static_cast<int32_t>(0x11)
  static ::BeatmapSaveDataCommon::BeatmapEventType const Event17;

  /// @brief Field Event2 value: static_cast<int32_t>(0x2)
  static ::BeatmapSaveDataCommon::BeatmapEventType const Event2;

  /// @brief Field Event3 value: static_cast<int32_t>(0x3)
  static ::BeatmapSaveDataCommon::BeatmapEventType const Event3;

  /// @brief Field Event4 value: static_cast<int32_t>(0x4)
  static ::BeatmapSaveDataCommon::BeatmapEventType const Event4;

  /// @brief Field Event5 value: static_cast<int32_t>(0x5)
  static ::BeatmapSaveDataCommon::BeatmapEventType const Event5;

  /// @brief Field Event6 value: static_cast<int32_t>(0x6)
  static ::BeatmapSaveDataCommon::BeatmapEventType const Event6;

  /// @brief Field Event7 value: static_cast<int32_t>(0x7)
  static ::BeatmapSaveDataCommon::BeatmapEventType const Event7;

  /// @brief Field Event8 value: static_cast<int32_t>(0x8)
  static ::BeatmapSaveDataCommon::BeatmapEventType const Event8;

  /// @brief Field Event9 value: static_cast<int32_t>(0x9)
  static ::BeatmapSaveDataCommon::BeatmapEventType const Event9;

  /// @brief Field LateRotationEventType value: static_cast<int32_t>(0xf)
  static ::BeatmapSaveDataCommon::BeatmapEventType const LateRotationEventType;

  /// @brief Field LegacyBpmEventType value: static_cast<int32_t>(0xa)
  static ::BeatmapSaveDataCommon::BeatmapEventType const LegacyBpmEventType;

  /// @brief Field Special0 value: static_cast<int32_t>(0x28)
  static ::BeatmapSaveDataCommon::BeatmapEventType const Special0;

  /// @brief Field Special1 value: static_cast<int32_t>(0x29)
  static ::BeatmapSaveDataCommon::BeatmapEventType const Special1;

  /// @brief Field Special2 value: static_cast<int32_t>(0x2a)
  static ::BeatmapSaveDataCommon::BeatmapEventType const Special2;

  /// @brief Field Special3 value: static_cast<int32_t>(0x2b)
  static ::BeatmapSaveDataCommon::BeatmapEventType const Special3;

  /// @brief Field VoidEvent value: static_cast<int32_t>(0xffffffff)
  static ::BeatmapSaveDataCommon::BeatmapEventType const VoidEvent;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataCommon::BeatmapEventType, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataCommon::BeatmapEventType, value__) == 0x0, "Offset mismatch!");

} // namespace BeatmapSaveDataCommon
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataCommon::BeatmapEventType, "BeatmapSaveDataCommon", "BeatmapEventType");
