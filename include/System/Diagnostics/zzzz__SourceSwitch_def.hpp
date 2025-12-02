#pragma once
// IWYU pragma private; include "System/Diagnostics/SourceSwitch.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Diagnostics/zzzz__Switch_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SourceSwitch)
namespace System::Diagnostics {
struct SourceLevels;
}
// Forward declare root types
namespace System::Diagnostics {
class SourceSwitch;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::SourceSwitch);
// Dependencies System.Diagnostics.Switch
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.SourceSwitch
class CORDL_TYPE SourceSwitch : public ::System::Diagnostics::Switch {
public:
  // Declarations
  __declspec(property(get = get_Level, put = set_Level)) ::System::Diagnostics::SourceLevels Level;

  static inline ::System::Diagnostics::SourceSwitch* New_ctor(::StringW displayName, ::StringW defaultSwitchValue);

  /// @brief Method OnValueChanged, addr 0x6179e44, size 0xd4, virtual true, abstract: false, final false
  inline void OnValueChanged();

  /// @brief Method .ctor, addr 0x6179b48, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::StringW displayName, ::StringW defaultSwitchValue);

  /// @brief Method get_Level, addr 0x6179e00, size 0x4, virtual false, abstract: false, final false
  inline ::System::Diagnostics::SourceLevels get_Level();

  /// @brief Method set_Level, addr 0x6179e40, size 0x4, virtual false, abstract: false, final false
  inline void set_Level(::System::Diagnostics::SourceLevels value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SourceSwitch();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SourceSwitch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SourceSwitch(SourceSwitch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SourceSwitch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SourceSwitch(SourceSwitch const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11102 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::SourceSwitch, 0x48>, "Size mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::SourceSwitch);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::SourceSwitch*, "System.Diagnostics", "SourceSwitch");
