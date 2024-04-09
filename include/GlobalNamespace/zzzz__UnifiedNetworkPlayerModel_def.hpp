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
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
class ConnectedPlayerManager;
}
namespace GlobalNamespace {
class GameLiftNetworkPlayerModel;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
template <typename T> class INetworkPlayerModelPartyConfig_1;
}
namespace GlobalNamespace {
class INetworkPlayerModel;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace GlobalNamespace {
class IUnifiedNetworkPlayerModel;
}
namespace GlobalNamespace {
class PartyMessageHandler;
}
namespace GlobalNamespace {
class PlatformNetworkPlayerModel;
}
namespace GlobalNamespace {
struct __UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType;
}
namespace GlobalNamespace {
class __UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig;
}
namespace GlobalNamespace {
class __UnifiedNetworkPlayerModel__StartClientPartyConfig;
}
namespace GlobalNamespace {
class __UnifiedNetworkPlayerModel___get_otherPlayers_d__64;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Zenject {
class IInitializable;
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
class __UnifiedNetworkPlayerModel___get_otherPlayers_d__64;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType);
MARK_REF_PTR_T(::GlobalNamespace::UnifiedNetworkPlayerModel);
MARK_REF_PTR_T(::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig);
MARK_REF_PTR_T(::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig);
MARK_REF_PTR_T(::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64);
// Type: ::ActiveNetworkPlayerModelType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::UnifiedNetworkPlayerModel::ActiveNetworkPlayerModelType
struct CORDL_TYPE __UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType_Unwrapped
  enum struct ____UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType_Unwrapped : int32_t {
    __E_GameLift = static_cast<int32_t>(0x0),
    __E_Platform = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType_Unwrapped() const noexcept {
    return static_cast<____UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field GameLift value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType const GameLift;

  /// @brief Field Platform value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType const Platform;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::JoinMatchmakingPartyConfig
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnifiedNetworkPlayerModel::JoinMatchmakingPartyConfig*
class CORDL_TYPE __UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig : public ::System::Object {
public:
  // Declarations
  /// @brief Field code, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_code, put = __cordl_internal_set_code))::StringW code;

  /// @brief Field configuration, offset 0x38, size 0x18
  __declspec(property(get = __cordl_internal_get_configuration, put = __cordl_internal_set_configuration))::GlobalNamespace::GameplayServerConfiguration configuration;

  /// @brief Field secret, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_secret, put = __cordl_internal_set_secret))::StringW secret;

  /// @brief Field selectionMask, offset 0x10, size 0x28
  __declspec(property(get = __cordl_internal_get_selectionMask, put = __cordl_internal_set_selectionMask))::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  /// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>"
  constexpr operator ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>*() noexcept;

  static inline ::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_code() const;

  constexpr ::StringW& __cordl_internal_get_code();

  constexpr ::GlobalNamespace::GameplayServerConfiguration const& __cordl_internal_get_configuration() const;

  constexpr ::GlobalNamespace::GameplayServerConfiguration& __cordl_internal_get_configuration();

  constexpr ::StringW const& __cordl_internal_get_secret() const;

  constexpr ::StringW& __cordl_internal_get_secret();

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __cordl_internal_get_selectionMask() const;

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __cordl_internal_get_selectionMask();

  constexpr void __cordl_internal_set_code(::StringW value);

  constexpr void __cordl_internal_set_configuration(::GlobalNamespace::GameplayServerConfiguration value);

  constexpr void __cordl_internal_set_secret(::StringW value);

  constexpr void __cordl_internal_set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value);

  /// @brief Method .ctor, addr 0x28bd4c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>"
  constexpr ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>*
  i___GlobalNamespace__INetworkPlayerModelPartyConfig_1___GlobalNamespace__UnifiedNetworkPlayerModel__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig(__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig(__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig const&) = delete;

  /// @brief Field selectionMask, offset: 0x10, size: 0x28, def value: None
  ::GlobalNamespace::BeatmapLevelSelectionMask ___selectionMask;

  /// @brief Field configuration, offset: 0x38, size: 0x18, def value: None
  ::GlobalNamespace::GameplayServerConfiguration ___configuration;

  /// @brief Field secret, offset: 0x50, size: 0x8, def value: None
  ::StringW ___secret;

  /// @brief Field code, offset: 0x58, size: 0x8, def value: None
  ::StringW ___code;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig, ___selectionMask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig, ___configuration) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig, ___secret) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig, ___code) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::StartClientPartyConfig
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnifiedNetworkPlayerModel::StartClientPartyConfig*
class CORDL_TYPE __UnifiedNetworkPlayerModel__StartClientPartyConfig : public ::System::Object {
public:
  // Declarations
  /// @brief Field configuration, offset 0x38, size 0x18
  __declspec(property(get = __cordl_internal_get_configuration, put = __cordl_internal_set_configuration))::GlobalNamespace::GameplayServerConfiguration configuration;

