#pragma once
// IWYU pragma private; include "System/Data/DataViewListener.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataViewListener)
namespace System::ComponentModel {
class CollectionChangeEventArgs;
}
namespace System::ComponentModel {
class ListChangedEventArgs;
}
namespace System::ComponentModel {
struct ListChangedType;
}
namespace System::Data {
class DataRow;
}
namespace System::Data {
class DataTable;
}
namespace System::Data {
class DataView;
}
namespace System::Data {
class Index;
}
namespace System {
class Object;
}
namespace System {
class WeakReference;
}
// Forward declare root types
namespace System::Data {
class DataViewListener;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataViewListener);
// Type: System.Data::DataViewListener
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::DataViewListener*
class CORDL_TYPE DataViewListener : public ::System::Object {
public:
  // Declarations
  /// @brief Field _dvWeak, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__dvWeak, put = __cordl_internal_set__dvWeak)) ::System::WeakReference* _dvWeak;

  /// @brief Field _index, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) ::System::Data::Index* _index;

  /// @brief Field _objectID, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__objectID, put = __cordl_internal_set__objectID)) int32_t _objectID;

  /// @brief Field _table, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__table, put = __cordl_internal_set__table)) ::System::Data::DataTable* _table;

  /// @brief Method ChildRelationCollectionChanged, addr 0x410b40c, size 0xb0, virtual false, abstract: false, final false
  inline void ChildRelationCollectionChanged(::System::Object* sender, ::System::ComponentModel::CollectionChangeEventArgs* e);

  /// @brief Method CleanUp, addr 0x410b4bc, size 0x1c, virtual false, abstract: false, final false
  inline void CleanUp(bool updateListeners);

  /// @brief Method ColumnCollectionChanged, addr 0x410b588, size 0xcc, virtual false, abstract: false, final false
  inline void ColumnCollectionChanged(::System::Object* sender, ::System::ComponentModel::CollectionChangeEventArgs* e);

  /// @brief Method IndexListChanged, addr 0x410b720, size 0xb0, virtual false, abstract: false, final false
  inline void IndexListChanged(::System::ComponentModel::ListChangedEventArgs* e);

  /// @brief Method MaintainDataView, addr 0x410b654, size 0xcc, virtual false, abstract: false, final false
  inline void MaintainDataView(::System::ComponentModel::ListChangedType changedType, ::System::Data::DataRow* row, bool trackAddRemove);

  static inline ::System::Data::DataViewListener* New_ctor(::System::Data::DataView* dv);

  /// @brief Method ParentRelationCollectionChanged, addr 0x410b4d8, size 0xb0, virtual false, abstract: false, final false
  inline void ParentRelationCollectionChanged(::System::Object* sender, ::System::ComponentModel::CollectionChangeEventArgs* e);

  /// @brief Method RegisterListChangedEvent, addr 0x410aba8, size 0xe0, virtual false, abstract: false, final false
  inline void RegisterListChangedEvent(::System::Data::Index* index);

  /// @brief Method RegisterListener, addr 0x410b7d0, size 0x218, virtual false, abstract: false, final false
  inline void RegisterListener(::System::Data::DataTable* table);

  /// @brief Method RegisterMetaDataEvents, addr 0x4107b60, size 0x1dc, virtual false, abstract: false, final false
  inline void RegisterMetaDataEvents(::System::Data::DataTable* table);

  /// @brief Method UnregisterListChangedEvent, addr 0x410aaa8, size 0x100, virtual false, abstract: false, final false
  inline void UnregisterListChangedEvent();

  /// @brief Method UnregisterMetaDataEvents, addr 0x4108828, size 0x8, virtual false, abstract: false, final false
  inline void UnregisterMetaDataEvents();

  /// @brief Method UnregisterMetaDataEvents, addr 0x410b9e8, size 0x298, virtual false, abstract: false, final false
  inline void UnregisterMetaDataEvents(bool updateListeners);

  constexpr ::System::WeakReference*& __cordl_internal_get__dvWeak();

  constexpr ::cordl_internals::to_const_pointer<::System::WeakReference*> const& __cordl_internal_get__dvWeak() const;

  constexpr ::System::Data::Index*& __cordl_internal_get__index();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::Index*> const& __cordl_internal_get__index() const;

  constexpr int32_t const& __cordl_internal_get__objectID() const;

  constexpr int32_t& __cordl_internal_get__objectID();

  constexpr ::System::Data::DataTable*& __cordl_internal_get__table();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataTable*> const& __cordl_internal_get__table() const;

  constexpr void __cordl_internal_set__dvWeak(::System::WeakReference* value);

  constexpr void __cordl_internal_set__index(::System::Data::Index* value);

  constexpr void __cordl_internal_set__objectID(int32_t value);

  constexpr void __cordl_internal_set__table(::System::Data::DataTable* value);

  /// @brief Method .ctor, addr 0x4107ae4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataView* dv);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataViewListener();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataViewListener", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataViewListener(DataViewListener&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataViewListener", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataViewListener(DataViewListener const&) = delete;

  /// @brief Field _dvWeak, offset: 0x10, size: 0x8, def value: None
  ::System::WeakReference* ____dvWeak;

  /// @brief Field _table, offset: 0x18, size: 0x8, def value: None
  ::System::Data::DataTable* ____table;

  /// @brief Field _index, offset: 0x20, size: 0x8, def value: None
  ::System::Data::Index* ____index;

  /// @brief Field _objectID, offset: 0x28, size: 0x4, def value: None
  int32_t ____objectID;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11373 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::DataViewListener, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Data::DataViewListener, ____dvWeak) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataViewListener, ____table) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataViewListener, ____index) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataViewListener, ____objectID) == 0x28, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataViewListener);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataViewListener*, "System.Data", "DataViewListener");
