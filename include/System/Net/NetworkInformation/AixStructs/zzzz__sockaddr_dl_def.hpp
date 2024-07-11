#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/AixStructs/sockaddr_dl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(sockaddr_dl)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace System::Net::NetworkInformation::AixStructs {
struct sockaddr_dl;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::AixStructs::sockaddr_dl);
// Type: System.Net.NetworkInformation.AixStructs::sockaddr_dl
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation::AixStructs {
// Is value type: true
// CS Name: ::System.Net.NetworkInformation.AixStructs::sockaddr_dl
struct CORDL_TYPE sockaddr_dl {
public:
  // Declarations
  /// @brief Method Read, addr 0x3050848, size 0x190, virtual false, abstract: false, final false
  inline void Read(::System::IntPtr ptr);

  // Ctor Parameters []
  // @brief default ctor
  constexpr sockaddr_dl();

  // Ctor Parameters [CppParam { name: "sdl_len", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sdl_family", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "sdl_index", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "sdl_type", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sdl_nlen", ty: "uint8_t", modifiers:
  // "", def_value: None }, CppParam { name: "sdl_alen", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sdl_slen", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "sdl_data", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }]
  constexpr sockaddr_dl(uint8_t sdl_len, uint8_t sdl_family, uint16_t sdl_index, uint8_t sdl_type, uint8_t sdl_nlen, uint8_t sdl_alen, uint8_t sdl_slen,
                        ::ArrayW<uint8_t, ::Array<uint8_t>*> sdl_data) noexcept;

  /// @brief Field sdl_len, offset: 0x0, size: 0x1, def value: None
  uint8_t sdl_len;

  /// @brief Field sdl_family, offset: 0x1, size: 0x1, def value: None
  uint8_t sdl_family;

  /// @brief Field sdl_index, offset: 0x2, size: 0x2, def value: None
  uint16_t sdl_index;

  /// @brief Field sdl_type, offset: 0x4, size: 0x1, def value: None
  uint8_t sdl_type;

  /// @brief Field sdl_nlen, offset: 0x5, size: 0x1, def value: None
  uint8_t sdl_nlen;

  /// @brief Field sdl_alen, offset: 0x6, size: 0x1, def value: None
  uint8_t sdl_alen;

  /// @brief Field sdl_slen, offset: 0x7, size: 0x1, def value: None
  uint8_t sdl_slen;

  /// @brief Field sdl_data, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> sdl_data;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::AixStructs::sockaddr_dl, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::AixStructs::sockaddr_dl, sdl_len) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::AixStructs::sockaddr_dl, sdl_family) == 0x1, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::AixStructs::sockaddr_dl, sdl_index) == 0x2, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::AixStructs::sockaddr_dl, sdl_type) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::AixStructs::sockaddr_dl, sdl_nlen) == 0x5, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::AixStructs::sockaddr_dl, sdl_alen) == 0x6, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::AixStructs::sockaddr_dl, sdl_slen) == 0x7, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::AixStructs::sockaddr_dl, sdl_data) == 0x8, "Offset mismatch!");

} // namespace System::Net::NetworkInformation::AixStructs
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixStructs::sockaddr_dl, "System.Net.NetworkInformation.AixStructs", "sockaddr_dl");
