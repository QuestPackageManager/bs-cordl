#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_def.hpp"
#include "RootMotion/FinalIK/zzzz__OffsetModifier_def.hpp"
#include "RootMotion/FinalIK/zzzz__Recoil_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Recoil)
namespace RootMotion::FinalIK {
class __Recoil__RecoilOffset;
}
namespace RootMotion::FinalIK {
class AimIK;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace RootMotion::FinalIK {
class IKEffector;
}
namespace UnityEngine {
struct Quaternion;
}
namespace RootMotion::FinalIK {
struct __Recoil__Handedness;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class __Recoil__RecoilOffset__EffectorLink;
}
namespace RootMotion::FinalIK {
class IKSolverFullBodyBiped;
}
// Forward declare root types
namespace RootMotion::FinalIK {
struct __Recoil__Handedness;
}
namespace GlobalNamespace {
class __Recoil__RecoilOffset__EffectorLink;
}
namespace RootMotion::FinalIK {
class Recoil;
}
namespace RootMotion::FinalIK {
class __Recoil__RecoilOffset;
}
// Write type traits
MARK_VAL_T(::RootMotion::FinalIK::__Recoil__Handedness);
MARK_REF_PTR_T(::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink);
MARK_REF_PTR_T(::RootMotion::FinalIK::Recoil);
MARK_REF_PTR_T(::RootMotion::FinalIK::__Recoil__RecoilOffset);
// Type: ::EffectorLink
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(12571))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12664))
// CS Name: ::Recoil::RecoilOffset::EffectorLink*
class CORDL_TYPE __Recoil__RecoilOffset__EffectorLink : public ::System::Object {
public:
  // Declarations
  /// @brief Field effector, offset 0x10, size 0x4
  __declspec(property(get = __get_effector, put = __set_effector))::RootMotion::FinalIK::FullBodyBipedEffector effector;

  /// @brief Field weight, offset 0x14, size 0x4
  __declspec(property(get = __get_weight, put = __set_weight)) float_t weight;

  constexpr ::RootMotion::FinalIK::FullBodyBipedEffector& __get_effector();

  constexpr ::RootMotion::FinalIK::FullBodyBipedEffector const& __get_effector() const;

  constexpr void __set_effector(::RootMotion::FinalIK::FullBodyBipedEffector value);

  constexpr float_t& __get_weight();

  constexpr float_t const& __get_weight() const;

  constexpr void __set_weight(float_t value);

  static inline ::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink* New_ctor();

  /// @brief Method .ctor addr 0x129a374 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Recoil__RecoilOffset__EffectorLink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Recoil__RecoilOffset__EffectorLink(__Recoil__RecoilOffset__EffectorLink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Recoil__RecoilOffset__EffectorLink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Recoil__RecoilOffset__EffectorLink(__Recoil__RecoilOffset__EffectorLink const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Recoil__RecoilOffset__EffectorLink();

public:
  /// @brief Field effector, offset: 0x10, size: 0x4, def value: None
  ::RootMotion::FinalIK::FullBodyBipedEffector ___effector;

  /// @brief Field weight, offset: 0x14, size: 0x4, def value: None
  float_t ___weight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::RecoilOffset
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12665))
// CS Name: ::Recoil::RecoilOffset*
class CORDL_TYPE __Recoil__RecoilOffset : public ::System::Object {
public:
  // Declarations
  using EffectorLink = ::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink;

  /// @brief Field offset, offset 0x10, size 0xc
  __declspec(property(get = __get_offset, put = __set_offset))::UnityEngine::Vector3 offset;

  /// @brief Field additivity, offset 0x1c, size 0x4
  __declspec(property(get = __get_additivity, put = __set_additivity)) float_t additivity;

  /// @brief Field maxAdditiveOffsetMag, offset 0x20, size 0x4
  __declspec(property(get = __get_maxAdditiveOffsetMag, put = __set_maxAdditiveOffsetMag)) float_t maxAdditiveOffsetMag;

