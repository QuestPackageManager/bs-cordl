#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapKey)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class BeatmapKeyNetSerializable;
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
// Dependencies BeatmapDifficulty, System.IEquatable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapKey
struct CORDL_TYPE BeatmapKey {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::BeatmapKey>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::BeatmapKey>*();

  /// @brief Method Equals, addr 0x26c49c8, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x26c494c, size 0x7c, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::BeatmapKey other);

  /// @brief Method GetHashCode, addr 0x26c4a58, size 0xb8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetIdentifier, addr 0x26c48c4, size 0x88, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapKeyNetSerializable* GetIdentifier();

  /// @brief Method IsValid, addr 0x26c4800, size 0x80, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method SerializedName, addr 0x26c4880, size 0x44, virtual false, abstract: false, final false
  inline ::StringW SerializedName();

  /// @brief Method .ctor, addr 0x26c4704, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::StringW levelId, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::BeatmapKey>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::BeatmapKey>* i___System__IEquatable_1___GlobalNamespace__BeatmapKey_();

  /// @brief Method op_Equality, addr 0x26c47d0, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::BeatmapKey a, ::GlobalNamespace::BeatmapKey b);

  /// @brief Method op_Inequality, addr 0x26c4b10, size 0x48, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::BeatmapKey a, ::GlobalNamespace::BeatmapKey b);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapKey();

  // Ctor Parameters [CppParam { name: "beatmapCharacteristic", ty: "::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>", modifiers: "", def_value: None }, CppParam { name: "difficulty", ty:
  // "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr BeatmapKey(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> beatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty difficulty, ::StringW levelId) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12939 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field beatmapCharacteristic, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> beatmapCharacteristic;

  /// @brief Field difficulty, offset: 0x8, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty difficulty;

  /// @brief Field levelId, offset: 0x10, size: 0x8, def value: None
  ::StringW levelId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapKey, beatmapCharacteristic) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapKey, difficulty) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapKey, levelId) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapKey, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapKey, "", "BeatmapKey");
