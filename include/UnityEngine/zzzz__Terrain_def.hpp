#pragma once
// IWYU pragma private; include "UnityEngine/Terrain.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Terrain)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class TerrainData;
}
// Forward declare root types
namespace UnityEngine {
class Terrain;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Terrain);
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Terrain
class CORDL_TYPE Terrain : public ::UnityEngine::Behaviour {
public:
  // Declarations
  __declspec(property(get = get_allowAutoConnect)) bool allowAutoConnect;

  __declspec(property(get = get_groupingID)) int32_t groupingID;

  __declspec(property(get = get_terrainData)) ::UnityW<::UnityEngine::TerrainData> terrainData;

  static inline ::UnityEngine::Terrain* New_ctor();

  /// @brief Method SetNeighbors, addr 0x6985490, size 0x128, virtual false, abstract: false, final false
  inline void SetNeighbors(::UnityEngine::Terrain* left, ::UnityEngine::Terrain* top, ::UnityEngine::Terrain* right, ::UnityEngine::Terrain* bottom);

  /// @brief Method SetNeighbors_Injected, addr 0x69855b8, size 0x6c, virtual false, abstract: false, final false
  static inline void SetNeighbors_Injected(::System::IntPtr _unity_self, ::System::IntPtr left, ::System::IntPtr top, ::System::IntPtr right, ::System::IntPtr bottom);

  /// @brief Method .ctor, addr 0x698564c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_activeTerrains, addr 0x6985624, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Terrain>, ::Array<::UnityW<::UnityEngine::Terrain>>*> get_activeTerrains();

  /// @brief Method get_allowAutoConnect, addr 0x6985318, size 0x80, virtual false, abstract: false, final false
  inline bool get_allowAutoConnect();

  /// @brief Method get_allowAutoConnect_Injected, addr 0x6985398, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_allowAutoConnect_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_groupingID, addr 0x69853d4, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_groupingID();

  /// @brief Method get_groupingID_Injected, addr 0x6985454, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_groupingID_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_terrainData, addr 0x698518c, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::TerrainData> get_terrainData();

  /// @brief Method get_terrainData_Injected, addr 0x69852dc, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_terrainData_Injected(::System::IntPtr _unity_self);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Terrain();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Terrain", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Terrain(Terrain&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Terrain", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Terrain(Terrain const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22389 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Terrain, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Terrain);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Terrain*, "UnityEngine", "Terrain");
