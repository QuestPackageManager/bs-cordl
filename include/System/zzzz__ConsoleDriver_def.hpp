#pragma once
// IWYU pragma private; include "System/ConsoleDriver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConsoleDriver)
namespace System {
struct ConsoleKeyInfo;
}
namespace System {
class IConsoleDriver;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace System {
class ConsoleDriver;
}
// Write type traits
MARK_REF_PTR_T(::System::ConsoleDriver);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.ConsoleDriver
class CORDL_TYPE ConsoleDriver : public ::System::Object {
public:
  // Declarations
  /// @brief Field called_isatty, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_called_isatty, put = setStaticF_called_isatty)) bool called_isatty;

  /// @brief Field driver, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_driver, put = setStaticF_driver)) ::System::IConsoleDriver* driver;

  /// @brief Field is_console, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_is_console, put = setStaticF_is_console)) bool is_console;

  /// @brief Method CreateNullConsoleDriver, addr 0x3e386f0, size 0x40, virtual false, abstract: false, final false
  static inline ::System::IConsoleDriver* CreateNullConsoleDriver();

  /// @brief Method CreateTermInfoDriver, addr 0x3e38784, size 0x58, virtual false, abstract: false, final false
  static inline ::System::IConsoleDriver* CreateTermInfoDriver(::StringW term);

  /// @brief Method CreateWindowsConsoleDriver, addr 0x3e38730, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IConsoleDriver* CreateWindowsConsoleDriver();

  /// @brief Method InternalKeyAvailable, addr 0x3e38b24, size 0x4, virtual false, abstract: false, final false
  static inline int32_t InternalKeyAvailable(int32_t ms_timeout);

  /// @brief Method Isatty, addr 0x3e38b20, size 0x4, virtual false, abstract: false, final false
  static inline bool Isatty(::System::IntPtr handle);

  /// @brief Method ReadKey, addr 0x3e380ec, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::ConsoleKeyInfo ReadKey(bool intercept);

  /// @brief Method SetEcho, addr 0x3e38b2c, size 0x8, virtual false, abstract: false, final false
  static inline bool SetEcho(bool wantEcho);

  /// @brief Method TtySetup, addr 0x3e38b28, size 0x4, virtual false, abstract: false, final false
  static inline bool TtySetup(::StringW keypadXmit, ::StringW teardown, ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> control_characters, ::ByRef<::cordl_internals::Ptr<int32_t>> address);

  static inline bool getStaticF_called_isatty();

  static inline ::System::IConsoleDriver* getStaticF_driver();

  static inline bool getStaticF_is_console();

  /// @brief Method get_IsConsole, addr 0x3e37864, size 0x140, virtual false, abstract: false, final false
  static inline bool get_IsConsole();

  static inline void setStaticF_called_isatty(bool value);

  static inline void setStaticF_driver(::System::IConsoleDriver* value);

  static inline void setStaticF_is_console(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConsoleDriver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConsoleDriver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConsoleDriver(ConsoleDriver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConsoleDriver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConsoleDriver(ConsoleDriver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2589 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ConsoleDriver, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::ConsoleDriver);
DEFINE_IL2CPP_ARG_TYPE(::System::ConsoleDriver*, "System", "ConsoleDriver");
