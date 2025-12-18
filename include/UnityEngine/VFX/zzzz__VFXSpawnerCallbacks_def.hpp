#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXSpawnerCallbacks.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(VFXSpawnerCallbacks)
namespace UnityEngine::VFX {
class VFXExpressionValues;
}
namespace UnityEngine::VFX {
class VFXSpawnerState;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
// Forward declare root types
namespace UnityEngine::VFX {
class VFXSpawnerCallbacks;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::VFX::VFXSpawnerCallbacks);
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VFXSpawnerCallbacks
class CORDL_TYPE VFXSpawnerCallbacks : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  static inline ::UnityEngine::VFX::VFXSpawnerCallbacks* New_ctor();

  /// @brief Method OnPlay, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnPlay(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues, ::UnityEngine::VFX::VisualEffect* vfxComponent);

  /// @brief Method OnStop, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnStop(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues, ::UnityEngine::VFX::VisualEffect* vfxComponent);

  /// @brief Method OnUpdate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnUpdate(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues, ::UnityEngine::VFX::VisualEffect* vfxComponent);

  /// @brief Method .ctor, addr 0x6c60a50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXSpawnerCallbacks();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXSpawnerCallbacks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXSpawnerCallbacks(VFXSpawnerCallbacks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXSpawnerCallbacks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXSpawnerCallbacks(VFXSpawnerCallbacks const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22613 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::VFX::VFXSpawnerCallbacks, 0x18>, "Size mismatch!");

} // namespace UnityEngine::VFX
NEED_NO_BOX(::UnityEngine::VFX::VFXSpawnerCallbacks);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::VFX::VFXSpawnerCallbacks*, "UnityEngine.VFX", "VFXSpawnerCallbacks");
