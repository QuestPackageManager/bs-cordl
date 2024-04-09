#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReadOnlyDictionaryHelpers)
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System {
class Array;
}
// Forward declare root types
namespace System::Collections::ObjectModel {
class ReadOnlyDictionaryHelpers;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::ObjectModel::ReadOnlyDictionaryHelpers);
// Type: System.Collections.ObjectModel::ReadOnlyDictionaryHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections::ObjectModel {
// Is value type: false
// CS Name: ::System.Collections.ObjectModel::ReadOnlyDictionaryHelpers*
class CORDL_TYPE ReadOnlyDictionaryHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method CopyToNonGenericICollectionHelper, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void CopyToNonGenericICollectionHelper(::System::Collections::Generic::ICollection_1<T>* collection, ::System::Array* array, int32_t index);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadOnlyDictionaryHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReadOnlyDictionaryHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReadOnlyDictionaryHelpers(ReadOnlyDictionaryHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReadOnlyDictionaryHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReadOnlyDictionaryHelpers(ReadOnlyDictionaryHelpers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::ObjectModel::ReadOnlyDictionaryHelpers, 0x10>, "Size mismatch!");

} // namespace System::Collections::ObjectModel
NEED_NO_BOX(::System::Collections::ObjectModel::ReadOnlyDictionaryHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::ObjectModel::ReadOnlyDictionaryHelpers*, "System.Collections.ObjectModel", "ReadOnlyDictionaryHelpers");
