#pragma once
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
// Type: System.Diagnostics::DebuggerTypeProxyAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3736))
// CS Name: ::System.Diagnostics::DebuggerTypeProxyAttribute*
class CORDL_TYPE DebuggerTypeProxyAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field typeName, offset 0x10, size 0x8
  __declspec(property(get = __get_typeName, put = __set_typeName))::StringW typeName;

  constexpr ::StringW& __get_typeName();

  constexpr ::StringW const& __get_typeName() const;

  constexpr void __set_typeName(::StringW value);

  static inline ::System::Diagnostics::DebuggerTypeProxyAttribute* New_ctor(::System::Type* type);

  /// @brief Method .ctor, addr 0x2579cc4, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  // Ctor Parameters [CppParam { name: "", ty: "DebuggerTypeProxyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebuggerTypeProxyAttribute(DebuggerTypeProxyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebuggerTypeProxyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebuggerTypeProxyAttribute(DebuggerTypeProxyAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebuggerTypeProxyAttribute();

public:
  /// @brief Field typeName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___typeName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::DebuggerTypeProxyAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Diagnostics::DebuggerTypeProxyAttribute, ___typeName) == 0x10, "Offset mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::DebuggerTypeProxyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::DebuggerTypeProxyAttribute*, "System.Diagnostics", "DebuggerTypeProxyAttribute");
