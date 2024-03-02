#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Packet)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Oculus::Platform {
class Packet;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Packet);
// Type: Oculus.Platform::Packet
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::Packet*
class CORDL_TYPE Packet : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_SenderID)) uint64_t SenderID;

  __declspec(property(get = get_Size)) uint64_t Size;

  /// @brief Field packetHandle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_packetHandle, put = __cordl_internal_set_packetHandle)) void* packetHandle;

  /// @brief Field size, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_size, put = __cordl_internal_set_size)) uint64_t size;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x27e65b0, size 0x88, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Finalize, addr 0x27e651c, size 0x94, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Oculus::Platform::Packet* New_ctor(void* packetHandle);

  /// @brief Method ReadBytes, addr 0x27e6378, size 0x144, virtual false, abstract: false, final false
  inline uint64_t ReadBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> destination);

  constexpr void* const& __cordl_internal_get_packetHandle() const;

  constexpr void*& __cordl_internal_get_packetHandle();

  constexpr uint64_t const& __cordl_internal_get_size() const;

  constexpr uint64_t& __cordl_internal_get_size();

  constexpr void __cordl_internal_set_packetHandle(void* value);

  constexpr void __cordl_internal_set_size(uint64_t value);

  /// @brief Method .ctor, addr 0x27e62c8, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(void* packetHandle);

  /// @brief Method get_SenderID, addr 0x27e64bc, size 0x58, virtual false, abstract: false, final false
  inline uint64_t get_SenderID();

  /// @brief Method get_Size, addr 0x27e6514, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_Size();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Packet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Packet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Packet(Packet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Packet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Packet(Packet const&) = delete;

  /// @brief Field size, offset: 0x10, size: 0x8, def value: None
  uint64_t ___size;

  /// @brief Field packetHandle, offset: 0x18, size: 0x8, def value: None
  void* ___packetHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Packet, 0x20>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Packet, ___size) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Packet, ___packetHandle) == 0x18, "Offset mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Packet);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Packet*, "Oculus.Platform", "Packet");
