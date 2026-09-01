#pragma once
// IWYU pragma private; include "System\Diagnostics\TraceSwitch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Diagnostics/zzzz__Switch_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TraceSwitch)
// Forward declare root types
namespace System::Diagnostics {
class TraceSwitch;
}
// Write type traits
MARK_REF_T(::System::Diagnostics::TraceSwitch*);
DEFINE_IL2CPP_CLASS(::System::Diagnostics::TraceSwitch*, "System.Diagnostics", "TraceSwitch");
// Dependencies System.Diagnostics.Switch
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.TraceSwitch
class CORDL_TYPE TraceSwitch : public ::System::Diagnostics::Switch {
public:
  // Declarations
  static inline ::System::Diagnostics::TraceSwitch* New_ctor(::StringW displayName, ::StringW description);

  /// @brief Method OnSwitchSettingChanged, addr 0x639b6b4, size 0x38, virtual true, abstract: false, final false
  inline void OnSwitchSettingChanged();

  /// @brief Method OnValueChanged, addr 0x639b6ec, size 0xd4, virtual true, abstract: false, final false
  inline void OnValueChanged();

  /// @brief Method .ctor, addr 0x639b644, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW displayName, ::StringW description);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TraceSwitch();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TraceSwitch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TraceSwitch(TraceSwitch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TraceSwitch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TraceSwitch(TraceSwitch const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11144 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Diagnostics::TraceSwitch) == 0x48, "Size mismatch!");

} // namespace System::Diagnostics
