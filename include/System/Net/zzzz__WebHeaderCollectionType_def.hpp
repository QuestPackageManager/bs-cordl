#pragma once
// IWYU pragma private; include "System/Net/WebHeaderCollectionType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebHeaderCollectionType)
// Forward declare root types
namespace System::Net {
struct WebHeaderCollectionType;
}
// Write type traits
MARK_VAL_T(::System::Net::WebHeaderCollectionType);
// Dependencies
namespace System::Net {
// Is value type: true
// CS Name: System.Net.WebHeaderCollectionType
struct CORDL_TYPE WebHeaderCollectionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint16_t;

  /// @brief Nested struct __WebHeaderCollectionType_Unwrapped
  enum struct __WebHeaderCollectionType_Unwrapped : uint16_t {
    __E_Unknown = static_cast<uint16_t>(0x0u),
    __E_WebRequest = static_cast<uint16_t>(0x1u),
    __E_WebResponse = static_cast<uint16_t>(0x2u),
    __E_HttpWebRequest = static_cast<uint16_t>(0x3u),
    __E_HttpWebResponse = static_cast<uint16_t>(0x4u),
    __E_HttpListenerRequest = static_cast<uint16_t>(0x5u),
    __E_HttpListenerResponse = static_cast<uint16_t>(0x6u),
    __E_FtpWebRequest = static_cast<uint16_t>(0x7u),
    __E_FtpWebResponse = static_cast<uint16_t>(0x8u),
    __E_FileWebRequest = static_cast<uint16_t>(0x9u),
    __E_FileWebResponse = static_cast<uint16_t>(0xau),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __WebHeaderCollectionType_Unwrapped() const noexcept {
    return static_cast<__WebHeaderCollectionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint16_t() const noexcept {
    return static_cast<uint16_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebHeaderCollectionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr WebHeaderCollectionType(uint16_t value__) noexcept;

  /// @brief Field FileWebRequest value: U16(9)
  static ::System::Net::WebHeaderCollectionType const FileWebRequest;

  /// @brief Field FileWebResponse value: U16(10)
  static ::System::Net::WebHeaderCollectionType const FileWebResponse;

  /// @brief Field FtpWebRequest value: U16(7)
  static ::System::Net::WebHeaderCollectionType const FtpWebRequest;

  /// @brief Field FtpWebResponse value: U16(8)
  static ::System::Net::WebHeaderCollectionType const FtpWebResponse;

  /// @brief Field HttpListenerRequest value: U16(5)
  static ::System::Net::WebHeaderCollectionType const HttpListenerRequest;

  /// @brief Field HttpListenerResponse value: U16(6)
  static ::System::Net::WebHeaderCollectionType const HttpListenerResponse;

  /// @brief Field HttpWebRequest value: U16(3)
  static ::System::Net::WebHeaderCollectionType const HttpWebRequest;

  /// @brief Field HttpWebResponse value: U16(4)
  static ::System::Net::WebHeaderCollectionType const HttpWebResponse;

  /// @brief Field Unknown value: U16(0)
  static ::System::Net::WebHeaderCollectionType const Unknown;

  /// @brief Field WebRequest value: U16(1)
  static ::System::Net::WebHeaderCollectionType const WebRequest;

  /// @brief Field WebResponse value: U16(2)
  static ::System::Net::WebHeaderCollectionType const WebResponse;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9609 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field value__, offset: 0x0, size: 0x2, def value: None
  uint16_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebHeaderCollectionType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::WebHeaderCollectionType, 0x2>, "Size mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebHeaderCollectionType, "System.Net", "WebHeaderCollectionType");
