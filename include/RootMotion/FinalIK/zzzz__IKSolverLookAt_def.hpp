#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IKSolverLookAt)
namespace RootMotion::FinalIK {
class __IKSolverLookAt__LookAtBone;
}
namespace RootMotion::FinalIK {
class __IKSolver__Point;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKSolverLookAt;
}
namespace RootMotion::FinalIK {
class __IKSolverLookAt__LookAtBone;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::IKSolverLookAt);
MARK_REF_PTR_T(::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone);
// Type: ::LookAtBone
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::IKSolverLookAt::LookAtBone*
class CORDL_TYPE __IKSolverLookAt__LookAtBone : public ::RootMotion::FinalIK::__IKSolver__Bone {
public:
  // Declarations
  /// @brief Field baseForwardOffsetEuler, offset 0x74, size 0xc
  __declspec(property(get = __cordl_internal_get_baseForwardOffsetEuler, put = __cordl_internal_set_baseForwardOffsetEuler))::UnityEngine::Vector3 baseForwardOffsetEuler;

  __declspec(property(get = get_forward))::UnityEngine::Vector3 forward;

  /// @brief Method Initiate, addr 0x1349070, size 0xec, virtual false, abstract: false, final false
  inline void Initiate(::UnityEngine::Transform* root);

  /// @brief Method LookAt, addr 0x1349fa8, size 0x108, virtual false, abstract: false, final false
  inline void LookAt(::UnityEngine::Vector3 direction, float_t weight);

  static inline ::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone* New_ctor();

  static inline ::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone* New_ctor(::UnityEngine::Transform* transform);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_baseForwardOffsetEuler() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_baseForwardOffsetEuler();

  constexpr void __cordl_internal_set_baseForwardOffsetEuler(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x134a2b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1348dc0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* transform);

  /// @brief Method get_forward, addr 0x1349c60, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_forward();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IKSolverLookAt__LookAtBone();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IKSolverLookAt__LookAtBone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IKSolverLookAt__LookAtBone(__IKSolverLookAt__LookAtBone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IKSolverLookAt__LookAtBone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IKSolverLookAt__LookAtBone(__IKSolverLookAt__LookAtBone const&) = delete;

  /// @brief Field baseForwardOffsetEuler, offset: 0x74, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___baseForwardOffsetEuler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone, 0x80>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone, ___baseForwardOffsetEuler) == 0x74, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::IKSolverLookAt
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 200, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::IKSolverLookAt*
class CORDL_TYPE IKSolverLookAt : public ::RootMotion::FinalIK::IKSolver {
public:
  // Declarations
  using LookAtBone = ::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone;

  /// @brief Field bodyWeight, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_bodyWeight, put = __cordl_internal_set_bodyWeight)) float_t bodyWeight;

  /// @brief Field clampSmoothing, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_clampSmoothing, put = __cordl_internal_set_clampSmoothing)) int32_t clampSmoothing;

  /// @brief Field clampWeight, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_clampWeight, put = __cordl_internal_set_clampWeight)) float_t clampWeight;

  /// @brief Field clampWeightEyes, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_clampWeightEyes, put = __cordl_internal_set_clampWeightEyes)) float_t clampWeightEyes;

  /// @brief Field clampWeightHead, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_clampWeightHead, put = __cordl_internal_set_clampWeightHead)) float_t clampWeightHead;

  /// @brief Field eyeForward, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_eyeForward, put = __cordl_internal_set_eyeForward))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> eyeForward;

