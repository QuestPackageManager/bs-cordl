#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BipedNaming)
namespace RootMotion {
struct __BipedNaming__BoneSide;
}
namespace RootMotion {
struct __BipedNaming__BoneType;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion {
struct __BipedNaming__BoneSide;
}
namespace RootMotion {
struct __BipedNaming__BoneType;
}
namespace RootMotion {
class BipedNaming;
}
// Write type traits
MARK_VAL_T(::RootMotion::__BipedNaming__BoneSide);
MARK_VAL_T(::RootMotion::__BipedNaming__BoneType);
MARK_REF_PTR_T(::RootMotion::BipedNaming);
// Type: ::BoneType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: true
// CS Name: ::BipedNaming::BoneType
struct CORDL_TYPE __BipedNaming__BoneType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BipedNaming__BoneType_Unwrapped
  enum struct ____BipedNaming__BoneType_Unwrapped : int32_t {
    __E_Unassigned = static_cast<int32_t>(0x0),
    __E_Spine = static_cast<int32_t>(0x1),
    __E_Head = static_cast<int32_t>(0x2),
    __E_Arm = static_cast<int32_t>(0x3),
    __E_Leg = static_cast<int32_t>(0x4),
    __E_Tail = static_cast<int32_t>(0x5),
    __E_Eye = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BipedNaming__BoneType_Unwrapped() const noexcept {
    return static_cast<____BipedNaming__BoneType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BipedNaming__BoneType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BipedNaming__BoneType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Arm value: static_cast<int32_t>(0x3)
  static ::RootMotion::__BipedNaming__BoneType const Arm;

  /// @brief Field Eye value: static_cast<int32_t>(0x6)
  static ::RootMotion::__BipedNaming__BoneType const Eye;

  /// @brief Field Head value: static_cast<int32_t>(0x2)
  static ::RootMotion::__BipedNaming__BoneType const Head;

  /// @brief Field Leg value: static_cast<int32_t>(0x4)
  static ::RootMotion::__BipedNaming__BoneType const Leg;

  /// @brief Field Spine value: static_cast<int32_t>(0x1)
  static ::RootMotion::__BipedNaming__BoneType const Spine;

  /// @brief Field Tail value: static_cast<int32_t>(0x5)
  static ::RootMotion::__BipedNaming__BoneType const Tail;

  /// @brief Field Unassigned value: static_cast<int32_t>(0x0)
  static ::RootMotion::__BipedNaming__BoneType const Unassigned;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::__BipedNaming__BoneType, 0x4>, "Size mismatch!");

static_assert(offsetof(::RootMotion::__BipedNaming__BoneType, value__) == 0x0, "Offset mismatch!");

} // namespace RootMotion
// Type: ::BoneSide
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: true
// CS Name: ::BipedNaming::BoneSide
struct CORDL_TYPE __BipedNaming__BoneSide {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BipedNaming__BoneSide_Unwrapped
  enum struct ____BipedNaming__BoneSide_Unwrapped : int32_t {
    __E_Center = static_cast<int32_t>(0x0),
    __E_Left = static_cast<int32_t>(0x1),
    __E_Right = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BipedNaming__BoneSide_Unwrapped() const noexcept {
    return static_cast<____BipedNaming__BoneSide_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BipedNaming__BoneSide();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BipedNaming__BoneSide(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Center value: static_cast<int32_t>(0x0)
  static ::RootMotion::__BipedNaming__BoneSide const Center;

  /// @brief Field Left value: static_cast<int32_t>(0x1)
  static ::RootMotion::__BipedNaming__BoneSide const Left;

  /// @brief Field Right value: static_cast<int32_t>(0x2)
  static ::RootMotion::__BipedNaming__BoneSide const Right;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::__BipedNaming__BoneSide, 0x4>, "Size mismatch!");

static_assert(offsetof(::RootMotion::__BipedNaming__BoneSide, value__) == 0x0, "Offset mismatch!");

} // namespace RootMotion
// Type: RootMotion::BipedNaming
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: false
// CS Name: ::RootMotion::BipedNaming*
class CORDL_TYPE BipedNaming : public ::System::Object {
public:
  // Declarations
  using BoneSide = ::RootMotion::__BipedNaming__BoneSide;

  using BoneType = ::RootMotion::__BipedNaming__BoneType;

  /// @brief Field foot, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_foot, put = setStaticF_foot))::ArrayW<::StringW, ::Array<::StringW>*> foot;