  /// @brief Field effectorLinks, offset 0x28, size 0x8
  __declspec(property(get = __get_effectorLinks,
                      put = __set_effectorLinks))::ArrayW<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*, ::Array<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*>*> effectorLinks;

  /// @brief Field additiveOffset, offset 0x30, size 0xc
  __declspec(property(get = __get_additiveOffset, put = __set_additiveOffset))::UnityEngine::Vector3 additiveOffset;

  /// @brief Field lastOffset, offset 0x3c, size 0xc
  __declspec(property(get = __get_lastOffset, put = __set_lastOffset))::UnityEngine::Vector3 lastOffset;

  constexpr ::UnityEngine::Vector3& __get_offset();

  constexpr ::UnityEngine::Vector3 const& __get_offset() const;

  constexpr void __set_offset(::UnityEngine::Vector3 value);

  constexpr float_t& __get_additivity();

  constexpr float_t const& __get_additivity() const;

  constexpr void __set_additivity(float_t value);

  constexpr float_t& __get_maxAdditiveOffsetMag();

  constexpr float_t const& __get_maxAdditiveOffsetMag() const;

  constexpr void __set_maxAdditiveOffsetMag(float_t value);

  constexpr ::ArrayW<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*, ::Array<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*>*>& __get_effectorLinks();

  constexpr ::ArrayW<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*, ::Array<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*>*> const& __get_effectorLinks() const;

  constexpr void __set_effectorLinks(::ArrayW<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*, ::Array<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*>*> value);

  constexpr ::UnityEngine::Vector3& __get_additiveOffset();

  constexpr ::UnityEngine::Vector3 const& __get_additiveOffset() const;

  constexpr void __set_additiveOffset(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_lastOffset();

  constexpr ::UnityEngine::Vector3 const& __get_lastOffset() const;

  constexpr void __set_lastOffset(::UnityEngine::Vector3 value);

  /// @brief Method Start addr 0x12991c4 size 0xd4 virtual false final false
  inline void Start();

  /// @brief Method Apply addr 0x1299d20 size 0x1cc virtual false final false
  inline void Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, ::UnityEngine::Quaternion rotation, float_t masterWeight, float_t length, float_t timeLeft);

  static inline ::RootMotion::FinalIK::__Recoil__RecoilOffset* New_ctor();

  /// @brief Method .ctor addr 0x129a360 size 0x14 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Recoil__RecoilOffset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Recoil__RecoilOffset(__Recoil__RecoilOffset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Recoil__RecoilOffset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Recoil__RecoilOffset(__Recoil__RecoilOffset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Recoil__RecoilOffset();

public:
  /// @brief Field offset, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___offset;

  /// @brief Field additivity, offset: 0x1c, size: 0x4, def value: None
  float_t ___additivity;

  /// @brief Field maxAdditiveOffsetMag, offset: 0x20, size: 0x4, def value: None
  float_t ___maxAdditiveOffsetMag;

  /// @brief Field effectorLinks, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*, ::Array<::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*>*> ___effectorLinks;

  /// @brief Field additiveOffset, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___additiveOffset;

  /// @brief Field lastOffset, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lastOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__Recoil__RecoilOffset, 0x48>, "Size mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::Handedness
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12666))
// CS Name: ::Recoil::Handedness
struct CORDL_TYPE __Recoil__Handedness {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Recoil__Handedness_Unwrapped
  enum struct ____Recoil__Handedness_Unwrapped : int32_t {
    __E_Right = static_cast<int32_t>(0x0),
    __E_Left = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Recoil__Handedness_Unwrapped() const noexcept {
    return static_cast<____Recoil__Handedness_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Recoil__Handedness(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Recoil__Handedness();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Right value: static_cast<int32_t>(0x0)
  static ::RootMotion::FinalIK::__Recoil__Handedness const Right;

  /// @brief Field Left value: static_cast<int32_t>(0x1)
  static ::RootMotion::FinalIK::__Recoil__Handedness const Left;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__Recoil__Handedness, 0x4>, "Size mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::Recoil
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 240, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12656)), TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(12666)),
// TypeDefinitionIndex(TypeDefinitionIndex(10252))} Self: TypeDefinitionIndex(TypeDefinitionIndex(12667)) CS Name: ::RootMotion.FinalIK::Recoil*
class CORDL_TYPE Recoil : public ::RootMotion::FinalIK::OffsetModifier {
public:
  // Declarations
  using Handedness = ::RootMotion::FinalIK::__Recoil__Handedness;

