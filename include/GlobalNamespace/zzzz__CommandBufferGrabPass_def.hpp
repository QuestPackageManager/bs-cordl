#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CommandBufferGOCore_def.hpp"
#include "UnityEngine/Rendering/zzzz__CameraEvent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CommandBufferGrabPass)
namespace GlobalNamespace {
class CommandBufferOwners;
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
class CommandBufferGrabPass;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CommandBufferGrabPass);
// Type: ::CommandBufferGrabPass
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CommandBufferGrabPass*
class CORDL_TYPE CommandBufferGrabPass : public ::GlobalNamespace::CommandBufferGOCore {
public:
  // Declarations
  /// @brief Field _cameraEvent, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__cameraEvent, put = __cordl_internal_set__cameraEvent))::UnityEngine::Rendering::CameraEvent _cameraEvent;

  /// @brief Field _cameras, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__cameras,
                             put = setStaticF__cameras))::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* _cameras;

  /// @brief Field _textureName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__textureName, put = __cordl_internal_set__textureName))::StringW _textureName;

  /// @brief Method CamerasDict, addr 0x2ad4284, size 0x58, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* CamerasDict();

  /// @brief Method CommandBufferCameraEvent, addr 0x2ad42dc, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::CameraEvent CommandBufferCameraEvent();

  /// @brief Method CreateCommandBuffer, addr 0x2ad4098, size 0x1ec, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::CommandBuffer* CreateCommandBuffer(::UnityEngine::Camera* camera);

  static inline ::GlobalNamespace::CommandBufferGrabPass* New_ctor();

  constexpr ::UnityEngine::Rendering::CameraEvent const& __cordl_internal_get__cameraEvent() const;

  constexpr ::UnityEngine::Rendering::CameraEvent& __cordl_internal_get__cameraEvent();

  constexpr ::StringW const& __cordl_internal_get__textureName() const;

  constexpr ::StringW& __cordl_internal_get__textureName();

  constexpr void __cordl_internal_set__cameraEvent(::UnityEngine::Rendering::CameraEvent value);

  constexpr void __cordl_internal_set__textureName(::StringW value);

  /// @brief Method .ctor, addr 0x2ad42e4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* getStaticF__cameras();

  static inline void setStaticF__cameras(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::GlobalNamespace::CommandBufferOwners*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandBufferGrabPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandBufferGrabPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandBufferGrabPass(CommandBufferGrabPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandBufferGrabPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandBufferGrabPass(CommandBufferGrabPass const&) = delete;

  /// @brief Field _textureName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____textureName;

  /// @brief Field _cameraEvent, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::Rendering::CameraEvent ____cameraEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CommandBufferGrabPass, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBufferGrabPass, ____textureName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBufferGrabPass, ____cameraEvent) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CommandBufferGrabPass);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CommandBufferGrabPass*, "", "CommandBufferGrabPass");
