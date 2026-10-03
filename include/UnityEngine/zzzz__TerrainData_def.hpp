#pragma once
// IWYU pragma private; include "UnityEngine/TerrainData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainData)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct TerrainData_BoundaryValueType;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
struct TreeInstance;
}
namespace UnityEngine {
class TreePrototype;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct TerrainData_BoundaryValueType;
}
namespace UnityEngine {
class TerrainData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TerrainData_BoundaryValueType);
MARK_REF_T(::UnityEngine::TerrainData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::TerrainData_BoundaryValueType, "UnityEngine", "TerrainData/BoundaryValueType");
DEFINE_IL2CPP_CLASS(::UnityEngine::TerrainData*, "UnityEngine", "TerrainData");
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.TerrainData/BoundaryValueType
struct CORDL_TYPE TerrainData_BoundaryValueType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TerrainData_BoundaryValueType_Unwrapped
  enum struct __TerrainData_BoundaryValueType_Unwrapped : int32_t {
    __E_MaxHeightmapRes = static_cast<int32_t>(0x0),
    __E_MinDetailResPerPatch = static_cast<int32_t>(0x1),
    __E_MaxDetailResPerPatch = static_cast<int32_t>(0x2),
    __E_MaxDetailPatchCount = static_cast<int32_t>(0x3),
    __E_MaxCoveragePerRes = static_cast<int32_t>(0x4),
    __E_MinAlphamapRes = static_cast<int32_t>(0x5),
    __E_MaxAlphamapRes = static_cast<int32_t>(0x6),
    __E_MinBaseMapRes = static_cast<int32_t>(0x7),
    __E_MaxBaseMapRes = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TerrainData_BoundaryValueType_Unwrapped() const noexcept {
    return static_cast<__TerrainData_BoundaryValueType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TerrainData_BoundaryValueType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr TerrainData_BoundaryValueType(int32_t value__) noexcept;

  /// @brief Field MaxAlphamapRes value: I32(6)
  static ::UnityEngine::TerrainData_BoundaryValueType const MaxAlphamapRes;

  /// @brief Field MaxBaseMapRes value: I32(8)
  static ::UnityEngine::TerrainData_BoundaryValueType const MaxBaseMapRes;

  /// @brief Field MaxCoveragePerRes value: I32(4)
  static ::UnityEngine::TerrainData_BoundaryValueType const MaxCoveragePerRes;

  /// @brief Field MaxDetailPatchCount value: I32(3)
  static ::UnityEngine::TerrainData_BoundaryValueType const MaxDetailPatchCount;

  /// @brief Field MaxDetailResPerPatch value: I32(2)
  static ::UnityEngine::TerrainData_BoundaryValueType const MaxDetailResPerPatch;

  /// @brief Field MaxHeightmapRes value: I32(0)
  static ::UnityEngine::TerrainData_BoundaryValueType const MaxHeightmapRes;

  /// @brief Field MinAlphamapRes value: I32(5)
  static ::UnityEngine::TerrainData_BoundaryValueType const MinAlphamapRes;

  /// @brief Field MinBaseMapRes value: I32(7)
  static ::UnityEngine::TerrainData_BoundaryValueType const MinBaseMapRes;

  /// @brief Field MinDetailResPerPatch value: I32(1)
  static ::UnityEngine::TerrainData_BoundaryValueType const MinDetailResPerPatch;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23127 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TerrainData_BoundaryValueType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TerrainData_BoundaryValueType) == 0x4, "Size mismatch!");

} // namespace UnityEngine
// [UsedByNativeCode]
// [NativeHeader("TerrainScriptingClasses.h")]
// [NativeHeader("Modules/Terrain/Public/TerrainDataScriptingInterface.h")]
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TerrainData
class CORDL_TYPE TerrainData : public ::UnityEngine::Object {
public:
  // Declarations
  using BoundaryValueType = ::UnityEngine::TerrainData_BoundaryValueType;

  __declspec(property(get = get_bounds)) ::UnityEngine::Bounds bounds;

  __declspec(property(get = get_heightmapResolution)) int32_t heightmapResolution;

  __declspec(property(get = get_heightmapScale)) ::UnityEngine::Vector3 heightmapScale;

  __declspec(property(get = get_heightmapTexture)) ::UnityW<::UnityEngine::RenderTexture> heightmapTexture;

  __declspec(property(get = get_holesResolution)) int32_t holesResolution;

