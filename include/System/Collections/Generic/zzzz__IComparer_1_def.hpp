#pragma once
// IWYU pragma private; include "System/Collections/Generic/IComparer_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IComparer_1)
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::IComparer_1);
// Dependencies
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Collections.Generic.IComparer`1<T>
class CORDL_TYPE IComparer_1 {
public:
  // Declarations
  /// @brief Method Compare, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t Compare(T x, T y);

  // Ctor Parameters [CppParam { name: "", ty: "IComparer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IComparer_1(IComparer_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3766 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::IComparer_1, "System.Collections.Generic", "IComparer`1");
