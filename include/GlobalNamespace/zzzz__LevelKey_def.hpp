#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelKey)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct LevelKey;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LevelKey);
// Type: ::LevelKey
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(14717))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4627))
// CS Name: ::LevelKey
struct CORDL_TYPE LevelKey {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::LevelKey>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::LevelKey>*();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::LevelKey>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::LevelKey>* i___System__IEquatable_1___GlobalNamespace__LevelKey_();

  /// @brief Method Equals, addr 0x236bbb8, size 0x9c, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::LevelKey other);

  /// @brief Method Equals, addr 0x236bc54, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x236bce4, size 0xbc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method op_Equality, addr 0x236bda0, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::LevelKey left, ::GlobalNamespace::LevelKey right);

  /// @brief Method op_Inequality, addr 0x236bdd0, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::LevelKey left, ::GlobalNamespace::LevelKey right);

  // Ctor Parameters [CppParam { name: "songId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "difficulty", ty: "::GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value:
  // None }, CppParam { name: "characteristic", ty: "::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>", modifiers: "", def_value: None }]
  constexpr LevelKey(::StringW songId, ::GlobalNamespace::BeatmapDifficulty difficulty, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> characteristic) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelKey();

  /// @brief Field songId, offset: 0x0, size: 0x8, def value: None
  ::StringW songId;

  /// @brief Field difficulty, offset: 0x8, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty difficulty;

  /// @brief Field characteristic, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> characteristic;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelKey, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelKey, songId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelKey, difficulty) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelKey, characteristic) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelKey, "", "LevelKey");