  /// @brief Field eyes, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_eyes,
                      put = __cordl_internal_set_eyes))::ArrayW<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*, ::Array<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*>*> eyes;

  __declspec(property(get = get_eyesIsEmpty)) bool eyesIsEmpty;

  __declspec(property(get = get_eyesIsValid)) bool eyesIsValid;

  /// @brief Field eyesWeight, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_eyesWeight, put = __cordl_internal_set_eyesWeight)) float_t eyesWeight;

  /// @brief Field head, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_head, put = __cordl_internal_set_head))::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone* head;

  /// @brief Field headForwards, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_headForwards, put = __cordl_internal_set_headForwards))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> headForwards;

  __declspec(property(get = get_headIsEmpty)) bool headIsEmpty;

  __declspec(property(get = get_headIsValid)) bool headIsValid;

  /// @brief Field headWeight, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_headWeight, put = __cordl_internal_set_headWeight)) float_t headWeight;

  /// @brief Field spine, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_spine,
                      put = __cordl_internal_set_spine))::ArrayW<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*, ::Array<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*>*> spine;

  /// @brief Field spineForwards, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_spineForwards, put = __cordl_internal_set_spineForwards))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> spineForwards;

  __declspec(property(get = get_spineIsEmpty)) bool spineIsEmpty;

  __declspec(property(get = get_spineIsValid)) bool spineIsValid;

  /// @brief Field spineTargetOffset, offset 0xa0, size 0xc
  __declspec(property(get = __cordl_internal_get_spineTargetOffset, put = __cordl_internal_set_spineTargetOffset))::UnityEngine::Vector3 spineTargetOffset;

  /// @brief Field spineWeightCurve, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_spineWeightCurve, put = __cordl_internal_set_spineWeightCurve))::UnityEngine::AnimationCurve* spineWeightCurve;

  /// @brief Field target, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_target, put = __cordl_internal_set_target))::UnityW<::UnityEngine::Transform> target;

  /// @brief Method FixTransforms, addr 0x13482e8, size 0x12c, virtual true, abstract: false, final false
  inline void FixTransforms();

  /// @brief Method GetForwards, addr 0x1349c90, size 0x318, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> GetForwards(ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> forwards,
                                                                                        ::UnityEngine::Vector3 baseForward, ::UnityEngine::Vector3 targetForward, int32_t bones, float_t clamp);

  /// @brief Method GetPoint, addr 0x1348a44, size 0x160, virtual true, abstract: false, final false
  inline ::RootMotion::FinalIK::__IKSolver__Point* GetPoint(::UnityEngine::Transform* transform);

  /// @brief Method GetPoints, addr 0x1348820, size 0x224, virtual true, abstract: false, final false
  inline ::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*, ::Array<::RootMotion::FinalIK::__IKSolver__Point*>*> GetPoints();

  /// @brief Method IsValid, addr 0x1348414, size 0x1b0, virtual true, abstract: false, final false
  inline bool IsValid(ByRef<::StringW> message);

  static inline ::RootMotion::FinalIK::IKSolverLookAt* New_ctor();

  /// @brief Method OnInitiate, addr 0x1348de8, size 0x288, virtual true, abstract: false, final false
  inline void OnInitiate();

  /// @brief Method OnUpdate, addr 0x134915c, size 0xc4, virtual true, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method SetBones, addr 0x1348c54, size 0x16c, virtual false, abstract: false, final false
  inline void SetBones(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> array,
                       ByRef<::ArrayW<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*, ::Array<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*>*>> bones);

  /// @brief Method SetChain, addr 0x1348ba4, size 0xb0, virtual false, abstract: false, final false
  inline bool SetChain(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> spine, ::UnityEngine::Transform* head,
                       ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> eyes, ::UnityEngine::Transform* root);

  /// @brief Method SetLookAtWeight, addr 0x1348040, size 0x1c, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight);

  /// @brief Method SetLookAtWeight, addr 0x134805c, size 0x2c, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight);

  /// @brief Method SetLookAtWeight, addr 0x1348088, size 0x38, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight);

  /// @brief Method SetLookAtWeight, addr 0x13480c0, size 0x48, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight);

  /// @brief Method SetLookAtWeight, addr 0x1348108, size 0x58, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight, float_t clampWeight);

  /// @brief Method SetLookAtWeight, addr 0x1348160, size 0x70, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight, float_t clampWeight, float_t clampWeightHead, float_t clampWeightEyes);

  /// @brief Method SolveEyes, addr 0x1349784, size 0x4dc, virtual false, abstract: false, final false
  inline void SolveEyes();

  /// @brief Method SolveHead, addr 0x134943c, size 0x348, virtual false, abstract: false, final false
  inline void SolveHead();

  /// @brief Method SolveSpine, addr 0x1349220, size 0x21c, virtual false, abstract: false, final false
  inline void SolveSpine();

  /// @brief Method StoreDefaultLocalState, addr 0x13481d0, size 0x118, virtual true, abstract: false, final false
  inline void StoreDefaultLocalState();

  constexpr float_t const& __cordl_internal_get_bodyWeight() const;

  constexpr float_t& __cordl_internal_get_bodyWeight();

  constexpr int32_t const& __cordl_internal_get_clampSmoothing() const;

  constexpr int32_t& __cordl_internal_get_clampSmoothing();

  constexpr float_t const& __cordl_internal_get_clampWeight() const;

  constexpr float_t& __cordl_internal_get_clampWeight();

  constexpr float_t const& __cordl_internal_get_clampWeightEyes() const;

  constexpr float_t& __cordl_internal_get_clampWeightEyes();

  constexpr float_t const& __cordl_internal_get_clampWeightHead() const;

  constexpr float_t& __cordl_internal_get_clampWeightHead();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_eyeForward() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_eyeForward();

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*, ::Array<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*>*> const& __cordl_internal_get_eyes() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*, ::Array<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*>*>& __cordl_internal_get_eyes();

  constexpr float_t const& __cordl_internal_get_eyesWeight() const;

  constexpr float_t& __cordl_internal_get_eyesWeight();

  constexpr ::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*& __cordl_internal_get_head();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*> const& __cordl_internal_get_head() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_headForwards() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_headForwards();

  constexpr float_t const& __cordl_internal_get_headWeight() const;

  constexpr float_t& __cordl_internal_get_headWeight();

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*, ::Array<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*>*> const& __cordl_internal_get_spine() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*, ::Array<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*>*>& __cordl_internal_get_spine();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_spineForwards() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_spineForwards();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_spineTargetOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_spineTargetOffset();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_spineWeightCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_spineWeightCurve() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target();

  constexpr void __cordl_internal_set_bodyWeight(float_t value);

  constexpr void __cordl_internal_set_clampSmoothing(int32_t value);

  constexpr void __cordl_internal_set_clampWeight(float_t value);

  constexpr void __cordl_internal_set_clampWeightEyes(float_t value);

  constexpr void __cordl_internal_set_clampWeightHead(float_t value);

  constexpr void __cordl_internal_set_eyeForward(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_eyes(::ArrayW<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*, ::Array<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*>*> value);

  constexpr void __cordl_internal_set_eyesWeight(float_t value);

  constexpr void __cordl_internal_set_head(::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone* value);

  constexpr void __cordl_internal_set_headForwards(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_headWeight(float_t value);

  constexpr void __cordl_internal_set_spine(::ArrayW<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*, ::Array<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*>*> value);

  constexpr void __cordl_internal_set_spineForwards(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_spineTargetOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_spineWeightCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x134a0b0, size 0x208, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_eyesIsEmpty, addr 0x13487fc, size 0x24, virtual false, abstract: false, final false
  inline bool get_eyesIsEmpty();

  /// @brief Method get_eyesIsValid, addr 0x13486a0, size 0xcc, virtual false, abstract: false, final false
  inline bool get_eyesIsValid();

  /// @brief Method get_headIsEmpty, addr 0x1348790, size 0x6c, virtual false, abstract: false, final false
  inline bool get_headIsEmpty();

  /// @brief Method get_headIsValid, addr 0x1348690, size 0x10, virtual false, abstract: false, final false
  inline bool get_headIsValid();

  /// @brief Method get_spineIsEmpty, addr 0x134876c, size 0x24, virtual false, abstract: false, final false
  inline bool get_spineIsEmpty();

  /// @brief Method get_spineIsValid, addr 0x13485c4, size 0xcc, virtual false, abstract: false, final false
  inline bool get_spineIsValid();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IKSolverLookAt();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IKSolverLookAt", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKSolverLookAt(IKSolverLookAt&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKSolverLookAt", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKSolverLookAt(IKSolverLookAt const&) = delete;

  /// @brief Field target, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___target;

  /// @brief Field spine, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*, ::Array<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*>*> ___spine;

  /// @brief Field head, offset: 0x68, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone* ___head;

  /// @brief Field eyes, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*, ::Array<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*>*> ___eyes;

  /// @brief Field bodyWeight, offset: 0x78, size: 0x4, def value: None
  float_t ___bodyWeight;

  /// @brief Field headWeight, offset: 0x7c, size: 0x4, def value: None
  float_t ___headWeight;

  /// @brief Field eyesWeight, offset: 0x80, size: 0x4, def value: None
  float_t ___eyesWeight;

  /// @brief Field clampWeight, offset: 0x84, size: 0x4, def value: None
  float_t ___clampWeight;

  /// @brief Field clampWeightHead, offset: 0x88, size: 0x4, def value: None
  float_t ___clampWeightHead;

  /// @brief Field clampWeightEyes, offset: 0x8c, size: 0x4, def value: None
  float_t ___clampWeightEyes;

  /// @brief Field clampSmoothing, offset: 0x90, size: 0x4, def value: None
  int32_t ___clampSmoothing;

  /// @brief Field spineWeightCurve, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___spineWeightCurve;

  /// @brief Field spineTargetOffset, offset: 0xa0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___spineTargetOffset;

  /// @brief Field spineForwards, offset: 0xb0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___spineForwards;

  /// @brief Field headForwards, offset: 0xb8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___headForwards;

  /// @brief Field eyeForward, offset: 0xc0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___eyeForward;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::IKSolverLookAt, 0xc8>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLookAt, ___target) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLookAt, ___spine) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLookAt, ___head) == 0x68, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLookAt, ___eyes) == 0x70, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLookAt, ___bodyWeight) == 0x78, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLookAt, ___headWeight) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLookAt, ___eyesWeight) == 0x80, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLookAt, ___clampWeight) == 0x84, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLookAt, ___clampWeightHead) == 0x88, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLookAt, ___clampWeightEyes) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLookAt, ___clampSmoothing) == 0x90, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLookAt, ___spineWeightCurve) == 0x98, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLookAt, ___spineTargetOffset) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLookAt, ___spineForwards) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLookAt, ___headForwards) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverLookAt, ___eyeForward) == 0xc0, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::IKSolverLookAt);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverLookAt*, "RootMotion.FinalIK", "IKSolverLookAt");
NEED_NO_BOX(::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*, "RootMotion.FinalIK", "IKSolverLookAt/LookAtBone");
