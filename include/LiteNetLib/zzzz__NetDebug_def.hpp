#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NetDebug)
namespace LiteNetLib {
struct NetLogLevel;
}
namespace LiteNetLib {
class INetLogger;
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
// Type: LiteNetLib::NetDebug
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14497))
// CS Name: ::LiteNetLib::NetDebug*
class CORDL_TYPE NetDebug : public ::System::Object {
public:
  // Declarations
  /// @brief Field Logger, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Logger, put = setStaticF_Logger))::LiteNetLib::INetLogger* Logger;

  /// @brief Field DebugLogLock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DebugLogLock, put = setStaticF_DebugLogLock))::System::Object* DebugLogLock;

  static inline void setStaticF_Logger(::LiteNetLib::INetLogger* value);

  static inline ::LiteNetLib::INetLogger* getStaticF_Logger();

  static inline void setStaticF_DebugLogLock(::System::Object* value);

  static inline ::System::Object* getStaticF_DebugLogLock();

  /// @brief Method WriteLogic addr 0x209a090 size 0x220 virtual false final false
  static inline void WriteLogic(::LiteNetLib::NetLogLevel logLevel, ::StringW str, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Write addr 0x209a2b0 size 0x68 virtual false final false
  static inline void Write(::StringW str, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Write addr 0x209a318 size 0x6c virtual false final false
  static inline void Write(::LiteNetLib::NetLogLevel level, ::StringW str, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method WriteForce addr 0x209a384 size 0x68 virtual false final false
  static inline void WriteForce(::StringW str, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method WriteForce addr 0x209a3ec size 0x6c virtual false final false
  static inline void WriteForce(::LiteNetLib::NetLogLevel level, ::StringW str, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method WriteError addr 0x2096680 size 0x68 virtual false final false
  static inline void WriteError(::StringW str, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  // Ctor Parameters [CppParam { name: "", ty: "NetDebug", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetDebug(NetDebug&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetDebug", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetDebug(NetDebug const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetDebug();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::NetDebug, 0x10>, "Size mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::NetDebug);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetDebug*, "LiteNetLib", "NetDebug");