  /// @brief Field hand, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_hand, put = setStaticF_hand))::ArrayW<::StringW, ::Array<::StringW>*> hand;

  /// @brief Field pelvis, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_pelvis, put = setStaticF_pelvis))::ArrayW<::StringW, ::Array<::StringW>*> pelvis;

  /// @brief Field typeArm, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_typeArm, put = setStaticF_typeArm))::ArrayW<::StringW, ::Array<::StringW>*> typeArm;

  /// @brief Field typeExclude, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_typeExclude, put = setStaticF_typeExclude))::ArrayW<::StringW, ::Array<::StringW>*> typeExclude;

  /// @brief Field typeExcludeArm, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_typeExcludeArm, put = setStaticF_typeExcludeArm))::ArrayW<::StringW, ::Array<::StringW>*> typeExcludeArm;

  /// @brief Field typeExcludeEye, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_typeExcludeEye, put = setStaticF_typeExcludeEye))::ArrayW<::StringW, ::Array<::StringW>*> typeExcludeEye;

  /// @brief Field typeExcludeHead, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_typeExcludeHead, put = setStaticF_typeExcludeHead))::ArrayW<::StringW, ::Array<::StringW>*> typeExcludeHead;

  /// @brief Field typeExcludeLeg, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_typeExcludeLeg, put = setStaticF_typeExcludeLeg))::ArrayW<::StringW, ::Array<::StringW>*> typeExcludeLeg;

  /// @brief Field typeExcludeSpine, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_typeExcludeSpine, put = setStaticF_typeExcludeSpine))::ArrayW<::StringW, ::Array<::StringW>*> typeExcludeSpine;

  /// @brief Field typeExcludeTail, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_typeExcludeTail, put = setStaticF_typeExcludeTail))::ArrayW<::StringW, ::Array<::StringW>*> typeExcludeTail;

  /// @brief Field typeEye, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_typeEye, put = setStaticF_typeEye))::ArrayW<::StringW, ::Array<::StringW>*> typeEye;

  /// @brief Field typeHead, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_typeHead, put = setStaticF_typeHead))::ArrayW<::StringW, ::Array<::StringW>*> typeHead;

  /// @brief Field typeLeft, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_typeLeft, put = setStaticF_typeLeft))::ArrayW<::StringW, ::Array<::StringW>*> typeLeft;

  /// @brief Field typeLeg, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_typeLeg, put = setStaticF_typeLeg))::ArrayW<::StringW, ::Array<::StringW>*> typeLeg;

  /// @brief Field typeRight, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_typeRight, put = setStaticF_typeRight))::ArrayW<::StringW, ::Array<::StringW>*> typeRight;

  /// @brief Field typeSpine, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_typeSpine, put = setStaticF_typeSpine))::ArrayW<::StringW, ::Array<::StringW>*> typeSpine;

  /// @brief Field typeTail, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_typeTail, put = setStaticF_typeTail))::ArrayW<::StringW, ::Array<::StringW>*> typeTail;

  /// @brief Method GetBone, addr 0x133b6a8, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> GetBone(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> transforms, ::RootMotion::__BipedNaming__BoneType boneType,
                                                           ::RootMotion::__BipedNaming__BoneSide boneSide,
                                                           ::ArrayW<::ArrayW<::StringW, ::Array<::StringW>*>, ::Array<::ArrayW<::StringW, ::Array<::StringW>*>>*> namings);

  /// @brief Method GetBoneSide, addr 0x133ade0, size 0x88, virtual false, abstract: false, final false
  static inline ::RootMotion::__BipedNaming__BoneSide GetBoneSide(::StringW boneName);

  /// @brief Method GetBoneType, addr 0x133ab1c, size 0x118, virtual false, abstract: false, final false
  static inline ::RootMotion::__BipedNaming__BoneType GetBoneType(::StringW boneName);

  /// @brief Method GetBonesOfSide, addr 0x133ac34, size 0x1ac, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>
  GetBonesOfSide(::RootMotion::__BipedNaming__BoneSide boneSide, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> bones);

  /// @brief Method GetBonesOfType, addr 0x133a970, size 0x1ac, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>
  GetBonesOfType(::RootMotion::__BipedNaming__BoneType boneType, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> bones);

  /// @brief Method GetBonesOfTypeAndSide, addr 0x133ae68, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>
  GetBonesOfTypeAndSide(::RootMotion::__BipedNaming__BoneType boneType, ::RootMotion::__BipedNaming__BoneSide boneSide, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> bones);

