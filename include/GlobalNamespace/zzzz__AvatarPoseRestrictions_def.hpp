#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AvatarPoseRestrictions)
namespace GlobalNamespace {
class AvatarPoseController;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarPoseRestrictions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AvatarPoseRestrictions);
// Type: ::AvatarPoseRestrictions
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10176)), TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4081))
// CS Name: ::AvatarPoseRestrictions*
class CORDL_TYPE AvatarPoseRestrictions : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _maxHeadSquareDistanceFromCenter, offset 0x18, size 0x4
  __declspec(property(get = __get__maxHeadSquareDistanceFromCenter, put = __set__maxHeadSquareDistanceFromCenter)) float_t _maxHeadSquareDistanceFromCenter;

  /// @brief Field _minHeadYPos, offset 0x1c, size 0x4
  __declspec(property(get = __get__minHeadYPos, put = __set__minHeadYPos)) float_t _minHeadYPos;

  /// @brief Field _maxHeadYPos, offset 0x20, size 0x4
  __declspec(property(get = __get__maxHeadYPos, put = __set__maxHeadYPos)) float_t _maxHeadYPos;

  /// @brief Field _minHandXZSquareDistanceFromHeadCenter, offset 0x24, size 0x4
  __declspec(property(get = __get__minHandXZSquareDistanceFromHeadCenter, put = __set__minHandXZSquareDistanceFromHeadCenter)) float_t _minHandXZSquareDistanceFromHeadCenter;

  /// @brief Field _maxHandXZSquareDistanceFromHeadCenter, offset 0x28, size 0x4
  __declspec(property(get = __get__maxHandXZSquareDistanceFromHeadCenter, put = __set__maxHandXZSquareDistanceFromHeadCenter)) float_t _maxHandXZSquareDistanceFromHeadCenter;

  /// @brief Field _minHandYDistanceFromHeadCenter, offset 0x2c, size 0x4
  __declspec(property(get = __get__minHandYDistanceFromHeadCenter, put = __set__minHandYDistanceFromHeadCenter)) float_t _minHandYDistanceFromHeadCenter;

  /// @brief Field _maxHandYDistanceFromHeadCenter, offset 0x30, size 0x4
  __declspec(property(get = __get__maxHandYDistanceFromHeadCenter, put = __set__maxHandYDistanceFromHeadCenter)) float_t _maxHandYDistanceFromHeadCenter;

  /// @brief Field _forceHeadPosition, offset 0x34, size 0x1
  __declspec(property(get = __get__forceHeadPosition, put = __set__forceHeadPosition)) bool _forceHeadPosition;

  /// @brief Field _centerHeadOffset, offset 0x38, size 0xc
  __declspec(property(get = __get__centerHeadOffset, put = __set__centerHeadOffset))::UnityEngine::Vector3 _centerHeadOffset;

  /// @brief Field _avatarPoseController, offset 0x48, size 0x8
  __declspec(property(get = __get__avatarPoseController, put = __set__avatarPoseController))::GlobalNamespace::AvatarPoseController* _avatarPoseController;

  constexpr float_t& __get__maxHeadSquareDistanceFromCenter();

  constexpr float_t const& __get__maxHeadSquareDistanceFromCenter() const;

  constexpr void __set__maxHeadSquareDistanceFromCenter(float_t value);

  constexpr float_t& __get__minHeadYPos();

  constexpr float_t const& __get__minHeadYPos() const;

  constexpr void __set__minHeadYPos(float_t value);

  constexpr float_t& __get__maxHeadYPos();

  constexpr float_t const& __get__maxHeadYPos() const;

  constexpr void __set__maxHeadYPos(float_t value);

  constexpr float_t& __get__minHandXZSquareDistanceFromHeadCenter();

  constexpr float_t const& __get__minHandXZSquareDistanceFromHeadCenter() const;

  constexpr void __set__minHandXZSquareDistanceFromHeadCenter(float_t value);

  constexpr float_t& __get__maxHandXZSquareDistanceFromHeadCenter();

  constexpr float_t const& __get__maxHandXZSquareDistanceFromHeadCenter() const;

  constexpr void __set__maxHandXZSquareDistanceFromHeadCenter(float_t value);

  constexpr float_t& __get__minHandYDistanceFromHeadCenter();

  constexpr float_t const& __get__minHandYDistanceFromHeadCenter() const;

  constexpr void __set__minHandYDistanceFromHeadCenter(float_t value);

  constexpr float_t& __get__maxHandYDistanceFromHeadCenter();

  constexpr float_t const& __get__maxHandYDistanceFromHeadCenter() const;

  constexpr void __set__maxHandYDistanceFromHeadCenter(float_t value);

  constexpr bool& __get__forceHeadPosition();

  constexpr bool const& __get__forceHeadPosition() const;

  constexpr void __set__forceHeadPosition(bool value);

  constexpr ::UnityEngine::Vector3& __get__centerHeadOffset();

  constexpr ::UnityEngine::Vector3 const& __get__centerHeadOffset() const;

  constexpr void __set__centerHeadOffset(::UnityEngine::Vector3 value);

  constexpr ::GlobalNamespace::AvatarPoseController*& __get__avatarPoseController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarPoseController*> const& __get__avatarPoseController() const;

  constexpr void __set__avatarPoseController(::GlobalNamespace::AvatarPoseController* value);

  /// @brief Method Start addr 0x20d2fec size 0x80 virtual false final false
  inline void Start();

  /// @brief Method HandleAvatarPoseControllerPositionsWillBeSet addr 0x20d306c size 0x1dc virtual false final false
  inline void HandleAvatarPoseControllerPositionsWillBeSet(::UnityEngine::Quaternion headRotation, ::UnityEngine::Vector3 headPosition, ::UnityEngine::Vector3 leftHandPosition,
                                                           ::UnityEngine::Vector3 rightHandPosition, ByRef<::UnityEngine::Vector3> newHeadPosition, ByRef<::UnityEngine::Vector3> newLeftHandPosition,
                                                           ByRef<::UnityEngine::Vector3> newRightHandPosition);

  /// @brief Method LimitHandPositionRelativeToHead addr 0x20d3248 size 0x90 virtual false final false
  inline ::UnityEngine::Vector3 LimitHandPositionRelativeToHead(::UnityEngine::Vector3 handPosition, ::UnityEngine::Vector3 headCenter);

  static inline ::GlobalNamespace::AvatarPoseRestrictions* New_ctor();

  /// @brief Method .ctor addr 0x20d32d8 size 0x3c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AvatarPoseRestrictions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarPoseRestrictions(AvatarPoseRestrictions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarPoseRestrictions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarPoseRestrictions(AvatarPoseRestrictions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarPoseRestrictions();

