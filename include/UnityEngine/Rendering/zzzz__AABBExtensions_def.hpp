#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/AABBExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AABBExtensions)
namespace UnityEngine::Rendering {
struct AABB;
}
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class AABBExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::AABBExtensions);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.AABBExtensions
class CORDL_TYPE AABBExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToAABB, addr 0x65eb5ac, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::AABB ToAABB(::UnityEngine::Bounds bounds);

  /// @brief Method ToBounds, addr 0x65eb5c0, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::Bounds ToBounds(::UnityEngine::Rendering::AABB aabb);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AABBExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AABBExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AABBExtensions(AABBExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AABBExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AABBExtensions(AABBExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17548 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::AABBExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::AABBExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::AABBExtensions*, "UnityEngine.Rendering", "AABBExtensions");
