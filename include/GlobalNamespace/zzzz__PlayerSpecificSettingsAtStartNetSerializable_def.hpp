#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PlayerSpecificSettingsAtStartNetSerializable)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
class PlayerSpecificSettingsNetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
class IConnectedPlayer;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12847))
// CS Name: ::PlayerSpecificSettingsAtStartNetSerializable*
class CORDL_TYPE PlayerSpecificSettingsAtStartNetSerializable : public ::System::Object {
public:
  // Declarations
  /// @brief Field <activePlayerSpecificSettingsAtGameStart>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__activePlayerSpecificSettingsAtGameStart_k__BackingField, put = __set__activePlayerSpecificSettingsAtGameStart_k__BackingField))::System::Collections::Generic::
      IReadOnlyList_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* _activePlayerSpecificSettingsAtGameStart_k__BackingField;

  /// @brief Field _activePlayersAtGameStart, offset 0x18, size 0x8
  __declspec(property(get = __get__activePlayersAtGameStart,
                      put = __set__activePlayersAtGameStart))::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* _activePlayersAtGameStart;

  __declspec(property(get = get_activePlayersAtGameStart))::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* activePlayersAtGameStart;

  __declspec(property(get = get_activePlayerSpecificSettingsAtGameStart, put = set_activePlayerSpecificSettingsAtGameStart))::System::Collections::Generic::IReadOnlyList_1<
      ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* activePlayerSpecificSettingsAtGameStart;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*& __get__activePlayerSpecificSettingsAtGameStart_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*> const&
  __get__activePlayerSpecificSettingsAtGameStart_k__BackingField() const;

  constexpr void __set__activePlayerSpecificSettingsAtGameStart_k__BackingField(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*& __get__activePlayersAtGameStart();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*> const& __get__activePlayersAtGameStart() const;

  constexpr void __set__activePlayersAtGameStart(::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* value);

  /// @brief Method get_activePlayersAtGameStart addr 0xdccdbc size 0x260 virtual false final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* get_activePlayersAtGameStart();

  /// @brief Method get_activePlayerSpecificSettingsAtGameStart addr 0xdcd01c size 0x8 virtual false final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* get_activePlayerSpecificSettingsAtGameStart();

  /// @brief Method set_activePlayerSpecificSettingsAtGameStart addr 0xdcd024 size 0x8 virtual false final false
  inline void set_activePlayerSpecificSettingsAtGameStart(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value);

  static inline ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* New_ctor();

  /// @brief Method .ctor addr 0xdcd02c size 0x8 virtual false final false
  inline void _ctor();

  static inline ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*
  New_ctor(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* activePlayerSpecificSettingsAtGameStart);

  /// @brief Method .ctor addr 0xdcd034 size 0x28 virtual false final false
  inline void _ctor(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* activePlayerSpecificSettingsAtGameStart);

  /// @brief Method Serialize addr 0xdcd05c size 0x36c virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xdcd458 size 0x158 virtual true final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSpecificSettingsAtStartNetSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSpecificSettingsAtStartNetSerializable(PlayerSpecificSettingsAtStartNetSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSpecificSettingsAtStartNetSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSpecificSettingsAtStartNetSerializable(PlayerSpecificSettingsAtStartNetSerializable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSpecificSettingsAtStartNetSerializable();

public:
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
