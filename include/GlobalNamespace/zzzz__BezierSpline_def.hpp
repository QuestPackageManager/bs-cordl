#pragma once
// IWYU pragma private; include "GlobalNamespace/BezierSpline.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BezierSpline)
namespace GlobalNamespace {
struct BezierCurve;
}
namespace GlobalNamespace {
struct BezierSpline_ComputeControlPointsResults;
}
namespace GlobalNamespace {
class BezierSpline___c;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BezierSpline;
}
namespace GlobalNamespace {
class BezierSpline___c;
}
namespace GlobalNamespace {
struct BezierSpline_ComputeControlPointsResults;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BezierSpline);
MARK_REF_PTR_T(::GlobalNamespace::BezierSpline___c);
MARK_VAL_T(::GlobalNamespace::BezierSpline_ComputeControlPointsResults);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: BezierSpline/ComputeControlPointsResults
struct CORDL_TYPE BezierSpline_ComputeControlPointsResults {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x31b945c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<float_t, ::Array<float_t>*> p1, ::ArrayW<float_t, ::Array<float_t>*> p2);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BezierSpline_ComputeControlPointsResults();

  // Ctor Parameters [CppParam { name: "p1", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "p2", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers:
  // "", def_value: None }]
  constexpr BezierSpline_ComputeControlPointsResults(::ArrayW<float_t, ::Array<float_t>*> p1, ::ArrayW<float_t, ::Array<float_t>*> p2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21476 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field p1, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> p1;

  /// @brief Field p2, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> p2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BezierSpline_ComputeControlPointsResults, p1) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BezierSpline_ComputeControlPointsResults, p2) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BezierSpline_ComputeControlPointsResults, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BezierSpline/<>c
class CORDL_TYPE BezierSpline___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::BezierSpline___c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0)) ::System::Comparison_1<::UnityEngine::Vector3>* __9__6_0;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0)) ::System::Func_2<::UnityEngine::Vector3, float_t>* __9__8_0;

  /// @brief Field <>9__8_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_1, put = setStaticF___9__8_1)) ::System::Func_2<::UnityEngine::Vector3, float_t>* __9__8_1;

  /// @brief Field <>9__8_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_2, put = setStaticF___9__8_2)) ::System::Func_2<::UnityEngine::Vector3, float_t>* __9__8_2;

  static inline ::GlobalNamespace::BezierSpline___c* New_ctor();

  /// @brief Method <ComputeControlPoints>b__8_0, addr 0x31b9514, size 0x4, virtual false, abstract: false, final false
  inline float_t _ComputeControlPoints_b__8_0(::UnityEngine::Vector3 p);

  /// @brief Method <ComputeControlPoints>b__8_1, addr 0x31b9518, size 0x8, virtual false, abstract: false, final false
  inline float_t _ComputeControlPoints_b__8_1(::UnityEngine::Vector3 p);

  /// @brief Method <ComputeControlPoints>b__8_2, addr 0x31b9520, size 0x8, virtual false, abstract: false, final false
  inline float_t _ComputeControlPoints_b__8_2(::UnityEngine::Vector3 p);

  /// @brief Method <SortSourceData>b__6_0, addr 0x31b94bc, size 0x58, virtual false, abstract: false, final false
  inline int32_t _SortSourceData_b__6_0(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2);

  /// @brief Method .ctor, addr 0x31b94b8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::BezierSpline___c* getStaticF___9();

  static inline ::System::Comparison_1<::UnityEngine::Vector3>* getStaticF___9__6_0();

  static inline ::System::Func_2<::UnityEngine::Vector3, float_t>* getStaticF___9__8_0();

  static inline ::System::Func_2<::UnityEngine::Vector3, float_t>* getStaticF___9__8_1();

  static inline ::System::Func_2<::UnityEngine::Vector3, float_t>* getStaticF___9__8_2();

  static inline void setStaticF___9(::GlobalNamespace::BezierSpline___c* value);

  static inline void setStaticF___9__6_0(::System::Comparison_1<::UnityEngine::Vector3>* value);

  static inline void setStaticF___9__8_0(::System::Func_2<::UnityEngine::Vector3, float_t>* value);

  static inline void setStaticF___9__8_1(::System::Func_2<::UnityEngine::Vector3, float_t>* value);

  static inline void setStaticF___9__8_2(::System::Func_2<::UnityEngine::Vector3, float_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BezierSpline___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BezierSpline___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BezierSpline___c(BezierSpline___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BezierSpline___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BezierSpline___c(BezierSpline___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21477 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BezierSpline___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BezierSpline
class CORDL_TYPE BezierSpline : public ::System::Object {
public:
  // Declarations
  using ComputeControlPointsResults = ::GlobalNamespace::BezierSpline_ComputeControlPointsResults;

  using __c = ::GlobalNamespace::BezierSpline___c;

  /// @brief Field _segments, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__segments, put = __cordl_internal_set__segments)) ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>* _segments;

  /// @brief Field _sourceDataPoints, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sourceDataPoints, put = __cordl_internal_set__sourceDataPoints)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _sourceDataPoints;

  __declspec(property(get = get_segments)) ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>* segments;

  /// @brief Method AddArtificialStartAndFinishPoint, addr 0x31b428c, size 0x214, virtual false, abstract: false, final false
  inline void AddArtificialStartAndFinishPoint();

  /// @brief Method AddPoint, addr 0x31b41b0, size 0xdc, virtual false, abstract: false, final false
  inline void AddPoint(float_t distance, ::UnityEngine::Vector2 point);

  /// @brief Method Clear, addr 0x31b93dc, size 0x80, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ComputeControlPoints, addr 0x31b8ed0, size 0x50c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BezierSpline_ComputeControlPointsResults ComputeControlPoints(::System::Collections::Generic::List_1<float_t>* k);

  /// @brief Method ComputeControlPoints, addr 0x31b44a0, size 0x54c, virtual false, abstract: false, final false
  inline void ComputeControlPoints();

  static inline ::GlobalNamespace::BezierSpline* New_ctor();

  /// @brief Method SortSourceData, addr 0x31b8dc4, size 0x10c, virtual false, abstract: false, final false
  inline void SortSourceData();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>* const& __cordl_internal_get__segments() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>*& __cordl_internal_get__segments();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get__sourceDataPoints() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get__sourceDataPoints();

  constexpr void __cordl_internal_set__segments(::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>* value);

  constexpr void __cordl_internal_set__sourceDataPoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  /// @brief Method .ctor, addr 0x31b3f3c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_segments, addr 0x31b8dbc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>* get_segments();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BezierSpline();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BezierSpline", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BezierSpline(BezierSpline&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BezierSpline", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BezierSpline(BezierSpline const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21478 };

  /// @brief Field _segments, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>* ____segments;

  /// @brief Field _sourceDataPoints, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ____sourceDataPoints;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BezierSpline, ____segments) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BezierSpline, ____sourceDataPoints) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BezierSpline, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BezierSpline);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BezierSpline*, "", "BezierSpline");
NEED_NO_BOX(::GlobalNamespace::BezierSpline___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BezierSpline___c*, "", "BezierSpline/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BezierSpline_ComputeControlPointsResults, "", "BezierSpline/ComputeControlPointsResults");
