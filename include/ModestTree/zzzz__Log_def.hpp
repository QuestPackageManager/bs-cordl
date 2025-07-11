#pragma once
// IWYU pragma private; include "ModestTree/Log.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Log)
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace ModestTree {
class Log;
}
// Write type traits
MARK_REF_PTR_T(::ModestTree::Log);
// Dependencies System.Object
namespace ModestTree {
// Is value type: false
// CS Name: ModestTree.Log
class CORDL_TYPE Log : public ::System::Object {
public:
  // Declarations
  /// @brief Method Debug, addr 0x4af5284, size 0x4, virtual false, abstract: false, final false
  static inline void Debug(::StringW message, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Error, addr 0x4af5440, size 0x78, virtual false, abstract: false, final false
  static inline void Error(::StringW message, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method ErrorException, addr 0x4af5378, size 0x58, virtual false, abstract: false, final false
  static inline void ErrorException(::System::Exception* e);

  /// @brief Method ErrorException, addr 0x4af53d0, size 0x70, virtual false, abstract: false, final false
  static inline void ErrorException(::StringW message, ::System::Exception* e);

  /// @brief Method Info, addr 0x4af5288, size 0x78, virtual false, abstract: false, final false
  static inline void Info(::StringW message, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Trace, addr 0x4af5300, size 0x78, virtual false, abstract: false, final false
  static inline void Trace(::StringW message, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Warn, addr 0x4af4c84, size 0x78, virtual false, abstract: false, final false
  static inline void Warn(::StringW message, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Log();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Log", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Log(Log&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Log", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Log(Log const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11956 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::Log, 0x10>, "Size mismatch!");

} // namespace ModestTree
NEED_NO_BOX(::ModestTree::Log);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::Log*, "ModestTree", "Log");
