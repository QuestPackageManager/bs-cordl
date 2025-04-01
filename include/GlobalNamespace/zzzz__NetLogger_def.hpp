#pragma once
// IWYU pragma private; include "GlobalNamespace/NetLogger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/zzzz__INetLogger_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NetLogger)
namespace LiteNetLib {
struct NetLogLevel;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class NetLogger;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NetLogger);
// Dependencies LiteNetLib.INetLogger, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetLogger
class CORDL_TYPE NetLogger : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::LiteNetLib::INetLogger"
  constexpr operator ::LiteNetLib::INetLogger*() noexcept;

  static inline ::GlobalNamespace::NetLogger* New_ctor();

  /// @brief Method WriteNet, addr 0x22d96b0, size 0x194, virtual true, abstract: false, final true
  inline void WriteNet(::LiteNetLib::NetLogLevel level, ::StringW str, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method .ctor, addr 0x22d9844, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::LiteNetLib::INetLogger"
  constexpr ::LiteNetLib::INetLogger* i___LiteNetLib__INetLogger() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetLogger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetLogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetLogger(NetLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetLogger(NetLogger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14896 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetLogger, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NetLogger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetLogger*, "", "NetLogger");
