#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ExternalCamerasManager)
namespace GlobalNamespace {
class OculusMRCManager;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class ExternalCamerasManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ExternalCamerasManager);
// Type: ::ExternalCamerasManager
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15281))
// CS Name: ::ExternalCamerasManager*
class CORDL_TYPE ExternalCamerasManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _oculusMRCManager, offset 0x18, size 0x8
  __declspec(property(get = __get__oculusMRCManager, put = __set__oculusMRCManager))::GlobalNamespace::OculusMRCManager* _oculusMRCManager;

  /// @brief Field _mrcBackgroundCameraPrefab, offset 0x20, size 0x8
  __declspec(property(get = __get__mrcBackgroundCameraPrefab, put = __set__mrcBackgroundCameraPrefab))::UnityEngine::Camera* _mrcBackgroundCameraPrefab;

  /// @brief Field _mrcForegroundCameraPrefab, offset 0x28, size 0x8
  __declspec(property(get = __get__mrcForegroundCameraPrefab, put = __set__mrcForegroundCameraPrefab))::UnityEngine::Camera* _mrcForegroundCameraPrefab;

  constexpr ::GlobalNamespace::OculusMRCManager*& __get__oculusMRCManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusMRCManager*> const& __get__oculusMRCManager() const;

  constexpr void __set__oculusMRCManager(::GlobalNamespace::OculusMRCManager* value);

  constexpr ::UnityEngine::Camera*& __get__mrcBackgroundCameraPrefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& __get__mrcBackgroundCameraPrefab() const;

  constexpr void __set__mrcBackgroundCameraPrefab(::UnityEngine::Camera* value);

  constexpr ::UnityEngine::Camera*& __get__mrcForegroundCameraPrefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& __get__mrcForegroundCameraPrefab() const;

  constexpr void __set__mrcForegroundCameraPrefab(::UnityEngine::Camera* value);

  /// @brief Method OnEnable addr 0x2807498 size 0xcc virtual false final false
  inline void OnEnable();

  /// @brief Method InstantiateMixedRealityBackgroundCameraGameObject addr 0x2807564 size 0x80 virtual false final false
  inline ::UnityEngine::GameObject* InstantiateMixedRealityBackgroundCameraGameObject(::UnityEngine::GameObject* mainCameraGameObject);

  /// @brief Method InstantiateMixedRealityForegroundCameraGameObject addr 0x28075e4 size 0x80 virtual false final false
  inline ::UnityEngine::GameObject* InstantiateMixedRealityForegroundCameraGameObject(::UnityEngine::GameObject* mainCameraGameObject);

  static inline ::GlobalNamespace::ExternalCamerasManager* New_ctor();

  /// @brief Method .ctor addr 0x2807664 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ExternalCamerasManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExternalCamerasManager(ExternalCamerasManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExternalCamerasManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExternalCamerasManager(ExternalCamerasManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExternalCamerasManager();

public:
  /// @brief Field _oculusMRCManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OculusMRCManager* ____oculusMRCManager;

  /// @brief Field _mrcBackgroundCameraPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Camera* ____mrcBackgroundCameraPrefab;

  /// @brief Field _mrcForegroundCameraPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Camera* ____mrcForegroundCameraPrefab;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ExternalCamerasManager, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ExternalCamerasManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ExternalCamerasManager*, "", "ExternalCamerasManager");
