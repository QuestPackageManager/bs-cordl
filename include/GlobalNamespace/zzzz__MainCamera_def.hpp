#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MainCamera)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MainCamera;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainCamera);
// Type: ::MainCamera
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5972))
// CS Name: ::MainCamera*
class CORDL_TYPE MainCamera : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _camera, offset 0x18, size 0x8
  __declspec(property(get = __get__camera, put = __set__camera))::UnityEngine::Camera* _camera;

  /// @brief Field _transform, offset 0x20, size 0x8
  __declspec(property(get = __get__transform, put = __set__transform))::UnityEngine::Transform* _transform;

  __declspec(property(get = get_camera))::UnityEngine::Camera* camera;

  __declspec(property(put = set_enableCamera)) bool enableCamera;

  __declspec(property(get = get_position))::UnityEngine::Vector3 position;

  __declspec(property(get = get_rotation))::UnityEngine::Quaternion rotation;

  constexpr ::UnityEngine::Camera*& __get__camera();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& __get__camera() const;

  constexpr void __set__camera(::UnityEngine::Camera* value);

  constexpr ::UnityEngine::Transform*& __get__transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__transform() const;

  constexpr void __set__transform(::UnityEngine::Transform* value);

  /// @brief Method get_camera addr 0x21b1bf8 size 0x8 virtual false final false
  inline ::UnityEngine::Camera* get_camera();

  /// @brief Method set_enableCamera addr 0x21b1c00 size 0x28 virtual false final false
  inline void set_enableCamera(bool value);

  /// @brief Method get_position addr 0x21b1c28 size 0x1c virtual false final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_rotation addr 0x21b1c44 size 0x1c virtual false final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method Awake addr 0x21b1c60 size 0x60 virtual false final false
  inline void Awake();

  static inline ::GlobalNamespace::MainCamera* New_ctor();

  /// @brief Method .ctor addr 0x21b1cc0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MainCamera", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainCamera(MainCamera&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainCamera", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainCamera(MainCamera const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainCamera();

public:
  /// @brief Field _camera, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Camera* ____camera;

  /// @brief Field _transform, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ____transform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainCamera, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MainCamera, ____camera) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainCamera, ____transform) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainCamera);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainCamera*, "", "MainCamera");
