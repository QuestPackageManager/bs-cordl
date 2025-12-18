#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatSaberNetworkUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatSaberNetworkUtility)
namespace GlobalNamespace {
struct AuthenticationToken_PlatformType;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatSaberNetworkUtility;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatSaberNetworkUtility);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatSaberNetworkUtility
class CORDL_TYPE BeatSaberNetworkUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetHashedUserId, addr 0x31d2edc, size 0x100, virtual false, abstract: false, final false
  static inline ::StringW GetHashedUserId(::StringW userId, ::GlobalNamespace::AuthenticationToken_PlatformType platform);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatSaberNetworkUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatSaberNetworkUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatSaberNetworkUtility(BeatSaberNetworkUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatSaberNetworkUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatSaberNetworkUtility(BeatSaberNetworkUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18810 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatSaberNetworkUtility, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatSaberNetworkUtility);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatSaberNetworkUtility*, "", "BeatSaberNetworkUtility");
