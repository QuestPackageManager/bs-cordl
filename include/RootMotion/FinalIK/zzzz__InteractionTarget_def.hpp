#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_def.hpp"
#include "RootMotion/FinalIK/zzzz__InteractionObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InteractionTarget)
namespace GlobalNamespace {
struct __InteractionObject__WeightCurve__Type;
}
namespace RootMotion::FinalIK {
class __InteractionTarget__Multiplier;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class InteractionTarget;
}
namespace RootMotion::FinalIK {
class __InteractionTarget__Multiplier;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::InteractionTarget);
MARK_REF_PTR_T(::RootMotion::FinalIK::__InteractionTarget__Multiplier);
// Type: ::Multiplier
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::InteractionTarget::Multiplier*
class CORDL_TYPE __InteractionTarget__Multiplier : public ::System::Object {
public:
  // Declarations
  /// @brief Field curve, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_curve, put = __cordl_internal_set_curve))::GlobalNamespace::__InteractionObject__WeightCurve__Type curve;

  /// @brief Field multiplier, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_multiplier, put = __cordl_internal_set_multiplier)) float_t multiplier;

  static inline ::RootMotion::FinalIK::__InteractionTarget__Multiplier* New_ctor();

  constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type const& __cordl_internal_get_curve() const;

  constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type& __cordl_internal_get_curve();

  constexpr float_t const& __cordl_internal_get_multiplier() const;

  constexpr float_t& __cordl_internal_get_multiplier();

  constexpr void __cordl_internal_set_curve(::GlobalNamespace::__InteractionObject__WeightCurve__Type value);

  constexpr void __cordl_internal_set_multiplier(float_t value);

  /// @brief Method .ctor, addr 0x136584c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InteractionTarget__Multiplier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InteractionTarget__Multiplier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InteractionTarget__Multiplier(__InteractionTarget__Multiplier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InteractionTarget__Multiplier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InteractionTarget__Multiplier(__InteractionTarget__Multiplier const&) = delete;

  /// @brief Field curve, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__InteractionObject__WeightCurve__Type ___curve;

