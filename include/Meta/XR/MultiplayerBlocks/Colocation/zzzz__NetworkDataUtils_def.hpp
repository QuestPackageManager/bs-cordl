#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/NetworkDataUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkDataUtils)
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct Player;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Colocation {
class NetworkDataUtils;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils);
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.NetworkDataUtils
class CORDL_TYPE NetworkDataUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetAllPlayersColocatedWith, addr 0x5867d9c, size 0x388, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>* GetAllPlayersColocatedWith(uint64_t oculusId, bool includeMyself);

  /// @brief Method GetAllPlayersFromColocationGroupId, addr 0x5867aec, size 0x2b0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::Meta::XR::MultiplayerBlocks::Colocation::Player>* GetAllPlayersFromColocationGroupId(uint32_t colocationGroupId);

  /// @brief Method GetOculusIdOfColocatedGroupOwnerFromColocationGroupId, addr 0x586790c, size 0x1e0, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<uint64_t> GetOculusIdOfColocatedGroupOwnerFromColocationGroupId(uint32_t colocationGroupId);

  /// @brief Method GetPlayerFromOculusId, addr 0x5868124, size 0x104, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::Meta::XR::MultiplayerBlocks::Colocation::Player> GetPlayerFromOculusId(uint64_t oculusId);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkDataUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkDataUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkDataUtils(NetworkDataUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkDataUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkDataUtils(NetworkDataUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20370 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils, 0x10>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::NetworkDataUtils*, "Meta.XR.MultiplayerBlocks.Colocation", "NetworkDataUtils");
