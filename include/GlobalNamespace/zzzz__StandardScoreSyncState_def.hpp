#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StandardScoreSyncState)
namespace GlobalNamespace {
template <typename T> class IEquatableByReference_1;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class IStateTable_3;
}
namespace GlobalNamespace {
struct __StandardScoreSyncState__Score;
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
// Forward declare root types
namespace GlobalNamespace {
struct __StandardScoreSyncState__Score;
}
namespace GlobalNamespace {
struct StandardScoreSyncState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__StandardScoreSyncState__Score);
MARK_VAL_T(::GlobalNamespace::StandardScoreSyncState);
// Type: ::Score
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::StandardScoreSyncState::Score
struct CORDL_TYPE __StandardScoreSyncState__Score {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____StandardScoreSyncState__Score_Unwrapped
  enum struct ____StandardScoreSyncState__Score_Unwrapped : int32_t {
    __E_ModifiedScore = static_cast<int32_t>(0x0),
    __E_MultipliedScore = static_cast<int32_t>(0x1),
    __E_ImmediateMaxPossibleMultipliedScore = static_cast<int32_t>(0x2),
    __E_Combo = static_cast<int32_t>(0x3),
    __E_Multiplier = static_cast<int32_t>(0x4),
    __E_Count = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____StandardScoreSyncState__Score_Unwrapped() const noexcept {
    return static_cast<____StandardScoreSyncState__Score_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StandardScoreSyncState__Score();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __StandardScoreSyncState__Score(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Combo value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__StandardScoreSyncState__Score const Combo;

  /// @brief Field Count value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__StandardScoreSyncState__Score const Count;

  /// @brief Field ImmediateMaxPossibleMultipliedScore value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__StandardScoreSyncState__Score const ImmediateMaxPossibleMultipliedScore;

  /// @brief Field ModifiedScore value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__StandardScoreSyncState__Score const ModifiedScore;

  /// @brief Field MultipliedScore value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__StandardScoreSyncState__Score const MultipliedScore;

  /// @brief Field Multiplier value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__StandardScoreSyncState__Score const Multiplier;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandardScoreSyncState__Score, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__StandardScoreSyncState__Score, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::StandardScoreSyncState
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::StandardScoreSyncState
struct CORDL_TYPE StandardScoreSyncState {
public:
  // Declarations
  using Score = ::GlobalNamespace::__StandardScoreSyncState__Score;

  /// @brief Convert operator to "::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::StandardScoreSyncState>"
  constexpr operator ::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::StandardScoreSyncState>*();

  /// @brief Convert operator to "::GlobalNamespace::IStateTable_3<::GlobalNamespace::StandardScoreSyncState,::GlobalNamespace::__StandardScoreSyncState__Score,int32_t>"
  constexpr operator ::GlobalNamespace::IStateTable_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::__StandardScoreSyncState__Score, int32_t>*();

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*();

  /// @brief Method ApplyDelta, addr 0xecc3f8, size 0x24, virtual false, abstract: false, final false
  inline ::GlobalNamespace::StandardScoreSyncState ApplyDelta(ByRef<::GlobalNamespace::StandardScoreSyncState> delta);

  /// @brief Method Deserialize, addr 0xecc4d8, size 0x6c, virtual true, abstract: false, final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Equals, addr 0xecc544, size 0x5c, virtual false, abstract: false, final false
  inline bool Equals(ByRef<::GlobalNamespace::StandardScoreSyncState> other);

  /// @brief Method GetDelta, addr 0xecc3d4, size 0x24, virtual false, abstract: false, final false
  inline ::GlobalNamespace::StandardScoreSyncState GetDelta(ByRef<::GlobalNamespace::StandardScoreSyncState> stateTable);

  /// @brief Method GetSize, addr 0xecc5a0, size 0x8c, virtual true, abstract: false, final true
  inline int32_t GetSize();

  /// @brief Method GetState, addr 0xecc41c, size 0x50, virtual true, abstract: false, final true
  inline int32_t GetState(::GlobalNamespace::__StandardScoreSyncState__Score s);

  /// @brief Method IEquatableByReference<StandardScoreSyncState>.Equals, addr 0xecc674, size 0x4, virtual true, abstract: false, final true
  inline bool IEquatableByReference_StandardScoreSyncState__Equals(ByRef<::GlobalNamespace::StandardScoreSyncState> other);

  /// @brief Method IStateTable<StandardScoreSyncState,StandardScoreSyncState.Score,System.Int32>.ApplyDelta, addr 0xecc650, size 0x24, virtual true, abstract: false, final true
  inline ::GlobalNamespace::StandardScoreSyncState IStateTable_StandardScoreSyncState_StandardScoreSyncState_Score_System_Int32__ApplyDelta(ByRef<::GlobalNamespace::StandardScoreSyncState> delta);

  /// @brief Method IStateTable<StandardScoreSyncState,StandardScoreSyncState.Score,System.Int32>.GetDelta, addr 0xecc62c, size 0x24, virtual true, abstract: false, final true
  inline ::GlobalNamespace::StandardScoreSyncState IStateTable_StandardScoreSyncState_StandardScoreSyncState_Score_System_Int32__GetDelta(ByRef<::GlobalNamespace::StandardScoreSyncState> stateTable);

  /// @brief Method Serialize, addr 0xecc46c, size 0x6c, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method SetState, addr 0xecc38c, size 0x48, virtual true, abstract: false, final true
  inline void SetState(::GlobalNamespace::__StandardScoreSyncState__Score s, int32_t value);

  /// @brief Convert to "::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::StandardScoreSyncState>"
  constexpr ::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::StandardScoreSyncState>* i___GlobalNamespace__IEquatableByReference_1___GlobalNamespace__StandardScoreSyncState_();

  /// @brief Convert to "::GlobalNamespace::IStateTable_3<::GlobalNamespace::StandardScoreSyncState,::GlobalNamespace::__StandardScoreSyncState__Score,int32_t>"
  constexpr ::GlobalNamespace::IStateTable_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::__StandardScoreSyncState__Score, int32_t>*
  i___GlobalNamespace__IStateTable_3___GlobalNamespace__StandardScoreSyncState___GlobalNamespace____StandardScoreSyncState__Score_int32_t_();

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardScoreSyncState();

  // Ctor Parameters [CppParam { name: "_modifiedScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_multipliedScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam
  // { name: "_immediateMaxPossibleMultipliedScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_combo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "_multiplier", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StandardScoreSyncState(int32_t _modifiedScore, int32_t _multipliedScore, int32_t _immediateMaxPossibleMultipliedScore, int32_t _combo, int32_t _multiplier) noexcept;

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardScoreSyncState, 0x14>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardScoreSyncState, _modifiedScore) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardScoreSyncState, _multipliedScore) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardScoreSyncState, _immediateMaxPossibleMultipliedScore) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardScoreSyncState, _combo) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardScoreSyncState, _multiplier) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandardScoreSyncState__Score, "", "StandardScoreSyncState/Score");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardScoreSyncState, "", "StandardScoreSyncState");
