#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SerializedDictionary_4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
CORDL_MODULE_EXPORT(SerializedDictionary_4)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename K, typename V, typename SK, typename SV> class SerializedDictionary_4;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::SerializedDictionary_4);
// Dependencies System.Collections.Generic.Dictionary`2<TKey, TValue>
namespace UnityEngine::Rendering {
// cpp template
template <typename K, typename V, typename SK, typename SV>
// Is value type: false
// CS Name: UnityEngine.Rendering.SerializedDictionary`4<K,V,SK,SV>
class CORDL_TYPE SerializedDictionary_4 : public ::System::Collections::Generic::Dictionary_2<K, V> {
public:
  // Declarations
  /// @brief Field m_Keys, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Keys, put = __cordl_internal_set_m_Keys)) ::System::Collections::Generic::List_1<SK>* m_Keys;

  /// @brief Field m_Values, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Values, put = __cordl_internal_set_m_Values)) ::System::Collections::Generic::List_1<SV>* m_Values;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Method DeserializeKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline K DeserializeKey(SK serializedKey);

  /// @brief Method DeserializeValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline V DeserializeValue(SV serializedValue);

  static inline ::UnityEngine::Rendering::SerializedDictionary_4<K, V, SK, SV>* New_ctor();

  /// @brief Method OnAfterDeserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  /// @brief Method SerializeKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline SK SerializeKey(K key);

  /// @brief Method SerializeValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline SV SerializeValue(V value);

  constexpr ::System::Collections::Generic::List_1<SK>* const& __cordl_internal_get_m_Keys() const;

  constexpr ::System::Collections::Generic::List_1<SK>*& __cordl_internal_get_m_Keys();

  constexpr ::System::Collections::Generic::List_1<SV>* const& __cordl_internal_get_m_Values() const;

  constexpr ::System::Collections::Generic::List_1<SV>*& __cordl_internal_get_m_Values();

  constexpr void __cordl_internal_set_m_Keys(::System::Collections::Generic::List_1<SK>* value);

  constexpr void __cordl_internal_set_m_Values(::System::Collections::Generic::List_1<SV>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializedDictionary_4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializedDictionary_4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializedDictionary_4(SerializedDictionary_4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializedDictionary_4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializedDictionary_4(SerializedDictionary_4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11918 };

  /// @brief Field m_Keys, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<SK>* ___m_Keys;

  /// @brief Field m_Values, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<SV>* ___m_Values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::SerializedDictionary_4, "UnityEngine.Rendering", "SerializedDictionary`4");
