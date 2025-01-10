#pragma once
// IWYU pragma private; include "GlobalNamespace/BezierSplineEvaluator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BezierSplineEvaluator)
namespace GlobalNamespace {
struct BezierCurve;
}
namespace GlobalNamespace {
struct BezierSplineEvaluator_CubicSolveResult;
}
namespace GlobalNamespace {
class BezierSpline;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BezierSplineEvaluator;
}
namespace GlobalNamespace {
struct BezierSplineEvaluator_CubicSolveResult;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BezierSplineEvaluator);
MARK_VAL_T(::GlobalNamespace::BezierSplineEvaluator_CubicSolveResult);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: BezierSplineEvaluator/CubicSolveResult
struct CORDL_TYPE BezierSplineEvaluator_CubicSolveResult {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2264f8c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(float_t solution1);

  /// @brief Method .ctor, addr 0x2264fa0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(float_t solution1, float_t solution2);

  /// @brief Method .ctor, addr 0x2264fb4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(float_t solution1, float_t solution2, float_t solution3);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BezierSplineEvaluator_CubicSolveResult();

  // Ctor Parameters [CppParam { name: "numberOfSolutions", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "solution1", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "solution2", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "solution3", ty: "float_t", modifiers: "", def_value: None }]
  constexpr BezierSplineEvaluator_CubicSolveResult(int32_t numberOfSolutions, float_t solution1, float_t solution2, float_t solution3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17684 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field numberOfSolutions, offset: 0x0, size: 0x4, def value: None
  int32_t numberOfSolutions;

  /// @brief Field solution1, offset: 0x4, size: 0x4, def value: None
  float_t solution1;

  /// @brief Field solution2, offset: 0x8, size: 0x4, def value: None
  float_t solution2;

  /// @brief Field solution3, offset: 0xc, size: 0x4, def value: None
  float_t solution3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BezierSplineEvaluator_CubicSolveResult, numberOfSolutions) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BezierSplineEvaluator_CubicSolveResult, solution1) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BezierSplineEvaluator_CubicSolveResult, solution2) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BezierSplineEvaluator_CubicSolveResult, solution3) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BezierSplineEvaluator_CubicSolveResult, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BezierSplineEvaluator
class CORDL_TYPE BezierSplineEvaluator : public ::System::Object {
public:
  // Declarations
  using CubicSolveResult = ::GlobalNamespace::BezierSplineEvaluator_CubicSolveResult;

  /// @brief Field _currentSegmentIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__currentSegmentIndex, put = __cordl_internal_set__currentSegmentIndex)) int32_t _currentSegmentIndex;

  /// @brief Field _segments, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__segments, put = __cordl_internal_set__segments)) ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>* _segments;

  /// @brief Method CubeRoot, addr 0x2264f58, size 0x34, virtual false, abstract: false, final false
  static inline float_t CubeRoot(float_t x);

  /// @brief Method Evaluate, addr 0x2264518, size 0x14c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 Evaluate(float_t t);

  /// @brief Method EvaluateFirstDerivation, addr 0x2264664, size 0x15c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 EvaluateFirstDerivation(float_t t);

  /// @brief Method EvaluatePosition, addr 0x225da98, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 EvaluatePosition(float_t time);

  /// @brief Method EvaluateSecondDerivation, addr 0x22647c0, size 0x14c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 EvaluateSecondDerivation(float_t t);

  /// @brief Method GetTForSegment, addr 0x2264a2c, size 0x14c, virtual false, abstract: false, final false
  inline float_t GetTForSegment(int32_t segmentIndex, float_t time);

  /// @brief Method GetTimeValuesForSegment, addr 0x2264ea0, size 0xb8, virtual false, abstract: false, final false
  inline void GetTimeValuesForSegment(int32_t segmentIndex, ::ByRef<float_t> t0Value, ::ByRef<float_t> t1Value);

  static inline ::GlobalNamespace::BezierSplineEvaluator* New_ctor(::GlobalNamespace::BezierSpline* spline);

  /// @brief Method OffsetSegmentAndGetT, addr 0x2264404, size 0x114, virtual false, abstract: false, final false
  inline float_t OffsetSegmentAndGetT(float_t time);

  /// @brief Method OffsetStartIndexToDistance, addr 0x226490c, size 0x120, virtual false, abstract: false, final false
  inline void OffsetStartIndexToDistance(float_t time);

  /// @brief Method SolveCubic, addr 0x2264b78, size 0x328, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BezierSplineEvaluator_CubicSolveResult SolveCubic(float_t a, float_t b, float_t c, float_t d);

  constexpr int32_t const& __cordl_internal_get__currentSegmentIndex() const;

  constexpr int32_t& __cordl_internal_get__currentSegmentIndex();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>* const& __cordl_internal_get__segments() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>*& __cordl_internal_get__segments();

  constexpr void __cordl_internal_set__currentSegmentIndex(int32_t value);

  constexpr void __cordl_internal_set__segments(::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>* value);

  /// @brief Method .ctor, addr 0x225fa84, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BezierSpline* spline);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BezierSplineEvaluator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BezierSplineEvaluator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BezierSplineEvaluator(BezierSplineEvaluator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BezierSplineEvaluator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BezierSplineEvaluator(BezierSplineEvaluator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17685 };

  /// @brief Field kSlightAboveOne offset 0xffffffff size 0x4
  static constexpr float_t kSlightAboveOne{ static_cast<float_t>(1.0005f) };

  /// @brief Field kSlightBelowZero offset 0xffffffff size 0x4
  static constexpr float_t kSlightBelowZero{ static_cast<float_t>(-0.0005f) };

  /// @brief Field _segments, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>* ____segments;

  /// @brief Field _currentSegmentIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ____currentSegmentIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BezierSplineEvaluator, ____segments) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BezierSplineEvaluator, ____currentSegmentIndex) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BezierSplineEvaluator, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BezierSplineEvaluator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BezierSplineEvaluator*, "", "BezierSplineEvaluator");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BezierSplineEvaluator_CubicSolveResult, "", "BezierSplineEvaluator/CubicSolveResult");
