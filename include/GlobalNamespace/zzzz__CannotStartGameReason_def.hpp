#pragma once
// IWYU pragma private; include "GlobalNamespace/CannotStartGameReason.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CannotStartGameReason)
// Forward declare root types
namespace GlobalNamespace {
struct CannotStartGameReason;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CannotStartGameReason);
// Type: ::CannotStartGameReason
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::CannotStartGameReason
struct CORDL_TYPE CannotStartGameReason {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CannotStartGameReason_Unwrapped
  enum struct __CannotStartGameReason_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x1),
    __E_AllPlayersSpectating = static_cast<int32_t>(0x2),
    __E_NoSongSelected = static_cast<int32_t>(0x3),
    __E_AllPlayersNotInLobby = static_cast<int32_t>(0x4),
    __E_DoNotOwnSong = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CannotStartGameReason_Unwrapped() const noexcept {
    return static_cast<__CannotStartGameReason_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CannotStartGameReason();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CannotStartGameReason(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AllPlayersNotInLobby value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::CannotStartGameReason const AllPlayersNotInLobby;

  /// @brief Field AllPlayersSpectating value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::CannotStartGameReason const AllPlayersSpectating;

  /// @brief Field DoNotOwnSong value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::CannotStartGameReason const DoNotOwnSong;

  /// @brief Field NoSongSelected value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::CannotStartGameReason const NoSongSelected;

  /// @brief Field None value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::CannotStartGameReason const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14657 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CannotStartGameReason, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CannotStartGameReason, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CannotStartGameReason, "", "CannotStartGameReason");
