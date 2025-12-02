#pragma once
// IWYU pragma private; include "Unity/Properties/IDictionaryPropertyBag_3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDictionaryPropertyBag_3)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System {
class Object;
}
namespace Unity::Properties {
template <typename TContainer> class ICollectionPropertyBagAccept_1;
}
namespace Unity::Properties {
template <typename TCollection, typename TElement> class ICollectionPropertyBag_2;
}
namespace Unity::Properties {
template <typename TContainer> class IDictionaryPropertyBagAccept_1;
}
namespace Unity::Properties {
template <typename TContainer, typename TKey> class IKeyedProperties_2;
}
namespace Unity::Properties {
template <typename TContainer> class IPropertyBag_1;
}
namespace Unity::Properties {
class IPropertyBag;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TDictionary, typename TKey, typename TValue> class IDictionaryPropertyBag_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::IDictionaryPropertyBag_3);
// Dependencies
namespace Unity::Properties {
// cpp template
template <typename TDictionary, typename TKey, typename TValue>
// Is value type: false
// CS Name: Unity.Properties.IDictionaryPropertyBag`3<TDictionary,TKey,TValue>
class CORDL_TYPE IDictionaryPropertyBag_3 {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Properties::ICollectionPropertyBagAccept_1<TDictionary>"
  constexpr operator ::Unity::Properties::ICollectionPropertyBagAccept_1<TDictionary>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::ICollectionPropertyBag_2<TDictionary,::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::Unity::Properties::ICollectionPropertyBag_2<TDictionary, ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IDictionaryPropertyBagAccept_1<TDictionary>"
  constexpr operator ::Unity::Properties::IDictionaryPropertyBagAccept_1<TDictionary>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IKeyedProperties_2<TDictionary,::System::Object*>"
  constexpr operator ::Unity::Properties::IKeyedProperties_2<TDictionary, ::System::Object*>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IPropertyBag"
  constexpr operator ::Unity::Properties::IPropertyBag*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IPropertyBag_1<TDictionary>"
  constexpr operator ::Unity::Properties::IPropertyBag_1<TDictionary>*() noexcept;

  /// @brief Convert to "::Unity::Properties::ICollectionPropertyBagAccept_1<TDictionary>"
  constexpr ::Unity::Properties::ICollectionPropertyBagAccept_1<TDictionary>* i___Unity__Properties__ICollectionPropertyBagAccept_1_TDictionary_() noexcept;

  /// @brief Convert to "::Unity::Properties::ICollectionPropertyBag_2<TDictionary,::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr ::Unity::Properties::ICollectionPropertyBag_2<TDictionary, ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
  i___Unity__Properties__ICollectionPropertyBag_2_TDictionary___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

  /// @brief Convert to "::Unity::Properties::IDictionaryPropertyBagAccept_1<TDictionary>"
  constexpr ::Unity::Properties::IDictionaryPropertyBagAccept_1<TDictionary>* i___Unity__Properties__IDictionaryPropertyBagAccept_1_TDictionary_() noexcept;

  /// @brief Convert to "::Unity::Properties::IKeyedProperties_2<TDictionary,::System::Object*>"
  constexpr ::Unity::Properties::IKeyedProperties_2<TDictionary, ::System::Object*>* i___Unity__Properties__IKeyedProperties_2_TDictionary___System__Object__() noexcept;

  /// @brief Convert to "::Unity::Properties::IPropertyBag"
  constexpr ::Unity::Properties::IPropertyBag* i___Unity__Properties__IPropertyBag() noexcept;

  /// @brief Convert to "::Unity::Properties::IPropertyBag_1<TDictionary>"
  constexpr ::Unity::Properties::IPropertyBag_1<TDictionary>* i___Unity__Properties__IPropertyBag_1_TDictionary_() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IDictionaryPropertyBag_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDictionaryPropertyBag_3(IDictionaryPropertyBag_3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19342 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::IDictionaryPropertyBag_3, "Unity.Properties", "IDictionaryPropertyBag`3");
