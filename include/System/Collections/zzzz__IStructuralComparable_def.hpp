#pragma once
// IWYU pragma private; include "System/Collections/IStructuralComparable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IStructuralComparable)
namespace System::Collections {
class IComparer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections {
class IStructuralComparable;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::IStructuralComparable);
// Dependencies
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.IStructuralComparable
class CORDL_TYPE IStructuralComparable {
public:
  // Declarations
  /// @brief Method CompareTo, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t CompareTo(::System::Object* other, ::System::Collections::IComparer* comparer);

  // Ctor Parameters [CppParam { name: "", ty: "IStructuralComparable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IStructuralComparable(IStructuralComparable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3770 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections
NEED_NO_BOX(::System::Collections::IStructuralComparable);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::IStructuralComparable*, "System.Collections", "IStructuralComparable");
