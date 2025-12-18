#pragma once
// IWYU pragma private; include "BGNet/Logging/ConsoleLogger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ConsoleLogger)
namespace BGNet::Logging {
class Debug_ILogger;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace BGNet::Logging {
class ConsoleLogger;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Logging::ConsoleLogger);
// Dependencies System.Object
namespace BGNet::Logging {
// Is value type: false
// CS Name: BGNet.Logging.ConsoleLogger
class CORDL_TYPE ConsoleLogger : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::BGNet::Logging::Debug_ILogger"
  constexpr operator ::BGNet::Logging::Debug_ILogger*() noexcept;

  /// @brief Method LogError, addr 0x3248178, size 0x1e4, virtual true, abstract: false, final true
  inline void LogError(::StringW message);

  /// @brief Method LogException, addr 0x324835c, size 0x168, virtual true, abstract: false, final true
  inline void LogException(::System::Exception* exception, ::StringW message);

  /// @brief Method LogInfo, addr 0x324806c, size 0x10c, virtual true, abstract: false, final true
  inline void LogInfo(::StringW message);

  /// @brief Method LogWarning, addr 0x32484c4, size 0x10c, virtual true, abstract: false, final true
  inline void LogWarning(::StringW message);

  static inline ::BGNet::Logging::ConsoleLogger* New_ctor();

  /// @brief Method .ctor, addr 0x32485d0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::BGNet::Logging::Debug_ILogger"
  constexpr ::BGNet::Logging::Debug_ILogger* i___BGNet__Logging__Debug_ILogger() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConsoleLogger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConsoleLogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConsoleLogger(ConsoleLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConsoleLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConsoleLogger(ConsoleLogger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23277 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Logging::ConsoleLogger, 0x10>, "Size mismatch!");

} // namespace BGNet::Logging
NEED_NO_BOX(::BGNet::Logging::ConsoleLogger);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Logging::ConsoleLogger*, "BGNet.Logging", "ConsoleLogger");
