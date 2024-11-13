#pragma once
// IWYU pragma private; include "GlobalNamespace/ListExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListExtensions)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Predicate_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ListExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ListExtensions);
// Type: ::ListExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ListExtensions*
class CORDL_TYPE ListExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method FindIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t FindIndex(::System::Collections::Generic::IReadOnlyList_1<T>* list, ::System::Predicate_1<T>* match);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t IndexOf(::System::Collections::Generic::IReadOnlyList_1<T>* self, T item);

  /// @brief Method InsertIntoSortedListFromEnd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void InsertIntoSortedListFromEnd(::System::Collections::Generic::List_1<T>* sortedList, T newItem);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListExtensions(ListExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListExtensions(ListExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16874 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ListExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ListExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ListExtensions*, "", "ListExtensions");
