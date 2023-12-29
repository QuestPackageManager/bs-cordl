#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ConsoleKeyInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NullConsoleDriver)
namespace System {
struct ConsoleKeyInfo;
}
namespace System {
class IConsoleDriver;
}
// Forward declare root types
namespace System {
class NullConsoleDriver;
}
// Write type traits
MARK_REF_PTR_T(::System::NullConsoleDriver);
// Type: System::NullConsoleDriver
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2518))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2610))
// CS Name: ::System::NullConsoleDriver*
class CORDL_TYPE NullConsoleDriver : public ::System::Object {
public:
  // Declarations
  /// @brief Field EmptyConsoleKeyInfo, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_EmptyConsoleKeyInfo, put = setStaticF_EmptyConsoleKeyInfo))::System::ConsoleKeyInfo EmptyConsoleKeyInfo;

  /// @brief Convert operator to "::System::IConsoleDriver"
  constexpr operator ::System::IConsoleDriver*() noexcept;

  static inline void setStaticF_EmptyConsoleKeyInfo(::System::ConsoleKeyInfo value);

  static inline ::System::ConsoleKeyInfo getStaticF_EmptyConsoleKeyInfo();

  /// @brief Method ReadKey addr 0x24a3ce4 size 0x5c virtual true final true
  inline ::System::ConsoleKeyInfo ReadKey(bool intercept);

  static inline ::System::NullConsoleDriver* New_ctor();

  /// @brief Method .ctor addr 0x249c900 size 0x4 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NullConsoleDriver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NullConsoleDriver(NullConsoleDriver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NullConsoleDriver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NullConsoleDriver(NullConsoleDriver const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NullConsoleDriver();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::NullConsoleDriver, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::NullConsoleDriver);
DEFINE_IL2CPP_ARG_TYPE(::System::NullConsoleDriver*, "System", "NullConsoleDriver");
