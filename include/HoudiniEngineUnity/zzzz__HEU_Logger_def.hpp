#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_Logger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HEU_Logger)
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_Logger;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_Logger);
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_Logger
class CORDL_TYPE HEU_Logger : public ::System::Object {
public:
  // Declarations
  /// @brief Method Log, addr 0x3a89edc, size 0x58, virtual false, abstract: false, final false
  static inline void Log(::StringW text);

  /// @brief Method LogAssertion, addr 0x3a8a0cc, size 0x4, virtual false, abstract: false, final false
  static inline void LogAssertion(::StringW text);

  /// @brief Method LogAssertionFormat, addr 0x3a8a0d0, size 0x4, virtual false, abstract: false, final false
  static inline void LogAssertionFormat(::StringW text, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogError, addr 0x3a8a040, size 0x8c, virtual false, abstract: false, final false
  static inline void LogError(::System::Exception* ex);

  /// @brief Method LogError, addr 0x3a83478, size 0x60, virtual false, abstract: false, final false
  static inline void LogError(::StringW text);

  /// @brief Method LogErrorFormat, addr 0x3a856d4, size 0x74, virtual false, abstract: false, final false
  static inline void LogErrorFormat(::StringW text, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogFormat, addr 0x3a89f34, size 0x68, virtual false, abstract: false, final false
  static inline void LogFormat(::StringW text, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogToCookLogsIfOn, addr 0x3a89f9c, size 0x40, virtual false, abstract: false, final false
  static inline void LogToCookLogsIfOn(::StringW text);

  /// @brief Method LogToCookLogsIfOnFormat, addr 0x3a89fdc, size 0x64, virtual false, abstract: false, final false
  static inline void LogToCookLogsIfOnFormat(::StringW text, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogWarning, addr 0x3a84d24, size 0x60, virtual false, abstract: false, final false
  static inline void LogWarning(::StringW text);

  /// @brief Method LogWarningFormat, addr 0x3a84d84, size 0x74, virtual false, abstract: false, final false
  static inline void LogWarningFormat(::StringW text, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  static inline ::HoudiniEngineUnity::HEU_Logger* New_ctor();

  /// @brief Method .ctor, addr 0x3a8a0d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_Logger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_Logger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_Logger(HEU_Logger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_Logger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_Logger(HEU_Logger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11836 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_Logger, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_Logger);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Logger*, "HoudiniEngineUnity", "HEU_Logger");
