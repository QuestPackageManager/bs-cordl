#pragma once
// IWYU pragma private; include "JetBrains/Annotations/CollectionAccessAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JetBrains/Annotations/zzzz__CollectionAccessType_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(CollectionAccessAttribute)
namespace JetBrains::Annotations {
struct CollectionAccessType;
}
// Forward declare root types
namespace JetBrains::Annotations {
class CollectionAccessAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::CollectionAccessAttribute);
// Dependencies JetBrains.Annotations.CollectionAccessType, System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.CollectionAccessAttribute
class CORDL_TYPE CollectionAccessAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <CollectionAccessType>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__CollectionAccessType_k__BackingField,
                      put = __cordl_internal_set__CollectionAccessType_k__BackingField)) ::JetBrains::Annotations::CollectionAccessType _CollectionAccessType_k__BackingField;

  static inline ::JetBrains::Annotations::CollectionAccessAttribute* New_ctor(::JetBrains::Annotations::CollectionAccessType collectionAccessType);

  constexpr ::JetBrains::Annotations::CollectionAccessType const& __cordl_internal_get__CollectionAccessType_k__BackingField() const;

  constexpr ::JetBrains::Annotations::CollectionAccessType& __cordl_internal_get__CollectionAccessType_k__BackingField();

  constexpr void __cordl_internal_set__CollectionAccessType_k__BackingField(::JetBrains::Annotations::CollectionAccessType value);

  /// @brief Method .ctor, addr 0x6893e9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::JetBrains::Annotations::CollectionAccessType collectionAccessType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionAccessAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CollectionAccessAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionAccessAttribute(CollectionAccessAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionAccessAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionAccessAttribute(CollectionAccessAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10017 };

  /// @brief Field <CollectionAccessType>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::JetBrains::Annotations::CollectionAccessType ____CollectionAccessType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JetBrains::Annotations::CollectionAccessAttribute, ____CollectionAccessType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::CollectionAccessAttribute, 0x18>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::CollectionAccessAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::CollectionAccessAttribute*, "JetBrains.Annotations", "CollectionAccessAttribute");
