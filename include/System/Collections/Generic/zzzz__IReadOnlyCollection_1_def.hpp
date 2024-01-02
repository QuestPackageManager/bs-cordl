#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IReadOnlyCollection_1)
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> class IReadOnlyCollection_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::IReadOnlyCollection_1);
// Type: System.Collections.Generic::IReadOnlyCollection`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3836))
// CS Name: ::System.Collections.Generic::IReadOnlyCollection`1<T>*
class CORDL_TYPE IReadOnlyCollection_1 {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_Count();

  // Ctor Parameters [CppParam { name: "", ty: "IReadOnlyCollection_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IReadOnlyCollection_1(IReadOnlyCollection_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IReadOnlyCollection_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IReadOnlyCollection_1(IReadOnlyCollection_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::IReadOnlyCollection_1, "System.Collections.Generic", "IReadOnlyCollection`1");
