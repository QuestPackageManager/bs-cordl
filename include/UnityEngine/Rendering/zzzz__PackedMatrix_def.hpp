#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PackedMatrix.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PackedMatrix)
namespace Unity::Mathematics {
struct float4x4;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct PackedMatrix;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PackedMatrix);
// Dependencies Unity.Mathematics.float4
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.PackedMatrix
struct CORDL_TYPE PackedMatrix {
public:
  // Declarations
  /// @brief Method FromFloat4x4, addr 0x6608fb8, size 0x40, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::PackedMatrix FromFloat4x4(::ByRef<::Unity::Mathematics::float4x4> m);

  /// @brief Method FromMatrix4x4, addr 0x6608f78, size 0x40, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::PackedMatrix FromMatrix4x4(::ByRef<::UnityEngine::Matrix4x4> m);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PackedMatrix();

  // Ctor Parameters [CppParam { name: "packed0", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "packed1", ty: "::Unity::Mathematics::float4", modifiers: "",
  // def_value: None }, CppParam { name: "packed2", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }]
  constexpr PackedMatrix(::Unity::Mathematics::float4 packed0, ::Unity::Mathematics::float4 packed1, ::Unity::Mathematics::float4 packed2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17659 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field packed0, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::float4 packed0;

  /// @brief Field packed1, offset: 0x10, size: 0x10, def value: None
  ::Unity::Mathematics::float4 packed1;

  /// @brief Field packed2, offset: 0x20, size: 0x10, def value: None
  ::Unity::Mathematics::float4 packed2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PackedMatrix, packed0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PackedMatrix, packed1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PackedMatrix, packed2) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::PackedMatrix, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::PackedMatrix, "UnityEngine.Rendering", "PackedMatrix");
