#pragma once
// IWYU pragma private; include "System/Diagnostics/DebuggerTypeProxyAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DebuggerTypeProxyAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Diagnostics {
class DebuggerTypeProxyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::DebuggerTypeProxyAttribute);
// Dependencies System.Attribute
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.DebuggerTypeProxyAttribute
class CORDL_TYPE DebuggerTypeProxyAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field typeName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_typeName, put = __cordl_internal_set_typeName)) ::StringW typeName;

  static inline ::System::Diagnostics::DebuggerTypeProxyAttribute* New_ctor(::System::Type* type);

  constexpr ::StringW const& __cordl_internal_get_typeName() const;

  constexpr ::StringW& __cordl_internal_get_typeName();

  constexpr void __cordl_internal_set_typeName(::StringW value);

  /// @brief Method .ctor, addr 0x3db6424, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebuggerTypeProxyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebuggerTypeProxyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebuggerTypeProxyAttribute(DebuggerTypeProxyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebuggerTypeProxyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebuggerTypeProxyAttribute(DebuggerTypeProxyAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3742 };

  /// @brief Field typeName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___typeName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::DebuggerTypeProxyAttribute, ___typeName) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::DebuggerTypeProxyAttribute, 0x18>, "Size mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::DebuggerTypeProxyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::DebuggerTypeProxyAttribute*, "System.Diagnostics", "DebuggerTypeProxyAttribute");
