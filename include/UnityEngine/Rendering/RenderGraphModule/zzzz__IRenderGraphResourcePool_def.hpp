#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/IRenderGraphResourcePool.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResourcePool*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResourcePool*, "UnityEngine.Rendering.RenderGraphModule", "IRenderGraphResourcePool");
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.IRenderGraphResourcePool
class CORDL_TYPE IRenderGraphResourcePool : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IntraFrameMemoryAliasing, put = set_IntraFrameMemoryAliasing)) bool IntraFrameMemoryAliasing;

  /// @brief Field <IntraFrameMemoryAliasing>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__IntraFrameMemoryAliasing_k__BackingField,
                      put = __cordl_internal_set__IntraFrameMemoryAliasing_k__BackingField)) bool _IntraFrameMemoryAliasing_k__BackingField;

  /// @brief Method CheckFrameAllocation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CheckFrameAllocation(bool onException, int32_t frameIndex);

  /// @brief Method Cleanup, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Cleanup();

  /// @brief Method LogResources, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void LogResources(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* logger);

  static inline ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResourcePool* New_ctor();

  /// @brief Method PurgeUnusedResources, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void PurgeUnusedResources(int32_t currentFrameIndex);

  constexpr bool const& __cordl_internal_get__IntraFrameMemoryAliasing_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IntraFrameMemoryAliasing_k__BackingField();

  constexpr void __cordl_internal_set__IntraFrameMemoryAliasing_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x6c0d6b8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_IntraFrameMemoryAliasing, addr 0x6c0d6a8, size 0x8, virtual false, abstract: false, final false
  inline bool get_IntraFrameMemoryAliasing();

  /// [CompilerGenerated]
  /// @brief Method set_IntraFrameMemoryAliasing, addr 0x6c0d6b0, size 0x8, virtual false, abstract: false, final false
  inline void set_IntraFrameMemoryAliasing(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IRenderGraphResourcePool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IRenderGraphResourcePool", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IRenderGraphResourcePool(IRenderGraphResourcePool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IRenderGraphResourcePool", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRenderGraphResourcePool(IRenderGraphResourcePool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9356 };

  /// [CompilerGenerated]
  /// @brief Field <IntraFrameMemoryAliasing>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____IntraFrameMemoryAliasing_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResourcePool, ____IntraFrameMemoryAliasing_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResourcePool) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
