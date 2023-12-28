#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BezierSpline)
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct BezierCurve;
}
namespace GlobalNamespace {
struct __BezierSpline__ComputeControlPointsResults;
}
namespace GlobalNamespace {
class __BezierSpline____c;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BezierSpline;
}
namespace GlobalNamespace {
class __BezierSpline____c;
}
namespace GlobalNamespace {
struct __BezierSpline__ComputeControlPointsResults;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BezierSpline);
MARK_REF_PTR_T(::GlobalNamespace::__BezierSpline____c);
MARK_VAL_T(::GlobalNamespace::__BezierSpline__ComputeControlPointsResults);
// Type: ::ComputeControlPointsResults
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3993))
// CS Name: ::BezierSpline::ComputeControlPointsResults
struct CORDL_TYPE __BezierSpline__ComputeControlPointsResults {
public:
  // Declarations
  /// @brief Method .ctor addr 0x221e4a4 size 0x8 virtual false final false
  inline void _ctor(::ArrayW<float_t, ::Array<float_t>*> p1, ::ArrayW<float_t, ::Array<float_t>*> p2);

  // Ctor Parameters [CppParam { name: "p1", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "p2", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers:
  // "", def_value: None }]
  constexpr __BezierSpline__ComputeControlPointsResults(::ArrayW<float_t, ::Array<float_t>*> p1, ::ArrayW<float_t, ::Array<float_t>*> p2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BezierSpline__ComputeControlPointsResults();

  /// @brief Field p1, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> p1;

  /// @brief Field p2, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> p2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BezierSpline__ComputeControlPointsResults, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3994))
// CS Name: ::BezierSpline::<>c*
class CORDL_TYPE __BezierSpline____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__BezierSpline____c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0))::System::Comparison_1<::UnityEngine::Vector3>* __9__6_0;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0))::System::Func_2<::UnityEngine::Vector3, float_t>* __9__8_0;

  /// @brief Field <>9__8_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_1, put = setStaticF___9__8_1))::System::Func_2<::UnityEngine::Vector3, float_t>* __9__8_1;

  /// @brief Field <>9__8_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_2, put = setStaticF___9__8_2))::System::Func_2<::UnityEngine::Vector3, float_t>* __9__8_2;

  static inline void setStaticF___9(::GlobalNamespace::__BezierSpline____c* value);

  static inline ::GlobalNamespace::__BezierSpline____c* getStaticF___9();

  static inline void setStaticF___9__6_0(::System::Comparison_1<::UnityEngine::Vector3>* value);

  static inline ::System::Comparison_1<::UnityEngine::Vector3>* getStaticF___9__6_0();

  static inline void setStaticF___9__8_0(::System::Func_2<::UnityEngine::Vector3, float_t>* value);

  static inline ::System::Func_2<::UnityEngine::Vector3, float_t>* getStaticF___9__8_0();

  static inline void setStaticF___9__8_1(::System::Func_2<::UnityEngine::Vector3, float_t>* value);

  static inline ::System::Func_2<::UnityEngine::Vector3, float_t>* getStaticF___9__8_1();

  static inline void setStaticF___9__8_2(::System::Func_2<::UnityEngine::Vector3, float_t>* value);

  static inline ::System::Func_2<::UnityEngine::Vector3, float_t>* getStaticF___9__8_2();

  static inline ::GlobalNamespace::__BezierSpline____c* New_ctor();

  /// @brief Method .ctor addr 0x221e510 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <SortSourceData>b__6_0 addr 0x221e518 size 0x30 virtual false final false
  inline int32_t _SortSourceData_b__6_0(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2);

  /// @brief Method <ComputeControlPoints>b__8_0 addr 0x221e548 size 0x4 virtual false final false
  inline float_t _ComputeControlPoints_b__8_0(::UnityEngine::Vector3 p);

  /// @brief Method <ComputeControlPoints>b__8_1 addr 0x221e54c size 0x8 virtual false final false
  inline float_t _ComputeControlPoints_b__8_1(::UnityEngine::Vector3 p);

  /// @brief Method <ComputeControlPoints>b__8_2 addr 0x221e554 size 0x8 virtual false final false
  inline float_t _ComputeControlPoints_b__8_2(::UnityEngine::Vector3 p);

  // Ctor Parameters [CppParam { name: "", ty: "__BezierSpline____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BezierSpline____c(__BezierSpline____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BezierSpline____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BezierSpline____c(__BezierSpline____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BezierSpline____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BezierSpline____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BezierSpline
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3995))
// CS Name: ::BezierSpline*
class CORDL_TYPE BezierSpline : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__BezierSpline____c;

  using ComputeControlPointsResults = ::GlobalNamespace::__BezierSpline__ComputeControlPointsResults;

  /// @brief Field _segments, offset 0x10, size 0x8
  __declspec(property(get = __get__segments, put = __set__segments))::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>* _segments;

  /// @brief Field _sourceDataPoints, offset 0x18, size 0x8
  __declspec(property(get = __get__sourceDataPoints, put = __set__sourceDataPoints))::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _sourceDataPoints;

  __declspec(property(get = get_segments))::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>* segments;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>*& __get__segments();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>*> const& __get__segments() const;

  constexpr void __set__segments(::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __get__sourceDataPoints();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& __get__sourceDataPoints() const;

  constexpr void __set__sourceDataPoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value);

  /// @brief Method get_segments addr 0x221de14 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>* get_segments();

  /// @brief Method AddPoint addr 0x2218dc4 size 0xd8 virtual false final false
  inline void AddPoint(float_t distance, ::UnityEngine::Vector2 point);

  /// @brief Method SortSourceData addr 0x221de1c size 0x100 virtual false final false
  inline void SortSourceData();

  /// @brief Method AddArtificialStartAndFinishPoint addr 0x2218e9c size 0x1f8 virtual false final false
  inline void AddArtificialStartAndFinishPoint();

  /// @brief Method ComputeControlPoints addr 0x2219094 size 0x55c virtual false final false
  inline void ComputeControlPoints();

  /// @brief Method Clear addr 0x221e434 size 0x70 virtual false final false
  inline void Clear();

  /// @brief Method ComputeControlPoints addr 0x221df1c size 0x518 virtual false final false
  inline ::GlobalNamespace::__BezierSpline__ComputeControlPointsResults ComputeControlPoints(::System::Collections::Generic::List_1<float_t>* k);

  static inline ::GlobalNamespace::BezierSpline* New_ctor();

  /// @brief Method .ctor addr 0x2218a14 size 0xc0 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BezierSpline", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BezierSpline(BezierSpline&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BezierSpline", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BezierSpline(BezierSpline const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BezierSpline();

public:
  /// @brief Field _segments, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve>* ____segments;

  /// @brief Field _sourceDataPoints, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ____sourceDataPoints;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BezierSpline, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BezierSpline);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BezierSpline*, "", "BezierSpline");
NEED_NO_BOX(::GlobalNamespace::__BezierSpline____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BezierSpline____c*, "", "BezierSpline/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BezierSpline__ComputeControlPointsResults, "", "BezierSpline/ComputeControlPointsResults");
