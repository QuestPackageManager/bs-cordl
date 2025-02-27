#pragma once
// IWYU pragma private; include "System/Collections/Hashtable_SyncHashtable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
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
namespace GlobalNamespace {
class Hashtable_SyncHashtable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Hashtable_SyncHashtable);
// Dependencies System.Collections.Hashtable, System.Collections.IEnumerable
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Collections.Hashtable/SyncHashtable
class CORDL_TYPE Hashtable_SyncHashtable : public ::System::Collections::Hashtable {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item, put = set_Item)) ::System::Object* Item[];

  __declspec(property(get = get_Keys)) ::System::Collections::ICollection* Keys;

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  __declspec(property(get = get_Values)) ::System::Collections::ICollection* Values;

  /// @brief Field _table, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__table, put = __cordl_internal_set__table)) ::System::Collections::Hashtable* _table;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x3dd5f5c, size 0xfc, virtual true, abstract: false, final false
  inline void Add(::System::Object* key, ::System::Object* value);

  /// @brief Method Clear, addr 0x3dd6058, size 0xec, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Clone, addr 0x3dd62f0, size 0x160, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method Contains, addr 0x3dd6144, size 0x24, virtual true, abstract: false, final false
  inline bool Contains(::System::Object* key);

  /// @brief Method ContainsKey, addr 0x3dd6168, size 0x8c, virtual true, abstract: false, final false
  inline bool ContainsKey(::System::Object* key);

  /// @brief Method CopyTo, addr 0x3dd61f4, size 0xfc, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x3dd6474, size 0x24, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  /// @brief Method GetObjectData, addr 0x3dd5d6c, size 0x38, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::GlobalNamespace::Hashtable_SyncHashtable* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::GlobalNamespace::Hashtable_SyncHashtable* New_ctor(::System::Collections::Hashtable* table);

  /// @brief Method OnDeserialization, addr 0x3dd6784, size 0x4, virtual true, abstract: false, final false
  inline void OnDeserialization(::System::Object* sender);

  /// @brief Method Remove, addr 0x3dd6690, size 0xf4, virtual true, abstract: false, final false
  inline void Remove(::System::Object* key);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3dd6450, size 0x24, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__table() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__table();

  constexpr void __cordl_internal_set__table(::System::Collections::Hashtable* value);

  /// @brief Method .ctor, addr 0x3dd5d30, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3dd4a94, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Hashtable* table);

  /// @brief Method get_Count, addr 0x3dd5da4, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsFixedSize, addr 0x3dd5dec, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly, addr 0x3dd5dc8, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized, addr 0x3dd5e10, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x3dd5e18, size 0x24, virtual true, abstract: false, final false
  inline ::System::Object* get_Item(::System::Object* key);

  /// @brief Method get_Keys, addr 0x3dd6498, size 0xfc, virtual true, abstract: false, final false
  inline ::System::Collections::ICollection* get_Keys();

  /// @brief Method get_SyncRoot, addr 0x3dd5f38, size 0x24, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Method get_Values, addr 0x3dd6594, size 0xfc, virtual true, abstract: false, final false
  inline ::System::Collections::ICollection* get_Values();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method set_Item, addr 0x3dd5e3c, size 0xfc, virtual true, abstract: false, final false
  inline void set_Item(::System::Object* key, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Hashtable_SyncHashtable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Hashtable_SyncHashtable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Hashtable_SyncHashtable(Hashtable_SyncHashtable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Hashtable_SyncHashtable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Hashtable_SyncHashtable(Hashtable_SyncHashtable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3804 };

  /// @brief Field _table, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____table;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Hashtable_SyncHashtable, ____table) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Hashtable_SyncHashtable, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Hashtable_SyncHashtable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Hashtable_SyncHashtable*, "System.Collections", "Hashtable/SyncHashtable");
