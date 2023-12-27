#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorSchemeNetSerializable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerSpecificSettingsNetSerializable)
namespace UnityEngine {
struct Color;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerSpecificSettingsNetSerializable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerSpecificSettingsNetSerializable);
// Type: ::PlayerSpecificSettingsNetSerializable
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 156, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12690)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12927))
// CS Name: ::PlayerSpecificSettingsNetSerializable*
class CORDL_TYPE PlayerSpecificSettingsNetSerializable : public ::System::Object {
public:
  // Declarations
  /// @brief Field userId, offset 0x10, size 0x8
  __declspec(property(get = __get_userId, put = __set_userId))::StringW userId;

  /// @brief Field userName, offset 0x18, size 0x8
  __declspec(property(get = __get_userName, put = __set_userName))::StringW userName;

  /// @brief Field leftHanded, offset 0x20, size 0x1
  __declspec(property(get = __get_leftHanded, put = __set_leftHanded)) bool leftHanded;

  /// @brief Field automaticPlayerHeight, offset 0x21, size 0x1
  __declspec(property(get = __get_automaticPlayerHeight, put = __set_automaticPlayerHeight)) bool automaticPlayerHeight;

  /// @brief Field playerHeight, offset 0x24, size 0x4
  __declspec(property(get = __get_playerHeight, put = __set_playerHeight)) float_t playerHeight;

  /// @brief Field headPosToPlayerHeightOffset, offset 0x28, size 0x4
  __declspec(property(get = __get_headPosToPlayerHeightOffset, put = __set_headPosToPlayerHeightOffset)) float_t headPosToPlayerHeightOffset;

  /// @brief Field colorScheme, offset 0x2c, size 0x70
  __declspec(property(get = __get_colorScheme, put = __set_colorScheme))::GlobalNamespace::ColorSchemeNetSerializable colorScheme;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  constexpr ::StringW& __get_userId();

  constexpr ::StringW const& __get_userId() const;

  constexpr void __set_userId(::StringW value);

  constexpr ::StringW& __get_userName();

  constexpr ::StringW const& __get_userName() const;

  constexpr void __set_userName(::StringW value);

  constexpr bool& __get_leftHanded();

  constexpr bool const& __get_leftHanded() const;

  constexpr void __set_leftHanded(bool value);

  constexpr bool& __get_automaticPlayerHeight();

  constexpr bool const& __get_automaticPlayerHeight() const;

  constexpr void __set_automaticPlayerHeight(bool value);

  constexpr float_t& __get_playerHeight();

  constexpr float_t const& __get_playerHeight() const;

  constexpr void __set_playerHeight(float_t value);

  constexpr float_t& __get_headPosToPlayerHeightOffset();

  constexpr float_t const& __get_headPosToPlayerHeightOffset() const;

  constexpr void __set_headPosToPlayerHeightOffset(float_t value);

  constexpr ::GlobalNamespace::ColorSchemeNetSerializable& __get_colorScheme();

  constexpr ::GlobalNamespace::ColorSchemeNetSerializable const& __get_colorScheme() const;

  constexpr void __set_colorScheme(::GlobalNamespace::ColorSchemeNetSerializable value);

  static inline ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* New_ctor();

  /// @brief Method .ctor addr 0xe52590 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* New_ctor(::StringW userId, ::StringW userName, bool leftHanded, bool automaticPlayerHeight, float_t playerHeight,
                                                                                   float_t headPosToPlayerHeightOffset, ::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor,
                                                                                   ::UnityEngine::Color obstaclesColor, ::UnityEngine::Color environmentColor0, ::UnityEngine::Color environmentColor1,
                                                                                   ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost);

  /// @brief Method .ctor addr 0xe52630 size 0x140 virtual false final false
  inline void _ctor(::StringW userId, ::StringW userName, bool leftHanded, bool automaticPlayerHeight, float_t playerHeight, float_t headPosToPlayerHeightOffset, ::UnityEngine::Color saberAColor,
                    ::UnityEngine::Color saberBColor, ::UnityEngine::Color obstaclesColor, ::UnityEngine::Color environmentColor0, ::UnityEngine::Color environmentColor1,
                    ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost);

  /// @brief Method Serialize addr 0xe523a8 size 0x90 virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xe52598 size 0x98 virtual true final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSpecificSettingsNetSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSpecificSettingsNetSerializable(PlayerSpecificSettingsNetSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSpecificSettingsNetSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSpecificSettingsNetSerializable(PlayerSpecificSettingsNetSerializable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSpecificSettingsNetSerializable();

public:
  /// @brief Field userId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___userId;

  /// @brief Field userName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___userName;

  /// @brief Field leftHanded, offset: 0x20, size: 0x1, def value: None
  bool ___leftHanded;

  /// @brief Field automaticPlayerHeight, offset: 0x21, size: 0x1, def value: None
  bool ___automaticPlayerHeight;

  /// @brief Field playerHeight, offset: 0x24, size: 0x4, def value: None
  float_t ___playerHeight;

  /// @brief Field headPosToPlayerHeightOffset, offset: 0x28, size: 0x4, def value: None
  float_t ___headPosToPlayerHeightOffset;

  /// @brief Field colorScheme, offset: 0x2c, size: 0x70, def value: None
  ::GlobalNamespace::ColorSchemeNetSerializable ___colorScheme;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSpecificSettingsNetSerializable, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerSpecificSettingsNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSpecificSettingsNetSerializable*, "", "PlayerSpecificSettingsNetSerializable");
