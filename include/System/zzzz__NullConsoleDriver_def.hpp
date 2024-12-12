#pragma once
// IWYU pragma private; include "System/NullConsoleDriver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ConsoleKeyInfo_def.hpp"
#include "System/zzzz__IConsoleDriver_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NullConsoleDriver)
namespace System {
struct ConsoleKeyInfo;
}
// Forward declare root types
namespace System {
class NullConsoleDriver;
}
// Write type traits
MARK_REF_PTR_T(::System::NullConsoleDriver);
// Dependencies System.ConsoleKeyInfo, System.IConsoleDriver, System.Object
namespace System {
// Is value type: false
// CS Name: System.NullConsoleDriver
class CORDL_TYPE NullConsoleDriver : public ::System::Object {
public:
  // Declarations
  /// @brief Field EmptyConsoleKeyInfo, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_EmptyConsoleKeyInfo, put = setStaticF_EmptyConsoleKeyInfo)) ::System::ConsoleKeyInfo EmptyConsoleKeyInfo;

  /// @brief Convert operator to "::System::IConsoleDriver"
  constexpr operator ::System::IConsoleDriver*() noexcept;

  static inline ::System::NullConsoleDriver* New_ctor();

  /// @brief Method ReadKey, addr 0x3e39dcc, size 0x5c, virtual true, abstract: false, final true
  inline ::System::ConsoleKeyInfo ReadKey(bool intercept);

  /// @brief Method .ctor, addr 0x3e32920, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::ConsoleKeyInfo getStaticF_EmptyConsoleKeyInfo();

  /// @brief Convert to "::System::IConsoleDriver"
  constexpr ::System::IConsoleDriver* i___System__IConsoleDriver() noexcept;

  static inline void setStaticF_EmptyConsoleKeyInfo(::System::ConsoleKeyInfo value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NullConsoleDriver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NullConsoleDriver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NullConsoleDriver(NullConsoleDriver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NullConsoleDriver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NullConsoleDriver(NullConsoleDriver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2614 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::NullConsoleDriver, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::NullConsoleDriver);
DEFINE_IL2CPP_ARG_TYPE(::System::NullConsoleDriver*, "System", "NullConsoleDriver");
