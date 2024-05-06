#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__InternalDataCollectionBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataRelationCollection)
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
namespace System::Data {
class __DataRelationCollection__DataSetRelationCollection;
}
namespace System::Data {
class __DataRelationCollection__DataTableRelationCollection;
}
// Forward declare root types
namespace System::Data {
class DataRelationCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataRelationCollection);
// Type: System.Data::DataRelationCollection
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::DataRelationCollection*
class CORDL_TYPE DataRelationCollection : public ::System::Data::InternalDataCollectionBase {
public:
  // Declarations
  using DataSetRelationCollection = ::System::Data::__DataRelationCollection__DataSetRelationCollection;

  using DataTableRelationCollection = ::System::Data::__DataRelationCollection__DataTableRelationCollection;

  __declspec(property(get = get_Item))::System::Data::DataRelation* Item[];

  __declspec(property(get = get_Item))::System::Data::DataRelation* Item[];

  __declspec(property(get = get_ObjectID)) int32_t ObjectID;

  /// @brief Field _defaultNameIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__defaultNameIndex, put = __cordl_internal_set__defaultNameIndex)) int32_t _defaultNameIndex;

  /// @brief Field _inTransition, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__inTransition, put = __cordl_internal_set__inTransition))::System::Data::DataRelation* _inTransition;

  /// @brief Field _objectID, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__objectID, put = __cordl_internal_set__objectID)) int32_t _objectID;

  /// @brief Field _onCollectionChangedDelegate, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__onCollectionChangedDelegate,
                      put = __cordl_internal_set__onCollectionChangedDelegate))::System::ComponentModel::CollectionChangeEventHandler* _onCollectionChangedDelegate;

  /// @brief Field _onCollectionChangingDelegate, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__onCollectionChangingDelegate,
                      put = __cordl_internal_set__onCollectionChangingDelegate))::System::ComponentModel::CollectionChangeEventHandler* _onCollectionChangingDelegate;

  /// @brief Field s_objectTypeCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_objectTypeCount, put = setStaticF_s_objectTypeCount)) int32_t s_objectTypeCount;

  /// @brief Method Add, addr 0x2ca3724, size 0x298, virtual false, abstract: false, final false
  inline void Add(::System::Data::DataRelation* relation);

  /// @brief Method AddCore, addr 0x2ca39bc, size 0x2b0, virtual true, abstract: false, final false
  inline void AddCore(::System::Data::DataRelation* relation);

  /// @brief Method AssignName, addr 0x2ca3e5c, size 0x24, virtual false, abstract: false, final false
  inline ::StringW AssignName();

  /// @brief Method Clear, addr 0x2ca3f38, size 0x23c, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Contains, addr 0x2ca4174, size 0x18, virtual true, abstract: false, final false
  inline bool Contains(::StringW name);

  /// @brief Method GetDataSet, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Data::DataSet* GetDataSet();

  /// @brief Method InternalIndexOf, addr 0x2ca418c, size 0x180, virtual false, abstract: false, final false
  inline int32_t InternalIndexOf(::StringW name);

  /// @brief Method MakeName, addr 0x2ca3e80, size 0xb8, virtual false, abstract: false, final false
  inline ::StringW MakeName(int32_t index);

  static inline ::System::Data::DataRelationCollection* New_ctor();

  /// @brief Method OnCollectionChanged, addr 0x2ca430c, size 0xd0, virtual true, abstract: false, final false
  inline void OnCollectionChanged(::System::ComponentModel::CollectionChangeEventArgs* ccevent);

  /// @brief Method OnCollectionChanging, addr 0x2ca43dc, size 0xd0, virtual true, abstract: false, final false
  inline void OnCollectionChanging(::System::ComponentModel::CollectionChangeEventArgs* ccevent);

  /// @brief Method RegisterName, addr 0x2ca44ac, size 0x1c4, virtual false, abstract: false, final false
  inline void RegisterName(::StringW name);

  /// @brief Method Remove, addr 0x2ca4670, size 0x1c4, virtual false, abstract: false, final false
  inline void Remove(::System::Data::DataRelation* relation);

  /// @brief Method RemoveAt, addr 0x2ca4834, size 0x74, virtual false, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method RemoveCore, addr 0x2ca48a8, size 0x1e8, virtual true, abstract: false, final false
  inline void RemoveCore(::System::Data::DataRelation* relation);

  /// @brief Method UnregisterName, addr 0x2ca4a90, size 0x12c, virtual false, abstract: false, final false
  inline void UnregisterName(::StringW name);

  constexpr int32_t const& __cordl_internal_get__defaultNameIndex() const;

  constexpr int32_t& __cordl_internal_get__defaultNameIndex();

  constexpr ::System::Data::DataRelation*& __cordl_internal_get__inTransition();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataRelation*> const& __cordl_internal_get__inTransition() const;

  constexpr int32_t const& __cordl_internal_get__objectID() const;

  constexpr int32_t& __cordl_internal_get__objectID();

  constexpr ::System::ComponentModel::CollectionChangeEventHandler*& __cordl_internal_get__onCollectionChangedDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::CollectionChangeEventHandler*> const& __cordl_internal_get__onCollectionChangedDelegate() const;

  constexpr ::System::ComponentModel::CollectionChangeEventHandler*& __cordl_internal_get__onCollectionChangingDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::CollectionChangeEventHandler*> const& __cordl_internal_get__onCollectionChangingDelegate() const;

  constexpr void __cordl_internal_set__defaultNameIndex(int32_t value);

  constexpr void __cordl_internal_set__inTransition(::System::Data::DataRelation* value);

  constexpr void __cordl_internal_set__objectID(int32_t value);

  constexpr void __cordl_internal_set__onCollectionChangedDelegate(::System::ComponentModel::CollectionChangeEventHandler* value);

  constexpr void __cordl_internal_set__onCollectionChangingDelegate(::System::ComponentModel::CollectionChangeEventHandler* value);

  /// @brief Method .ctor, addr 0x2ca4bbc, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_CollectionChanged, addr 0x2ca3c6c, size 0xf8, virtual false, abstract: false, final false
  inline void add_CollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* value);

  static inline int32_t getStaticF_s_objectTypeCount();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Data::DataRelation* get_Item(int32_t index);

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Data::DataRelation* get_Item(::StringW name);

  /// @brief Method get_ObjectID, addr 0x2ca371c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ObjectID();

  /// @brief Method remove_CollectionChanged, addr 0x2ca3d64, size 0xf8, virtual false, abstract: false, final false
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
static_assert(::cordl_internals::size_check_v<::System::Data::DataRelationCollection, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Data::DataRelationCollection, ____inTransition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRelationCollection, ____defaultNameIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRelationCollection, ____onCollectionChangedDelegate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRelationCollection, ____onCollectionChangingDelegate) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRelationCollection, ____objectID) == 0x30, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataRelationCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataRelationCollection*, "System.Data", "DataRelationCollection");