  using RecoilOffset = ::RootMotion::FinalIK::__Recoil__RecoilOffset;

  /// @brief Field aimIK, offset 0x30, size 0x8
  __declspec(property(get = __get_aimIK, put = __set_aimIK))::RootMotion::FinalIK::AimIK* aimIK;

  /// @brief Field aimIKSolvedLast, offset 0x38, size 0x1
  __declspec(property(get = __get_aimIKSolvedLast, put = __set_aimIKSolvedLast)) bool aimIKSolvedLast;

  /// @brief Field handedness, offset 0x3c, size 0x4
  __declspec(property(get = __get_handedness, put = __set_handedness))::RootMotion::FinalIK::__Recoil__Handedness handedness;

  /// @brief Field twoHanded, offset 0x40, size 0x1
  __declspec(property(get = __get_twoHanded, put = __set_twoHanded)) bool twoHanded;

  /// @brief Field recoilWeight, offset 0x48, size 0x8
  __declspec(property(get = __get_recoilWeight, put = __set_recoilWeight))::UnityEngine::AnimationCurve* recoilWeight;

  /// @brief Field magnitudeRandom, offset 0x50, size 0x4
  __declspec(property(get = __get_magnitudeRandom, put = __set_magnitudeRandom)) float_t magnitudeRandom;

  /// @brief Field rotationRandom, offset 0x54, size 0xc
  __declspec(property(get = __get_rotationRandom, put = __set_rotationRandom))::UnityEngine::Vector3 rotationRandom;

  /// @brief Field handRotationOffset, offset 0x60, size 0xc
  __declspec(property(get = __get_handRotationOffset, put = __set_handRotationOffset))::UnityEngine::Vector3 handRotationOffset;

  /// @brief Field blendTime, offset 0x6c, size 0x4
  __declspec(property(get = __get_blendTime, put = __set_blendTime)) float_t blendTime;

  /// @brief Field offsets, offset 0x70, size 0x8
  __declspec(property(get = __get_offsets, put = __set_offsets))::ArrayW<::RootMotion::FinalIK::__Recoil__RecoilOffset*, ::Array<::RootMotion::FinalIK::__Recoil__RecoilOffset*>*> offsets;

  /// @brief Field rotationOffset, offset 0x78, size 0x10
  __declspec(property(get = __get_rotationOffset, put = __set_rotationOffset))::UnityEngine::Quaternion rotationOffset;

  /// @brief Field magnitudeMlp, offset 0x88, size 0x4
  __declspec(property(get = __get_magnitudeMlp, put = __set_magnitudeMlp)) float_t magnitudeMlp;

  /// @brief Field endTime, offset 0x8c, size 0x4
  __declspec(property(get = __get_endTime, put = __set_endTime)) float_t endTime;

  /// @brief Field handRotation, offset 0x90, size 0x10
  __declspec(property(get = __get_handRotation, put = __set_handRotation))::UnityEngine::Quaternion handRotation;

  /// @brief Field secondaryHandRelativeRotation, offset 0xa0, size 0x10
  __declspec(property(get = __get_secondaryHandRelativeRotation, put = __set_secondaryHandRelativeRotation))::UnityEngine::Quaternion secondaryHandRelativeRotation;

  /// @brief Field randomRotation, offset 0xb0, size 0x10
  __declspec(property(get = __get_randomRotation, put = __set_randomRotation))::UnityEngine::Quaternion randomRotation;

