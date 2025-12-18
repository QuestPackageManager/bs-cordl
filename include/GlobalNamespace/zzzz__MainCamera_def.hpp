#pragma once
// IWYU pragma private; include "GlobalNamespace/MainCamera.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MainCamera)
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
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
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainCamera
class CORDL_TYPE MainCamera : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _camera, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__camera, put = __cordl_internal_set__camera)) ::UnityW<::UnityEngine::Camera> _camera;

  /// @brief Field _transform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform> _transform;

  __declspec(property(get = get_camera)) ::UnityW<::UnityEngine::Camera> camera;

  __declspec(property(put = set_enableCamera)) bool enableCamera;

  __declspec(property(get = get_position)) ::UnityEngine::Vector3 position;

  __declspec(property(get = get_rotation)) ::UnityEngine::Quaternion rotation;

  /// @brief Method Awake, addr 0x5753bc0, size 0x64, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::MainCamera* New_ctor();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x5753c24, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_camera, addr 0x5753b60, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_camera();

  /// @brief Method get_position, addr 0x5753b90, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_rotation, addr 0x5753ba8, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method set_enableCamera, addr 0x5753b68, size 0x28, virtual false, abstract: false, final false
  inline void set_enableCamera(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainCamera();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainCamera", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainCamera(MainCamera&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainCamera", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainCamera(MainCamera const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6642 };

  /// @brief Field _camera, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____camera;

  /// @brief Field _transform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainCamera, ____camera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainCamera, ____transform) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainCamera, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainCamera);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainCamera*, "", "MainCamera");
