#pragma once
// IWYU pragma private; include "Ice/FloorLightTileInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
CORDL_MODULE_EXPORT(FloorLightTileInstaller)
namespace Ice {
class FloorLightTile;
}
// Forward declare root types
namespace Ice {
class FloorLightTileInstaller;
}
// Write type traits
MARK_REF_PTR_T(::Ice::FloorLightTileInstaller);
// Dependencies Zenject.ScriptableObjectInstaller
namespace Ice {
// Is value type: false
// CS Name: Ice.FloorLightTileInstaller
class CORDL_TYPE FloorLightTileInstaller : public ::Zenject::ScriptableObjectInstaller {
public:
  // Declarations
  /// @brief Field _floorLightTilePrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__floorLightTilePrefab, put = __cordl_internal_set__floorLightTilePrefab)) ::UnityW<::Ice::FloorLightTile> _floorLightTilePrefab;

  /// @brief Method InstallBindings, addr 0x31bcef0, size 0x88, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::Ice::FloorLightTileInstaller* New_ctor();

  constexpr ::UnityW<::Ice::FloorLightTile> const& __cordl_internal_get__floorLightTilePrefab() const;

  constexpr ::UnityW<::Ice::FloorLightTile>& __cordl_internal_get__floorLightTilePrefab();

  constexpr void __cordl_internal_set__floorLightTilePrefab(::UnityW<::Ice::FloorLightTile> value);

  /// @brief Method .ctor, addr 0x31bcf78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloorLightTileInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloorLightTileInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloorLightTileInstaller(FloorLightTileInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloorLightTileInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloorLightTileInstaller(FloorLightTileInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22855 };

  /// @brief Field _floorLightTilePrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Ice::FloorLightTile> ____floorLightTilePrefab;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Ice::FloorLightTileInstaller, ____floorLightTilePrefab) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Ice::FloorLightTileInstaller, 0x28>, "Size mismatch!");

} // namespace Ice
NEED_NO_BOX(::Ice::FloorLightTileInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Ice::FloorLightTileInstaller*, "Ice", "FloorLightTileInstaller");
