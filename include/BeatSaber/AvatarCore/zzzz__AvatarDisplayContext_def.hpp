#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarDisplayContext)
// Forward declare root types
namespace BeatSaber::AvatarCore {
struct AvatarDisplayContext;
}
// Write type traits
MARK_VAL_T(::BeatSaber::AvatarCore::AvatarDisplayContext);
// Type: BeatSaber.AvatarCore::AvatarDisplayContext
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: true
// CS Name: ::BeatSaber.AvatarCore::AvatarDisplayContext
struct CORDL_TYPE AvatarDisplayContext {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AvatarDisplayContext_Unwrapped
  enum struct __AvatarDisplayContext_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_UI = static_cast<int32_t>(0x1),
    __E_MultiplayerLobby = static_cast<int32_t>(0x2),
    __E_MultiplayerGameplay = static_cast<int32_t>(0x3),
    __E_MultiplayerResults = static_cast<int32_t>(0x4),
    __E_MultiplayerBigAvatar = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AvatarDisplayContext_Unwrapped() const noexcept {
    return static_cast<__AvatarDisplayContext_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarDisplayContext();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AvatarDisplayContext(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field MultiplayerBigAvatar value: static_cast<int32_t>(0x5)
  static ::BeatSaber::AvatarCore::AvatarDisplayContext const MultiplayerBigAvatar;

  /// @brief Field MultiplayerGameplay value: static_cast<int32_t>(0x3)
  static ::BeatSaber::AvatarCore::AvatarDisplayContext const MultiplayerGameplay;

  /// @brief Field MultiplayerLobby value: static_cast<int32_t>(0x2)
  static ::BeatSaber::AvatarCore::AvatarDisplayContext const MultiplayerLobby;

  /// @brief Field MultiplayerResults value: static_cast<int32_t>(0x4)
  static ::BeatSaber::AvatarCore::AvatarDisplayContext const MultiplayerResults;

  /// @brief Field UI value: static_cast<int32_t>(0x1)
  static ::BeatSaber::AvatarCore::AvatarDisplayContext const UI;

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::BeatSaber::AvatarCore::AvatarDisplayContext const Unknown;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarDisplayContext, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarDisplayContext, value__) == 0x0, "Offset mismatch!");

} // namespace BeatSaber::AvatarCore
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarDisplayContext, "BeatSaber.AvatarCore", "AvatarDisplayContext");
