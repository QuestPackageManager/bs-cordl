#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__UnifiedNetworkPlayerModel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnifiedNetworkPlayerModel)
namespace GlobalNamespace {
class GameLiftNetworkPlayerModel;
}
namespace GlobalNamespace {
class __UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig;
}
namespace GlobalNamespace {
class PartyMessageHandler;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
template <typename T> class INetworkPlayerModelPartyConfig_1;
}
namespace GlobalNamespace {
class __UnifiedNetworkPlayerModel__StartClientPartyConfig;
}
namespace GlobalNamespace {
class __UnifiedNetworkPlayerModel___get_otherPlayers_d__71;
}
namespace GlobalNamespace {
class LocalNetworkPlayerModel;
}
namespace GlobalNamespace {
class PlatformNetworkPlayerModel;
}
namespace GlobalNamespace {
class IUnifiedNetworkPlayerModel;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
class INetworkPlayerModel;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
struct __UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType;
}
namespace GlobalNamespace {
class ConnectedPlayerManager;
}
namespace System {
class Action;
}
namespace System {
template <typename T> class Action_1;
}
namespace Zenject {
class IInitializable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace GlobalNamespace {
struct __UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType;
}
namespace GlobalNamespace {
class UnifiedNetworkPlayerModel;
}
namespace GlobalNamespace {
class __UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig;
}
namespace GlobalNamespace {
class __UnifiedNetworkPlayerModel__StartClientPartyConfig;
}
namespace GlobalNamespace {
class __UnifiedNetworkPlayerModel___get_otherPlayers_d__71;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType);
MARK_REF_PTR_T(::GlobalNamespace::UnifiedNetworkPlayerModel);
MARK_REF_PTR_T(::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig);
MARK_REF_PTR_T(::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig);
MARK_REF_PTR_T(::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__71);
// Type: ::ActiveNetworkPlayerModelType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4606))
// CS Name: ::UnifiedNetworkPlayerModel::ActiveNetworkPlayerModelType
struct CORDL_TYPE __UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType_Unwrapped
  enum struct ____UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType_Unwrapped : int32_t {
    __E_GameLift = static_cast<int32_t>(0x0),
    __E_Platform = static_cast<int32_t>(0x1),
    __E_LocalNetwork = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType_Unwrapped() const noexcept {
    return static_cast<____UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field GameLift value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType const GameLift;

  /// @brief Field Platform value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType const Platform;

  /// @brief Field LocalNetwork value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType const LocalNetwork;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::JoinMatchmakingPartyConfig
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12614)), TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(12687))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4607))
// CS Name: ::UnifiedNetworkPlayerModel::JoinMatchmakingPartyConfig*
class CORDL_TYPE __UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig : public ::System::Object {
public:
  // Declarations
  /// @brief Field selectionMask, offset 0x10, size 0x18
  __declspec(property(get = __get_selectionMask, put = __set_selectionMask))::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  /// @brief Field configuration, offset 0x28, size 0x18
  __declspec(property(get = __get_configuration, put = __set_configuration))::GlobalNamespace::GameplayServerConfiguration configuration;

  /// @brief Field secret, offset 0x40, size 0x8
  __declspec(property(get = __get_secret, put = __set_secret))::StringW secret;

  /// @brief Field code, offset 0x48, size 0x8
  __declspec(property(get = __get_code, put = __set_code))::StringW code;

  /// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>"
  constexpr operator ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>*() noexcept;

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __get_selectionMask();

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __get_selectionMask() const;

  constexpr void __set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value);

  constexpr ::GlobalNamespace::GameplayServerConfiguration& __get_configuration();

  constexpr ::GlobalNamespace::GameplayServerConfiguration const& __get_configuration() const;

  constexpr void __set_configuration(::GlobalNamespace::GameplayServerConfiguration value);

  constexpr ::StringW& __get_secret();

  constexpr ::StringW const& __get_secret() const;

  constexpr void __set_secret(::StringW value);

  constexpr ::StringW& __get_code();

  constexpr ::StringW const& __get_code() const;

  constexpr void __set_code(::StringW value);

  static inline ::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig* New_ctor();

  /// @brief Method .ctor addr 0x2228994 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig(__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig(__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig();

