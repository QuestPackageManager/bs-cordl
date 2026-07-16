#pragma once
// IWYU pragma private; include "LiteNetLib/INetLogger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(INetLogger)
namespace LiteNetLib {
struct NetLogLevel;
}
namespace System {
class Object;
}
// Forward declare root types
namespace LiteNetLib {
class INetLogger;
}
// Write type traits
MARK_REF_T(::LiteNetLib::INetLogger*);
DEFINE_IL2CPP_CLASS(::LiteNetLib::INetLogger*, "LiteNetLib", "INetLogger");
// Dependencies
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.INetLogger
class CORDL_TYPE INetLogger {
public:
  // Declarations
  /// @brief Method WriteNet, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteNet(::LiteNetLib::NetLogLevel level, ::StringW str, ::ArrayW<::System::Object*> args);

  // Ctor Parameters [CppParam { name: "", ty: "INetLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INetLogger(INetLogger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20023 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib
