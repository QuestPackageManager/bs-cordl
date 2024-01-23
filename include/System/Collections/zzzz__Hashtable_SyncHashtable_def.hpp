#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Hashtable_SyncHashtable)
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections {
class __Hashtable__SyncHashtable;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::__Hashtable__SyncHashtable);
// Type: ::SyncHashtable
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3798))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3795))
// CS Name: ::Hashtable::SyncHashtable*
class CORDL_TYPE __Hashtable__SyncHashtable : public ::System::Collections::Hashtable {
public:
  // Declarations
  /// @brief Field _table, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__table, put = __cordl_internal_set__table))::System::Collections::Hashtable* _table;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  __declspec(property(get = get_Keys))::System::Collections::ICollection* Keys;

  __declspec(property(get = get_Values))::System::Collections::ICollection* Values;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__table();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get__table() const;

  constexpr void __cordl_internal_set__table(::System::Collections::Hashtable* value);

  static inline ::System::Collections::__Hashtable__SyncHashtable* New_ctor(::System::Collections::Hashtable* table);

  /// @brief Method .ctor, addr 0x258996c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Hashtable* table);

  static inline ::System::Collections::__Hashtable__SyncHashtable* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x258ac4c, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetObjectData, addr 0x258ac90, size 0x40, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Count, addr 0x258acd0, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x258acf4, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsFixedSize, addr 0x258ad18, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsSynchronized, addr 0x258ad3c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x258ad44, size 0x24, virtual true, abstract: false, final false
  inline ::System::Object* get_Item(::System::Object* key);

  /// @brief Method set_Item, addr 0x258ad68, size 0x100, virtual true, abstract: false, final false
  inline void set_Item(::System::Object* key, ::System::Object* value);

  /// @brief Method get_SyncRoot, addr 0x258ae68, size 0x24, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Method Add, addr 0x258ae8c, size 0x100, virtual true, abstract: false, final false
  inline void Add(::System::Object* key, ::System::Object* value);

  /// @brief Method Clear, addr 0x258af8c, size 0xf0, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Contains, addr 0x258b07c, size 0x24, virtual true, abstract: false, final false
  inline bool Contains(::System::Object* key);

  /// @brief Method ContainsKey, addr 0x258b0a0, size 0x90, virtual true, abstract: false, final false
  inline bool ContainsKey(::System::Object* key);

  /// @brief Method CopyTo, addr 0x258b130, size 0x100, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method Clone, addr 0x258b230, size 0x164, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x258b394, size 0x24, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method GetEnumerator, addr 0x258b3b8, size 0x24, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  /// @brief Method get_Keys, addr 0x258b3dc, size 0x100, virtual true, abstract: false, final false
  inline ::System::Collections::ICollection* get_Keys();

  /// @brief Method get_Values, addr 0x258b4dc, size 0x100, virtual true, abstract: false, final false
  inline ::System::Collections::ICollection* get_Values();

  /// @brief Method Remove, addr 0x258b5dc, size 0xf8, virtual true, abstract: false, final false
  inline void Remove(::System::Object* key);

  /// @brief Method OnDeserialization, addr 0x258b6d4, size 0x4, virtual true, abstract: false, final false
  inline void OnDeserialization(::System::Object* sender);

  // Ctor Parameters [CppParam { name: "", ty: "__Hashtable__SyncHashtable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Hashtable__SyncHashtable(__Hashtable__SyncHashtable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Hashtable__SyncHashtable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Hashtable__SyncHashtable(__Hashtable__SyncHashtable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Hashtable__SyncHashtable();

public:
  /// @brief Field _table, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____table;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::__Hashtable__SyncHashtable, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Collections::__Hashtable__SyncHashtable, ____table) == 0x50, "Offset mismatch!");

} // namespace System::Collections
NEED_NO_BOX(::System::Collections::__Hashtable__SyncHashtable);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::__Hashtable__SyncHashtable*, "System.Collections", "Hashtable/SyncHashtable");
