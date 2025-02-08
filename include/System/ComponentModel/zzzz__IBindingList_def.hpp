#pragma once
// IWYU pragma private; include "System/ComponentModel/IBindingList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IBindingList)
namespace System::ComponentModel {
struct ListSortDirection;
}
namespace System::ComponentModel {
class PropertyDescriptor;
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
// Dependencies System.Collections.ICollection, System.Collections.IEnumerable, System.Collections.IList
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.IBindingList
class CORDL_TYPE IBindingList {
public:
  // Declarations
  __declspec(property(get = get_AllowEdit)) bool AllowEdit;

  __declspec(property(get = get_AllowNew)) bool AllowNew;

  __declspec(property(get = get_AllowRemove)) bool AllowRemove;

  __declspec(property(get = get_IsSorted)) bool IsSorted;

  __declspec(property(get = get_SortDirection)) ::System::ComponentModel::ListSortDirection SortDirection;

  __declspec(property(get = get_SortProperty)) ::System::ComponentModel::PropertyDescriptor* SortProperty;

  __declspec(property(get = get_SupportsChangeNotification)) bool SupportsChangeNotification;

  __declspec(property(get = get_SupportsSearching)) bool SupportsSearching;

  __declspec(property(get = get_SupportsSorting)) bool SupportsSorting;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Method AddIndex, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AddIndex(::System::ComponentModel::PropertyDescriptor* property);

  /// @brief Method AddNew, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* AddNew();

  /// @brief Method ApplySort, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ApplySort(::System::ComponentModel::PropertyDescriptor* property, ::System::ComponentModel::ListSortDirection direction);

  /// @brief Method Find, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t Find(::System::ComponentModel::PropertyDescriptor* property, ::System::Object* key);

  /// @brief Method RemoveIndex, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RemoveIndex(::System::ComponentModel::PropertyDescriptor* property);

  /// @brief Method RemoveSort, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RemoveSort();

  /// @brief Method get_AllowEdit, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_AllowEdit();

  /// @brief Method get_AllowNew, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_AllowNew();

  /// @brief Method get_AllowRemove, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_AllowRemove();

  /// @brief Method get_IsSorted, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsSorted();

  /// @brief Method get_SortDirection, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::ComponentModel::ListSortDirection get_SortDirection();

  /// @brief Method get_SortProperty, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptor* get_SortProperty();

  /// @brief Method get_SupportsChangeNotification, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_SupportsChangeNotification();

  /// @brief Method get_SupportsSearching, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_SupportsSearching();

  /// @brief Method get_SupportsSorting, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_SupportsSorting();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IList"
  constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IBindingList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBindingList(IBindingList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9391 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::IBindingList);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::IBindingList*, "System.ComponentModel", "IBindingList");
