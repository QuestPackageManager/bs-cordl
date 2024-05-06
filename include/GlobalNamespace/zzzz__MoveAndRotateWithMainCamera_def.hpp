#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(MoveAndRotateWithMainCamera)
namespace GlobalNamespace {
class MainCamera;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MoveAndRotateWithMainCamera;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MoveAndRotateWithMainCamera);
// Type: ::MoveAndRotateWithMainCamera
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MoveAndRotateWithMainCamera*
class CORDL_TYPE MoveAndRotateWithMainCamera : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _mainCamera, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__mainCamera, put = __cordl_internal_set__mainCamera))::UnityW<::GlobalNamespace::MainCamera> _mainCamera;

  /// @brief Field _positionOffset, offset 0x30, size 0xc
  __declspec(property(get = __cordl_internal_get__positionOffset, put = __cordl_internal_set__positionOffset))::UnityEngine::Vector3 _positionOffset;

  /// @brief Field _rotationOffset, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__rotationOffset, put = __cordl_internal_set__rotationOffset))::UnityEngine::Quaternion _rotationOffset;

  /// @brief Field _transform, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform))::UnityW<::UnityEngine::Transform> _transform;

  /// @brief Method Awake, addr 0x2683f18, size 0x4c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method LateUpdate, addr 0x2683f64, size 0x10c, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::MoveAndRotateWithMainCamera* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::MainCamera> const& __cordl_internal_get__mainCamera() const;

  constexpr ::UnityW<::GlobalNamespace::MainCamera>& __cordl_internal_get__mainCamera();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__positionOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__positionOffset();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__rotationOffset() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__rotationOffset();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr void __cordl_internal_set__mainCamera(::UnityW<::GlobalNamespace::MainCamera> value);

  constexpr void __cordl_internal_set__positionOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__rotationOffset(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x2684070, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MoveAndRotateWithMainCamera();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MoveAndRotateWithMainCamera", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MoveAndRotateWithMainCamera(MoveAndRotateWithMainCamera&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MoveAndRotateWithMainCamera", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MoveAndRotateWithMainCamera(MoveAndRotateWithMainCamera const&) = delete;

  /// @brief Field _mainCamera, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainCamera> ____mainCamera;

  /// @brief Field _rotationOffset, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____rotationOffset;

  /// @brief Field _positionOffset, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____positionOffset;

  /// @brief Field _transform, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MoveAndRotateWithMainCamera, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MoveAndRotateWithMainCamera, ____mainCamera) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoveAndRotateWithMainCamera, ____rotationOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoveAndRotateWithMainCamera, ____positionOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoveAndRotateWithMainCamera, ____transform) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MoveAndRotateWithMainCamera);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MoveAndRotateWithMainCamera*, "", "MoveAndRotateWithMainCamera");
