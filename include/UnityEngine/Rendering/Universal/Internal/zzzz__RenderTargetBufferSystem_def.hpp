#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/RenderTargetBufferSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderTargetBufferSystem)
namespace UnityEngine::Rendering::Universal::Internal {
struct RenderTargetBufferSystem_SwapBuffer;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class RenderTargetBufferSystem;
}
namespace UnityEngine::Rendering::Universal::Internal {
struct RenderTargetBufferSystem_SwapBuffer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem);
MARK_VAL_T(::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer);
// Dependencies
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem/SwapBuffer
struct CORDL_TYPE RenderTargetBufferSystem_SwapBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderTargetBufferSystem_SwapBuffer();

  // Ctor Parameters [CppParam { name: "rtMSAA", ty: "::UnityEngine::Rendering::RTHandle*", modifiers: "", def_value: None }, CppParam { name: "rtResolve", ty: "::UnityEngine::Rendering::RTHandle*",
  // modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "msaa", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderTargetBufferSystem_SwapBuffer(::UnityEngine::Rendering::RTHandle* rtMSAA, ::UnityEngine::Rendering::RTHandle* rtResolve, ::StringW name, int32_t msaa) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13078 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field rtMSAA, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* rtMSAA;

  /// @brief Field rtResolve, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* rtResolve;

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field msaa, offset: 0x18, size: 0x4, def value: None
  int32_t msaa;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer, rtMSAA) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer, rtResolve) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer, name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer, msaa) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies System.Object, UnityEngine.FilterMode, UnityEngine.RenderTextureDescriptor, UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem::SwapBuffer
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.RenderTargetBufferSystem
class CORDL_TYPE RenderTargetBufferSystem : public ::System::Object {
public:
  // Declarations
  using SwapBuffer = ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer;

  __declspec(property(get = get_backBuffer)) ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer backBuffer;

  __declspec(property(get = get_frontBuffer)) ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer frontBuffer;

  /// @brief Field m_A, offset 0x10, size 0x20
  __declspec(property(get = __cordl_internal_get_m_A, put = __cordl_internal_set_m_A)) ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer m_A;

  /// @brief Field m_AisBackBuffer, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_m_AisBackBuffer, put = setStaticF_m_AisBackBuffer)) bool m_AisBackBuffer;

  /// @brief Field m_AllowMSAA, offset 0x54, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AllowMSAA, put = __cordl_internal_set_m_AllowMSAA)) bool m_AllowMSAA;

  /// @brief Field m_B, offset 0x30, size 0x20
  __declspec(property(get = __cordl_internal_get_m_B, put = __cordl_internal_set_m_B)) ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer m_B;

  /// @brief Field m_Desc, offset 0xffffffff, size 0x34
  __declspec(property(get = getStaticF_m_Desc, put = setStaticF_m_Desc)) ::UnityEngine::RenderTextureDescriptor m_Desc;

  /// @brief Field m_FilterMode, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FilterMode, put = __cordl_internal_set_m_FilterMode)) ::UnityEngine::FilterMode m_FilterMode;

  /// @brief Method Clear, addr 0x66eab64, size 0x80, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Dispose, addr 0x66ea758, size 0x54, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method EnableMSAA, addr 0x66eacc8, size 0x80, virtual false, abstract: false, final false
  inline void EnableMSAA(bool enable);

  /// @brief Method GetBackBuffer, addr 0x66ea7f4, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* GetBackBuffer(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method GetBufferA, addr 0x66ead48, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* GetBufferA();

  /// @brief Method GetFrontBuffer, addr 0x66eaa74, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* GetFrontBuffer(::UnityEngine::Rendering::CommandBuffer* cmd);

  static inline ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem* New_ctor(::StringW name);

  /// @brief Method PeekBackBuffer, addr 0x66ea7ac, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* PeekBackBuffer();

  /// @brief Method ReAllocate, addr 0x66ea80c, size 0x268, virtual false, abstract: false, final false
  inline void ReAllocate(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method SetCameraSettings, addr 0x66eabe4, size 0xe4, virtual false, abstract: false, final false
  inline void SetCameraSettings(::UnityEngine::RenderTextureDescriptor desc, ::UnityEngine::FilterMode filterMode);

  /// @brief Method Swap, addr 0x66eab00, size 0x64, virtual false, abstract: false, final false
  inline void Swap();

  constexpr ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer const& __cordl_internal_get_m_A() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer& __cordl_internal_get_m_A();

  constexpr bool const& __cordl_internal_get_m_AllowMSAA() const;

  constexpr bool& __cordl_internal_get_m_AllowMSAA();

  constexpr ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer const& __cordl_internal_get_m_B() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer& __cordl_internal_get_m_B();

  constexpr ::UnityEngine::FilterMode const& __cordl_internal_get_m_FilterMode() const;

  constexpr ::UnityEngine::FilterMode& __cordl_internal_get_m_FilterMode();

  constexpr void __cordl_internal_set_m_A(::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer value);

  constexpr void __cordl_internal_set_m_AllowMSAA(bool value);

  constexpr void __cordl_internal_set_m_B(::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer value);

  constexpr void __cordl_internal_set_m_FilterMode(::UnityEngine::FilterMode value);

  /// @brief Method .ctor, addr 0x66ea6c0, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  static inline bool getStaticF_m_AisBackBuffer();

  static inline ::UnityEngine::RenderTextureDescriptor getStaticF_m_Desc();

  /// @brief Method get_backBuffer, addr 0x66ea5e0, size 0x70, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer> get_backBuffer();

  /// @brief Method get_frontBuffer, addr 0x66ea650, size 0x70, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer> get_frontBuffer();

  static inline void setStaticF_m_AisBackBuffer(bool value);

  static inline void setStaticF_m_Desc(::UnityEngine::RenderTextureDescriptor value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderTargetBufferSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderTargetBufferSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderTargetBufferSystem(RenderTargetBufferSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderTargetBufferSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderTargetBufferSystem(RenderTargetBufferSystem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13079 };

  /// @brief Field m_A, offset: 0x10, size: 0x20, def value: None
  ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer ___m_A;

  /// @brief Field m_B, offset: 0x30, size: 0x20, def value: None
  ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer ___m_B;

  /// @brief Field m_FilterMode, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::FilterMode ___m_FilterMode;

  /// @brief Field m_AllowMSAA, offset: 0x54, size: 0x1, def value: None
  bool ___m_AllowMSAA;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem, ___m_A) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem, ___m_B) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem, ___m_FilterMode) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem, ___m_AllowMSAA) == 0x54, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem, 0x58>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*, "UnityEngine.Rendering.Universal.Internal", "RenderTargetBufferSystem");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer, "UnityEngine.Rendering.Universal.Internal", "RenderTargetBufferSystem/SwapBuffer");
