#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Diagnostics/zzzz__DebuggerBrowsableState_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DebuggerBrowsableAttribute)
namespace System::Diagnostics {
struct DebuggerBrowsableState;
}
// Forward declare root types
namespace System::Diagnostics {
class DebuggerBrowsableAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::DebuggerBrowsableAttribute);
// Type: System.Diagnostics::DebuggerBrowsableAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547)), TypeDefinitionIndex(TypeDefinitionIndex(3734))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3735))
// CS Name: ::System.Diagnostics::DebuggerBrowsableAttribute*
class CORDL_TYPE DebuggerBrowsableAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field state, offset 0x10, size 0x4
  __declspec(property(get = __get_state, put = __set_state))::System::Diagnostics::DebuggerBrowsableState state;

  constexpr ::System::Diagnostics::DebuggerBrowsableState& __get_state();

  constexpr ::System::Diagnostics::DebuggerBrowsableState const& __get_state() const;

  constexpr void __set_state(::System::Diagnostics::DebuggerBrowsableState value);

  static inline ::System::Diagnostics::DebuggerBrowsableAttribute* New_ctor(::System::Diagnostics::DebuggerBrowsableState state);

  /// @brief Method .ctor, addr 0x2579c48, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Diagnostics::DebuggerBrowsableState state);

  // Ctor Parameters [CppParam { name: "", ty: "DebuggerBrowsableAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebuggerBrowsableAttribute(DebuggerBrowsableAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebuggerBrowsableAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebuggerBrowsableAttribute(DebuggerBrowsableAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebuggerBrowsableAttribute();

public:
  /// @brief Field state, offset: 0x10, size: 0x4, def value: None
  ::System::Diagnostics::DebuggerBrowsableState ___state;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::DebuggerBrowsableAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Diagnostics::DebuggerBrowsableAttribute, ___state) == 0x10, "Offset mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::DebuggerBrowsableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::DebuggerBrowsableAttribute*, "System.Diagnostics", "DebuggerBrowsableAttribute");
