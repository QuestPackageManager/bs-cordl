#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayServerConfiguration.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DiscoveryPolicy_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerControlSettings_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerMode_def.hpp"
#include "GlobalNamespace/zzzz__InvitePolicy_def.hpp"
#include "GlobalNamespace/zzzz__SongSelectionMode_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameplayServerConfiguration)
namespace GlobalNamespace {
struct DiscoveryPolicy;
}
namespace GlobalNamespace {
struct GameplayServerControlSettings;
}
namespace GlobalNamespace {
struct GameplayServerMode;
}
namespace GlobalNamespace {
struct InvitePolicy;
}
namespace GlobalNamespace {
struct SongSelectionMode;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameplayServerConfiguration);
// Dependencies DiscoveryPolicy, GameplayServerControlSettings, GameplayServerMode, InvitePolicy, LiteNetLib.Utils.INetImmutableSerializable`1<T>, SongSelectionMode, System.IEquatable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameplayServerConfiguration
struct CORDL_TYPE GameplayServerConfiguration {
public:
  // Declarations
  /// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayServerConfiguration>"
  constexpr operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayServerConfiguration>*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::GameplayServerConfiguration>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::GameplayServerConfiguration>*();

  /// @brief Method CreateFromSerializedData, addr 0x22cb86c, size 0x34, virtual true, abstract: false, final true
  inline ::GlobalNamespace::GameplayServerConfiguration CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Deserialize, addr 0x22cb8a0, size 0x98, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::GameplayServerConfiguration Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Equals, addr 0x22cb6cc, size 0xc8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x22cb65c, size 0x6c, virtual false, abstract: false, final false
  inline bool Equals(::ByRef<::GlobalNamespace::GameplayServerConfiguration> other);

  /// @brief Method Equals, addr 0x22cb6c8, size 0x4, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::GameplayServerConfiguration other);

  /// @brief Method GetHashCode, addr 0x22cb794, size 0x40, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Serialize, addr 0x22cb7f0, size 0x7c, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method WithMaxPlayerCount, addr 0x22cb938, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayServerConfiguration WithMaxPlayerCount(int32_t maxPlayerCount);

  /// @brief Method .ctor, addr 0x22c87dc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t maxPlayerCount, ::GlobalNamespace::DiscoveryPolicy discoveryPolicy, ::GlobalNamespace::InvitePolicy invitePolicy, ::GlobalNamespace::GameplayServerMode gameplayServerMode,
                    ::GlobalNamespace::SongSelectionMode songSelectionMode, ::GlobalNamespace::GameplayServerControlSettings gameplayServerControlSettings);

  /// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayServerConfiguration>"
  constexpr ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayServerConfiguration>*
  i___LiteNetLib__Utils__INetImmutableSerializable_1___GlobalNamespace__GameplayServerConfiguration_();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::GameplayServerConfiguration>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::GameplayServerConfiguration>* i___System__IEquatable_1___GlobalNamespace__GameplayServerConfiguration_();

  /// @brief Method op_Equality, addr 0x22cb7d4, size 0x4, virtual false, abstract: false, final false
  static inline bool op_Equality(::ByRef<::GlobalNamespace::GameplayServerConfiguration> a, ::ByRef<::GlobalNamespace::GameplayServerConfiguration> b);

  /// @brief Method op_Inequality, addr 0x22cb7d8, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::ByRef<::GlobalNamespace::GameplayServerConfiguration> a, ::ByRef<::GlobalNamespace::GameplayServerConfiguration> b);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayServerConfiguration();

  // Ctor Parameters [CppParam { name: "maxPlayerCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "discoveryPolicy", ty: "::GlobalNamespace::DiscoveryPolicy", modifiers: "",
  // def_value: None }, CppParam { name: "invitePolicy", ty: "::GlobalNamespace::InvitePolicy", modifiers: "", def_value: None }, CppParam { name: "gameplayServerMode", ty:
  // "::GlobalNamespace::GameplayServerMode", modifiers: "", def_value: None }, CppParam { name: "songSelectionMode", ty: "::GlobalNamespace::SongSelectionMode", modifiers: "", def_value: None },
  // CppParam { name: "gameplayServerControlSettings", ty: "::GlobalNamespace::GameplayServerControlSettings", modifiers: "", def_value: None }]
  constexpr GameplayServerConfiguration(int32_t maxPlayerCount, ::GlobalNamespace::DiscoveryPolicy discoveryPolicy, ::GlobalNamespace::InvitePolicy invitePolicy,
                                        ::GlobalNamespace::GameplayServerMode gameplayServerMode, ::GlobalNamespace::SongSelectionMode songSelectionMode,
                                        ::GlobalNamespace::GameplayServerControlSettings gameplayServerControlSettings) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14766 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field maxPlayerCount, offset: 0x0, size: 0x4, def value: None
  int32_t maxPlayerCount;

  /// @brief Field discoveryPolicy, offset: 0x4, size: 0x1, def value: None
  ::GlobalNamespace::DiscoveryPolicy discoveryPolicy;

  /// @brief Field invitePolicy, offset: 0x8, size: 0x4, def value: None
  ::GlobalNamespace::InvitePolicy invitePolicy;

  /// @brief Field gameplayServerMode, offset: 0xc, size: 0x4, def value: None
  ::GlobalNamespace::GameplayServerMode gameplayServerMode;

  /// @brief Field songSelectionMode, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::SongSelectionMode songSelectionMode;

  /// @brief Field gameplayServerControlSettings, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::GameplayServerControlSettings gameplayServerControlSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameplayServerConfiguration, maxPlayerCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayServerConfiguration, discoveryPolicy) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayServerConfiguration, invitePolicy) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayServerConfiguration, gameplayServerMode) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayServerConfiguration, songSelectionMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayServerConfiguration, gameplayServerControlSettings) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayServerConfiguration, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayServerConfiguration, "", "GameplayServerConfiguration");