  __declspec(property(get = get_internalHeightmapResolution)) int32_t internalHeightmapResolution;

  /// @brief Field k_MaximumAlphamapResolution, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_MaximumAlphamapResolution, put = setStaticF_k_MaximumAlphamapResolution)) int32_t k_MaximumAlphamapResolution;

  /// @brief Field k_MaximumBaseMapResolution, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_MaximumBaseMapResolution, put = setStaticF_k_MaximumBaseMapResolution)) int32_t k_MaximumBaseMapResolution;

  /// @brief Field k_MaximumDetailPatchCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_MaximumDetailPatchCount, put = setStaticF_k_MaximumDetailPatchCount)) int32_t k_MaximumDetailPatchCount;

  /// @brief Field k_MaximumDetailResolutionPerPatch, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_MaximumDetailResolutionPerPatch, put = setStaticF_k_MaximumDetailResolutionPerPatch)) int32_t k_MaximumDetailResolutionPerPatch;

  /// @brief Field k_MaximumResolution, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_MaximumResolution, put = setStaticF_k_MaximumResolution)) int32_t k_MaximumResolution;

  /// @brief Field k_MinimumAlphamapResolution, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_MinimumAlphamapResolution, put = setStaticF_k_MinimumAlphamapResolution)) int32_t k_MinimumAlphamapResolution;

  /// @brief Field k_MinimumBaseMapResolution, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_MinimumBaseMapResolution, put = setStaticF_k_MinimumBaseMapResolution)) int32_t k_MinimumBaseMapResolution;

  /// @brief Field k_MinimumDetailResolutionPerPatch, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_MinimumDetailResolutionPerPatch, put = setStaticF_k_MinimumDetailResolutionPerPatch)) int32_t k_MinimumDetailResolutionPerPatch;

  __declspec(property(get = get_size)) ::UnityEngine::Vector3 size;

  __declspec(property(get = get_treeInstances)) ::ArrayW<::UnityEngine::TreeInstance> treeInstances;

  __declspec(property(get = get_treePrototypes)) ::ArrayW<::UnityEngine::TreePrototype*> treePrototypes;

  __declspec(property(get = get_users)) ::ArrayW<::UnityW<::UnityEngine::Terrain>> users;

  /// [RequiredByNativeCode]
  /// [NativeName("GetSplatDatabase().GetAlphamapResolution")]
  /// @brief Method GetAlphamapResolutionInternal, addr 0x701958c, size 0xa8, virtual false, abstract: false, final false
  inline float_t GetAlphamapResolutionInternal();

  /// @brief Method GetAlphamapResolutionInternal_Injected, addr 0x7019634, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetAlphamapResolutionInternal_Injected(::System::IntPtr _unity_self);

  /// [ThreadSafe]
  /// [StaticAccessor("TerrainDataScriptingInterface", (UnityEngine.Bindings.StaticAccessorType)2)]
  /// @brief Method GetBoundaryValue, addr 0x7018898, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetBoundaryValue(::UnityEngine::TerrainData_BoundaryValueType type);

  /// @brief Method GetHeights, addr 0x7018eb8, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Object* GetHeights(int32_t xBase, int32_t yBase, int32_t width, int32_t height);

  /// @brief Method GetHoles, addr 0x70190c4, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Object* GetHoles(int32_t xBase, int32_t yBase, int32_t width, int32_t height);

  /// [FreeFunction("TerrainDataScriptingInterface::GetHeights", HasExplicitThis = true)]
  /// @brief Method Internal_GetHeights, addr 0x7018f80, size 0xd8, virtual false, abstract: false, final false
  inline ::System::Object* Internal_GetHeights(int32_t xBase, int32_t yBase, int32_t width, int32_t height);

  /// @brief Method Internal_GetHeights_Injected, addr 0x7019058, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Object* Internal_GetHeights_Injected(::System::IntPtr _unity_self, int32_t xBase, int32_t yBase, int32_t width, int32_t height);

  /// [FreeFunction("TerrainDataScriptingInterface::GetHoles", HasExplicitThis = true)]
  /// @brief Method Internal_GetHoles, addr 0x7019194, size 0xd8, virtual false, abstract: false, final false
  inline ::System::Object* Internal_GetHoles(int32_t xBase, int32_t yBase, int32_t width, int32_t height);

  /// @brief Method Internal_GetHoles_Injected, addr 0x701926c, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Object* Internal_GetHoles_Injected(::System::IntPtr _unity_self, int32_t xBase, int32_t yBase, int32_t width, int32_t height);

