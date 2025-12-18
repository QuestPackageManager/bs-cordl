#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DynamicArrayExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicArrayExtensions)
namespace System {
template <typename T> struct Span_1;
}
namespace UnityEngine::Rendering {
template <typename T> class DynamicArray_1_SortComparer;
}
namespace UnityEngine::Rendering {
template <typename T> class DynamicArray_1;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class DynamicArrayExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::DynamicArrayExtensions);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DynamicArrayExtensions
class CORDL_TYPE DynamicArrayExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Partition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t Partition(::System::Span_1<T> data, int32_t left, int32_t right);

  /// @brief Method Partition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t Partition(::System::Span_1<T> data, int32_t left, int32_t right, ::UnityEngine::Rendering::DynamicArray_1_SortComparer<T>* comparer);

  /// @brief Method QuickSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void QuickSort(::UnityEngine::Rendering::DynamicArray_1<T>* array);

  /// @brief Method QuickSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void QuickSort(::UnityEngine::Rendering::DynamicArray_1<T>* array, ::UnityEngine::Rendering::DynamicArray_1_SortComparer<T>* comparer);

  /// @brief Method QuickSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void QuickSort(::System::Span_1<T> data, int32_t left, int32_t right);

  /// @brief Method QuickSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void QuickSort(::System::Span_1<T> data, int32_t left, int32_t right, ::UnityEngine::Rendering::DynamicArray_1_SortComparer<T>* comparer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicArrayExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamicArrayExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamicArrayExtensions(DynamicArrayExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamicArrayExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamicArrayExtensions(DynamicArrayExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11881 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DynamicArrayExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::DynamicArrayExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DynamicArrayExtensions*, "UnityEngine.Rendering", "DynamicArrayExtensions");
