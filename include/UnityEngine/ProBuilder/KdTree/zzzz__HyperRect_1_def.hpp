#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\KdTree\HyperRect_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HyperRect_1)
namespace UnityEngine::ProBuilder::KdTree {
template <typename T> class ITypeMath_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
template <typename T> struct HyperRect_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::ProBuilder::KdTree::HyperRect_1);
DEFINE_IL2CPP_GEN_CLASS(::UnityEngine::ProBuilder::KdTree::HyperRect_1, "UnityEngine.ProBuilder.KdTree", "HyperRect`1");
// Dependencies
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.ProBuilder.KdTree.HyperRect`1<T>
struct CORDL_TYPE HyperRect_1 {
public:
  // Declarations
  __declspec(property(get = get_MaxPoint, put = set_MaxPoint)) ::ArrayW<T> MaxPoint;

  __declspec(property(get = get_MinPoint, put = set_MinPoint)) ::ArrayW<T> MinPoint;

  /// @brief Method Clone, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::KdTree::HyperRect_1<T> Clone();

  /// @brief Method GetClosestPoint, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<T> GetClosestPoint(::ArrayW<T> toPoint, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>* math);

  /// @brief Method Infinite, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::KdTree::HyperRect_1<T> Infinite(int32_t dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>* math);

  /// @brief Method get_MaxPoint, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<T> get_MaxPoint();

  /// @brief Method get_MinPoint, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<T> get_MinPoint();

  /// @brief Method set_MaxPoint, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_MaxPoint(::ArrayW<T> value);

  /// @brief Method set_MinPoint, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_MinPoint(::ArrayW<T> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HyperRect_1();

  // Ctor Parameters [CppParam { name: "minPoint", ty: "::ArrayW<T>", modifiers: "", def_value: None }, CppParam { name: "maxPoint", ty: "::ArrayW<T>", modifiers: "", def_value: None }]
  constexpr HyperRect_1(::ArrayW<T> minPoint, ::ArrayW<T> maxPoint) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22677 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field minPoint, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<T> minPoint;

  /// @brief Field maxPoint, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<T> maxPoint;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::ProBuilder::KdTree
