#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__RotationLimit_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RotationLimitSpline)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Keyframe;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class RotationLimitSpline;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::RotationLimitSpline);
// Type: RootMotion.FinalIK::RotationLimitSpline
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::RotationLimitSpline*
class CORDL_TYPE RotationLimitSpline : public ::RootMotion::FinalIK::RotationLimit {
public:
  // Declarations
  /// @brief Field spline, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_spline, put = __cordl_internal_set_spline))::UnityEngine::AnimationCurve* spline;

  /// @brief Field twistLimit, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_twistLimit, put = __cordl_internal_set_twistLimit)) float_t twistLimit;

  /// @brief Method ASThread, addr 0x1396350, size 0x44, virtual false, abstract: false, final false
  inline void ASThread();

  /// @brief Method LimitRotation, addr 0x13963b0, size 0x94, virtual true, abstract: false, final false
  inline ::UnityEngine::Quaternion LimitRotation(::UnityEngine::Quaternion rotation);

  /// @brief Method LimitSwing, addr 0x1396444, size 0x3b8, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion LimitSwing(::UnityEngine::Quaternion rotation);

  static inline ::RootMotion::FinalIK::RotationLimitSpline* New_ctor();

  /// @brief Method OpenScriptReference, addr 0x13962c8, size 0x44, virtual false, abstract: false, final false
  inline void OpenScriptReference();

  /// @brief Method OpenUserManual, addr 0x1396284, size 0x44, virtual false, abstract: false, final false
  inline void OpenUserManual();

  /// @brief Method SetSpline, addr 0x1396394, size 0x1c, virtual false, abstract: false, final false
  inline void SetSpline(::ArrayW<::UnityEngine::Keyframe, ::Array<::UnityEngine::Keyframe>*> keyframes);

  /// @brief Method SupportGroup, addr 0x139630c, size 0x44, virtual false, abstract: false, final false
  inline void SupportGroup();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_spline();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_spline() const;

  constexpr float_t const& __cordl_internal_get_twistLimit() const;

  constexpr float_t& __cordl_internal_get_twistLimit();

  constexpr void __cordl_internal_set_spline(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_twistLimit(float_t value);

  /// @brief Method .ctor, addr 0x13967fc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RotationLimitSpline();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RotationLimitSpline", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RotationLimitSpline(RotationLimitSpline&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RotationLimitSpline", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RotationLimitSpline(RotationLimitSpline const&) = delete;

  /// @brief Field twistLimit, offset: 0x38, size: 0x4, def value: None
  float_t ___twistLimit;

  /// @brief Field spline, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___spline;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::RotationLimitSpline, 0x48>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RotationLimitSpline, ___twistLimit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RotationLimitSpline, ___spline) == 0x40, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::RotationLimitSpline);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::RotationLimitSpline*, "RootMotion.FinalIK", "RotationLimitSpline");
