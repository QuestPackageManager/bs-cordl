#pragma once
// IWYU pragma private; include "System/ComponentModel/AttributeCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AttributeCollection)
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::ComponentModel {
struct AttributeCollection_AttributeEntry;
}
namespace System {
class Array;
}
namespace System {
class Attribute;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class AttributeCollection;
}
namespace System::ComponentModel {
struct AttributeCollection_AttributeEntry;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::AttributeCollection);
MARK_VAL_T(::System::ComponentModel::AttributeCollection_AttributeEntry);
// Dependencies
namespace System::ComponentModel {
// Is value type: true
// CS Name: System.ComponentModel.AttributeCollection/AttributeEntry
struct CORDL_TYPE AttributeCollection_AttributeEntry {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeCollection_AttributeEntry();

  // Ctor Parameters [CppParam { name: "type", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AttributeCollection_AttributeEntry(::System::Type* type, int32_t index) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9362 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field type, offset: 0x0, size: 0x8, def value: None
  ::System::Type* type;

  /// @brief Field index, offset: 0x8, size: 0x4, def value: None
  int32_t index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::AttributeCollection_AttributeEntry, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::AttributeCollection_AttributeEntry, index) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::AttributeCollection_AttributeEntry, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
// Dependencies System.Collections.ICollection, System.Collections.IEnumerable, System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.AttributeCollection
class CORDL_TYPE AttributeCollection : public ::System::Object {
public:
  // Declarations
  using AttributeEntry = ::System::ComponentModel::AttributeCollection_AttributeEntry;

  __declspec(property(get = get_Attributes)) ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> Attributes;

  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Field Empty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty)) ::System::ComponentModel::AttributeCollection* Empty;

  __declspec(property(get = get_Item)) ::System::Attribute* Item[];

  __declspec(property(get = System_Collections_ICollection_get_Count)) int32_t System_Collections_ICollection_Count;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot)) ::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Field _attributes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__attributes, put = __cordl_internal_set__attributes)) ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> _attributes;

  /// @brief Field _foundAttributeTypes, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__foundAttributeTypes,
      put = __cordl_internal_set__foundAttributeTypes)) ::ArrayW<::System::ComponentModel::AttributeCollection_AttributeEntry, ::Array<::System::ComponentModel::AttributeCollection_AttributeEntry>*>
      _foundAttributeTypes;

  /// @brief Field _index, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  /// @brief Field s_defaultAttributes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_defaultAttributes, put = setStaticF_s_defaultAttributes)) ::System::Collections::Hashtable* s_defaultAttributes;

  /// @brief Field s_internalSyncObject, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_internalSyncObject, put = setStaticF_s_internalSyncObject)) ::System::Object* s_internalSyncObject;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Contains, addr 0x4449340, size 0x60, virtual false, abstract: false, final false
  inline bool Contains(::System::Attribute* attribute);

  /// @brief Method CopyTo, addr 0x44493fc, size 0x6c, virtual true, abstract: false, final true
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method GetDefaultAttribute, addr 0x4448dd0, size 0x570, virtual false, abstract: false, final false
  inline ::System::Attribute* GetDefaultAttribute(::System::Type* attributeType);

  /// @brief Method GetEnumerator, addr 0x44493a0, size 0x24, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  static inline ::System::ComponentModel::AttributeCollection* New_ctor(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.Collections.ICollection.get_Count, addr 0x44493d4, size 0x24, virtual true, abstract: false, final true
  inline int32_t System_Collections_ICollection_get_Count();

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x44493c4, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x44493cc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x44493f8, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> const& __cordl_internal_get__attributes() const;

  constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>& __cordl_internal_get__attributes();

  constexpr ::ArrayW<::System::ComponentModel::AttributeCollection_AttributeEntry, ::Array<::System::ComponentModel::AttributeCollection_AttributeEntry>*> const&
  __cordl_internal_get__foundAttributeTypes() const;

  constexpr ::ArrayW<::System::ComponentModel::AttributeCollection_AttributeEntry, ::Array<::System::ComponentModel::AttributeCollection_AttributeEntry>*>& __cordl_internal_get__foundAttributeTypes();

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr void __cordl_internal_set__attributes(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> value);

  constexpr void
  __cordl_internal_set__foundAttributeTypes(::ArrayW<::System::ComponentModel::AttributeCollection_AttributeEntry, ::Array<::System::ComponentModel::AttributeCollection_AttributeEntry>*> value);

  constexpr void __cordl_internal_set__index(int32_t value);

  /// @brief Method .ctor, addr 0x444879c, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  static inline ::System::ComponentModel::AttributeCollection* getStaticF_Empty();

  static inline ::System::Collections::Hashtable* getStaticF_s_defaultAttributes();

  static inline ::System::Object* getStaticF_s_internalSyncObject();

  /// @brief Method get_Attributes, addr 0x44488cc, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> get_Attributes();

  /// @brief Method get_Count, addr 0x44488d4, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x44488f8, size 0x4d8, virtual true, abstract: false, final false
  inline ::System::Attribute* get_Item(::System::Type* attributeType);

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  static inline void setStaticF_Empty(::System::ComponentModel::AttributeCollection* value);

  static inline void setStaticF_s_defaultAttributes(::System::Collections::Hashtable* value);

  static inline void setStaticF_s_internalSyncObject(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AttributeCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttributeCollection(AttributeCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttributeCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttributeCollection(AttributeCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9363 };

  /// @brief Field _attributes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> ____attributes;

  /// @brief Field _foundAttributeTypes, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::ComponentModel::AttributeCollection_AttributeEntry, ::Array<::System::ComponentModel::AttributeCollection_AttributeEntry>*> ____foundAttributeTypes;

  /// @brief Field _index, offset: 0x20, size: 0x4, def value: None
  int32_t ____index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::AttributeCollection, ____attributes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::AttributeCollection, ____foundAttributeTypes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::AttributeCollection, ____index) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ComponentModel::AttributeCollection, 0x28>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::AttributeCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::AttributeCollection*, "System.ComponentModel", "AttributeCollection");
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::AttributeCollection_AttributeEntry, "System.ComponentModel", "AttributeCollection/AttributeEntry");
