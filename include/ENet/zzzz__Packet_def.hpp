#pragma once
// IWYU pragma private; include "ENet/Packet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Packet)
namespace ENet {
struct PacketFlags;
}
namespace ENet {
class PacketFreeCallback;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace ENet {
struct Packet;
}
// Write type traits
MARK_VAL_T(::ENet::Packet);
// Dependencies System.IntPtr
namespace ENet {
// Is value type: true
// CS Name: ENet.Packet
struct CORDL_TYPE Packet {
public:
  // Declarations
  __declspec(property(get = get_Data)) ::System::IntPtr Data;

  __declspec(property(get = get_HasReferences)) bool HasReferences;

  __declspec(property(get = get_IsSet)) bool IsSet;

  __declspec(property(get = get_Length)) int32_t Length;

  __declspec(property(get = get_NativeData, put = set_NativeData)) ::System::IntPtr NativeData;

  __declspec(property(get = get_UserData, put = set_UserData)) ::System::IntPtr UserData;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method CopyTo, addr 0x56de384, size 0x100, virtual false, abstract: false, final false
  inline void CopyTo(::ArrayW<uint8_t, ::Array<uint8_t>*> destination, int32_t startPos);

  /// @brief Method Create, addr 0x56ddd80, size 0x5c, virtual false, abstract: false, final false
  inline void Create(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method Create, addr 0x56dde9c, size 0x18, virtual false, abstract: false, final false
  inline void Create(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ENet::PacketFlags flags);

  /// @brief Method Create, addr 0x56ddddc, size 0x8, virtual false, abstract: false, final false
  inline void Create(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length);

  /// @brief Method Create, addr 0x56ddde4, size 0xb8, virtual false, abstract: false, final false
  inline void Create(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length, ::ENet::PacketFlags flags);

  /// @brief Method Create, addr 0x56de090, size 0xe0, virtual false, abstract: false, final false
  inline void Create(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length, ::ENet::PacketFlags flags);

  /// @brief Method Create, addr 0x56ddf50, size 0xac, virtual false, abstract: false, final false
  inline void Create(::System::IntPtr data, int32_t length, ::ENet::PacketFlags flags);

  /// @brief Method Create, addr 0x56de214, size 0xd4, virtual false, abstract: false, final false
  inline void Create(::System::IntPtr data, int32_t offset, int32_t length, ::ENet::PacketFlags flags);

  /// @brief Method Dispose, addr 0x56dd830, size 0x20, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method SetFreeCallback, addr 0x56ddce8, size 0x98, virtual false, abstract: false, final false
  inline void SetFreeCallback(::ENet::PacketFreeCallback* callback);

  /// @brief Method SetFreeCallback, addr 0x56ddc3c, size 0x28, virtual false, abstract: false, final false
  inline void SetFreeCallback(::System::IntPtr callback);

  /// @brief Method ThrowIfNotCreated, addr 0x56dd8f4, size 0x58, virtual false, abstract: false, final false
  inline void ThrowIfNotCreated();

  /// @brief Method .ctor, addr 0x56dd828, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr packet);

  /// @brief Method get_Data, addr 0x56dd8dc, size 0x18, virtual false, abstract: false, final false
  inline ::System::IntPtr get_Data();

  /// @brief Method get_HasReferences, addr 0x56ddb9c, size 0x24, virtual false, abstract: false, final false
  inline bool get_HasReferences();

  /// @brief Method get_IsSet, addr 0x56dd8cc, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsSet();

  /// @brief Method get_Length, addr 0x56ddb08, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Method get_NativeData, addr 0x56dd818, size 0x8, virtual false, abstract: false, final false
  inline ::System::IntPtr get_NativeData();

  /// @brief Method get_UserData, addr 0x56dd9c8, size 0x18, virtual false, abstract: false, final false
  inline ::System::IntPtr get_UserData();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Method set_NativeData, addr 0x56dd820, size 0x8, virtual false, abstract: false, final false
  inline void set_NativeData(::System::IntPtr value);

  /// @brief Method set_UserData, addr 0x56dda5c, size 0x28, virtual false, abstract: false, final false
  inline void set_UserData(::System::IntPtr value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Packet();

  // Ctor Parameters [CppParam { name: "nativePacket", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr Packet(::System::IntPtr nativePacket) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21539 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field nativePacket, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr nativePacket;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::ENet::Packet, nativePacket) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::ENet::Packet, 0x8>, "Size mismatch!");

} // namespace ENet
DEFINE_IL2CPP_ARG_TYPE(::ENet::Packet, "ENet", "Packet");
