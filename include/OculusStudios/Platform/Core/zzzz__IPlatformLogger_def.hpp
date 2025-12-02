#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/IPlatformLogger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IPlatformLogger)
// Forward declare root types
namespace OculusStudios::Platform::Core {
class IPlatformLogger;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::Platform::Core::IPlatformLogger);
// Dependencies
namespace OculusStudios::Platform::Core {
// Is value type: false
// CS Name: OculusStudios.Platform.Core.IPlatformLogger
class CORDL_TYPE IPlatformLogger {
public:
  // Declarations
  /// @brief Method LogError, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogError(::StringW message);

  /// @brief Method LogInfo, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogInfo(::StringW message);

  /// @brief Method LogSensitive, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogSensitive(::StringW message);

  /// @brief Method LogVerbose, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogVerbose(::StringW message);

  /// @brief Method LogWarning, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogWarning(::StringW message);

  // Ctor Parameters [CppParam { name: "", ty: "IPlatformLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPlatformLogger(IPlatformLogger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22167 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::Platform::Core
NEED_NO_BOX(::OculusStudios::Platform::Core::IPlatformLogger);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Core::IPlatformLogger*, "OculusStudios.Platform.Core", "IPlatformLogger");
