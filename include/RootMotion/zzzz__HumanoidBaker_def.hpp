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
class BakerHumanoidQT;
}
namespace RootMotion {
class BakerMuscle;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class HumanPoseHandler;
}
namespace UnityEngine {
class Transform;
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
// CS Name: ::RootMotion::HumanoidBaker*
class CORDL_TYPE HumanoidBaker : public ::RootMotion::Baker {
public:
  // Declarations
  /// @brief Field IKKeyReductionError, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_IKKeyReductionError, put = __cordl_internal_set_IKKeyReductionError)) float_t IKKeyReductionError;

  /// @brief Field bakeHandIK, offset 0x74, size 0x1
  __declspec(property(get = __cordl_internal_get_bakeHandIK, put = __cordl_internal_set_bakeHandIK)) bool bakeHandIK;

  /// @brief Field bakerMuscles, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_bakerMuscles, put = __cordl_internal_set_bakerMuscles))::ArrayW<::RootMotion::BakerMuscle*, ::Array<::RootMotion::BakerMuscle*>*> bakerMuscles;

  /// @brief Field bodyPosition, offset 0xe8, size 0xc
  __declspec(property(get = __cordl_internal_get_bodyPosition, put = __cordl_internal_set_bodyPosition))::UnityEngine::Vector3 bodyPosition;

  /// @brief Field bodyRotation, offset 0xf4, size 0x10
  __declspec(property(get = __cordl_internal_get_bodyRotation, put = __cordl_internal_set_bodyRotation))::UnityEngine::Quaternion bodyRotation;

  /// @brief Field handler, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_handler, put = __cordl_internal_set_handler))::UnityEngine::HumanPoseHandler* handler;

  /// @brief Field lastBodyRotation, offset 0x108, size 0x10
  __declspec(property(get = __cordl_internal_get_lastBodyRotation, put = __cordl_internal_set_lastBodyRotation))::UnityEngine::Quaternion lastBodyRotation;

  /// @brief Field leftFootQT, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_leftFootQT, put = __cordl_internal_set_leftFootQT))::RootMotion::BakerHumanoidQT* leftFootQT;

  /// @brief Field leftHandQT, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_leftHandQT, put = __cordl_internal_set_leftHandQT))::RootMotion::BakerHumanoidQT* leftHandQT;

  /// @brief Field mN, offset 0x104, size 0x4
  __declspec(property(get = __cordl_internal_get_mN, put = __cordl_internal_set_mN)) int32_t mN;

  /// @brief Field muscleFrameRateDiv, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_muscleFrameRateDiv, put = __cordl_internal_set_muscleFrameRateDiv)) int32_t muscleFrameRateDiv;

  /// @brief Field muscles, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_muscles, put = __cordl_internal_set_muscles))::ArrayW<float_t, ::Array<float_t>*> muscles;

  /// @brief Field pose, offset 0xb8, size 0x28
  __declspec(property(get = __cordl_internal_get_pose, put = __cordl_internal_set_pose))::UnityEngine::HumanPose pose;

  /// @brief Field rightFootQT, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_rightFootQT, put = __cordl_internal_set_rightFootQT))::RootMotion::BakerHumanoidQT* rightFootQT;

  /// @brief Field rightHandQT, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_rightHandQT, put = __cordl_internal_set_rightHandQT))::RootMotion::BakerHumanoidQT* rightHandQT;

  /// @brief Field rootQT, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_rootQT, put = __cordl_internal_set_rootQT))::RootMotion::BakerHumanoidQT* rootQT;

  /// @brief Method Awake, addr 0x131099c, size 0x4b8, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetCharacterRoot, addr 0x1310e54, size 0x1c, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetCharacterRoot();

  static inline ::RootMotion::HumanoidBaker* New_ctor();

  /// @brief Method OnSetCurves, addr 0x1311008, size 0x1a0, virtual true, abstract: false, final false
  inline void OnSetCurves(ByRef<::UnityEngine::AnimationClip*> clip);

  /// @brief Method OnSetKeyframes, addr 0x13111a8, size 0x2a4, virtual true, abstract: false, final false
  inline void OnSetKeyframes(float_t time, bool lastFrame);

  /// @brief Method OnSetLoopFrame, addr 0x1310f4c, size 0xbc, virtual true, abstract: false, final false
  inline void OnSetLoopFrame(float_t time);

