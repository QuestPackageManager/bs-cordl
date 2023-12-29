#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/zzzz__Baker_def.hpp"
#include "UnityEngine/zzzz__HumanPose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HumanoidBaker)
namespace RootMotion {
class BakerMuscle;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class HumanPoseHandler;
}
namespace RootMotion {
class BakerHumanoidQT;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace RootMotion {
class HumanoidBaker;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::HumanoidBaker);
// Type: RootMotion::HumanoidBaker
// SizeInfo { instance_size: 280, native_size: -1, calculated_instance_size: 280, calculated_native_size: 280, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12399)), TypeDefinitionIndex(TypeDefinitionIndex(15111)), TypeDefinitionIndex(TypeDefinitionIndex(10179)),
// TypeDefinitionIndex(TypeDefinitionIndex(10176))} Self: TypeDefinitionIndex(TypeDefinitionIndex(12407)) CS Name: ::RootMotion::HumanoidBaker*
class CORDL_TYPE HumanoidBaker : public ::RootMotion::Baker {
public:
  // Declarations
  /// @brief Field bakeHandIK, offset 0x74, size 0x1
  __declspec(property(get = __get_bakeHandIK, put = __set_bakeHandIK)) bool bakeHandIK;

  /// @brief Field IKKeyReductionError, offset 0x78, size 0x4
  __declspec(property(get = __get_IKKeyReductionError, put = __set_IKKeyReductionError)) float_t IKKeyReductionError;

  /// @brief Field muscleFrameRateDiv, offset 0x7c, size 0x4
  __declspec(property(get = __get_muscleFrameRateDiv, put = __set_muscleFrameRateDiv)) int32_t muscleFrameRateDiv;

  /// @brief Field bakerMuscles, offset 0x80, size 0x8
  __declspec(property(get = __get_bakerMuscles, put = __set_bakerMuscles))::ArrayW<::RootMotion::BakerMuscle*, ::Array<::RootMotion::BakerMuscle*>*> bakerMuscles;

  /// @brief Field rootQT, offset 0x88, size 0x8
  __declspec(property(get = __get_rootQT, put = __set_rootQT))::RootMotion::BakerHumanoidQT* rootQT;

  /// @brief Field leftFootQT, offset 0x90, size 0x8
  __declspec(property(get = __get_leftFootQT, put = __set_leftFootQT))::RootMotion::BakerHumanoidQT* leftFootQT;

  /// @brief Field rightFootQT, offset 0x98, size 0x8
  __declspec(property(get = __get_rightFootQT, put = __set_rightFootQT))::RootMotion::BakerHumanoidQT* rightFootQT;

  /// @brief Field leftHandQT, offset 0xa0, size 0x8
  __declspec(property(get = __get_leftHandQT, put = __set_leftHandQT))::RootMotion::BakerHumanoidQT* leftHandQT;

  /// @brief Field rightHandQT, offset 0xa8, size 0x8
  __declspec(property(get = __get_rightHandQT, put = __set_rightHandQT))::RootMotion::BakerHumanoidQT* rightHandQT;

  /// @brief Field muscles, offset 0xb0, size 0x8
  __declspec(property(get = __get_muscles, put = __set_muscles))::ArrayW<float_t, ::Array<float_t>*> muscles;

  /// @brief Field pose, offset 0xb8, size 0x28
  __declspec(property(get = __get_pose, put = __set_pose))::UnityEngine::HumanPose pose;

  /// @brief Field handler, offset 0xe0, size 0x8
  __declspec(property(get = __get_handler, put = __set_handler))::UnityEngine::HumanPoseHandler* handler;

  /// @brief Field bodyPosition, offset 0xe8, size 0xc
  __declspec(property(get = __get_bodyPosition, put = __set_bodyPosition))::UnityEngine::Vector3 bodyPosition;

  /// @brief Field bodyRotation, offset 0xf4, size 0x10
  __declspec(property(get = __get_bodyRotation, put = __set_bodyRotation))::UnityEngine::Quaternion bodyRotation;

  /// @brief Field mN, offset 0x104, size 0x4
  __declspec(property(get = __get_mN, put = __set_mN)) int32_t mN;

  /// @brief Field lastBodyRotation, offset 0x108, size 0x10
  __declspec(property(get = __get_lastBodyRotation, put = __set_lastBodyRotation))::UnityEngine::Quaternion lastBodyRotation;

