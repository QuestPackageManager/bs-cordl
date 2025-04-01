#pragma once
// IWYU pragma private; include "Oculus/Platform/Packet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Packet)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class Packet;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Packet);
// Dependencies System.IDisposable, System.IntPtr, System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.Packet
class CORDL_TYPE Packet : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_SenderID)) uint64_t SenderID;

  __declspec(property(get = get_Size)) uint64_t Size;

  /// @brief Field packetHandle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_packetHandle, put = __cordl_internal_set_packetHandle)) ::System::IntPtr packetHandle;

  /// @brief Field size, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_size, put = __cordl_internal_set_size)) uint64_t size;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x3f7cd28, size 0x88, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Finalize, addr 0x3f7cc94, size 0x94, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Oculus::Platform::Packet* New_ctor(::System::IntPtr packetHandle);

  /// @brief Method ReadBytes, addr 0x3f7caf8, size 0x13c, virtual false, abstract: false, final false
  inline uint64_t ReadBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> destination);

  constexpr ::System::IntPtr const& __cordl_internal_get_packetHandle() const;

  constexpr ::System::IntPtr& __cordl_internal_get_packetHandle();

  constexpr uint64_t const& __cordl_internal_get_size() const;

  constexpr uint64_t& __cordl_internal_get_size();

  constexpr void __cordl_internal_set_packetHandle(::System::IntPtr value);

  constexpr void __cordl_internal_set_size(uint64_t value);

  /// @brief Method .ctor, addr 0x3f7ca78, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr packetHandle);

  /// @brief Method get_SenderID, addr 0x3f7cc34, size 0x58, virtual false, abstract: false, final false
  inline uint64_t get_SenderID();

  /// @brief Method get_Size, addr 0x3f7cc8c, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15432 };

  /// @brief Field size, offset: 0x10, size: 0x8, def value: None
  uint64_t ___size;

  /// @brief Field packetHandle, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr ___packetHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Packet, ___size) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Packet, ___packetHandle) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Packet, 0x20>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Packet);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Packet*, "Oculus.Platform", "Packet");
