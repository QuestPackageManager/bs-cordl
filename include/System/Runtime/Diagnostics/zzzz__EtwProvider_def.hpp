#pragma once
// IWYU pragma private; include "System/Runtime/Diagnostics/EtwProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Diagnostics/zzzz__DiagnosticsEventProvider_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EtwProvider)
namespace System::Runtime::Diagnostics {
struct EventDescriptor;
}
namespace System::Runtime::Diagnostics {
class EventTraceActivity;
}
namespace System {
class Action;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace System::Runtime::Diagnostics {
class EtwProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Diagnostics::EtwProvider);
// Dependencies System.Runtime.Diagnostics.DiagnosticsEventProvider
namespace System::Runtime::Diagnostics {
// Is value type: false
// CS Name: System.Runtime.Diagnostics.EtwProvider
class CORDL_TYPE EtwProvider : public ::System::Runtime::Diagnostics::DiagnosticsEventProvider {
public:
  // Declarations
  __declspec(property(get = get_ControllerCallBack, put = set_ControllerCallBack)) ::System::Action* ControllerCallBack;

  /// @brief Field end2EndActivityTracingEnabled, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_end2EndActivityTracingEnabled, put = __cordl_internal_set_end2EndActivityTracingEnabled)) bool end2EndActivityTracingEnabled;

  /// @brief Field invokeControllerCallback, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_invokeControllerCallback, put = __cordl_internal_set_invokeControllerCallback)) ::System::Action* invokeControllerCallback;

  static inline ::System::Runtime::Diagnostics::EtwProvider* New_ctor(::System::Guid id);

  /// @brief Method OnControllerCommand, addr 0x5fdc6c0, size 0x20, virtual true, abstract: false, final false
  inline void OnControllerCommand();

  /// @brief Method SetEnd2EndActivityTracingEnabled, addr 0x5fdc6e0, size 0x8, virtual false, abstract: false, final false
  inline void SetEnd2EndActivityTracingEnabled(bool isEnd2EndActivityTracingEnabled);

  /// @brief Method WriteEvent, addr 0x5fd573c, size 0xf8, virtual false, abstract: false, final false
  inline bool WriteEvent(::ByRef<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor, ::System::Runtime::Diagnostics::EventTraceActivity* eventTraceActivity, ::StringW value1,
                         ::StringW value2);

  /// @brief Method WriteEvent, addr 0x5fd55fc, size 0x140, virtual false, abstract: false, final false
  inline bool WriteEvent(::ByRef<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor, ::System::Runtime::Diagnostics::EventTraceActivity* eventTraceActivity, ::StringW value1,
                         ::StringW value2, ::StringW value3);

  /// @brief Method WriteEvent, addr 0x5fd5478, size 0x184, virtual false, abstract: false, final false
  inline bool WriteEvent(::ByRef<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor, ::System::Runtime::Diagnostics::EventTraceActivity* eventTraceActivity, ::StringW value1,
                         ::StringW value2, ::StringW value3, ::StringW value4);

  constexpr bool const& __cordl_internal_get_end2EndActivityTracingEnabled() const;

  constexpr bool& __cordl_internal_get_end2EndActivityTracingEnabled();

  constexpr ::System::Action* const& __cordl_internal_get_invokeControllerCallback() const;

  constexpr ::System::Action*& __cordl_internal_get_invokeControllerCallback();

  constexpr void __cordl_internal_set_end2EndActivityTracingEnabled(bool value);

  constexpr void __cordl_internal_set_invokeControllerCallback(::System::Action* value);

  /// @brief Method .ctor, addr 0x5fda494, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Guid id);

  /// @brief Method get_ControllerCallBack, addr 0x5fdc6b0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action* get_ControllerCallBack();

  /// @brief Method set_ControllerCallBack, addr 0x5fdc6b8, size 0x8, virtual false, abstract: false, final false
  inline void set_ControllerCallBack(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EtwProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EtwProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EtwProvider(EtwProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EtwProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EtwProvider(EtwProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21132 };

  /// @brief Field invokeControllerCallback, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ___invokeControllerCallback;

  /// @brief Field end2EndActivityTracingEnabled, offset: 0x58, size: 0x1, def value: None
  bool ___end2EndActivityTracingEnabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Diagnostics::EtwProvider, ___invokeControllerCallback) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Diagnostics::EtwProvider, ___end2EndActivityTracingEnabled) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Diagnostics::EtwProvider, 0x60>, "Size mismatch!");

} // namespace System::Runtime::Diagnostics
NEED_NO_BOX(::System::Runtime::Diagnostics::EtwProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Diagnostics::EtwProvider*, "System.Runtime.Diagnostics", "EtwProvider");
