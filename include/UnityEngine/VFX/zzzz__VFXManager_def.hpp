#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXCameraXRSettings_def.hpp"
#include <cmath>
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
class ScriptableObject;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::VFX {
class VFXManager;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::VFXManager*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VFXManager*, "UnityEngine.VFX", "VFXManager");
// [StaticAccessor("GetVFXManager()", (UnityEngine.Bindings.StaticAccessorType)0)]
// [RequiredByNativeCode]
// [NativeHeader("Modules/VFX/Public/VFXManager.h")]
// [NativeHeader("Modules/VFX/Public/ScriptBindings/VFXManagerBindings.h")]
// Dependencies System.Object, UnityEngine.VFX.VFXCameraXRSettings
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VFXManager
class CORDL_TYPE VFXManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field kDefaultCameraXRSettings, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_kDefaultCameraXRSettings, put = setStaticF_kDefaultCameraXRSettings)) ::UnityEngine::VFX::VFXCameraXRSettings kDefaultCameraXRSettings;

  /// @brief Method Internal_ProcessCameraCommand, addr 0x72c88b0, size 0x11c, virtual false, abstract: false, final false
  static inline void Internal_ProcessCameraCommand(/* [NotNull] */ ::UnityEngine::Camera* cam, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::VFX::VFXCameraXRSettings camXRSettings,
                                                   ::System::IntPtr cullResults, ::System::IntPtr customPassCullResults);

  /// @brief Method Internal_ProcessCameraCommand_Injected, addr 0x72c89cc, size 0x6c, virtual false, abstract: false, final false
  static inline void Internal_ProcessCameraCommand_Injected(::System::IntPtr cam, ::System::IntPtr cmd, ::by_ref<::UnityEngine::VFX::VFXCameraXRSettings const> camXRSettings,
                                                            ::System::IntPtr cullResults, ::System::IntPtr customPassCullResults);

  /// @brief Method IsCameraBufferNeeded, addr 0x72c8a38, size 0xcc, virtual false, abstract: false, final false
  static inline ::UnityEngine::VFX::VFXCameraBufferTypes IsCameraBufferNeeded(/* [NotNull] */ ::UnityEngine::Camera* cam);

  /// @brief Method IsCameraBufferNeeded_Injected, addr 0x72c8b04, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::VFX::VFXCameraBufferTypes IsCameraBufferNeeded_Injected(::System::IntPtr cam);

  /// @brief Method PrepareCamera, addr 0x72c8694, size 0x68, virtual false, abstract: false, final false
  static inline void PrepareCamera(::UnityEngine::Camera* cam);

  /// @brief Method PrepareCamera, addr 0x72c86fc, size 0xe4, virtual false, abstract: false, final false
  static inline void PrepareCamera(/* [NotNull] */ ::UnityEngine::Camera* cam, ::UnityEngine::VFX::VFXCameraXRSettings camXRSettings);

  /// @brief Method PrepareCamera_Injected, addr 0x72c87e0, size 0x44, virtual false, abstract: false, final false
  static inline void PrepareCamera_Injected(::System::IntPtr cam, ::by_ref<::UnityEngine::VFX::VFXCameraXRSettings const> camXRSettings);

  /// @brief Method ProcessCameraCommand, addr 0x72c8824, size 0x8c, virtual false, abstract: false, final false
  static inline void ProcessCameraCommand(::UnityEngine::Camera* cam, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::VFX::VFXCameraXRSettings camXRSettings,
                                          ::UnityEngine::Rendering::CullingResults results);

  /// @brief Method SetCameraBuffer, addr 0x72c8b40, size 0x144, virtual false, abstract: false, final false
  static inline void SetCameraBuffer(/* [NotNull] */ ::UnityEngine::Camera* cam, ::UnityEngine::VFX::VFXCameraBufferTypes type, ::UnityEngine::Texture* buffer, int32_t x, int32_t y, int32_t width,
                                     int32_t height);

  /// @brief Method SetCameraBuffer_Injected, addr 0x72c8c84, size 0x84, virtual false, abstract: false, final false
  static inline void SetCameraBuffer_Injected(::System::IntPtr cam, ::UnityEngine::VFX::VFXCameraBufferTypes type, ::System::IntPtr buffer, int32_t x, int32_t y, int32_t width, int32_t height);

  static inline ::UnityEngine::VFX::VFXCameraXRSettings getStaticF_kDefaultCameraXRSettings();

  /// @brief Method get_fixedTimeStep, addr 0x72c861c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_fixedTimeStep();

  /// @brief Method get_maxDeltaTime, addr 0x72c8644, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_maxDeltaTime();

  /// @brief Method get_maxScrubTime, addr 0x72c866c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_maxScrubTime();

  /// @brief Method get_runtimeResources, addr 0x72c84b8, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ScriptableObject> get_runtimeResources();

  /// @brief Method get_runtimeResources_Injected, addr 0x72c85f4, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_runtimeResources_Injected();

  static inline void setStaticF_kDefaultCameraXRSettings(::UnityEngine::VFX::VFXCameraXRSettings value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXManager", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXManager(VFXManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXManager", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXManager(VFXManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22913 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::VFX::VFXManager) == 0x10, "Size mismatch!");

} // namespace UnityEngine::VFX
