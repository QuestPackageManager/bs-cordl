#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BezierSplineEvaluator)
namespace GlobalNamespace {
struct BezierCurve;
}
namespace GlobalNamespace {
struct __BezierSplineEvaluator__CubicSolveResult;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class BezierSpline;
}
// Forward declare root types
namespace GlobalNamespace {
class BezierSplineEvaluator;
}
namespace GlobalNamespace {
struct __BezierSplineEvaluator__CubicSolveResult;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BezierSplineEvaluator);
MARK_VAL_T(::GlobalNamespace::__BezierSplineEvaluator__CubicSolveResult);
// Type: ::CubicSolveResult
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3996))
// CS Name: ::BezierSplineEvaluator::CubicSolveResult
struct CORDL_TYPE __BezierSplineEvaluator__CubicSolveResult {
public:
  // Declarations
  /// @brief Method .ctor addr 0x221f11c size 0x14 virtual false final false
  inline void _ctor(float_t solution1);

  /// @brief Method .ctor addr 0x221f130 size 0x14 virtual false final false
  inline void _ctor(float_t solution1, float_t solution2);

  /// @brief Method .ctor addr 0x221f144 size 0x14 virtual false final false
  inline void _ctor(float_t solution1, float_t solution2, float_t solution3);

  // Ctor Parameters [CppParam { name: "numberOfSolutions", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "solution1", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "solution2", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "solution3", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __BezierSplineEvaluator__CubicSolveResult(int32_t numberOfSolutions, float_t solution1, float_t solution2, float_t solution3) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BezierSplineEvaluator__CubicSolveResult();

  /// @brief Field numberOfSolutions, offset: 0x0, size: 0x4, def value: None
  int32_t numberOfSolutions;

  /// @brief Field solution1, offset: 0x4, size: 0x4, def value: None
  float_t solution1;

  /// @brief Field solution2, offset: 0x8, size: 0x4, def value: None
  float_t solution2;

  /// @brief Field solution3, offset: 0xc, size: 0x4, def value: None
  float_t solution3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BezierSplineEvaluator__CubicSolveResult, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BezierSplineEvaluator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3997))
// CS Name: ::BezierSplineEvaluator*
class CORDL_TYPE BezierSplineEvaluator : public ::System::Object {
public:
  // Declarations
  using CubicSolveResult = ::GlobalNamespace::__BezierSplineEvaluator__CubicSolveResult;

  /// @brief Field _segments, offset 0x10, size 0x8
  __declspec(property(get = __get__segments, put = __set__segments))::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>* _segments;

  /// @brief Field _currentSegmentIndex, offset 0x18, size 0x4
  __declspec(property(get = __get__currentSegmentIndex, put = __set__currentSegmentIndex)) int32_t _currentSegmentIndex;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>*& __get__segments();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>*> const& __get__segments() const;

  constexpr void __set__segments(::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>* value);

  constexpr int32_t& __get__currentSegmentIndex();

  constexpr int32_t const& __get__currentSegmentIndex() const;

  constexpr void __set__currentSegmentIndex(int32_t value);

  static inline ::GlobalNamespace::BezierSplineEvaluator* New_ctor(::GlobalNamespace::BezierSpline* spline);

  /// @brief Method .ctor addr 0x22195f0 size 0x34 virtual false final false
  inline void _ctor(::GlobalNamespace::BezierSpline* spline);

  /// @brief Method EvaluatePosition addr 0x22172f0 size 0x18 virtual false final false
  inline ::UnityEngine::Vector3 EvaluatePosition(float_t time);

  /// @brief Method Evaluate addr 0x221e6ac size 0x14c virtual false final false
  inline ::UnityEngine::Vector3 Evaluate(float_t t);

  /// @brief Method EvaluateFirstDerivation addr 0x221e7f8 size 0x15c virtual false final false
  inline ::UnityEngine::Vector3 EvaluateFirstDerivation(float_t t);

  /// @brief Method EvaluateSecondDerivation addr 0x221e954 size 0x14c virtual false final false
  inline ::UnityEngine::Vector3 EvaluateSecondDerivation(float_t t);

  /// @brief Method OffsetSegmentAndGetT addr 0x221e55c size 0x150 virtual false final false
  inline float_t OffsetSegmentAndGetT(float_t time);

  /// @brief Method GetTForSegment addr 0x221ebc0 size 0x14c virtual false final false
  inline float_t GetTForSegment(int32_t segmentIndex, float_t time);

  /// @brief Method GetTimeValuesForSegment addr 0x221f030 size 0xb8 virtual false final false
  inline void GetTimeValuesForSegment(int32_t segmentIndex, ByRef<float_t> t0Value, ByRef<float_t> t1Value);

  /// @brief Method OffsetStartIndexToDistance addr 0x221eaa0 size 0x120 virtual false final false
  inline void OffsetStartIndexToDistance(float_t time);

  /// @brief Method CubeRoot addr 0x221f0e8 size 0x34 virtual false final false
  static inline float_t CubeRoot(float_t x);

  /// @brief Method SolveCubic addr 0x221ed0c size 0x324 virtual false final false
  static inline ::GlobalNamespace::__BezierSplineEvaluator__CubicSolveResult SolveCubic(float_t a, float_t b, float_t c, float_t d);

  // Ctor Parameters [CppParam { name: "", ty: "BezierSplineEvaluator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BezierSplineEvaluator(BezierSplineEvaluator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BezierSplineEvaluator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BezierSplineEvaluator(BezierSplineEvaluator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BezierSplineEvaluator();

public:
  /// @brief Field _segments, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>* ____segments;

  /// @brief Field _currentSegmentIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ____currentSegmentIndex;

  /// @brief Field kSlightAboveOne offset 0xffffffff size 0x4
  static constexpr float_t kSlightAboveOne{ 1.0005 };

  /// @brief Field kSlightBelowZero offset 0xffffffff size 0x4
  static constexpr float_t kSlightBelowZero{ -0.0005 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BezierSplineEvaluator, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BezierSplineEvaluator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BezierSplineEvaluator*, "", "BezierSplineEvaluator");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BezierSplineEvaluator__CubicSolveResult, "", "BezierSplineEvaluator/CubicSolveResult");
