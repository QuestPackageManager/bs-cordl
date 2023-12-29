#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MonoTODOAttribute)
// Forward declare root types
namespace System {
class MonoTODOAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::MonoTODOAttribute);
// Type: System::MonoTODOAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2545))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2536))
// CS Name: ::System::MonoTODOAttribute*
class CORDL_TYPE MonoTODOAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field comment, offset 0x10, size 0x8
  __declspec(property(get = __get_comment, put = __set_comment))::StringW comment;

  constexpr ::StringW& __get_comment();

  constexpr ::StringW const& __get_comment() const;

  constexpr void __set_comment(::StringW value);

  static inline ::System::MonoTODOAttribute* New_ctor();

  /// @brief Method .ctor addr 0x247bb94 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::System::MonoTODOAttribute* New_ctor(::StringW comment);

  /// @brief Method .ctor addr 0x247bba4 size 0x28 virtual false final false
  inline void _ctor(::StringW comment);

  // Ctor Parameters [CppParam { name: "", ty: "MonoTODOAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoTODOAttribute(MonoTODOAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoTODOAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoTODOAttribute(MonoTODOAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoTODOAttribute();

public:
  /// @brief Field comment, offset: 0x10, size: 0x8, def value: None
  ::StringW ___comment;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::MonoTODOAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::MonoTODOAttribute, ___comment) == 0x10, "Offset mismatch!");

} // namespace System
NEED_NO_BOX(::System::MonoTODOAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::MonoTODOAttribute*, "System", "MonoTODOAttribute");
