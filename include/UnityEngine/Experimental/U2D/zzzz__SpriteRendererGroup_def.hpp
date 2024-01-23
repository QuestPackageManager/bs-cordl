#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SpriteRendererGroup)
// Forward declare root types
namespace UnityEngine::Experimental::U2D {
class SpriteRendererGroup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::U2D::SpriteRendererGroup);
// Type: UnityEngine.Experimental.U2D::SpriteRendererGroup
// SizeInfo { instance_size: 16, native_size: 1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::U2D {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10385))
// CS Name: ::UnityEngine.Experimental.U2D::SpriteRendererGroup*
class CORDL_TYPE SpriteRendererGroup : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "SpriteRendererGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpriteRendererGroup(SpriteRendererGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpriteRendererGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpriteRendererGroup(SpriteRendererGroup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpriteRendererGroup();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::U2D::SpriteRendererGroup, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Experimental::U2D
NEED_NO_BOX(::UnityEngine::Experimental::U2D::SpriteRendererGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::U2D::SpriteRendererGroup*, "UnityEngine.Experimental.U2D", "SpriteRendererGroup");
