#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/ProxyConsoleLine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ProxyController_1_def.hpp"
CORDL_MODULE_EXPORT(ProxyConsoleLine)
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class ConsoleLine;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class LogEntry;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class ProxyConsoleLine;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.ProxyController`1<ControllerType>
namespace Meta::XR::ImmersiveDebugger::UserInterface {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.ProxyConsoleLine
class CORDL_TYPE ProxyConsoleLine : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::ConsoleLine>> {
public:
  // Declarations
  __declspec(property(get = get_Entry, put = set_Entry)) ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* Entry;

  /// @brief Field <Entry>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Entry_k__BackingField,
                      put = __cordl_internal_set__Entry_k__BackingField)) ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* _Entry_k__BackingField;

  /// @brief Method Fill, addr 0x58375c0, size 0x50, virtual true, abstract: false, final false
  inline void Fill();

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine* New_ctor();

  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* const& __cordl_internal_get__Entry_k__BackingField() const;

  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*& __cordl_internal_get__Entry_k__BackingField();

  constexpr void __cordl_internal_set__Entry_k__BackingField(::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* value);

  /// @brief Method .ctor, addr 0x5837610, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Entry, addr 0x58375b0, size 0x8, virtual false, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* get_Entry();

  /// @brief Method set_Entry, addr 0x58375b8, size 0x8, virtual false, abstract: false, final false
  inline void set_Entry(::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProxyConsoleLine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProxyConsoleLine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProxyConsoleLine(ProxyConsoleLine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProxyConsoleLine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProxyConsoleLine(ProxyConsoleLine const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18314 };

  /// @brief Field <Entry>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* ____Entry_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine, ____Entry_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine, 0x20>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine*, "Meta.XR.ImmersiveDebugger.UserInterface", "ProxyConsoleLine");
