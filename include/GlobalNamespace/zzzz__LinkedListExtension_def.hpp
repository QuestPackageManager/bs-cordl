#pragma once
// IWYU pragma private; include "GlobalNamespace/LinkedListExtension.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LinkedListExtension)
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LinkedListExtension;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LinkedListExtension);
// Type: ::LinkedListExtension
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LinkedListExtension*
class CORDL_TYPE LinkedListExtension : public ::System::Object {
public:
  // Declarations
  /// @brief Method Index, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t Index(::System::Collections::Generic::LinkedListNode_1<T>* searchNode);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LinkedListExtension();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LinkedListExtension", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LinkedListExtension(LinkedListExtension&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LinkedListExtension", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LinkedListExtension(LinkedListExtension const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16865 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LinkedListExtension, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LinkedListExtension);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LinkedListExtension*, "", "LinkedListExtension");
