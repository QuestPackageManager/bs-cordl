#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/LogEntry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LogEntry)
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class ProxyConsoleLine;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class SeverityEntry;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class LogEntry;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry);
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::UserInterface {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.LogEntry
class CORDL_TYPE LogEntry : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Callstack, put = set_Callstack)) ::StringW Callstack;

  __declspec(property(get = get_Count, put = set_Count)) int32_t Count;

  __declspec(property(get = get_Label, put = set_Label)) ::StringW Label;

  __declspec(property(get = get_Line, put = set_Line)) ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine* Line;

  __declspec(property(get = get_Severity, put = set_Severity)) ::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry* Severity;

  __declspec(property(get = get_Shown)) bool Shown;

  /// @brief Field <Callstack>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Callstack_k__BackingField, put = __cordl_internal_set__Callstack_k__BackingField)) ::StringW _Callstack_k__BackingField;

  /// @brief Field <Count>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__Count_k__BackingField, put = __cordl_internal_set__Count_k__BackingField)) int32_t _Count_k__BackingField;

  /// @brief Field <Label>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Label_k__BackingField, put = __cordl_internal_set__Label_k__BackingField)) ::StringW _Label_k__BackingField;

  /// @brief Field <Line>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Line_k__BackingField,
                      put = __cordl_internal_set__Line_k__BackingField)) ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine* _Line_k__BackingField;

  /// @brief Field <OnDisplayDetails>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__OnDisplayDetails_k__BackingField,
                      put = setStaticF__OnDisplayDetails_k__BackingField)) ::System::Action_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* _OnDisplayDetails_k__BackingField;

  /// @brief Field <Severity>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Severity_k__BackingField,
                      put = __cordl_internal_set__Severity_k__BackingField)) ::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry* _Severity_k__BackingField;

  /// @brief Method DisplayDetails, addr 0x589db84, size 0x70, virtual false, abstract: false, final false
  inline void DisplayDetails();

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* New_ctor();

  /// @brief Method Setup, addr 0x589c2fc, size 0x18, virtual false, abstract: false, final false
  inline void Setup(::StringW label, ::StringW callstack, ::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry* severity);

  constexpr ::StringW const& __cordl_internal_get__Callstack_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Callstack_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__Count_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__Count_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Label_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Label_k__BackingField();

  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine* const& __cordl_internal_get__Line_k__BackingField() const;

  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine*& __cordl_internal_get__Line_k__BackingField();

  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry* const& __cordl_internal_get__Severity_k__BackingField() const;

  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry*& __cordl_internal_get__Severity_k__BackingField();

  constexpr void __cordl_internal_set__Callstack_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Count_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__Label_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Line_k__BackingField(::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine* value);

  constexpr void __cordl_internal_set__Severity_k__BackingField(::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry* value);

  /// @brief Method .ctor, addr 0x58a48e8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Action_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* getStaticF__OnDisplayDetails_k__BackingField();

  /// @brief Method get_Callstack, addr 0x58a48a8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Callstack();

  /// @brief Method get_Count, addr 0x58a48c8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Label, addr 0x58a4898, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Label();

  /// @brief Method get_Line, addr 0x58a48d8, size 0x8, virtual false, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine* get_Line();

  /// @brief Method get_OnDisplayDetails, addr 0x58a47fc, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Action_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* get_OnDisplayDetails();

  /// @brief Method get_Severity, addr 0x58a48b8, size 0x8, virtual false, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry* get_Severity();

  /// @brief Method get_Shown, addr 0x589ca98, size 0x10, virtual false, abstract: false, final false
  inline bool get_Shown();

  static inline void setStaticF__OnDisplayDetails_k__BackingField(::System::Action_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* value);

  /// @brief Method set_Callstack, addr 0x58a48b0, size 0x8, virtual false, abstract: false, final false
  inline void set_Callstack(::StringW value);

  /// @brief Method set_Count, addr 0x58a48d0, size 0x8, virtual false, abstract: false, final false
  inline void set_Count(int32_t value);

  /// @brief Method set_Label, addr 0x58a48a0, size 0x8, virtual false, abstract: false, final false
  inline void set_Label(::StringW value);

  /// @brief Method set_Line, addr 0x58a48e0, size 0x8, virtual false, abstract: false, final false
  inline void set_Line(::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine* value);

  /// @brief Method set_OnDisplayDetails, addr 0x58a4848, size 0x50, virtual false, abstract: false, final false
  static inline void set_OnDisplayDetails(::System::Action_1<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>* value);

  /// @brief Method set_Severity, addr 0x58a48c0, size 0x8, virtual false, abstract: false, final false
  inline void set_Severity(::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LogEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LogEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LogEntry(LogEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LogEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LogEntry(LogEntry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18341 };

  /// @brief Field <Label>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Label_k__BackingField;

  /// @brief Field <Callstack>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Callstack_k__BackingField;

  /// @brief Field <Severity>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::UserInterface::SeverityEntry* ____Severity_k__BackingField;

  /// @brief Field <Count>k__BackingField, offset: 0x28, size: 0x4, def value: None
  int32_t ____Count_k__BackingField;

  /// @brief Field <Line>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine* ____Line_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry, ____Label_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry, ____Callstack_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry, ____Severity_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry, ____Count_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry, ____Line_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry, 0x38>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*, "Meta.XR.ImmersiveDebugger.UserInterface", "LogEntry");
