#pragma once
// IWYU pragma private; include "UnityEngine/DebugLogHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DebugLogHandler)
namespace System {
class Exception;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class ILogHandler;
}
namespace UnityEngine {
struct LogOption;
}
namespace UnityEngine {
struct LogType;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class DebugLogHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::DebugLogHandler);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.DebugLogHandler
class CORDL_TYPE DebugLogHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::ILogHandler"
  constexpr operator ::UnityEngine::ILogHandler*() noexcept;

  /// @brief Method Internal_Log, addr 0x68ad8d8, size 0x17c, virtual false, abstract: false, final false
  static inline void Internal_Log(::UnityEngine::LogType level, ::UnityEngine::LogOption options, ::StringW msg, ::UnityEngine::Object* obj);

  /// @brief Method Internal_LogException, addr 0x68adab0, size 0x90, virtual false, abstract: false, final false
  static inline void Internal_LogException(::System::Exception* ex, ::UnityEngine::Object* obj);

  /// @brief Method Internal_LogException_Injected, addr 0x68adb40, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_LogException_Injected(::System::Exception* ex, ::System::IntPtr obj);

  /// @brief Method Internal_Log_Injected, addr 0x68ada54, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_Log_Injected(::UnityEngine::LogType level, ::UnityEngine::LogOption options, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> msg, ::System::IntPtr obj);

  /// @brief Method LogException, addr 0x68adc00, size 0x5c, virtual true, abstract: false, final true
  inline void LogException(::System::Exception* exception, ::UnityEngine::Object* context);

  /// @brief Method LogFormat, addr 0x68adb84, size 0x3c, virtual true, abstract: false, final true
  inline void LogFormat(::UnityEngine::LogType logType, ::UnityEngine::Object* context, ::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogFormat, addr 0x68adbc0, size 0x40, virtual false, abstract: false, final false
  inline void LogFormat(::UnityEngine::LogType logType, ::UnityEngine::LogOption logOptions, ::UnityEngine::Object* context, ::StringW format,
                        ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  static inline ::UnityEngine::DebugLogHandler* New_ctor();

  /// @brief Method .ctor, addr 0x68adc5c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::ILogHandler"
  constexpr ::UnityEngine::ILogHandler* i___UnityEngine__ILogHandler() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugLogHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugLogHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugLogHandler(DebugLogHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugLogHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugLogHandler(DebugLogHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10080 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::DebugLogHandler, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::DebugLogHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::DebugLogHandler*, "UnityEngine", "DebugLogHandler");
