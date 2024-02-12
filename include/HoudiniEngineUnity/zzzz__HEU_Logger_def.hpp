#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: HoudiniEngineUnity::HEU_Logger
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9642))
// CS Name: ::HoudiniEngineUnity::HEU_Logger*
class CORDL_TYPE HEU_Logger : public ::System::Object {
public:
  // Declarations
  /// @brief Method Log, addr 0x226569c, size 0x58, virtual false, abstract: false, final false
  static inline void Log(::StringW text);

  /// @brief Method LogFormat, addr 0x22656f4, size 0x68, virtual false, abstract: false, final false
  static inline void LogFormat(::StringW text, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogWarning, addr 0x2260314, size 0x60, virtual false, abstract: false, final false
  static inline void LogWarning(::StringW text);

  /// @brief Method LogWarningFormat, addr 0x2260374, size 0x74, virtual false, abstract: false, final false
  static inline void LogWarningFormat(::StringW text, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogError, addr 0x225ea24, size 0x60, virtual false, abstract: false, final false
  static inline void LogError(::StringW text);

  /// @brief Method LogErrorFormat, addr 0x2260d68, size 0x74, virtual false, abstract: false, final false
  static inline void LogErrorFormat(::StringW text, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogError, addr 0x2265800, size 0x8c, virtual false, abstract: false, final false
  static inline void LogError(::System::Exception* ex);

  /// @brief Method LogAssertion, addr 0x226588c, size 0x4, virtual false, abstract: false, final false
  static inline void LogAssertion(::StringW text);

  /// @brief Method LogAssertionFormat, addr 0x2265890, size 0x4, virtual false, abstract: false, final false
  static inline void LogAssertionFormat(::StringW text, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogToCookLogsIfOn, addr 0x226575c, size 0x40, virtual false, abstract: false, final false
  static inline void LogToCookLogsIfOn(::StringW text);

  /// @brief Method LogToCookLogsIfOnFormat, addr 0x226579c, size 0x64, virtual false, abstract: false, final false
  static inline void LogToCookLogsIfOnFormat(::StringW text, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  static inline ::HoudiniEngineUnity::HEU_Logger* New_ctor();

  /// @brief Method .ctor, addr 0x2265894, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_Logger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_Logger(HEU_Logger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_Logger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_Logger(HEU_Logger const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_Logger();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_Logger, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_Logger);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Logger*, "HoudiniEngineUnity", "HEU_Logger");
