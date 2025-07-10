#pragma once
// IWYU pragma private; include "GlobalNamespace/StandardScoreSyncState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IEquatableByReference_1_def.hpp"
#include "GlobalNamespace/zzzz__IStateTable_3_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StandardScoreSyncState)
namespace GlobalNamespace {
struct StandardScoreSyncState_Score;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
struct StandardScoreSyncState_Score;
}
namespace GlobalNamespace {
struct StandardScoreSyncState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StandardScoreSyncState_Score);
MARK_VAL_T(::GlobalNamespace::StandardScoreSyncState);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: StandardScoreSyncState/Score
struct CORDL_TYPE StandardScoreSyncState_Score {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StandardScoreSyncState_Score_Unwrapped
  enum struct __StandardScoreSyncState_Score_Unwrapped : int32_t {
    __E_ModifiedScore = static_cast<int32_t>(0x0),
    __E_MultipliedScore = static_cast<int32_t>(0x1),
    __E_ImmediateMaxPossibleMultipliedScore = static_cast<int32_t>(0x2),
    __E_Combo = static_cast<int32_t>(0x3),
    __E_Multiplier = static_cast<int32_t>(0x4),
    __E_Count = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StandardScoreSyncState_Score_Unwrapped() const noexcept {
    return static_cast<__StandardScoreSyncState_Score_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardScoreSyncState_Score();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StandardScoreSyncState_Score(int32_t value__) noexcept;

  /// @brief Field Combo value: I32(3)
  static ::GlobalNamespace::StandardScoreSyncState_Score const Combo;

  /// @brief Field Count value: I32(5)
  static ::GlobalNamespace::StandardScoreSyncState_Score const Count;

  /// @brief Field ImmediateMaxPossibleMultipliedScore value: I32(2)
  static ::GlobalNamespace::StandardScoreSyncState_Score const ImmediateMaxPossibleMultipliedScore;

  /// @brief Field ModifiedScore value: I32(0)
  static ::GlobalNamespace::StandardScoreSyncState_Score const ModifiedScore;

  /// @brief Field MultipliedScore value: I32(1)
  static ::GlobalNamespace::StandardScoreSyncState_Score const MultipliedScore;

  /// @brief Field Multiplier value: I32(4)
  static ::GlobalNamespace::StandardScoreSyncState_Score const Multiplier;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14988 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardScoreSyncState_Score, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardScoreSyncState_Score, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IEquatableByReference`1<T>, IStateTable`3<TStateTable, TType, TState>, LiteNetLib.Utils.INetSerializable, StandardScoreSyncState::Score
namespace GlobalNamespace {
// Is value type: true
// CS Name: StandardScoreSyncState
struct CORDL_TYPE StandardScoreSyncState {
public:
  // Declarations
  using Score = ::GlobalNamespace::StandardScoreSyncState_Score;

  /// @brief Convert operator to "::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::StandardScoreSyncState>"
  constexpr operator ::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::StandardScoreSyncState>*();

  /// @brief Convert operator to "::GlobalNamespace::IStateTable_3<::GlobalNamespace::StandardScoreSyncState,::GlobalNamespace::StandardScoreSyncState_Score,int32_t>"
  constexpr operator ::GlobalNamespace::IStateTable_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::StandardScoreSyncState_Score, int32_t>*();

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*();

  /// @brief Method ApplyDelta, addr 0x22eaa1c, size 0x24, virtual false, abstract: false, final false
  inline ::GlobalNamespace::StandardScoreSyncState ApplyDelta(::ByRef<::GlobalNamespace::StandardScoreSyncState> delta);

  /// @brief Method Deserialize, addr 0x22eaafc, size 0x6c, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Equals, addr 0x22eab68, size 0x5c, virtual false, abstract: false, final false
  inline bool Equals(::ByRef<::GlobalNamespace::StandardScoreSyncState> other);

  /// @brief Method GetDelta, addr 0x22ea9f8, size 0x24, virtual false, abstract: false, final false
  inline ::GlobalNamespace::StandardScoreSyncState GetDelta(::ByRef<::GlobalNamespace::StandardScoreSyncState> stateTable);

  /// @brief Method GetSize, addr 0x22eabc4, size 0x8c, virtual true, abstract: false, final true
  inline int32_t GetSize();

  /// @brief Method GetState, addr 0x22eaa40, size 0x50, virtual true, abstract: false, final true
  inline int32_t GetState(::GlobalNamespace::StandardScoreSyncState_Score s);

  /// @brief Method IEquatableByReference<StandardScoreSyncState>.Equals, addr 0x22eac98, size 0x4, virtual true, abstract: false, final true
  inline bool IEquatableByReference_StandardScoreSyncState__Equals(::ByRef<::GlobalNamespace::StandardScoreSyncState> other);

  /// @brief Method IStateTable<StandardScoreSyncState,StandardScoreSyncState.Score,System.Int32>.ApplyDelta, addr 0x22eac74, size 0x24, virtual true, abstract: false, final true
  inline ::GlobalNamespace::StandardScoreSyncState IStateTable_StandardScoreSyncState_StandardScoreSyncState_Score_System_Int32__ApplyDelta(::ByRef<::GlobalNamespace::StandardScoreSyncState> delta);

  /// @brief Method IStateTable<StandardScoreSyncState,StandardScoreSyncState.Score,System.Int32>.GetDelta, addr 0x22eac50, size 0x24, virtual true, abstract: false, final true
  inline ::GlobalNamespace::StandardScoreSyncState
  IStateTable_StandardScoreSyncState_StandardScoreSyncState_Score_System_Int32__GetDelta(::ByRef<::GlobalNamespace::StandardScoreSyncState> stateTable);

  /// @brief Method Serialize, addr 0x22eaa90, size 0x6c, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method SetState, addr 0x22ea9b0, size 0x48, virtual true, abstract: false, final true
  inline void SetState(::GlobalNamespace::StandardScoreSyncState_Score s, int32_t value);

  /// @brief Convert to "::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::StandardScoreSyncState>"
  constexpr ::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::StandardScoreSyncState>* i___GlobalNamespace__IEquatableByReference_1___GlobalNamespace__StandardScoreSyncState_();

  /// @brief Convert to "::GlobalNamespace::IStateTable_3<::GlobalNamespace::StandardScoreSyncState,::GlobalNamespace::StandardScoreSyncState_Score,int32_t>"
  constexpr ::GlobalNamespace::IStateTable_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::StandardScoreSyncState_Score, int32_t>*
  i___GlobalNamespace__IStateTable_3___GlobalNamespace__StandardScoreSyncState___GlobalNamespace__StandardScoreSyncState_Score_int32_t_();

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardScoreSyncState();

  // Ctor Parameters [CppParam { name: "_modifiedScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_multipliedScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam
  // { name: "_immediateMaxPossibleMultipliedScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_combo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "_multiplier", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StandardScoreSyncState(int32_t _modifiedScore, int32_t _multipliedScore, int32_t _immediateMaxPossibleMultipliedScore, int32_t _combo, int32_t _multiplier) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14989 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field _modifiedScore, offset: 0x0, size: 0x4, def value: None
  int32_t _modifiedScore;

  /// @brief Field _multipliedScore, offset: 0x4, size: 0x4, def value: None
  int32_t _multipliedScore;

  /// @brief Field _immediateMaxPossibleMultipliedScore, offset: 0x8, size: 0x4, def value: None
  int32_t _immediateMaxPossibleMultipliedScore;

  /// @brief Field _combo, offset: 0xc, size: 0x4, def value: None
  int32_t _combo;

  /// @brief Field _multiplier, offset: 0x10, size: 0x4, def value: None
  int32_t _multiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardScoreSyncState, _modifiedScore) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardScoreSyncState, _multipliedScore) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardScoreSyncState, _immediateMaxPossibleMultipliedScore) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardScoreSyncState, _combo) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardScoreSyncState, _multiplier) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardScoreSyncState, 0x14>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardScoreSyncState_Score, "", "StandardScoreSyncState/Score");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardScoreSyncState, "", "StandardScoreSyncState");
