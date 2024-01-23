#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Forward declare root types
namespace ENet {
struct Packet;
}
// Write type traits
MARK_VAL_T(::ENet::Packet);
// Type: ENet::Packet
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ENet {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2603))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15232))
// CS Name: ::ENet::Packet
struct CORDL_TYPE Packet {
public:
  // Declarations
  __declspec(property(get = get_NativeData, put = set_NativeData)) void* NativeData;

  __declspec(property(get = get_IsSet)) bool IsSet;

  __declspec(property(get = get_Data)) void* Data;

  __declspec(property(get = get_UserData, put = set_UserData)) void* UserData;

  __declspec(property(get = get_Length)) int32_t Length;

  __declspec(property(get = get_HasReferences)) bool HasReferences;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Method get_NativeData, addr 0x21efeb0, size 0x8, virtual false, abstract: false, final false
  inline void* get_NativeData();

  /// @brief Method set_NativeData, addr 0x21efeb8, size 0x8, virtual false, abstract: false, final false
  inline void set_NativeData(void* value);

  /// @brief Method .ctor, addr 0x21efec0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(void* packet);

  /// @brief Method Dispose, addr 0x21efec8, size 0x74, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method get_IsSet, addr 0x21effb8, size 0x54, virtual false, abstract: false, final false
  inline bool get_IsSet();

  /// @brief Method get_Data, addr 0x21f000c, size 0x18, virtual false, abstract: false, final false
  inline void* get_Data();

  /// @brief Method get_UserData, addr 0x21f0148, size 0x18, virtual false, abstract: false, final false
  inline void* get_UserData();

  /// @brief Method set_UserData, addr 0x21f01dc, size 0x28, virtual false, abstract: false, final false
  inline void set_UserData(void* value);

  /// @brief Method get_Length, addr 0x21f0288, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Method get_HasReferences, addr 0x21f031c, size 0x24, virtual false, abstract: false, final false
  inline bool get_HasReferences();

  /// @brief Method ThrowIfNotCreated, addr 0x21f0024, size 0xa8, virtual false, abstract: false, final false
  inline void ThrowIfNotCreated();

  /// @brief Method SetFreeCallback, addr 0x21f03bc, size 0x28, virtual false, abstract: false, final false
  inline void SetFreeCallback(void* callback);

  /// @brief Method SetFreeCallback, addr 0x21f0468, size 0x90, virtual false, abstract: false, final false
  inline void SetFreeCallback(::ENet::PacketFreeCallback* callback);

  /// @brief Method Create, addr 0x21f04f8, size 0x64, virtual false, abstract: false, final false
  inline void Create(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method Create, addr 0x21f055c, size 0x8, virtual false, abstract: false, final false
  inline void Create(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length);

  /// @brief Method Create, addr 0x21f063c, size 0x1c, virtual false, abstract: false, final false
  inline void Create(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ENet::PacketFlags flags);

  /// @brief Method Create, addr 0x21f0564, size 0xd8, virtual false, abstract: false, final false
  inline void Create(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length, ::ENet::PacketFlags flags);

  /// @brief Method Create, addr 0x21f06f4, size 0x120, virtual false, abstract: false, final false
  inline void Create(void* data, int32_t length, ::ENet::PacketFlags flags);

  /// @brief Method Create, addr 0x21f08a8, size 0x120, virtual false, abstract: false, final false
  inline void Create(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length, ::ENet::PacketFlags flags);

  /// @brief Method Create, addr 0x21f0a6c, size 0x160, virtual false, abstract: false, final false
  inline void Create(void* data, int32_t offset, int32_t length, ::ENet::PacketFlags flags);

  /// @brief Method CopyTo, addr 0x21f0c68, size 0x100, virtual false, abstract: false, final false
  inline void CopyTo(::ArrayW<uint8_t, ::Array<uint8_t>*> destination, int32_t startPos);

  // Ctor Parameters [CppParam { name: "nativePacket", ty: "void*", modifiers: "", def_value: None }]
  constexpr Packet(void* nativePacket) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Packet();

  /// @brief Field nativePacket, offset: 0x0, size: 0x8, def value: None
  void* nativePacket;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::Packet, 0x8>, "Size mismatch!");

static_assert(offsetof(::ENet::Packet, nativePacket) == 0x0, "Offset mismatch!");

} // namespace ENet
DEFINE_IL2CPP_ARG_TYPE(::ENet::Packet, "ENet", "Packet");
