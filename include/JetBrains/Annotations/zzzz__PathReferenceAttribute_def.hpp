#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PathReferenceAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class PathReferenceAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::PathReferenceAttribute);
// Type: JetBrains.Annotations::PathReferenceAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15757))
// CS Name: ::JetBrains.Annotations::PathReferenceAttribute*
class CORDL_TYPE PathReferenceAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <BasePath>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__BasePath_k__BackingField, put = __set__BasePath_k__BackingField))::StringW _BasePath_k__BackingField;

  __declspec(property(get = get_BasePath, put = set_BasePath))::StringW BasePath;

  constexpr ::StringW& __get__BasePath_k__BackingField();

  constexpr ::StringW const& __get__BasePath_k__BackingField() const;

  constexpr void __set__BasePath_k__BackingField(::StringW value);

  static inline ::JetBrains::Annotations::PathReferenceAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x2eba374, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::JetBrains::Annotations::PathReferenceAttribute* New_ctor(::StringW basePath);

  /// @brief Method .ctor, addr 0x2eba37c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW basePath);

  /// @brief Method get_BasePath, addr 0x2eba3a4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_BasePath();

  /// @brief Method set_BasePath, addr 0x2eba3ac, size 0x8, virtual false, abstract: false, final false
  inline void set_BasePath(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "PathReferenceAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PathReferenceAttribute(PathReferenceAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PathReferenceAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PathReferenceAttribute(PathReferenceAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PathReferenceAttribute();

public:
  /// @brief Field <BasePath>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____BasePath_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::PathReferenceAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::JetBrains::Annotations::PathReferenceAttribute, ____BasePath_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::PathReferenceAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::PathReferenceAttribute*, "JetBrains.Annotations", "PathReferenceAttribute");
