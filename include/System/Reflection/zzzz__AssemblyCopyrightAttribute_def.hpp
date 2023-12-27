#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssemblyCopyrightAttribute)
// Forward declare root types
namespace System::Reflection {
class AssemblyCopyrightAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::AssemblyCopyrightAttribute);
// Type: System.Reflection::AssemblyCopyrightAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3447))
// CS Name: ::System.Reflection::AssemblyCopyrightAttribute*
class CORDL_TYPE AssemblyCopyrightAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <Copyright>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Copyright_k__BackingField, put = __set__Copyright_k__BackingField))::StringW _Copyright_k__BackingField;

  constexpr ::StringW& __get__Copyright_k__BackingField();

  constexpr ::StringW const& __get__Copyright_k__BackingField() const;

  constexpr void __set__Copyright_k__BackingField(::StringW value);

  static inline ::System::Reflection::AssemblyCopyrightAttribute* New_ctor(::StringW copyright);

  /// @brief Method .ctor addr 0x24e5ed0 size 0x28 virtual false final false
  inline void _ctor(::StringW copyright);

  // Ctor Parameters [CppParam { name: "", ty: "AssemblyCopyrightAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssemblyCopyrightAttribute(AssemblyCopyrightAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssemblyCopyrightAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssemblyCopyrightAttribute(AssemblyCopyrightAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssemblyCopyrightAttribute();

public:
  /// @brief Field <Copyright>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Copyright_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::AssemblyCopyrightAttribute, 0x18>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::AssemblyCopyrightAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyCopyrightAttribute*, "System.Reflection", "AssemblyCopyrightAttribute");
