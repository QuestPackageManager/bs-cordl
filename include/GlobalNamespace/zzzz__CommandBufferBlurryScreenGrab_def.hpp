#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CommandBufferGOCore_def.hpp"
#include "GlobalNamespace/zzzz__KawaseBlurRendererSO_def.hpp"
#include "UnityEngine/Rendering/zzzz__CameraEvent_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CommandBufferBlurryScreenGrab)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class KawaseBlurRendererSO;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct CameraEvent;
}
namespace GlobalNamespace {
class CommandBufferOwners;
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
// Type: ::CommandBufferBlurryScreenGrab
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10337)), TypeDefinitionIndex(TypeDefinitionIndex(15278)), TypeDefinitionIndex(TypeDefinitionIndex(14503))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15276))
// CS Name: ::CommandBufferBlurryScreenGrab*
class CORDL_TYPE CommandBufferBlurryScreenGrab : public ::GlobalNamespace::CommandBufferGOCore {
public:
  // Declarations
  /// @brief Field _kawaseBlurRenderer, offset 0x28, size 0x8
  __declspec(property(get = __get__kawaseBlurRenderer, put = __set__kawaseBlurRenderer))::GlobalNamespace::KawaseBlurRendererSO* _kawaseBlurRenderer;

  /// @brief Field _kernelSize, offset 0x30, size 0x4
  __declspec(property(get = __get__kernelSize, put = __set__kernelSize))::GlobalNamespace::__KawaseBlurRendererSO__KernelSize _kernelSize;

  /// @brief Field _cameraEvent, offset 0x34, size 0x4
  __declspec(property(get = __get__cameraEvent, put = __set__cameraEvent))::UnityEngine::Rendering::CameraEvent _cameraEvent;

  /// @brief Field _downsample, offset 0x38, size 0x4
  __declspec(property(get = __get__downsample, put = __set__downsample)) int32_t _downsample;

  /// @brief Field _cameras, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__cameras,
                             put = setStaticF__cameras))::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::GlobalNamespace::CommandBufferOwners*>* _cameras;

  constexpr ::GlobalNamespace::KawaseBlurRendererSO*& __get__kawaseBlurRenderer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::KawaseBlurRendererSO*> const& __get__kawaseBlurRenderer() const;

  constexpr void __set__kawaseBlurRenderer(::GlobalNamespace::KawaseBlurRendererSO* value);

  constexpr ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize& __get__kernelSize();

  constexpr ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize const& __get__kernelSize() const;

  constexpr void __set__kernelSize(::GlobalNamespace::__KawaseBlurRendererSO__KernelSize value);

  constexpr ::UnityEngine::Rendering::CameraEvent& __get__cameraEvent();

  constexpr ::UnityEngine::Rendering::CameraEvent const& __get__cameraEvent() const;

  constexpr void __set__cameraEvent(::UnityEngine::Rendering::CameraEvent value);

  constexpr int32_t& __get__downsample();

  constexpr int32_t const& __get__downsample() const;

  constexpr void __set__downsample(int32_t value);

  static inline void setStaticF__cameras(::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::GlobalNamespace::CommandBufferOwners*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::GlobalNamespace::CommandBufferOwners*>* getStaticF__cameras();

  /// @brief Method CreateCommandBuffer, addr 0x28063e8, size 0xfc, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::CommandBuffer* CreateCommandBuffer(::UnityEngine::Camera* camera);

  /// @brief Method CamerasDict, addr 0x28064e4, size 0x58, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::GlobalNamespace::CommandBufferOwners*>* CamerasDict();

  /// @brief Method CommandBufferCameraEvent, addr 0x280653c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::CameraEvent CommandBufferCameraEvent();

  static inline ::GlobalNamespace::CommandBufferBlurryScreenGrab* New_ctor();

  /// @brief Method .ctor, addr 0x2806544, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CommandBufferBlurryScreenGrab", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandBufferBlurryScreenGrab(CommandBufferBlurryScreenGrab&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandBufferBlurryScreenGrab", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandBufferBlurryScreenGrab(CommandBufferBlurryScreenGrab const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandBufferBlurryScreenGrab();

public:
  /// @brief Field _kawaseBlurRenderer, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::KawaseBlurRendererSO* ____kawaseBlurRenderer;

  /// @brief Field _kernelSize, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize ____kernelSize;

  /// @brief Field _cameraEvent, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::Rendering::CameraEvent ____cameraEvent;

  /// @brief Field _downsample, offset: 0x38, size: 0x4, def value: None
  int32_t ____downsample;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CommandBufferBlurryScreenGrab, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBufferBlurryScreenGrab, ____kawaseBlurRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBufferBlurryScreenGrab, ____kernelSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBufferBlurryScreenGrab, ____cameraEvent) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBufferBlurryScreenGrab, ____downsample) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CommandBufferBlurryScreenGrab);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CommandBufferBlurryScreenGrab*, "", "CommandBufferBlurryScreenGrab");
