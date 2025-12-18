#pragma once
// IWYU pragma private; include "GlobalNamespace/CommandBufferBlurryScreenGrab.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CommandBufferGOCore_def.hpp"
#include "GlobalNamespace/zzzz__KawaseBlurRendererSO_def.hpp"
#include "UnityEngine/Rendering/zzzz__CameraEvent_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CommandBufferBlurryScreenGrab)
namespace GlobalNamespace {
class CommandBufferOwners;
}
namespace GlobalNamespace {
class KawaseBlurRendererSO;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::Rendering {
struct CameraEvent;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class CommandBufferBlurryScreenGrab;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CommandBufferBlurryScreenGrab);
// Dependencies CommandBufferGOCore, KawaseBlurRendererSO::KernelSize, UnityEngine.Rendering.CameraEvent
namespace GlobalNamespace {
// Is value type: false
// CS Name: CommandBufferBlurryScreenGrab
class CORDL_TYPE CommandBufferBlurryScreenGrab : public ::GlobalNamespace::CommandBufferGOCore {
public:
  // Declarations
  /// @brief Field _cameraEvent, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__cameraEvent, put = __cordl_internal_set__cameraEvent)) ::UnityEngine::Rendering::CameraEvent _cameraEvent;

  /// @brief Field _cameras, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__cameras,
                      put = setStaticF__cameras)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* _cameras;

  /// @brief Field _downsample, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__downsample, put = __cordl_internal_set__downsample)) int32_t _downsample;

  /// @brief Field _kawaseBlurRenderer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__kawaseBlurRenderer, put = __cordl_internal_set__kawaseBlurRenderer)) ::UnityW<::GlobalNamespace::KawaseBlurRendererSO> _kawaseBlurRenderer;

  /// @brief Field _kernelSize, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__kernelSize, put = __cordl_internal_set__kernelSize)) ::GlobalNamespace::KawaseBlurRendererSO_KernelSize _kernelSize;

  /// @brief Method CamerasDict, addr 0x5d92f6c, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* CamerasDict();

  /// @brief Method CommandBufferCameraEvent, addr 0x5d92fc8, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::CameraEvent CommandBufferCameraEvent();

  /// @brief Method CreateCommandBuffer, addr 0x5d92e68, size 0x104, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::CommandBuffer* CreateCommandBuffer(::UnityEngine::Camera* camera);

  static inline ::GlobalNamespace::CommandBufferBlurryScreenGrab* New_ctor();

  constexpr ::UnityEngine::Rendering::CameraEvent const& __cordl_internal_get__cameraEvent() const;

  constexpr ::UnityEngine::Rendering::CameraEvent& __cordl_internal_get__cameraEvent();

  constexpr int32_t const& __cordl_internal_get__downsample() const;

  constexpr int32_t& __cordl_internal_get__downsample();

  constexpr ::UnityW<::GlobalNamespace::KawaseBlurRendererSO> const& __cordl_internal_get__kawaseBlurRenderer() const;

  constexpr ::UnityW<::GlobalNamespace::KawaseBlurRendererSO>& __cordl_internal_get__kawaseBlurRenderer();

  constexpr ::GlobalNamespace::KawaseBlurRendererSO_KernelSize const& __cordl_internal_get__kernelSize() const;

  constexpr ::GlobalNamespace::KawaseBlurRendererSO_KernelSize& __cordl_internal_get__kernelSize();

  constexpr void __cordl_internal_set__cameraEvent(::UnityEngine::Rendering::CameraEvent value);

  constexpr void __cordl_internal_set__downsample(int32_t value);

  constexpr void __cordl_internal_set__kawaseBlurRenderer(::UnityW<::GlobalNamespace::KawaseBlurRendererSO> value);

  constexpr void __cordl_internal_set__kernelSize(::GlobalNamespace::KawaseBlurRendererSO_KernelSize value);

  /// @brief Method .ctor, addr 0x5d92fd0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* getStaticF__cameras();

  static inline void setStaticF__cameras(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandBufferBlurryScreenGrab();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandBufferBlurryScreenGrab", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandBufferBlurryScreenGrab(CommandBufferBlurryScreenGrab&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandBufferBlurryScreenGrab", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandBufferBlurryScreenGrab(CommandBufferBlurryScreenGrab const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20772 };

  /// @brief Field _kawaseBlurRenderer, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::KawaseBlurRendererSO> ____kawaseBlurRenderer;

  /// @brief Field _kernelSize, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::KawaseBlurRendererSO_KernelSize ____kernelSize;

  /// @brief Field _cameraEvent, offset: 0x3c, size: 0x4, def value: None
  ::UnityEngine::Rendering::CameraEvent ____cameraEvent;

  /// @brief Field _downsample, offset: 0x40, size: 0x4, def value: None
  int32_t ____downsample;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CommandBufferBlurryScreenGrab, ____kawaseBlurRenderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBufferBlurryScreenGrab, ____kernelSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBufferBlurryScreenGrab, ____cameraEvent) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBufferBlurryScreenGrab, ____downsample) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CommandBufferBlurryScreenGrab, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CommandBufferBlurryScreenGrab);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CommandBufferBlurryScreenGrab*, "", "CommandBufferBlurryScreenGrab");
