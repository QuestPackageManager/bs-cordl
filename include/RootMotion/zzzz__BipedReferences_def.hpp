#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(BipedReferences)
namespace RootMotion {
struct __BipedNaming__BoneSide;
}
namespace RootMotion {
struct __BipedNaming__BoneType;
}
namespace RootMotion {
struct __BipedReferences__AutoDetectParams;
}
namespace UnityEngine {
class Animator;
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
namespace RootMotion {
class BipedReferences;
}
namespace RootMotion {
struct __BipedReferences__AutoDetectParams;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::BipedReferences);
MARK_VAL_T(::RootMotion::__BipedReferences__AutoDetectParams);
// Type: ::AutoDetectParams
// SizeInfo { instance_size: 2, native_size: 8, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: true
// CS Name: ::BipedReferences::AutoDetectParams
struct CORDL_TYPE __BipedReferences__AutoDetectParams {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x1318d58, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(bool legsParentInSpine, bool includeEyes);

  /// @brief Method get_Default, addr 0x1318d6c, size 0x8, virtual false, abstract: false, final false
  static inline ::RootMotion::__BipedReferences__AutoDetectParams get_Default();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BipedReferences__AutoDetectParams();

  // Ctor Parameters [CppParam { name: "legsParentInSpine", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "includeEyes", ty: "bool", modifiers: "", def_value: None }]
  constexpr __BipedReferences__AutoDetectParams(bool legsParentInSpine, bool includeEyes) noexcept;

  /// @brief Field legsParentInSpine, offset: 0x0, size: 0x1, def value: None
  bool legsParentInSpine;

  /// @brief Field includeEyes, offset: 0x1, size: 0x1, def value: None
  bool includeEyes;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::__BipedReferences__AutoDetectParams, 0x2>, "Size mismatch!");

static_assert(offsetof(::RootMotion::__BipedReferences__AutoDetectParams, legsParentInSpine) == 0x0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::__BipedReferences__AutoDetectParams, includeEyes) == 0x1, "Offset mismatch!");

} // namespace RootMotion
// Type: RootMotion::BipedReferences
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: false
// CS Name: ::RootMotion::BipedReferences*
class CORDL_TYPE BipedReferences : public ::System::Object {
public:
  // Declarations
  using AutoDetectParams = ::RootMotion::__BipedReferences__AutoDetectParams;

  /// @brief Field eyes, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_eyes, put = __cordl_internal_set_eyes))::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> eyes;

  /// @brief Field head, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_head, put = __cordl_internal_set_head))::UnityW<::UnityEngine::Transform> head;

  __declspec(property(get = get_isEmpty)) bool isEmpty;

  __declspec(property(get = get_isFilled)) bool isFilled;

  /// @brief Field leftCalf, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_leftCalf, put = __cordl_internal_set_leftCalf))::UnityW<::UnityEngine::Transform> leftCalf;

  /// @brief Field leftFoot, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_leftFoot, put = __cordl_internal_set_leftFoot))::UnityW<::UnityEngine::Transform> leftFoot;

  /// @brief Field leftForearm, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_leftForearm, put = __cordl_internal_set_leftForearm))::UnityW<::UnityEngine::Transform> leftForearm;

  /// @brief Field leftHand, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_leftHand, put = __cordl_internal_set_leftHand))::UnityW<::UnityEngine::Transform> leftHand;

  /// @brief Field leftThigh, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_leftThigh, put = __cordl_internal_set_leftThigh))::UnityW<::UnityEngine::Transform> leftThigh;

  /// @brief Field leftUpperArm, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_leftUpperArm, put = __cordl_internal_set_leftUpperArm))::UnityW<::UnityEngine::Transform> leftUpperArm;

  /// @brief Field pelvis, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_pelvis, put = __cordl_internal_set_pelvis))::UnityW<::UnityEngine::Transform> pelvis;

  /// @brief Field rightCalf, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_rightCalf, put = __cordl_internal_set_rightCalf))::UnityW<::UnityEngine::Transform> rightCalf;

  /// @brief Field rightFoot, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_rightFoot, put = __cordl_internal_set_rightFoot))::UnityW<::UnityEngine::Transform> rightFoot;

  /// @brief Field rightForearm, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_rightForearm, put = __cordl_internal_set_rightForearm))::UnityW<::UnityEngine::Transform> rightForearm;

  /// @brief Field rightHand, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_rightHand, put = __cordl_internal_set_rightHand))::UnityW<::UnityEngine::Transform> rightHand;

  /// @brief Field rightThigh, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_rightThigh, put = __cordl_internal_set_rightThigh))::UnityW<::UnityEngine::Transform> rightThigh;

