#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::LiteNetLib::INetLogger);
// Type: LiteNetLib::INetLogger
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// CS Name: ::LiteNetLib::INetLogger*
class CORDL_TYPE INetLogger {
public:
  // Declarations
  /// @brief Method WriteNet, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteNet(::LiteNetLib::NetLogLevel level, ::StringW str, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  // Ctor Parameters [CppParam { name: "", ty: "INetLogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INetLogger(INetLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INetLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INetLogger(INetLogger const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::INetLogger);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::INetLogger*, "LiteNetLib", "INetLogger");
