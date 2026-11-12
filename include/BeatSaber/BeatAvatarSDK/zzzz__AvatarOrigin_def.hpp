#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarSDK/AvatarOrigin.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarOrigin)
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
struct AvatarOrigin;
}
// Write type traits
MARK_VAL_T(::BeatSaber::BeatAvatarSDK::AvatarOrigin);
DEFINE_IL2CPP_CLASS(::BeatSaber::BeatAvatarSDK::AvatarOrigin, "BeatSaber.BeatAvatarSDK", "AvatarOrigin");
// Dependencies
namespace BeatSaber::BeatAvatarSDK {
// Is value type: true
// CS Name: BeatSaber.BeatAvatarSDK.AvatarOrigin
struct CORDL_TYPE AvatarOrigin {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AvatarOrigin_Unwrapped
  enum struct __AvatarOrigin_Unwrapped : int32_t {
    __E_Player = static_cast<int32_t>(0x0),
    __E_Generated = static_cast<int32_t>(0x1),
    __E_Account = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AvatarOrigin_Unwrapped() const noexcept {
    return static_cast<__AvatarOrigin_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarOrigin();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr AvatarOrigin(int32_t value__) noexcept;

  /// @brief Field Account value: I32(2)
  static ::BeatSaber::BeatAvatarSDK::AvatarOrigin const Account;

  /// @brief Field Generated value: I32(1)
  static ::BeatSaber::BeatAvatarSDK::AvatarOrigin const Generated;

  /// @brief Field Player value: I32(0)
  static ::BeatSaber::BeatAvatarSDK::AvatarOrigin const Player;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23163 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::BeatAvatarSDK::AvatarOrigin, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::BeatAvatarSDK::AvatarOrigin) == 0x4, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
