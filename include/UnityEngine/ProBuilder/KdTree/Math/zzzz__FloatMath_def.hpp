#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/KdTree/Math/zzzz__TypeMath_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatMath)
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree::Math {
class FloatMath;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::KdTree::Math::FloatMath);
// Type: UnityEngine.ProBuilder.KdTree.Math::FloatMath
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::KdTree::Math {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder.KdTree.Math::FloatMath*
class CORDL_TYPE FloatMath : public ::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<float_t> {
public:
  // Declarations
  __declspec(property(get = get_MaxValue)) float_t MaxValue;

  __declspec(property(get = get_MinValue)) float_t MinValue;

  __declspec(property(get = get_NegativeInfinity)) float_t NegativeInfinity;

  __declspec(property(get = get_PositiveInfinity)) float_t PositiveInfinity;

  __declspec(property(get = get_Zero)) float_t Zero;

  /// @brief Method Add, addr 0x3266a78, size 0x8, virtual true, abstract: false, final false
  inline float_t Add(float_t a, float_t b);

  /// @brief Method AreEqual, addr 0x3266a34, size 0xc, virtual true, abstract: false, final false
  inline bool AreEqual(float_t a, float_t b);

  /// @brief Method Compare, addr 0x3266a14, size 0x20, virtual true, abstract: false, final false
  inline int32_t Compare(float_t a, float_t b);

  /// @brief Method DistanceSquaredBetweenPoints, addr 0x3266a90, size 0x100, virtual true, abstract: false, final false
  inline float_t DistanceSquaredBetweenPoints(::ArrayW<float_t, ::Array<float_t>*> a, ::ArrayW<float_t, ::Array<float_t>*> b);

  /// @brief Method Multiply, addr 0x3266a88, size 0x8, virtual true, abstract: false, final false
  inline float_t Multiply(float_t a, float_t b);

  static inline ::UnityEngine::ProBuilder::KdTree::Math::FloatMath* New_ctor();

  /// @brief Method Subtract, addr 0x3266a80, size 0x8, virtual true, abstract: false, final false
  inline float_t Subtract(float_t a, float_t b);

  /// @brief Method .ctor, addr 0x3266b90, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_MaxValue, addr 0x3266a4c, size 0xc, virtual true, abstract: false, final false
  inline float_t get_MaxValue();

  /// @brief Method get_MinValue, addr 0x3266a40, size 0xc, virtual true, abstract: false, final false
  inline float_t get_MinValue();

  /// @brief Method get_NegativeInfinity, addr 0x3266a60, size 0xc, virtual true, abstract: false, final false
  inline float_t get_NegativeInfinity();

  /// @brief Method get_PositiveInfinity, addr 0x3266a6c, size 0xc, virtual true, abstract: false, final false
  inline float_t get_PositiveInfinity();

  /// @brief Method get_Zero, addr 0x3266a58, size 0x8, virtual true, abstract: false, final false
  inline float_t get_Zero();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatMath();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatMath", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatMath(FloatMath&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatMath", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatMath(FloatMath const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::KdTree::Math::FloatMath, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::KdTree::Math
NEED_NO_BOX(::UnityEngine::ProBuilder::KdTree::Math::FloatMath);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::KdTree::Math::FloatMath*, "UnityEngine.ProBuilder.KdTree.Math", "FloatMath");
