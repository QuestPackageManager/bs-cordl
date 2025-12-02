#pragma once
// IWYU pragma private; include "Unity/Collections/IIndexable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IIndexable_1)
// Forward declare root types
namespace Unity::Collections {
template <typename T> class IIndexable_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Collections::IIndexable_1);
// Dependencies
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Unity.Collections.IIndexable`1<T>
class CORDL_TYPE IIndexable_1 {
public:
  // Declarations
  __declspec(property(get = get_Length, put = set_Length)) int32_t Length;

  /// @brief Method ElementAt, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ByRef<T> ElementAt(int32_t index);

  /// @brief Method get_Length, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Method set_Length, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_Length(int32_t value);

  // Ctor Parameters [CppParam { name: "", ty: "IIndexable_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IIndexable_1(IIndexable_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15603 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Collections::IIndexable_1, "Unity.Collections", "IIndexable`1");
