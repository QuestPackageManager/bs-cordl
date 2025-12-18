#pragma once
// IWYU pragma private; include "Unity/Properties/DictionaryPropertyBag_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__KeyValueCollectionPropertyBag_3_def.hpp"
CORDL_MODULE_EXPORT(DictionaryPropertyBag_2)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace Unity::Properties {
struct InstantiationKind;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TKey, typename TValue> class DictionaryPropertyBag_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::DictionaryPropertyBag_2);
// Dependencies Unity.Properties.KeyValueCollectionPropertyBag`3<TDictionary, TKey, TValue>
namespace Unity::Properties {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: Unity.Properties.DictionaryPropertyBag`2<TKey,TValue>
class CORDL_TYPE DictionaryPropertyBag_2 : public ::Unity::Properties::KeyValueCollectionPropertyBag_3<::System::Collections::Generic::Dictionary_2<TKey, TValue>*, TKey, TValue> {
public:
  // Declarations
  __declspec(property(get = get_InstantiationKind)) ::Unity::Properties::InstantiationKind InstantiationKind;

  /// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* Instantiate();

  static inline ::Unity::Properties::DictionaryPropertyBag_2<TKey, TValue>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_InstantiationKind, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Unity::Properties::InstantiationKind get_InstantiationKind();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DictionaryPropertyBag_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DictionaryPropertyBag_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DictionaryPropertyBag_2(DictionaryPropertyBag_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DictionaryPropertyBag_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DictionaryPropertyBag_2(DictionaryPropertyBag_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19358 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::DictionaryPropertyBag_2, "Unity.Properties", "DictionaryPropertyBag`2");
