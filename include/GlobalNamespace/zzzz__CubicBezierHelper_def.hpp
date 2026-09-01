#pragma once
// IWYU pragma private; include "GlobalNamespace\CubicBezierHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CubicBezierHelper)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CubicBezierHelper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CubicBezierHelper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CubicBezierHelper*, "", "CubicBezierHelper");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CubicBezierHelper
class CORDL_TYPE CubicBezierHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method EstimateCurveLength, addr 0x33252d0, size 0x2f8, virtual false, abstract: false, final false
  static inline float_t EstimateCurveLength(::by_ref<::UnityEngine::Vector3> p0, ::by_ref<::UnityEngine::Vector3> p1, ::by_ref<::UnityEngine::Vector3> p2, ::by_ref<::UnityEngine::Vector3> p3);

  /// @brief Method EvaluateCurve, addr 0x3324ab8, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 EvaluateCurve(::by_ref<::UnityEngine::Vector3> a1, ::by_ref<::UnityEngine::Vector3> c1, ::by_ref<::UnityEngine::Vector3> c2, ::by_ref<::UnityEngine::Vector3> a2,
                                                     float_t t);

  /// @brief Method EvaluateCurveDerivative, addr 0x3324b48, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 EvaluateCurveDerivative(::by_ref<::UnityEngine::Vector3> a1, ::by_ref<::UnityEngine::Vector3> c1, ::by_ref<::UnityEngine::Vector3> c2,
                                                               ::by_ref<::UnityEngine::Vector3> a2, float_t t);

  /// @brief Method EvaluateCurveSecondDerivative, addr 0x3324bfc, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 EvaluateCurveSecondDerivative(::by_ref<::UnityEngine::Vector3> a1, ::by_ref<::UnityEngine::Vector3> c1, ::by_ref<::UnityEngine::Vector3> c2,
                                                                     ::by_ref<::UnityEngine::Vector3> a2, float_t t);

  /// @brief Method Normal, addr 0x3324ca0, size 0x170, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Normal(::by_ref<::UnityEngine::Vector3> a1, ::by_ref<::UnityEngine::Vector3> c1, ::by_ref<::UnityEngine::Vector3> c2, ::by_ref<::UnityEngine::Vector3> a2,
                                              float_t t);

  /// @brief Method SplitCurve, addr 0x3324e10, size 0x4c0, virtual false, abstract: false, final false
  static inline void SplitCurve(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* points, float_t t);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CubicBezierHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CubicBezierHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CubicBezierHelper(CubicBezierHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CubicBezierHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CubicBezierHelper(CubicBezierHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20743 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CubicBezierHelper) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
