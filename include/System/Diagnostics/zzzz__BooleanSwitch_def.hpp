#pragma once
// IWYU pragma private; include "System\Diagnostics\BooleanSwitch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Diagnostics/zzzz__Switch_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BooleanSwitch)
// Forward declare root types
namespace System::Diagnostics {
class BooleanSwitch;
}
// Write type traits
MARK_REF_T(::System::Diagnostics::BooleanSwitch*);
DEFINE_IL2CPP_CLASS(::System::Diagnostics::BooleanSwitch*, "System.Diagnostics", "BooleanSwitch");
// Dependencies System.Diagnostics.Switch
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.BooleanSwitch
class CORDL_TYPE BooleanSwitch : public ::System::Diagnostics::Switch {
public:
  // Declarations
  static inline ::System::Diagnostics::BooleanSwitch* New_ctor(::StringW displayName, ::StringW description);

  /// @brief Method OnValueChanged, addr 0x6396ef0, size 0x68, virtual true, abstract: false, final false
  inline void OnValueChanged();

  /// @brief Method .ctor, addr 0x6396e1c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW displayName, ::StringW description);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BooleanSwitch();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BooleanSwitch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BooleanSwitch(BooleanSwitch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BooleanSwitch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BooleanSwitch(BooleanSwitch const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11128 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Diagnostics::BooleanSwitch) == 0x48, "Size mismatch!");

} // namespace System::Diagnostics
