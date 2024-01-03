#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Saber)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class SaberTypeObject;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class SaberMovementData;
}
namespace GlobalNamespace {
struct SaberType;
}
// Forward declare root types
namespace GlobalNamespace {
class Saber;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Saber);
// Type: ::Saber
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 116, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10252)), TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5292))
// CS Name: ::Saber*
class CORDL_TYPE Saber : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _saberBladeTopTransform, offset 0x18, size 0x8
  __declspec(property(get = __get__saberBladeTopTransform, put = __set__saberBladeTopTransform))::UnityEngine::Transform* _saberBladeTopTransform;

  /// @brief Field _saberBladeBottomTransform, offset 0x20, size 0x8
  __declspec(property(get = __get__saberBladeBottomTransform, put = __set__saberBladeBottomTransform))::UnityEngine::Transform* _saberBladeBottomTransform;

  /// @brief Field _handleTransform, offset 0x28, size 0x8
  __declspec(property(get = __get__handleTransform, put = __set__handleTransform))::UnityEngine::Transform* _handleTransform;

  /// @brief Field _saberType, offset 0x30, size 0x8
  __declspec(property(get = __get__saberType, put = __set__saberType))::GlobalNamespace::SaberTypeObject* _saberType;

  /// @brief Field _movementData, offset 0x38, size 0x8
  __declspec(property(get = __get__movementData, put = __set__movementData))::GlobalNamespace::SaberMovementData* _movementData;

  /// @brief Field _saberBladeTopPos, offset 0x40, size 0xc
  __declspec(property(get = __get__saberBladeTopPos, put = __set__saberBladeTopPos))::UnityEngine::Vector3 _saberBladeTopPos;

  /// @brief Field _saberBladeBottomPos, offset 0x4c, size 0xc
  __declspec(property(get = __get__saberBladeBottomPos, put = __set__saberBladeBottomPos))::UnityEngine::Vector3 _saberBladeBottomPos;

  /// @brief Field _handlePos, offset 0x58, size 0xc
  __declspec(property(get = __get__handlePos, put = __set__handlePos))::UnityEngine::Vector3 _handlePos;

  /// @brief Field _handleRot, offset 0x64, size 0x10
  __declspec(property(get = __get__handleRot, put = __set__handleRot))::UnityEngine::Quaternion _handleRot;

  __declspec(property(get = get_saberType))::GlobalNamespace::SaberType saberType;

  __declspec(property(get = get_saberBladeTopPos))::UnityEngine::Vector3 saberBladeTopPos;

  __declspec(property(get = get_saberBladeBottomPos))::UnityEngine::Vector3 saberBladeBottomPos;

  __declspec(property(get = get_handlePos))::UnityEngine::Vector3 handlePos;

  __declspec(property(get = get_handleRot))::UnityEngine::Quaternion handleRot;

  __declspec(property(get = get_bladeSpeed)) float_t bladeSpeed;

  __declspec(property(get = get_movementData))::GlobalNamespace::SaberMovementData* movementData;

  constexpr ::UnityEngine::Transform*& __get__saberBladeTopTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__saberBladeTopTransform() const;

  constexpr void __set__saberBladeTopTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__saberBladeBottomTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__saberBladeBottomTransform() const;

  constexpr void __set__saberBladeBottomTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__handleTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__handleTransform() const;

  constexpr void __set__handleTransform(::UnityEngine::Transform* value);

  constexpr ::GlobalNamespace::SaberTypeObject*& __get__saberType();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberTypeObject*> const& __get__saberType() const;

  constexpr void __set__saberType(::GlobalNamespace::SaberTypeObject* value);

  constexpr ::GlobalNamespace::SaberMovementData*& __get__movementData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberMovementData*> const& __get__movementData() const;

  constexpr void __set__movementData(::GlobalNamespace::SaberMovementData* value);

  constexpr ::UnityEngine::Vector3& __get__saberBladeTopPos();

  constexpr ::UnityEngine::Vector3 const& __get__saberBladeTopPos() const;

  constexpr void __set__saberBladeTopPos(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__saberBladeBottomPos();

  constexpr ::UnityEngine::Vector3 const& __get__saberBladeBottomPos() const;

  constexpr void __set__saberBladeBottomPos(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__handlePos();

  constexpr ::UnityEngine::Vector3 const& __get__handlePos() const;

  constexpr void __set__handlePos(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get__handleRot();

  constexpr ::UnityEngine::Quaternion const& __get__handleRot() const;

  constexpr void __set__handleRot(::UnityEngine::Quaternion value);

  /// @brief Method get_saberType, addr 0x22632f8, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SaberType get_saberType();

  /// @brief Method get_saberBladeTopPos, addr 0x2263314, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_saberBladeTopPos();

  /// @brief Method get_saberBladeBottomPos, addr 0x2263320, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_saberBladeBottomPos();

  /// @brief Method get_handlePos, addr 0x226332c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_handlePos();

  /// @brief Method get_handleRot, addr 0x2263338, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_handleRot();

  /// @brief Method get_bladeSpeed, addr 0x2263344, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_bladeSpeed();

  /// @brief Method get_movementData, addr 0x2263360, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SaberMovementData* get_movementData();

  /// @brief Method ManualUpdate, addr 0x2263368, size 0x134, virtual false, abstract: false, final false
  inline void ManualUpdate();

  /// @brief Method OverridePositionAndRotation, addr 0x226349c, size 0x78, virtual false, abstract: false, final false
  inline void OverridePositionAndRotation(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot);

  static inline ::GlobalNamespace::Saber* New_ctor();

  /// @brief Method .ctor, addr 0x2263514, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Saber", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Saber(Saber&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Saber", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Saber(Saber const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Saber();

public:
  /// @brief Field _saberBladeTopTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* ____saberBladeTopTransform;

  /// @brief Field _saberBladeBottomTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ____saberBladeBottomTransform;

  /// @brief Field _handleTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Transform* ____handleTransform;

  /// @brief Field _saberType, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::SaberTypeObject* ____saberType;

  /// @brief Field _movementData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SaberMovementData* ____movementData;

  /// @brief Field _saberBladeTopPos, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____saberBladeTopPos;

  /// @brief Field _saberBladeBottomPos, offset: 0x4c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____saberBladeBottomPos;

  /// @brief Field _handlePos, offset: 0x58, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____handlePos;

  /// @brief Field _handleRot, offset: 0x64, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____handleRot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Saber, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::Saber, ____saberBladeTopTransform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Saber, ____saberBladeBottomTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Saber, ____handleTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Saber, ____saberType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Saber, ____movementData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Saber, ____saberBladeTopPos) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Saber, ____saberBladeBottomPos) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Saber, ____handlePos) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Saber, ____handleRot) == 0x64, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Saber);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Saber*, "", "Saber");
