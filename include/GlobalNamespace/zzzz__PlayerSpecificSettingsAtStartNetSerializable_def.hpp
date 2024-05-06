#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSpecificSettingsAtStartNetSerializable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PlayerSpecificSettingsAtStartNetSerializable)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class PlayerSpecificSettingsNetSerializable;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerSpecificSettingsAtStartNetSerializable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable);
// Type: ::PlayerSpecificSettingsAtStartNetSerializable
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerSpecificSettingsAtStartNetSerializable*
class CORDL_TYPE PlayerSpecificSettingsAtStartNetSerializable : public ::System::Object {
public:
  // Declarations
  /// @brief Field <activePlayerSpecificSettingsAtGameStart>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__activePlayerSpecificSettingsAtGameStart_k__BackingField, put = __cordl_internal_set__activePlayerSpecificSettingsAtGameStart_k__BackingField))::
      System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* _activePlayerSpecificSettingsAtGameStart_k__BackingField;

  /// @brief Field _activePlayersAtGameStart, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__activePlayersAtGameStart,
                      put = __cordl_internal_set__activePlayersAtGameStart))::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* _activePlayersAtGameStart;

  __declspec(property(get = get_activePlayerSpecificSettingsAtGameStart, put = set_activePlayerSpecificSettingsAtGameStart))::System::Collections::Generic::IReadOnlyList_1<
      ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* activePlayerSpecificSettingsAtGameStart;

  __declspec(property(get = get_activePlayersAtGameStart))::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* activePlayersAtGameStart;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0x10b0bf0, size 0x158, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  static inline ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* New_ctor();

  static inline ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*
  New_ctor(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* activePlayerSpecificSettingsAtGameStart);

  /// @brief Method Serialize, addr 0x10b07f4, size 0x36c, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*&
  __cordl_internal_get__activePlayerSpecificSettingsAtGameStart_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*> const&
  __cordl_internal_get__activePlayerSpecificSettingsAtGameStart_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get__activePlayersAtGameStart();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*> const& __cordl_internal_get__activePlayersAtGameStart() const;

  constexpr void
  __cordl_internal_set__activePlayerSpecificSettingsAtGameStart_k__BackingField(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value);

  constexpr void __cordl_internal_set__activePlayersAtGameStart(::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method .ctor, addr 0x10b07c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x10b07cc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* activePlayerSpecificSettingsAtGameStart);

  /// @brief Method get_activePlayerSpecificSettingsAtGameStart, addr 0x10b07b4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* get_activePlayerSpecificSettingsAtGameStart();

  /// @brief Method get_activePlayersAtGameStart, addr 0x10b0554, size 0x260, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* get_activePlayersAtGameStart();

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

  /// @brief Method set_activePlayerSpecificSettingsAtGameStart, addr 0x10b07bc, size 0x8, virtual false, abstract: false, final false
  inline void set_activePlayerSpecificSettingsAtGameStart(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSpecificSettingsAtStartNetSerializable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSpecificSettingsAtStartNetSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSpecificSettingsAtStartNetSerializable(PlayerSpecificSettingsAtStartNetSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSpecificSettingsAtStartNetSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSpecificSettingsAtStartNetSerializable(PlayerSpecificSettingsAtStartNetSerializable const&) = delete;

  /// @brief Field <activePlayerSpecificSettingsAtGameStart>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* ____activePlayerSpecificSettingsAtGameStart_k__BackingField;

  /// @brief Field _activePlayersAtGameStart, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* ____activePlayersAtGameStart;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable, ____activePlayerSpecificSettingsAtGameStart_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable, ____activePlayersAtGameStart) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, "", "PlayerSpecificSettingsAtStartNetSerializable");
