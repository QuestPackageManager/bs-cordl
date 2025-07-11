#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/KdTree/Math/DoubleMath.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/KdTree/Math/zzzz__TypeMath_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DoubleMath)
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree::Math {
class DoubleMath;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::KdTree::Math::DoubleMath);
// Dependencies UnityEngine.ProBuilder.KdTree.Math.TypeMath`1<T>
namespace UnityEngine::ProBuilder::KdTree::Math {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.KdTree.Math.DoubleMath
class CORDL_TYPE DoubleMath : public ::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<double_t> {
public:
  // Declarations
  __declspec(property(get = get_MaxValue)) double_t MaxValue;

  __declspec(property(get = get_MinValue)) double_t MinValue;

  __declspec(property(get = get_NegativeInfinity)) double_t NegativeInfinity;

  __declspec(property(get = get_PositiveInfinity)) double_t PositiveInfinity;

  __declspec(property(get = get_Zero)) double_t Zero;

  /// @brief Method Add, addr 0x46f6288, size 0x8, virtual true, abstract: false, final false
  inline double_t Add(double_t a, double_t b);

  /// @brief Method AreEqual, addr 0x46f6244, size 0xc, virtual true, abstract: false, final false
  inline bool AreEqual(double_t a, double_t b);

  /// @brief Method Compare, addr 0x46f6224, size 0x20, virtual true, abstract: false, final false
  inline int32_t Compare(double_t a, double_t b);

  /// @brief Method DistanceSquaredBetweenPoints, addr 0x46f62a0, size 0x100, virtual true, abstract: false, final false
  inline double_t DistanceSquaredBetweenPoints(::ArrayW<double_t, ::Array<double_t>*> a, ::ArrayW<double_t, ::Array<double_t>*> b);

  /// @brief Method Multiply, addr 0x46f6298, size 0x8, virtual true, abstract: false, final false
  inline double_t Multiply(double_t a, double_t b);

  static inline ::UnityEngine::ProBuilder::KdTree::Math::DoubleMath* New_ctor();

  /// @brief Method Subtract, addr 0x46f6290, size 0x8, virtual true, abstract: false, final false
  inline double_t Subtract(double_t a, double_t b);

  /// @brief Method .ctor, addr 0x46f63a0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_MaxValue, addr 0x46f625c, size 0xc, virtual true, abstract: false, final false
  inline double_t get_MaxValue();

  /// @brief Method get_MinValue, addr 0x46f6250, size 0xc, virtual true, abstract: false, final false
  inline double_t get_MinValue();

  /// @brief Method get_NegativeInfinity, addr 0x46f6270, size 0xc, virtual true, abstract: false, final false
  inline double_t get_NegativeInfinity();

  /// @brief Method get_PositiveInfinity, addr 0x46f627c, size 0xc, virtual true, abstract: false, final false
  inline double_t get_PositiveInfinity();

  /// @brief Method get_Zero, addr 0x46f6268, size 0x8, virtual true, abstract: false, final false
  inline double_t get_Zero();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DoubleMath();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DoubleMath", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DoubleMath(DoubleMath&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DoubleMath", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DoubleMath(DoubleMath const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18562 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::KdTree::Math::DoubleMath, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::KdTree::Math
NEED_NO_BOX(::UnityEngine::ProBuilder::KdTree::Math::DoubleMath);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::KdTree::Math::DoubleMath*, "UnityEngine.ProBuilder.KdTree.Math", "DoubleMath");
