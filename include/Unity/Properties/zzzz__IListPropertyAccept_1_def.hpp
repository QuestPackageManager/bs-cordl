#pragma once
// IWYU pragma private; include "Unity\Properties\IListPropertyAccept_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IListPropertyAccept_1)
namespace Unity::Properties {
class IListPropertyVisitor;
}
namespace Unity::Properties {
template <typename TContainer, typename TValue> class Property_2;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TList> class IListPropertyAccept_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Unity::Properties::IListPropertyAccept_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Unity::Properties::IListPropertyAccept_1, "Unity.Properties", "IListPropertyAccept`1");
// Dependencies
namespace Unity::Properties {
// cpp template
template <typename TList>
// Is value type: false
// CS Name: Unity.Properties.IListPropertyAccept`1<TList>
class CORDL_TYPE IListPropertyAccept_1 {
public:
  // Declarations
  /// @brief Method Accept, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TContainer>
  inline void Accept(::Unity::Properties::IListPropertyVisitor* visitor, ::Unity::Properties::Property_2<TContainer, TList>* property, ::by_ref<TContainer> container, ::by_ref<TList> list);

  // Ctor Parameters [CppParam { name: "", ty: "IListPropertyAccept_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IListPropertyAccept_1(IListPropertyAccept_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19679 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
