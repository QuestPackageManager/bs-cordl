#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::UnityEngine::ILogHandler);
// Type: UnityEngine::ILogHandler
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::ILogHandler*
class CORDL_TYPE ILogHandler {
public:
  // Declarations
  /// @brief Method LogException, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void LogException(::System::Exception* exception, ::UnityEngine::Object* context);

  /// @brief Method LogFormat, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void LogFormat(::UnityEngine::LogType logType, ::UnityEngine::Object* context, ::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  // Ctor Parameters [CppParam { name: "", ty: "ILogHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ILogHandler(ILogHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ILogHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILogHandler(ILogHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ILogHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ILogHandler*, "UnityEngine", "ILogHandler");
