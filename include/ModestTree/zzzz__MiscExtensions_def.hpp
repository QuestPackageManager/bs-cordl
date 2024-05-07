#pragma once
// IWYU pragma private; include "ModestTree/MiscExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MiscExtensions)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class LinkedList_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace ModestTree {
class MiscExtensions;
}
// Write type traits
MARK_REF_PTR_T(::ModestTree::MiscExtensions);
// Type: ModestTree::MiscExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ModestTree {
// Is value type: false
// CS Name: ::ModestTree::MiscExtensions*
class CORDL_TYPE MiscExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method AllocFreeAddRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AllocFreeAddRange(::System::Collections::Generic::IList_1<T>* list, ::System::Collections::Generic::IList_1<T>* items);

  /// @brief Method Fmt, addr 0x3610358, size 0x1b4, virtual false, abstract: false, final false
  static inline ::StringW Fmt(::StringW s, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method GetValueAndRemove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TVal> static inline TVal GetValueAndRemove(::System::Collections::Generic::IDictionary_2<TKey, TVal>* dictionary, TKey key);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t IndexOf(::System::Collections::Generic::IList_1<T>* list, T item);

  /// @brief Method Join, addr 0x361115c, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW Join(::System::Collections::Generic::IEnumerable_1<::StringW>* values, ::StringW separator);

  /// @brief Method RemoveWithConfirm, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TVal> static inline void RemoveWithConfirm(::System::Collections::Generic::IDictionary_2<TKey, TVal>* dictionary, TKey key);

  /// @brief Method RemoveWithConfirm, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void RemoveWithConfirm(::System::Collections::Generic::IList_1<T>* list, T item);

  /// @brief Method RemoveWithConfirm, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void RemoveWithConfirm(::System::Collections::Generic::LinkedList_1<T>* list, T item);

  /// @brief Method RemoveWithConfirm, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void RemoveWithConfirm(::System::Collections::Generic::HashSet_1<T>* set, T item);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MiscExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MiscExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MiscExtensions(MiscExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MiscExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MiscExtensions(MiscExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::MiscExtensions, 0x10>, "Size mismatch!");

} // namespace ModestTree
NEED_NO_BOX(::ModestTree::MiscExtensions);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::MiscExtensions*, "ModestTree", "MiscExtensions");
