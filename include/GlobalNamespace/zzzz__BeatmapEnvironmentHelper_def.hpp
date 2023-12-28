#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeatmapEnvironmentHelper)
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEnvironmentHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapEnvironmentHelper);
// Type: ::BeatmapEnvironmentHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4299))
// CS Name: ::BeatmapEnvironmentHelper*
class CORDL_TYPE BeatmapEnvironmentHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetEnvironmentInfo addr 0x2338350 size 0x4b4 virtual false final false
  static inline ::GlobalNamespace::EnvironmentInfoSO* GetEnvironmentInfo(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEnvironmentHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEnvironmentHelper(BeatmapEnvironmentHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEnvironmentHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEnvironmentHelper(BeatmapEnvironmentHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEnvironmentHelper();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEnvironmentHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapEnvironmentHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEnvironmentHelper*, "", "BeatmapEnvironmentHelper");
