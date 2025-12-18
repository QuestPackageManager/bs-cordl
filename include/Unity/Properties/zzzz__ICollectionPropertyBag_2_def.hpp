#pragma once
// IWYU pragma private; include "Unity/Properties/ICollectionPropertyBag_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICollectionPropertyBag_2)
namespace Unity::Properties {
template <typename TContainer> class ICollectionPropertyBagAccept_1;
}
namespace Unity::Properties {
template <typename TContainer> class IPropertyBag_1;
}
namespace Unity::Properties {
class IPropertyBag;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TCollection, typename TElement> class ICollectionPropertyBag_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::ICollectionPropertyBag_2);
// Dependencies
namespace Unity::Properties {
// cpp template
template <typename TCollection, typename TElement>
// Is value type: false
// CS Name: Unity.Properties.ICollectionPropertyBag`2<TCollection,TElement>
class CORDL_TYPE ICollectionPropertyBag_2 {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Properties::ICollectionPropertyBagAccept_1<TCollection>"
  constexpr operator ::Unity::Properties::ICollectionPropertyBagAccept_1<TCollection>*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IPropertyBag"
  constexpr operator ::Unity::Properties::IPropertyBag*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::IPropertyBag_1<TCollection>"
  constexpr operator ::Unity::Properties::IPropertyBag_1<TCollection>*() noexcept;

  /// @brief Convert to "::Unity::Properties::ICollectionPropertyBagAccept_1<TCollection>"
  constexpr ::Unity::Properties::ICollectionPropertyBagAccept_1<TCollection>* i___Unity__Properties__ICollectionPropertyBagAccept_1_TCollection_() noexcept;

  /// @brief Convert to "::Unity::Properties::IPropertyBag"
  constexpr ::Unity::Properties::IPropertyBag* i___Unity__Properties__IPropertyBag() noexcept;

  /// @brief Convert to "::Unity::Properties::IPropertyBag_1<TCollection>"
  constexpr ::Unity::Properties::IPropertyBag_1<TCollection>* i___Unity__Properties__IPropertyBag_1_TCollection_() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "ICollectionPropertyBag_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICollectionPropertyBag_2(ICollectionPropertyBag_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19365 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::ICollectionPropertyBag_2, "Unity.Properties", "ICollectionPropertyBag`2");
