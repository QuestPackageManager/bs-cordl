#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerMenuInstaller)
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerMenuInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerMenuInstaller);
// Type: ::MultiplayerMenuInstaller
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerMenuInstaller*
class CORDL_TYPE MultiplayerMenuInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Method InstallBindings, addr 0x26318f8, size 0x8c, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::MultiplayerMenuInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x2631984, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerMenuInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerMenuInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerMenuInstaller(MultiplayerMenuInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerMenuInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerMenuInstaller(MultiplayerMenuInstaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerMenuInstaller, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerMenuInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerMenuInstaller*, "", "MultiplayerMenuInstaller");