  /// @brief Method GetFirstBoneOfTypeAndSide, addr 0x133aedc, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> GetFirstBoneOfTypeAndSide(::RootMotion::__BipedNaming__BoneType boneType, ::RootMotion::__BipedNaming__BoneSide boneSide,
                                                                             ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> bones);

  /// @brief Method GetNamingMatch, addr 0x133af70, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> GetNamingMatch(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> transforms,
                                                                  ::ArrayW<::ArrayW<::StringW, ::Array<::StringW>*>, ::Array<::ArrayW<::StringW, ::Array<::StringW>*>>*> namings);

  /// @brief Method LastLetterIs, addr 0x133b9b0, size 0x34, virtual false, abstract: false, final false
  static inline bool LastLetterIs(::StringW boneName, ::StringW letter);

  /// @brief Method excludesNaming, addr 0x133b80c, size 0x84, virtual false, abstract: false, final false
  static inline bool excludesNaming(::StringW boneName, ::ArrayW<::StringW, ::Array<::StringW>*> namingConvention);

  /// @brief Method firstLetter, addr 0x133b798, size 0x74, virtual false, abstract: false, final false
  static inline ::StringW firstLetter(::StringW boneName);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_foot();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_hand();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_pelvis();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_typeArm();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_typeExclude();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_typeExcludeArm();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_typeExcludeEye();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_typeExcludeHead();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_typeExcludeLeg();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_typeExcludeSpine();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_typeExcludeTail();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_typeEye();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_typeHead();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_typeLeft();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_typeLeg();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_typeRight();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_typeSpine();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_typeTail();

  /// @brief Method isArm, addr 0x133b290, size 0x9c, virtual false, abstract: false, final false
  static inline bool isArm(::StringW boneName);

  /// @brief Method isEye, addr 0x133b464, size 0x9c, virtual false, abstract: false, final false
  static inline bool isEye(::StringW boneName);

  /// @brief Method isHead, addr 0x133b1f4, size 0x9c, virtual false, abstract: false, final false
  static inline bool isHead(::StringW boneName);

  /// @brief Method isLeft, addr 0x133b500, size 0xd4, virtual false, abstract: false, final false
  static inline bool isLeft(::StringW boneName);

  /// @brief Method isLeg, addr 0x133b32c, size 0x9c, virtual false, abstract: false, final false
  static inline bool isLeg(::StringW boneName);

  /// @brief Method isRight, addr 0x133b5d4, size 0xd4, virtual false, abstract: false, final false
  static inline bool isRight(::StringW boneName);

  /// @brief Method isSpine, addr 0x133b158, size 0x9c, virtual false, abstract: false, final false
  static inline bool isSpine(::StringW boneName);

  /// @brief Method isTail, addr 0x133b3c8, size 0x9c, virtual false, abstract: false, final false
  static inline bool isTail(::StringW boneName);

  /// @brief Method isTypeExclude, addr 0x133b890, size 0x60, virtual false, abstract: false, final false
  static inline bool isTypeExclude(::StringW boneName);

  /// @brief Method lastLetter, addr 0x133b728, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW lastLetter(::StringW boneName);

  /// @brief Method matchesLastLetter, addr 0x133b8f0, size 0xc0, virtual false, abstract: false, final false
  static inline bool matchesLastLetter(::StringW boneName, ::ArrayW<::StringW, ::Array<::StringW>*> namingConvention);

  /// @brief Method matchesNaming, addr 0x133b084, size 0xd4, virtual false, abstract: false, final false
  static inline bool matchesNaming(::StringW boneName, ::ArrayW<::StringW, ::Array<::StringW>*> namingConvention);

  static inline void setStaticF_foot(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_hand(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_pelvis(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_typeArm(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_typeExclude(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_typeExcludeArm(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_typeExcludeEye(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_typeExcludeHead(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_typeExcludeLeg(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_typeExcludeSpine(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_typeExcludeTail(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_typeEye(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_typeHead(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_typeLeft(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_typeLeg(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_typeRight(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_typeSpine(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_typeTail(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BipedNaming();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BipedNaming", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BipedNaming(BipedNaming&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BipedNaming", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BipedNaming(BipedNaming const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::BipedNaming, 0x10>, "Size mismatch!");

} // namespace RootMotion
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::__BipedNaming__BoneSide, "RootMotion", "BipedNaming/BoneSide");
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::__BipedNaming__BoneType, "RootMotion", "BipedNaming/BoneType");
NEED_NO_BOX(::RootMotion::BipedNaming);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::BipedNaming*, "RootMotion", "BipedNaming");
