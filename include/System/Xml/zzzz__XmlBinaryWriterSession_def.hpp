#pragma once
// IWYU pragma private; include "System/Xml/XmlBinaryWriterSession.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlBinaryWriterSession)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Xml {
class IXmlDictionary;
}
namespace System::Xml {
template <typename K, typename V> struct PriorityDictionary_2_XmlBinaryWriterSession_Entry;
}
namespace System::Xml {
class XmlBinaryWriterSession_IntArray;
}
namespace System::Xml {
template <typename K, typename V> class XmlBinaryWriterSession_PriorityDictionary_2;
}
namespace System::Xml {
class XmlDictionaryString;
}
// Forward declare root types
namespace System::Xml {
class XmlBinaryWriterSession;
}
namespace System::Xml {
class XmlBinaryWriterSession_IntArray;
}
namespace System::Xml {
template <typename K, typename V> class XmlBinaryWriterSession_PriorityDictionary_2;
}
namespace System::Xml {
template <typename K, typename V> struct PriorityDictionary_2_XmlBinaryWriterSession_Entry;
}
// Write type traits
MARK_REF_T(::System::Xml::XmlBinaryWriterSession*);
MARK_REF_T(::System::Xml::XmlBinaryWriterSession_IntArray*);
MARK_GEN_REF_T_PTR(::System::Xml::XmlBinaryWriterSession_PriorityDictionary_2);
MARK_GEN_VAL_T(::System::Xml::PriorityDictionary_2_XmlBinaryWriterSession_Entry);
DEFINE_IL2CPP_CLASS(::System::Xml::XmlBinaryWriterSession*, "System.Xml", "XmlBinaryWriterSession");
DEFINE_IL2CPP_CLASS(::System::Xml::XmlBinaryWriterSession_IntArray*, "System.Xml", "XmlBinaryWriterSession/IntArray");
DEFINE_IL2CPP_GEN_CLASS_PTR(::System::Xml::XmlBinaryWriterSession_PriorityDictionary_2, "System.Xml", "XmlBinaryWriterSession/PriorityDictionary`2");
DEFINE_IL2CPP_GEN_CLASS(::System::Xml::PriorityDictionary_2_XmlBinaryWriterSession_Entry, "System.Xml", "XmlBinaryWriterSession/PriorityDictionary`2/Entry");
// Dependencies
namespace System::Xml {
// cpp template
template <typename K, typename V>
// Is value type: true
// CS Name: System.Xml.XmlBinaryWriterSession/PriorityDictionary`2/Entry<K,V>
struct CORDL_TYPE PriorityDictionary_2_XmlBinaryWriterSession_Entry {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PriorityDictionary_2_XmlBinaryWriterSession_Entry();

  // Ctor Parameters [CppParam { name: "Key", ty: "K", modifiers: "", def_value: None, comment: None }, CppParam { name: "Value", ty: "V", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "Time", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr PriorityDictionary_2_XmlBinaryWriterSession_Entry(K Key, V Value, int32_t Time) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16346 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field Key, offset: 0x0, size: 0x8, def value: None
  K Key;

  /// @brief Field Value, offset: 0x8, size: 0x8, def value: None
  V Value;

  /// @brief Field Time, offset: 0x10, size: 0x4, def value: None
  int32_t Time;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Xml
// Dependencies System.Object, System.Xml.XmlBinaryWriterSession::PriorityDictionary`2::Entry<K, V>
namespace System::Xml {
// cpp template
template <typename K, typename V>
// Is value type: false
// CS Name: System.Xml.XmlBinaryWriterSession/PriorityDictionary`2<K,V>
class CORDL_TYPE XmlBinaryWriterSession_PriorityDictionary_2 : public ::System::Object {
public:
  // Declarations
  using Entry = ::System::Xml::PriorityDictionary_2_XmlBinaryWriterSession_Entry<K, V>;

  __declspec(property(get = get_Now)) int32_t Now;

  /// @brief Field dictionary, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_dictionary, put = __cordl_internal_set_dictionary)) ::System::Collections::Generic::Dictionary_2<K, V>* dictionary;

  /// @brief Field list, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_list, put = __cordl_internal_set_list)) ::ArrayW<::System::Xml::PriorityDictionary_2_XmlBinaryWriterSession_Entry<K, V>> list;

  /// @brief Field listCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_listCount, put = __cordl_internal_set_listCount)) int32_t listCount;

  /// @brief Field now, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_now, put = __cordl_internal_set_now)) int32_t now;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Add(K key, V value);

  /// @brief Method DecreaseAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void DecreaseAll();

  /// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetValue(K key, ::by_ref<V> value);

  constexpr ::System::Collections::Generic::Dictionary_2<K, V>* const& __cordl_internal_get_dictionary() const;

  constexpr ::System::Collections::Generic::Dictionary_2<K, V>*& __cordl_internal_get_dictionary();

  constexpr ::ArrayW<::System::Xml::PriorityDictionary_2_XmlBinaryWriterSession_Entry<K, V>> const& __cordl_internal_get_list() const;

  constexpr ::ArrayW<::System::Xml::PriorityDictionary_2_XmlBinaryWriterSession_Entry<K, V>>& __cordl_internal_get_list();

  constexpr int32_t const& __cordl_internal_get_listCount() const;

  constexpr int32_t& __cordl_internal_get_listCount();

  constexpr int32_t const& __cordl_internal_get_now() const;

  constexpr int32_t& __cordl_internal_get_now();

  constexpr void __cordl_internal_set_dictionary(::System::Collections::Generic::Dictionary_2<K, V>* value);

  constexpr void __cordl_internal_set_list(::ArrayW<::System::Xml::PriorityDictionary_2_XmlBinaryWriterSession_Entry<K, V>> value);

