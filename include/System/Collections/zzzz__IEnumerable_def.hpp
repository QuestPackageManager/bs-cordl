#pragma once
// IWYU pragma private; include "System/Collections/IEnumerable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEnumerable)
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace System::Collections {
class IEnumerable;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::IEnumerable);
// Dependencies
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.IEnumerable
class CORDL_TYPE IEnumerable {
public:
  // Declarations
  /// @brief Method GetEnumerator, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "IEnumerable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEnumerable(IEnumerable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3766 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections
NEED_NO_BOX(::System::Collections::IEnumerable);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::IEnumerable*, "System.Collections", "IEnumerable");
