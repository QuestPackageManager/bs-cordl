#pragma once
// IWYU pragma private; include "ModestTree/Log.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::ModestTree::Log*);
DEFINE_IL2CPP_CLASS(::ModestTree::Log*, "ModestTree", "Log");
// Dependencies System.Object
namespace ModestTree {
// Is value type: false
// CS Name: ModestTree.Log
class CORDL_TYPE Log : public ::System::Object {
public:
  // Declarations
  /// @brief Method Debug, addr 0x6e3c650, size 0x4, virtual false, abstract: false, final false
  static inline void Debug(::StringW message, ::ArrayW<::System::Object*> args);

  /// @brief Method Error, addr 0x6e3c81c, size 0x7c, virtual false, abstract: false, final false
  static inline void Error(::StringW message, ::ArrayW<::System::Object*> args);

  /// @brief Method ErrorException, addr 0x6e3c74c, size 0x5c, virtual false, abstract: false, final false
  static inline void ErrorException(::System::Exception* e);

  /// @brief Method ErrorException, addr 0x6e3c7a8, size 0x74, virtual false, abstract: false, final false
  static inline void ErrorException(::StringW message, ::System::Exception* e);

  /// @brief Method Info, addr 0x6e3c654, size 0x7c, virtual false, abstract: false, final false
  static inline void Info(::StringW message, ::ArrayW<::System::Object*> args);

  /// @brief Method Trace, addr 0x6e3c6d0, size 0x7c, virtual false, abstract: false, final false
  static inline void Trace(::StringW message, ::ArrayW<::System::Object*> args);

  /// @brief Method Warn, addr 0x6e3c020, size 0x7c, virtual false, abstract: false, final false
  static inline void Warn(::StringW message, ::ArrayW<::System::Object*> args);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13940 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ModestTree::Log) == 0x10, "Size mismatch!");

} // namespace ModestTree