  /// [NativeName("GetTreeDatabase().GetInstances")]
  /// @brief Method Internal_GetTreeInstances, addr 0x70192dc, size 0x188, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::TreeInstance> Internal_GetTreeInstances();

  /// @brief Method Internal_GetTreeInstances_Injected, addr 0x7019464, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_GetTreeInstances_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  static inline int32_t getStaticF_k_MaximumAlphamapResolution();

  static inline int32_t getStaticF_k_MaximumBaseMapResolution();

  static inline int32_t getStaticF_k_MaximumDetailPatchCount();

  static inline int32_t getStaticF_k_MaximumDetailResolutionPerPatch();

  static inline int32_t getStaticF_k_MaximumResolution();

  static inline int32_t getStaticF_k_MinimumAlphamapResolution();

  static inline int32_t getStaticF_k_MinimumBaseMapResolution();

  static inline int32_t getStaticF_k_MinimumDetailResolutionPerPatch();

  /// [NativeName("GetHeightmap().CalculateBounds")]
  /// @brief Method get_bounds, addr 0x7018d9c, size 0xd8, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_bounds();

  /// @brief Method get_bounds_Injected, addr 0x7018e74, size 0x44, virtual false, abstract: false, final false
  static inline void get_bounds_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bounds> ret);

  /// @brief Method get_heightmapResolution, addr 0x7018a88, size 0x4, virtual false, abstract: false, final false
  inline int32_t get_heightmapResolution();

  /// [NativeName("GetHeightmap().GetScale")]
  /// @brief Method get_heightmapScale, addr 0x7018b70, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_heightmapScale();

  /// @brief Method get_heightmapScale_Injected, addr 0x7018c38, size 0x44, virtual false, abstract: false, final false
  static inline void get_heightmapScale_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// [NativeName("GetHeightmap().GetHeightmapTexture")]
  /// @brief Method get_heightmapTexture, addr 0x70188d4, size 0x178, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> get_heightmapTexture();

  /// @brief Method get_heightmapTexture_Injected, addr 0x7018a4c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_heightmapTexture_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_holesResolution, addr 0x7018c7c, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_holesResolution();

  /// [NativeName("GetHeightmap().GetResolution")]
  /// @brief Method get_internalHeightmapResolution, addr 0x7018a8c, size 0xa8, virtual false, abstract: false, final false
  inline int32_t get_internalHeightmapResolution();

  /// @brief Method get_internalHeightmapResolution_Injected, addr 0x7018b34, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_internalHeightmapResolution_Injected(::System::IntPtr _unity_self);

  /// [NativeName("GetHeightmap().GetSize")]
  /// @brief Method get_size, addr 0x7018c90, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_size();

  /// @brief Method get_size_Injected, addr 0x7018d58, size 0x44, virtual false, abstract: false, final false
  static inline void get_size_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_treeInstances, addr 0x70192d8, size 0x4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::TreeInstance> get_treeInstances();

  /// [FreeFunction("TerrainDataScriptingInterface::GetTreePrototypes", HasExplicitThis = true)]
  /// @brief Method get_treePrototypes, addr 0x70194a8, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::TreePrototype*> get_treePrototypes();

  /// @brief Method get_treePrototypes_Injected, addr 0x7019550, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::TreePrototype*> get_treePrototypes_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_users, addr 0x70185cc, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Terrain>> get_users();

  /// @brief Method get_users_Injected, addr 0x7019670, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Terrain>> get_users_Injected(::System::IntPtr _unity_self);

  static inline void setStaticF_k_MaximumAlphamapResolution(int32_t value);

  static inline void setStaticF_k_MaximumBaseMapResolution(int32_t value);

  static inline void setStaticF_k_MaximumDetailPatchCount(int32_t value);

  static inline void setStaticF_k_MaximumDetailResolutionPerPatch(int32_t value);

  static inline void setStaticF_k_MaximumResolution(int32_t value);

  static inline void setStaticF_k_MinimumAlphamapResolution(int32_t value);

  static inline void setStaticF_k_MinimumBaseMapResolution(int32_t value);

  static inline void setStaticF_k_MinimumDetailResolutionPerPatch(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TerrainData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TerrainData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TerrainData(TerrainData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TerrainData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TerrainData(TerrainData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23128 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::TerrainData) == 0x18, "Size mismatch!");

} // namespace UnityEngine
