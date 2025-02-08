#pragma once
// IWYU pragma private; include "System/Data/DataRelationCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__InternalDataCollectionBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataRelationCollection)
namespace GlobalNamespace {
class DataRelationCollection_DataSetRelationCollection;
}
namespace GlobalNamespace {
class DataRelationCollection_DataTableRelationCollection;
}
namespace System::ComponentModel {
class CollectionChangeEventArgs;
}
namespace System::ComponentModel {
class CollectionChangeEventHandler;
}
namespace System::Data {
class DataRelation;
}
namespace System::Data {
class DataSet;
}
// Forward declare root types
namespace System::Data {
class DataRelationCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataRelationCollection);
// Dependencies System.Data.InternalDataCollectionBase
namespace System::Data {
// Is value type: false
// CS Name: System.Data.DataRelationCollection
class CORDL_TYPE DataRelationCollection : public ::System::Data::InternalDataCollectionBase {
public:
  // Declarations
  using DataSetRelationCollection = ::GlobalNamespace::DataRelationCollection_DataSetRelationCollection;

  using DataTableRelationCollection = ::GlobalNamespace::DataRelationCollection_DataTableRelationCollection;

  __declspec(property(get = get_Item)) ::System::Data::DataRelation* Item[];

  __declspec(property(get = get_Item)) ::System::Data::DataRelation* Item[];

  __declspec(property(get = get_ObjectID)) int32_t ObjectID;

  /// @brief Field _defaultNameIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__defaultNameIndex, put = __cordl_internal_set__defaultNameIndex)) int32_t _defaultNameIndex;

  /// @brief Field _inTransition, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__inTransition, put = __cordl_internal_set__inTransition)) ::System::Data::DataRelation* _inTransition;

  /// @brief Field _objectID, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__objectID, put = __cordl_internal_set__objectID)) int32_t _objectID;

