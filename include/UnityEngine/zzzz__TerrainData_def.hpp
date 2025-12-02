#pragma once
// IWYU pragma private; include "UnityEngine/TerrainData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainData)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct TerrainData_BoundaryValueType;
}
namespace UnityEngine {
class Terrain;
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
MARK_REF_PTR_T(::UnityEngine::TerrainData);
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22393 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TerrainData_BoundaryValueType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TerrainData_BoundaryValueType, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TerrainData
class CORDL_TYPE TerrainData : public ::UnityEngine::Object {
public:
  // Declarations
  using BoundaryValueType = ::UnityEngine::TerrainData_BoundaryValueType;

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

  __declspec(property(get = get_users)) ::ArrayW<::UnityW<::UnityEngine::Terrain>, ::Array<::UnityW<::UnityEngine::Terrain>>*> users;

  /// @brief Method GetAlphamapResolutionInternal, addr 0x6985b50, size 0xa8, virtual false, abstract: false, final false
  inline float_t GetAlphamapResolutionInternal();

  /// @brief Method GetAlphamapResolutionInternal_Injected, addr 0x6985bf8, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetAlphamapResolutionInternal_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetBoundaryValue, addr 0x6985a08, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetBoundaryValue(::UnityEngine::TerrainData_BoundaryValueType type);

  static inline int32_t getStaticF_k_MaximumAlphamapResolution();

  static inline int32_t getStaticF_k_MaximumBaseMapResolution();

  static inline int32_t getStaticF_k_MaximumDetailPatchCount();

  static inline int32_t getStaticF_k_MaximumDetailResolutionPerPatch();

  static inline int32_t getStaticF_k_MaximumResolution();

  static inline int32_t getStaticF_k_MinimumAlphamapResolution();

  static inline int32_t getStaticF_k_MinimumBaseMapResolution();

  static inline int32_t getStaticF_k_MinimumDetailResolutionPerPatch();

  /// @brief Method get_size, addr 0x6985a44, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_size();

  /// @brief Method get_size_Injected, addr 0x6985b0c, size 0x44, virtual false, abstract: false, final false
  static inline void get_size_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_users, addr 0x698573c, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Terrain>, ::Array<::UnityW<::UnityEngine::Terrain>>*> get_users();

  /// @brief Method get_users_Injected, addr 0x6985c34, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Terrain>, ::Array<::UnityW<::UnityEngine::Terrain>>*> get_users_Injected(::System::IntPtr _unity_self);

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
  // Ctor Parameters [CppParam { name: "", ty: "TerrainData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TerrainData(TerrainData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TerrainData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TerrainData(TerrainData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22394 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TerrainData, 0x18>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainData_BoundaryValueType, "UnityEngine", "TerrainData/BoundaryValueType");
NEED_NO_BOX(::UnityEngine::TerrainData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainData*, "UnityEngine", "TerrainData");
