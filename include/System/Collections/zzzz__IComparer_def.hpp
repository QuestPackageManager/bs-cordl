#pragma once
// IWYU pragma private; include "System/Collections/IComparer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IComparer)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections {
class IComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::IComparer);
// Dependencies
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.IComparer
class CORDL_TYPE IComparer {
public:
  // Declarations
  /// @brief Method Compare, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t Compare(::System::Object* x, ::System::Object* y);

  // Ctor Parameters [CppParam { name: "", ty: "IComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IComparer(IComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3688 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections
NEED_NO_BOX(::System::Collections::IComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::IComparer*, "System.Collections", "IComparer");
