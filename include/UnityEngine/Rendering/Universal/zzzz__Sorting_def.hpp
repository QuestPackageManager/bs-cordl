#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Sorting.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Sorting)
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace UnityEngine::Rendering::Universal {
template <typename T> struct Sorting___c__DisplayClass4_0_1;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct Sorting;
}
namespace UnityEngine::Rendering::Universal {
template <typename T> struct Sorting___c__DisplayClass4_0_1;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::Sorting);
MARK_GEN_VAL_T(::UnityEngine::Rendering::Universal::Sorting___c__DisplayClass4_0_1);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.Sorting/<>c__DisplayClass4_0`1<T>
struct CORDL_TYPE Sorting___c__DisplayClass4_0_1 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Sorting___c__DisplayClass4_0_1();

  // Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: None }]
  constexpr Sorting___c__DisplayClass4_0_1(::ArrayW<T, ::Array<T>*> data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12753 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field data, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::Universal
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.Sorting
#pragma pack(push, 0)
struct CORDL_TYPE Sorting {
public:
  // Declarations
  template <typename T> using __c__DisplayClass4_0_1 = ::UnityEngine::Rendering::Universal::Sorting___c__DisplayClass4_0_1<T>;

  /// @brief Field s_InsertionSortSampler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_InsertionSortSampler, put = setStaticF_s_InsertionSortSampler)) ::UnityEngine::Rendering::ProfilingSampler* s_InsertionSortSampler;

  /// @brief Field s_QuickSortSampler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_QuickSortSampler, put = setStaticF_s_QuickSortSampler)) ::UnityEngine::Rendering::ProfilingSampler* s_QuickSortSampler;

  /// @brief Method InsertionSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void InsertionSort(::ArrayW<T, ::Array<T>*> data, ::System::Func_3<T, T, int32_t>* compare);

  /// @brief Method InsertionSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void InsertionSort(::ArrayW<T, ::Array<T>*> data, int32_t start, int32_t end, ::System::Func_3<T, T, int32_t>* compare);

  /// @brief Method Median3Pivot, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Median3Pivot(::ArrayW<T, ::Array<T>*> data, int32_t start, int32_t pivot, int32_t end, ::System::Func_3<T, T, int32_t>* compare);

  /// @brief Method Partition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t Partition(::ArrayW<T, ::Array<T>*> data, int32_t start, int32_t end, ::System::Func_3<T, T, int32_t>* compare);

  /// @brief Method QuickSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void QuickSort(::ArrayW<T, ::Array<T>*> data, ::System::Func_3<T, T, int32_t>* compare);

  /// @brief Method QuickSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void QuickSort(::ArrayW<T, ::Array<T>*> data, int32_t start, int32_t end, ::System::Func_3<T, T, int32_t>* compare);

  /// @brief Method <Median3Pivot>g__Swap|4_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline void _Median3Pivot_g__Swap_4_0(int32_t a, int32_t b, ::ByRef<::UnityEngine::Rendering::Universal::Sorting___c__DisplayClass4_0_1<T>> _cordl_fixed_empty_name_whitespace);

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_s_InsertionSortSampler();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_s_QuickSortSampler();

  static inline void setStaticF_s_InsertionSortSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_s_QuickSortSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Sorting();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12754 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Sorting, 0x1>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Sorting, "UnityEngine.Rendering.Universal", "Sorting");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Rendering::Universal::Sorting___c__DisplayClass4_0_1, "UnityEngine.Rendering.Universal", "Sorting/<>c__DisplayClass4_0`1");
