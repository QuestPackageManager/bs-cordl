#pragma once
// IWYU pragma private; include "JetBrains/Annotations/ItemNotNullAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ItemNotNullAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class ItemNotNullAttribute;
}
// Write type traits
MARK_REF_T(::JetBrains::Annotations::ItemNotNullAttribute*);
DEFINE_IL2CPP_CLASS(::JetBrains::Annotations::ItemNotNullAttribute*, "JetBrains.Annotations", "ItemNotNullAttribute");
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.ItemNotNullAttribute
class CORDL_TYPE ItemNotNullAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::JetBrains::Annotations::ItemNotNullAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x6e3a8d8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ItemNotNullAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ItemNotNullAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ItemNotNullAttribute(ItemNotNullAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ItemNotNullAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ItemNotNullAttribute(ItemNotNullAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22490 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::JetBrains::Annotations::ItemNotNullAttribute) == 0x10, "Size mismatch!");

} // namespace JetBrains::Annotations
