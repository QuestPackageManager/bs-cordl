#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXCameraXRSettings_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VFXManager)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct CullingResults;
}
namespace UnityEngine::VFX {
struct VFXCameraBufferTypes;
}
namespace UnityEngine::VFX {
struct VFXCameraXRSettings;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::VFX {
class VFXManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::VFX::VFXManager);
// Dependencies System.Object, UnityEngine.VFX.VFXCameraXRSettings
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VFXManager
class CORDL_TYPE VFXManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field kDefaultCameraXRSettings, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_kDefaultCameraXRSettings, put = setStaticF_kDefaultCameraXRSettings)) ::UnityEngine::VFX::VFXCameraXRSettings kDefaultCameraXRSettings;

  /// @brief Method Internal_ProcessCameraCommand, addr 0x6c605c4, size 0x10c, virtual false, abstract: false, final false
  static inline void Internal_ProcessCameraCommand(::UnityEngine::Camera* cam, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::VFX::VFXCameraXRSettings camXRSettings,
                                                   ::System::IntPtr cullResults);

  /// @brief Method Internal_ProcessCameraCommand_Injected, addr 0x6c606d0, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_ProcessCameraCommand_Injected(::System::IntPtr cam, ::System::IntPtr cmd, ::ByRef<::UnityEngine::VFX::VFXCameraXRSettings> camXRSettings, ::System::IntPtr cullResults);

  /// @brief Method IsCameraBufferNeeded, addr 0x6c6072c, size 0xcc, virtual false, abstract: false, final false
  static inline ::UnityEngine::VFX::VFXCameraBufferTypes IsCameraBufferNeeded(::UnityEngine::Camera* cam);

  /// @brief Method IsCameraBufferNeeded_Injected, addr 0x6c607f8, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::VFX::VFXCameraBufferTypes IsCameraBufferNeeded_Injected(::System::IntPtr cam);

  /// @brief Method ProcessCameraCommand, addr 0x6c6053c, size 0x88, virtual false, abstract: false, final false
  static inline void ProcessCameraCommand(::UnityEngine::Camera* cam, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::VFX::VFXCameraXRSettings camXRSettings,
                                          ::UnityEngine::Rendering::CullingResults results);

  /// @brief Method SetCameraBuffer, addr 0x6c60834, size 0x144, virtual false, abstract: false, final false
  static inline void SetCameraBuffer(::UnityEngine::Camera* cam, ::UnityEngine::VFX::VFXCameraBufferTypes type, ::UnityEngine::Texture* buffer, int32_t x, int32_t y, int32_t width, int32_t height);

  /// @brief Method SetCameraBuffer_Injected, addr 0x6c60978, size 0x84, virtual false, abstract: false, final false
  static inline void SetCameraBuffer_Injected(::System::IntPtr cam, ::UnityEngine::VFX::VFXCameraBufferTypes type, ::System::IntPtr buffer, int32_t x, int32_t y, int32_t width, int32_t height);

  static inline ::UnityEngine::VFX::VFXCameraXRSettings getStaticF_kDefaultCameraXRSettings();

  static inline void setStaticF_kDefaultCameraXRSettings(::UnityEngine::VFX::VFXCameraXRSettings value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXManager(VFXManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXManager(VFXManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22612 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::VFX::VFXManager, 0x10>, "Size mismatch!");

} // namespace UnityEngine::VFX
NEED_NO_BOX(::UnityEngine::VFX::VFXManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::VFX::VFXManager*, "UnityEngine.VFX", "VFXManager");
