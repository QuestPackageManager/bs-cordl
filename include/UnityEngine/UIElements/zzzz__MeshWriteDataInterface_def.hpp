#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MeshWriteDataInterface.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshWriteDataInterface)
// Forward declare root types
namespace UnityEngine::UIElements {
struct MeshWriteDataInterface;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::MeshWriteDataInterface);
// Dependencies System.IntPtr
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.MeshWriteDataInterface
struct CORDL_TYPE MeshWriteDataInterface {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshWriteDataInterface();

  // Ctor Parameters [CppParam { name: "vertices", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::System::IntPtr", modifiers: "", def_value: None },
  // CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indexCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MeshWriteDataInterface(::System::IntPtr vertices, ::System::IntPtr indices, int32_t vertexCount, int32_t indexCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5989 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field vertices, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr vertices;

  /// @brief Field indices, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr indices;

  /// @brief Field vertexCount, offset: 0x10, size: 0x4, def value: None
  int32_t vertexCount;

  /// @brief Field indexCount, offset: 0x14, size: 0x4, def value: None
  int32_t indexCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::MeshWriteDataInterface, vertices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshWriteDataInterface, indices) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshWriteDataInterface, vertexCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MeshWriteDataInterface, indexCount) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MeshWriteDataInterface, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MeshWriteDataInterface, "UnityEngine.UIElements", "MeshWriteDataInterface");
