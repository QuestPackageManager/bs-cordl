#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/KdTree/Math/TypeMath_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypeMath_1)
namespace UnityEngine::ProBuilder::KdTree {
template <typename T> class ITypeMath_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree::Math {
template <typename T> class TypeMath_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1);
// Type: UnityEngine.ProBuilder.KdTree.Math::TypeMath`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::KdTree::Math {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder.KdTree.Math::TypeMath`1<T>*
class CORDL_TYPE TypeMath_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_MaxValue)) T MaxValue;

  __declspec(property(get = get_MinValue)) T MinValue;

  __declspec(property(get = get_NegativeInfinity)) T NegativeInfinity;

  __declspec(property(get = get_PositiveInfinity)) T PositiveInfinity;

  __declspec(property(get = get_Zero)) T Zero;

  /// @brief Convert operator to "::UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>"
  constexpr operator ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T Add(T a, T b);

  /// @brief Method AreEqual, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool AreEqual(::ArrayW<T, ::Array<T>*> a, ::ArrayW<T, ::Array<T>*> b);

  /// @brief Method AreEqual, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool AreEqual(T a, T b);

  /// @brief Method Compare, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t Compare(T a, T b);

  /// @brief Method DistanceSquaredBetweenPoints, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T DistanceSquaredBetweenPoints(::ArrayW<T, ::Array<T>*> a, ::ArrayW<T, ::Array<T>*> b);

  /// @brief Method Max, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T Max(T a, T b);

  /// @brief Method Min, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T Min(T a, T b);

  /// @brief Method Multiply, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T Multiply(T a, T b);

  static inline ::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>* New_ctor();

  /// @brief Method Subtract, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T Subtract(T a, T b);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_MaxValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T get_MaxValue();

  /// @brief Method get_MinValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T get_MinValue();

  /// @brief Method get_NegativeInfinity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T get_NegativeInfinity();

  /// @brief Method get_PositiveInfinity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T get_PositiveInfinity();

  /// @brief Method get_Zero, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T get_Zero();

  /// @brief Convert to "::UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>"
  constexpr ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>* i___UnityEngine__ProBuilder__KdTree__ITypeMath_1_T_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeMath_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeMath_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeMath_1(TypeMath_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeMath_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeMath_1(TypeMath_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18471 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ProBuilder::KdTree::Math
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1, "UnityEngine.ProBuilder.KdTree.Math", "TypeMath`1");
