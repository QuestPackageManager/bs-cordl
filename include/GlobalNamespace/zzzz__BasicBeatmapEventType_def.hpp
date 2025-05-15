#pragma once
// IWYU pragma private; include "GlobalNamespace/BasicBeatmapEventType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BasicBeatmapEventType)
// Forward declare root types
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BasicBeatmapEventType);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: BasicBeatmapEventType
struct CORDL_TYPE BasicBeatmapEventType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BasicBeatmapEventType_Unwrapped
  enum struct __BasicBeatmapEventType_Unwrapped : int32_t {
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
    __E_Event18 = static_cast<int32_t>(0x12),
    __E_Event19 = static_cast<int32_t>(0x13),
    __E_Event20 = static_cast<int32_t>(0x14),
    __E_Event21 = static_cast<int32_t>(0x15),
    __E_VoidEvent = static_cast<int32_t>(0xffffffff),
    __E_Special0 = static_cast<int32_t>(0x28),
    __E_Special1 = static_cast<int32_t>(0x29),
    __E_Special2 = static_cast<int32_t>(0x2a),
    __E_Special3 = static_cast<int32_t>(0x2b),
    __E_BpmChange = static_cast<int32_t>(0x64),
    __E_NoteJumpMovementSpeedChange = static_cast<int32_t>(0x3e8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BasicBeatmapEventType_Unwrapped() const noexcept {
    return static_cast<__BasicBeatmapEventType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicBeatmapEventType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BasicBeatmapEventType(int32_t value__) noexcept;

  /// @brief Field BpmChange value: I32(100)
  static ::GlobalNamespace::BasicBeatmapEventType const BpmChange;

  /// @brief Field Event0 value: I32(0)
  static ::GlobalNamespace::BasicBeatmapEventType const Event0;

  /// @brief Field Event1 value: I32(1)
  static ::GlobalNamespace::BasicBeatmapEventType const Event1;

  /// @brief Field Event10 value: I32(10)
  static ::GlobalNamespace::BasicBeatmapEventType const Event10;

  /// @brief Field Event11 value: I32(11)
  static ::GlobalNamespace::BasicBeatmapEventType const Event11;

  /// @brief Field Event12 value: I32(12)
  static ::GlobalNamespace::BasicBeatmapEventType const Event12;

  /// @brief Field Event13 value: I32(13)
  static ::GlobalNamespace::BasicBeatmapEventType const Event13;

  /// @brief Field Event14 value: I32(14)
  static ::GlobalNamespace::BasicBeatmapEventType const Event14;

  /// @brief Field Event15 value: I32(15)
  static ::GlobalNamespace::BasicBeatmapEventType const Event15;

  /// @brief Field Event16 value: I32(16)
  static ::GlobalNamespace::BasicBeatmapEventType const Event16;

  /// @brief Field Event17 value: I32(17)
  static ::GlobalNamespace::BasicBeatmapEventType const Event17;

  /// @brief Field Event18 value: I32(18)
  static ::GlobalNamespace::BasicBeatmapEventType const Event18;

  /// @brief Field Event19 value: I32(19)
  static ::GlobalNamespace::BasicBeatmapEventType const Event19;

  /// @brief Field Event2 value: I32(2)
  static ::GlobalNamespace::BasicBeatmapEventType const Event2;

  /// @brief Field Event20 value: I32(20)
  static ::GlobalNamespace::BasicBeatmapEventType const Event20;

  /// @brief Field Event21 value: I32(21)
  static ::GlobalNamespace::BasicBeatmapEventType const Event21;

  /// @brief Field Event3 value: I32(3)
  static ::GlobalNamespace::BasicBeatmapEventType const Event3;

  /// @brief Field Event4 value: I32(4)
  static ::GlobalNamespace::BasicBeatmapEventType const Event4;

  /// @brief Field Event5 value: I32(5)
  static ::GlobalNamespace::BasicBeatmapEventType const Event5;

  /// @brief Field Event6 value: I32(6)
  static ::GlobalNamespace::BasicBeatmapEventType const Event6;

  /// @brief Field Event7 value: I32(7)
  static ::GlobalNamespace::BasicBeatmapEventType const Event7;

  /// @brief Field Event8 value: I32(8)
  static ::GlobalNamespace::BasicBeatmapEventType const Event8;

  /// @brief Field Event9 value: I32(9)
  static ::GlobalNamespace::BasicBeatmapEventType const Event9;

  /// @brief Field NoteJumpMovementSpeedChange value: I32(1000)
  static ::GlobalNamespace::BasicBeatmapEventType const NoteJumpMovementSpeedChange;

  /// @brief Field Special0 value: I32(40)
  static ::GlobalNamespace::BasicBeatmapEventType const Special0;

  /// @brief Field Special1 value: I32(41)
  static ::GlobalNamespace::BasicBeatmapEventType const Special1;

  /// @brief Field Special2 value: I32(42)
  static ::GlobalNamespace::BasicBeatmapEventType const Special2;

  /// @brief Field Special3 value: I32(43)
  static ::GlobalNamespace::BasicBeatmapEventType const Special3;

  /// @brief Field VoidEvent value: I32(-1)
  static ::GlobalNamespace::BasicBeatmapEventType const VoidEvent;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17050 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BasicBeatmapEventType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BasicBeatmapEventType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BasicBeatmapEventType, "", "BasicBeatmapEventType");
