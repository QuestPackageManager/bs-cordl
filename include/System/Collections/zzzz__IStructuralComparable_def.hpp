#pragma once
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
// Type: System.Collections::IStructuralComparable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3763))
// CS Name: ::System.Collections::IStructuralComparable*
class CORDL_TYPE IStructuralComparable {
public:
  // Declarations
  /// @brief Method CompareTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t CompareTo(::System::Object* other, ::System::Collections::IComparer* comparer);

  // Ctor Parameters [CppParam { name: "", ty: "IStructuralComparable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IStructuralComparable(IStructuralComparable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IStructuralComparable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IStructuralComparable(IStructuralComparable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections
NEED_NO_BOX(::System::Collections::IStructuralComparable);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::IStructuralComparable*, "System.Collections", "IStructuralComparable");
