#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/IRenderGraphResourcePool.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IRenderGraphResourcePool)
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphLogger;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
class IRenderGraphResourcePool;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResourcePool);
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.IRenderGraphResourcePool
class CORDL_TYPE IRenderGraphResourcePool : public ::System::Object {
public:
  // Declarations
  /// @brief Method CheckFrameAllocation, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void CheckFrameAllocation(bool onException, int32_t frameIndex);

  /// @brief Method Cleanup, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Cleanup();

  /// @brief Method LogResources, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogResources(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* logger);

  static inline ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResourcePool* New_ctor();

  /// @brief Method PurgeUnusedResources, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void PurgeUnusedResources(int32_t currentFrameIndex);

  /// @brief Method .ctor, addr 0x662dae0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IRenderGraphResourcePool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IRenderGraphResourcePool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IRenderGraphResourcePool(IRenderGraphResourcePool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IRenderGraphResourcePool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRenderGraphResourcePool(IRenderGraphResourcePool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12418 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResourcePool, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResourcePool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResourcePool*, "UnityEngine.Rendering.RenderGraphModule", "IRenderGraphResourcePool");
