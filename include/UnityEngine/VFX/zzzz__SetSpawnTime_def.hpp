#pragma once
// IWYU pragma private; include "UnityEngine\VFX\SetSpawnTime.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/zzzz__VFXSpawnerCallbacks_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SetSpawnTime)
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
class SetSpawnTime;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::SetSpawnTime*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::SetSpawnTime*, "UnityEngine.VFX", "SetSpawnTime");
// Dependencies UnityEngine.VFX.VFXSpawnerCallbacks
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.SetSpawnTime
class CORDL_TYPE SetSpawnTime : public ::UnityEngine::VFX::VFXSpawnerCallbacks {
public:
  // Declarations
  /// @brief Field spawnTimeID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_spawnTimeID, put = setStaticF_spawnTimeID)) int32_t spawnTimeID;

  static inline ::UnityEngine::VFX::SetSpawnTime* New_ctor();

  /// @brief Method OnPlay, addr 0x69d1c14, size 0x4, virtual true, abstract: false, final true
  inline void OnPlay(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues, ::UnityEngine::VFX::VisualEffect* vfxComponent);

  /// @brief Method OnStop, addr 0x69d1cbc, size 0x4, virtual true, abstract: false, final true
  inline void OnStop(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues, ::UnityEngine::VFX::VisualEffect* vfxComponent);

  /// @brief Method OnUpdate, addr 0x69d1c18, size 0xa4, virtual true, abstract: false, final true
  inline void OnUpdate(::UnityEngine::VFX::VFXSpawnerState* state, ::UnityEngine::VFX::VFXExpressionValues* vfxValues, ::UnityEngine::VFX::VisualEffect* vfxComponent);

  /// @brief Method .ctor, addr 0x69d1cc0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_spawnTimeID();

  static inline void setStaticF_spawnTimeID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetSpawnTime();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetSpawnTime", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetSpawnTime(SetSpawnTime&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetSpawnTime", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetSpawnTime(SetSpawnTime const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19925 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::VFX::SetSpawnTime) == 0x18, "Size mismatch!");

} // namespace UnityEngine::VFX
