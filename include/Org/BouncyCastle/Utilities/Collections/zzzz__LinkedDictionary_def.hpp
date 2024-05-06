#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LinkedDictionary)
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Collections {
class LinkedDictionary;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Collections::LinkedDictionary);
// Type: Org.BouncyCastle.Utilities.Collections::LinkedDictionary
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Collections {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities.Collections::LinkedDictionary*
class CORDL_TYPE LinkedDictionary : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  __declspec(property(get = get_Keys))::System::Collections::ICollection* Keys;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  __declspec(property(get = get_Values))::System::Collections::ICollection* Values;

  /// @brief Field hash, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_hash, put = __cordl_internal_set_hash))::System::Collections::IDictionary* hash;

  /// @brief Field keys, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_keys, put = __cordl_internal_set_keys))::System::Collections::IList* keys;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IDictionary"
  constexpr operator ::System::Collections::IDictionary*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x13ba3b8, size 0x138, virtual true, abstract: false, final false
  inline void Add(::System::Object* k, ::System::Object* v);

  /// @brief Method Clear, addr 0x13ba4f0, size 0x11c, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Contains, addr 0x13ba60c, size 0xac, virtual true, abstract: false, final false
  inline bool Contains(::System::Object* k);

  /// @brief Method CopyTo, addr 0x13ba6b8, size 0x39c, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method GetEnumerator, addr 0x13bab08, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  static inline ::Org::BouncyCastle::Utilities::Collections::LinkedDictionary* New_ctor();

  /// @brief Method Remove, addr 0x13baba4, size 0x128, virtual true, abstract: false, final false
  inline void Remove(::System::Object* k);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x13baaf8, size 0x10, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_hash();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __cordl_internal_get_hash() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_keys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_keys() const;

  constexpr void __cordl_internal_set_hash(::System::Collections::IDictionary* value);

  constexpr void __cordl_internal_set_keys(::System::Collections::IList* value);

  /// @brief Method .ctor, addr 0x13ba348, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x13baa54, size 0xa4, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsFixedSize, addr 0x13baccc, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly, addr 0x13bacd4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized, addr 0x13bacdc, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x13bb230, size 0xa8, virtual true, abstract: false, final false
  inline ::System::Object* get_Item(::System::Object* k);

  /// @brief Method get_Keys, addr 0x13bad30, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Collections::ICollection* get_Keys();

  /// @brief Method get_SyncRoot, addr 0x13bace4, size 0x4c, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Method get_Values, addr 0x13bad8c, size 0x4a4, virtual true, abstract: false, final false
  inline ::System::Collections::ICollection* get_Values();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IDictionary"
  constexpr ::System::Collections::IDictionary* i___System__Collections__IDictionary() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method set_Item, addr 0x13bb2d8, size 0x1a4, virtual true, abstract: false, final false
  inline void set_Item(::System::Object* k, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LinkedDictionary();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LinkedDictionary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LinkedDictionary(LinkedDictionary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LinkedDictionary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LinkedDictionary(LinkedDictionary const&) = delete;

  /// @brief Field hash, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___hash;

  /// @brief Field keys, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IList* ___keys;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Collections::LinkedDictionary, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Collections::LinkedDictionary, ___hash) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Collections::LinkedDictionary, ___keys) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Utilities::Collections
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Collections::LinkedDictionary);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Collections::LinkedDictionary*, "Org.BouncyCastle.Utilities.Collections", "LinkedDictionary");
