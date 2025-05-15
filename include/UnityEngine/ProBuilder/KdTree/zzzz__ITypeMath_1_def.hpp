#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/KdTree/ITypeMath_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ITypeMath_1)
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
template <typename T> class ITypeMath_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ProBuilder::KdTree::ITypeMath_1);
// Dependencies
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.ProBuilder.KdTree.ITypeMath`1<T>
class CORDL_TYPE ITypeMath_1 {
public:
  // Declarations
  __declspec(property(get = get_MaxValue)) T MaxValue;

  __declspec(property(get = get_MinValue)) T MinValue;

  __declspec(property(get = get_NegativeInfinity)) T NegativeInfinity;

  __declspec(property(get = get_PositiveInfinity)) T PositiveInfinity;

  __declspec(property(get = get_Zero)) T Zero;

  /// @brief Method Add, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T Add(T a, T b);

  /// @brief Method AreEqual, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool AreEqual(::ArrayW<T, ::Array<T>*> a, ::ArrayW<T, ::Array<T>*> b);

  /// @brief Method AreEqual, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool AreEqual(T a, T b);

  /// @brief Method Compare, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t Compare(T a, T b);

  /// @brief Method DistanceSquaredBetweenPoints, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T DistanceSquaredBetweenPoints(::ArrayW<T, ::Array<T>*> a, ::ArrayW<T, ::Array<T>*> b);

  /// @brief Method Max, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T Max(T a, T b);

  /// @brief Method Min, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T Min(T a, T b);

  /// @brief Method Multiply, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T Multiply(T a, T b);

  /// @brief Method Subtract, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T Subtract(T a, T b);

  /// @brief Method get_MaxValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T get_MaxValue();

  /// @brief Method get_MinValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T get_MinValue();

  /// @brief Method get_NegativeInfinity, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T get_NegativeInfinity();

  /// @brief Method get_PositiveInfinity, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T get_PositiveInfinity();

  /// @brief Method get_Zero, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T get_Zero();

  // Ctor Parameters [CppParam { name: "", ty: "ITypeMath_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITypeMath_1(ITypeMath_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18557 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ProBuilder::KdTree
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::KdTree::ITypeMath_1, "UnityEngine.ProBuilder.KdTree", "ITypeMath`1");
