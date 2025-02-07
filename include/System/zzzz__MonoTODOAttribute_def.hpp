#pragma once
// IWYU pragma private; include "System/MonoTODOAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(MonoTODOAttribute)
// Forward declare root types
namespace System {
class MonoTODOAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::MonoTODOAttribute);
// Dependencies System.Attribute
namespace System {
// Is value type: false
// CS Name: System.MonoTODOAttribute
class CORDL_TYPE MonoTODOAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::MonoTODOAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x423a0e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7150 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::MonoTODOAttribute, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::MonoTODOAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::MonoTODOAttribute*, "System", "MonoTODOAttribute");
