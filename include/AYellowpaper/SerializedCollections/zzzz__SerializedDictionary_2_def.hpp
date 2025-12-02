#pragma once
// IWYU pragma private; include "AYellowpaper/SerializedCollections/SerializedDictionary_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SerializedDictionary_2)
namespace AYellowpaper::SerializedCollections {
template <typename TKey, typename TValue> struct SerializedKeyValuePair_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace AYellowpaper::SerializedCollections {
template <typename TKey, typename TValue> class SerializedDictionary_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::AYellowpaper::SerializedCollections::SerializedDictionary_2);
// Dependencies System.Collections.Generic.Dictionary`2<TKey, TValue>
namespace AYellowpaper::SerializedCollections {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: AYellowpaper.SerializedCollections.SerializedDictionary`2<TKey,TValue>
class CORDL_TYPE SerializedDictionary_2 : public ::System::Collections::Generic::Dictionary_2<TKey, TValue> {
public:
  // Declarations
  /// @brief Field _serializedList, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__serializedList,
                      put =
                          __cordl_internal_set__serializedList)) ::System::Collections::Generic::List_1<::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>>* _serializedList;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  static inline ::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>* New_ctor();

  static inline ::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>* New_ctor(int32_t capacity);

  static inline ::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>* New_ctor(int32_t capacity, ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  static inline ::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*
  New_ctor(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* collection);

  static inline ::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*
  New_ctor(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* collection,
           ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  static inline ::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  static inline ::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>* New_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary);

  static inline ::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>* New_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary,
                                                                                                      ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  static inline ::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>*
  New_ctor(::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>* serializedDictionary);

  /// @brief Method OnAfterDeserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  /// @brief Method SyncDictionaryToBackingField_Editor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SyncDictionaryToBackingField_Editor();

  constexpr ::System::Collections::Generic::List_1<::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>>* const& __cordl_internal_get__serializedList() const;

  constexpr ::System::Collections::Generic::List_1<::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>>*& __cordl_internal_get__serializedList();

  constexpr void __cordl_internal_set__serializedList(::System::Collections::Generic::List_1<::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* collection);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* collection,
                    ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary, ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::AYellowpaper::SerializedCollections::SerializedDictionary_2<TKey, TValue>* serializedDictionary);

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializedDictionary_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializedDictionary_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializedDictionary_2(SerializedDictionary_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializedDictionary_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializedDictionary_2(SerializedDictionary_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22986 };

  /// @brief Field _serializedList, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>>* ____serializedList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace AYellowpaper::SerializedCollections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::AYellowpaper::SerializedCollections::SerializedDictionary_2, "AYellowpaper.SerializedCollections", "SerializedDictionary`2");
