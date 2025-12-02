#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VisualEffectObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(VisualEffectObject)
// Forward declare root types
namespace UnityEngine::VFX {
class VisualEffectObject;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::VFX::VisualEffectObject);
// Dependencies UnityEngine.Object
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VisualEffectObject
class CORDL_TYPE VisualEffectObject : public ::UnityEngine::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualEffectObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualEffectObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualEffectObject(VisualEffectObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualEffectObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualEffectObject(VisualEffectObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22588 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::VFX::VisualEffectObject, 0x18>, "Size mismatch!");

} // namespace UnityEngine::VFX
NEED_NO_BOX(::UnityEngine::VFX::VisualEffectObject);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::VFX::VisualEffectObject*, "UnityEngine.VFX", "VisualEffectObject");
