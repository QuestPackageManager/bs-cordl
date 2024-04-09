#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LimitAvatarPoseRestriction)
namespace BeatSaber::AvatarCore {
class IAvatarPoseRestriction;
}
namespace BeatSaber::AvatarCore {
class __LimitAvatarPoseRestriction__Parameters;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class LimitAvatarPoseRestriction;
}
namespace BeatSaber::AvatarCore {
class __LimitAvatarPoseRestriction__Parameters;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::LimitAvatarPoseRestriction);
MARK_REF_PTR_T(::BeatSaber::AvatarCore::__LimitAvatarPoseRestriction__Parameters);
// Type: ::Parameters
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: ::LimitAvatarPoseRestriction::Parameters*
class CORDL_TYPE __LimitAvatarPoseRestriction__Parameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field centerHeadOffset, offset 0x30, size 0xc
  __declspec(property(get = __cordl_internal_get_centerHeadOffset, put = __cordl_internal_set_centerHeadOffset))::UnityEngine::Vector3 centerHeadOffset;

  /// @brief Field forceHeadPosition, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_forceHeadPosition, put = __cordl_internal_set_forceHeadPosition)) bool forceHeadPosition;

  /// @brief Field maxHandXZSquareDistanceFromHeadCenter, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_maxHandXZSquareDistanceFromHeadCenter,
                      put = __cordl_internal_set_maxHandXZSquareDistanceFromHeadCenter)) float_t maxHandXZSquareDistanceFromHeadCenter;

  /// @brief Field maxHandYDistanceFromHeadCenter, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_maxHandYDistanceFromHeadCenter, put = __cordl_internal_set_maxHandYDistanceFromHeadCenter)) float_t maxHandYDistanceFromHeadCenter;

  /// @brief Field maxHeadSquareDistanceFromCenter, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_maxHeadSquareDistanceFromCenter, put = __cordl_internal_set_maxHeadSquareDistanceFromCenter)) float_t maxHeadSquareDistanceFromCenter;

  /// @brief Field maxHeadYPos, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_maxHeadYPos, put = __cordl_internal_set_maxHeadYPos)) float_t maxHeadYPos;

  /// @brief Field minHandXZSquareDistanceFromHeadCenter, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_minHandXZSquareDistanceFromHeadCenter,
                      put = __cordl_internal_set_minHandXZSquareDistanceFromHeadCenter)) float_t minHandXZSquareDistanceFromHeadCenter;

  /// @brief Field minHandYDistanceFromHeadCenter, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_minHandYDistanceFromHeadCenter, put = __cordl_internal_set_minHandYDistanceFromHeadCenter)) float_t minHandYDistanceFromHeadCenter;

  /// @brief Field minHeadYPos, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_minHeadYPos, put = __cordl_internal_set_minHeadYPos)) float_t minHeadYPos;

  static inline ::BeatSaber::AvatarCore::__LimitAvatarPoseRestriction__Parameters* New_ctor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_centerHeadOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_centerHeadOffset();

  constexpr bool const& __cordl_internal_get_forceHeadPosition() const;

  constexpr bool& __cordl_internal_get_forceHeadPosition();

  constexpr float_t const& __cordl_internal_get_maxHandXZSquareDistanceFromHeadCenter() const;

  constexpr float_t& __cordl_internal_get_maxHandXZSquareDistanceFromHeadCenter();

  constexpr float_t const& __cordl_internal_get_maxHandYDistanceFromHeadCenter() const;

  constexpr float_t& __cordl_internal_get_maxHandYDistanceFromHeadCenter();

  constexpr float_t const& __cordl_internal_get_maxHeadSquareDistanceFromCenter() const;

  constexpr float_t& __cordl_internal_get_maxHeadSquareDistanceFromCenter();

  constexpr float_t const& __cordl_internal_get_maxHeadYPos() const;

  constexpr float_t& __cordl_internal_get_maxHeadYPos();

  constexpr float_t const& __cordl_internal_get_minHandXZSquareDistanceFromHeadCenter() const;

  constexpr float_t& __cordl_internal_get_minHandXZSquareDistanceFromHeadCenter();

  constexpr float_t const& __cordl_internal_get_minHandYDistanceFromHeadCenter() const;

  constexpr float_t& __cordl_internal_get_minHandYDistanceFromHeadCenter();

  constexpr float_t const& __cordl_internal_get_minHeadYPos() const;

  constexpr float_t& __cordl_internal_get_minHeadYPos();

  constexpr void __cordl_internal_set_centerHeadOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_forceHeadPosition(bool value);

  constexpr void __cordl_internal_set_maxHandXZSquareDistanceFromHeadCenter(float_t value);

  constexpr void __cordl_internal_set_maxHandYDistanceFromHeadCenter(float_t value);

  constexpr void __cordl_internal_set_maxHeadSquareDistanceFromCenter(float_t value);

  constexpr void __cordl_internal_set_maxHeadYPos(float_t value);

  constexpr void __cordl_internal_set_minHandXZSquareDistanceFromHeadCenter(float_t value);

  constexpr void __cordl_internal_set_minHandYDistanceFromHeadCenter(float_t value);

  constexpr void __cordl_internal_set_minHeadYPos(float_t value);

  /// @brief Method .ctor, addr 0xf53488, size 0x44, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LimitAvatarPoseRestriction__Parameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LimitAvatarPoseRestriction__Parameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LimitAvatarPoseRestriction__Parameters(__LimitAvatarPoseRestriction__Parameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LimitAvatarPoseRestriction__Parameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LimitAvatarPoseRestriction__Parameters(__LimitAvatarPoseRestriction__Parameters const&) = delete;

  /// @brief Field maxHeadSquareDistanceFromCenter, offset: 0x10, size: 0x4, def value: None
  float_t ___maxHeadSquareDistanceFromCenter;

  /// @brief Field minHeadYPos, offset: 0x14, size: 0x4, def value: None
  float_t ___minHeadYPos;

  /// @brief Field maxHeadYPos, offset: 0x18, size: 0x4, def value: None
  float_t ___maxHeadYPos;

  /// @brief Field minHandXZSquareDistanceFromHeadCenter, offset: 0x1c, size: 0x4, def value: None
  float_t ___minHandXZSquareDistanceFromHeadCenter;

  /// @brief Field maxHandXZSquareDistanceFromHeadCenter, offset: 0x20, size: 0x4, def value: None
  float_t ___maxHandXZSquareDistanceFromHeadCenter;

  /// @brief Field minHandYDistanceFromHeadCenter, offset: 0x24, size: 0x4, def value: None
  float_t ___minHandYDistanceFromHeadCenter;

  /// @brief Field maxHandYDistanceFromHeadCenter, offset: 0x28, size: 0x4, def value: None
  float_t ___maxHandYDistanceFromHeadCenter;

  /// @brief Field forceHeadPosition, offset: 0x2c, size: 0x1, def value: None
  bool ___forceHeadPosition;

  /// @brief Field centerHeadOffset, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___centerHeadOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::__LimitAvatarPoseRestriction__Parameters, 0x40>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::__LimitAvatarPoseRestriction__Parameters, ___maxHeadSquareDistanceFromCenter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::__LimitAvatarPoseRestriction__Parameters, ___minHeadYPos) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::__LimitAvatarPoseRestriction__Parameters, ___maxHeadYPos) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::__LimitAvatarPoseRestriction__Parameters, ___minHandXZSquareDistanceFromHeadCenter) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::__LimitAvatarPoseRestriction__Parameters, ___maxHandXZSquareDistanceFromHeadCenter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::__LimitAvatarPoseRestriction__Parameters, ___minHandYDistanceFromHeadCenter) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::__LimitAvatarPoseRestriction__Parameters, ___maxHandYDistanceFromHeadCenter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::__LimitAvatarPoseRestriction__Parameters, ___forceHeadPosition) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::__LimitAvatarPoseRestriction__Parameters, ___centerHeadOffset) == 0x30, "Offset mismatch!");

} // namespace BeatSaber::AvatarCore
// Type: BeatSaber.AvatarCore::LimitAvatarPoseRestriction
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: ::BeatSaber.AvatarCore::LimitAvatarPoseRestriction*
class CORDL_TYPE LimitAvatarPoseRestriction : public ::System::Object {
public:
  // Declarations
  using Parameters = ::BeatSaber::AvatarCore::__LimitAvatarPoseRestriction__Parameters;

