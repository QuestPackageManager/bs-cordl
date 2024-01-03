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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15278)), TypeDefinitionIndex(TypeDefinitionIndex(10337))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15277))
// CS Name: ::CommandBufferGrabPass*
class CORDL_TYPE CommandBufferGrabPass : public ::GlobalNamespace::CommandBufferGOCore {
public:
  // Declarations
  /// @brief Field _textureName, offset 0x28, size 0x8
  __declspec(property(get = __get__textureName, put = __set__textureName))::StringW _textureName;

  /// @brief Field _cameraEvent, offset 0x30, size 0x4
  __declspec(property(get = __get__cameraEvent, put = __set__cameraEvent))::UnityEngine::Rendering::CameraEvent _cameraEvent;

  /// @brief Field _cameras, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__cameras,
                             put = setStaticF__cameras))::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::GlobalNamespace::CommandBufferOwners*>* _cameras;

  constexpr ::StringW& __get__textureName();

  constexpr ::StringW const& __get__textureName() const;

  constexpr void __set__textureName(::StringW value);

  constexpr ::UnityEngine::Rendering::CameraEvent& __get__cameraEvent();

  constexpr ::UnityEngine::Rendering::CameraEvent const& __get__cameraEvent() const;

  constexpr void __set__cameraEvent(::UnityEngine::Rendering::CameraEvent value);

  static inline void setStaticF__cameras(::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::GlobalNamespace::CommandBufferOwners*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::GlobalNamespace::CommandBufferOwners*>* getStaticF__cameras();

  /// @brief Method CreateCommandBuffer, addr 0x28065ec, size 0x1ec, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::CommandBuffer* CreateCommandBuffer(::UnityEngine::Camera* camera);

  /// @brief Method CamerasDict, addr 0x28067d8, size 0x58, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::GlobalNamespace::CommandBufferOwners*>* CamerasDict();

  /// @brief Method CommandBufferCameraEvent, addr 0x2806830, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::CameraEvent CommandBufferCameraEvent();

  static inline ::GlobalNamespace::CommandBufferGrabPass* New_ctor();

  /// @brief Method .ctor, addr 0x2806838, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CommandBufferGrabPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandBufferGrabPass(CommandBufferGrabPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandBufferGrabPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandBufferGrabPass(CommandBufferGrabPass const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandBufferGrabPass();

public:
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
