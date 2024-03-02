#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
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
// Type: ::BeatmapKey
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BeatmapKey
struct CORDL_TYPE BeatmapKey {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::BeatmapKey>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::BeatmapKey>*();

  /// @brief Method Equals, addr 0x12c5010, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x12b96c8, size 0x74, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::BeatmapKey other);

  /// @brief Method GetHashCode, addr 0x12c50a0, size 0xb4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetIdentifier, addr 0x12c4f84, size 0x8c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapKeyNetSerializable* GetIdentifier();

  /// @brief Method IsValid, addr 0x12c4f04, size 0x80, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method SerializedName, addr 0x12b66c4, size 0x44, virtual false, abstract: false, final false
  inline ::StringW SerializedName();

  /// @brief Method .ctor, addr 0x12c4e0c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::StringW levelId, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::BeatmapKey>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::BeatmapKey>* i___System__IEquatable_1___GlobalNamespace__BeatmapKey_();

  /// @brief Method op_Equality, addr 0x12c4ed4, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::BeatmapKey a, ::GlobalNamespace::BeatmapKey b);

  /// @brief Method op_Inequality, addr 0x12c5154, size 0x48, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::BeatmapKey a, ::GlobalNamespace::BeatmapKey b);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapKey();

  // Ctor Parameters [CppParam { name: "beatmapCharacteristic", ty: "::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>", modifiers: "", def_value: None }, CppParam { name: "difficulty", ty:
  // "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr BeatmapKey(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> beatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty difficulty, ::StringW levelId) noexcept;

  /// @brief Field beatmapCharacteristic, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> beatmapCharacteristic;

  /// @brief Field difficulty, offset: 0x8, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty difficulty;

  /// @brief Field levelId, offset: 0x10, size: 0x8, def value: None
  ::StringW levelId;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapKey, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapKey, beatmapCharacteristic) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapKey, difficulty) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapKey, levelId) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapKey, "", "BeatmapKey");
