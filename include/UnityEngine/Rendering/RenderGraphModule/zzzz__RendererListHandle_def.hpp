#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RendererListHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandleType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RendererListHandle)
namespace UnityEngine::Rendering::RenderGraphModule {
struct RendererListHandleType;
}
namespace UnityEngine::Rendering {
struct RendererList;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
struct RendererListHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle);
// Dependencies UnityEngine.Rendering.RenderGraphModule.RendererListHandleType
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RendererListHandle
struct CORDL_TYPE RendererListHandle {
public:
  // Declarations
  __declspec(property(get = get_handle, put = set_handle)) int32_t handle;

  /// @brief Method IsValid, addr 0x65caf84, size 0x8, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method .ctor, addr 0x65c8e6c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t handle, ::UnityEngine::Rendering::RenderGraphModule::RendererListHandleType type);

  /// @brief Method get_handle, addr 0x65cae58, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_handle();

  /// @brief Method op_Implicit, addr 0x65cae68, size 0x11c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RendererList op_Implicit___UnityEngine__Rendering__RendererList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle rendererList);

  /// @brief Method op_Implicit, addr 0x65c6454, size 0x8, virtual false, abstract: false, final false
  static inline int32_t op_Implicit_int32_t(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle handle);

  /// @brief Method set_handle, addr 0x65cae60, size 0x8, virtual false, abstract: false, final false
  inline void set_handle(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RendererListHandle();

  // Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::Rendering::RenderGraphModule::RendererListHandleType", modifiers: "", def_value: None }, CppParam { name: "m_IsValid", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "_handle_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RendererListHandle(::UnityEngine::Rendering::RenderGraphModule::RendererListHandleType type, bool m_IsValid, int32_t _handle_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12425 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field type, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RendererListHandleType type;

  /// @brief Field m_IsValid, offset: 0x4, size: 0x1, def value: None
  bool m_IsValid;

  /// @brief Field <handle>k__BackingField, offset: 0x8, size: 0x4, def value: None
  int32_t _handle_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle, m_IsValid) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle, _handle_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle, 0xc>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle, "UnityEngine.Rendering.RenderGraphModule", "RendererListHandle");
