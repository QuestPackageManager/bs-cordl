#pragma once
// IWYU pragma private; include "GlobalNamespace/AuthenticationToken.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AuthenticationToken)
namespace GlobalNamespace {
struct AuthenticationToken_Platform;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
struct AuthenticationToken_Platform;
}
namespace GlobalNamespace {
struct AuthenticationToken;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AuthenticationToken_Platform);
MARK_VAL_T(::GlobalNamespace::AuthenticationToken);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: AuthenticationToken/Platform
struct CORDL_TYPE AuthenticationToken_Platform {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __AuthenticationToken_Platform_Unwrapped
  enum struct __AuthenticationToken_Platform_Unwrapped : uint8_t {
    __E_Test = static_cast<uint8_t>(0x0u),
    __E_OculusRift = static_cast<uint8_t>(0x1u),
    __E_OculusQuest = static_cast<uint8_t>(0x2u),
    __E_Steam = static_cast<uint8_t>(0x3u),
    __E_PS4 = static_cast<uint8_t>(0x4u),
    __E_PS4Dev = static_cast<uint8_t>(0x5u),
    __E_PS4Cert = static_cast<uint8_t>(0x6u),
    __E_PS5 = static_cast<uint8_t>(0x7u),
    __E_PS5Dev = static_cast<uint8_t>(0x8u),
    __E_PS5Cert = static_cast<uint8_t>(0x9u),
    __E_Oculus = static_cast<uint8_t>(0x2u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AuthenticationToken_Platform_Unwrapped() const noexcept {
    return static_cast<__AuthenticationToken_Platform_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthenticationToken_Platform();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr AuthenticationToken_Platform(uint8_t value__) noexcept;

  /// @brief Field Oculus value: U8(2)
  static ::GlobalNamespace::AuthenticationToken_Platform const Oculus;

  /// @brief Field OculusQuest value: U8(2)
  static ::GlobalNamespace::AuthenticationToken_Platform const OculusQuest;

  /// @brief Field OculusRift value: U8(1)
  static ::GlobalNamespace::AuthenticationToken_Platform const OculusRift;

  /// @brief Field PS4 value: U8(4)
  static ::GlobalNamespace::AuthenticationToken_Platform const PS4;

  /// @brief Field PS4Cert value: U8(6)
  static ::GlobalNamespace::AuthenticationToken_Platform const PS4Cert;

  /// @brief Field PS4Dev value: U8(5)
  static ::GlobalNamespace::AuthenticationToken_Platform const PS4Dev;

  /// @brief Field PS5 value: U8(7)
  static ::GlobalNamespace::AuthenticationToken_Platform const PS5;

  /// @brief Field PS5Cert value: U8(9)
  static ::GlobalNamespace::AuthenticationToken_Platform const PS5Cert;

  /// @brief Field PS5Dev value: U8(8)
  static ::GlobalNamespace::AuthenticationToken_Platform const PS5Dev;

  /// @brief Field Steam value: U8(3)
  static ::GlobalNamespace::AuthenticationToken_Platform const Steam;

  /// @brief Field Test value: U8(0)
  static ::GlobalNamespace::AuthenticationToken_Platform const Test;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14689 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AuthenticationToken_Platform, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AuthenticationToken_Platform, 0x1>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies AuthenticationToken::Platform, LiteNetLib.Utils.INetImmutableSerializable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: AuthenticationToken
struct CORDL_TYPE AuthenticationToken {
public:
  // Declarations
  using Platform = ::GlobalNamespace::AuthenticationToken_Platform;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::AuthenticationToken>"
  constexpr operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::AuthenticationToken>*();

  /// @brief Method CreateFromSerializedData, addr 0x22bdcd0, size 0x2c, virtual true, abstract: false, final true
  inline ::GlobalNamespace::AuthenticationToken CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Deserialize, addr 0x22bdcfc, size 0xf0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::AuthenticationToken Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method FromHex, addr 0x22bdbe8, size 0xe8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FromHex(::StringW str);

  /// @brief Method FromUtf8, addr 0x22bdbb8, size 0x30, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FromUtf8(::StringW str);

  /// @brief Method GetHexVal, addr 0x22bde90, size 0xc4, virtual false, abstract: false, final false
  static inline uint8_t GetHexVal(char16_t c);

  /// @brief Method Serialize, addr 0x22bdb24, size 0x94, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method ToHex, addr 0x22bde1c, size 0x74, virtual false, abstract: false, final false
  static inline ::StringW ToHex(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method ToUtf8, addr 0x22bddec, size 0x30, virtual false, abstract: false, final false
  static inline ::StringW ToUtf8(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method .ctor, addr 0x22bdb14, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::AuthenticationToken_Platform platform, ::StringW userId, ::StringW userName, ::StringW sessionToken);

  /// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::AuthenticationToken>"
  constexpr ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::AuthenticationToken>* i___LiteNetLib__Utils__INetImmutableSerializable_1___GlobalNamespace__AuthenticationToken_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthenticationToken();

  // Ctor Parameters [CppParam { name: "platform", ty: "::GlobalNamespace::AuthenticationToken_Platform", modifiers: "", def_value: None }, CppParam { name: "userId", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "userName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "sessionToken", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr AuthenticationToken(::GlobalNamespace::AuthenticationToken_Platform platform, ::StringW userId, ::StringW userName, ::StringW sessionToken) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14690 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field platform, offset: 0x0, size: 0x1, def value: None
  ::GlobalNamespace::AuthenticationToken_Platform platform;

  /// @brief Field userId, offset: 0x8, size: 0x8, def value: None
  ::StringW userId;

  /// @brief Field userName, offset: 0x10, size: 0x8, def value: None
  ::StringW userName;

  /// @brief Field sessionToken, offset: 0x18, size: 0x8, def value: None
  ::StringW sessionToken;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AuthenticationToken, platform) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AuthenticationToken, userId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AuthenticationToken, userName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AuthenticationToken, sessionToken) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AuthenticationToken, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AuthenticationToken_Platform, "", "AuthenticationToken/Platform");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AuthenticationToken, "", "AuthenticationToken");
