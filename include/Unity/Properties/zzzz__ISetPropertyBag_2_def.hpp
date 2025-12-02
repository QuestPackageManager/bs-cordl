#pragma once
// IWYU pragma private; include "Unity/Properties/ISetPropertyBag_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISetPropertyBag_2)
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
template <typename TContainer, typename TKey> class IKeyedProperties_2;
}
namespace Unity::Properties {
template <typename TContainer> class IPropertyBag_1;
}
namespace Unity::Properties {
class IPropertyBag;
}
namespace Unity::Properties {
template <typename TContainer> class ISetPropertyBagAccept_1;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TSet, typename TElement> class ISetPropertyBag_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::ISetPropertyBag_2);
// Dependencies
namespace Unity::Properties {
// cpp template
template <typename TSet, typename TElement>
// Is value type: false
// CS Name: Unity.Properties.ISetPropertyBag`2<TSet,TElement>
class CORDL_TYPE ISetPropertyBag_2 {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Properties::ICollectionPropertyBagAccept_1<TSet>"
  constexpr operator ::Unity::Properties::ICollectionPropertyBagAccept_1<TSet>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::ICollectionPropertyBag_2<TSet,TElement>"
  constexpr operator ::Unity::Properties::ICollectionPropertyBag_2<TSet, TElement>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IKeyedProperties_2<TSet,::System::Object*>"
  constexpr operator ::Unity::Properties::IKeyedProperties_2<TSet, ::System::Object*>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IPropertyBag"
  constexpr operator ::Unity::Properties::IPropertyBag*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IPropertyBag_1<TSet>"
  constexpr operator ::Unity::Properties::IPropertyBag_1<TSet>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::ISetPropertyBagAccept_1<TSet>"
  constexpr operator ::Unity::Properties::ISetPropertyBagAccept_1<TSet>*() noexcept;

  /// @brief Convert to "::Unity::Properties::ICollectionPropertyBagAccept_1<TSet>"
  constexpr ::Unity::Properties::ICollectionPropertyBagAccept_1<TSet>* i___Unity__Properties__ICollectionPropertyBagAccept_1_TSet_() noexcept;

  /// @brief Convert to "::Unity::Properties::ICollectionPropertyBag_2<TSet,TElement>"
  constexpr ::Unity::Properties::ICollectionPropertyBag_2<TSet, TElement>* i___Unity__Properties__ICollectionPropertyBag_2_TSet_TElement_() noexcept;

  /// @brief Convert to "::Unity::Properties::IKeyedProperties_2<TSet,::System::Object*>"
  constexpr ::Unity::Properties::IKeyedProperties_2<TSet, ::System::Object*>* i___Unity__Properties__IKeyedProperties_2_TSet___System__Object__() noexcept;

  /// @brief Convert to "::Unity::Properties::IPropertyBag"
  constexpr ::Unity::Properties::IPropertyBag* i___Unity__Properties__IPropertyBag() noexcept;

  /// @brief Convert to "::Unity::Properties::IPropertyBag_1<TSet>"
  constexpr ::Unity::Properties::IPropertyBag_1<TSet>* i___Unity__Properties__IPropertyBag_1_TSet_() noexcept;

  /// @brief Convert to "::Unity::Properties::ISetPropertyBagAccept_1<TSet>"
  constexpr ::Unity::Properties::ISetPropertyBagAccept_1<TSet>* i___Unity__Properties__ISetPropertyBagAccept_1_TSet_() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "ISetPropertyBag_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISetPropertyBag_2(ISetPropertyBag_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19341 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::ISetPropertyBag_2, "Unity.Properties", "ISetPropertyBag`2");
