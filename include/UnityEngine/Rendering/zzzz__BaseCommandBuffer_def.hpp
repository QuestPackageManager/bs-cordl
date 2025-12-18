#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BaseCommandBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseCommandBuffer)
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphPass;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class BaseCommandBuffer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::BaseCommandBuffer);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.BaseCommandBuffer
class CORDL_TYPE BaseCommandBuffer : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_ExecutingPass, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ExecutingPass, put = __cordl_internal_set_m_ExecutingPass)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* m_ExecutingPass;

  /// @brief Field m_WrappedCommandBuffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WrappedCommandBuffer, put = __cordl_internal_set_m_WrappedCommandBuffer)) ::UnityEngine::Rendering::CommandBuffer* m_WrappedCommandBuffer;

  __declspec(property(get = get_name)) ::StringW name;

  __declspec(property(get = get_sizeInBytes)) int32_t sizeInBytes;

  static inline ::UnityEngine::Rendering::BaseCommandBuffer* New_ctor(::UnityEngine::Rendering::CommandBuffer* wrapped, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* executingPass,
                                                                      bool isAsync);

  /// @brief Method ThrowIfGlobalStateNotAllowed, addr 0x65973b4, size 0x78, virtual false, abstract: false, final false
  inline void ThrowIfGlobalStateNotAllowed();

  /// @brief Method ThrowIfRasterNotAllowed, addr 0x659742c, size 0x94, virtual false, abstract: false, final false
  inline void ThrowIfRasterNotAllowed();

  /// @brief Method ValidateTextureHandle, addr 0x65974c0, size 0x1e0, virtual false, abstract: false, final false
  inline void ValidateTextureHandle(::UnityEngine::Rendering::RenderGraphModule::TextureHandle h);

  /// @brief Method ValidateTextureHandleRead, addr 0x65976a0, size 0x18c, virtual false, abstract: false, final false
  inline void ValidateTextureHandleRead(::UnityEngine::Rendering::RenderGraphModule::TextureHandle h);

  /// @brief Method ValidateTextureHandleWrite, addr 0x659782c, size 0x1f4, virtual false, abstract: false, final false
  inline void ValidateTextureHandleWrite(::UnityEngine::Rendering::RenderGraphModule::TextureHandle h);

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* const& __cordl_internal_get_m_ExecutingPass() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*& __cordl_internal_get_m_ExecutingPass();

  constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get_m_WrappedCommandBuffer() const;

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get_m_WrappedCommandBuffer();

  constexpr void __cordl_internal_set_m_ExecutingPass(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* value);

  constexpr void __cordl_internal_set_m_WrappedCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  /// @brief Method .ctor, addr 0x659735c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::CommandBuffer* wrapped, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* executingPass, bool isAsync);

  /// @brief Method get_name, addr 0x6597384, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_sizeInBytes, addr 0x659739c, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_sizeInBytes();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseCommandBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseCommandBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseCommandBuffer(BaseCommandBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseCommandBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseCommandBuffer(BaseCommandBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11845 };

  /// @brief Field m_WrappedCommandBuffer, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* ___m_WrappedCommandBuffer;

  /// @brief Field m_ExecutingPass, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* ___m_ExecutingPass;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BaseCommandBuffer, ___m_WrappedCommandBuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BaseCommandBuffer, ___m_ExecutingPass) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BaseCommandBuffer, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::BaseCommandBuffer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BaseCommandBuffer*, "UnityEngine.Rendering", "BaseCommandBuffer");
