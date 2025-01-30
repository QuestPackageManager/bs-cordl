#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSpecificSettingsNetSerializable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorSchemeNetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerSpecificSettingsNetSerializable)
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerSpecificSettingsNetSerializable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerSpecificSettingsNetSerializable);
// Dependencies ColorSchemeNetSerializable, LiteNetLib.Utils.INetSerializable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSpecificSettingsNetSerializable
class CORDL_TYPE PlayerSpecificSettingsNetSerializable : public ::System::Object {
public:
  // Declarations
  /// @brief Field automaticPlayerHeight, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_automaticPlayerHeight, put = __cordl_internal_set_automaticPlayerHeight)) bool automaticPlayerHeight;

  /// @brief Field colorScheme, offset 0x2c, size 0x70
  __declspec(property(get = __cordl_internal_get_colorScheme, put = __cordl_internal_set_colorScheme)) ::GlobalNamespace::ColorSchemeNetSerializable colorScheme;

  /// @brief Field headPosToPlayerHeightOffset, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_headPosToPlayerHeightOffset, put = __cordl_internal_set_headPosToPlayerHeightOffset)) float_t headPosToPlayerHeightOffset;

  /// @brief Field leftHanded, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_leftHanded, put = __cordl_internal_set_leftHanded)) bool leftHanded;

  /// @brief Field playerHeight, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_playerHeight, put = __cordl_internal_set_playerHeight)) float_t playerHeight;

  /// @brief Field userId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_userId, put = __cordl_internal_set_userId)) ::StringW userId;

  /// @brief Field userName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_userName, put = __cordl_internal_set_userName)) ::StringW userName;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0x22e151c, size 0x98, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  static inline ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* New_ctor();

  static inline ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* New_ctor(::StringW userId, ::StringW userName, bool leftHanded, bool automaticPlayerHeight, float_t playerHeight,
                                                                                   float_t headPosToPlayerHeightOffset, ::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor,
                                                                                   ::UnityEngine::Color obstaclesColor, ::UnityEngine::Color environmentColor0, ::UnityEngine::Color environmentColor1,
                                                                                   ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost);

  /// @brief Method Serialize, addr 0x22e1330, size 0x90, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr bool const& __cordl_internal_get_automaticPlayerHeight() const;

  constexpr bool& __cordl_internal_get_automaticPlayerHeight();

  constexpr ::GlobalNamespace::ColorSchemeNetSerializable const& __cordl_internal_get_colorScheme() const;

  constexpr ::GlobalNamespace::ColorSchemeNetSerializable& __cordl_internal_get_colorScheme();

  constexpr float_t const& __cordl_internal_get_headPosToPlayerHeightOffset() const;

  constexpr float_t& __cordl_internal_get_headPosToPlayerHeightOffset();

  constexpr bool const& __cordl_internal_get_leftHanded() const;

  constexpr bool& __cordl_internal_get_leftHanded();

  constexpr float_t const& __cordl_internal_get_playerHeight() const;

  constexpr float_t& __cordl_internal_get_playerHeight();

  constexpr ::StringW const& __cordl_internal_get_userId() const;

  constexpr ::StringW& __cordl_internal_get_userId();

  constexpr ::StringW const& __cordl_internal_get_userName() const;

  constexpr ::StringW& __cordl_internal_get_userName();

  constexpr void __cordl_internal_set_automaticPlayerHeight(bool value);

  constexpr void __cordl_internal_set_colorScheme(::GlobalNamespace::ColorSchemeNetSerializable value);

  constexpr void __cordl_internal_set_headPosToPlayerHeightOffset(float_t value);

  constexpr void __cordl_internal_set_leftHanded(bool value);

  constexpr void __cordl_internal_set_playerHeight(float_t value);

  constexpr void __cordl_internal_set_userId(::StringW value);

  constexpr void __cordl_internal_set_userName(::StringW value);

  /// @brief Method .ctor, addr 0x22e1514, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x22e15b4, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::StringW userId, ::StringW userName, bool leftHanded, bool automaticPlayerHeight, float_t playerHeight, float_t headPosToPlayerHeightOffset, ::UnityEngine::Color saberAColor,
                    ::UnityEngine::Color saberBColor, ::UnityEngine::Color obstaclesColor, ::UnityEngine::Color environmentColor0, ::UnityEngine::Color environmentColor1,
                    ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost);

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSpecificSettingsNetSerializable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSpecificSettingsNetSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSpecificSettingsNetSerializable(PlayerSpecificSettingsNetSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSpecificSettingsNetSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSpecificSettingsNetSerializable(PlayerSpecificSettingsNetSerializable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14935 };

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
static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettingsNetSerializable, ___userId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettingsNetSerializable, ___userName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettingsNetSerializable, ___leftHanded) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettingsNetSerializable, ___automaticPlayerHeight) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettingsNetSerializable, ___playerHeight) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettingsNetSerializable, ___headPosToPlayerHeightOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettingsNetSerializable, ___colorScheme) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSpecificSettingsNetSerializable, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerSpecificSettingsNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSpecificSettingsNetSerializable*, "", "PlayerSpecificSettingsNetSerializable");
