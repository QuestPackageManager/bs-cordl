#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerLevelCompletionResults)
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
struct __MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason;
}
namespace GlobalNamespace {
struct __MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState;
}
namespace LiteNetLib::Utils {
template <typename T> class INetImmutableSerializable_1;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System {
class IComparable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct __MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason;
}
namespace GlobalNamespace {
struct __MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason);
MARK_VAL_T(::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLevelCompletionResults);
// Type: ::MultiplayerPlayerLevelEndState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12876))
// CS Name: ::MultiplayerLevelCompletionResults::MultiplayerPlayerLevelEndState
struct CORDL_TYPE __MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState_Unwrapped
  enum struct ____MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState_Unwrapped : int32_t {
    __E_SongFinished = static_cast<int32_t>(0x0),
    __E_NotFinished = static_cast<int32_t>(0x1),
    __E_NotStarted = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState_Unwrapped() const noexcept {
    return static_cast<____MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field SongFinished value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState const SongFinished;

  /// @brief Field NotFinished value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState const NotFinished;

  /// @brief Field NotStarted value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState const NotStarted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerPlayerLevelEndReason
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12877))
// CS Name: ::MultiplayerLevelCompletionResults::MultiplayerPlayerLevelEndReason
struct CORDL_TYPE __MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason_Unwrapped
  enum struct ____MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason_Unwrapped : int32_t {
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
  constexpr operator ____MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason_Unwrapped() const noexcept {
    return static_cast<____MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Cleared value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason const Cleared;

  /// @brief Field Failed value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason const Failed;

  /// @brief Field GivenUp value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason const GivenUp;

  /// @brief Field Quit value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason const Quit;

  /// @brief Field HostEndedLevel value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason const HostEndedLevel;

  /// @brief Field WasInactive value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason const WasInactive;

  /// @brief Field StartupFailed value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason const StartupFailed;

  /// @brief Field ConnectedAfterLevelEnded value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason const ConnectedAfterLevelEnded;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerLevelCompletionResults
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(12876)), TypeDefinitionIndex(TypeDefinitionIndex(12877))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12878))
// CS Name: ::MultiplayerLevelCompletionResults*
class CORDL_TYPE MultiplayerLevelCompletionResults : public ::System::Object {
public:
  // Declarations
  using MultiplayerPlayerLevelEndReason = ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason;

  using MultiplayerPlayerLevelEndState = ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState;

  /// @brief Field _playerLevelEndState, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__playerLevelEndState,
                      put = __cordl_internal_set__playerLevelEndState))::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState _playerLevelEndState;

  /// @brief Field _playerLevelEndReason, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__playerLevelEndReason,
                      put = __cordl_internal_set__playerLevelEndReason))::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason _playerLevelEndReason;

  /// @brief Field _levelCompletionResults, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__levelCompletionResults, put = __cordl_internal_set__levelCompletionResults))::GlobalNamespace::LevelCompletionResults* _levelCompletionResults;

  __declspec(property(get = get_playerLevelEndState))::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState playerLevelEndState;

  __declspec(property(get = get_playerLevelEndReason))::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason playerLevelEndReason;

  __declspec(property(get = get_levelCompletionResults))::GlobalNamespace::LevelCompletionResults* levelCompletionResults;

  __declspec(property(get = get_hasAnyResults)) bool hasAnyResults;

  __declspec(property(get = get_failedOrGivenUp)) bool failedOrGivenUp;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>"
  constexpr operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>"
  constexpr ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*
  i___LiteNetLib__Utils__INetImmutableSerializable_1___GlobalNamespace__MultiplayerLevelCompletionResults__() noexcept;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*() noexcept;

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable() noexcept;

  constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState& __cordl_internal_get__playerLevelEndState();

  constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState const& __cordl_internal_get__playerLevelEndState() const;

  constexpr void __cordl_internal_set__playerLevelEndState(::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState value);

  constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason& __cordl_internal_get__playerLevelEndReason();

  constexpr ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason const& __cordl_internal_get__playerLevelEndReason() const;

  constexpr void __cordl_internal_set__playerLevelEndReason(::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason value);

  constexpr ::GlobalNamespace::LevelCompletionResults*& __cordl_internal_get__levelCompletionResults();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelCompletionResults*> const& __cordl_internal_get__levelCompletionResults() const;

  constexpr void __cordl_internal_set__levelCompletionResults(::GlobalNamespace::LevelCompletionResults* value);

  /// @brief Method get_playerLevelEndState, addr 0xe49b00, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState get_playerLevelEndState();

  /// @brief Method get_playerLevelEndReason, addr 0xe49b08, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason get_playerLevelEndReason();

  /// @brief Method get_levelCompletionResults, addr 0xe49b10, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::LevelCompletionResults* get_levelCompletionResults();

  /// @brief Method get_hasAnyResults, addr 0xe49b18, size 0x10, virtual false, abstract: false, final false
  inline bool get_hasAnyResults();

  /// @brief Method get_failedOrGivenUp, addr 0xe49b34, size 0x14, virtual false, abstract: false, final false
  inline bool get_failedOrGivenUp();

  static inline ::GlobalNamespace::MultiplayerLevelCompletionResults* New_ctor();

  /// @brief Method .ctor, addr 0xe49b48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::MultiplayerLevelCompletionResults* New_ctor(::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState playerLevelEndState,
                                                                               ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason playerLevelEndReason,
                                                                               ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  /// @brief Method .ctor, addr 0xe49b50, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState playerLevelEndState,
                    ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason playerLevelEndReason, ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  /// @brief Method Serialize, addr 0xe49b8c, size 0x6c, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method CreateFromSerializedData, addr 0xe49bf8, size 0xac, virtual true, abstract: false, final true
  inline ::GlobalNamespace::MultiplayerLevelCompletionResults* CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method CompareTo, addr 0xe49ca4, size 0xec, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* obj);

  /// @brief Method HasAnyResult, addr 0xe49b28, size 0xc, virtual false, abstract: false, final false
  static inline bool HasAnyResult(::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState playerLevelEndState);

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelCompletionResults", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLevelCompletionResults(MultiplayerLevelCompletionResults&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelCompletionResults", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLevelCompletionResults(MultiplayerLevelCompletionResults const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLevelCompletionResults();

public:
  /// @brief Field _playerLevelEndState, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState ____playerLevelEndState;

  /// @brief Field _playerLevelEndReason, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason ____playerLevelEndReason;

  /// @brief Field _levelCompletionResults, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::LevelCompletionResults* ____levelCompletionResults;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLevelCompletionResults, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelCompletionResults, ____playerLevelEndState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelCompletionResults, ____playerLevelEndReason) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelCompletionResults, ____levelCompletionResults) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndReason, "", "MultiplayerLevelCompletionResults/MultiplayerPlayerLevelEndReason");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerLevelCompletionResults__MultiplayerPlayerLevelEndState, "", "MultiplayerLevelCompletionResults/MultiplayerPlayerLevelEndState");
NEED_NO_BOX(::GlobalNamespace::MultiplayerLevelCompletionResults);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLevelCompletionResults*, "", "MultiplayerLevelCompletionResults");
