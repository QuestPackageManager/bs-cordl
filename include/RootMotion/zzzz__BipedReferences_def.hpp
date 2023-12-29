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
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion {
struct __BipedReferences__AutoDetectParams;
}
namespace RootMotion {
struct __BipedNaming__BoneType;
}
namespace RootMotion {
struct __BipedNaming__BoneSide;
}
namespace UnityEngine {
struct Quaternion;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12415))
// CS Name: ::BipedReferences::AutoDetectParams
struct CORDL_TYPE __BipedReferences__AutoDetectParams {
public:
  // Declarations
  /// @brief Method .ctor addr 0x11cc990 size 0x14 virtual false final false
  inline void _ctor(bool legsParentInSpine, bool includeEyes);

  /// @brief Method get_Default addr 0x11cc9a4 size 0x8 virtual false final false
  static inline ::RootMotion::__BipedReferences__AutoDetectParams get_Default();

  // Ctor Parameters [CppParam { name: "legsParentInSpine", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "includeEyes", ty: "bool", modifiers: "", def_value: None }]
  constexpr __BipedReferences__AutoDetectParams(bool legsParentInSpine, bool includeEyes) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BipedReferences__AutoDetectParams();

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12416))
// CS Name: ::RootMotion::BipedReferences*
class CORDL_TYPE BipedReferences : public ::System::Object {
public:
  // Declarations
  using AutoDetectParams = ::RootMotion::__BipedReferences__AutoDetectParams;

  /// @brief Field root, offset 0x10, size 0x8
  __declspec(property(get = __get_root, put = __set_root))::UnityEngine::Transform* root;

  /// @brief Field pelvis, offset 0x18, size 0x8
  __declspec(property(get = __get_pelvis, put = __set_pelvis))::UnityEngine::Transform* pelvis;

  /// @brief Field leftThigh, offset 0x20, size 0x8
  __declspec(property(get = __get_leftThigh, put = __set_leftThigh))::UnityEngine::Transform* leftThigh;

  /// @brief Field leftCalf, offset 0x28, size 0x8
  __declspec(property(get = __get_leftCalf, put = __set_leftCalf))::UnityEngine::Transform* leftCalf;

  /// @brief Field leftFoot, offset 0x30, size 0x8
  __declspec(property(get = __get_leftFoot, put = __set_leftFoot))::UnityEngine::Transform* leftFoot;

  /// @brief Field rightThigh, offset 0x38, size 0x8
  __declspec(property(get = __get_rightThigh, put = __set_rightThigh))::UnityEngine::Transform* rightThigh;

  /// @brief Field rightCalf, offset 0x40, size 0x8
  __declspec(property(get = __get_rightCalf, put = __set_rightCalf))::UnityEngine::Transform* rightCalf;

  /// @brief Field rightFoot, offset 0x48, size 0x8
  __declspec(property(get = __get_rightFoot, put = __set_rightFoot))::UnityEngine::Transform* rightFoot;

  /// @brief Field leftUpperArm, offset 0x50, size 0x8
  __declspec(property(get = __get_leftUpperArm, put = __set_leftUpperArm))::UnityEngine::Transform* leftUpperArm;

  /// @brief Field leftForearm, offset 0x58, size 0x8
  __declspec(property(get = __get_leftForearm, put = __set_leftForearm))::UnityEngine::Transform* leftForearm;

  /// @brief Field leftHand, offset 0x60, size 0x8
  __declspec(property(get = __get_leftHand, put = __set_leftHand))::UnityEngine::Transform* leftHand;

  /// @brief Field rightUpperArm, offset 0x68, size 0x8
  __declspec(property(get = __get_rightUpperArm, put = __set_rightUpperArm))::UnityEngine::Transform* rightUpperArm;

  /// @brief Field rightForearm, offset 0x70, size 0x8
  __declspec(property(get = __get_rightForearm, put = __set_rightForearm))::UnityEngine::Transform* rightForearm;

  /// @brief Field rightHand, offset 0x78, size 0x8
  __declspec(property(get = __get_rightHand, put = __set_rightHand))::UnityEngine::Transform* rightHand;

  /// @brief Field head, offset 0x80, size 0x8
  __declspec(property(get = __get_head, put = __set_head))::UnityEngine::Transform* head;

