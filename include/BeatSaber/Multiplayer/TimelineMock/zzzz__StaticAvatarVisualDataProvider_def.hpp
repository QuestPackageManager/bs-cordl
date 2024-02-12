#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StaticAvatarVisualDataProvider)
namespace BeatSaber::AvatarCore {
class IAvatarVisualDataProvider;
}
namespace GlobalNamespace {
struct MultiplayerAvatarsData;
}
// Forward declare root types
namespace BeatSaber::Multiplayer::TimelineMock {
class StaticAvatarVisualDataProvider;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider);
// Type: BeatSaber.Multiplayer.TimelineMock::StaticAvatarVisualDataProvider
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::Multiplayer::TimelineMock {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14894))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15244))
// CS Name: ::BeatSaber.Multiplayer.TimelineMock::StaticAvatarVisualDataProvider*
class CORDL_TYPE StaticAvatarVisualDataProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field _avatarsData, offset 0x10, size 0x18
  __declspec(property(get = __cordl_internal_get__avatarsData, put = __cordl_internal_set__avatarsData))::GlobalNamespace::MultiplayerAvatarsData _avatarsData;

  __declspec(property(get = get_avatarsData))::GlobalNamespace::MultiplayerAvatarsData avatarsData;

  /// @brief Convert operator to "::BeatSaber::AvatarCore::IAvatarVisualDataProvider"
  constexpr operator ::BeatSaber::AvatarCore::IAvatarVisualDataProvider*() noexcept;

  /// @brief Convert to "::BeatSaber::AvatarCore::IAvatarVisualDataProvider"
  constexpr ::BeatSaber::AvatarCore::IAvatarVisualDataProvider* i___BeatSaber__AvatarCore__IAvatarVisualDataProvider() noexcept;

  constexpr ::GlobalNamespace::MultiplayerAvatarsData& __cordl_internal_get__avatarsData();

  constexpr ::GlobalNamespace::MultiplayerAvatarsData const& __cordl_internal_get__avatarsData() const;

  constexpr void __cordl_internal_set__avatarsData(::GlobalNamespace::MultiplayerAvatarsData value);

  /// @brief Method get_avatarsData, addr 0xe15b24, size 0x14, virtual true, abstract: false, final true
  inline ::GlobalNamespace::MultiplayerAvatarsData get_avatarsData();

  static inline ::BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider* New_ctor(::GlobalNamespace::MultiplayerAvatarsData avatarsData);

  /// @brief Method .ctor, addr 0xe15b38, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::MultiplayerAvatarsData avatarsData);

  // Ctor Parameters [CppParam { name: "", ty: "StaticAvatarVisualDataProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StaticAvatarVisualDataProvider(StaticAvatarVisualDataProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StaticAvatarVisualDataProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StaticAvatarVisualDataProvider(StaticAvatarVisualDataProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StaticAvatarVisualDataProvider();

public:
  /// @brief Field _avatarsData, offset: 0x10, size: 0x18, def value: None
  ::GlobalNamespace::MultiplayerAvatarsData ____avatarsData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider, 0x28>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider, ____avatarsData) == 0x10, "Offset mismatch!");

} // namespace BeatSaber::Multiplayer::TimelineMock
NEED_NO_BOX(::BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Multiplayer::TimelineMock::StaticAvatarVisualDataProvider*, "BeatSaber.Multiplayer.TimelineMock", "StaticAvatarVisualDataProvider");
