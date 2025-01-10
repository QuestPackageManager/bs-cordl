#pragma once
// IWYU pragma private; include "ENet/Library.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Library)
namespace ENet {
class Callbacks;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace ENet {
class Library;
}
// Write type traits
MARK_REF_PTR_T(::ENet::Library);
// Dependencies System.Object
namespace ENet {
// Is value type: false
// CS Name: ENet.Library
class CORDL_TYPE Library : public ::System::Object {
public:
  // Declarations
  /// @brief Method CRC64, addr 0x3aa7cdc, size 0x4, virtual false, abstract: false, final false
  static inline uint64_t CRC64(::System::IntPtr buffers, int32_t bufferCount);

  /// @brief Method Deinitialize, addr 0x3aa7c74, size 0x4, virtual false, abstract: false, final false
  static inline void Deinitialize();

  /// @brief Method InitOpenSSL, addr 0x3aa7830, size 0x24, virtual false, abstract: false, final false
  static inline void InitOpenSSL();

  /// @brief Method Initialize, addr 0x3aa7958, size 0x90, virtual false, abstract: false, final false
  static inline bool Initialize();

  /// @brief Method Initialize, addr 0x3aa7ab8, size 0xf8, virtual false, abstract: false, final false
  static inline bool Initialize(::ENet::Callbacks* callbacks);

  /// @brief Method get_Time, addr 0x3aa77c4, size 0x4, virtual false, abstract: false, final false
  static inline uint32_t get_Time();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Library();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Library", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Library(Library&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Library", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Library(Library const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17748 };

  /// @brief Field maxChannelCount offset 0xffffffff size 0x4
  static constexpr uint32_t maxChannelCount{ static_cast<uint32_t>(0xffu) };

  /// @brief Field maxPacketSize offset 0xffffffff size 0x4
  static constexpr uint32_t maxPacketSize{ static_cast<uint32_t>(0x2000000u) };

  /// @brief Field maxPeers offset 0xffffffff size 0x4
  static constexpr uint32_t maxPeers{ static_cast<uint32_t>(0xfffu) };

  /// @brief Field throttleAcceleration offset 0xffffffff size 0x4
  static constexpr uint32_t throttleAcceleration{ static_cast<uint32_t>(0x2u) };

  /// @brief Field throttleDeceleration offset 0xffffffff size 0x4
  static constexpr uint32_t throttleDeceleration{ static_cast<uint32_t>(0x2u) };

  /// @brief Field throttleInterval offset 0xffffffff size 0x4
  static constexpr uint32_t throttleInterval{ static_cast<uint32_t>(0x1388u) };

  /// @brief Field throttleScale offset 0xffffffff size 0x4
  static constexpr uint32_t throttleScale{ static_cast<uint32_t>(0x20u) };

  /// @brief Field throttleThreshold offset 0xffffffff size 0x4
  static constexpr uint32_t throttleThreshold{ static_cast<uint32_t>(0x28u) };

  /// @brief Field timeoutLimit offset 0xffffffff size 0x4
  static constexpr uint32_t timeoutLimit{ static_cast<uint32_t>(0x20u) };

  /// @brief Field timeoutMaximum offset 0xffffffff size 0x4
  static constexpr uint32_t timeoutMaximum{ static_cast<uint32_t>(0x7530u) };

  /// @brief Field timeoutMinimum offset 0xffffffff size 0x4
  static constexpr uint32_t timeoutMinimum{ static_cast<uint32_t>(0x1388u) };

  /// @brief Field version offset 0xffffffff size 0x4
  static constexpr uint32_t version{ static_cast<uint32_t>(0x20407u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::Library, 0x10>, "Size mismatch!");

} // namespace ENet
NEED_NO_BOX(::ENet::Library);
DEFINE_IL2CPP_ARG_TYPE(::ENet::Library*, "ENet", "Library");
