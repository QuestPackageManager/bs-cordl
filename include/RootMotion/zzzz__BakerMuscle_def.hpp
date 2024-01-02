#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BakerMuscle)
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace RootMotion {
class BakerMuscle;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::BakerMuscle);
// Type: RootMotion::BakerMuscle
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12477))
// CS Name: ::RootMotion::BakerMuscle*
class CORDL_TYPE BakerMuscle : public ::System::Object {
public:
  // Declarations
  /// @brief Field curve, offset 0x10, size 0x8
  __declspec(property(get = __get_curve, put = __set_curve))::UnityEngine::AnimationCurve* curve;

  /// @brief Field muscleIndex, offset 0x18, size 0x4
  __declspec(property(get = __get_muscleIndex, put = __set_muscleIndex)) int32_t muscleIndex;

  /// @brief Field propertyName, offset 0x20, size 0x8
  __declspec(property(get = __get_propertyName, put = __set_propertyName))::StringW propertyName;

  constexpr ::UnityEngine::AnimationCurve*& __get_curve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get_curve() const;

  constexpr void __set_curve(::UnityEngine::AnimationCurve* value);

  constexpr int32_t& __get_muscleIndex();

  constexpr int32_t const& __get_muscleIndex() const;

  constexpr void __set_muscleIndex(int32_t value);

  constexpr ::StringW& __get_propertyName();

  constexpr ::StringW const& __get_propertyName() const;

  constexpr void __set_propertyName(::StringW value);

  static inline ::RootMotion::BakerMuscle* New_ctor(int32_t muscleIndex);

  /// @brief Method .ctor, addr 0x1233938, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(int32_t muscleIndex);

  /// @brief Method MuscleNameToPropertyName, addr 0x123399c, size 0xa34, virtual false, abstract: false, final false
  inline ::StringW MuscleNameToPropertyName(::StringW n);

  /// @brief Method MultiplyLength, addr 0x1234430, size 0xa8, virtual false, abstract: false, final false
  inline void MultiplyLength(::UnityEngine::AnimationCurve* curve, float_t mlp);

  /// @brief Method SetCurves, addr 0x12344d8, size 0xf4, virtual false, abstract: false, final false
  inline void SetCurves(ByRef<::UnityEngine::AnimationClip*> clip, float_t maxError, float_t lengthMlp);

  /// @brief Method Reset, addr 0x12343d0, size 0x60, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetKeyframe, addr 0x12345cc, size 0x3c, virtual false, abstract: false, final false
  inline void SetKeyframe(float_t time, ::ArrayW<float_t, ::Array<float_t>*> muscles);

  /// @brief Method SetLoopFrame, addr 0x1234608, size 0x8, virtual false, abstract: false, final false
  inline void SetLoopFrame(float_t time);

  // Ctor Parameters [CppParam { name: "", ty: "BakerMuscle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BakerMuscle(BakerMuscle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BakerMuscle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BakerMuscle(BakerMuscle const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BakerMuscle();

public:
  /// @brief Field curve, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___curve;

  /// @brief Field muscleIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___muscleIndex;

  /// @brief Field propertyName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___propertyName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::BakerMuscle, 0x28>, "Size mismatch!");

static_assert(offsetof(::RootMotion::BakerMuscle, ___curve) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerMuscle, ___muscleIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerMuscle, ___propertyName) == 0x20, "Offset mismatch!");

} // namespace RootMotion
NEED_NO_BOX(::RootMotion::BakerMuscle);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::BakerMuscle*, "RootMotion", "BakerMuscle");