public:
  /// @brief Field _maxHeadSquareDistanceFromCenter, offset: 0x18, size: 0x4, def value: None
  float_t ____maxHeadSquareDistanceFromCenter;

  /// @brief Field _minHeadYPos, offset: 0x1c, size: 0x4, def value: None
  float_t ____minHeadYPos;

  /// @brief Field _maxHeadYPos, offset: 0x20, size: 0x4, def value: None
  float_t ____maxHeadYPos;

  /// @brief Field _minHandXZSquareDistanceFromHeadCenter, offset: 0x24, size: 0x4, def value: None
  float_t ____minHandXZSquareDistanceFromHeadCenter;

  /// @brief Field _maxHandXZSquareDistanceFromHeadCenter, offset: 0x28, size: 0x4, def value: None
  float_t ____maxHandXZSquareDistanceFromHeadCenter;

  /// @brief Field _minHandYDistanceFromHeadCenter, offset: 0x2c, size: 0x4, def value: None
  float_t ____minHandYDistanceFromHeadCenter;

  /// @brief Field _maxHandYDistanceFromHeadCenter, offset: 0x30, size: 0x4, def value: None
  float_t ____maxHandYDistanceFromHeadCenter;

  /// @brief Field _forceHeadPosition, offset: 0x34, size: 0x1, def value: None
  bool ____forceHeadPosition;

  /// @brief Field _centerHeadOffset, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____centerHeadOffset;

  /// @brief Field _avatarPoseController, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::AvatarPoseController* ____avatarPoseController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarPoseRestrictions, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPoseRestrictions, ____maxHeadSquareDistanceFromCenter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPoseRestrictions, ____minHeadYPos) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPoseRestrictions, ____maxHeadYPos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPoseRestrictions, ____minHandXZSquareDistanceFromHeadCenter) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPoseRestrictions, ____maxHandXZSquareDistanceFromHeadCenter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPoseRestrictions, ____minHandYDistanceFromHeadCenter) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPoseRestrictions, ____maxHandYDistanceFromHeadCenter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPoseRestrictions, ____forceHeadPosition) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPoseRestrictions, ____centerHeadOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarPoseRestrictions, ____avatarPoseController) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AvatarPoseRestrictions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarPoseRestrictions*, "", "AvatarPoseRestrictions");
