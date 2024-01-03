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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12560)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12579))
// CS Name: ::IKSolverLookAt::LookAtBone*
class CORDL_TYPE __IKSolverLookAt__LookAtBone : public ::RootMotion::FinalIK::__IKSolver__Bone {
public:
  // Declarations
  /// @brief Field baseForwardOffsetEuler, offset 0x74, size 0xc
  __declspec(property(get = __get_baseForwardOffsetEuler, put = __set_baseForwardOffsetEuler))::UnityEngine::Vector3 baseForwardOffsetEuler;

  __declspec(property(get = get_forward))::UnityEngine::Vector3 forward;

  constexpr ::UnityEngine::Vector3& __get_baseForwardOffsetEuler();

  constexpr ::UnityEngine::Vector3 const& __get_baseForwardOffsetEuler() const;

  constexpr void __set_baseForwardOffsetEuler(::UnityEngine::Vector3 value);

  static inline ::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone* New_ctor();

  /// @brief Method .ctor, addr 0x126f21c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone* New_ctor(::UnityEngine::Transform* transform);

  /// @brief Method .ctor, addr 0x126dd24, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* transform);

  /// @brief Method Initiate, addr 0x126dfd4, size 0xec, virtual false, abstract: false, final false
  inline void Initiate(::UnityEngine::Transform* root);

  /// @brief Method LookAt, addr 0x126ef0c, size 0x108, virtual false, abstract: false, final false
  inline void LookAt(::UnityEngine::Vector3 direction, float_t weight);

  /// @brief Method get_forward, addr 0x126ebc4, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_forward();

  // Ctor Parameters [CppParam { name: "", ty: "__IKSolverLookAt__LookAtBone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IKSolverLookAt__LookAtBone(__IKSolverLookAt__LookAtBone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IKSolverLookAt__LookAtBone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IKSolverLookAt__LookAtBone(__IKSolverLookAt__LookAtBone const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IKSolverLookAt__LookAtBone();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(12564))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12580))
// CS Name: ::RootMotion.FinalIK::IKSolverLookAt*
class CORDL_TYPE IKSolverLookAt : public ::RootMotion::FinalIK::IKSolver {
public:
  // Declarations
  using LookAtBone = ::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone;

  /// @brief Field target, offset 0x58, size 0x8
  __declspec(property(get = __get_target, put = __set_target))::UnityEngine::Transform* target;

  /// @brief Field spine, offset 0x60, size 0x8
  __declspec(property(get = __get_spine, put = __set_spine))::ArrayW<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*, ::Array<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*>*> spine;

  /// @brief Field head, offset 0x68, size 0x8
  __declspec(property(get = __get_head, put = __set_head))::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone* head;

  /// @brief Field eyes, offset 0x70, size 0x8
  __declspec(property(get = __get_eyes, put = __set_eyes))::ArrayW<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*, ::Array<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*>*> eyes;

  /// @brief Field bodyWeight, offset 0x78, size 0x4
  __declspec(property(get = __get_bodyWeight, put = __set_bodyWeight)) float_t bodyWeight;

  /// @brief Field headWeight, offset 0x7c, size 0x4
  __declspec(property(get = __get_headWeight, put = __set_headWeight)) float_t headWeight;

  /// @brief Field eyesWeight, offset 0x80, size 0x4
  __declspec(property(get = __get_eyesWeight, put = __set_eyesWeight)) float_t eyesWeight;

  /// @brief Field clampWeight, offset 0x84, size 0x4
  __declspec(property(get = __get_clampWeight, put = __set_clampWeight)) float_t clampWeight;

  /// @brief Field clampWeightHead, offset 0x88, size 0x4
  __declspec(property(get = __get_clampWeightHead, put = __set_clampWeightHead)) float_t clampWeightHead;

  /// @brief Field clampWeightEyes, offset 0x8c, size 0x4
  __declspec(property(get = __get_clampWeightEyes, put = __set_clampWeightEyes)) float_t clampWeightEyes;

  /// @brief Field clampSmoothing, offset 0x90, size 0x4
  __declspec(property(get = __get_clampSmoothing, put = __set_clampSmoothing)) int32_t clampSmoothing;

