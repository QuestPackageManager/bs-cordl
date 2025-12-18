#pragma once
// IWYU pragma private; include "AYellowpaper/SerializedCollections/DictionaryLookupTable_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DictionaryLookupTable_2)
namespace AYellowpaper::SerializedCollections {
template <typename TKey, typename TValue> class DictionaryLookupTable_2___c;
}
namespace AYellowpaper::SerializedCollections {
class IKeyable;
}
namespace AYellowpaper::SerializedCollections {
template <typename TKey, typename TValue> class SerializedDictionary_2;
}
namespace AYellowpaper::SerializedCollections {
template <typename TKey, typename TValue> struct SerializedKeyValuePair_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Linq {
template <typename TKey, typename TElement> class IGrouping_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace AYellowpaper::SerializedCollections {
template <typename TKey, typename TValue> class DictionaryLookupTable_2;
}
namespace AYellowpaper::SerializedCollections {
template <typename TKey, typename TValue> class DictionaryLookupTable_2___c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::AYellowpaper::SerializedCollections::DictionaryLookupTable_2);
MARK_GEN_REF_PTR_T(::AYellowpaper::SerializedCollections::DictionaryLookupTable_2___c);
// Dependencies System.Object
namespace AYellowpaper::SerializedCollections {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: AYellowpaper.SerializedCollections.DictionaryLookupTable`2/<>c<TKey,TValue>
class CORDL_TYPE DictionaryLookupTable_2___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::AYellowpaper::SerializedCollections::DictionaryLookupTable_2___c<TKey, TValue>* __9;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0)) ::System::Func_2<::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>, TKey>* __9__12_0;

  /// @brief Field <>9__12_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_1,
                      put = setStaticF___9__12_1)) ::System::Func_2<::System::Linq::IGrouping_2<TKey, ::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>>*, bool>* __9__12_1;

  /// @brief Field <>9__12_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_2,
                      put = setStaticF___9__12_2)) ::System::Func_2<::System::Linq::IGrouping_2<TKey, ::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>>*,
                                                                    ::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>>* __9__12_2;

  static inline ::AYellowpaper::SerializedCollections::DictionaryLookupTable_2___c<TKey, TValue>* New_ctor();

  /// @brief Method <RemoveDuplicates>b__12_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TKey _RemoveDuplicates_b__12_0(::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue> x);

  /// @brief Method <RemoveDuplicates>b__12_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _RemoveDuplicates_b__12_1(::System::Linq::IGrouping_2<TKey, ::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>>* x);

  /// @brief Method <RemoveDuplicates>b__12_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>
  _RemoveDuplicates_b__12_2(::System::Linq::IGrouping_2<TKey, ::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>>* x);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::AYellowpaper::SerializedCollections::DictionaryLookupTable_2___c<TKey, TValue>* getStaticF___9();

  static inline ::System::Func_2<::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>, TKey>* getStaticF___9__12_0();

  static inline ::System::Func_2<::System::Linq::IGrouping_2<TKey, ::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>>*, bool>* getStaticF___9__12_1();

  static inline ::System::Func_2<::System::Linq::IGrouping_2<TKey, ::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>>*,
                                 ::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>>*
  getStaticF___9__12_2();

  static inline void setStaticF___9(::AYellowpaper::SerializedCollections::DictionaryLookupTable_2___c<TKey, TValue>* value);

  static inline void setStaticF___9__12_0(::System::Func_2<::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>, TKey>* value);

  static inline void setStaticF___9__12_1(::System::Func_2<::System::Linq::IGrouping_2<TKey, ::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>>*, bool>* value);

  static inline void setStaticF___9__12_2(::System::Func_2<::System::Linq::IGrouping_2<TKey, ::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>>*,
                                                           ::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DictionaryLookupTable_2___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DictionaryLookupTable_2___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DictionaryLookupTable_2___c(DictionaryLookupTable_2___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DictionaryLookupTable_2___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DictionaryLookupTable_2___c(DictionaryLookupTable_2___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23008 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace AYellowpaper::SerializedCollections
// Dependencies System.Object
namespace AYellowpaper::SerializedCollections {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: AYellowpaper.SerializedCollections.DictionaryLookupTable`2<TKey,TValue>
class CORDL_TYPE DictionaryLookupTable_2 : public ::System::Object {
public:
  // Declarations
  using __c = ::AYellowpaper::SerializedCollections::DictionaryLookupTable_2___c<TKey, TValue>;

  /// @brief Field EmptyList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EmptyList, put = setStaticF_EmptyList)) ::System::Collections::Generic::List_1<int32_t>* EmptyList;

  __declspec(property(get = get_Keys)) ::System::Collections::IEnumerable* Keys;

  /// @brief Field _dictionary, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__dictionary, put = __cordl_internal_set__dictionary)) ::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>* _dictionary;

  /// @brief Field _occurences, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__occurences,
                      put = __cordl_internal_set__occurences)) ::System::Collections::Generic::Dictionary_2<TKey, ::System::Collections::Generic::List_1<int32_t>*>* _occurences;

  /// @brief Convert operator to "::AYellowpaper::SerializedCollections::IKeyable"
  constexpr operator ::AYellowpaper::SerializedCollections::IKeyable*() noexcept;

  /// @brief Method AddKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void AddKey(::System::Object* key);

  /// @brief Method GetCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t GetCount();

  /// @brief Method GetKeyAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* GetKeyAt(int32_t index);

  /// @brief Method GetOccurences, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyList_1<int32_t>* GetOccurences(::System::Object* key);

  static inline ::AYellowpaper::SerializedCollections::DictionaryLookupTable_2<TKey, TValue>* New_ctor(::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>* dictionary);

  /// @brief Method RecalculateOccurences, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void RecalculateOccurences();

  /// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void RemoveAt(int32_t index);

  /// @brief Method RemoveDuplicates, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void RemoveDuplicates();

  /// @brief Method RemoveKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void RemoveKey(::System::Object* key);

  constexpr ::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>* const& __cordl_internal_get__dictionary() const;

  constexpr ::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*& __cordl_internal_get__dictionary();

  constexpr ::System::Collections::Generic::Dictionary_2<TKey, ::System::Collections::Generic::List_1<int32_t>*>* const& __cordl_internal_get__occurences() const;

  constexpr ::System::Collections::Generic::Dictionary_2<TKey, ::System::Collections::Generic::List_1<int32_t>*>*& __cordl_internal_get__occurences();

  constexpr void __cordl_internal_set__dictionary(::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>* value);

  constexpr void __cordl_internal_set__occurences(::System::Collections::Generic::Dictionary_2<TKey, ::System::Collections::Generic::List_1<int32_t>*>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>* dictionary);

  static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_EmptyList();

  /// @brief Method get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerable* get_Keys();

  /// @brief Convert to "::AYellowpaper::SerializedCollections::IKeyable"
  constexpr ::AYellowpaper::SerializedCollections::IKeyable* i___AYellowpaper__SerializedCollections__IKeyable() noexcept;

  static inline void setStaticF_EmptyList(::System::Collections::Generic::List_1<int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DictionaryLookupTable_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DictionaryLookupTable_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DictionaryLookupTable_2(DictionaryLookupTable_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DictionaryLookupTable_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DictionaryLookupTable_2(DictionaryLookupTable_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23009 };

  /// @brief Field _dictionary, offset: 0x10, size: 0x8, def value: None
  ::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>* ____dictionary;

  /// @brief Field _occurences, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<TKey, ::System::Collections::Generic::List_1<int32_t>*>* ____occurences;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace AYellowpaper::SerializedCollections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::AYellowpaper::SerializedCollections::DictionaryLookupTable_2, "AYellowpaper.SerializedCollections", "DictionaryLookupTable`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::AYellowpaper::SerializedCollections::DictionaryLookupTable_2___c, "AYellowpaper.SerializedCollections", "DictionaryLookupTable`2/<>c");
