#pragma once
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
// Type: System::UriComponents
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8878))
// CS Name: ::System::UriComponents
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UriComponents(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr UriComponents();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Scheme value: static_cast<int32_t>(0x1)
  static ::System::UriComponents const Scheme;

  /// @brief Field UserInfo value: static_cast<int32_t>(0x2)
  static ::System::UriComponents const UserInfo;

  /// @brief Field Host value: static_cast<int32_t>(0x4)
  static ::System::UriComponents const Host;

  /// @brief Field Port value: static_cast<int32_t>(0x8)
  static ::System::UriComponents const Port;

  /// @brief Field Path value: static_cast<int32_t>(0x10)
  static ::System::UriComponents const Path;

  /// @brief Field Query value: static_cast<int32_t>(0x20)
  static ::System::UriComponents const Query;

  /// @brief Field Fragment value: static_cast<int32_t>(0x40)
  static ::System::UriComponents const Fragment;

  /// @brief Field StrongPort value: static_cast<int32_t>(0x80)
  static ::System::UriComponents const StrongPort;

  /// @brief Field NormalizedHost value: static_cast<int32_t>(0x100)
  static ::System::UriComponents const NormalizedHost;

  /// @brief Field KeepDelimiter value: static_cast<int32_t>(0x40000000)
  static ::System::UriComponents const KeepDelimiter;

  /// @brief Field SerializationInfoString value: static_cast<int32_t>(0x80000000)
  static ::System::UriComponents const SerializationInfoString;

  /// @brief Field AbsoluteUri value: static_cast<int32_t>(0x7f)
  static ::System::UriComponents const AbsoluteUri;

  /// @brief Field HostAndPort value: static_cast<int32_t>(0x84)
  static ::System::UriComponents const HostAndPort;

  /// @brief Field StrongAuthority value: static_cast<int32_t>(0x86)
  static ::System::UriComponents const StrongAuthority;

  /// @brief Field SchemeAndServer value: static_cast<int32_t>(0xd)
  static ::System::UriComponents const SchemeAndServer;

  /// @brief Field HttpRequestUrl value: static_cast<int32_t>(0x3d)
  static ::System::UriComponents const HttpRequestUrl;

  /// @brief Field PathAndQuery value: static_cast<int32_t>(0x30)
  static ::System::UriComponents const PathAndQuery;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::UriComponents, 0x4>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::UriComponents, "System", "UriComponents");
