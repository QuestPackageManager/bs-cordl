#pragma once
// IWYU pragma private; include "LiteNetLib/NetDebug.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NetDebug)
namespace LiteNetLib {
class INetLogger;
}
namespace LiteNetLib {
struct NetLogLevel;
}
namespace System {
class Object;
}
// Forward declare root types
namespace LiteNetLib {
class NetDebug;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::NetDebug);
// Dependencies System.Object
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.NetDebug
class CORDL_TYPE NetDebug : public ::System::Object {
public:
  // Declarations
  /// @brief Field DebugLogLock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DebugLogLock, put = setStaticF_DebugLogLock)) ::System::Object* DebugLogLock;

  /// @brief Field Logger, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Logger, put = setStaticF_Logger)) ::LiteNetLib::INetLogger* Logger;

  /// @brief Method Write, addr 0x3aaf7f8, size 0x6c, virtual false, abstract: false, final false
  static inline void Write(::LiteNetLib::NetLogLevel level, ::StringW str, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Write, addr 0x3aaf790, size 0x68, virtual false, abstract: false, final false
  static inline void Write(::StringW str, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method WriteError, addr 0x3aabd48, size 0x68, virtual false, abstract: false, final false
  static inline void WriteError(::StringW str, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method WriteForce, addr 0x3aaf8cc, size 0x6c, virtual false, abstract: false, final false
  static inline void WriteForce(::LiteNetLib::NetLogLevel level, ::StringW str, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method WriteForce, addr 0x3aaf864, size 0x68, virtual false, abstract: false, final false
  static inline void WriteForce(::StringW str, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method WriteLogic, addr 0x3aaf574, size 0x21c, virtual false, abstract: false, final false
  static inline void WriteLogic(::LiteNetLib::NetLogLevel logLevel, ::StringW str, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  static inline ::System::Object* getStaticF_DebugLogLock();

  static inline ::LiteNetLib::INetLogger* getStaticF_Logger();

  static inline void setStaticF_DebugLogLock(::System::Object* value);

  static inline void setStaticF_Logger(::LiteNetLib::INetLogger* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetDebug();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetDebug", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetDebug(NetDebug&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetDebug", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetDebug(NetDebug const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16545 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::NetDebug, 0x10>, "Size mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::NetDebug);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetDebug*, "LiteNetLib", "NetDebug");
