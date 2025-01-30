#pragma once
// IWYU pragma private; include "GlobalNamespace/MoveAndRotateWithMainCamera.hpp"
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
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: MoveAndRotateWithMainCamera
class CORDL_TYPE MoveAndRotateWithMainCamera : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _mainCamera, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__mainCamera, put = __cordl_internal_set__mainCamera)) ::UnityW<::GlobalNamespace::MainCamera> _mainCamera;

  /// @brief Field _positionOffset, offset 0x38, size 0xc
  __declspec(property(get = __cordl_internal_get__positionOffset, put = __cordl_internal_set__positionOffset)) ::UnityEngine::Vector3 _positionOffset;

  /// @brief Field _rotationOffset, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__rotationOffset, put = __cordl_internal_set__rotationOffset)) ::UnityEngine::Quaternion _rotationOffset;

  /// @brief Field _transform, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform> _transform;

  /// @brief Method Awake, addr 0x3b1ae40, size 0x4c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method LateUpdate, addr 0x3b1ae8c, size 0x108, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x3b1af94, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5080 };

  /// @brief Field _mainCamera, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainCamera> ____mainCamera;

  /// @brief Field _rotationOffset, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____rotationOffset;

  /// @brief Field _positionOffset, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____positionOffset;

  /// @brief Field _transform, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MoveAndRotateWithMainCamera, ____mainCamera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoveAndRotateWithMainCamera, ____rotationOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoveAndRotateWithMainCamera, ____positionOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoveAndRotateWithMainCamera, ____transform) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MoveAndRotateWithMainCamera, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MoveAndRotateWithMainCamera);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MoveAndRotateWithMainCamera*, "", "MoveAndRotateWithMainCamera");
