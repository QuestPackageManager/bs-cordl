#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INetImmutableSerializable_1)
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace LiteNetLib::Utils {
template <typename T> class INetImmutableSerializable_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::LiteNetLib::Utils::INetImmutableSerializable_1);
// Type: LiteNetLib.Utils::INetImmutableSerializable`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14192))
// CS Name: ::LiteNetLib.Utils::INetImmutableSerializable`1<T>*
class CORDL_TYPE INetImmutableSerializable_1 {
public:
  // Declarations
  /// @brief Method Serialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method CreateFromSerializedData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);

  // Ctor Parameters [CppParam { name: "", ty: "INetImmutableSerializable_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INetImmutableSerializable_1(INetImmutableSerializable_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INetImmutableSerializable_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INetImmutableSerializable_1(INetImmutableSerializable_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace LiteNetLib::Utils
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::INetImmutableSerializable_1, "LiteNetLib.Utils", "INetImmutableSerializable`1");
