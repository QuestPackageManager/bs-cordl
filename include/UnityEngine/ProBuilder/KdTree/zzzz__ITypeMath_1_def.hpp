#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ITypeMath_1)
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
template <typename T> class ITypeMath_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ProBuilder::KdTree::ITypeMath_1);
// Type: UnityEngine.ProBuilder.KdTree::ITypeMath`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15920))
// CS Name: ::UnityEngine.ProBuilder.KdTree::ITypeMath`1<T>*
class CORDL_TYPE ITypeMath_1 {
public:
  // Declarations
  __declspec(property(get = get_MinValue)) T MinValue;

  __declspec(property(get = get_MaxValue)) T MaxValue;

  __declspec(property(get = get_Zero)) T Zero;

  __declspec(property(get = get_NegativeInfinity)) T NegativeInfinity;

  __declspec(property(get = get_PositiveInfinity)) T PositiveInfinity;

  /// @brief Method Compare, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t Compare(T a, T b);

  /// @brief Method get_MinValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T get_MinValue();

  /// @brief Method get_MaxValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T get_MaxValue();

  /// @brief Method Min, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T Min(T a, T b);

  /// @brief Method Max, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T Max(T a, T b);

  /// @brief Method AreEqual, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool AreEqual(T a, T b);

  /// @brief Method AreEqual, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool AreEqual(::ArrayW<T, ::Array<T>*> a, ::ArrayW<T, ::Array<T>*> b);

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T Add(T a, T b);

  /// @brief Method Subtract, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T Subtract(T a, T b);

  /// @brief Method Multiply, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T Multiply(T a, T b);

  /// @brief Method get_Zero, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T get_Zero();

  /// @brief Method get_NegativeInfinity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T get_NegativeInfinity();

  /// @brief Method get_PositiveInfinity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T get_PositiveInfinity();

  /// @brief Method DistanceSquaredBetweenPoints, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T DistanceSquaredBetweenPoints(::ArrayW<T, ::Array<T>*> a, ::ArrayW<T, ::Array<T>*> b);

  // Ctor Parameters [CppParam { name: "", ty: "ITypeMath_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITypeMath_1(ITypeMath_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITypeMath_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITypeMath_1(ITypeMath_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ProBuilder::KdTree
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::KdTree::ITypeMath_1, "UnityEngine.ProBuilder.KdTree", "ITypeMath`1");
