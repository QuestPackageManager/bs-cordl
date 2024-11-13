#pragma once
// IWYU pragma private; include "System/Linq/Expressions/ArrayBuilderExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ArrayBuilderExtensions)
namespace System::Collections::Generic {
template <typename T> struct ArrayBuilder_1;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
// Forward declare root types
namespace System::Linq::Expressions {
class ArrayBuilderExtensions;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::ArrayBuilderExtensions);
// Type: System.Linq.Expressions::ArrayBuilderExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::ArrayBuilderExtensions*
class CORDL_TYPE ArrayBuilderExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToReadOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* ToReadOnly(::System::Collections::Generic::ArrayBuilder_1<T> builder);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayBuilderExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArrayBuilderExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayBuilderExtensions(ArrayBuilderExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayBuilderExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayBuilderExtensions(ArrayBuilderExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13621 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::ArrayBuilderExtensions, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::ArrayBuilderExtensions);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::ArrayBuilderExtensions*, "System.Linq.Expressions", "ArrayBuilderExtensions");