  /// @brief Field multiplier, offset: 0x14, size: 0x4, def value: None
  float_t ___multiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__InteractionTarget__Multiplier, 0x18>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionTarget__Multiplier, ___curve) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionTarget__Multiplier, ___multiplier) == 0x14, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::InteractionTarget
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::InteractionTarget*
class CORDL_TYPE InteractionTarget : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Multiplier = ::RootMotion::FinalIK::__InteractionTarget__Multiplier;

  /// @brief Field defaultLocalRotation, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get_defaultLocalRotation, put = __cordl_internal_set_defaultLocalRotation))::UnityEngine::Quaternion defaultLocalRotation;

  /// @brief Field effectorType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_effectorType, put = __cordl_internal_set_effectorType))::RootMotion::FinalIK::FullBodyBipedEffector effectorType;

  /// @brief Field interactionSpeedMlp, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_interactionSpeedMlp, put = __cordl_internal_set_interactionSpeedMlp)) float_t interactionSpeedMlp;

  /// @brief Field lastPivot, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_lastPivot, put = __cordl_internal_set_lastPivot))::UnityW<::UnityEngine::Transform> lastPivot;

  /// @brief Field multipliers, offset 0x20, size 0x8
  __declspec(
      property(get = __cordl_internal_get_multipliers,
               put = __cordl_internal_set_multipliers))::ArrayW<::RootMotion::FinalIK::__InteractionTarget__Multiplier*, ::Array<::RootMotion::FinalIK::__InteractionTarget__Multiplier*>*> multipliers;

  /// @brief Field pivot, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_pivot, put = __cordl_internal_set_pivot))::UnityW<::UnityEngine::Transform> pivot;

  /// @brief Field rotateOnce, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get_rotateOnce, put = __cordl_internal_set_rotateOnce)) bool rotateOnce;

  /// @brief Field swingWeight, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_swingWeight, put = __cordl_internal_set_swingWeight)) float_t swingWeight;

  /// @brief Field twistAxis, offset 0x38, size 0xc
  __declspec(property(get = __cordl_internal_get_twistAxis, put = __cordl_internal_set_twistAxis))::UnityEngine::Vector3 twistAxis;

  /// @brief Field twistWeight, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_twistWeight, put = __cordl_internal_set_twistWeight)) float_t twistWeight;

  /// @brief Method ASThread, addr 0x1365798, size 0x44, virtual false, abstract: false, final false
  inline void ASThread();

  /// @brief Method GetValue, addr 0x1360e58, size 0x64, virtual false, abstract: false, final false
  inline float_t GetValue(::GlobalNamespace::__InteractionObject__WeightCurve__Type curveType);

  static inline ::RootMotion::FinalIK::InteractionTarget* New_ctor();

  /// @brief Method OpenScriptReference, addr 0x1365600, size 0x44, virtual false, abstract: false, final false
  inline void OpenScriptReference();

  /// @brief Method OpenTutorial1, addr 0x1365644, size 0x44, virtual false, abstract: false, final false
  inline void OpenTutorial1();

  /// @brief Method OpenTutorial2, addr 0x1365688, size 0x44, virtual false, abstract: false, final false
  inline void OpenTutorial2();

  /// @brief Method OpenTutorial3, addr 0x13656cc, size 0x44, virtual false, abstract: false, final false
  inline void OpenTutorial3();

  /// @brief Method OpenTutorial4, addr 0x1365710, size 0x44, virtual false, abstract: false, final false
  inline void OpenTutorial4();

  /// @brief Method OpenUserManual, addr 0x13655bc, size 0x44, virtual false, abstract: false, final false
  inline void OpenUserManual();

  /// @brief Method ResetRotation, addr 0x136003c, size 0x8c, virtual false, abstract: false, final false
  inline void ResetRotation();

  /// @brief Method RotateTo, addr 0x135e850, size 0x4a4, virtual false, abstract: false, final false
  inline void RotateTo(::UnityEngine::Vector3 position);

  /// @brief Method SupportGroup, addr 0x1365754, size 0x44, virtual false, abstract: false, final false
  inline void SupportGroup();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_defaultLocalRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_defaultLocalRotation();

  constexpr ::RootMotion::FinalIK::FullBodyBipedEffector const& __cordl_internal_get_effectorType() const;

  constexpr ::RootMotion::FinalIK::FullBodyBipedEffector& __cordl_internal_get_effectorType();

  constexpr float_t const& __cordl_internal_get_interactionSpeedMlp() const;

  constexpr float_t& __cordl_internal_get_interactionSpeedMlp();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_lastPivot() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_lastPivot();

  constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionTarget__Multiplier*, ::Array<::RootMotion::FinalIK::__InteractionTarget__Multiplier*>*> const& __cordl_internal_get_multipliers() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionTarget__Multiplier*, ::Array<::RootMotion::FinalIK::__InteractionTarget__Multiplier*>*>& __cordl_internal_get_multipliers();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pivot() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pivot();

  constexpr bool const& __cordl_internal_get_rotateOnce() const;

  constexpr bool& __cordl_internal_get_rotateOnce();

  constexpr float_t const& __cordl_internal_get_swingWeight() const;

  constexpr float_t& __cordl_internal_get_swingWeight();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_twistAxis() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_twistAxis();

  constexpr float_t const& __cordl_internal_get_twistWeight() const;

  constexpr float_t& __cordl_internal_get_twistWeight();

  constexpr void __cordl_internal_set_defaultLocalRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_effectorType(::RootMotion::FinalIK::FullBodyBipedEffector value);

  constexpr void __cordl_internal_set_interactionSpeedMlp(float_t value);

  constexpr void __cordl_internal_set_lastPivot(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_multipliers(::ArrayW<::RootMotion::FinalIK::__InteractionTarget__Multiplier*, ::Array<::RootMotion::FinalIK::__InteractionTarget__Multiplier*>*> value);

  constexpr void __cordl_internal_set_pivot(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_rotateOnce(bool value);

  constexpr void __cordl_internal_set_swingWeight(float_t value);

  constexpr void __cordl_internal_set_twistAxis(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_twistWeight(float_t value);

  /// @brief Method .ctor, addr 0x13657dc, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InteractionTarget();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InteractionTarget", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InteractionTarget(InteractionTarget&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InteractionTarget", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InteractionTarget(InteractionTarget const&) = delete;

  /// @brief Field effectorType, offset: 0x18, size: 0x4, def value: None
  ::RootMotion::FinalIK::FullBodyBipedEffector ___effectorType;

  /// @brief Field multipliers, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__InteractionTarget__Multiplier*, ::Array<::RootMotion::FinalIK::__InteractionTarget__Multiplier*>*> ___multipliers;

  /// @brief Field interactionSpeedMlp, offset: 0x28, size: 0x4, def value: None
  float_t ___interactionSpeedMlp;

  /// @brief Field pivot, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___pivot;

  /// @brief Field twistAxis, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___twistAxis;

  /// @brief Field twistWeight, offset: 0x44, size: 0x4, def value: None
  float_t ___twistWeight;

  /// @brief Field swingWeight, offset: 0x48, size: 0x4, def value: None
  float_t ___swingWeight;

  /// @brief Field rotateOnce, offset: 0x4c, size: 0x1, def value: None
  bool ___rotateOnce;

  /// @brief Field defaultLocalRotation, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___defaultLocalRotation;

  /// @brief Field lastPivot, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___lastPivot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::InteractionTarget, 0x68>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionTarget, ___effectorType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionTarget, ___multipliers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionTarget, ___interactionSpeedMlp) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionTarget, ___pivot) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionTarget, ___twistAxis) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionTarget, ___twistWeight) == 0x44, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionTarget, ___swingWeight) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionTarget, ___rotateOnce) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionTarget, ___defaultLocalRotation) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionTarget, ___lastPivot) == 0x60, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::InteractionTarget);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::InteractionTarget*, "RootMotion.FinalIK", "InteractionTarget");
NEED_NO_BOX(::RootMotion::FinalIK::__InteractionTarget__Multiplier);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__InteractionTarget__Multiplier*, "RootMotion.FinalIK", "InteractionTarget/Multiplier");
