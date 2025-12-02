#pragma once
// IWYU pragma private; include "Unity/Properties/ICollectionPropertyBagAccept_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICollectionPropertyBagAccept_1)
namespace Unity::Properties {
class ICollectionPropertyBagVisitor;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TContainer> class ICollectionPropertyBagAccept_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::ICollectionPropertyBagAccept_1);
// Dependencies
namespace Unity::Properties {
// cpp template
template <typename TContainer>
// Is value type: false
// CS Name: Unity.Properties.ICollectionPropertyBagAccept`1<TContainer>
class CORDL_TYPE ICollectionPropertyBagAccept_1 {
public:
  // Declarations
  /// @brief Method Accept, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Accept(::Unity::Properties::ICollectionPropertyBagVisitor* visitor, ::ByRef<TContainer> container);

  // Ctor Parameters [CppParam { name: "", ty: "ICollectionPropertyBagAccept_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICollectionPropertyBagAccept_1(ICollectionPropertyBagAccept_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19366 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::ICollectionPropertyBagAccept_1, "Unity.Properties", "ICollectionPropertyBagAccept`1");
