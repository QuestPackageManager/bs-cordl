#pragma once
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
// Type: JetBrains.Annotations::CollectionAccessAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15784)), TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15783))
// CS Name: ::JetBrains.Annotations::CollectionAccessAttribute*
class CORDL_TYPE CollectionAccessAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <CollectionAccessType>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__CollectionAccessType_k__BackingField,
                      put = __set__CollectionAccessType_k__BackingField))::JetBrains::Annotations::CollectionAccessType _CollectionAccessType_k__BackingField;

  __declspec(property(get = get_CollectionAccessType, put = set_CollectionAccessType))::JetBrains::Annotations::CollectionAccessType CollectionAccessType;

  constexpr ::JetBrains::Annotations::CollectionAccessType& __get__CollectionAccessType_k__BackingField();

  constexpr ::JetBrains::Annotations::CollectionAccessType const& __get__CollectionAccessType_k__BackingField() const;

  constexpr void __set__CollectionAccessType_k__BackingField(::JetBrains::Annotations::CollectionAccessType value);

  static inline ::JetBrains::Annotations::CollectionAccessAttribute* New_ctor(::JetBrains::Annotations::CollectionAccessType collectionAccessType);

  /// @brief Method .ctor addr 0x2eba6dc size 0x28 virtual false final false
  inline void _ctor(::JetBrains::Annotations::CollectionAccessType collectionAccessType);

  /// @brief Method get_CollectionAccessType addr 0x2eba704 size 0x8 virtual false final false
  inline ::JetBrains::Annotations::CollectionAccessType get_CollectionAccessType();

  /// @brief Method set_CollectionAccessType addr 0x2eba70c size 0x8 virtual false final false
  inline void set_CollectionAccessType(::JetBrains::Annotations::CollectionAccessType value);

  // Ctor Parameters [CppParam { name: "", ty: "CollectionAccessAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionAccessAttribute(CollectionAccessAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionAccessAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionAccessAttribute(CollectionAccessAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionAccessAttribute();

public:
  /// @brief Field <CollectionAccessType>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::JetBrains::Annotations::CollectionAccessType ____CollectionAccessType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::CollectionAccessAttribute, 0x18>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::CollectionAccessAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::CollectionAccessAttribute*, "JetBrains.Annotations", "CollectionAccessAttribute");
