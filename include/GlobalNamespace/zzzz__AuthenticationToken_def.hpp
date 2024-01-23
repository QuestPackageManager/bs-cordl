#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AuthenticationToken)
namespace GlobalNamespace {
struct __AuthenticationToken__Platform;
}
namespace LiteNetLib::Utils {
template <typename T> class INetImmutableSerializable_1;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
struct __AuthenticationToken__Platform;
}
namespace GlobalNamespace {
struct AuthenticationToken;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__AuthenticationToken__Platform);
MARK_VAL_T(::GlobalNamespace::AuthenticationToken);
// Type: ::Platform
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12681))
// CS Name: ::AuthenticationToken::Platform
struct CORDL_TYPE __AuthenticationToken__Platform {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct ____AuthenticationToken__Platform_Unwrapped
  enum struct ____AuthenticationToken__Platform_Unwrapped : uint8_t {
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
  constexpr operator ____AuthenticationToken__Platform_Unwrapped() const noexcept {
    return static_cast<____AuthenticationToken__Platform_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __AuthenticationToken__Platform(uint8_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AuthenticationToken__Platform();

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field Test value: static_cast<uint8_t>(0x0u)
  static ::GlobalNamespace::__AuthenticationToken__Platform const Test;

  /// @brief Field OculusRift value: static_cast<uint8_t>(0x1u)
  static ::GlobalNamespace::__AuthenticationToken__Platform const OculusRift;

  /// @brief Field OculusQuest value: static_cast<uint8_t>(0x2u)
  static ::GlobalNamespace::__AuthenticationToken__Platform const OculusQuest;

  /// @brief Field Steam value: static_cast<uint8_t>(0x3u)
  static ::GlobalNamespace::__AuthenticationToken__Platform const Steam;

  /// @brief Field PS4 value: static_cast<uint8_t>(0x4u)
  static ::GlobalNamespace::__AuthenticationToken__Platform const PS4;

  /// @brief Field PS4Dev value: static_cast<uint8_t>(0x5u)
  static ::GlobalNamespace::__AuthenticationToken__Platform const PS4Dev;

  /// @brief Field PS4Cert value: static_cast<uint8_t>(0x6u)
  static ::GlobalNamespace::__AuthenticationToken__Platform const PS4Cert;

  /// @brief Field PS5 value: static_cast<uint8_t>(0x7u)
  static ::GlobalNamespace::__AuthenticationToken__Platform const PS5;

  /// @brief Field PS5Dev value: static_cast<uint8_t>(0x8u)
  static ::GlobalNamespace::__AuthenticationToken__Platform const PS5Dev;

  /// @brief Field PS5Cert value: static_cast<uint8_t>(0x9u)
  static ::GlobalNamespace::__AuthenticationToken__Platform const PS5Cert;

  /// @brief Field Oculus value: static_cast<uint8_t>(0x2u)
  static ::GlobalNamespace::__AuthenticationToken__Platform const Oculus;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AuthenticationToken__Platform, 0x1>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AuthenticationToken__Platform, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AuthenticationToken
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12681))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12682))
// CS Name: ::AuthenticationToken
struct CORDL_TYPE AuthenticationToken {
public:
  // Declarations
  using Platform = ::GlobalNamespace::__AuthenticationToken__Platform;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::AuthenticationToken>"
  constexpr operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::AuthenticationToken>*();

  /// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::AuthenticationToken>"
  constexpr ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::AuthenticationToken>* i___LiteNetLib__Utils__INetImmutableSerializable_1___GlobalNamespace__AuthenticationToken_();

  /// @brief Method .ctor, addr 0xe293f4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__AuthenticationToken__Platform platform, ::StringW userId, ::StringW userName, ::StringW sessionToken);

  /// @brief Method Serialize, addr 0xe29404, size 0x94, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method CreateFromSerializedData, addr 0xe295b0, size 0x2c, virtual true, abstract: false, final true
  inline ::GlobalNamespace::AuthenticationToken CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Deserialize, addr 0xe295dc, size 0xf0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::AuthenticationToken Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method FromHex, addr 0xe294c8, size 0xe8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FromHex(::StringW str);

  /// @brief Method GetHexVal, addr 0xe29794, size 0xcc, virtual false, abstract: false, final false
  static inline uint8_t GetHexVal(char16_t c);

  /// @brief Method FromUtf8, addr 0xe29498, size 0x30, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FromUtf8(::StringW str);

  /// @brief Method ToHex, addr 0xe296fc, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW ToHex(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method ToUtf8, addr 0xe296cc, size 0x30, virtual false, abstract: false, final false
  static inline ::StringW ToUtf8(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  // Ctor Parameters [CppParam { name: "platform", ty: "::GlobalNamespace::__AuthenticationToken__Platform", modifiers: "", def_value: None }, CppParam { name: "userId", ty: "::StringW", modifiers:
  // "", def_value: None }, CppParam { name: "userName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "sessionToken", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr AuthenticationToken(::GlobalNamespace::__AuthenticationToken__Platform platform, ::StringW userId, ::StringW userName, ::StringW sessionToken) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthenticationToken();

  /// @brief Field platform, offset: 0x0, size: 0x1, def value: None
  ::GlobalNamespace::__AuthenticationToken__Platform platform;

  /// @brief Field userId, offset: 0x8, size: 0x8, def value: None
  ::StringW userId;

  /// @brief Field userName, offset: 0x10, size: 0x8, def value: None
  ::StringW userName;

  /// @brief Field sessionToken, offset: 0x18, size: 0x8, def value: None
  ::StringW sessionToken;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AuthenticationToken, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AuthenticationToken, platform) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AuthenticationToken, userId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AuthenticationToken, userName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AuthenticationToken, sessionToken) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AuthenticationToken__Platform, "", "AuthenticationToken/Platform");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AuthenticationToken, "", "AuthenticationToken");
