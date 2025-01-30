#pragma once
// IWYU pragma private; include "System/UriComponents.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UriComponents)
// Forward declare root types
namespace System {
struct UriComponents;
}
// Write type traits
MARK_VAL_T(::System::UriComponents);
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.UriComponents
struct CORDL_TYPE UriComponents {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UriComponents_Unwrapped
  enum struct __UriComponents_Unwrapped : int32_t {
    __E_Scheme = static_cast<int32_t>(0x1),
    __E_UserInfo = static_cast<int32_t>(0x2),
    __E_Host = static_cast<int32_t>(0x4),
    __E_Port = static_cast<int32_t>(0x8),
    __E_Path = static_cast<int32_t>(0x10),
    __E_Query = static_cast<int32_t>(0x20),
    __E_Fragment = static_cast<int32_t>(0x40),
    __E_StrongPort = static_cast<int32_t>(0x80),
    __E_NormalizedHost = static_cast<int32_t>(0x100),
    __E_KeepDelimiter = static_cast<int32_t>(0x40000000),
    __E_SerializationInfoString = static_cast<int32_t>(0x80000000),
    __E_AbsoluteUri = static_cast<int32_t>(0x7f),
    __E_HostAndPort = static_cast<int32_t>(0x84),
    __E_StrongAuthority = static_cast<int32_t>(0x86),
    __E_SchemeAndServer = static_cast<int32_t>(0xd),
    __E_HttpRequestUrl = static_cast<int32_t>(0x3d),
    __E_PathAndQuery = static_cast<int32_t>(0x30),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UriComponents_Unwrapped() const noexcept {
    return static_cast<__UriComponents_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UriComponents();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UriComponents(int32_t value__) noexcept;

  /// @brief Field AbsoluteUri value: I32(127)
  static ::System::UriComponents const AbsoluteUri;

  /// @brief Field Fragment value: I32(64)
  static ::System::UriComponents const Fragment;

  /// @brief Field Host value: I32(4)
  static ::System::UriComponents const Host;

  /// @brief Field HostAndPort value: I32(132)
  static ::System::UriComponents const HostAndPort;

  /// @brief Field HttpRequestUrl value: I32(61)
  static ::System::UriComponents const HttpRequestUrl;

  /// @brief Field KeepDelimiter value: I32(1073741824)
  static ::System::UriComponents const KeepDelimiter;

  /// @brief Field NormalizedHost value: I32(256)
  static ::System::UriComponents const NormalizedHost;

  /// @brief Field Path value: I32(16)
  static ::System::UriComponents const Path;

  /// @brief Field PathAndQuery value: I32(48)
  static ::System::UriComponents const PathAndQuery;

  /// @brief Field Port value: I32(8)
  static ::System::UriComponents const Port;

  /// @brief Field Query value: I32(32)
  static ::System::UriComponents const Query;

  /// @brief Field Scheme value: I32(1)
  static ::System::UriComponents const Scheme;

  /// @brief Field SchemeAndServer value: I32(13)
  static ::System::UriComponents const SchemeAndServer;

  /// @brief Field SerializationInfoString value: I32(-2147483648)
  static ::System::UriComponents const SerializationInfoString;

  /// @brief Field StrongAuthority value: I32(134)
  static ::System::UriComponents const StrongAuthority;

  /// @brief Field StrongPort value: I32(128)
  static ::System::UriComponents const StrongPort;

  /// @brief Field UserInfo value: I32(2)
  static ::System::UriComponents const UserInfo;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9196 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::UriComponents, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::UriComponents, 0x4>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::UriComponents, "System", "UriComponents");
