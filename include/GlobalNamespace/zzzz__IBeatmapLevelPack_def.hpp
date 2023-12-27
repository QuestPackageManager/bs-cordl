#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IBeatmapLevelPack)
namespace GlobalNamespace {
class IAnnotatedBeatmapLevelCollection;
}
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
// Forward declare root types
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IBeatmapLevelPack);
// Type: ::IBeatmapLevelPack
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4350))
// CS Name: ::IBeatmapLevelPack*
class CORDL_TYPE IBeatmapLevelPack {
public:
  // Declarations
  __declspec(property(get = get_packID))::StringW packID;

  __declspec(property(get = get_packName))::StringW packName;

  __declspec(property(get = get_shortPackName))::StringW shortPackName;

  __declspec(property(get = get_contentRating))::GlobalNamespace::PlayerSensitivityFlag contentRating;

  /// @brief Convert operator to "::GlobalNamespace::IAnnotatedBeatmapLevelCollection"
  constexpr operator ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*() noexcept;

  /// @brief Method get_packID addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_packID();

  /// @brief Method get_packName addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_packName();

  /// @brief Method get_shortPackName addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_shortPackName();

  /// @brief Method get_contentRating addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::PlayerSensitivityFlag get_contentRating();

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapLevelPack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBeatmapLevelPack(IBeatmapLevelPack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapLevelPack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBeatmapLevelPack(IBeatmapLevelPack const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBeatmapLevelPack);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatmapLevelPack*, "", "IBeatmapLevelPack");
