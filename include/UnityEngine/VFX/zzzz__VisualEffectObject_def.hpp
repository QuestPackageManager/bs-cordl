#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VisualEffectObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(VisualEffectObject)
// Forward declare root types
namespace UnityEngine::VFX {
class VisualEffectObject;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::VisualEffectObject*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VisualEffectObject*, "UnityEngine.VFX", "VisualEffectObject");
// Dependencies UnityEngine.Object
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VisualEffectObject
class CORDL_TYPE VisualEffectObject : public ::UnityEngine::Object {
public:
  // Declarations
  static inline ::UnityEngine::VFX::VisualEffectObject* New_ctor();

  /// @brief Method .ctor, addr 0x6e2a628, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22327 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::VFX::VisualEffectObject) == 0x18, "Size mismatch!");

} // namespace UnityEngine::VFX
