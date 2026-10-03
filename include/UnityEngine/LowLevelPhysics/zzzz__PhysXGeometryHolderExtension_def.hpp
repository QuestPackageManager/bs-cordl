#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics/PhysXGeometryHolderExtension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PhysXGeometryHolderExtension)
namespace System {
struct IntPtr;
}
namespace UnityEngine::LowLevelPhysics {
struct GeometryHolder;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace UnityEngine::LowLevelPhysics {
class PhysXGeometryHolderExtension;
}
// Write type traits
MARK_REF_T(::UnityEngine::LowLevelPhysics::PhysXGeometryHolderExtension*);
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics::PhysXGeometryHolderExtension*, "UnityEngine.LowLevelPhysics", "PhysXGeometryHolderExtension");
// [Extension]
// [NativeHeader("Modules/Physics/PhysicsCollisionGeometry.h")]
// Dependencies System.Object
namespace UnityEngine::LowLevelPhysics {
// Is value type: false
// CS Name: UnityEngine.LowLevelPhysics.PhysXGeometryHolderExtension
class CORDL_TYPE PhysXGeometryHolderExtension : public ::System::Object {
public:
  // Declarations
  /// [FreeFunction("Physics::PhysXGeometryExtension::GetGeometryHolderFromCollider")]
  /// [Extension]
  /// @brief Method GetGeometryHolder, addr 0x7009ac4, size 0xd8, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics::GeometryHolder GetGeometryHolder(::UnityEngine::Collider* col);

  /// @brief Method GetGeometryHolder_Injected, addr 0x7009b9c, size 0x44, virtual false, abstract: false, final false
  static inline void GetGeometryHolder_Injected(::System::IntPtr col, ::by_ref<::UnityEngine::LowLevelPhysics::GeometryHolder> ret);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysXGeometryHolderExtension();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhysXGeometryHolderExtension", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhysXGeometryHolderExtension(PhysXGeometryHolderExtension&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhysXGeometryHolderExtension", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhysXGeometryHolderExtension(PhysXGeometryHolderExtension const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19111 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::LowLevelPhysics::PhysXGeometryHolderExtension) == 0x10, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics
