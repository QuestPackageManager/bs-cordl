#pragma once
// IWYU pragma private; include "Unity\Properties\IKeyedProperties_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IKeyedProperties_2)
namespace Unity::Properties {
template <typename TContainer> class IProperty_1;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TContainer, typename TKey> class IKeyedProperties_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Unity::Properties::IKeyedProperties_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Unity::Properties::IKeyedProperties_2, "Unity.Properties", "IKeyedProperties`2");
// Dependencies
namespace Unity::Properties {
// cpp template
template <typename TContainer, typename TKey>
// Is value type: false
// CS Name: Unity.Properties.IKeyedProperties`2<TContainer,TKey>
class CORDL_TYPE IKeyedProperties_2 {
public:
  // Declarations
  /// @brief Method TryGetProperty, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryGetProperty(::by_ref<TContainer> container, TKey key, ::by_ref<::Unity::Properties::IProperty_1<TContainer>*> property);

  // Ctor Parameters [CppParam { name: "", ty: "IKeyedProperties_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKeyedProperties_2(IKeyedProperties_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19644 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
