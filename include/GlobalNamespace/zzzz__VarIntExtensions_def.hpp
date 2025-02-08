#pragma once
// IWYU pragma private; include "GlobalNamespace/VarIntExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::GlobalNamespace::VarIntExtensions);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: VarIntExtensions
class CORDL_TYPE VarIntExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetSize, addr 0x2724c90, size 0x34, virtual false, abstract: false, final false
  static inline int32_t GetSize(int32_t val);

  /// @brief Method GetSize, addr 0x2728034, size 0x30, virtual false, abstract: false, final false
  static inline int32_t GetSize(int64_t val);

  /// @brief Method GetSize, addr 0x2728064, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t GetSize(uint32_t val);

  /// @brief Method GetSize, addr 0x2728080, size 0x18, virtual false, abstract: false, final false
  static inline int32_t GetSize(uint64_t val);

  /// @brief Method GetVarInt, addr 0x2721280, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t GetVarInt(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method GetVarLong, addr 0x2727e98, size 0x18, virtual false, abstract: false, final false
  static inline int64_t GetVarLong(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method GetVarUInt, addr 0x271ddf8, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t GetVarUInt(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method GetVarULong, addr 0x2727ef8, size 0x78, virtual false, abstract: false, final false
  static inline uint64_t GetVarULong(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method PutVarInt, addr 0x2720f3c, size 0x20, virtual false, abstract: false, final false
  static inline void PutVarInt(::LiteNetLib::Utils::NetDataWriter* writer, int32_t val);

  /// @brief Method PutVarLong, addr 0x2727e7c, size 0x1c, virtual false, abstract: false, final false
  static inline void PutVarLong(::LiteNetLib::Utils::NetDataWriter* writer, int64_t val);

  /// @brief Method PutVarUInt, addr 0x271de54, size 0x8, virtual false, abstract: false, final false
  static inline void PutVarUInt(::LiteNetLib::Utils::NetDataWriter* writer, uint32_t val);

  /// @brief Method PutVarULong, addr 0x2727eb0, size 0x48, virtual false, abstract: false, final false
  static inline void PutVarULong(::LiteNetLib::Utils::NetDataWriter* writer, uint64_t val);

  /// @brief Method TryGetVarUInt, addr 0x2727f70, size 0x40, virtual false, abstract: false, final false
  static inline bool TryGetVarUInt(::LiteNetLib::Utils::NetDataReader* reader, ::ByRef<uint32_t> value);

  /// @brief Method TryGetVarULong, addr 0x2727fb0, size 0x84, virtual false, abstract: false, final false
  static inline bool TryGetVarULong(::LiteNetLib::Utils::NetDataReader* reader, ::ByRef<uint64_t> value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17027 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VarIntExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VarIntExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VarIntExtensions*, "", "VarIntExtensions");
