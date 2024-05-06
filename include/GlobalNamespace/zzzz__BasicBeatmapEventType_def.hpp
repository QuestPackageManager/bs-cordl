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
// Type: ::BasicBeatmapEventType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BasicBeatmapEventType
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

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BpmChange value: static_cast<int32_t>(0x64)
  static ::GlobalNamespace::BasicBeatmapEventType const BpmChange;

  /// @brief Field Event0 value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::BasicBeatmapEventType const Event0;

  /// @brief Field Event1 value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::BasicBeatmapEventType const Event1;

  /// @brief Field Event10 value: static_cast<int32_t>(0xa)
  static ::GlobalNamespace::BasicBeatmapEventType const Event10;

  /// @brief Field Event11 value: static_cast<int32_t>(0xb)
  static ::GlobalNamespace::BasicBeatmapEventType const Event11;

  /// @brief Field Event12 value: static_cast<int32_t>(0xc)
  static ::GlobalNamespace::BasicBeatmapEventType const Event12;

  /// @brief Field Event13 value: static_cast<int32_t>(0xd)
  static ::GlobalNamespace::BasicBeatmapEventType const Event13;

  /// @brief Field Event14 value: static_cast<int32_t>(0xe)
  static ::GlobalNamespace::BasicBeatmapEventType const Event14;

  /// @brief Field Event15 value: static_cast<int32_t>(0xf)
  static ::GlobalNamespace::BasicBeatmapEventType const Event15;

  /// @brief Field Event16 value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::BasicBeatmapEventType const Event16;

  /// @brief Field Event17 value: static_cast<int32_t>(0x11)
  static ::GlobalNamespace::BasicBeatmapEventType const Event17;

  /// @brief Field Event18 value: static_cast<int32_t>(0x12)
  static ::GlobalNamespace::BasicBeatmapEventType const Event18;

  /// @brief Field Event19 value: static_cast<int32_t>(0x13)
  static ::GlobalNamespace::BasicBeatmapEventType const Event19;

  /// @brief Field Event2 value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::BasicBeatmapEventType const Event2;

  /// @brief Field Event20 value: static_cast<int32_t>(0x14)
  static ::GlobalNamespace::BasicBeatmapEventType const Event20;

  /// @brief Field Event21 value: static_cast<int32_t>(0x15)
  static ::GlobalNamespace::BasicBeatmapEventType const Event21;

  /// @brief Field Event3 value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::BasicBeatmapEventType const Event3;

  /// @brief Field Event4 value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::BasicBeatmapEventType const Event4;

  /// @brief Field Event5 value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::BasicBeatmapEventType const Event5;

  /// @brief Field Event6 value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::BasicBeatmapEventType const Event6;

  /// @brief Field Event7 value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::BasicBeatmapEventType const Event7;

  /// @brief Field Event8 value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::BasicBeatmapEventType const Event8;

  /// @brief Field Event9 value: static_cast<int32_t>(0x9)
  static ::GlobalNamespace::BasicBeatmapEventType const Event9;

  /// @brief Field Special0 value: static_cast<int32_t>(0x28)
  static ::GlobalNamespace::BasicBeatmapEventType const Special0;

  /// @brief Field Special1 value: static_cast<int32_t>(0x29)
  static ::GlobalNamespace::BasicBeatmapEventType const Special1;

  /// @brief Field Special2 value: static_cast<int32_t>(0x2a)
  static ::GlobalNamespace::BasicBeatmapEventType const Special2;

  /// @brief Field Special3 value: static_cast<int32_t>(0x2b)
  static ::GlobalNamespace::BasicBeatmapEventType const Special3;

  /// @brief Field VoidEvent value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::BasicBeatmapEventType const VoidEvent;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BasicBeatmapEventType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicBeatmapEventType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BasicBeatmapEventType, "", "BasicBeatmapEventType");
