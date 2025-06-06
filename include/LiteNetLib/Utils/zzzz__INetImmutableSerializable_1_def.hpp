#pragma once
// IWYU pragma private; include "LiteNetLib/Utils/INetImmutableSerializable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INetImmutableSerializable_1)
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace LiteNetLib::Utils {
template <typename T> class INetImmutableSerializable_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::INetImmutableSerializable_1);
// Dependencies
namespace LiteNetLib::Utils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: LiteNetLib.Utils.INetImmutableSerializable`1<T>
class CORDL_TYPE INetImmutableSerializable_1 {
public:
  // Declarations
  /// @brief Method CreateFromSerializedData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Serialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  // Ctor Parameters [CppParam { name: "", ty: "INetImmutableSerializable_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INetImmutableSerializable_1(INetImmutableSerializable_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16578 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::INetImmutableSerializable_1, "LiteNetLib.Utils", "INetImmutableSerializable`1");