  /// @brief Field spine, offset 0x88, size 0x8
  __declspec(property(get = __get_spine, put = __set_spine))::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> spine;

  /// @brief Field eyes, offset 0x90, size 0x8
  __declspec(property(get = __get_eyes, put = __set_eyes))::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> eyes;

  __declspec(property(get = get_isFilled)) bool isFilled;

  __declspec(property(get = get_isEmpty)) bool isEmpty;

  constexpr ::UnityEngine::Transform*& __get_root();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_root() const;

  constexpr void __set_root(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_pelvis();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_pelvis() const;

  constexpr void __set_pelvis(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_leftThigh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_leftThigh() const;

  constexpr void __set_leftThigh(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_leftCalf();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_leftCalf() const;

  constexpr void __set_leftCalf(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_leftFoot();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_leftFoot() const;

  constexpr void __set_leftFoot(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_rightThigh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_rightThigh() const;

  constexpr void __set_rightThigh(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_rightCalf();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_rightCalf() const;

  constexpr void __set_rightCalf(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_rightFoot();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_rightFoot() const;

  constexpr void __set_rightFoot(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_leftUpperArm();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_leftUpperArm() const;

  constexpr void __set_leftUpperArm(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_leftForearm();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_leftForearm() const;

  constexpr void __set_leftForearm(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_leftHand();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_leftHand() const;

  constexpr void __set_leftHand(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_rightUpperArm();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_rightUpperArm() const;

  constexpr void __set_rightUpperArm(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_rightForearm();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_rightForearm() const;

  constexpr void __set_rightForearm(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_rightHand();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_rightHand() const;

  constexpr void __set_rightHand(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_head();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_head() const;

  constexpr void __set_head(::UnityEngine::Transform* value);

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>& __get_spine();

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> const& __get_spine() const;

  constexpr void __set_spine(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value);

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>& __get_eyes();

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> const& __get_eyes() const;

  constexpr void __set_eyes(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value);

  /// @brief Method get_isFilled addr 0x11c9088 size 0x35c virtual true final false
  inline bool get_isFilled();

  /// @brief Method get_isEmpty addr 0x11c93e4 size 0x10 virtual false final false
  inline bool get_isEmpty();

  /// @brief Method IsEmpty addr 0x11c93f4 size 0x38c virtual true final false
  inline bool IsEmpty(bool includeRoot);

  /// @brief Method Contains addr 0x11c9780 size 0x390 virtual true final false
  inline bool Contains(::UnityEngine::Transform* t, bool ignoreRoot);

  /// @brief Method AutoDetectReferences addr 0x11c9b10 size 0x1f8 virtual false final false
  static inline bool AutoDetectReferences(ByRef<::RootMotion::BipedReferences*> references, ::UnityEngine::Transform* root, ::RootMotion::__BipedReferences__AutoDetectParams autoDetectParams);

  /// @brief Method DetectReferencesByNaming addr 0x11ca134 size 0x748 virtual false final false
  static inline void DetectReferencesByNaming(ByRef<::RootMotion::BipedReferences*> references, ::UnityEngine::Transform* root, ::RootMotion::__BipedReferences__AutoDetectParams autoDetectParams);

  /// @brief Method AssignHumanoidReferences addr 0x11c9d70 size 0x3c4 virtual false final false
  static inline void AssignHumanoidReferences(ByRef<::RootMotion::BipedReferences*> references, ::UnityEngine::Animator* animator, ::RootMotion::__BipedReferences__AutoDetectParams autoDetectParams);

  /// @brief Method SetupError addr 0x11ca930 size 0xe0 virtual false final false
  static inline bool SetupError(::RootMotion::BipedReferences* references, ByRef<::StringW> errorMessage);

  /// @brief Method SetupWarning addr 0x11caa10 size 0x9c virtual false final false
  static inline bool SetupWarning(::RootMotion::BipedReferences* references, ByRef<::StringW> warningMessage);

  /// @brief Method IsNeckBone addr 0x11cb488 size 0xe0 virtual false final false
  static inline bool IsNeckBone(::UnityEngine::Transform* bone, ::UnityEngine::Transform* leftUpperArm);

  /// @brief Method AddBoneToEyes addr 0x11cb2a8 size 0xf4 virtual false final false
  static inline bool AddBoneToEyes(::UnityEngine::Transform* bone, ByRef<::RootMotion::BipedReferences*> references, ::RootMotion::__BipedReferences__AutoDetectParams autoDetectParams);

  /// @brief Method AddBoneToSpine addr 0x11cb048 size 0x150 virtual false final false
  static inline bool AddBoneToSpine(::UnityEngine::Transform* bone, ByRef<::RootMotion::BipedReferences*> references, ::RootMotion::__BipedReferences__AutoDetectParams autoDetectParams);

  /// @brief Method DetectLimb addr 0x11caaac size 0xdc virtual false final false
  static inline void DetectLimb(::RootMotion::__BipedNaming__BoneType boneType, ::RootMotion::__BipedNaming__BoneSide boneSide, ByRef<::UnityEngine::Transform*> firstBone,
                                ByRef<::UnityEngine::Transform*> secondBone, ByRef<::UnityEngine::Transform*> lastBone,
                                ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> transforms);

  /// @brief Method AddBoneToHierarchy addr 0x11cb39c size 0xec virtual false final false
  static inline void AddBoneToHierarchy(ByRef<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>> bones, ::UnityEngine::Transform* transform);

  /// @brief Method LimbError addr 0x11cb568 size 0x580 virtual false final false
  static inline bool LimbError(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3, ByRef<::StringW> errorMessage);

  /// @brief Method LimbWarning addr 0x11cc028 size 0x2d4 virtual false final false
  static inline bool LimbWarning(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3, ByRef<::StringW> warningMessage);

  /// @brief Method SpineError addr 0x11cbae8 size 0x354 virtual false final false
  static inline bool SpineError(::RootMotion::BipedReferences* references, ByRef<::StringW> errorMessage);

  /// @brief Method SpineWarning addr 0x11cc2fc size 0x8 virtual false final false
  static inline bool SpineWarning(::RootMotion::BipedReferences* references, ByRef<::StringW> warningMessage);

  /// @brief Method EyesError addr 0x11cbe3c size 0x1ec virtual false final false
  static inline bool EyesError(::RootMotion::BipedReferences* references, ByRef<::StringW> errorMessage);

  /// @brief Method EyesWarning addr 0x11cc304 size 0x8 virtual false final false
  static inline bool EyesWarning(::RootMotion::BipedReferences* references, ByRef<::StringW> warningMessage);

  /// @brief Method RootHeightWarning addr 0x11cc30c size 0x1b4 virtual false final false
  static inline bool RootHeightWarning(::RootMotion::BipedReferences* references, ByRef<::StringW> warningMessage);

  /// @brief Method FacingAxisWarning addr 0x11cc4c0 size 0x2d8 virtual false final false
  static inline bool FacingAxisWarning(::RootMotion::BipedReferences* references, ByRef<::StringW> warningMessage);

  /// @brief Method GetVerticalOffset addr 0x11cc928 size 0x68 virtual false final false
  static inline float_t GetVerticalOffset(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::UnityEngine::Quaternion rotation);

  static inline ::RootMotion::BipedReferences* New_ctor();

  /// @brief Method .ctor addr 0x11c9d08 size 0x68 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BipedReferences", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BipedReferences(BipedReferences&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BipedReferences", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BipedReferences(BipedReferences const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BipedReferences();

public:
  /// @brief Field root, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Transform* ___root;

  /// @brief Field pelvis, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* ___pelvis;

  /// @brief Field leftThigh, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ___leftThigh;

  /// @brief Field leftCalf, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Transform* ___leftCalf;

  /// @brief Field leftFoot, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Transform* ___leftFoot;

  /// @brief Field rightThigh, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Transform* ___rightThigh;

  /// @brief Field rightCalf, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Transform* ___rightCalf;

  /// @brief Field rightFoot, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Transform* ___rightFoot;

  /// @brief Field leftUpperArm, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Transform* ___leftUpperArm;

  /// @brief Field leftForearm, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Transform* ___leftForearm;

  /// @brief Field leftHand, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Transform* ___leftHand;

  /// @brief Field rightUpperArm, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Transform* ___rightUpperArm;

  /// @brief Field rightForearm, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Transform* ___rightForearm;

  /// @brief Field rightHand, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Transform* ___rightHand;

  /// @brief Field head, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Transform* ___head;

  /// @brief Field spine, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> ___spine;

  /// @brief Field eyes, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> ___eyes;

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
