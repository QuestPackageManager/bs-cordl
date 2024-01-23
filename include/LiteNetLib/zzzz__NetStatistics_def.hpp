#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetStatistics)
// Forward declare root types
namespace LiteNetLib {
class NetStatistics;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::NetStatistics);
// Type: LiteNetLib::NetStatistics
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14181))
// CS Name: ::LiteNetLib::NetStatistics*
class CORDL_TYPE NetStatistics : public ::System::Object {
public:
  // Declarations
  /// @brief Field _packetsSent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__packetsSent, put = __cordl_internal_set__packetsSent)) int64_t _packetsSent;

  /// @brief Field _packetsReceived, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__packetsReceived, put = __cordl_internal_set__packetsReceived)) int64_t _packetsReceived;

  /// @brief Field _bytesSent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__bytesSent, put = __cordl_internal_set__bytesSent)) int64_t _bytesSent;

  /// @brief Field _bytesReceived, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__bytesReceived, put = __cordl_internal_set__bytesReceived)) int64_t _bytesReceived;

  /// @brief Field _packetLoss, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__packetLoss, put = __cordl_internal_set__packetLoss)) int64_t _packetLoss;

  __declspec(property(get = get_PacketsSent)) int64_t PacketsSent;

  __declspec(property(get = get_PacketsReceived)) int64_t PacketsReceived;

  __declspec(property(get = get_BytesSent)) int64_t BytesSent;

  __declspec(property(get = get_BytesReceived)) int64_t BytesReceived;

  __declspec(property(get = get_PacketLoss)) int64_t PacketLoss;

  __declspec(property(get = get_PacketLossPercent)) int64_t PacketLossPercent;

  constexpr int64_t& __cordl_internal_get__packetsSent();

  constexpr int64_t const& __cordl_internal_get__packetsSent() const;

  constexpr void __cordl_internal_set__packetsSent(int64_t value);

  constexpr int64_t& __cordl_internal_get__packetsReceived();

  constexpr int64_t const& __cordl_internal_get__packetsReceived() const;

  constexpr void __cordl_internal_set__packetsReceived(int64_t value);

  constexpr int64_t& __cordl_internal_get__bytesSent();

  constexpr int64_t const& __cordl_internal_get__bytesSent() const;

  constexpr void __cordl_internal_set__bytesSent(int64_t value);

  constexpr int64_t& __cordl_internal_get__bytesReceived();

  constexpr int64_t const& __cordl_internal_get__bytesReceived() const;

  constexpr void __cordl_internal_set__bytesReceived(int64_t value);

  constexpr int64_t& __cordl_internal_get__packetLoss();

  constexpr int64_t const& __cordl_internal_get__packetLoss() const;

  constexpr void __cordl_internal_set__packetLoss(int64_t value);

  /// @brief Method get_PacketsSent, addr 0x2205c18, size 0xc, virtual false, abstract: false, final false
  inline int64_t get_PacketsSent();

  /// @brief Method get_PacketsReceived, addr 0x2205c24, size 0xc, virtual false, abstract: false, final false
  inline int64_t get_PacketsReceived();

  /// @brief Method get_BytesSent, addr 0x2205c30, size 0xc, virtual false, abstract: false, final false
  inline int64_t get_BytesSent();

  /// @brief Method get_BytesReceived, addr 0x2205c3c, size 0xc, virtual false, abstract: false, final false
  inline int64_t get_BytesReceived();

  /// @brief Method get_PacketLoss, addr 0x2205c48, size 0xc, virtual false, abstract: false, final false
  inline int64_t get_PacketLoss();

  /// @brief Method get_PacketLossPercent, addr 0x2205c54, size 0x4c, virtual false, abstract: false, final false
  inline int64_t get_PacketLossPercent();

  /// @brief Method Reset, addr 0x2205ca0, size 0x5c, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method IncrementPacketsSent, addr 0x21fdaf8, size 0xc, virtual false, abstract: false, final false
  inline void IncrementPacketsSent();

  /// @brief Method IncrementPacketsReceived, addr 0x21ffa80, size 0xc, virtual false, abstract: false, final false
  inline void IncrementPacketsReceived();

  /// @brief Method AddBytesSent, addr 0x21fdb04, size 0xc, virtual false, abstract: false, final false
  inline void AddBytesSent(int64_t bytesSent);

  /// @brief Method AddBytesReceived, addr 0x21ffa8c, size 0xc, virtual false, abstract: false, final false
  inline void AddBytesReceived(int64_t bytesReceived);

  /// @brief Method IncrementPacketLoss, addr 0x2205cfc, size 0xc, virtual false, abstract: false, final false
  inline void IncrementPacketLoss();

  /// @brief Method AddPacketLoss, addr 0x2205d08, size 0xc, virtual false, abstract: false, final false
  inline void AddPacketLoss(int64_t packetLoss);

  /// @brief Method ToString, addr 0x2205d14, size 0x270, virtual true, abstract: false, final false
  inline ::StringW ToString();

  static inline ::LiteNetLib::NetStatistics* New_ctor();

  /// @brief Method .ctor, addr 0x21fd2a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NetStatistics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetStatistics(NetStatistics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetStatistics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetStatistics(NetStatistics const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetStatistics();

public:
  /// @brief Field _packetsSent, offset: 0x10, size: 0x8, def value: None
  int64_t ____packetsSent;

  /// @brief Field _packetsReceived, offset: 0x18, size: 0x8, def value: None
  int64_t ____packetsReceived;

  /// @brief Field _bytesSent, offset: 0x20, size: 0x8, def value: None
  int64_t ____bytesSent;

  /// @brief Field _bytesReceived, offset: 0x28, size: 0x8, def value: None
  int64_t ____bytesReceived;

  /// @brief Field _packetLoss, offset: 0x30, size: 0x8, def value: None
  int64_t ____packetLoss;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::NetStatistics, 0x38>, "Size mismatch!");

static_assert(offsetof(::LiteNetLib::NetStatistics, ____packetsSent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetStatistics, ____packetsReceived) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetStatistics, ____bytesSent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetStatistics, ____bytesReceived) == 0x28, "Offset mismatch!");

static_assert(offsetof(::LiteNetLib::NetStatistics, ____packetLoss) == 0x30, "Offset mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::NetStatistics);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetStatistics*, "LiteNetLib", "NetStatistics");