  /// @brief Field selectionMask, offset 0x10, size 0x28
  __declspec(property(get = __cordl_internal_get_selectionMask, put = __cordl_internal_set_selectionMask))::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  /// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>"
  constexpr operator ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>*() noexcept;

  static inline ::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig* New_ctor();

  constexpr ::GlobalNamespace::GameplayServerConfiguration const& __cordl_internal_get_configuration() const;

  constexpr ::GlobalNamespace::GameplayServerConfiguration& __cordl_internal_get_configuration();

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __cordl_internal_get_selectionMask() const;

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __cordl_internal_get_selectionMask();

  constexpr void __cordl_internal_set_configuration(::GlobalNamespace::GameplayServerConfiguration value);

  constexpr void __cordl_internal_set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value);

  /// @brief Method .ctor, addr 0x28bd25c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>"
  constexpr ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>*
  i___GlobalNamespace__INetworkPlayerModelPartyConfig_1___GlobalNamespace__UnifiedNetworkPlayerModel__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnifiedNetworkPlayerModel__StartClientPartyConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnifiedNetworkPlayerModel__StartClientPartyConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnifiedNetworkPlayerModel__StartClientPartyConfig(__UnifiedNetworkPlayerModel__StartClientPartyConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnifiedNetworkPlayerModel__StartClientPartyConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnifiedNetworkPlayerModel__StartClientPartyConfig(__UnifiedNetworkPlayerModel__StartClientPartyConfig const&) = delete;

  /// @brief Field selectionMask, offset: 0x10, size: 0x28, def value: None
  ::GlobalNamespace::BeatmapLevelSelectionMask ___selectionMask;

  /// @brief Field configuration, offset: 0x38, size: 0x18, def value: None
  ::GlobalNamespace::GameplayServerConfiguration ___configuration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig, ___selectionMask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig, ___configuration) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<get_otherPlayers>d__64
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnifiedNetworkPlayerModel::<get_otherPlayers>d__64*
class CORDL_TYPE __UnifiedNetworkPlayerModel___get_otherPlayers_d__64 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current))::GlobalNamespace::INetworkPlayer* System_Collections_Generic_IEnumerator_INetworkPlayer__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::GlobalNamespace::INetworkPlayer* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::GlobalNamespace::UnifiedNetworkPlayerModel* __4__this;

  /// @brief Field <>7__wrap1, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1))::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x28bd9b4, size 0x50c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator, addr 0x28be070, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current, addr 0x28be020, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::INetworkPlayer* System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x28be114, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x28be028, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x28be068, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x28bd980, size 0x34, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::GlobalNamespace::INetworkPlayer*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkPlayer*> const& __cordl_internal_get___2__current() const;

  constexpr ::GlobalNamespace::UnifiedNetworkPlayerModel*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::UnifiedNetworkPlayerModel*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*& __cordl_internal_get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::GlobalNamespace::INetworkPlayer* value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::UnifiedNetworkPlayerModel* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  /// @brief Method <>m__Finally1, addr 0x28bdec0, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x28bdf70, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method .ctor, addr 0x28bd0d8, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__INetworkPlayer__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__INetworkPlayer__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnifiedNetworkPlayerModel___get_otherPlayers_d__64();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnifiedNetworkPlayerModel___get_otherPlayers_d__64", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnifiedNetworkPlayerModel___get_otherPlayers_d__64(__UnifiedNetworkPlayerModel___get_otherPlayers_d__64&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnifiedNetworkPlayerModel___get_otherPlayers_d__64", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnifiedNetworkPlayerModel___get_otherPlayers_d__64(__UnifiedNetworkPlayerModel___get_otherPlayers_d__64 const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64, _____7__wrap1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::UnifiedNetworkPlayerModel
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 108, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnifiedNetworkPlayerModel*
class CORDL_TYPE UnifiedNetworkPlayerModel : public ::System::Object {
public:
  // Declarations
  using ActiveNetworkPlayerModelType = ::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType;