  /// @brief Field spineWeightCurve, offset 0x98, size 0x8
  __declspec(property(get = __get_spineWeightCurve, put = __set_spineWeightCurve))::UnityEngine::AnimationCurve* spineWeightCurve;

  /// @brief Field spineTargetOffset, offset 0xa0, size 0xc
  __declspec(property(get = __get_spineTargetOffset, put = __set_spineTargetOffset))::UnityEngine::Vector3 spineTargetOffset;

  /// @brief Field spineForwards, offset 0xb0, size 0x8
  __declspec(property(get = __get_spineForwards, put = __set_spineForwards))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> spineForwards;

  /// @brief Field headForwards, offset 0xb8, size 0x8
  __declspec(property(get = __get_headForwards, put = __set_headForwards))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> headForwards;

  /// @brief Field eyeForward, offset 0xc0, size 0x8
  __declspec(property(get = __get_eyeForward, put = __set_eyeForward))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> eyeForward;

  __declspec(property(get = get_spineIsValid)) bool spineIsValid;

  __declspec(property(get = get_spineIsEmpty)) bool spineIsEmpty;

  __declspec(property(get = get_headIsValid)) bool headIsValid;

  __declspec(property(get = get_headIsEmpty)) bool headIsEmpty;

  __declspec(property(get = get_eyesIsValid)) bool eyesIsValid;

  __declspec(property(get = get_eyesIsEmpty)) bool eyesIsEmpty;

  constexpr ::UnityEngine::Transform*& __get_target();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_target() const;

  constexpr void __set_target(::UnityEngine::Transform* value);

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*, ::Array<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*>*>& __get_spine();

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*, ::Array<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*>*> const& __get_spine() const;

  constexpr void __set_spine(::ArrayW<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*, ::Array<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*>*> value);

  constexpr ::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*& __get_head();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*> const& __get_head() const;

  constexpr void __set_head(::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone* value);

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*, ::Array<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*>*>& __get_eyes();

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*, ::Array<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*>*> const& __get_eyes() const;

  constexpr void __set_eyes(::ArrayW<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*, ::Array<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*>*> value);

  constexpr float_t& __get_bodyWeight();

  constexpr float_t const& __get_bodyWeight() const;

  constexpr void __set_bodyWeight(float_t value);

  constexpr float_t& __get_headWeight();

  constexpr float_t const& __get_headWeight() const;

  constexpr void __set_headWeight(float_t value);

  constexpr float_t& __get_eyesWeight();

  constexpr float_t const& __get_eyesWeight() const;

  constexpr void __set_eyesWeight(float_t value);

  constexpr float_t& __get_clampWeight();

  constexpr float_t const& __get_clampWeight() const;

  constexpr void __set_clampWeight(float_t value);

  constexpr float_t& __get_clampWeightHead();

  constexpr float_t const& __get_clampWeightHead() const;

  constexpr void __set_clampWeightHead(float_t value);

  constexpr float_t& __get_clampWeightEyes();

  constexpr float_t const& __get_clampWeightEyes() const;

  constexpr void __set_clampWeightEyes(float_t value);

  constexpr int32_t& __get_clampSmoothing();

  constexpr int32_t const& __get_clampSmoothing() const;

  constexpr void __set_clampSmoothing(int32_t value);

  constexpr ::UnityEngine::AnimationCurve*& __get_spineWeightCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get_spineWeightCurve() const;

