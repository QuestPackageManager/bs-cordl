#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StandardScoreSyncState)
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
template <typename T> class IEquatableByReference_1;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
struct __StandardScoreSyncState__Score;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class IStateTable_3;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12977))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __StandardScoreSyncState__Score(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StandardScoreSyncState__Score();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ModifiedScore value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__StandardScoreSyncState__Score const ModifiedScore;

  /// @brief Field MultipliedScore value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__StandardScoreSyncState__Score const MultipliedScore;

  /// @brief Field ImmediateMaxPossibleMultipliedScore value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__StandardScoreSyncState__Score const ImmediateMaxPossibleMultipliedScore;

  /// @brief Field Combo value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__StandardScoreSyncState__Score const Combo;

  /// @brief Field Multiplier value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__StandardScoreSyncState__Score const Multiplier;

  /// @brief Field Count value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__StandardScoreSyncState__Score const Count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__StandardScoreSyncState__Score, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::StandardScoreSyncState
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12978))
// CS Name: ::StandardScoreSyncState
struct CORDL_TYPE StandardScoreSyncState {
public:
  // Declarations
  using Score = ::GlobalNamespace::__StandardScoreSyncState__Score;

  /// @brief Convert operator to "::GlobalNamespace::IStateTable_3<::GlobalNamespace::StandardScoreSyncState,::GlobalNamespace::__StandardScoreSyncState__Score,int32_t>"
  constexpr operator ::GlobalNamespace::IStateTable_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::__StandardScoreSyncState__Score, int32_t>*();

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*();

  /// @brief Convert operator to "::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::StandardScoreSyncState>"
  constexpr operator ::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::StandardScoreSyncState>*();

  /// @brief Method SetState addr 0xe5a584 size 0x48 virtual true final true
  inline void SetState(::GlobalNamespace::__StandardScoreSyncState__Score s, int32_t value);

  /// @brief Method GetDelta addr 0xe5a5cc size 0x24 virtual false final false
  inline ::GlobalNamespace::StandardScoreSyncState GetDelta(ByRef<::GlobalNamespace::StandardScoreSyncState> stateTable);

  /// @brief Method ApplyDelta addr 0xe5a5f0 size 0x24 virtual false final false
  inline ::GlobalNamespace::StandardScoreSyncState ApplyDelta(ByRef<::GlobalNamespace::StandardScoreSyncState> delta);

  /// @brief Method GetState addr 0xe5a614 size 0x50 virtual true final true
  inline int32_t GetState(::GlobalNamespace::__StandardScoreSyncState__Score s);

  /// @brief Method Serialize addr 0xe5a664 size 0x6c virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xe5a6d0 size 0x6c virtual true final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Equals addr 0xe5a73c size 0x5c virtual false final false
  inline bool Equals(ByRef<::GlobalNamespace::StandardScoreSyncState> other);

  /// @brief Method GetSize addr 0xe5a798 size 0x8c virtual true final true
  inline int32_t GetSize();

  /// @brief Method IStateTable<StandardScoreSyncState,StandardScoreSyncState.Score,System.Int32>.GetDelta addr 0xe5a824 size 0x24 virtual true final true
  inline ::GlobalNamespace::StandardScoreSyncState IStateTable_StandardScoreSyncState_StandardScoreSyncState_Score_System_Int32__GetDelta(ByRef<::GlobalNamespace::StandardScoreSyncState> stateTable);

  /// @brief Method IStateTable<StandardScoreSyncState,StandardScoreSyncState.Score,System.Int32>.ApplyDelta addr 0xe5a848 size 0x24 virtual true final true
  inline ::GlobalNamespace::StandardScoreSyncState IStateTable_StandardScoreSyncState_StandardScoreSyncState_Score_System_Int32__ApplyDelta(ByRef<::GlobalNamespace::StandardScoreSyncState> delta);

  /// @brief Method IEquatableByReference<StandardScoreSyncState>.Equals addr 0xe5a86c size 0x4 virtual true final true
  inline bool IEquatableByReference_StandardScoreSyncState__Equals(ByRef<::GlobalNamespace::StandardScoreSyncState> other);

  // Ctor Parameters [CppParam { name: "_modifiedScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_multipliedScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam
  // { name: "_immediateMaxPossibleMultipliedScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_combo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "_multiplier", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StandardScoreSyncState(int32_t _modifiedScore, int32_t _multipliedScore, int32_t _immediateMaxPossibleMultipliedScore, int32_t _combo, int32_t _multiplier) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardScoreSyncState();

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

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__StandardScoreSyncState__Score, "", "StandardScoreSyncState/Score");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardScoreSyncState, "", "StandardScoreSyncState");