  using JoinMatchmakingPartyConfig = ::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig;

  using StartClientPartyConfig = ::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig;

  using _get_otherPlayers_d__64 = ::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64;

  /// @brief Field _activeNetworkPlayerModelType, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__activeNetworkPlayerModelType,
                      put = __cordl_internal_set__activeNetworkPlayerModelType))::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType _activeNetworkPlayerModelType;

  /// @brief Field _friendPartyMessageHandler, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__friendPartyMessageHandler, put = __cordl_internal_set__friendPartyMessageHandler))::GlobalNamespace::PartyMessageHandler* _friendPartyMessageHandler;

  /// @brief Field _gameLiftNetworkPlayerModel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__gameLiftNetworkPlayerModel,
                      put = __cordl_internal_set__gameLiftNetworkPlayerModel))::UnityW<::GlobalNamespace::GameLiftNetworkPlayerModel> _gameLiftNetworkPlayerModel;

  /// @brief Field _partyMessageHandler, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__partyMessageHandler, put = __cordl_internal_set__partyMessageHandler))::GlobalNamespace::PartyMessageHandler* _partyMessageHandler;

  /// @brief Field _platformNetworkPlayerModel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__platformNetworkPlayerModel,
                      put = __cordl_internal_set__platformNetworkPlayerModel))::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel> _platformNetworkPlayerModel;

  __declspec(property(get = get_activeNetworkPlayerModel))::GlobalNamespace::INetworkPlayerModel* activeNetworkPlayerModel;

  __declspec(property(get = get_activeNetworkPlayerModelType))::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType activeNetworkPlayerModelType;

  __declspec(property(get = get_code))::StringW code;

  __declspec(property(get = get_configuration))::GlobalNamespace::GameplayServerConfiguration configuration;

  __declspec(property(get = get_connectedPlayerManager))::GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager;

  /// @brief Field connectedPlayerManagerCreatedEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_connectedPlayerManagerCreatedEvent,
                      put = __cordl_internal_set_connectedPlayerManagerCreatedEvent))::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* connectedPlayerManagerCreatedEvent;

  /// @brief Field connectedPlayerManagerDestroyedEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_connectedPlayerManagerDestroyedEvent,
                      put = __cordl_internal_set_connectedPlayerManagerDestroyedEvent))::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* connectedPlayerManagerDestroyedEvent;

  __declspec(property(get = get_currentPartySize)) int32_t currentPartySize;

  __declspec(property(get = get_discoveryEnabled, put = set_discoveryEnabled)) bool discoveryEnabled;

  __declspec(property(get = get_enableFriends, put = set_enableFriends)) bool enableFriends;

  __declspec(property(get = get_friends))::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* friends;

  __declspec(property(get = get_hasNetworkingFailed)) bool hasNetworkingFailed;

  /// @brief Field inviteRequestedEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_inviteRequestedEvent, put = __cordl_internal_set_inviteRequestedEvent))::System::Action_1<::GlobalNamespace::INetworkPlayer*>* inviteRequestedEvent;

  /// @brief Field joinRequestedEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_joinRequestedEvent, put = __cordl_internal_set_joinRequestedEvent))::System::Action_1<::GlobalNamespace::INetworkPlayer*>* joinRequestedEvent;

  __declspec(property(get = get_localPlayerIsPartyOwner)) bool localPlayerIsPartyOwner;

  __declspec(property(get = get_otherPlayers))::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* otherPlayers;

  /// @brief Field partyChangedEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_partyChangedEvent, put = __cordl_internal_set_partyChangedEvent))::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* partyChangedEvent;

  __declspec(property(get = get_partyPlayers))::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* partyPlayers;

  /// @brief Field partyRefreshingEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_partyRefreshingEvent, put = __cordl_internal_set_partyRefreshingEvent))::System::Action* partyRefreshingEvent;

  /// @brief Field partySizeChangedEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_partySizeChangedEvent, put = __cordl_internal_set_partySizeChangedEvent))::System::Action_1<int32_t>* partySizeChangedEvent;

  __declspec(property(get = get_publicServers))::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* publicServers;

  __declspec(property(get = get_secret))::StringW secret;

  __declspec(property(get = get_selectionMask))::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  /// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModel"
  constexpr operator ::GlobalNamespace::INetworkPlayerModel*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IUnifiedNetworkPlayerModel"
  constexpr operator ::GlobalNamespace::IUnifiedNetworkPlayerModel*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method CreatePartyConnection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline bool CreatePartyConnection(::GlobalNamespace::INetworkPlayerModelPartyConfig_1<T>* partyConfig);

  /// @brief Method DestroyPartyConnection, addr 0x28bd87c, size 0xc0, virtual true, abstract: false, final true
  inline void DestroyPartyConnection();

  /// @brief Method Dispose, addr 0x28bcb54, size 0x44c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method HandleConnectedPlayerManagerCreated, addr 0x28bd4d0, size 0x2bc, virtual false, abstract: false, final false
  inline void HandleConnectedPlayerManagerCreated(::GlobalNamespace::INetworkPlayerModel* networkPlayerModel);

  /// @brief Method HandleConnectedPlayerManagerDestroyed, addr 0x28bd78c, size 0xa0, virtual false, abstract: false, final false
  inline void HandleConnectedPlayerManagerDestroyed(::GlobalNamespace::INetworkPlayerModel* networkPlayerModel);

  /// @brief Method HandleFriendConnectToMasterServer, addr 0x28bd3d8, size 0xf0, virtual false, abstract: false, final false
  inline void HandleFriendConnectToMasterServer(::StringW secret);

  /// @brief Method HandleFriendConnected, addr 0x28bd374, size 0x64, virtual false, abstract: false, final false
  inline void HandleFriendConnected(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method HandleInviteRequested, addr 0x28bd2cc, size 0x1c, virtual false, abstract: false, final false
  inline void HandleInviteRequested(::GlobalNamespace::INetworkPlayer* player);

  /// @brief Method HandleJoinRequested, addr 0x28bd2e8, size 0x1c, virtual false, abstract: false, final false
  inline void HandleJoinRequested(::GlobalNamespace::INetworkPlayer* player);

  /// @brief Method HandlePartyChanged, addr 0x28bd304, size 0x20, virtual false, abstract: false, final false
  inline void HandlePartyChanged(::GlobalNamespace::INetworkPlayerModel* playerModel);

  /// @brief Method HandlePartyRefreshing, addr 0x28bd358, size 0x1c, virtual false, abstract: false, final false
  inline void HandlePartyRefreshing();

  /// @brief Method HandlePartySizeChanged, addr 0x28bd324, size 0x34, virtual false, abstract: false, final false
  inline void HandlePartySizeChanged(int32_t size);

  /// @brief Method HandlePlayersChanged, addr 0x28bd264, size 0x68, virtual false, abstract: false, final false
  inline void HandlePlayersChanged();

  /// @brief Method Initialize, addr 0x28bc708, size 0x44c, virtual true, abstract: false, final true
  inline void Initialize();

  static inline ::GlobalNamespace::UnifiedNetworkPlayerModel* New_ctor();

  /// @brief Method RefreshAlternateDiscoveryModels, addr 0x28bc460, size 0x2a8, virtual false, abstract: false, final false
  inline void RefreshAlternateDiscoveryModels();

  /// @brief Method ResetMasterServerReachability, addr 0x28bd82c, size 0x50, virtual true, abstract: false, final true
  inline void ResetMasterServerReachability();

  /// @brief Method SetActiveNetworkPlayerModelType, addr 0x28bd93c, size 0x3c, virtual true, abstract: false, final true
  inline void SetActiveNetworkPlayerModelType(::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType activeNetworkPlayerModelType);

  /// @brief Method SetServerFilter, addr 0x28bd10c, size 0x150, virtual true, abstract: false, final true
  inline void SetServerFilter(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration);

  constexpr ::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType const& __cordl_internal_get__activeNetworkPlayerModelType() const;

  constexpr ::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType& __cordl_internal_get__activeNetworkPlayerModelType();

  constexpr ::GlobalNamespace::PartyMessageHandler*& __cordl_internal_get__friendPartyMessageHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PartyMessageHandler*> const& __cordl_internal_get__friendPartyMessageHandler() const;

  constexpr ::UnityW<::GlobalNamespace::GameLiftNetworkPlayerModel> const& __cordl_internal_get__gameLiftNetworkPlayerModel() const;

  constexpr ::UnityW<::GlobalNamespace::GameLiftNetworkPlayerModel>& __cordl_internal_get__gameLiftNetworkPlayerModel();

  constexpr ::GlobalNamespace::PartyMessageHandler*& __cordl_internal_get__partyMessageHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PartyMessageHandler*> const& __cordl_internal_get__partyMessageHandler() const;

  constexpr ::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel> const& __cordl_internal_get__platformNetworkPlayerModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel>& __cordl_internal_get__platformNetworkPlayerModel();

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*& __cordl_internal_get_connectedPlayerManagerCreatedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*> const& __cordl_internal_get_connectedPlayerManagerCreatedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*& __cordl_internal_get_connectedPlayerManagerDestroyedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*> const& __cordl_internal_get_connectedPlayerManagerDestroyedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>*& __cordl_internal_get_inviteRequestedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*> const& __cordl_internal_get_inviteRequestedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>*& __cordl_internal_get_joinRequestedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*> const& __cordl_internal_get_joinRequestedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*& __cordl_internal_get_partyChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*> const& __cordl_internal_get_partyChangedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_partyRefreshingEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_partyRefreshingEvent() const;

  constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_partySizeChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& __cordl_internal_get_partySizeChangedEvent() const;

  constexpr void __cordl_internal_set__activeNetworkPlayerModelType(::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType value);

  constexpr void __cordl_internal_set__friendPartyMessageHandler(::GlobalNamespace::PartyMessageHandler* value);

  constexpr void __cordl_internal_set__gameLiftNetworkPlayerModel(::UnityW<::GlobalNamespace::GameLiftNetworkPlayerModel> value);

  constexpr void __cordl_internal_set__partyMessageHandler(::GlobalNamespace::PartyMessageHandler* value);

  constexpr void __cordl_internal_set__platformNetworkPlayerModel(::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel> value);

  constexpr void __cordl_internal_set_connectedPlayerManagerCreatedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  constexpr void __cordl_internal_set_connectedPlayerManagerDestroyedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  constexpr void __cordl_internal_set_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  constexpr void __cordl_internal_set_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  constexpr void __cordl_internal_set_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  constexpr void __cordl_internal_set_partyRefreshingEvent(::System::Action* value);

  constexpr void __cordl_internal_set_partySizeChangedEvent(::System::Action_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x28bd978, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_connectedPlayerManagerCreatedEvent, addr 0x28bb340, size 0xb0, virtual true, abstract: false, final true
  inline void add_connectedPlayerManagerCreatedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method add_connectedPlayerManagerDestroyedEvent, addr 0x28bb4a0, size 0xb0, virtual true, abstract: false, final true
  inline void add_connectedPlayerManagerDestroyedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method add_inviteRequestedEvent, addr 0x28bbb58, size 0xb0, virtual true, abstract: false, final true
  inline void add_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method add_joinRequestedEvent, addr 0x28bb9f8, size 0xb0, virtual true, abstract: false, final true
  inline void add_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method add_partyChangedEvent, addr 0x28bb898, size 0xb0, virtual true, abstract: false, final true
  inline void add_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method add_partyRefreshingEvent, addr 0x28bb760, size 0x9c, virtual true, abstract: false, final true
  inline void add_partyRefreshingEvent(::System::Action* value);

  /// @brief Method add_partySizeChangedEvent, addr 0x28bb600, size 0xb0, virtual true, abstract: false, final true
  inline void add_partySizeChangedEvent(::System::Action_1<int32_t>* value);

  /// @brief Method get_activeNetworkPlayerModel, addr 0x28bbcb8, size 0x2c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::INetworkPlayerModel* get_activeNetworkPlayerModel();

  /// @brief Method get_activeNetworkPlayerModelType, addr 0x28bbce4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType get_activeNetworkPlayerModelType();

  /// @brief Method get_code, addr 0x28bc134, size 0x24, virtual true, abstract: false, final true
  inline ::StringW get_code();

  /// @brief Method get_configuration, addr 0x28bc02c, size 0xe4, virtual true, abstract: false, final true
  inline ::GlobalNamespace::GameplayServerConfiguration get_configuration();

  /// @brief Method get_connectedPlayerManager, addr 0x28bc158, size 0xc0, virtual true, abstract: false, final true
  inline ::GlobalNamespace::ConnectedPlayerManager* get_connectedPlayerManager();

  /// @brief Method get_currentPartySize, addr 0x28bbe84, size 0xc0, virtual true, abstract: false, final true
  inline int32_t get_currentPartySize();

  /// @brief Method get_discoveryEnabled, addr 0x28bc284, size 0xbc, virtual true, abstract: false, final true
  inline bool get_discoveryEnabled();

  /// @brief Method get_enableFriends, addr 0x28bc408, size 0x24, virtual false, abstract: false, final false
  inline bool get_enableFriends();

  /// @brief Method get_friends, addr 0x28bc260, size 0x24, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* get_friends();

  /// @brief Method get_hasNetworkingFailed, addr 0x28bbdb8, size 0xcc, virtual true, abstract: false, final true
  inline bool get_hasNetworkingFailed();

  /// @brief Method get_localPlayerIsPartyOwner, addr 0x28bbcec, size 0xcc, virtual true, abstract: false, final true
  inline bool get_localPlayerIsPartyOwner();

  /// @brief Method get_otherPlayers, addr 0x28bd060, size 0x78, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* get_otherPlayers();

  /// @brief Method get_partyPlayers, addr 0x28bcfa0, size 0xc0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* get_partyPlayers();

  /// @brief Method get_publicServers, addr 0x28bc218, size 0x48, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* get_publicServers();

  /// @brief Method get_secret, addr 0x28bc110, size 0x24, virtual true, abstract: false, final true
  inline ::StringW get_secret();

  /// @brief Method get_selectionMask, addr 0x28bbf44, size 0xe8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask();

  /// @brief Convert to "::GlobalNamespace::INetworkPlayerModel"
  constexpr ::GlobalNamespace::INetworkPlayerModel* i___GlobalNamespace__INetworkPlayerModel() noexcept;

  /// @brief Convert to "::GlobalNamespace::IUnifiedNetworkPlayerModel"
  constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel* i___GlobalNamespace__IUnifiedNetworkPlayerModel() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

  /// @brief Method remove_connectedPlayerManagerCreatedEvent, addr 0x28bb3f0, size 0xb0, virtual true, abstract: false, final true
  inline void remove_connectedPlayerManagerCreatedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method remove_connectedPlayerManagerDestroyedEvent, addr 0x28bb550, size 0xb0, virtual true, abstract: false, final true
  inline void remove_connectedPlayerManagerDestroyedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method remove_inviteRequestedEvent, addr 0x28bbc08, size 0xb0, virtual true, abstract: false, final true
  inline void remove_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method remove_joinRequestedEvent, addr 0x28bbaa8, size 0xb0, virtual true, abstract: false, final true
  inline void remove_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method remove_partyChangedEvent, addr 0x28bb948, size 0xb0, virtual true, abstract: false, final true
  inline void remove_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method remove_partyRefreshingEvent, addr 0x28bb7fc, size 0x9c, virtual true, abstract: false, final true
  inline void remove_partyRefreshingEvent(::System::Action* value);

  /// @brief Method remove_partySizeChangedEvent, addr 0x28bb6b0, size 0xb0, virtual true, abstract: false, final true
  inline void remove_partySizeChangedEvent(::System::Action_1<int32_t>* value);

  /// @brief Method set_discoveryEnabled, addr 0x28bc340, size 0xc8, virtual true, abstract: false, final true
  inline void set_discoveryEnabled(bool value);

  /// @brief Method set_enableFriends, addr 0x28bc42c, size 0x34, virtual false, abstract: false, final false
  inline void set_enableFriends(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnifiedNetworkPlayerModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnifiedNetworkPlayerModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnifiedNetworkPlayerModel(UnifiedNetworkPlayerModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnifiedNetworkPlayerModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnifiedNetworkPlayerModel(UnifiedNetworkPlayerModel const&) = delete;

  /// @brief Field _gameLiftNetworkPlayerModel, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameLiftNetworkPlayerModel> ____gameLiftNetworkPlayerModel;

  /// @brief Field _platformNetworkPlayerModel, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel> ____platformNetworkPlayerModel;

  /// @brief Field connectedPlayerManagerCreatedEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* ___connectedPlayerManagerCreatedEvent;

  /// @brief Field connectedPlayerManagerDestroyedEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* ___connectedPlayerManagerDestroyedEvent;

  /// @brief Field partySizeChangedEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<int32_t>* ___partySizeChangedEvent;

  /// @brief Field partyRefreshingEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___partyRefreshingEvent;

  /// @brief Field partyChangedEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* ___partyChangedEvent;

  /// @brief Field joinRequestedEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* ___joinRequestedEvent;

  /// @brief Field inviteRequestedEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* ___inviteRequestedEvent;

  /// @brief Field _partyMessageHandler, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::PartyMessageHandler* ____partyMessageHandler;

  /// @brief Field _friendPartyMessageHandler, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::PartyMessageHandler* ____friendPartyMessageHandler;

  /// @brief Field _activeNetworkPlayerModelType, offset: 0x68, size: 0x4, def value: None
  ::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType ____activeNetworkPlayerModelType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UnifiedNetworkPlayerModel, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::UnifiedNetworkPlayerModel, ____gameLiftNetworkPlayerModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnifiedNetworkPlayerModel, ____platformNetworkPlayerModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnifiedNetworkPlayerModel, ___connectedPlayerManagerCreatedEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnifiedNetworkPlayerModel, ___connectedPlayerManagerDestroyedEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnifiedNetworkPlayerModel, ___partySizeChangedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnifiedNetworkPlayerModel, ___partyRefreshingEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnifiedNetworkPlayerModel, ___partyChangedEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnifiedNetworkPlayerModel, ___joinRequestedEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnifiedNetworkPlayerModel, ___inviteRequestedEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnifiedNetworkPlayerModel, ____partyMessageHandler) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnifiedNetworkPlayerModel, ____friendPartyMessageHandler) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnifiedNetworkPlayerModel, ____activeNetworkPlayerModelType) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType, "", "UnifiedNetworkPlayerModel/ActiveNetworkPlayerModelType");
NEED_NO_BOX(::GlobalNamespace::UnifiedNetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnifiedNetworkPlayerModel*, "", "UnifiedNetworkPlayerModel");
NEED_NO_BOX(::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnifiedNetworkPlayerModel__JoinMatchmakingPartyConfig*, "", "UnifiedNetworkPlayerModel/JoinMatchmakingPartyConfig");
NEED_NO_BOX(::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnifiedNetworkPlayerModel__StartClientPartyConfig*, "", "UnifiedNetworkPlayerModel/StartClientPartyConfig");
NEED_NO_BOX(::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnifiedNetworkPlayerModel___get_otherPlayers_d__64*, "", "UnifiedNetworkPlayerModel/<get_otherPlayers>d__64");
