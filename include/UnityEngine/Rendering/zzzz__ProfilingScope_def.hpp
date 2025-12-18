#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProfilingScope.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ProfilingScope)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering {
class BaseCommandBuffer;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ProfilingScope;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ProfilingScope);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProfilingScope
#pragma pack(push, 0)
struct CORDL_TYPE ProfilingScope {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x65b6c58, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x65b6c54, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::BaseCommandBuffer* cmd, ::UnityEngine::Rendering::ProfilingSampler* sampler);

  /// @brief Method .ctor, addr 0x65b6c50, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ProfilingSampler* sampler);

  /// @brief Method .ctor, addr 0x65b6c4c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::ProfilingSampler* sampler);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilingScope();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12027 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProfilingScope, 0x1>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProfilingScope, "UnityEngine.Rendering", "ProfilingScope");
