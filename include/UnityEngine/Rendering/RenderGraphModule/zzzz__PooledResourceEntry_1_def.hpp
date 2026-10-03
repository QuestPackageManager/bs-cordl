#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/PooledResourceEntry_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PooledResourceEntry_1)
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename Type> struct PooledResourceEntry_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::Rendering::RenderGraphModule::PooledResourceEntry_1);
DEFINE_IL2CPP_GEN_CLASS(::UnityEngine::Rendering::RenderGraphModule::PooledResourceEntry_1, "UnityEngine.Rendering.RenderGraphModule", "PooledResourceEntry`1");
// [IsReadOnly]
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// cpp template
template <typename Type>
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.PooledResourceEntry`1<Type>
struct CORDL_TYPE PooledResourceEntry_1 {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(Type resource, int32_t frameIndex, int32_t executionCount);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PooledResourceEntry_1();

  // Ctor Parameters [CppParam { name: "resource", ty: "Type", modifiers: "", def_value: None, comment: None }, CppParam { name: "frameIndex", ty: "int32_t", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "executionCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr PooledResourceEntry_1(Type resource, int32_t frameIndex, int32_t executionCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9357 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field resource, offset: 0x0, size: 0x8, def value: None
  Type resource;

  /// @brief Field frameIndex, offset: 0x8, size: 0x4, def value: None
  int32_t frameIndex;

  /// @brief Field executionCount, offset: 0xc, size: 0x4, def value: None
  int32_t executionCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::RenderGraphModule
