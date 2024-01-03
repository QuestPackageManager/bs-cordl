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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10252))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5913))
// CS Name: ::MoveAndRotateWithMainCamera*
class CORDL_TYPE MoveAndRotateWithMainCamera : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _mainCamera, offset 0x18, size 0x8
  __declspec(property(get = __get__mainCamera, put = __set__mainCamera))::GlobalNamespace::MainCamera* _mainCamera;

  /// @brief Field _rotationOffset, offset 0x20, size 0x10
  __declspec(property(get = __get__rotationOffset, put = __set__rotationOffset))::UnityEngine::Quaternion _rotationOffset;

  /// @brief Field _positionOffset, offset 0x30, size 0xc
  __declspec(property(get = __get__positionOffset, put = __set__positionOffset))::UnityEngine::Vector3 _positionOffset;

  /// @brief Field _transform, offset 0x40, size 0x8
  __declspec(property(get = __get__transform, put = __set__transform))::UnityEngine::Transform* _transform;

  constexpr ::GlobalNamespace::MainCamera*& __get__mainCamera();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainCamera*> const& __get__mainCamera() const;

  constexpr void __set__mainCamera(::GlobalNamespace::MainCamera* value);

  constexpr ::UnityEngine::Quaternion& __get__rotationOffset();

  constexpr ::UnityEngine::Quaternion const& __get__rotationOffset() const;

  constexpr void __set__rotationOffset(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Vector3& __get__positionOffset();

  constexpr ::UnityEngine::Vector3 const& __get__positionOffset() const;

  constexpr void __set__positionOffset(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Transform*& __get__transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__transform() const;

  constexpr void __set__transform(::UnityEngine::Transform* value);

  /// @brief Method Awake, addr 0x22fed4c, size 0x4c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method LateUpdate, addr 0x22fed98, size 0xfc, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::MoveAndRotateWithMainCamera* New_ctor();

  /// @brief Method .ctor, addr 0x22fee94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MoveAndRotateWithMainCamera", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MoveAndRotateWithMainCamera(MoveAndRotateWithMainCamera&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MoveAndRotateWithMainCamera", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MoveAndRotateWithMainCamera(MoveAndRotateWithMainCamera const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MoveAndRotateWithMainCamera();

public:
  /// @brief Field _mainCamera, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MainCamera* ____mainCamera;

  /// @brief Field _rotationOffset, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____rotationOffset;

  /// @brief Field _positionOffset, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____positionOffset;

  /// @brief Field _transform, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Transform* ____transform;

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