  constexpr void __set_spineWeightCurve(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::Vector3& __get_spineTargetOffset();

  constexpr ::UnityEngine::Vector3 const& __get_spineTargetOffset() const;

  constexpr void __set_spineTargetOffset(::UnityEngine::Vector3 value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get_spineForwards();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get_spineForwards() const;

  constexpr void __set_spineForwards(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get_headForwards();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get_headForwards() const;

  constexpr void __set_headForwards(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get_eyeForward();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get_eyeForward() const;

  constexpr void __set_eyeForward(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  /// @brief Method SetLookAtWeight, addr 0x126cfa4, size 0x1c, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight);

  /// @brief Method SetLookAtWeight, addr 0x126cfc0, size 0x2c, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight);

  /// @brief Method SetLookAtWeight, addr 0x126cfec, size 0x38, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight);

  /// @brief Method SetLookAtWeight, addr 0x126d024, size 0x48, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight);

  /// @brief Method SetLookAtWeight, addr 0x126d06c, size 0x58, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight, float_t clampWeight);

  /// @brief Method SetLookAtWeight, addr 0x126d0c4, size 0x70, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight, float_t clampWeight, float_t clampWeightHead, float_t clampWeightEyes);

  /// @brief Method StoreDefaultLocalState, addr 0x126d134, size 0x118, virtual true, abstract: false, final false
  inline void StoreDefaultLocalState();

  /// @brief Method FixTransforms, addr 0x126d24c, size 0x12c, virtual true, abstract: false, final false
  inline void FixTransforms();

  /// @brief Method IsValid, addr 0x126d378, size 0x1b0, virtual true, abstract: false, final false
  inline bool IsValid(ByRef<::StringW> message);

  /// @brief Method GetPoints, addr 0x126d784, size 0x224, virtual true, abstract: false, final false
  inline ::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*, ::Array<::RootMotion::FinalIK::__IKSolver__Point*>*> GetPoints();

  /// @brief Method GetPoint, addr 0x126d9a8, size 0x160, virtual true, abstract: false, final false
  inline ::RootMotion::FinalIK::__IKSolver__Point* GetPoint(::UnityEngine::Transform* transform);

  /// @brief Method SetChain, addr 0x126db08, size 0xb0, virtual false, abstract: false, final false
  inline bool SetChain(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> spine, ::UnityEngine::Transform* head,
                       ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> eyes, ::UnityEngine::Transform* root);

  /// @brief Method OnInitiate, addr 0x126dd4c, size 0x288, virtual true, abstract: false, final false
  inline void OnInitiate();

  /// @brief Method OnUpdate, addr 0x126e0c0, size 0xc4, virtual true, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method get_spineIsValid, addr 0x126d528, size 0xcc, virtual false, abstract: false, final false
  inline bool get_spineIsValid();

  /// @brief Method get_spineIsEmpty, addr 0x126d6d0, size 0x24, virtual false, abstract: false, final false
  inline bool get_spineIsEmpty();

  /// @brief Method SolveSpine, addr 0x126e184, size 0x21c, virtual false, abstract: false, final false
  inline void SolveSpine();

  /// @brief Method get_headIsValid, addr 0x126d5f4, size 0x10, virtual false, abstract: false, final false
  inline bool get_headIsValid();

  /// @brief Method get_headIsEmpty, addr 0x126d6f4, size 0x6c, virtual false, abstract: false, final false
  inline bool get_headIsEmpty();

  /// @brief Method SolveHead, addr 0x126e3a0, size 0x348, virtual false, abstract: false, final false
  inline void SolveHead();

  /// @brief Method get_eyesIsValid, addr 0x126d604, size 0xcc, virtual false, abstract: false, final false
  inline bool get_eyesIsValid();

  /// @brief Method get_eyesIsEmpty, addr 0x126d760, size 0x24, virtual false, abstract: false, final false
  inline bool get_eyesIsEmpty();

  /// @brief Method SolveEyes, addr 0x126e6e8, size 0x4dc, virtual false, abstract: false, final false
  inline void SolveEyes();

  /// @brief Method GetForwards, addr 0x126ebf4, size 0x318, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> GetForwards(ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> forwards,
                                                                                        ::UnityEngine::Vector3 baseForward, ::UnityEngine::Vector3 targetForward, int32_t bones, float_t clamp);

  /// @brief Method SetBones, addr 0x126dbb8, size 0x16c, virtual false, abstract: false, final false
  inline void SetBones(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> array,
                       ByRef<::ArrayW<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*, ::Array<::RootMotion::FinalIK::__IKSolverLookAt__LookAtBone*>*>> bones);

  static inline ::RootMotion::FinalIK::IKSolverLookAt* New_ctor();

  /// @brief Method .ctor, addr 0x126f014, size 0x208, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "IKSolverLookAt", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKSolverLookAt(IKSolverLookAt&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKSolverLookAt", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKSolverLookAt(IKSolverLookAt const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IKSolverLookAt();

public:
  /// @brief Field target, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Transform* ___target;

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
