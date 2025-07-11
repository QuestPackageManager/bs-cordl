#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLevelCompletionResults.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerLevelCompletionResults)
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
struct MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason;
}
namespace GlobalNamespace {
struct MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState;
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
struct MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason;
}
namespace GlobalNamespace {
struct MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason);
MARK_VAL_T(::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLevelCompletionResults);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: MultiplayerLevelCompletionResults/MultiplayerPlayerLevelEndState
struct CORDL_TYPE MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState_Unwrapped
  enum struct __MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState_Unwrapped : int32_t {
    __E_SongFinished = static_cast<int32_t>(0x0),
    __E_NotFinished = static_cast<int32_t>(0x1),
    __E_NotStarted = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState_Unwrapped() const noexcept {
    return static_cast<__MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState(int32_t value__) noexcept;

  /// @brief Field NotFinished value: I32(1)
  static ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState const NotFinished;

  /// @brief Field NotStarted value: I32(2)
  static ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState const NotStarted;

  /// @brief Field SongFinished value: I32(0)
  static ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState const SongFinished;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14883 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: MultiplayerLevelCompletionResults/MultiplayerPlayerLevelEndReason
struct CORDL_TYPE MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason_Unwrapped
  enum struct __MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason_Unwrapped : int32_t {
    __E_Cleared = static_cast<int32_t>(0x0),
    __E_Failed = static_cast<int32_t>(0x1),
    __E_GivenUp = static_cast<int32_t>(0x2),
    __E_Quit = static_cast<int32_t>(0x3),
    __E_HostEndedLevel = static_cast<int32_t>(0x4),
    __E_WasInactive = static_cast<int32_t>(0x5),
    __E_StartupFailed = static_cast<int32_t>(0x6),
    __E_ConnectedAfterLevelEnded = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason_Unwrapped() const noexcept {
    return static_cast<__MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason(int32_t value__) noexcept;

  /// @brief Field Cleared value: I32(0)
  static ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason const Cleared;

  /// @brief Field ConnectedAfterLevelEnded value: I32(7)
  static ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason const ConnectedAfterLevelEnded;

  /// @brief Field Failed value: I32(1)
  static ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason const Failed;

  /// @brief Field GivenUp value: I32(2)
  static ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason const GivenUp;

  /// @brief Field HostEndedLevel value: I32(4)
  static ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason const HostEndedLevel;

  /// @brief Field Quit value: I32(3)
  static ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason const Quit;

  /// @brief Field StartupFailed value: I32(6)
  static ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason const StartupFailed;

  /// @brief Field WasInactive value: I32(5)
  static ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason const WasInactive;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14884 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies LiteNetLib.Utils.INetImmutableSerializable`1<T>, MultiplayerLevelCompletionResults::MultiplayerPlayerLevelEndReason, MultiplayerLevelCompletionResults::MultiplayerPlayerLevelEndState,
// System.IComparable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLevelCompletionResults
class CORDL_TYPE MultiplayerLevelCompletionResults : public ::System::Object {
public:
  // Declarations
  using MultiplayerPlayerLevelEndReason = ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason;

  using MultiplayerPlayerLevelEndState = ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState;

  /// @brief Field _levelCompletionResults, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__levelCompletionResults, put = __cordl_internal_set__levelCompletionResults)) ::GlobalNamespace::LevelCompletionResults* _levelCompletionResults;

  /// @brief Field _playerLevelEndReason, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__playerLevelEndReason,
                      put = __cordl_internal_set__playerLevelEndReason)) ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason _playerLevelEndReason;

  /// @brief Field _playerLevelEndState, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__playerLevelEndState,
                      put = __cordl_internal_set__playerLevelEndState)) ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState _playerLevelEndState;

  __declspec(property(get = get_failedOrGivenUp)) bool failedOrGivenUp;

  __declspec(property(get = get_hasAnyResults)) bool hasAnyResults;

  __declspec(property(get = get_levelCompletionResults)) ::GlobalNamespace::LevelCompletionResults* levelCompletionResults;

  __declspec(property(get = get_playerLevelEndReason)) ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason playerLevelEndReason;

  __declspec(property(get = get_playerLevelEndState)) ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState playerLevelEndState;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>"
  constexpr operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*() noexcept;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*() noexcept;

  /// @brief Method CompareTo, addr 0x22d9f48, size 0xe8, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* obj);

  /// @brief Method CreateFromSerializedData, addr 0x22d9ea4, size 0xa4, virtual true, abstract: false, final true
  inline ::GlobalNamespace::MultiplayerLevelCompletionResults* CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method HasAnyResult, addr 0x22d9dd4, size 0xc, virtual false, abstract: false, final false
  static inline bool HasAnyResult(::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState playerLevelEndState);

  static inline ::GlobalNamespace::MultiplayerLevelCompletionResults* New_ctor();

  static inline ::GlobalNamespace::MultiplayerLevelCompletionResults* New_ctor(::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState playerLevelEndState,
                                                                               ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason playerLevelEndReason,
                                                                               ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  /// @brief Method Serialize, addr 0x22d9e38, size 0x6c, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr ::GlobalNamespace::LevelCompletionResults* const& __cordl_internal_get__levelCompletionResults() const;

  constexpr ::GlobalNamespace::LevelCompletionResults*& __cordl_internal_get__levelCompletionResults();

  constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason const& __cordl_internal_get__playerLevelEndReason() const;

  constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason& __cordl_internal_get__playerLevelEndReason();

  constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState const& __cordl_internal_get__playerLevelEndState() const;

  constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState& __cordl_internal_get__playerLevelEndState();

  constexpr void __cordl_internal_set__levelCompletionResults(::GlobalNamespace::LevelCompletionResults* value);

  constexpr void __cordl_internal_set__playerLevelEndReason(::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason value);

  constexpr void __cordl_internal_set__playerLevelEndState(::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState value);

  /// @brief Method .ctor, addr 0x22d9df4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x22d9dfc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState playerLevelEndState,
                    ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason playerLevelEndReason, ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  /// @brief Method get_failedOrGivenUp, addr 0x22d9de0, size 0x14, virtual false, abstract: false, final false
  inline bool get_failedOrGivenUp();

  /// @brief Method get_hasAnyResults, addr 0x22d9dc4, size 0x10, virtual false, abstract: false, final false
  inline bool get_hasAnyResults();

  /// @brief Method get_levelCompletionResults, addr 0x22d9dbc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::LevelCompletionResults* get_levelCompletionResults();

  /// @brief Method get_playerLevelEndReason, addr 0x22d9db4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason get_playerLevelEndReason();

  /// @brief Method get_playerLevelEndState, addr 0x22d9dac, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState get_playerLevelEndState();

  /// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>"
  constexpr ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*
  i___LiteNetLib__Utils__INetImmutableSerializable_1___GlobalNamespace__MultiplayerLevelCompletionResults__() noexcept;

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLevelCompletionResults();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelCompletionResults", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLevelCompletionResults(MultiplayerLevelCompletionResults&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelCompletionResults", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLevelCompletionResults(MultiplayerLevelCompletionResults const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14885 };

  /// @brief Field _playerLevelEndState, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState ____playerLevelEndState;

  /// @brief Field _playerLevelEndReason, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason ____playerLevelEndReason;

  /// @brief Field _levelCompletionResults, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::LevelCompletionResults* ____levelCompletionResults;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLevelCompletionResults, ____playerLevelEndState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelCompletionResults, ____playerLevelEndReason) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelCompletionResults, ____levelCompletionResults) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLevelCompletionResults, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason, "", "MultiplayerLevelCompletionResults/MultiplayerPlayerLevelEndReason");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState, "", "MultiplayerLevelCompletionResults/MultiplayerPlayerLevelEndState");
NEED_NO_BOX(::GlobalNamespace::MultiplayerLevelCompletionResults);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLevelCompletionResults*, "", "MultiplayerLevelCompletionResults");
