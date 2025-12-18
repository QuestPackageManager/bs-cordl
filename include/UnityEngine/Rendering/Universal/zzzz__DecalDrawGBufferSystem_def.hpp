#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalDrawGBufferSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawSystem_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecalDrawGBufferSystem)
namespace UnityEngine::Rendering::Universal {
class DecalCachedChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalEntityManager;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalDrawGBufferSystem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem);
// Dependencies UnityEngine.Rendering.Universal.DecalDrawSystem
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalDrawGBufferSystem
class CORDL_TYPE DecalDrawGBufferSystem : public ::UnityEngine::Rendering::Universal::DecalDrawSystem {
public:
  // Declarations
  /// @brief Method GetPassIndex, addr 0x66a8884, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetPassIndex(::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk);

  static inline ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* New_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager);

  /// @brief Method .ctor, addr 0x66a8800, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalDrawGBufferSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalDrawGBufferSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalDrawGBufferSystem(DecalDrawGBufferSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalDrawGBufferSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalDrawGBufferSystem(DecalDrawGBufferSystem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12682 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem*, "UnityEngine.Rendering.Universal", "DecalDrawGBufferSystem");
