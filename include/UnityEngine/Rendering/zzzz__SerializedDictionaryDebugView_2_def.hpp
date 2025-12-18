#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SerializedDictionaryDebugView_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SerializedDictionaryDebugView_2)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename K, typename V> class SerializedDictionaryDebugView_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::SerializedDictionaryDebugView_2);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// cpp template
template <typename K, typename V>
// Is value type: false
// CS Name: UnityEngine.Rendering.SerializedDictionaryDebugView`2<K,V>
class CORDL_TYPE SerializedDictionaryDebugView_2 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Items)) ::ArrayW<::System::Collections::Generic::KeyValuePair_2<K, V>, ::Array<::System::Collections::Generic::KeyValuePair_2<K, V>>*> Items;

  /// @brief Field dict, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_dict, put = __cordl_internal_set_dict)) ::System::Collections::Generic::IDictionary_2<K, V>* dict;

  static inline ::UnityEngine::Rendering::SerializedDictionaryDebugView_2<K, V>* New_ctor(::System::Collections::Generic::IDictionary_2<K, V>* dictionary);

  constexpr ::System::Collections::Generic::IDictionary_2<K, V>* const& __cordl_internal_get_dict() const;

  constexpr ::System::Collections::Generic::IDictionary_2<K, V>*& __cordl_internal_get_dict();

  constexpr void __cordl_internal_set_dict(::System::Collections::Generic::IDictionary_2<K, V>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IDictionary_2<K, V>* dictionary);

  /// @brief Method get_Items, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Collections::Generic::KeyValuePair_2<K, V>, ::Array<::System::Collections::Generic::KeyValuePair_2<K, V>>*> get_Items();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializedDictionaryDebugView_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializedDictionaryDebugView_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializedDictionaryDebugView_2(SerializedDictionaryDebugView_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializedDictionaryDebugView_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializedDictionaryDebugView_2(SerializedDictionaryDebugView_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11916 };

  /// @brief Field dict, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<K, V>* ___dict;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::SerializedDictionaryDebugView_2, "UnityEngine.Rendering", "SerializedDictionaryDebugView`2");
