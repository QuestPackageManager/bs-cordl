#pragma once
// IWYU pragma private; include "GlobalNamespace\VarIntExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
MARK_REF_T(::GlobalNamespace::VarIntExtensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VarIntExtensions*, "", "VarIntExtensions");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: VarIntExtensions
class CORDL_TYPE VarIntExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetSize, addr 0x3781fe4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetSize(int32_t val);

  /// @brief Method GetSize, addr 0x37855e4, size 0x38, virtual false, abstract: false, final false
  static inline int32_t GetSize(int64_t val);

  /// @brief Method GetSize, addr 0x378561c, size 0x24, virtual false, abstract: false, final false
  static inline int32_t GetSize(uint32_t val);

  /// @brief Method GetSize, addr 0x3785640, size 0x20, virtual false, abstract: false, final false
  static inline int32_t GetSize(uint64_t val);

  /// @brief Method GetVarInt, addr 0x377e1a8, size 0x20, virtual false, abstract: false, final false
  static inline int32_t GetVarInt(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method GetVarLong, addr 0x378544c, size 0x1c, virtual false, abstract: false, final false
  static inline int64_t GetVarLong(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method GetVarUInt, addr 0x377ac04, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t GetVarUInt(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method GetVarULong, addr 0x37854b8, size 0x74, virtual false, abstract: false, final false
  static inline uint64_t GetVarULong(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method PutVarInt, addr 0x377ddf0, size 0x20, virtual false, abstract: false, final false
  static inline void PutVarInt(::LiteNetLib::Utils::NetDataWriter* writer, int32_t val);

  /// @brief Method PutVarLong, addr 0x3785430, size 0x1c, virtual false, abstract: false, final false
  static inline void PutVarLong(::LiteNetLib::Utils::NetDataWriter* writer, int64_t val);

  /// @brief Method PutVarUInt, addr 0x377ac84, size 0x8, virtual false, abstract: false, final false
  static inline void PutVarUInt(::LiteNetLib::Utils::NetDataWriter* writer, uint32_t val);

  /// @brief Method PutVarULong, addr 0x3785468, size 0x50, virtual false, abstract: false, final false
  static inline void PutVarULong(::LiteNetLib::Utils::NetDataWriter* writer, uint64_t val);

  /// @brief Method TryGetVarUInt, addr 0x378552c, size 0x40, virtual false, abstract: false, final false
  static inline bool TryGetVarUInt(::LiteNetLib::Utils::NetDataReader* reader, ::by_ref<uint32_t> value);

  /// @brief Method TryGetVarULong, addr 0x378556c, size 0x78, virtual false, abstract: false, final false
  static inline bool TryGetVarULong(::LiteNetLib::Utils::NetDataReader* reader, ::by_ref<uint64_t> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VarIntExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VarIntExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VarIntExtensions(VarIntExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VarIntExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VarIntExtensions(VarIntExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21221 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::VarIntExtensions) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