  /// @brief Field _parameters, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__parameters, put = __cordl_internal_set__parameters))::BeatSaber::AvatarCore::__LimitAvatarPoseRestriction__Parameters* _parameters;

  /// @brief Convert operator to "::BeatSaber::AvatarCore::IAvatarPoseRestriction"
  constexpr operator ::BeatSaber::AvatarCore::IAvatarPoseRestriction*() noexcept;

  /// @brief Method LimitHandPositionRelativeToHead, addr 0xf533dc, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 LimitHandPositionRelativeToHead(::UnityEngine::Vector3 handPosition, ::UnityEngine::Vector3 headCenter);

  static inline ::BeatSaber::AvatarCore::LimitAvatarPoseRestriction* New_ctor();

  /// @brief Method RestrictPose, addr 0xf531e8, size 0x1f4, virtual true, abstract: false, final true
  inline void RestrictPose(::UnityEngine::Quaternion headRotation, ::UnityEngine::Vector3 headPosition, ::UnityEngine::Vector3 leftHandPosition, ::UnityEngine::Vector3 rightHandPosition,
                           ByRef<::UnityEngine::Vector3> newHeadPosition, ByRef<::UnityEngine::Vector3> newLeftHandPosition, ByRef<::UnityEngine::Vector3> newRightHandPosition);

  constexpr ::BeatSaber::AvatarCore::__LimitAvatarPoseRestriction__Parameters*& __cordl_internal_get__parameters();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::__LimitAvatarPoseRestriction__Parameters*> const& __cordl_internal_get__parameters() const;

  constexpr void __cordl_internal_set__parameters(::BeatSaber::AvatarCore::__LimitAvatarPoseRestriction__Parameters* value);

  /// @brief Method .ctor, addr 0xf53480, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::BeatSaber::AvatarCore::IAvatarPoseRestriction"
  constexpr ::BeatSaber::AvatarCore::IAvatarPoseRestriction* i___BeatSaber__AvatarCore__IAvatarPoseRestriction() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LimitAvatarPoseRestriction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LimitAvatarPoseRestriction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LimitAvatarPoseRestriction(LimitAvatarPoseRestriction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LimitAvatarPoseRestriction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LimitAvatarPoseRestriction(LimitAvatarPoseRestriction const&) = delete;

  /// @brief Field _parameters, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::__LimitAvatarPoseRestriction__Parameters* ____parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::LimitAvatarPoseRestriction, 0x18>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::LimitAvatarPoseRestriction, ____parameters) == 0x10, "Offset mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::LimitAvatarPoseRestriction);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::LimitAvatarPoseRestriction*, "BeatSaber.AvatarCore", "LimitAvatarPoseRestriction");
NEED_NO_BOX(::BeatSaber::AvatarCore::__LimitAvatarPoseRestriction__Parameters);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::__LimitAvatarPoseRestriction__Parameters*, "BeatSaber.AvatarCore", "LimitAvatarPoseRestriction/Parameters");
