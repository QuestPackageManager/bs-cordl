#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VarIntExtensions)
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
class VarIntExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VarIntExtensions);
// Type: ::VarIntExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15049))
// CS Name: ::VarIntExtensions*
class CORDL_TYPE VarIntExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method PutVarInt, addr 0x12a30a8, size 0x10, virtual false, abstract: false, final false
  static inline void PutVarInt(::LiteNetLib::Utils::NetDataWriter* writer, int32_t val);

  /// @brief Method GetVarInt, addr 0x12a3400, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t GetVarInt(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method PutVarUInt, addr 0x12a0198, size 0x8, virtual false, abstract: false, final false
  static inline void PutVarUInt(::LiteNetLib::Utils::NetDataWriter* writer, uint32_t val);

  /// @brief Method GetVarUInt, addr 0x12a013c, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t GetVarUInt(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method PutVarLong, addr 0x12aa110, size 0xc, virtual false, abstract: false, final false
  static inline void PutVarLong(::LiteNetLib::Utils::NetDataWriter* writer, int64_t val);

  /// @brief Method GetVarLong, addr 0x12aa11c, size 0x18, virtual false, abstract: false, final false
  static inline int64_t GetVarLong(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method PutVarULong, addr 0x12aa134, size 0x48, virtual false, abstract: false, final false
  static inline void PutVarULong(::LiteNetLib::Utils::NetDataWriter* writer, uint64_t val);

  /// @brief Method GetVarULong, addr 0x12aa17c, size 0x74, virtual false, abstract: false, final false
  static inline uint64_t GetVarULong(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method TryGetVarUInt, addr 0x12aa1f0, size 0x4c, virtual false, abstract: false, final false
  static inline bool TryGetVarUInt(::LiteNetLib::Utils::NetDataReader* reader, ByRef<uint32_t> value);

  /// @brief Method TryGetVarULong, addr 0x12aa23c, size 0x88, virtual false, abstract: false, final false
  static inline bool TryGetVarULong(::LiteNetLib::Utils::NetDataReader* reader, ByRef<uint64_t> value);

  /// @brief Method GetSize, addr 0x12a6e4c, size 0x24, virtual false, abstract: false, final false
  static inline int32_t GetSize(int32_t val);

  /// @brief Method GetSize, addr 0x12aa2e4, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t GetSize(uint32_t val);

  /// @brief Method GetSize, addr 0x12aa2c4, size 0x20, virtual false, abstract: false, final false
  static inline int32_t GetSize(int64_t val);

  /// @brief Method GetSize, addr 0x12aa300, size 0xe43f38, virtual false, abstract: false, final false
  static inline int32_t GetSize(uint64_t val);

  // Ctor Parameters [CppParam { name: "", ty: "VarIntExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VarIntExtensions(VarIntExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VarIntExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VarIntExtensions(VarIntExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VarIntExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VarIntExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VarIntExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VarIntExtensions*, "", "VarIntExtensions");
