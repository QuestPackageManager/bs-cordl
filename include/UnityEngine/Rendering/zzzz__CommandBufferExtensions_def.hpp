#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CommandBufferExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CommandBufferExtensions)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct FastMemoryFlags;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class CommandBufferExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::CommandBufferExtensions);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.CommandBufferExtensions
class CORDL_TYPE CommandBufferExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Internal_SwitchIntoFastMemory, addr 0x69510f0, size 0xc8, virtual false, abstract: false, final false
  static inline void Internal_SwitchIntoFastMemory(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> rt,
                                                   ::UnityEngine::Rendering::FastMemoryFlags fastMemoryFlags, float_t residency, bool copyContents);

  /// @brief Method Internal_SwitchIntoFastMemory_Injected, addr 0x69511b8, size 0x6c, virtual false, abstract: false, final false
  static inline void Internal_SwitchIntoFastMemory_Injected(::System::IntPtr cmd, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> rt,
                                                            ::UnityEngine::Rendering::FastMemoryFlags fastMemoryFlags, float_t residency, bool copyContents);

  /// @brief Method Internal_SwitchOutOfFastMemory, addr 0x6951224, size 0xa8, virtual false, abstract: false, final false
  static inline void Internal_SwitchOutOfFastMemory(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> rt, bool copyContents);

  /// @brief Method Internal_SwitchOutOfFastMemory_Injected, addr 0x69512cc, size 0x54, virtual false, abstract: false, final false
  static inline void Internal_SwitchOutOfFastMemory_Injected(::System::IntPtr cmd, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> rt, bool copyContents);

  /// @brief Method SwitchIntoFastMemory, addr 0x6951320, size 0x4, virtual false, abstract: false, final false
  static inline void SwitchIntoFastMemory(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier rid, ::UnityEngine::Rendering::FastMemoryFlags fastMemoryFlags,
                                          float_t residency, bool copyContents);

  /// @brief Method SwitchOutOfFastMemory, addr 0x6951324, size 0x4, virtual false, abstract: false, final false
  static inline void SwitchOutOfFastMemory(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier rid, bool copyContents);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandBufferExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandBufferExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandBufferExtensions(CommandBufferExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandBufferExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandBufferExtensions(CommandBufferExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10756 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CommandBufferExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::CommandBufferExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CommandBufferExtensions*, "UnityEngine.Rendering", "CommandBufferExtensions");
