#pragma once
// IWYU pragma private; include "Unity/Properties/IIndexedProperties_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IIndexedProperties_1)
namespace Unity::Properties {
template <typename TContainer> class IProperty_1;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TContainer> class IIndexedProperties_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::IIndexedProperties_1);
// Dependencies
namespace Unity::Properties {
// cpp template
template <typename TContainer>
// Is value type: false
// CS Name: Unity.Properties.IIndexedProperties`1<TContainer>
class CORDL_TYPE IIndexedProperties_1 {
public:
  // Declarations
  /// @brief Method TryGetProperty, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryGetProperty(::ByRef<TContainer> container, int32_t index, ::ByRef<::Unity::Properties::IProperty_1<TContainer>*> property);

  // Ctor Parameters [CppParam { name: "", ty: "IIndexedProperties_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IIndexedProperties_1(IIndexedProperties_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19360 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::IIndexedProperties_1, "Unity.Properties", "IIndexedProperties`1");
