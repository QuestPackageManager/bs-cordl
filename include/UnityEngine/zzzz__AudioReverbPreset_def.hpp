#pragma once
// IWYU pragma private; include "UnityEngine/AudioReverbPreset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioReverbPreset)
// Forward declare root types
namespace UnityEngine {
struct AudioReverbPreset;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AudioReverbPreset);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.AudioReverbPreset
struct CORDL_TYPE AudioReverbPreset {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AudioReverbPreset_Unwrapped
  enum struct __AudioReverbPreset_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_Generic = static_cast<int32_t>(0x1),
    __E_PaddedCell = static_cast<int32_t>(0x2),
    __E_Room = static_cast<int32_t>(0x3),
    __E_Bathroom = static_cast<int32_t>(0x4),
    __E_Livingroom = static_cast<int32_t>(0x5),
    __E_Stoneroom = static_cast<int32_t>(0x6),
    __E_Auditorium = static_cast<int32_t>(0x7),
    __E_Concerthall = static_cast<int32_t>(0x8),
    __E_Cave = static_cast<int32_t>(0x9),
    __E_Arena = static_cast<int32_t>(0xa),
    __E_Hangar = static_cast<int32_t>(0xb),
    __E_CarpetedHallway = static_cast<int32_t>(0xc),
    __E_Hallway = static_cast<int32_t>(0xd),
    __E_StoneCorridor = static_cast<int32_t>(0xe),
    __E_Alley = static_cast<int32_t>(0xf),
    __E_Forest = static_cast<int32_t>(0x10),
    __E_City = static_cast<int32_t>(0x11),
    __E_Mountains = static_cast<int32_t>(0x12),
    __E_Quarry = static_cast<int32_t>(0x13),
    __E_Plain = static_cast<int32_t>(0x14),
    __E_ParkingLot = static_cast<int32_t>(0x15),
    __E_SewerPipe = static_cast<int32_t>(0x16),
    __E_Underwater = static_cast<int32_t>(0x17),
    __E_Drugged = static_cast<int32_t>(0x18),
    __E_Dizzy = static_cast<int32_t>(0x19),
    __E_Psychotic = static_cast<int32_t>(0x1a),
    __E_User = static_cast<int32_t>(0x1b),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AudioReverbPreset_Unwrapped() const noexcept {
    return static_cast<__AudioReverbPreset_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioReverbPreset();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AudioReverbPreset(int32_t value__) noexcept;

  /// @brief Field Alley value: I32(15)
  static ::UnityEngine::AudioReverbPreset const Alley;

  /// @brief Field Arena value: I32(10)
  static ::UnityEngine::AudioReverbPreset const Arena;

  /// @brief Field Auditorium value: I32(7)
  static ::UnityEngine::AudioReverbPreset const Auditorium;

  /// @brief Field Bathroom value: I32(4)
  static ::UnityEngine::AudioReverbPreset const Bathroom;

  /// @brief Field CarpetedHallway value: I32(12)
  static ::UnityEngine::AudioReverbPreset const CarpetedHallway;

  /// @brief Field Cave value: I32(9)
  static ::UnityEngine::AudioReverbPreset const Cave;

  /// @brief Field City value: I32(17)
  static ::UnityEngine::AudioReverbPreset const City;

  /// @brief Field Concerthall value: I32(8)
  static ::UnityEngine::AudioReverbPreset const Concerthall;

  /// @brief Field Dizzy value: I32(25)
  static ::UnityEngine::AudioReverbPreset const Dizzy;

  /// @brief Field Drugged value: I32(24)
  static ::UnityEngine::AudioReverbPreset const Drugged;

  /// @brief Field Forest value: I32(16)
  static ::UnityEngine::AudioReverbPreset const Forest;

  /// @brief Field Generic value: I32(1)
  static ::UnityEngine::AudioReverbPreset const Generic;

  /// @brief Field Hallway value: I32(13)
  static ::UnityEngine::AudioReverbPreset const Hallway;

  /// @brief Field Hangar value: I32(11)
  static ::UnityEngine::AudioReverbPreset const Hangar;

  /// @brief Field Livingroom value: I32(5)
  static ::UnityEngine::AudioReverbPreset const Livingroom;

  /// @brief Field Mountains value: I32(18)
  static ::UnityEngine::AudioReverbPreset const Mountains;

  /// @brief Field Off value: I32(0)
  static ::UnityEngine::AudioReverbPreset const Off;

  /// @brief Field PaddedCell value: I32(2)
  static ::UnityEngine::AudioReverbPreset const PaddedCell;

  /// @brief Field ParkingLot value: I32(21)
  static ::UnityEngine::AudioReverbPreset const ParkingLot;

  /// @brief Field Plain value: I32(20)
  static ::UnityEngine::AudioReverbPreset const Plain;

  /// @brief Field Psychotic value: I32(26)
  static ::UnityEngine::AudioReverbPreset const Psychotic;

  /// @brief Field Quarry value: I32(19)
  static ::UnityEngine::AudioReverbPreset const Quarry;

  /// @brief Field Room value: I32(3)
  static ::UnityEngine::AudioReverbPreset const Room;

  /// @brief Field SewerPipe value: I32(22)
  static ::UnityEngine::AudioReverbPreset const SewerPipe;

  /// @brief Field StoneCorridor value: I32(14)
  static ::UnityEngine::AudioReverbPreset const StoneCorridor;

  /// @brief Field Stoneroom value: I32(6)
  static ::UnityEngine::AudioReverbPreset const Stoneroom;

  /// @brief Field Underwater value: I32(23)
  static ::UnityEngine::AudioReverbPreset const Underwater;

  /// @brief Field User value: I32(27)
  static ::UnityEngine::AudioReverbPreset const User;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17865 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AudioReverbPreset, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioReverbPreset, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioReverbPreset, "UnityEngine", "AudioReverbPreset");