public:
  /// @brief Field selectionMask, offset: 0x10, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapLevelSelectionMask ___selectionMask;

  /// @brief Field configuration, offset: 0x28, size: 0x18, def value: None
  ::GlobalNamespace::GameplayServerConfiguration ___configuration;

  /// @brief Field secret, offset: 0x40, size: 0x8, def value: None
  ::StringW ___secret;

  /// @brief Field code, offset: 0x48, size: 0x8, def value: None
  ::StringW ___code;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig, ___selectionMask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig, ___configuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig, ___secret) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig, ___code) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::StartClientPartyConfig
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12614)), TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(12687))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4608))
// CS Name: ::UnifiedNetworkPlayerModel::StartClientPartyConfig*
class CORDL_TYPE __UnifiedNetworkPlayerModel__StartClientPartyConfig : public ::System::Object {
public:
  // Declarations
  /// @brief Field selectionMask, offset 0x10, size 0x18
  __declspec(property(get = __get_selectionMask, put = __set_selectionMask))::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  /// @brief Field configuration, offset 0x28, size 0x18
  __declspec(property(get = __get_configuration, put = __set_configuration))::GlobalNamespace::GameplayServerConfiguration configuration;

  /// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>"
  constexpr operator ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>*() noexcept;

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __get_selectionMask();

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __get_selectionMask() const;

  constexpr void __set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value);

  constexpr ::GlobalNamespace::GameplayServerConfiguration& __get_configuration();

  constexpr ::GlobalNamespace::GameplayServerConfiguration const& __get_configuration() const;

  constexpr void __set_configuration(::GlobalNamespace::GameplayServerConfiguration value);

  static inline ::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig* New_ctor();

  /// @brief Method .ctor addr 0x22286c8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__UnifiedNetworkPlayerModel__StartClientPartyConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnifiedNetworkPlayerModel__StartClientPartyConfig(__UnifiedNetworkPlayerModel__StartClientPartyConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnifiedNetworkPlayerModel__StartClientPartyConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnifiedNetworkPlayerModel__StartClientPartyConfig(__UnifiedNetworkPlayerModel__StartClientPartyConfig const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnifiedNetworkPlayerModel__StartClientPartyConfig();

public:
  /// @brief Field selectionMask, offset: 0x10, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapLevelSelectionMask ___selectionMask;

  /// @brief Field configuration, offset: 0x28, size: 0x18, def value: None
  ::GlobalNamespace::GameplayServerConfiguration ___configuration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig, ___selectionMask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig, ___configuration) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<get_otherPlayers>d__71
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4609))
// CS Name: ::UnifiedNetworkPlayerModel::<get_otherPlayers>d__71*
class CORDL_TYPE __UnifiedNetworkPlayerModel___get_otherPlayers_d__71 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::GlobalNamespace::INetworkPlayer* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::UnifiedNetworkPlayerModel* __4__this;

  /// @brief Field <>7__wrap1, offset 0x30, size 0x8
  __declspec(property(get = __get___7__wrap1, put = __set___7__wrap1))::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* __7__wrap1;

  __declspec(property(get = System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current))::GlobalNamespace::INetworkPlayer* System_Collections_Generic_IEnumerator_INetworkPlayer__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::GlobalNamespace::INetworkPlayer*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkPlayer*> const& __get___2__current() const;

  constexpr void __set___2__current(::GlobalNamespace::INetworkPlayer* value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::GlobalNamespace::UnifiedNetworkPlayerModel*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::UnifiedNetworkPlayerModel*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::UnifiedNetworkPlayerModel* value);

  constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*& __get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*> const& __get___7__wrap1() const;

  constexpr void __set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* value);

  static inline ::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__71* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x222854c size 0x34 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x22290f4 size 0x54 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2229148 size 0x6dc virtual true final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1 addr 0x2229824 size 0xb0 virtual false final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2 addr 0x22298d4 size 0xb0 virtual false final false
  inline void __m__Finally2();

  /// @brief Method <>m__Finally3 addr 0x2229984 size 0xb0 virtual false final false
  inline void __m__Finally3();

  /// @brief Method System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current addr 0x2229a34 size 0x8 virtual true final true
  inline ::GlobalNamespace::INetworkPlayer* System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2229a3c size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2229a7c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator addr 0x2229a84 size 0xa4 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2229b28 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__UnifiedNetworkPlayerModel___get_otherPlayers_d__71", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnifiedNetworkPlayerModel___get_otherPlayers_d__71(__UnifiedNetworkPlayerModel___get_otherPlayers_d__71&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnifiedNetworkPlayerModel___get_otherPlayers_d__71", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnifiedNetworkPlayerModel___get_otherPlayers_d__71(__UnifiedNetworkPlayerModel___get_otherPlayers_d__71 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnifiedNetworkPlayerModel___get_otherPlayers_d__71();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::INetworkPlayer* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::UnifiedNetworkPlayerModel* _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__71, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__71, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__71, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__71, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__71, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__71, _____7__wrap1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::UnifiedNetworkPlayerModel
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 124, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(4606))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4610))
// CS Name: ::UnifiedNetworkPlayerModel*
class CORDL_TYPE UnifiedNetworkPlayerModel : public ::System::Object {
public:
  // Declarations
  using _get_otherPlayers_d__71 = ::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__71;

