#pragma once
// IWYU pragma private; include "GlobalNamespace/IBeatSaberLogger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IBeatSaberLogger)
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class IBeatSaberLogger;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IBeatSaberLogger);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IBeatSaberLogger
class CORDL_TYPE IBeatSaberLogger {
public:
  // Declarations
  /// @brief Method Log, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Log(::StringW message);

  /// @brief Method Log, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Log(::StringW message, ::System::Object* context);

  /// @brief Method LogError, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogError(::StringW message);

  /// @brief Method LogError, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogError(::StringW message, ::System::Object* context);

  /// @brief Method LogException, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogException(::System::Exception* exception);

  /// @brief Method LogException, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogException(::System::Exception* exception, ::System::Object* context);

  /// @brief Method LogWarning, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogWarning(::StringW message);

  /// @brief Method LogWarning, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogWarning(::StringW message, ::System::Object* context);

  // Ctor Parameters [CppParam { name: "", ty: "IBeatSaberLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBeatSaberLogger(IBeatSaberLogger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6637 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBeatSaberLogger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatSaberLogger*, "", "IBeatSaberLogger");