  /// @brief Method OnStartBaking, addr 0x1310e70, size 0xdc, virtual true, abstract: false, final false
  inline void OnStartBaking();

  /// @brief Method UpdateHumanPose, addr 0x131144c, size 0xd8, virtual false, abstract: false, final false
  inline void UpdateHumanPose();

  constexpr float_t const& __cordl_internal_get_IKKeyReductionError() const;

  constexpr float_t& __cordl_internal_get_IKKeyReductionError();

  constexpr bool const& __cordl_internal_get_bakeHandIK() const;

  constexpr bool& __cordl_internal_get_bakeHandIK();

  constexpr ::ArrayW<::RootMotion::BakerMuscle*, ::Array<::RootMotion::BakerMuscle*>*> const& __cordl_internal_get_bakerMuscles() const;

  constexpr ::ArrayW<::RootMotion::BakerMuscle*, ::Array<::RootMotion::BakerMuscle*>*>& __cordl_internal_get_bakerMuscles();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bodyPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_bodyPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_bodyRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_bodyRotation();

  constexpr ::UnityEngine::HumanPoseHandler*& __cordl_internal_get_handler();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::HumanPoseHandler*> const& __cordl_internal_get_handler() const;

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_lastBodyRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_lastBodyRotation();

  constexpr ::RootMotion::BakerHumanoidQT*& __cordl_internal_get_leftFootQT();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::BakerHumanoidQT*> const& __cordl_internal_get_leftFootQT() const;

  constexpr ::RootMotion::BakerHumanoidQT*& __cordl_internal_get_leftHandQT();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::BakerHumanoidQT*> const& __cordl_internal_get_leftHandQT() const;

  constexpr int32_t const& __cordl_internal_get_mN() const;

  constexpr int32_t& __cordl_internal_get_mN();

  constexpr int32_t const& __cordl_internal_get_muscleFrameRateDiv() const;

  constexpr int32_t& __cordl_internal_get_muscleFrameRateDiv();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_muscles() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_muscles();

  constexpr ::UnityEngine::HumanPose const& __cordl_internal_get_pose() const;

  constexpr ::UnityEngine::HumanPose& __cordl_internal_get_pose();

  constexpr ::RootMotion::BakerHumanoidQT*& __cordl_internal_get_rightFootQT();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::BakerHumanoidQT*> const& __cordl_internal_get_rightFootQT() const;

  constexpr ::RootMotion::BakerHumanoidQT*& __cordl_internal_get_rightHandQT();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::BakerHumanoidQT*> const& __cordl_internal_get_rightHandQT() const;

  constexpr ::RootMotion::BakerHumanoidQT*& __cordl_internal_get_rootQT();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::BakerHumanoidQT*> const& __cordl_internal_get_rootQT() const;

  constexpr void __cordl_internal_set_IKKeyReductionError(float_t value);

  constexpr void __cordl_internal_set_bakeHandIK(bool value);

  constexpr void __cordl_internal_set_bakerMuscles(::ArrayW<::RootMotion::BakerMuscle*, ::Array<::RootMotion::BakerMuscle*>*> value);

  constexpr void __cordl_internal_set_bodyPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_bodyRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_handler(::UnityEngine::HumanPoseHandler* value);

  constexpr void __cordl_internal_set_lastBodyRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_leftFootQT(::RootMotion::BakerHumanoidQT* value);

  constexpr void __cordl_internal_set_leftHandQT(::RootMotion::BakerHumanoidQT* value);

  constexpr void __cordl_internal_set_mN(int32_t value);

  constexpr void __cordl_internal_set_muscleFrameRateDiv(int32_t value);

  constexpr void __cordl_internal_set_muscles(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_pose(::UnityEngine::HumanPose value);

  constexpr void __cordl_internal_set_rightFootQT(::RootMotion::BakerHumanoidQT* value);

  constexpr void __cordl_internal_set_rightHandQT(::RootMotion::BakerHumanoidQT* value);

  constexpr void __cordl_internal_set_rootQT(::RootMotion::BakerHumanoidQT* value);

  /// @brief Method .ctor, addr 0x1311524, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HumanoidBaker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HumanoidBaker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HumanoidBaker(HumanoidBaker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HumanoidBaker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HumanoidBaker(HumanoidBaker const&) = delete;

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