  constexpr bool& __get_bakeHandIK();

  constexpr bool const& __get_bakeHandIK() const;

  constexpr void __set_bakeHandIK(bool value);

  constexpr float_t& __get_IKKeyReductionError();

  constexpr float_t const& __get_IKKeyReductionError() const;

  constexpr void __set_IKKeyReductionError(float_t value);

  constexpr int32_t& __get_muscleFrameRateDiv();

  constexpr int32_t const& __get_muscleFrameRateDiv() const;

  constexpr void __set_muscleFrameRateDiv(int32_t value);

  constexpr ::ArrayW<::RootMotion::BakerMuscle*, ::Array<::RootMotion::BakerMuscle*>*>& __get_bakerMuscles();

  constexpr ::ArrayW<::RootMotion::BakerMuscle*, ::Array<::RootMotion::BakerMuscle*>*> const& __get_bakerMuscles() const;

  constexpr void __set_bakerMuscles(::ArrayW<::RootMotion::BakerMuscle*, ::Array<::RootMotion::BakerMuscle*>*> value);

  constexpr ::RootMotion::BakerHumanoidQT*& __get_rootQT();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::BakerHumanoidQT*> const& __get_rootQT() const;

  constexpr void __set_rootQT(::RootMotion::BakerHumanoidQT* value);

  constexpr ::RootMotion::BakerHumanoidQT*& __get_leftFootQT();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::BakerHumanoidQT*> const& __get_leftFootQT() const;

  constexpr void __set_leftFootQT(::RootMotion::BakerHumanoidQT* value);

  constexpr ::RootMotion::BakerHumanoidQT*& __get_rightFootQT();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::BakerHumanoidQT*> const& __get_rightFootQT() const;

  constexpr void __set_rightFootQT(::RootMotion::BakerHumanoidQT* value);

  constexpr ::RootMotion::BakerHumanoidQT*& __get_leftHandQT();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::BakerHumanoidQT*> const& __get_leftHandQT() const;

  constexpr void __set_leftHandQT(::RootMotion::BakerHumanoidQT* value);

  constexpr ::RootMotion::BakerHumanoidQT*& __get_rightHandQT();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::BakerHumanoidQT*> const& __get_rightHandQT() const;

  constexpr void __set_rightHandQT(::RootMotion::BakerHumanoidQT* value);

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get_muscles();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get_muscles() const;

