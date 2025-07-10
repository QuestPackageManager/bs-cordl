#pragma once
// IWYU pragma private; include "GlobalNamespace/Saber.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Saber)
namespace GlobalNamespace {
class SaberMovementData;
}
namespace GlobalNamespace {
class SaberTypeObject;
}
namespace GlobalNamespace {
struct SaberType;
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
class Saber;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Saber);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: Saber
class CORDL_TYPE Saber : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _handlePos, offset 0x60, size 0xc
  __declspec(property(get = __cordl_internal_get__handlePos, put = __cordl_internal_set__handlePos)) ::UnityEngine::Vector3 _handlePos;

  /// @brief Field _handleTransform, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__handleTransform, put = __cordl_internal_set__handleTransform)) ::UnityW<::UnityEngine::Transform> _handleTransform;

  /// @brief Field _movementData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__movementData, put = __cordl_internal_set__movementData)) ::GlobalNamespace::SaberMovementData* _movementData;

  /// @brief Field _saberBladeBottomPos, offset 0x54, size 0xc
  __declspec(property(get = __cordl_internal_get__saberBladeBottomPos, put = __cordl_internal_set__saberBladeBottomPos)) ::UnityEngine::Vector3 _saberBladeBottomPos;

  /// @brief Field _saberBladeBottomTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__saberBladeBottomTransform, put = __cordl_internal_set__saberBladeBottomTransform)) ::UnityW<::UnityEngine::Transform> _saberBladeBottomTransform;

  /// @brief Field _saberBladeTopPos, offset 0x48, size 0xc
  __declspec(property(get = __cordl_internal_get__saberBladeTopPos, put = __cordl_internal_set__saberBladeTopPos)) ::UnityEngine::Vector3 _saberBladeTopPos;

  /// @brief Field _saberBladeTopTransform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__saberBladeTopTransform, put = __cordl_internal_set__saberBladeTopTransform)) ::UnityW<::UnityEngine::Transform> _saberBladeTopTransform;

  /// @brief Field _saberType, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__saberType, put = __cordl_internal_set__saberType)) ::UnityW<::GlobalNamespace::SaberTypeObject> _saberType;

  __declspec(property(get = get_bladeSpeed)) float_t bladeSpeed;

  __declspec(property(get = get_bladeSpeedForLogic)) float_t bladeSpeedForLogic;

  __declspec(property(get = get_handlePos)) ::UnityEngine::Vector3 handlePos;

  __declspec(property(get = get_movementDataForLogic)) ::GlobalNamespace::SaberMovementData* movementDataForLogic;

  __declspec(property(get = get_movementDataForVisualEffects)) ::GlobalNamespace::SaberMovementData* movementDataForVisualEffects;

  __declspec(property(get = get_saberBladeBottomPos)) ::UnityEngine::Vector3 saberBladeBottomPos;

  __declspec(property(get = get_saberBladeBottomPosForLogic)) ::UnityEngine::Vector3 saberBladeBottomPosForLogic;

  __declspec(property(get = get_saberBladeBottomPosForVisualEffects)) ::UnityEngine::Vector3 saberBladeBottomPosForVisualEffects;

  __declspec(property(get = get_saberBladeTopPos)) ::UnityEngine::Vector3 saberBladeTopPos;

  __declspec(property(get = get_saberBladeTopPosForLogic)) ::UnityEngine::Vector3 saberBladeTopPosForLogic;

  __declspec(property(get = get_saberBladeTopPosForVisualEffects)) ::UnityEngine::Vector3 saberBladeTopPosForVisualEffects;

  __declspec(property(get = get_saberType)) ::GlobalNamespace::SaberType saberType;

  /// @brief Method ManualUpdate, addr 0x3bea808, size 0x11c, virtual false, abstract: false, final false
  inline void ManualUpdate();

  static inline ::GlobalNamespace::Saber* New_ctor();

  /// @brief Method OverridePositionAndRotation, addr 0x3bea924, size 0x78, virtual false, abstract: false, final false
  inline void OverridePositionAndRotation(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__handlePos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__handlePos();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__handleTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__handleTransform();

  constexpr ::GlobalNamespace::SaberMovementData* const& __cordl_internal_get__movementData() const;

  constexpr ::GlobalNamespace::SaberMovementData*& __cordl_internal_get__movementData();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__saberBladeBottomPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__saberBladeBottomPos();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__saberBladeBottomTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__saberBladeBottomTransform();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__saberBladeTopPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__saberBladeTopPos();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__saberBladeTopTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__saberBladeTopTransform();

  constexpr ::UnityW<::GlobalNamespace::SaberTypeObject> const& __cordl_internal_get__saberType() const;

  constexpr ::UnityW<::GlobalNamespace::SaberTypeObject>& __cordl_internal_get__saberType();

  constexpr void __cordl_internal_set__handlePos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__handleTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__movementData(::GlobalNamespace::SaberMovementData* value);

  constexpr void __cordl_internal_set__saberBladeBottomPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__saberBladeBottomTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__saberBladeTopPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__saberBladeTopTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__saberType(::UnityW<::GlobalNamespace::SaberTypeObject> value);

  /// @brief Method .ctor, addr 0x3bea99c, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bladeSpeed, addr 0x3bea7dc, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_bladeSpeed();

  /// @brief Method get_bladeSpeedForLogic, addr 0x3bea7c0, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_bladeSpeedForLogic();

  /// @brief Method get_handlePos, addr 0x3bea76c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_handlePos();

  /// @brief Method get_movementDataForLogic, addr 0x3bea7f8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SaberMovementData* get_movementDataForLogic();

  /// @brief Method get_movementDataForVisualEffects, addr 0x3bea800, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SaberMovementData* get_movementDataForVisualEffects();

  /// @brief Method get_saberBladeBottomPos, addr 0x3bea784, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_saberBladeBottomPos();

  /// @brief Method get_saberBladeBottomPosForLogic, addr 0x3bea79c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_saberBladeBottomPosForLogic();

  /// @brief Method get_saberBladeBottomPosForVisualEffects, addr 0x3bea7b4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_saberBladeBottomPosForVisualEffects();

  /// @brief Method get_saberBladeTopPos, addr 0x3bea778, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_saberBladeTopPos();

  /// @brief Method get_saberBladeTopPosForLogic, addr 0x3bea790, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_saberBladeTopPosForLogic();

  /// @brief Method get_saberBladeTopPosForVisualEffects, addr 0x3bea7a8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_saberBladeTopPosForVisualEffects();

  /// @brief Method get_saberType, addr 0x3bea750, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SaberType get_saberType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Saber();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Saber", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Saber(Saber&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Saber", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Saber(Saber const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4656 };

  /// @brief Field _saberBladeTopTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____saberBladeTopTransform;

  /// @brief Field _saberBladeBottomTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____saberBladeBottomTransform;

  /// @brief Field _handleTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____handleTransform;

  /// @brief Field _saberType, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberTypeObject> ____saberType;

  /// @brief Field _movementData, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::SaberMovementData* ____movementData;

  /// @brief Field _saberBladeTopPos, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____saberBladeTopPos;

  /// @brief Field _saberBladeBottomPos, offset: 0x54, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____saberBladeBottomPos;

  /// @brief Field _handlePos, offset: 0x60, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____handlePos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Saber, ____saberBladeTopTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Saber, ____saberBladeBottomTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Saber, ____handleTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Saber, ____saberType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Saber, ____movementData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Saber, ____saberBladeTopPos) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Saber, ____saberBladeBottomPos) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Saber, ____handlePos) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Saber, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Saber);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Saber*, "", "Saber");