  /// @brief Field length, offset 0xc0, size 0x4
  __declspec(property(get = __get_length, put = __set_length)) float_t length;

  /// @brief Field initiated, offset 0xc4, size 0x1
  __declspec(property(get = __get_initiated, put = __set_initiated)) bool initiated;

  /// @brief Field blendWeight, offset 0xc8, size 0x4
  __declspec(property(get = __get_blendWeight, put = __set_blendWeight)) float_t blendWeight;

  /// @brief Field w, offset 0xcc, size 0x4
  __declspec(property(get = __get_w, put = __set_w)) float_t w;

  /// @brief Field primaryHandRotation, offset 0xd0, size 0x10
  __declspec(property(get = __get_primaryHandRotation, put = __set_primaryHandRotation))::UnityEngine::Quaternion primaryHandRotation;

  /// @brief Field handRotationsSet, offset 0xe0, size 0x1
  __declspec(property(get = __get_handRotationsSet, put = __set_handRotationsSet)) bool handRotationsSet;

  /// @brief Field aimIKAxis, offset 0xe4, size 0xc
  __declspec(property(get = __get_aimIKAxis, put = __set_aimIKAxis))::UnityEngine::Vector3 aimIKAxis;

  __declspec(property(get = get_isFinished)) bool isFinished;

  __declspec(property(get = get_primaryHandEffector))::RootMotion::FinalIK::IKEffector* primaryHandEffector;

  __declspec(property(get = get_secondaryHandEffector))::RootMotion::FinalIK::IKEffector* secondaryHandEffector;

  __declspec(property(get = get_primaryHand))::UnityEngine::Transform* primaryHand;

  __declspec(property(get = get_secondaryHand))::UnityEngine::Transform* secondaryHand;

  constexpr ::RootMotion::FinalIK::AimIK*& __get_aimIK();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::AimIK*> const& __get_aimIK() const;

  constexpr void __set_aimIK(::RootMotion::FinalIK::AimIK* value);

  constexpr bool& __get_aimIKSolvedLast();

  constexpr bool const& __get_aimIKSolvedLast() const;

  constexpr void __set_aimIKSolvedLast(bool value);

  constexpr ::RootMotion::FinalIK::__Recoil__Handedness& __get_handedness();

  constexpr ::RootMotion::FinalIK::__Recoil__Handedness const& __get_handedness() const;

  constexpr void __set_handedness(::RootMotion::FinalIK::__Recoil__Handedness value);

  constexpr bool& __get_twoHanded();

  constexpr bool const& __get_twoHanded() const;

  constexpr void __set_twoHanded(bool value);

  constexpr ::UnityEngine::AnimationCurve*& __get_recoilWeight();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get_recoilWeight() const;

  constexpr void __set_recoilWeight(::UnityEngine::AnimationCurve* value);

  constexpr float_t& __get_magnitudeRandom();

  constexpr float_t const& __get_magnitudeRandom() const;

  constexpr void __set_magnitudeRandom(float_t value);

  constexpr ::UnityEngine::Vector3& __get_rotationRandom();

  constexpr ::UnityEngine::Vector3 const& __get_rotationRandom() const;

