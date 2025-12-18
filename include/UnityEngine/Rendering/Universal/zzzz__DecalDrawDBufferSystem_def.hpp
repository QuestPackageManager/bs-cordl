#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalDrawDBufferSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawSystem_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecalDrawDBufferSystem)
namespace UnityEngine::Rendering::Universal {
class DecalCachedChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalEntityManager;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalDrawDBufferSystem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem);
// Dependencies UnityEngine.Rendering.Universal.DecalDrawSystem
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalDrawDBufferSystem
class CORDL_TYPE DecalDrawDBufferSystem : public ::UnityEngine::Rendering::Universal::DecalDrawSystem {
public:
  // Declarations
  /// @brief Method GetPassIndex, addr 0x669b420, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetPassIndex(::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk);

  static inline ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* New_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager);

  /// @brief Method .ctor, addr 0x669b27c, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalDrawDBufferSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalDrawDBufferSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalDrawDBufferSystem(DecalDrawDBufferSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalDrawDBufferSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalDrawDBufferSystem(DecalDrawDBufferSystem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12646 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem*, "UnityEngine.Rendering.Universal", "DecalDrawDBufferSystem");
