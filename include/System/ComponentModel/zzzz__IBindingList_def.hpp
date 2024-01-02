#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IBindingList)
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IList;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::ComponentModel {
struct ListSortDirection;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class IBindingList;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::IBindingList);
// Type: System.ComponentModel::IBindingList
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9430))
// CS Name: ::System.ComponentModel::IBindingList*
class CORDL_TYPE IBindingList {
public:
  // Declarations
  __declspec(property(get = get_AllowNew)) bool AllowNew;

  __declspec(property(get = get_AllowEdit)) bool AllowEdit;

  __declspec(property(get = get_AllowRemove)) bool AllowRemove;

  __declspec(property(get = get_SupportsChangeNotification)) bool SupportsChangeNotification;

  __declspec(property(get = get_SupportsSearching)) bool SupportsSearching;

  __declspec(property(get = get_SupportsSorting)) bool SupportsSorting;

  __declspec(property(get = get_IsSorted)) bool IsSorted;

  __declspec(property(get = get_SortProperty))::System::ComponentModel::PropertyDescriptor* SortProperty;

  __declspec(property(get = get_SortDirection))::System::ComponentModel::ListSortDirection SortDirection;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method get_AllowNew, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_AllowNew();

  /// @brief Method AddNew, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* AddNew();

  /// @brief Method get_AllowEdit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_AllowEdit();

  /// @brief Method get_AllowRemove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_AllowRemove();

  /// @brief Method get_SupportsChangeNotification, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_SupportsChangeNotification();

  /// @brief Method get_SupportsSearching, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_SupportsSearching();

  /// @brief Method get_SupportsSorting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_SupportsSorting();

  /// @brief Method get_IsSorted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsSorted();

  /// @brief Method get_SortProperty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::ComponentModel::PropertyDescriptor* get_SortProperty();

  /// @brief Method get_SortDirection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::ComponentModel::ListSortDirection get_SortDirection();

  /// @brief Method AddIndex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AddIndex(::System::ComponentModel::PropertyDescriptor* property);

  /// @brief Method ApplySort, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ApplySort(::System::ComponentModel::PropertyDescriptor* property, ::System::ComponentModel::ListSortDirection direction);

  /// @brief Method Find, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t Find(::System::ComponentModel::PropertyDescriptor* property, ::System::Object* key);

  /// @brief Method RemoveIndex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RemoveIndex(::System::ComponentModel::PropertyDescriptor* property);

  /// @brief Method RemoveSort, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RemoveSort();

  // Ctor Parameters [CppParam { name: "", ty: "IBindingList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBindingList(IBindingList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBindingList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBindingList(IBindingList const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::IBindingList);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::IBindingList*, "System.ComponentModel", "IBindingList");
