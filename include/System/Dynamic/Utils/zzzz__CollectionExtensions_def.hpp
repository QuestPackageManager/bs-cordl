#pragma once
// IWYU pragma private; include "System/Dynamic/Utils/CollectionExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(CollectionExtensions)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Runtime::CompilerServices {
template <typename T> class TrueReadOnlyCollection_1;
}
// Forward declare root types
namespace System::Dynamic::Utils {
class CollectionExtensions;
}
// Write type traits
MARK_REF_PTR_T(::System::Dynamic::Utils::CollectionExtensions);
// Type: System.Dynamic.Utils::CollectionExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Dynamic::Utils {
// Is value type: false
// CS Name: ::System.Dynamic.Utils::CollectionExtensions*
class CORDL_TYPE CollectionExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddFirst, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Runtime::CompilerServices::TrueReadOnlyCollection_1<T>* AddFirst(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* list, T item);

  /// @brief Method AddLast, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> AddLast(::ArrayW<T, ::Array<T>*> array, T item);

  /// @brief Method RemoveFirst, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> RemoveFirst(::ArrayW<T, ::Array<T>*> array);

  /// @brief Method RemoveLast, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> RemoveLast(::ArrayW<T, ::Array<T>*> array);

  /// @brief Method ToReadOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* ToReadOnly(::System::Collections::Generic::IEnumerable_1<T>* enumerable);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CollectionExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionExtensions(CollectionExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionExtensions(CollectionExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::Utils::CollectionExtensions, 0x10>, "Size mismatch!");

} // namespace System::Dynamic::Utils
NEED_NO_BOX(::System::Dynamic::Utils::CollectionExtensions);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::Utils::CollectionExtensions*, "System.Dynamic.Utils", "CollectionExtensions");
