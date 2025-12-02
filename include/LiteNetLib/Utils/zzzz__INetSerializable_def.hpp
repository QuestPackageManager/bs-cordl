#pragma once
// IWYU pragma private; include "LiteNetLib/Utils/INetSerializable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INetSerializable)
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace LiteNetLib::Utils {
class INetSerializable;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::Utils::INetSerializable);
// Dependencies
namespace LiteNetLib::Utils {
// Is value type: false
// CS Name: LiteNetLib.Utils.INetSerializable
class CORDL_TYPE INetSerializable {
public:
  // Declarations
  /// @brief Method Deserialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Serialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  // Ctor Parameters [CppParam { name: "", ty: "INetSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INetSerializable(INetSerializable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19835 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
NEED_NO_BOX(::LiteNetLib::Utils::INetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::INetSerializable*, "LiteNetLib.Utils", "INetSerializable");
