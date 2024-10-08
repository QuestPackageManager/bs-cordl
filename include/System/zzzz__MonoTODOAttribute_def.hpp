#pragma once
// IWYU pragma private; include "System/MonoTODOAttribute.hpp"
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
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::MonoTODOAttribute*
class CORDL_TYPE MonoTODOAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field comment, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_comment, put = __cordl_internal_set_comment)) ::StringW comment;

  static inline ::System::MonoTODOAttribute* New_ctor();

  static inline ::System::MonoTODOAttribute* New_ctor(::StringW comment);

  constexpr ::StringW const& __cordl_internal_get_comment() const;

  constexpr ::StringW& __cordl_internal_get_comment();

  constexpr void __cordl_internal_set_comment(::StringW value);

  /// @brief Method .ctor, addr 0x3d9dd88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3d9dd98, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW comment);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoTODOAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoTODOAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoTODOAttribute(MonoTODOAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoTODOAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoTODOAttribute(MonoTODOAttribute const&) = delete;

  /// @brief Field comment, offset: 0x10, size: 0x8, def value: None
  ::StringW ___comment;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2537 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::MonoTODOAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::MonoTODOAttribute, ___comment) == 0x10, "Offset mismatch!");

} // namespace System
NEED_NO_BOX(::System::MonoTODOAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::MonoTODOAttribute*, "System", "MonoTODOAttribute");
