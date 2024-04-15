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
// CS Name: ::ENet::Packet
struct CORDL_TYPE Packet {
public:
  // Declarations
  __declspec(property(get = get_Data)) void* Data;

  __declspec(property(get = get_HasReferences)) bool HasReferences;

  __declspec(property(get = get_IsSet)) bool IsSet;

  __declspec(property(get = get_Length)) int32_t Length;

  __declspec(property(get = get_NativeData, put = set_NativeData)) void* NativeData;

  __declspec(property(get = get_UserData, put = set_UserData)) void* UserData;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method CopyTo, addr 0x24dded8, size 0x100, virtual false, abstract: false, final false
  inline void CopyTo(::ArrayW<uint8_t, ::Array<uint8_t>*> destination, int32_t startPos);

  /// @brief Method Create, addr 0x24dd768, size 0x64, virtual false, abstract: false, final false
  inline void Create(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method Create, addr 0x24dd8ac, size 0x1c, virtual false, abstract: false, final false
  inline void Create(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ENet::PacketFlags flags);

  /// @brief Method Create, addr 0x24dd7cc, size 0x8, virtual false, abstract: false, final false
  inline void Create(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length);

  /// @brief Method Create, addr 0x24dd7d4, size 0xd8, virtual false, abstract: false, final false
  inline void Create(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length, ::ENet::PacketFlags flags);

  /// @brief Method Create, addr 0x24ddb18, size 0x120, virtual false, abstract: false, final false
  inline void Create(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length, ::ENet::PacketFlags flags);

  /// @brief Method Create, addr 0x24dd964, size 0x120, virtual false, abstract: false, final false
  inline void Create(void* data, int32_t length, ::ENet::PacketFlags flags);

  /// @brief Method Create, addr 0x24ddcdc, size 0x160, virtual false, abstract: false, final false
  inline void Create(void* data, int32_t offset, int32_t length, ::ENet::PacketFlags flags);

  /// @brief Method Dispose, addr 0x24dd138, size 0x74, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method SetFreeCallback, addr 0x24dd6d8, size 0x90, virtual false, abstract: false, final false
  inline void SetFreeCallback(::ENet::PacketFreeCallback* callback);

  /// @brief Method SetFreeCallback, addr 0x24dd62c, size 0x28, virtual false, abstract: false, final false
  inline void SetFreeCallback(void* callback);

  /// @brief Method ThrowIfNotCreated, addr 0x24dd294, size 0xa8, virtual false, abstract: false, final false
  inline void ThrowIfNotCreated();

  /// @brief Method .ctor, addr 0x24dd130, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(void* packet);

  /// @brief Method get_Data, addr 0x24dd27c, size 0x18, virtual false, abstract: false, final false
  inline void* get_Data();

  /// @brief Method get_HasReferences, addr 0x24dd58c, size 0x24, virtual false, abstract: false, final false
  inline bool get_HasReferences();

  /// @brief Method get_IsSet, addr 0x24dd228, size 0x54, virtual false, abstract: false, final false
  inline bool get_IsSet();

  /// @brief Method get_Length, addr 0x24dd4f8, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Method get_NativeData, addr 0x24dd120, size 0x8, virtual false, abstract: false, final false
  inline void* get_NativeData();

  /// @brief Method get_UserData, addr 0x24dd3b8, size 0x18, virtual false, abstract: false, final false
  inline void* get_UserData();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Method set_NativeData, addr 0x24dd128, size 0x8, virtual false, abstract: false, final false
  inline void set_NativeData(void* value);

  /// @brief Method set_UserData, addr 0x24dd44c, size 0x28, virtual false, abstract: false, final false
  inline void set_UserData(void* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Packet();

  // Ctor Parameters [CppParam { name: "nativePacket", ty: "void*", modifiers: "", def_value: None }]
  constexpr Packet(void* nativePacket) noexcept;

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
