#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OptionalAvatarDataSyncHandler)
namespace BeatSaber::AvatarCore {
class OptionalAvatarDataPacket;
}
namespace BeatSaber::AvatarCore {
struct OptionalAvatarData;
}
namespace GlobalNamespace {
class ByteArrayNetSerializable;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class OptionalAvatarDataSyncHandler;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler);
// Type: BeatSaber.AvatarCore::OptionalAvatarDataSyncHandler
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: ::BeatSaber.AvatarCore::OptionalAvatarDataSyncHandler*
class CORDL_TYPE OptionalAvatarDataSyncHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Field _latestOptionalAvatarDataDictionary, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__latestOptionalAvatarDataDictionary, put = __cordl_internal_set__latestOptionalAvatarDataDictionary))::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::IConnectedPlayer*, ::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>*>* _latestOptionalAvatarDataDictionary;

  /// @brief Field _multiplayerSessionManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  /// @brief Field didChangeOptionalAvatarDataEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_didChangeOptionalAvatarDataEvent,
                      put = __cordl_internal_set_didChangeOptionalAvatarDataEvent))::System::Action_2<::GlobalNamespace::IConnectedPlayer*,
                                                                                                      ::BeatSaber::AvatarCore::OptionalAvatarData>* didChangeOptionalAvatarDataEvent;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0xe7da14, size 0xc8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method HandleOptionalAvatarDataChanged, addr 0xe7dadc, size 0x260, virtual false, abstract: false, final false
  inline ::BeatSaber::AvatarCore::OptionalAvatarData HandleOptionalAvatarDataChanged(uint32_t dataType, ::GlobalNamespace::ByteArrayNetSerializable* data,
                                                                                     ::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  /// @brief Method HandleOptionalAvatarDataPacket, addr 0xe7dd3c, size 0x80, virtual false, abstract: false, final false
  inline void HandleOptionalAvatarDataPacket(::BeatSaber::AvatarCore::OptionalAvatarDataPacket* packet, ::GlobalNamespace::IConnectedPlayer* connectedPlayer);

  static inline ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler* New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager);

  /// @brief Method SendOptionalAvatarData, addr 0xe7d610, size 0x248, virtual false, abstract: false, final false
  inline void SendOptionalAvatarData(::BeatSaber::AvatarCore::OptionalAvatarData data);

  /// @brief Method TryGetAllLatestOptionalAvatarData, addr 0xe7c630, size 0x68, virtual false, abstract: false, final false
  inline bool TryGetAllLatestOptionalAvatarData(::GlobalNamespace::IConnectedPlayer* connectedPlayer,
                                                ByRef<::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>*> data);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IConnectedPlayer*, ::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>*>*&
  __cordl_internal_get__latestOptionalAvatarDataDictionary();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IConnectedPlayer*, ::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>*>*> const&
  __cordl_internal_get__latestOptionalAvatarDataDictionary() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::System::Action_2<::GlobalNamespace::IConnectedPlayer*, ::BeatSaber::AvatarCore::OptionalAvatarData>*& __cordl_internal_get_didChangeOptionalAvatarDataEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::IConnectedPlayer*, ::BeatSaber::AvatarCore::OptionalAvatarData>*> const&
  __cordl_internal_get_didChangeOptionalAvatarDataEvent() const;

  constexpr void __cordl_internal_set__latestOptionalAvatarDataDictionary(
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IConnectedPlayer*, ::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>*>* value);

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  constexpr void __cordl_internal_set_didChangeOptionalAvatarDataEvent(::System::Action_2<::GlobalNamespace::IConnectedPlayer*, ::BeatSaber::AvatarCore::OptionalAvatarData>* value);

  /// @brief Method .ctor, addr 0xe7d858, size 0x1bc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager);

  /// @brief Method add_didChangeOptionalAvatarDataEvent, addr 0xe7c9d8, size 0xb0, virtual false, abstract: false, final false
  inline void add_didChangeOptionalAvatarDataEvent(::System::Action_2<::GlobalNamespace::IConnectedPlayer*, ::BeatSaber::AvatarCore::OptionalAvatarData>* value);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_didChangeOptionalAvatarDataEvent, addr 0xe7cb1c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didChangeOptionalAvatarDataEvent(::System::Action_2<::GlobalNamespace::IConnectedPlayer*, ::BeatSaber::AvatarCore::OptionalAvatarData>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OptionalAvatarDataSyncHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OptionalAvatarDataSyncHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OptionalAvatarDataSyncHandler(OptionalAvatarDataSyncHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OptionalAvatarDataSyncHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OptionalAvatarDataSyncHandler(OptionalAvatarDataSyncHandler const&) = delete;

  /// @brief Field didChangeOptionalAvatarDataEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::IConnectedPlayer*, ::BeatSaber::AvatarCore::OptionalAvatarData>* ___didChangeOptionalAvatarDataEvent;

  /// @brief Field _latestOptionalAvatarDataDictionary, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IConnectedPlayer*, ::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>*>*
      ____latestOptionalAvatarDataDictionary;

  /// @brief Field _multiplayerSessionManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler, 0x28>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler, ___didChangeOptionalAvatarDataEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler, ____latestOptionalAvatarDataDictionary) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler, ____multiplayerSessionManager) == 0x20, "Offset mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*, "BeatSaber.AvatarCore", "OptionalAvatarDataSyncHandler");