  /// @brief Field rightUpperArm, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_rightUpperArm, put = __cordl_internal_set_rightUpperArm))::UnityW<::UnityEngine::Transform> rightUpperArm;

  /// @brief Field root, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_root, put = __cordl_internal_set_root))::UnityW<::UnityEngine::Transform> root;

  /// @brief Field spine, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_spine, put = __cordl_internal_set_spine))::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> spine;

  /// @brief Method AddBoneToEyes, addr 0x1317670, size 0xf4, virtual false, abstract: false, final false
  static inline bool AddBoneToEyes(::UnityEngine::Transform* bone, ByRef<::RootMotion::BipedReferences*> references, ::RootMotion::__BipedReferences__AutoDetectParams autoDetectParams);

  /// @brief Method AddBoneToHierarchy, addr 0x1317764, size 0xec, virtual false, abstract: false, final false
  static inline void AddBoneToHierarchy(ByRef<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>> bones, ::UnityEngine::Transform* transform);

  /// @brief Method AddBoneToSpine, addr 0x1317410, size 0x150, virtual false, abstract: false, final false
  static inline bool AddBoneToSpine(::UnityEngine::Transform* bone, ByRef<::RootMotion::BipedReferences*> references, ::RootMotion::__BipedReferences__AutoDetectParams autoDetectParams);

  /// @brief Method AssignHumanoidReferences, addr 0x1316138, size 0x3c4, virtual false, abstract: false, final false
  static inline void AssignHumanoidReferences(ByRef<::RootMotion::BipedReferences*> references, ::UnityEngine::Animator* animator, ::RootMotion::__BipedReferences__AutoDetectParams autoDetectParams);

  /// @brief Method AutoDetectReferences, addr 0x1315ed8, size 0x1f8, virtual false, abstract: false, final false
  static inline bool AutoDetectReferences(ByRef<::RootMotion::BipedReferences*> references, ::UnityEngine::Transform* root, ::RootMotion::__BipedReferences__AutoDetectParams autoDetectParams);

  /// @brief Method Contains, addr 0x1315b48, size 0x390, virtual true, abstract: false, final false
  inline bool Contains(::UnityEngine::Transform* t, bool ignoreRoot);

  /// @brief Method DetectLimb, addr 0x1316e74, size 0xdc, virtual false, abstract: false, final false
  static inline void DetectLimb(::RootMotion::__BipedNaming__BoneType boneType, ::RootMotion::__BipedNaming__BoneSide boneSide, ByRef<::UnityEngine::Transform*> firstBone,
                                ByRef<::UnityEngine::Transform*> secondBone, ByRef<::UnityEngine::Transform*> lastBone,
                                ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> transforms);

  /// @brief Method DetectReferencesByNaming, addr 0x13164fc, size 0x748, virtual false, abstract: false, final false
  static inline void DetectReferencesByNaming(ByRef<::RootMotion::BipedReferences*> references, ::UnityEngine::Transform* root, ::RootMotion::__BipedReferences__AutoDetectParams autoDetectParams);

  /// @brief Method EyesError, addr 0x1318204, size 0x1ec, virtual false, abstract: false, final false
  static inline bool EyesError(::RootMotion::BipedReferences* references, ByRef<::StringW> errorMessage);

  /// @brief Method EyesWarning, addr 0x13186cc, size 0x8, virtual false, abstract: false, final false
  static inline bool EyesWarning(::RootMotion::BipedReferences* references, ByRef<::StringW> warningMessage);

  /// @brief Method FacingAxisWarning, addr 0x1318888, size 0x2d8, virtual false, abstract: false, final false
  static inline bool FacingAxisWarning(::RootMotion::BipedReferences* references, ByRef<::StringW> warningMessage);

  /// @brief Method GetVerticalOffset, addr 0x1318cf0, size 0x68, virtual false, abstract: false, final false
  static inline float_t GetVerticalOffset(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::UnityEngine::Quaternion rotation);

  /// @brief Method IsEmpty, addr 0x13157bc, size 0x38c, virtual true, abstract: false, final false
  inline bool IsEmpty(bool includeRoot);

  /// @brief Method IsNeckBone, addr 0x1317850, size 0xe0, virtual false, abstract: false, final false
  static inline bool IsNeckBone(::UnityEngine::Transform* bone, ::UnityEngine::Transform* leftUpperArm);

  /// @brief Method LimbError, addr 0x1317930, size 0x580, virtual false, abstract: false, final false
  static inline bool LimbError(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3, ByRef<::StringW> errorMessage);

  /// @brief Method LimbWarning, addr 0x13183f0, size 0x2d4, virtual false, abstract: false, final false
  static inline bool LimbWarning(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3, ByRef<::StringW> warningMessage);

