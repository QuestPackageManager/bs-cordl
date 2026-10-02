#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsRotate_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PhysicsTransform)
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsRotate;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsTransform;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsTransform);
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsTransform, "UnityEngine.LowLevelPhysics2D", "PhysicsTransform");
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsRotate, UnityEngine.Vector2
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsTransform
struct CORDL_TYPE PhysicsTransform {
public:
  // Declarations
  /// [IsReadOnly]
  /// @brief Method GetPositionAndRotation, addr 0x6fd4e58, size 0x14, virtual false, abstract: false, final false
  inline void GetPositionAndRotation(::by_ref<::UnityEngine::Vector2> position, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsRotate> rotation);

  /// [IsReadOnly]
  /// @brief Method ToString, addr 0x6fd4e6c, size 0xe0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x6fd4d78, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsTransform();

  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotation", ty:
  // "::UnityEngine::LowLevelPhysics2D::PhysicsRotate", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsTransform(::UnityEngine::Vector2 position, ::UnityEngine::LowLevelPhysics2D::PhysicsRotate rotation) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21523 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field position, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2 position;

  /// @brief Field rotation, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsRotate rotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsTransform, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsTransform, rotation) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsTransform) == 0x10, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
