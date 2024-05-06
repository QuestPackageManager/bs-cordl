#pragma once
// IWYU pragma private; include "BGNet/Logging/UnityLogger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UnityLogger)
namespace BGNet::Logging {
class __Debug__ILogger;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace BGNet::Logging {
class UnityLogger;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Logging::UnityLogger);
// Type: BGNet.Logging::UnityLogger
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGNet::Logging {
// Is value type: false
// CS Name: ::BGNet.Logging::UnityLogger*
class CORDL_TYPE UnityLogger : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::BGNet::Logging::__Debug__ILogger"
  constexpr operator ::BGNet::Logging::__Debug__ILogger*() noexcept;

  /// @brief Method LogError, addr 0x10c0470, size 0x58, virtual true, abstract: false, final true
  inline void LogError(::StringW message);

  /// @brief Method LogException, addr 0x10c04c8, size 0x88, virtual true, abstract: false, final true
  inline void LogException(::System::Exception* exception, ::StringW message);

  /// @brief Method LogInfo, addr 0x10c046c, size 0x4, virtual true, abstract: false, final true
  inline void LogInfo(::StringW message);

  /// @brief Method LogWarning, addr 0x10c0550, size 0x58, virtual true, abstract: false, final true
  inline void LogWarning(::StringW message);

  static inline ::BGNet::Logging::UnityLogger* New_ctor();

  /// @brief Method .ctor, addr 0x10bfc1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::BGNet::Logging::__Debug__ILogger"
  constexpr ::BGNet::Logging::__Debug__ILogger* i___BGNet__Logging____Debug__ILogger() noexcept;

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Logging::UnityLogger, 0x10>, "Size mismatch!");

} // namespace BGNet::Logging
NEED_NO_BOX(::BGNet::Logging::UnityLogger);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Logging::UnityLogger*, "BGNet.Logging", "UnityLogger");