  using StartClientPartyConfig = ::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig;

  using JoinMatchmakingPartyConfig = ::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig;

  using ActiveNetworkPlayerModelType = ::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType;

  /// @brief Field _gameLiftNetworkPlayerModel, offset 0x10, size 0x8
  __declspec(property(get = __get__gameLiftNetworkPlayerModel, put = __set__gameLiftNetworkPlayerModel))::GlobalNamespace::GameLiftNetworkPlayerModel* _gameLiftNetworkPlayerModel;

  /// @brief Field _platformNetworkPlayerModel, offset 0x18, size 0x8
  __declspec(property(get = __get__platformNetworkPlayerModel, put = __set__platformNetworkPlayerModel))::GlobalNamespace::PlatformNetworkPlayerModel* _platformNetworkPlayerModel;

  /// @brief Field _localNetworkPlayerModel, offset 0x20, size 0x8
  __declspec(property(get = __get__localNetworkPlayerModel, put = __set__localNetworkPlayerModel))::GlobalNamespace::LocalNetworkPlayerModel* _localNetworkPlayerModel;

  /// @brief Field connectedPlayerManagerCreatedEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_connectedPlayerManagerCreatedEvent,
                      put = __set_connectedPlayerManagerCreatedEvent))::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* connectedPlayerManagerCreatedEvent;

  /// @brief Field connectedPlayerManagerDestroyedEvent, offset 0x30, size 0x8
  __declspec(property(get = __get_connectedPlayerManagerDestroyedEvent,
                      put = __set_connectedPlayerManagerDestroyedEvent))::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* connectedPlayerManagerDestroyedEvent;

  /// @brief Field partySizeChangedEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_partySizeChangedEvent, put = __set_partySizeChangedEvent))::System::Action_1<int32_t>* partySizeChangedEvent;

  /// @brief Field partyRefreshingEvent, offset 0x40, size 0x8
  __declspec(property(get = __get_partyRefreshingEvent, put = __set_partyRefreshingEvent))::System::Action* partyRefreshingEvent;

  /// @brief Field partyChangedEvent, offset 0x48, size 0x8
  __declspec(property(get = __get_partyChangedEvent, put = __set_partyChangedEvent))::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* partyChangedEvent;

  /// @brief Field joinRequestedEvent, offset 0x50, size 0x8
  __declspec(property(get = __get_joinRequestedEvent, put = __set_joinRequestedEvent))::System::Action_1<::GlobalNamespace::INetworkPlayer*>* joinRequestedEvent;

  /// @brief Field inviteRequestedEvent, offset 0x58, size 0x8
  __declspec(property(get = __get_inviteRequestedEvent, put = __set_inviteRequestedEvent))::System::Action_1<::GlobalNamespace::INetworkPlayer*>* inviteRequestedEvent;

  /// @brief Field _partyMessageHandler, offset 0x60, size 0x8
  __declspec(property(get = __get__partyMessageHandler, put = __set__partyMessageHandler))::GlobalNamespace::PartyMessageHandler* _partyMessageHandler;

  /// @brief Field _friendPartyMessageHandler, offset 0x68, size 0x8
  __declspec(property(get = __get__friendPartyMessageHandler, put = __set__friendPartyMessageHandler))::GlobalNamespace::PartyMessageHandler* _friendPartyMessageHandler;

  /// @brief Field _localNetworkPartyMessageHandler, offset 0x70, size 0x8
  __declspec(property(get = __get__localNetworkPartyMessageHandler, put = __set__localNetworkPartyMessageHandler))::GlobalNamespace::PartyMessageHandler* _localNetworkPartyMessageHandler;

  /// @brief Field _activeNetworkPlayerModelType, offset 0x78, size 0x4
  __declspec(property(get = __get__activeNetworkPlayerModelType,
                      put = __set__activeNetworkPlayerModelType))::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType _activeNetworkPlayerModelType;

  __declspec(property(get = get_activeNetworkPlayerModel))::GlobalNamespace::INetworkPlayerModel* activeNetworkPlayerModel;

  __declspec(property(get = get_activeNetworkPlayerModelType))::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType activeNetworkPlayerModelType;

  __declspec(property(get = get_localPlayerIsPartyOwner)) bool localPlayerIsPartyOwner;

  __declspec(property(get = get_hasNetworkingFailed)) bool hasNetworkingFailed;

  __declspec(property(get = get_currentPartySize)) int32_t currentPartySize;

  __declspec(property(get = get_selectionMask))::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  __declspec(property(get = get_configuration))::GlobalNamespace::GameplayServerConfiguration configuration;

  __declspec(property(get = get_secret))::StringW secret;

  __declspec(property(get = get_code))::StringW code;

  __declspec(property(get = get_connectedPlayerManager))::GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager;

  __declspec(property(get = get_publicServers))::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* publicServers;

  __declspec(property(get = get_friends))::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* friends;

  __declspec(property(get = get_localNetworkPlayers))::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* localNetworkPlayers;

  __declspec(property(get = get_discoveryEnabled, put = set_discoveryEnabled)) bool discoveryEnabled;

  __declspec(property(get = get_enableFriends, put = set_enableFriends)) bool enableFriends;

  __declspec(property(get = get_enableLocalNetwork, put = set_enableLocalNetwork)) bool enableLocalNetwork;

  __declspec(property(get = get_partyPlayers))::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* partyPlayers;

  __declspec(property(get = get_otherPlayers))::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* otherPlayers;

  /// @brief Convert operator to "::GlobalNamespace::IUnifiedNetworkPlayerModel"
  constexpr operator ::GlobalNamespace::IUnifiedNetworkPlayerModel*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModel"
  constexpr operator ::GlobalNamespace::INetworkPlayerModel*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::GlobalNamespace::GameLiftNetworkPlayerModel*& __get__gameLiftNetworkPlayerModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameLiftNetworkPlayerModel*> const& __get__gameLiftNetworkPlayerModel() const;

  constexpr void __set__gameLiftNetworkPlayerModel(::GlobalNamespace::GameLiftNetworkPlayerModel* value);

  constexpr ::GlobalNamespace::PlatformNetworkPlayerModel*& __get__platformNetworkPlayerModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlatformNetworkPlayerModel*> const& __get__platformNetworkPlayerModel() const;

  constexpr void __set__platformNetworkPlayerModel(::GlobalNamespace::PlatformNetworkPlayerModel* value);

  constexpr ::GlobalNamespace::LocalNetworkPlayerModel*& __get__localNetworkPlayerModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalNetworkPlayerModel*> const& __get__localNetworkPlayerModel() const;

  constexpr void __set__localNetworkPlayerModel(::GlobalNamespace::LocalNetworkPlayerModel* value);

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*& __get_connectedPlayerManagerCreatedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*> const& __get_connectedPlayerManagerCreatedEvent() const;

  constexpr void __set_connectedPlayerManagerCreatedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*& __get_connectedPlayerManagerDestroyedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*> const& __get_connectedPlayerManagerDestroyedEvent() const;

  constexpr void __set_connectedPlayerManagerDestroyedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  constexpr ::System::Action_1<int32_t>*& __get_partySizeChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& __get_partySizeChangedEvent() const;

  constexpr void __set_partySizeChangedEvent(::System::Action_1<int32_t>* value);

  constexpr ::System::Action*& __get_partyRefreshingEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_partyRefreshingEvent() const;

  constexpr void __set_partyRefreshingEvent(::System::Action* value);

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*& __get_partyChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*> const& __get_partyChangedEvent() const;

  constexpr void __set_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>*& __get_joinRequestedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*> const& __get_joinRequestedEvent() const;

  constexpr void __set_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>*& __get_inviteRequestedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*> const& __get_inviteRequestedEvent() const;

  constexpr void __set_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  constexpr ::GlobalNamespace::PartyMessageHandler*& __get__partyMessageHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PartyMessageHandler*> const& __get__partyMessageHandler() const;

  constexpr void __set__partyMessageHandler(::GlobalNamespace::PartyMessageHandler* value);

  constexpr ::GlobalNamespace::PartyMessageHandler*& __get__friendPartyMessageHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PartyMessageHandler*> const& __get__friendPartyMessageHandler() const;

  constexpr void __set__friendPartyMessageHandler(::GlobalNamespace::PartyMessageHandler* value);

  constexpr ::GlobalNamespace::PartyMessageHandler*& __get__localNetworkPartyMessageHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PartyMessageHandler*> const& __get__localNetworkPartyMessageHandler() const;

  constexpr void __set__localNetworkPartyMessageHandler(::GlobalNamespace::PartyMessageHandler* value);

  constexpr ::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType& __get__activeNetworkPlayerModelType();

  constexpr ::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType const& __get__activeNetworkPlayerModelType() const;

  constexpr void __set__activeNetworkPlayerModelType(::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType value);

  /// @brief Method add_connectedPlayerManagerCreatedEvent addr 0x2226284 size 0xb0 virtual true final true
  inline void add_connectedPlayerManagerCreatedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method remove_connectedPlayerManagerCreatedEvent addr 0x2226334 size 0xb0 virtual true final true
  inline void remove_connectedPlayerManagerCreatedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method add_connectedPlayerManagerDestroyedEvent addr 0x22263e4 size 0xb0 virtual true final true
  inline void add_connectedPlayerManagerDestroyedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method remove_connectedPlayerManagerDestroyedEvent addr 0x2226494 size 0xb0 virtual true final true
  inline void remove_connectedPlayerManagerDestroyedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method add_partySizeChangedEvent addr 0x2226544 size 0xb0 virtual true final true
  inline void add_partySizeChangedEvent(::System::Action_1<int32_t>* value);

  /// @brief Method remove_partySizeChangedEvent addr 0x22265f4 size 0xb0 virtual true final true
  inline void remove_partySizeChangedEvent(::System::Action_1<int32_t>* value);

  /// @brief Method add_partyRefreshingEvent addr 0x22266a4 size 0x9c virtual true final true
  inline void add_partyRefreshingEvent(::System::Action* value);

  /// @brief Method remove_partyRefreshingEvent addr 0x2226740 size 0x9c virtual true final true
  inline void remove_partyRefreshingEvent(::System::Action* value);

  /// @brief Method add_partyChangedEvent addr 0x22267dc size 0xb0 virtual true final true
  inline void add_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method remove_partyChangedEvent addr 0x222688c size 0xb0 virtual true final true
  inline void remove_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method add_joinRequestedEvent addr 0x222693c size 0xb0 virtual true final true
  inline void add_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method remove_joinRequestedEvent addr 0x22269ec size 0xb0 virtual true final true
  inline void remove_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method add_inviteRequestedEvent addr 0x2226a9c size 0xb0 virtual true final true
  inline void add_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method remove_inviteRequestedEvent addr 0x2226b4c size 0xb0 virtual true final true
  inline void remove_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method get_activeNetworkPlayerModel addr 0x2226bfc size 0x3c virtual false final false
  inline ::GlobalNamespace::INetworkPlayerModel* get_activeNetworkPlayerModel();

  /// @brief Method get_activeNetworkPlayerModelType addr 0x2226c38 size 0x8 virtual false final false
  inline ::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType get_activeNetworkPlayerModelType();

  /// @brief Method get_localPlayerIsPartyOwner addr 0x2226c40 size 0xdc virtual true final true
  inline bool get_localPlayerIsPartyOwner();

  /// @brief Method get_hasNetworkingFailed addr 0x2226d1c size 0xdc virtual true final true
  inline bool get_hasNetworkingFailed();

  /// @brief Method get_currentPartySize addr 0x2226df8 size 0xd0 virtual true final true
  inline int32_t get_currentPartySize();

  /// @brief Method get_selectionMask addr 0x2226ec8 size 0xf4 virtual true final true
  inline ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask();

  /// @brief Method get_configuration addr 0x2226fbc size 0xf4 virtual true final true
  inline ::GlobalNamespace::GameplayServerConfiguration get_configuration();

  /// @brief Method get_secret addr 0x22270b0 size 0x24 virtual true final true
  inline ::StringW get_secret();

  /// @brief Method get_code addr 0x22270d4 size 0x24 virtual true final true
  inline ::StringW get_code();

  /// @brief Method get_connectedPlayerManager addr 0x22270f8 size 0xd0 virtual true final true
  inline ::GlobalNamespace::ConnectedPlayerManager* get_connectedPlayerManager();

  /// @brief Method get_publicServers addr 0x22271c8 size 0x48 virtual true final true
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* get_publicServers();

  /// @brief Method get_friends addr 0x2227210 size 0x24 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* get_friends();

  /// @brief Method get_localNetworkPlayers addr 0x2227234 size 0x1c virtual true final true
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* get_localNetworkPlayers();

  /// @brief Method get_discoveryEnabled addr 0x2227250 size 0xcc virtual true final true
  inline bool get_discoveryEnabled();

  /// @brief Method set_discoveryEnabled addr 0x222731c size 0xd8 virtual true final true
  inline void set_discoveryEnabled(bool value);

  /// @brief Method get_enableFriends addr 0x22273f4 size 0x24 virtual false final false
  inline bool get_enableFriends();

  /// @brief Method set_enableFriends addr 0x2227418 size 0x34 virtual false final false
  inline void set_enableFriends(bool value);

  /// @brief Method get_enableLocalNetwork addr 0x2227804 size 0x24 virtual true final true
  inline bool get_enableLocalNetwork();

  /// @brief Method set_enableLocalNetwork addr 0x2227828 size 0x34 virtual true final true
  inline void set_enableLocalNetwork(bool value);

  /// @brief Method Initialize addr 0x222785c size 0x5d4 virtual true final true
  inline void Initialize();

  /// @brief Method Dispose addr 0x2227e30 size 0x5d4 virtual true final true
  inline void Dispose();

  /// @brief Method get_partyPlayers addr 0x2228404 size 0xd0 virtual true final true
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* get_partyPlayers();

  /// @brief Method get_otherPlayers addr 0x22284d4 size 0x78 virtual true final true
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* get_otherPlayers();

  /// @brief Method SetServerFilter addr 0x2228580 size 0x148 virtual true final true
  inline void SetServerFilter(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration);

  /// @brief Method RefreshAlternateDiscoveryModels addr 0x222744c size 0x3b8 virtual false final false
  inline void RefreshAlternateDiscoveryModels();

  /// @brief Method HandlePlayersChanged addr 0x22286d0 size 0x68 virtual false final false
  inline void HandlePlayersChanged();

  /// @brief Method HandleInviteRequested addr 0x2228738 size 0x1c virtual false final false
  inline void HandleInviteRequested(::GlobalNamespace::INetworkPlayer* player);

  /// @brief Method HandleJoinRequested addr 0x2228754 size 0x1c virtual false final false
  inline void HandleJoinRequested(::GlobalNamespace::INetworkPlayer* player);

  /// @brief Method HandlePartyChanged addr 0x2228770 size 0x20 virtual false final false
  inline void HandlePartyChanged(::GlobalNamespace::INetworkPlayerModel* playerModel);

  /// @brief Method HandlePartySizeChanged addr 0x2228790 size 0x34 virtual false final false
  inline void HandlePartySizeChanged(int32_t size);

  /// @brief Method HandlePartyRefreshing addr 0x22287c4 size 0x1c virtual false final false
  inline void HandlePartyRefreshing();

  /// @brief Method HandleLocalPlayerConnected addr 0x22287e0 size 0x64 virtual false final false
  inline void HandleLocalPlayerConnected(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandleFriendConnected addr 0x2228844 size 0x64 virtual false final false
  inline void HandleFriendConnected(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandleLocalPlayerConnectToMasterServer addr 0x22288a8 size 0xec virtual false final false
  inline void HandleLocalPlayerConnectToMasterServer(::StringW secret);

  /// @brief Method HandleFriendConnectToMasterServer addr 0x222899c size 0xec virtual false final false
  inline void HandleFriendConnectToMasterServer(::StringW secret);

  /// @brief Method HandleConnectedPlayerManagerCreated addr 0x2228a88 size 0x438 virtual false final false
  inline void HandleConnectedPlayerManagerCreated(::GlobalNamespace::INetworkPlayerModel* networkPlayerModel);

  /// @brief Method HandleConnectedPlayerManagerDestroyed addr 0x2228ec0 size 0xd0 virtual false final false
  inline void HandleConnectedPlayerManagerDestroyed(::GlobalNamespace::INetworkPlayerModel* networkPlayerModel);

  /// @brief Method ResetMasterServerReachability addr 0x2228f90 size 0x50 virtual true final true
  inline void ResetMasterServerReachability();

  /// @brief Method CreatePartyConnection addr 0x0 size 0xffffffffffffffff virtual true final true
  template <typename T> inline bool CreatePartyConnection(::GlobalNamespace::INetworkPlayerModelPartyConfig_1<T>* partyConfig);

  /// @brief Method DestroyPartyConnection addr 0x2228fe0 size 0xd0 virtual true final true
  inline void DestroyPartyConnection();

  /// @brief Method SetActiveNetworkPlayerModelType addr 0x22290b0 size 0x3c virtual true final true
  inline void SetActiveNetworkPlayerModelType(::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType activeNetworkPlayerModelType);

  static inline ::GlobalNamespace::UnifiedNetworkPlayerModel* New_ctor();

  /// @brief Method .ctor addr 0x22290ec size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "UnifiedNetworkPlayerModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnifiedNetworkPlayerModel(UnifiedNetworkPlayerModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnifiedNetworkPlayerModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnifiedNetworkPlayerModel(UnifiedNetworkPlayerModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnifiedNetworkPlayerModel();

public:
  /// @brief Field _gameLiftNetworkPlayerModel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::GameLiftNetworkPlayerModel* ____gameLiftNetworkPlayerModel;

  /// @brief Field _platformNetworkPlayerModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::PlatformNetworkPlayerModel* ____platformNetworkPlayerModel;

  /// @brief Field _localNetworkPlayerModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LocalNetworkPlayerModel* ____localNetworkPlayerModel;

  /// @brief Field connectedPlayerManagerCreatedEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* ___connectedPlayerManagerCreatedEvent;

  /// @brief Field connectedPlayerManagerDestroyedEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* ___connectedPlayerManagerDestroyedEvent;

  /// @brief Field partySizeChangedEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<int32_t>* ___partySizeChangedEvent;

  /// @brief Field partyRefreshingEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___partyRefreshingEvent;

  /// @brief Field partyChangedEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* ___partyChangedEvent;

  /// @brief Field joinRequestedEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* ___joinRequestedEvent;

  /// @brief Field inviteRequestedEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* ___inviteRequestedEvent;

  /// @brief Field _partyMessageHandler, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::PartyMessageHandler* ____partyMessageHandler;

  /// @brief Field _friendPartyMessageHandler, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::PartyMessageHandler* ____friendPartyMessageHandler;

  /// @brief Field _localNetworkPartyMessageHandler, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::PartyMessageHandler* ____localNetworkPartyMessageHandler;

  /// @brief Field _activeNetworkPlayerModelType, offset: 0x78, size: 0x4, def value: None
  ::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType ____activeNetworkPlayerModelType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UnifiedNetworkPlayerModel, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::UnifiedNetworkPlayerModel, ____gameLiftNetworkPlayerModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnifiedNetworkPlayerModel, ____platformNetworkPlayerModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnifiedNetworkPlayerModel, ____localNetworkPlayerModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnifiedNetworkPlayerModel, ___connectedPlayerManagerCreatedEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnifiedNetworkPlayerModel, ___connectedPlayerManagerDestroyedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnifiedNetworkPlayerModel, ___partySizeChangedEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnifiedNetworkPlayerModel, ___partyRefreshingEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnifiedNetworkPlayerModel, ___partyChangedEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnifiedNetworkPlayerModel, ___joinRequestedEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnifiedNetworkPlayerModel, ___inviteRequestedEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnifiedNetworkPlayerModel, ____partyMessageHandler) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnifiedNetworkPlayerModel, ____friendPartyMessageHandler) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnifiedNetworkPlayerModel, ____localNetworkPartyMessageHandler) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnifiedNetworkPlayerModel, ____activeNetworkPlayerModelType) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType, "", "UnifiedNetworkPlayerModel/ActiveNetworkPlayerModelType");
NEED_NO_BOX(::GlobalNamespace::UnifiedNetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnifiedNetworkPlayerModel*, "", "UnifiedNetworkPlayerModel");
NEED_NO_BOX(::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig*, "", "UnifiedNetworkPlayerModel/JoinMatchmakingPartyConfig");
NEED_NO_BOX(::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig*, "", "UnifiedNetworkPlayerModel/StartClientPartyConfig");
NEED_NO_BOX(::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__71);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__71*, "", "UnifiedNetworkPlayerModel/<get_otherPlayers>d__71");
