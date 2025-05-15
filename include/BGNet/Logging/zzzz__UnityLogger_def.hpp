#pragma once
// IWYU pragma private; include "BGNet/Logging/UnityLogger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGNet/Logging/zzzz__Debug_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UnityLogger)
namespace System {
class Exception;
}
// Forward declare root types
namespace BGNet::Logging {
class UnityLogger;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Logging::UnityLogger);
// Dependencies BGNet.Logging.Debug::ILogger, System.Object
namespace BGNet::Logging {
// Is value type: false
// CS Name: BGNet.Logging.UnityLogger
class CORDL_TYPE UnityLogger : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::BGNet::Logging::Debug_ILogger"
  constexpr operator ::BGNet::Logging::Debug_ILogger*() noexcept;

  /// @brief Method LogError, addr 0x22f132c, size 0x58, virtual true, abstract: false, final true
  inline void LogError(::StringW message);

  /// @brief Method LogException, addr 0x22f1384, size 0x88, virtual true, abstract: false, final true
  inline void LogException(::System::Exception* exception, ::StringW message);

  /// @brief Method LogInfo, addr 0x22f1328, size 0x4, virtual true, abstract: false, final true
  inline void LogInfo(::StringW message);

  /// @brief Method LogWarning, addr 0x22f140c, size 0x58, virtual true, abstract: false, final true
  inline void LogWarning(::StringW message);

  static inline ::BGNet::Logging::UnityLogger* New_ctor();

  /// @brief Method .ctor, addr 0x22f0af4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::BGNet::Logging::Debug_ILogger"
  constexpr ::BGNet::Logging::Debug_ILogger* i___BGNet__Logging__Debug_ILogger() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityLogger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityLogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityLogger(UnityLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityLogger(UnityLogger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19180 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Logging::UnityLogger, 0x10>, "Size mismatch!");

} // namespace BGNet::Logging
NEED_NO_BOX(::BGNet::Logging::UnityLogger);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Logging::UnityLogger*, "BGNet.Logging", "UnityLogger");
