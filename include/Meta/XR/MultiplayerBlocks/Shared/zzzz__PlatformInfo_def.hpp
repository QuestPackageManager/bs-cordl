#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/PlatformInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PlatformInfo)
namespace Oculus::Platform::Models {
class User;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Shared {
struct PlatformInfo;
}
// Write type traits
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo);
// Dependencies
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.PlatformInfo
struct CORDL_TYPE PlatformInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformInfo();

  // Ctor Parameters [CppParam { name: "IsEntitled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "Token", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "OculusUser", ty: "::Oculus::Platform::Models::User*", modifiers: "", def_value: None }]
  constexpr PlatformInfo(bool IsEntitled, ::StringW Token, ::Oculus::Platform::Models::User* OculusUser) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20376 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field IsEntitled, offset: 0x0, size: 0x1, def value: None
  bool IsEntitled;

  /// @brief Field Token, offset: 0x8, size: 0x8, def value: None
  ::StringW Token;

  /// @brief Field OculusUser, offset: 0x10, size: 0x8, def value: None
  ::Oculus::Platform::Models::User* OculusUser;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo, IsEntitled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo, Token) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo, OculusUser) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo, 0x18>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo, "Meta.XR.MultiplayerBlocks.Shared", "PlatformInfo");