  /// @brief Field _onCollectionChangedDelegate, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__onCollectionChangedDelegate,
                      put = __cordl_internal_set__onCollectionChangedDelegate)) ::System::ComponentModel::CollectionChangeEventHandler* _onCollectionChangedDelegate;

  /// @brief Field _onCollectionChangingDelegate, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__onCollectionChangingDelegate,
                      put = __cordl_internal_set__onCollectionChangingDelegate)) ::System::ComponentModel::CollectionChangeEventHandler* _onCollectionChangingDelegate;

  /// @brief Field s_objectTypeCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_objectTypeCount, put = setStaticF_s_objectTypeCount)) int32_t s_objectTypeCount;

  /// @brief Method Add, addr 0x41654ec, size 0x288, virtual false, abstract: false, final false
  inline void Add(::System::Data::DataRelation* relation);

  /// @brief Method AddCore, addr 0x4165774, size 0x2a8, virtual true, abstract: false, final false
  inline void AddCore(::System::Data::DataRelation* relation);

  /// @brief Method AssignName, addr 0x4165c0c, size 0x24, virtual false, abstract: false, final false
  inline ::StringW AssignName();

  /// @brief Method Clear, addr 0x4165ce8, size 0x244, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Contains, addr 0x4165f2c, size 0x18, virtual true, abstract: false, final false
  inline bool Contains(::StringW name);

  /// @brief Method GetDataSet, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Data::DataSet* GetDataSet();

  /// @brief Method InternalIndexOf, addr 0x4165f44, size 0x178, virtual false, abstract: false, final false
  inline int32_t InternalIndexOf(::StringW name);

  /// @brief Method MakeName, addr 0x4165c30, size 0xb8, virtual false, abstract: false, final false
  inline ::StringW MakeName(int32_t index);

  static inline ::System::Data::DataRelationCollection* New_ctor();

  /// @brief Method OnCollectionChanged, addr 0x41660bc, size 0xd0, virtual true, abstract: false, final false
  inline void OnCollectionChanged(::System::ComponentModel::CollectionChangeEventArgs* ccevent);

  /// @brief Method OnCollectionChanging, addr 0x416618c, size 0xd0, virtual true, abstract: false, final false
  inline void OnCollectionChanging(::System::ComponentModel::CollectionChangeEventArgs* ccevent);

  /// @brief Method RegisterName, addr 0x416625c, size 0x1bc, virtual false, abstract: false, final false
  inline void RegisterName(::StringW name);

  /// @brief Method Remove, addr 0x4166418, size 0x1ac, virtual false, abstract: false, final false
  inline void Remove(::System::Data::DataRelation* relation);

  /// @brief Method RemoveAt, addr 0x41665c4, size 0x74, virtual false, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method RemoveCore, addr 0x4166638, size 0x1e8, virtual true, abstract: false, final false
  inline void RemoveCore(::System::Data::DataRelation* relation);

  /// @brief Method UnregisterName, addr 0x4166820, size 0x12c, virtual false, abstract: false, final false
  inline void UnregisterName(::StringW name);

  constexpr int32_t const& __cordl_internal_get__defaultNameIndex() const;

  constexpr int32_t& __cordl_internal_get__defaultNameIndex();

  constexpr ::System::Data::DataRelation* const& __cordl_internal_get__inTransition() const;

  constexpr ::System::Data::DataRelation*& __cordl_internal_get__inTransition();

  constexpr int32_t const& __cordl_internal_get__objectID() const;

  constexpr int32_t& __cordl_internal_get__objectID();

  constexpr ::System::ComponentModel::CollectionChangeEventHandler* const& __cordl_internal_get__onCollectionChangedDelegate() const;

  constexpr ::System::ComponentModel::CollectionChangeEventHandler*& __cordl_internal_get__onCollectionChangedDelegate();

  constexpr ::System::ComponentModel::CollectionChangeEventHandler* const& __cordl_internal_get__onCollectionChangingDelegate() const;

  constexpr ::System::ComponentModel::CollectionChangeEventHandler*& __cordl_internal_get__onCollectionChangingDelegate();

  constexpr void __cordl_internal_set__defaultNameIndex(int32_t value);

  constexpr void __cordl_internal_set__inTransition(::System::Data::DataRelation* value);

  constexpr void __cordl_internal_set__objectID(int32_t value);

  constexpr void __cordl_internal_set__onCollectionChangedDelegate(::System::ComponentModel::CollectionChangeEventHandler* value);

  constexpr void __cordl_internal_set__onCollectionChangingDelegate(::System::ComponentModel::CollectionChangeEventHandler* value);

  /// @brief Method .ctor, addr 0x416694c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_CollectionChanged, addr 0x4165a1c, size 0xf8, virtual false, abstract: false, final false
  inline void add_CollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* value);

  static inline int32_t getStaticF_s_objectTypeCount();

  /// @brief Method get_Item, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Data::DataRelation* get_Item(int32_t index);

  /// @brief Method get_Item, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Data::DataRelation* get_Item(::StringW name);

  /// @brief Method get_ObjectID, addr 0x41654e4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ObjectID();

  /// @brief Method remove_CollectionChanged, addr 0x4165b14, size 0xf8, virtual false, abstract: false, final false
  inline void remove_CollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* value);

  static inline void setStaticF_s_objectTypeCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataRelationCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataRelationCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataRelationCollection(DataRelationCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataRelationCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataRelationCollection(DataRelationCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11385 };

  /// @brief Field _inTransition, offset: 0x10, size: 0x8, def value: None
  ::System::Data::DataRelation* ____inTransition;

  /// @brief Field _defaultNameIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ____defaultNameIndex;

  /// @brief Field _onCollectionChangedDelegate, offset: 0x20, size: 0x8, def value: None
  ::System::ComponentModel::CollectionChangeEventHandler* ____onCollectionChangedDelegate;

  /// @brief Field _onCollectionChangingDelegate, offset: 0x28, size: 0x8, def value: None
  ::System::ComponentModel::CollectionChangeEventHandler* ____onCollectionChangingDelegate;

  /// @brief Field _objectID, offset: 0x30, size: 0x4, def value: None
  int32_t ____objectID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataRelationCollection, ____inTransition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRelationCollection, ____defaultNameIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRelationCollection, ____onCollectionChangedDelegate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRelationCollection, ____onCollectionChangingDelegate) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRelationCollection, ____objectID) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::DataRelationCollection, 0x38>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataRelationCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataRelationCollection*, "System.Data", "DataRelationCollection");
