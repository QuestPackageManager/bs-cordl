#pragma once
// IWYU pragma private; include "Unity/Properties/IListPropertyBag_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IListPropertyBag_2)
namespace Unity::Properties {
template <typename TContainer> class ICollectionPropertyBagAccept_1;
}
namespace Unity::Properties {
template <typename TCollection, typename TElement> class ICollectionPropertyBag_2;
}
namespace Unity::Properties {
template <typename TContainer> class IIndexedProperties_1;
}
namespace Unity::Properties {
template <typename TList> class IListPropertyAccept_1;
}
namespace Unity::Properties {
template <typename TContainer> class IListPropertyBagAccept_1;
}
namespace Unity::Properties {
template <typename TContainer> class IPropertyBag_1;
}
namespace Unity::Properties {
class IPropertyBag;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TList, typename TElement> class IListPropertyBag_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::IListPropertyBag_2);
// Dependencies
namespace Unity::Properties {
// cpp template
template <typename TList, typename TElement>
// Is value type: false
// CS Name: Unity.Properties.IListPropertyBag`2<TList,TElement>
class CORDL_TYPE IListPropertyBag_2 {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Properties::ICollectionPropertyBagAccept_1<TList>"
  constexpr operator ::Unity::Properties::ICollectionPropertyBagAccept_1<TList>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::ICollectionPropertyBag_2<TList,TElement>"
  constexpr operator ::Unity::Properties::ICollectionPropertyBag_2<TList, TElement>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IIndexedProperties_1<TList>"
  constexpr operator ::Unity::Properties::IIndexedProperties_1<TList>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IListPropertyAccept_1<TList>"
  constexpr operator ::Unity::Properties::IListPropertyAccept_1<TList>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IListPropertyBagAccept_1<TList>"
  constexpr operator ::Unity::Properties::IListPropertyBagAccept_1<TList>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IPropertyBag"
  constexpr operator ::Unity::Properties::IPropertyBag*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IPropertyBag_1<TList>"
  constexpr operator ::Unity::Properties::IPropertyBag_1<TList>*() noexcept;

  /// @brief Convert to "::Unity::Properties::ICollectionPropertyBagAccept_1<TList>"
  constexpr ::Unity::Properties::ICollectionPropertyBagAccept_1<TList>* i___Unity__Properties__ICollectionPropertyBagAccept_1_TList_() noexcept;

  /// @brief Convert to "::Unity::Properties::ICollectionPropertyBag_2<TList,TElement>"
  constexpr ::Unity::Properties::ICollectionPropertyBag_2<TList, TElement>* i___Unity__Properties__ICollectionPropertyBag_2_TList_TElement_() noexcept;

  /// @brief Convert to "::Unity::Properties::IIndexedProperties_1<TList>"
  constexpr ::Unity::Properties::IIndexedProperties_1<TList>* i___Unity__Properties__IIndexedProperties_1_TList_() noexcept;

  /// @brief Convert to "::Unity::Properties::IListPropertyAccept_1<TList>"
  constexpr ::Unity::Properties::IListPropertyAccept_1<TList>* i___Unity__Properties__IListPropertyAccept_1_TList_() noexcept;

  /// @brief Convert to "::Unity::Properties::IListPropertyBagAccept_1<TList>"
  constexpr ::Unity::Properties::IListPropertyBagAccept_1<TList>* i___Unity__Properties__IListPropertyBagAccept_1_TList_() noexcept;

  /// @brief Convert to "::Unity::Properties::IPropertyBag"
  constexpr ::Unity::Properties::IPropertyBag* i___Unity__Properties__IPropertyBag() noexcept;

  /// @brief Convert to "::Unity::Properties::IPropertyBag_1<TList>"
  constexpr ::Unity::Properties::IPropertyBag_1<TList>* i___Unity__Properties__IPropertyBag_1_TList_() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IListPropertyBag_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IListPropertyBag_2(IListPropertyBag_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19366 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::IListPropertyBag_2, "Unity.Properties", "IListPropertyBag`2");
