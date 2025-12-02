#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/AvatarStreamLOD.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarStreamLOD)
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Shared {
struct AvatarStreamLOD;
}
// Write type traits
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Shared::AvatarStreamLOD);
// Dependencies
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.AvatarStreamLOD
struct CORDL_TYPE AvatarStreamLOD {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AvatarStreamLOD_Unwrapped
  enum struct __AvatarStreamLOD_Unwrapped : int32_t {
    __E_Low = static_cast<int32_t>(0x0),
    __E_Medium = static_cast<int32_t>(0x1),
    __E_High = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AvatarStreamLOD_Unwrapped() const noexcept {
    return static_cast<__AvatarStreamLOD_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarStreamLOD();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AvatarStreamLOD(int32_t value__) noexcept;

  /// @brief Field High value: I32(2)
  static ::Meta::XR::MultiplayerBlocks::Shared::AvatarStreamLOD const High;

  /// @brief Field Low value: I32(0)
  static ::Meta::XR::MultiplayerBlocks::Shared::AvatarStreamLOD const Low;

  /// @brief Field Medium value: I32(1)
  static ::Meta::XR::MultiplayerBlocks::Shared::AvatarStreamLOD const Medium;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20346 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::AvatarStreamLOD, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::AvatarStreamLOD, 0x4>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::AvatarStreamLOD, "Meta.XR.MultiplayerBlocks.Shared", "AvatarStreamLOD");
