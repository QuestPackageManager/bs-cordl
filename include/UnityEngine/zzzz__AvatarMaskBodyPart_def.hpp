#pragma once
// IWYU pragma private; include "UnityEngine/AvatarMaskBodyPart.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarMaskBodyPart)
// Forward declare root types
namespace UnityEngine {
struct AvatarMaskBodyPart;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AvatarMaskBodyPart);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.AvatarMaskBodyPart
struct CORDL_TYPE AvatarMaskBodyPart {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AvatarMaskBodyPart_Unwrapped
  enum struct __AvatarMaskBodyPart_Unwrapped : int32_t {
    __E_Root = static_cast<int32_t>(0x0),
    __E_Body = static_cast<int32_t>(0x1),
    __E_Head = static_cast<int32_t>(0x2),
    __E_LeftLeg = static_cast<int32_t>(0x3),
    __E_RightLeg = static_cast<int32_t>(0x4),
    __E_LeftArm = static_cast<int32_t>(0x5),
    __E_RightArm = static_cast<int32_t>(0x6),
    __E_LeftFingers = static_cast<int32_t>(0x7),
    __E_RightFingers = static_cast<int32_t>(0x8),
    __E_LeftFootIK = static_cast<int32_t>(0x9),
    __E_RightFootIK = static_cast<int32_t>(0xa),
    __E_LeftHandIK = static_cast<int32_t>(0xb),
    __E_RightHandIK = static_cast<int32_t>(0xc),
    __E_LastBodyPart = static_cast<int32_t>(0xd),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AvatarMaskBodyPart_Unwrapped() const noexcept {
    return static_cast<__AvatarMaskBodyPart_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarMaskBodyPart();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AvatarMaskBodyPart(int32_t value__) noexcept;

  /// @brief Field Body value: I32(1)
  static ::UnityEngine::AvatarMaskBodyPart const Body;

  /// @brief Field Head value: I32(2)
  static ::UnityEngine::AvatarMaskBodyPart const Head;

  /// @brief Field LastBodyPart value: I32(13)
  static ::UnityEngine::AvatarMaskBodyPart const LastBodyPart;

  /// @brief Field LeftArm value: I32(5)
  static ::UnityEngine::AvatarMaskBodyPart const LeftArm;

  /// @brief Field LeftFingers value: I32(7)
  static ::UnityEngine::AvatarMaskBodyPart const LeftFingers;

  /// @brief Field LeftFootIK value: I32(9)
  static ::UnityEngine::AvatarMaskBodyPart const LeftFootIK;

  /// @brief Field LeftHandIK value: I32(11)
  static ::UnityEngine::AvatarMaskBodyPart const LeftHandIK;

  /// @brief Field LeftLeg value: I32(3)
  static ::UnityEngine::AvatarMaskBodyPart const LeftLeg;

  /// @brief Field RightArm value: I32(6)
  static ::UnityEngine::AvatarMaskBodyPart const RightArm;

  /// @brief Field RightFingers value: I32(8)
  static ::UnityEngine::AvatarMaskBodyPart const RightFingers;

  /// @brief Field RightFootIK value: I32(10)
  static ::UnityEngine::AvatarMaskBodyPart const RightFootIK;

  /// @brief Field RightHandIK value: I32(12)
  static ::UnityEngine::AvatarMaskBodyPart const RightHandIK;

  /// @brief Field RightLeg value: I32(4)
  static ::UnityEngine::AvatarMaskBodyPart const RightLeg;

  /// @brief Field Root value: I32(0)
  static ::UnityEngine::AvatarMaskBodyPart const Root;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19979 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AvatarMaskBodyPart, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AvatarMaskBodyPart, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AvatarMaskBodyPart, "UnityEngine", "AvatarMaskBodyPart");