  static inline ::RootMotion::BipedReferences* New_ctor();

  /// @brief Method RootHeightWarning, addr 0x13186d4, size 0x1b4, virtual false, abstract: false, final false
  static inline bool RootHeightWarning(::RootMotion::BipedReferences* references, ByRef<::StringW> warningMessage);

  /// @brief Method SetupError, addr 0x1316cf8, size 0xe0, virtual false, abstract: false, final false
  static inline bool SetupError(::RootMotion::BipedReferences* references, ByRef<::StringW> errorMessage);

  /// @brief Method SetupWarning, addr 0x1316dd8, size 0x9c, virtual false, abstract: false, final false
  static inline bool SetupWarning(::RootMotion::BipedReferences* references, ByRef<::StringW> warningMessage);

  /// @brief Method SpineError, addr 0x1317eb0, size 0x354, virtual false, abstract: false, final false
  static inline bool SpineError(::RootMotion::BipedReferences* references, ByRef<::StringW> errorMessage);

  /// @brief Method SpineWarning, addr 0x13186c4, size 0x8, virtual false, abstract: false, final false
  static inline bool SpineWarning(::RootMotion::BipedReferences* references, ByRef<::StringW> warningMessage);

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get_eyes() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get_eyes();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_head() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_head();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftCalf() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftCalf();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftFoot() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftFoot();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftForearm() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftForearm();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftHand() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftHand();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftThigh() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftThigh();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftUpperArm() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftUpperArm();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pelvis() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pelvis();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightCalf() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightCalf();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightFoot() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightFoot();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightForearm() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightForearm();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightHand() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightHand();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightThigh() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightThigh();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightUpperArm() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightUpperArm();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_root() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_root();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get_spine() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get_spine();

  constexpr void __cordl_internal_set_eyes(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  constexpr void __cordl_internal_set_head(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_leftCalf(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_leftFoot(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_leftForearm(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_leftHand(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_leftThigh(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_leftUpperArm(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_pelvis(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_rightCalf(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_rightFoot(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_rightForearm(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_rightHand(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_rightThigh(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_rightUpperArm(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_root(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_spine(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  /// @brief Method .ctor, addr 0x13160d0, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isEmpty, addr 0x13157ac, size 0x10, virtual false, abstract: false, final false
  inline bool get_isEmpty();

  /// @brief Method get_isFilled, addr 0x1315450, size 0x35c, virtual true, abstract: false, final false
  inline bool get_isFilled();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BipedReferences();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BipedReferences", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BipedReferences(BipedReferences&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BipedReferences", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BipedReferences(BipedReferences const&) = delete;

  /// @brief Field root, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___root;

  /// @brief Field pelvis, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___pelvis;

  /// @brief Field leftThigh, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftThigh;

  /// @brief Field leftCalf, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftCalf;

  /// @brief Field leftFoot, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftFoot;

  /// @brief Field rightThigh, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightThigh;

  /// @brief Field rightCalf, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightCalf;

  /// @brief Field rightFoot, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightFoot;

  /// @brief Field leftUpperArm, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftUpperArm;

  /// @brief Field leftForearm, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftForearm;

  /// @brief Field leftHand, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftHand;

  /// @brief Field rightUpperArm, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightUpperArm;

  /// @brief Field rightForearm, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightForearm;

  /// @brief Field rightHand, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightHand;

  /// @brief Field head, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___head;

  /// @brief Field spine, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ___spine;

  /// @brief Field eyes, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ___eyes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::BipedReferences, 0x98>, "Size mismatch!");

static_assert(offsetof(::RootMotion::BipedReferences, ___root) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BipedReferences, ___pelvis) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BipedReferences, ___leftThigh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BipedReferences, ___leftCalf) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BipedReferences, ___leftFoot) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BipedReferences, ___rightThigh) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BipedReferences, ___rightCalf) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BipedReferences, ___rightFoot) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BipedReferences, ___leftUpperArm) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BipedReferences, ___leftForearm) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BipedReferences, ___leftHand) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BipedReferences, ___rightUpperArm) == 0x68, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BipedReferences, ___rightForearm) == 0x70, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BipedReferences, ___rightHand) == 0x78, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BipedReferences, ___head) == 0x80, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BipedReferences, ___spine) == 0x88, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BipedReferences, ___eyes) == 0x90, "Offset mismatch!");

} // namespace RootMotion
NEED_NO_BOX(::RootMotion::BipedReferences);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::BipedReferences*, "RootMotion", "BipedReferences");
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::__BipedReferences__AutoDetectParams, "RootMotion", "BipedReferences/AutoDetectParams");
