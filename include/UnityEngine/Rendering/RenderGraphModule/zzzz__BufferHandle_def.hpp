#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/BufferHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BufferHandle)
namespace UnityEngine::Rendering::RenderGraphModule {
struct ResourceHandle;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
struct BufferHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::BufferHandle);
// Dependencies UnityEngine.Rendering.RenderGraphModule.ResourceHandle
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.BufferHandle
struct CORDL_TYPE BufferHandle {
public:
  // Declarations
  /// @brief Field s_NullHandle, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_s_NullHandle, put = setStaticF_s_NullHandle)) ::UnityEngine::Rendering::RenderGraphModule::BufferHandle s_NullHandle;

  /// @brief Method IsValid, addr 0x662d3c8, size 0xe4, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method .ctor, addr 0x662d284, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> h);

  /// @brief Method .ctor, addr 0x662d298, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(int32_t handle, bool shared);

  static inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle getStaticF_s_NullHandle();

  /// @brief Method get_nullHandle, addr 0x662d224, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle get_nullHandle();

  /// @brief Method op_Implicit, addr 0x662d2d8, size 0xf0, virtual false, abstract: false, final false
  static inline ::UnityEngine::GraphicsBuffer* op_Implicit___UnityEngine__GraphicsBuffer_(::UnityEngine::Rendering::RenderGraphModule::BufferHandle buffer);

  static inline void setStaticF_s_NullHandle(::UnityEngine::Rendering::RenderGraphModule::BufferHandle value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BufferHandle();

  // Ctor Parameters [CppParam { name: "handle", ty: "::UnityEngine::Rendering::RenderGraphModule::ResourceHandle", modifiers: "", def_value: None }]
  constexpr BufferHandle(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12414 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field handle, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::BufferHandle, handle) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::BufferHandle, 0xc>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::BufferHandle, "UnityEngine.Rendering.RenderGraphModule", "BufferHandle");