  constexpr void __set_rotationRandom(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_handRotationOffset();

  constexpr ::UnityEngine::Vector3 const& __get_handRotationOffset() const;

  constexpr void __set_handRotationOffset(::UnityEngine::Vector3 value);

  constexpr float_t& __get_blendTime();

  constexpr float_t const& __get_blendTime() const;

  constexpr void __set_blendTime(float_t value);

  constexpr ::ArrayW<::RootMotion::FinalIK::__Recoil__RecoilOffset*, ::Array<::RootMotion::FinalIK::__Recoil__RecoilOffset*>*>& __get_offsets();

  constexpr ::ArrayW<::RootMotion::FinalIK::__Recoil__RecoilOffset*, ::Array<::RootMotion::FinalIK::__Recoil__RecoilOffset*>*> const& __get_offsets() const;

  constexpr void __set_offsets(::ArrayW<::RootMotion::FinalIK::__Recoil__RecoilOffset*, ::Array<::RootMotion::FinalIK::__Recoil__RecoilOffset*>*> value);

  constexpr ::UnityEngine::Quaternion& __get_rotationOffset();

  constexpr ::UnityEngine::Quaternion const& __get_rotationOffset() const;

  constexpr void __set_rotationOffset(::UnityEngine::Quaternion value);

  constexpr float_t& __get_magnitudeMlp();

  constexpr float_t const& __get_magnitudeMlp() const;

  constexpr void __set_magnitudeMlp(float_t value);

  constexpr float_t& __get_endTime();

  constexpr float_t const& __get_endTime() const;

  constexpr void __set_endTime(float_t value);

  constexpr ::UnityEngine::Quaternion& __get_handRotation();

  constexpr ::UnityEngine::Quaternion const& __get_handRotation() const;

  constexpr void __set_handRotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __get_secondaryHandRelativeRotation();

  constexpr ::UnityEngine::Quaternion const& __get_secondaryHandRelativeRotation() const;

  constexpr void __set_secondaryHandRelativeRotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __get_randomRotation();

  constexpr ::UnityEngine::Quaternion const& __get_randomRotation() const;

  constexpr void __set_randomRotation(::UnityEngine::Quaternion value);

  constexpr float_t& __get_length();

  constexpr float_t const& __get_length() const;

  constexpr void __set_length(float_t value);

  constexpr bool& __get_initiated();

  constexpr bool const& __get_initiated() const;

  constexpr void __set_initiated(bool value);

  constexpr float_t& __get_blendWeight();

  constexpr float_t const& __get_blendWeight() const;

  constexpr void __set_blendWeight(float_t value);

  constexpr float_t& __get_w();

  constexpr float_t const& __get_w() const;

  constexpr void __set_w(float_t value);

  constexpr ::UnityEngine::Quaternion& __get_primaryHandRotation();

  constexpr ::UnityEngine::Quaternion const& __get_primaryHandRotation() const;

  constexpr void __set_primaryHandRotation(::UnityEngine::Quaternion value);

  constexpr bool& __get_handRotationsSet();

  constexpr bool const& __get_handRotationsSet() const;

  constexpr void __set_handRotationsSet(bool value);

  constexpr ::UnityEngine::Vector3& __get_aimIKAxis();

  constexpr ::UnityEngine::Vector3 const& __get_aimIKAxis() const;

  constexpr void __set_aimIKAxis(::UnityEngine::Vector3 value);

  /// @brief Method get_isFinished addr 0x1299028 size 0x24 virtual false final false
  inline bool get_isFinished();

  /// @brief Method SetHandRotations addr 0x129904c size 0x2c virtual false final false
  inline void SetHandRotations(::UnityEngine::Quaternion leftHandRotation, ::UnityEngine::Quaternion rightHandRotation);

  /// @brief Method Fire addr 0x1299078 size 0x14c virtual false final false
  inline void Fire(float_t magnitude);

  /// @brief Method OnModifyOffset addr 0x1299298 size 0xa88 virtual true final false
  inline void OnModifyOffset();

  /// @brief Method AfterFBBIK addr 0x1299f9c size 0x118 virtual false final false
  inline void AfterFBBIK();

  /// @brief Method AfterAimIK addr 0x129a0b4 size 0x50 virtual false final false
  inline void AfterAimIK();

  /// @brief Method get_primaryHandEffector addr 0x1299f24 size 0x3c virtual false final false
  inline ::RootMotion::FinalIK::IKEffector* get_primaryHandEffector();

  /// @brief Method get_secondaryHandEffector addr 0x1299f60 size 0x3c virtual false final false
  inline ::RootMotion::FinalIK::IKEffector* get_secondaryHandEffector();

  /// @brief Method get_primaryHand addr 0x1299eec size 0x1c virtual false final false
  inline ::UnityEngine::Transform* get_primaryHand();

  /// @brief Method get_secondaryHand addr 0x1299f08 size 0x1c virtual false final false
  inline ::UnityEngine::Transform* get_secondaryHand();

  /// @brief Method OnDestroy addr 0x129a104 size 0x1d0 virtual true final false
  inline void OnDestroy();

  static inline ::RootMotion::FinalIK::Recoil* New_ctor();

  /// @brief Method .ctor addr 0x129a2d4 size 0x8c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Recoil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Recoil(Recoil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Recoil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Recoil(Recoil const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Recoil();

public:
  /// @brief Field aimIK, offset: 0x30, size: 0x8, def value: None
  ::RootMotion::FinalIK::AimIK* ___aimIK;

  /// @brief Field aimIKSolvedLast, offset: 0x38, size: 0x1, def value: None
  bool ___aimIKSolvedLast;

  /// @brief Field handedness, offset: 0x3c, size: 0x4, def value: None
  ::RootMotion::FinalIK::__Recoil__Handedness ___handedness;

  /// @brief Field twoHanded, offset: 0x40, size: 0x1, def value: None
  bool ___twoHanded;

  /// @brief Field recoilWeight, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___recoilWeight;

  /// @brief Field magnitudeRandom, offset: 0x50, size: 0x4, def value: None
  float_t ___magnitudeRandom;

  /// @brief Field rotationRandom, offset: 0x54, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___rotationRandom;

  /// @brief Field handRotationOffset, offset: 0x60, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___handRotationOffset;

  /// @brief Field blendTime, offset: 0x6c, size: 0x4, def value: None
  float_t ___blendTime;

  /// @brief Field offsets, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__Recoil__RecoilOffset*, ::Array<::RootMotion::FinalIK::__Recoil__RecoilOffset*>*> ___offsets;

  /// @brief Field rotationOffset, offset: 0x78, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___rotationOffset;

  /// @brief Field magnitudeMlp, offset: 0x88, size: 0x4, def value: None
  float_t ___magnitudeMlp;

  /// @brief Field endTime, offset: 0x8c, size: 0x4, def value: None
  float_t ___endTime;

  /// @brief Field handRotation, offset: 0x90, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___handRotation;

  /// @brief Field secondaryHandRelativeRotation, offset: 0xa0, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___secondaryHandRelativeRotation;

  /// @brief Field randomRotation, offset: 0xb0, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___randomRotation;

  /// @brief Field length, offset: 0xc0, size: 0x4, def value: None
  float_t ___length;

  /// @brief Field initiated, offset: 0xc4, size: 0x1, def value: None
  bool ___initiated;

  /// @brief Field blendWeight, offset: 0xc8, size: 0x4, def value: None
  float_t ___blendWeight;

  /// @brief Field w, offset: 0xcc, size: 0x4, def value: None
  float_t ___w;

  /// @brief Field primaryHandRotation, offset: 0xd0, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___primaryHandRotation;

  /// @brief Field handRotationsSet, offset: 0xe0, size: 0x1, def value: None
  bool ___handRotationsSet;

  /// @brief Field aimIKAxis, offset: 0xe4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___aimIKAxis;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::Recoil, 0xf0>, "Size mismatch!");

} // namespace RootMotion::FinalIK
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__Recoil__Handedness, "RootMotion.FinalIK", "Recoil/Handedness");
NEED_NO_BOX(::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Recoil__RecoilOffset__EffectorLink*, "RootMotion.FinalIK", "Recoil/RecoilOffset/EffectorLink");
NEED_NO_BOX(::RootMotion::FinalIK::Recoil);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::Recoil*, "RootMotion.FinalIK", "Recoil");
NEED_NO_BOX(::RootMotion::FinalIK::__Recoil__RecoilOffset);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__Recoil__RecoilOffset*, "RootMotion.FinalIK", "Recoil/RecoilOffset");
