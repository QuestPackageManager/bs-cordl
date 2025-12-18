#pragma once
// IWYU pragma private; include "Unity/Collections/INativeList_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(INativeList_1)
namespace Unity::Collections {
template <typename T> class IIndexable_1;
}
// Forward declare root types
namespace Unity::Collections {
template <typename T> class INativeList_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Collections::INativeList_1);
// Dependencies
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Unity.Collections.INativeList`1<T>
class CORDL_TYPE INativeList_1 {
public:
  // Declarations
  __declspec(property(get = get_Capacity, put = set_Capacity)) int32_t Capacity;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_Item, put = set_Item)) T Item[];

  /// @brief Convert operator to "::Unity::Collections::IIndexable_1<T>"
  constexpr operator ::Unity::Collections::IIndexable_1<T>*() noexcept;

  /// @brief Method Clear, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method get_Capacity, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_Capacity();

  /// @brief Method get_IsEmpty, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method get_Item, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T get_Item(int32_t index);

  /// @brief Convert to "::Unity::Collections::IIndexable_1<T>"
  constexpr ::Unity::Collections::IIndexable_1<T>* i___Unity__Collections__IIndexable_1_T_() noexcept;

  /// @brief Method set_Capacity, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_Capacity(int32_t value);

  /// @brief Method set_Item, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_Item(int32_t index, T value);

  // Ctor Parameters [CppParam { name: "", ty: "INativeList_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INativeList_1(INativeList_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15618 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Collections::INativeList_1, "Unity.Collections", "INativeList`1");
