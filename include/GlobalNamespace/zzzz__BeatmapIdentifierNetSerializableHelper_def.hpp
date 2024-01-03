#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeatmapIdentifierNetSerializableHelper)
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class BeatmapIdentifierNetSerializable;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmap;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapIdentifierNetSerializableHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapIdentifierNetSerializableHelper);
// Type: ::BeatmapIdentifierNetSerializableHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4343))
// CS Name: ::BeatmapIdentifierNetSerializableHelper*
class CORDL_TYPE BeatmapIdentifierNetSerializableHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetIdentifier, addr 0x2340e78, size 0x298, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapIdentifierNetSerializable* GetIdentifier(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);

  /// @brief Method HasIdentifier, addr 0x2341110, size 0x290, virtual false, abstract: false, final false
  static inline bool HasIdentifier(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, ::GlobalNamespace::BeatmapIdentifierNetSerializable* beatmapId);

  /// @brief Method ToPreviewDifficultyBeatmap, addr 0x23413a0, size 0xd0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PreviewDifficultyBeatmap* ToPreviewDifficultyBeatmap(::GlobalNamespace::BeatmapIdentifierNetSerializable* beatmapId,
                                                                                        ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel,
                                                                                        ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection);

  /// @brief Method ToIdentifier, addr 0x23416cc, size 0x120, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapIdentifierNetSerializable* ToIdentifier(::GlobalNamespace::PreviewDifficultyBeatmap* previewDifficultyBeatmapLevel);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapIdentifierNetSerializableHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapIdentifierNetSerializableHelper(BeatmapIdentifierNetSerializableHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapIdentifierNetSerializableHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapIdentifierNetSerializableHelper(BeatmapIdentifierNetSerializableHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapIdentifierNetSerializableHelper();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapIdentifierNetSerializableHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapIdentifierNetSerializableHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapIdentifierNetSerializableHelper*, "", "BeatmapIdentifierNetSerializableHelper");
