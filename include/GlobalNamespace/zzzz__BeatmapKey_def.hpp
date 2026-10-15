#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__GameplayType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapKey)
namespace GlobalNamespace {
struct BeatmapCharacteristic;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class BeatmapKeyNetSerializable;
}
namespace GlobalNamespace {
struct GameplayType;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct BeatmapKey;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BeatmapKey);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapKey, "", "BeatmapKey");
// [IsReadOnly]
// Dependencies BeatmapCharacteristic, BeatmapDifficulty, GameplayType
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapKey
struct CORDL_TYPE BeatmapKey {
public:
  // Declarations
  /// @brief Field Empty, offset 0xffffffff, size 0x18
  __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty)) ::GlobalNamespace::BeatmapKey Empty;

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::BeatmapKey>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::BeatmapKey>*();

  /// @brief Method Equals, addr 0x39cebb4, size 0xa0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x39beb68, size 0x64, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::BeatmapKey other);

  /// @brief Method GetHashCode, addr 0x39cec54, size 0x88, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetIdentifier, addr 0x39ceb18, size 0x9c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapKeyNetSerializable* GetIdentifier();

  /// @brief Method IsValid, addr 0x39cea30, size 0x20, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method SerializedName, addr 0x39cea50, size 0xc8, virtual false, abstract: false, final false
  inline ::StringW SerializedName();

  /// @brief Method ToString, addr 0x39ced78, size 0x1c8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x39ce89c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::StringW levelId, ::GlobalNamespace::GameplayType gameplayType, ::GlobalNamespace::BeatmapCharacteristic characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty);

  static inline ::GlobalNamespace::BeatmapKey getStaticF_Empty();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::BeatmapKey>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::BeatmapKey>* i___System__IEquatable_1___GlobalNamespace__BeatmapKey_();

  /// @brief Method op_Equality, addr 0x39ce9a8, size 0x88, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::BeatmapKey a, ::GlobalNamespace::BeatmapKey b);

  /// @brief Method op_Inequality, addr 0x39cecdc, size 0x9c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::BeatmapKey a, ::GlobalNamespace::BeatmapKey b);

  static inline void setStaticF_Empty(::GlobalNamespace::BeatmapKey value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapKey();

  // Ctor Parameters [CppParam { name: "characteristic", ty: "::GlobalNamespace::BeatmapCharacteristic", modifiers: "", def_value: None, comment: None }, CppParam { name: "difficulty", ty:
  // "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: None, comment: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "gameplayType", ty: "::GlobalNamespace::GameplayType", modifiers: "", def_value: None, comment: None }]
  constexpr BeatmapKey(::GlobalNamespace::BeatmapCharacteristic characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty, ::StringW levelId,
                       ::GlobalNamespace::GameplayType gameplayType) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14415 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field characteristic, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapCharacteristic characteristic;

  /// @brief Field difficulty, offset: 0x4, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty difficulty;

  /// @brief Field levelId, offset: 0x8, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief Field gameplayType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::GameplayType gameplayType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapKey, characteristic) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapKey, difficulty) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapKey, levelId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapKey, gameplayType) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatmapKey) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
