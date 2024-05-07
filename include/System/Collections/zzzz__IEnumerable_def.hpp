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
// Type: System.Collections::IEnumerable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// CS Name: ::System.Collections::IEnumerable*
class CORDL_TYPE IEnumerable {
public:
  // Declarations
  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "IEnumerable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IEnumerable(IEnumerable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IEnumerable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEnumerable(IEnumerable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections
NEED_NO_BOX(::System::Collections::IEnumerable);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::IEnumerable*, "System.Collections", "IEnumerable");
