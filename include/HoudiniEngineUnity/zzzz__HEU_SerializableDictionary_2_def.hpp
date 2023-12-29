#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_SerializableDictionary_2)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
template <typename TKey, typename TValue> class HEU_SerializableDictionary_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::HoudiniEngineUnity::HEU_SerializableDictionary_2);
// Type: HoudiniEngineUnity::HEU_SerializableDictionary`2
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9782))
// CS Name: ::HoudiniEngineUnity::HEU_SerializableDictionary`2<TKey,TValue>*
class CORDL_TYPE HEU_SerializableDictionary_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _dictionary, offset 0x10, size 0x8
  __declspec(property(get = __get__dictionary, put = __set__dictionary))::System::Collections::Generic::Dictionary_2<TKey, TValue>* _dictionary;

  /// @brief Field _keys, offset 0x18, size 0x8
  __declspec(property(get = __get__keys, put = __set__keys))::ArrayW<TKey, ::Array<TKey>*> _keys;

  /// @brief Field _values, offset 0x20, size 0x8
  __declspec(property(get = __get__values, put = __set__values))::ArrayW<TValue, ::Array<TValue>*> _values;

  __declspec(property(get = get_Item, put = set_Item)) TValue Item[];

  __declspec(property(get = get_Keys))::System::Collections::Generic::ICollection_1<TKey>* Keys;

  __declspec(property(get = get_Values))::System::Collections::Generic::ICollection_1<TValue>* Values;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  /// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
  constexpr operator ::System::Collections::Generic::IDictionary_2<TKey, TValue>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  constexpr ::System::Collections::Generic::Dictionary_2<TKey, TValue>*& __get__dictionary();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey, TValue>*> const& __get__dictionary() const;

  constexpr void __set__dictionary(::System::Collections::Generic::Dictionary_2<TKey, TValue>* value);

  constexpr ::ArrayW<TKey, ::Array<TKey>*>& __get__keys();

  constexpr ::ArrayW<TKey, ::Array<TKey>*> const& __get__keys() const;

  constexpr void __set__keys(::ArrayW<TKey, ::Array<TKey>*> value);

  constexpr ::ArrayW<TValue, ::Array<TValue>*>& __get__values();

  constexpr ::ArrayW<TValue, ::Array<TValue>*> const& __get__values() const;

  constexpr void __set__values(::ArrayW<TValue, ::Array<TValue>*> value);

  /// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
  inline TValue get_Item(TKey key);

  /// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void set_Item(TKey key, TValue value);

  /// @brief Method get_Keys addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::Generic::ICollection_1<TKey>* get_Keys();

  /// @brief Method get_Values addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::Generic::ICollection_1<TValue>* get_Values();

  /// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool get_IsReadOnly();

  /// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Add(TKey key, TValue value);

  /// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Add(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> item);

  /// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Clear();

  /// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool Contains(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> item);

  /// @brief Method ContainsKey addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool ContainsKey(TKey key);

  /// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*> array, int32_t arrayIndex);

  /// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* GetEnumerator();

  /// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool Remove(TKey key);

  /// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool Remove(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> item);

  /// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool TryGetValue(TKey key, ByRef<TValue> value);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method OnAfterDeserialize addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void OnBeforeSerialize();

  static inline ::HoudiniEngineUnity::HEU_SerializableDictionary_2<TKey, TValue>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_SerializableDictionary_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_SerializableDictionary_2(HEU_SerializableDictionary_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_SerializableDictionary_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_SerializableDictionary_2(HEU_SerializableDictionary_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_SerializableDictionary_2();

public:
  /// @brief Field _dictionary, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<TKey, TValue>* ____dictionary;

  /// @brief Field _keys, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<TKey, ::Array<TKey>*> ____keys;

  /// @brief Field _values, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<TValue, ::Array<TValue>*> ____values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HoudiniEngineUnity::HEU_SerializableDictionary_2, "HoudiniEngineUnity", "HEU_SerializableDictionary`2");
