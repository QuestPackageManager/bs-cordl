#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DrawKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__BatchDrawCommandFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMaterialID_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMeshID_def.hpp"
#include "UnityEngine/Rendering/zzzz__RangeKey_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawKey)
namespace System {
template <typename T> class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct DrawKey;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::DrawKey);
// Dependencies UnityEngine.Rendering.BatchDrawCommandFlags, UnityEngine.Rendering.BatchMaterialID, UnityEngine.Rendering.BatchMeshID, UnityEngine.Rendering.RangeKey
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.DrawKey
struct CORDL_TYPE DrawKey {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::DrawKey>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::DrawKey>*();

  /// @brief Method Equals, addr 0x665f980, size 0x158, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::DrawKey other);

  /// @brief Method GetHashCode, addr 0x665fad8, size 0x70, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::DrawKey>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::DrawKey>* i___System__IEquatable_1___UnityEngine__Rendering__DrawKey_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawKey();

  // Ctor Parameters [CppParam { name: "meshID", ty: "::UnityEngine::Rendering::BatchMeshID", modifiers: "", def_value: None }, CppParam { name: "submeshIndex", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "materialID", ty: "::UnityEngine::Rendering::BatchMaterialID", modifiers: "", def_value: None }, CppParam { name: "flags", ty:
  // "::UnityEngine::Rendering::BatchDrawCommandFlags", modifiers: "", def_value: None }, CppParam { name: "transparentInstanceId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "overridenComponents", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "range", ty: "::UnityEngine::Rendering::RangeKey", modifiers: "", def_value: None }, CppParam { name:
  // "lightmapIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DrawKey(::UnityEngine::Rendering::BatchMeshID meshID, int32_t submeshIndex, ::UnityEngine::Rendering::BatchMaterialID materialID, ::UnityEngine::Rendering::BatchDrawCommandFlags flags,
                    int32_t transparentInstanceId, uint32_t overridenComponents, ::UnityEngine::Rendering::RangeKey range, int32_t lightmapIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17610 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field meshID, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Rendering::BatchMeshID meshID;

  /// @brief Field submeshIndex, offset: 0x4, size: 0x4, def value: None
  int32_t submeshIndex;

  /// @brief Field materialID, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::Rendering::BatchMaterialID materialID;

  /// @brief Field flags, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::Rendering::BatchDrawCommandFlags flags;

  /// @brief Field transparentInstanceId, offset: 0x10, size: 0x4, def value: None
  int32_t transparentInstanceId;

  /// @brief Field overridenComponents, offset: 0x14, size: 0x4, def value: None
  uint32_t overridenComponents;

  /// @brief Field range, offset: 0x18, size: 0x1c, def value: None
  ::UnityEngine::Rendering::RangeKey range;

  /// @brief Field lightmapIndex, offset: 0x34, size: 0x4, def value: None
  int32_t lightmapIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DrawKey, meshID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawKey, submeshIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawKey, materialID) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawKey, flags) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawKey, transparentInstanceId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawKey, overridenComponents) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawKey, range) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawKey, lightmapIndex) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DrawKey, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DrawKey, "UnityEngine.Rendering", "DrawKey");
