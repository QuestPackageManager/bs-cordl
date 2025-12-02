#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SerializedDictionary_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__SerializedDictionary_4_def.hpp"
CORDL_MODULE_EXPORT(SerializedDictionary_2)
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename K, typename V> class SerializedDictionary_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::SerializedDictionary_2);
// Dependencies UnityEngine.Rendering.SerializedDictionary`4<K, V, SK, SV>
namespace UnityEngine::Rendering {
// cpp template
template <typename K, typename V>
// Is value type: false
// CS Name: UnityEngine.Rendering.SerializedDictionary`2<K,V>
class CORDL_TYPE SerializedDictionary_2 : public ::UnityEngine::Rendering::SerializedDictionary_4<K, V, K, V> {
public:
  // Declarations
  /// @brief Method DeserializeKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline K DeserializeKey(K key);

  /// @brief Method DeserializeValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline V DeserializeValue(V val);

  static inline ::UnityEngine::Rendering::SerializedDictionary_2<K, V>* New_ctor();

  /// @brief Method SerializeKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline K SerializeKey(K key);

  /// @brief Method SerializeValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline V SerializeValue(V val);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11913 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::SerializedDictionary_2, "UnityEngine.Rendering", "SerializedDictionary`2");
