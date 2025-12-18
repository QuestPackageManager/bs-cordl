#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/BufferDesc.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BufferDesc)
namespace UnityEngine {
struct GraphicsBuffer_Target;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
struct BufferDesc;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::BufferDesc);
// Dependencies UnityEngine.GraphicsBuffer::Target, UnityEngine.GraphicsBuffer::UsageFlags
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.BufferDesc
struct CORDL_TYPE BufferDesc {
public:
  // Declarations
  /// @brief Method GetHashCode, addr 0x662d57c, size 0x3c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x662d554, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(int32_t count, int32_t stride);

  /// @brief Method .ctor, addr 0x662d56c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t count, int32_t stride, ::UnityEngine::GraphicsBuffer_Target target);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BufferDesc();

  // Ctor Parameters [CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "stride", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "name",
  // ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "target", ty: "::UnityEngine::GraphicsBuffer_Target", modifiers: "", def_value: None }, CppParam { name: "usageFlags", ty:
  // "::UnityEngine::GraphicsBuffer_UsageFlags", modifiers: "", def_value: None }]
  constexpr BufferDesc(int32_t count, int32_t stride, ::StringW name, ::UnityEngine::GraphicsBuffer_Target target, ::UnityEngine::GraphicsBuffer_UsageFlags usageFlags) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12415 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field count, offset: 0x0, size: 0x4, def value: None
  int32_t count;

  /// @brief Field stride, offset: 0x4, size: 0x4, def value: None
  int32_t stride;

  /// @brief Field name, offset: 0x8, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field target, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::GraphicsBuffer_Target target;

  /// @brief Field usageFlags, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::GraphicsBuffer_UsageFlags usageFlags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::BufferDesc, count) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::BufferDesc, stride) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::BufferDesc, name) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::BufferDesc, target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::BufferDesc, usageFlags) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::BufferDesc, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::BufferDesc, "UnityEngine.Rendering.RenderGraphModule", "BufferDesc");
