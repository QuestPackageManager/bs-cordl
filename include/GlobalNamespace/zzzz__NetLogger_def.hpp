#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NetLogger)
namespace LiteNetLib {
class INetLogger;
}
namespace System {
class Object;
}
namespace LiteNetLib {
struct NetLogLevel;
}
// Forward declare root types
namespace GlobalNamespace {
class NetLogger;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NetLogger);
// Type: ::NetLogger
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12888))
// CS Name: ::NetLogger*
class CORDL_TYPE NetLogger : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::LiteNetLib::INetLogger"
  constexpr operator ::LiteNetLib::INetLogger*() noexcept;

  /// @brief Method WriteNet addr 0xe4cea8 size 0x174 virtual true final true
  inline void WriteNet(::LiteNetLib::NetLogLevel level, ::StringW str, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  static inline ::GlobalNamespace::NetLogger* New_ctor();

  /// @brief Method .ctor addr 0xe4d01c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NetLogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetLogger(NetLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetLogger(NetLogger const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetLogger();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetLogger, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NetLogger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetLogger*, "", "NetLogger");