  constexpr void __cordl_internal_set_listCount(int32_t value);

  constexpr void __cordl_internal_set_now(int32_t value);

  /// @brief Method get_Now, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Now();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBinaryWriterSession_PriorityDictionary_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBinaryWriterSession_PriorityDictionary_2", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBinaryWriterSession_PriorityDictionary_2(XmlBinaryWriterSession_PriorityDictionary_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBinaryWriterSession_PriorityDictionary_2", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBinaryWriterSession_PriorityDictionary_2(XmlBinaryWriterSession_PriorityDictionary_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16347 };

  /// @brief Field dictionary, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<K, V>* ___dictionary;

  /// @brief Field list, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Xml::PriorityDictionary_2_XmlBinaryWriterSession_Entry<K, V>> ___list;

  /// @brief Field listCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___listCount;

  /// @brief Field now, offset: 0x24, size: 0x4, def value: None
  int32_t ___now;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml
// [DefaultMember("Item")]
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBinaryWriterSession/IntArray
class CORDL_TYPE XmlBinaryWriterSession_IntArray : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item)) int32_t Item[];

  /// @brief Field array, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_array, put = __cordl_internal_set_array)) ::ArrayW<int32_t> array;

  static inline ::System::Xml::XmlBinaryWriterSession_IntArray* New_ctor(int32_t size);

  constexpr ::ArrayW<int32_t> const& __cordl_internal_get_array() const;

  constexpr ::ArrayW<int32_t>& __cordl_internal_get_array();

  constexpr void __cordl_internal_set_array(::ArrayW<int32_t> value);

  /// @brief Method .ctor, addr 0x653d578, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(int32_t size);

  /// @brief Method get_Item, addr 0x653d2fc, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_Item(int32_t index);

  /// @brief Method set_Item, addr 0x653d3b4, size 0xf0, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBinaryWriterSession_IntArray();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBinaryWriterSession_IntArray", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBinaryWriterSession_IntArray(XmlBinaryWriterSession_IntArray&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBinaryWriterSession_IntArray", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBinaryWriterSession_IntArray(XmlBinaryWriterSession_IntArray const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16348 };

  /// @brief Field array, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t> ___array;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlBinaryWriterSession_IntArray, ___array) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Xml::XmlBinaryWriterSession_IntArray) == 0x18, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBinaryWriterSession
class CORDL_TYPE XmlBinaryWriterSession : public ::System::Object {
public:
  // Declarations
  using IntArray = ::System::Xml::XmlBinaryWriterSession_IntArray;

  template <typename K, typename V> using PriorityDictionary_2 = ::System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<K, V>;

  /// @brief Field maps, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_maps,
                      put =
                          __cordl_internal_set_maps)) ::System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<::System::Xml::IXmlDictionary*, ::System::Xml::XmlBinaryWriterSession_IntArray*>* maps;

  /// @brief Field nextKey, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_nextKey, put = __cordl_internal_set_nextKey)) int32_t nextKey;

  /// @brief Field strings, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_strings, put = __cordl_internal_set_strings)) ::System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<::StringW, int32_t>* strings;

  /// @brief Method Add, addr 0x653d338, size 0x7c, virtual false, abstract: false, final false
  inline int32_t Add(::StringW s);

  /// @brief Method AddKeys, addr 0x653d4a4, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBinaryWriterSession_IntArray* AddKeys(::System::Xml::IXmlDictionary* dictionary, int32_t minCount);

  /// @brief Method TryAdd, addr 0x653d178, size 0x184, virtual true, abstract: false, final false
  inline bool TryAdd(::System::Xml::XmlDictionaryString* value, ::by_ref<int32_t> key);

  /// @brief Method TryLookup, addr 0x653985c, size 0x11c, virtual false, abstract: false, final false
  inline bool TryLookup(::System::Xml::XmlDictionaryString* s, ::by_ref<int32_t> key);

  constexpr ::System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<::System::Xml::IXmlDictionary*, ::System::Xml::XmlBinaryWriterSession_IntArray*>* const& __cordl_internal_get_maps() const;

  constexpr ::System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<::System::Xml::IXmlDictionary*, ::System::Xml::XmlBinaryWriterSession_IntArray*>*& __cordl_internal_get_maps();

  constexpr int32_t const& __cordl_internal_get_nextKey() const;

  constexpr int32_t& __cordl_internal_get_nextKey();

  constexpr ::System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<::StringW, int32_t>* const& __cordl_internal_get_strings() const;

  constexpr ::System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<::StringW, int32_t>*& __cordl_internal_get_strings();

  constexpr void __cordl_internal_set_maps(::System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<::System::Xml::IXmlDictionary*, ::System::Xml::XmlBinaryWriterSession_IntArray*>* value);

  constexpr void __cordl_internal_set_nextKey(int32_t value);

  constexpr void __cordl_internal_set_strings(::System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<::StringW, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBinaryWriterSession();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBinaryWriterSession", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBinaryWriterSession(XmlBinaryWriterSession&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBinaryWriterSession", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBinaryWriterSession(XmlBinaryWriterSession const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16349 };

  /// @brief Field strings, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<::StringW, int32_t>* ___strings;

  /// @brief Field maps, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlBinaryWriterSession_PriorityDictionary_2<::System::Xml::IXmlDictionary*, ::System::Xml::XmlBinaryWriterSession_IntArray*>* ___maps;

  /// @brief Field nextKey, offset: 0x20, size: 0x4, def value: None
  int32_t ___nextKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlBinaryWriterSession, ___strings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBinaryWriterSession, ___maps) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBinaryWriterSession, ___nextKey) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Xml::XmlBinaryWriterSession) == 0x28, "Size mismatch!");

} // namespace System::Xml
