#pragma once
// IWYU pragma private; include "UnityEngine\ILogHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ILogHandler)
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct LogType;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class ILogHandler;
}
// Write type traits
MARK_REF_T(::UnityEngine::ILogHandler*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ILogHandler*, "UnityEngine", "ILogHandler");
// Dependencies
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ILogHandler
class CORDL_TYPE ILogHandler {
public:
  // Declarations
  /// @brief Method LogException, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogException(::System::Exception* exception, ::UnityEngine::Object* context);

  /// @brief Method LogFormat, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogFormat(::UnityEngine::LogType logType, ::UnityEngine::Object* context, ::StringW format, ::ArrayW<::System::Object*> args);

  // Ctor Parameters [CppParam { name: "", ty: "ILogHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILogHandler(ILogHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10242 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine
