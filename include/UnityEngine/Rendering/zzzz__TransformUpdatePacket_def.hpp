#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/TransformUpdatePacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TransformUpdatePacket)
// Forward declare root types
namespace UnityEngine::Rendering {
struct TransformUpdatePacket;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::TransformUpdatePacket);
// Dependencies Unity.Mathematics.float4
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.TransformUpdatePacket
struct CORDL_TYPE TransformUpdatePacket {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransformUpdatePacket();

  // Ctor Parameters [CppParam { name: "localToWorld0", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "localToWorld1", ty: "::Unity::Mathematics::float4",
  // modifiers: "", def_value: None }, CppParam { name: "localToWorld2", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }]
  constexpr TransformUpdatePacket(::Unity::Mathematics::float4 localToWorld0, ::Unity::Mathematics::float4 localToWorld1, ::Unity::Mathematics::float4 localToWorld2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17680 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field localToWorld0, offset: 0x0, size: 0x10, def value: None
  ::Unity::Mathematics::float4 localToWorld0;

  /// @brief Field localToWorld1, offset: 0x10, size: 0x10, def value: None
  ::Unity::Mathematics::float4 localToWorld1;

  /// @brief Field localToWorld2, offset: 0x20, size: 0x10, def value: None
  ::Unity::Mathematics::float4 localToWorld2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::TransformUpdatePacket, localToWorld0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::TransformUpdatePacket, localToWorld1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::TransformUpdatePacket, localToWorld2) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::TransformUpdatePacket, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::TransformUpdatePacket, "UnityEngine.Rendering", "TransformUpdatePacket");
