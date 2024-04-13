#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__NoTransitionInstaller_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLevelNoTransitionInstaller)
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLevelNoTransitionInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLevelNoTransitionInstaller);
// Type: ::MultiplayerLevelNoTransitionInstaller
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerLevelNoTransitionInstaller*
class CORDL_TYPE MultiplayerLevelNoTransitionInstaller : public ::Zenject::NoTransitionInstaller {
public:
  // Declarations
  static inline ::GlobalNamespace::MultiplayerLevelNoTransitionInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x25a6d28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLevelNoTransitionInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelNoTransitionInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLevelNoTransitionInstaller(MultiplayerLevelNoTransitionInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelNoTransitionInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLevelNoTransitionInstaller(MultiplayerLevelNoTransitionInstaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLevelNoTransitionInstaller, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLevelNoTransitionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLevelNoTransitionInstaller*, "", "MultiplayerLevelNoTransitionInstaller");
