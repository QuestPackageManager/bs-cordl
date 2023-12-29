#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FirstPersonFlyingController)
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class VRController;
}
namespace GlobalNamespace {
class VRCenterAdjust;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Camera;
}
namespace GlobalNamespace {
class MouseLook;
}
// Forward declare root types
namespace GlobalNamespace {
class FirstPersonFlyingController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FirstPersonFlyingController);
// Type: ::FirstPersonFlyingController
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5926))
// CS Name: ::FirstPersonFlyingController*
class CORDL_TYPE FirstPersonFlyingController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _moveSensitivity, offset 0x18, size 0x4
  __declspec(property(get = __get__moveSensitivity, put = __set__moveSensitivity)) float_t _moveSensitivity;

  /// @brief Field _transform, offset 0x20, size 0x8
  __declspec(property(get = __get__transform, put = __set__transform))::UnityEngine::Transform* _transform;

  /// @brief Field _camera, offset 0x28, size 0x8
  __declspec(property(get = __get__camera, put = __set__camera))::UnityEngine::Camera* _camera;

  /// @brief Field _cameraFov, offset 0x30, size 0x4
  __declspec(property(get = __get__cameraFov, put = __set__cameraFov)) float_t _cameraFov;

  /// @brief Field _centerAdjust, offset 0x38, size 0x8
  __declspec(property(get = __get__centerAdjust, put = __set__centerAdjust))::GlobalNamespace::VRCenterAdjust* _centerAdjust;

  /// @brief Field _controller0, offset 0x40, size 0x8
  __declspec(property(get = __get__controller0, put = __set__controller0))::GlobalNamespace::VRController* _controller0;

  /// @brief Field _controller1, offset 0x48, size 0x8
  __declspec(property(get = __get__controller1, put = __set__controller1))::GlobalNamespace::VRController* _controller1;

  /// @brief Field _controllerModels, offset 0x50, size 0x8
  __declspec(property(get = __get__controllerModels, put = __set__controllerModels))::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> _controllerModels;

  /// @brief Field _mouseLook, offset 0x58, size 0x8
  __declspec(property(get = __get__mouseLook, put = __set__mouseLook))::GlobalNamespace::MouseLook* _mouseLook;

  /// @brief Field _shouldBeEnabled, offset 0x60, size 0x1
  __declspec(property(get = __get__shouldBeEnabled, put = __set__shouldBeEnabled)) bool _shouldBeEnabled;

  /// @brief Field _cameraTransform, offset 0x68, size 0x8
  __declspec(property(get = __get__cameraTransform, put = __set__cameraTransform))::UnityEngine::Transform* _cameraTransform;

  constexpr float_t& __get__moveSensitivity();

  constexpr float_t const& __get__moveSensitivity() const;

  constexpr void __set__moveSensitivity(float_t value);

  constexpr ::UnityEngine::Transform*& __get__transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__transform() const;

  constexpr void __set__transform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Camera*& __get__camera();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& __get__camera() const;

  constexpr void __set__camera(::UnityEngine::Camera* value);

  constexpr float_t& __get__cameraFov();

  constexpr float_t const& __get__cameraFov() const;

  constexpr void __set__cameraFov(float_t value);

  constexpr ::GlobalNamespace::VRCenterAdjust*& __get__centerAdjust();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VRCenterAdjust*> const& __get__centerAdjust() const;

  constexpr void __set__centerAdjust(::GlobalNamespace::VRCenterAdjust* value);

  constexpr ::GlobalNamespace::VRController*& __get__controller0();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VRController*> const& __get__controller0() const;

  constexpr void __set__controller0(::GlobalNamespace::VRController* value);

  constexpr ::GlobalNamespace::VRController*& __get__controller1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VRController*> const& __get__controller1() const;

  constexpr void __set__controller1(::GlobalNamespace::VRController* value);

  constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>& __get__controllerModels();

  constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> const& __get__controllerModels() const;

  constexpr void __set__controllerModels(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> value);

  constexpr ::GlobalNamespace::MouseLook*& __get__mouseLook();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MouseLook*> const& __get__mouseLook() const;

  constexpr void __set__mouseLook(::GlobalNamespace::MouseLook* value);

  constexpr bool& __get__shouldBeEnabled();

  constexpr bool const& __get__shouldBeEnabled() const;

  constexpr void __set__shouldBeEnabled(bool value);

  constexpr ::UnityEngine::Transform*& __get__cameraTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__cameraTransform() const;

  constexpr void __set__cameraTransform(::UnityEngine::Transform* value);

  /// @brief Method Awake addr 0x21a7b94 size 0xc virtual false final false
  inline void Awake();

  /// @brief Method Start addr 0x21a7ba0 size 0x1b4 virtual false final false
  inline void Start();

  /// @brief Method OnEnable addr 0x21a7dc0 size 0x20 virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x21a7e14 size 0x30 virtual false final false
  inline void OnDisable();

  /// @brief Method Update addr 0x21a7e44 size 0x3a8 virtual false final false
  inline void Update();

  /// @brief Method Inject addr 0x21a8548 size 0x12c virtual false final false
  inline void Inject(::UnityEngine::Camera* camera, ::GlobalNamespace::VRCenterAdjust* centerAdjust, ::GlobalNamespace::VRController* controller0, ::GlobalNamespace::VRController* controller1,
                     bool shouldBeEnabled);

  static inline ::GlobalNamespace::FirstPersonFlyingController* New_ctor();

  /// @brief Method .ctor addr 0x21a8674 size 0xa8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FirstPersonFlyingController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FirstPersonFlyingController(FirstPersonFlyingController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FirstPersonFlyingController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FirstPersonFlyingController(FirstPersonFlyingController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FirstPersonFlyingController();

public:
  /// @brief Field _moveSensitivity, offset: 0x18, size: 0x4, def value: None
  float_t ____moveSensitivity;

  /// @brief Field _transform, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ____transform;

  /// @brief Field _camera, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Camera* ____camera;

  /// @brief Field _cameraFov, offset: 0x30, size: 0x4, def value: None
  float_t ____cameraFov;

  /// @brief Field _centerAdjust, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::VRCenterAdjust* ____centerAdjust;

  /// @brief Field _controller0, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::VRController* ____controller0;

  /// @brief Field _controller1, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::VRController* ____controller1;

  /// @brief Field _controllerModels, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> ____controllerModels;

  /// @brief Field _mouseLook, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::MouseLook* ____mouseLook;

  /// @brief Field _shouldBeEnabled, offset: 0x60, size: 0x1, def value: None
  bool ____shouldBeEnabled;

  /// @brief Field _cameraTransform, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Transform* ____cameraTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FirstPersonFlyingController, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FirstPersonFlyingController, ____moveSensitivity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirstPersonFlyingController, ____transform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirstPersonFlyingController, ____camera) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirstPersonFlyingController, ____cameraFov) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirstPersonFlyingController, ____centerAdjust) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirstPersonFlyingController, ____controller0) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirstPersonFlyingController, ____controller1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirstPersonFlyingController, ____controllerModels) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirstPersonFlyingController, ____mouseLook) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirstPersonFlyingController, ____shouldBeEnabled) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FirstPersonFlyingController, ____cameraTransform) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FirstPersonFlyingController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FirstPersonFlyingController*, "", "FirstPersonFlyingController");