  constexpr void __set_muscles(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr ::UnityEngine::HumanPose& __get_pose();

  constexpr ::UnityEngine::HumanPose const& __get_pose() const;

  constexpr void __set_pose(::UnityEngine::HumanPose value);

  constexpr ::UnityEngine::HumanPoseHandler*& __get_handler();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::HumanPoseHandler*> const& __get_handler() const;

  constexpr void __set_handler(::UnityEngine::HumanPoseHandler* value);

  constexpr ::UnityEngine::Vector3& __get_bodyPosition();

  constexpr ::UnityEngine::Vector3 const& __get_bodyPosition() const;

  constexpr void __set_bodyPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get_bodyRotation();

  constexpr ::UnityEngine::Quaternion const& __get_bodyRotation() const;

  constexpr void __set_bodyRotation(::UnityEngine::Quaternion value);

  constexpr int32_t& __get_mN();

  constexpr int32_t const& __get_mN() const;

  constexpr void __set_mN(int32_t value);

  constexpr ::UnityEngine::Quaternion& __get_lastBodyRotation();

  constexpr ::UnityEngine::Quaternion const& __get_lastBodyRotation() const;

  constexpr void __set_lastBodyRotation(::UnityEngine::Quaternion value);

  /// @brief Method Awake addr 0x11c45d4 size 0x4b8 virtual false final false
  inline void Awake();

  /// @brief Method GetCharacterRoot addr 0x11c4a8c size 0x1c virtual true final false
  inline ::UnityEngine::Transform* GetCharacterRoot();

  /// @brief Method OnStartBaking addr 0x11c4aa8 size 0xdc virtual true final false
  inline void OnStartBaking();

  /// @brief Method OnSetLoopFrame addr 0x11c4b84 size 0xbc virtual true final false
  inline void OnSetLoopFrame(float_t time);

  /// @brief Method OnSetCurves addr 0x11c4c40 size 0x1a0 virtual true final false
  inline void OnSetCurves(ByRef<::UnityEngine::AnimationClip*> clip);

  /// @brief Method OnSetKeyframes addr 0x11c4de0 size 0x2a4 virtual true final false
  inline void OnSetKeyframes(float_t time, bool lastFrame);

  /// @brief Method UpdateHumanPose addr 0x11c5084 size 0xd8 virtual false final false
  inline void UpdateHumanPose();

  static inline ::RootMotion::HumanoidBaker* New_ctor();

  /// @brief Method .ctor addr 0x11c515c size 0xa4 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HumanoidBaker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HumanoidBaker(HumanoidBaker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HumanoidBaker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HumanoidBaker(HumanoidBaker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HumanoidBaker();

public:
  /// @brief Field bakeHandIK, offset: 0x74, size: 0x1, def value: None
  bool ___bakeHandIK;

  /// @brief Field IKKeyReductionError, offset: 0x78, size: 0x4, def value: None
  float_t ___IKKeyReductionError;

  /// @brief Field muscleFrameRateDiv, offset: 0x7c, size: 0x4, def value: None
  int32_t ___muscleFrameRateDiv;

  /// @brief Field bakerMuscles, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::RootMotion::BakerMuscle*, ::Array<::RootMotion::BakerMuscle*>*> ___bakerMuscles;

  /// @brief Field rootQT, offset: 0x88, size: 0x8, def value: None
  ::RootMotion::BakerHumanoidQT* ___rootQT;

  /// @brief Field leftFootQT, offset: 0x90, size: 0x8, def value: None
  ::RootMotion::BakerHumanoidQT* ___leftFootQT;

  /// @brief Field rightFootQT, offset: 0x98, size: 0x8, def value: None
  ::RootMotion::BakerHumanoidQT* ___rightFootQT;

  /// @brief Field leftHandQT, offset: 0xa0, size: 0x8, def value: None
  ::RootMotion::BakerHumanoidQT* ___leftHandQT;

  /// @brief Field rightHandQT, offset: 0xa8, size: 0x8, def value: None
  ::RootMotion::BakerHumanoidQT* ___rightHandQT;

  /// @brief Field muscles, offset: 0xb0, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___muscles;

  /// @brief Field pose, offset: 0xb8, size: 0x28, def value: None
  ::UnityEngine::HumanPose ___pose;

  /// @brief Field handler, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::HumanPoseHandler* ___handler;

  /// @brief Field bodyPosition, offset: 0xe8, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___bodyPosition;

  /// @brief Field bodyRotation, offset: 0xf4, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___bodyRotation;

  /// @brief Field mN, offset: 0x104, size: 0x4, def value: None
  int32_t ___mN;

  /// @brief Field lastBodyRotation, offset: 0x108, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___lastBodyRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::HumanoidBaker, 0x118>, "Size mismatch!");

static_assert(offsetof(::RootMotion::HumanoidBaker, ___bakeHandIK) == 0x74, "Offset mismatch!");

static_assert(offsetof(::RootMotion::HumanoidBaker, ___IKKeyReductionError) == 0x78, "Offset mismatch!");

static_assert(offsetof(::RootMotion::HumanoidBaker, ___muscleFrameRateDiv) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::HumanoidBaker, ___bakerMuscles) == 0x80, "Offset mismatch!");

static_assert(offsetof(::RootMotion::HumanoidBaker, ___rootQT) == 0x88, "Offset mismatch!");

static_assert(offsetof(::RootMotion::HumanoidBaker, ___leftFootQT) == 0x90, "Offset mismatch!");

static_assert(offsetof(::RootMotion::HumanoidBaker, ___rightFootQT) == 0x98, "Offset mismatch!");

static_assert(offsetof(::RootMotion::HumanoidBaker, ___leftHandQT) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::HumanoidBaker, ___rightHandQT) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::HumanoidBaker, ___muscles) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::HumanoidBaker, ___pose) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::HumanoidBaker, ___handler) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::HumanoidBaker, ___bodyPosition) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::HumanoidBaker, ___bodyRotation) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::RootMotion::HumanoidBaker, ___mN) == 0x104, "Offset mismatch!");

static_assert(offsetof(::RootMotion::HumanoidBaker, ___lastBodyRotation) == 0x108, "Offset mismatch!");

} // namespace RootMotion
NEED_NO_BOX(::RootMotion::HumanoidBaker);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::HumanoidBaker*, "RootMotion", "HumanoidBaker");
