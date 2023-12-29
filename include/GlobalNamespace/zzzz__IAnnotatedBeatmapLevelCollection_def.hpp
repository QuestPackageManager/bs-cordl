#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IAnnotatedBeatmapLevelCollection)
namespace GlobalNamespace {
class IBeatmapLevelCollection;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class IAnnotatedBeatmapLevelCollection;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IAnnotatedBeatmapLevelCollection);
// Type: ::IAnnotatedBeatmapLevelCollection
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4440))
// CS Name: ::IAnnotatedBeatmapLevelCollection*
class CORDL_TYPE IAnnotatedBeatmapLevelCollection {
public:
  // Declarations
  __declspec(property(get = get_collectionName))::StringW collectionName;

  __declspec(property(get = get_coverImage))::UnityEngine::Sprite* coverImage;

  __declspec(property(get = get_smallCoverImage))::UnityEngine::Sprite* smallCoverImage;

  __declspec(property(get = get_beatmapLevelCollection))::GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection;

  /// @brief Method get_collectionName addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_collectionName();

  /// @brief Method get_coverImage addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::Sprite* get_coverImage();

  /// @brief Method get_smallCoverImage addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::Sprite* get_smallCoverImage();

  /// @brief Method get_beatmapLevelCollection addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::IBeatmapLevelCollection* get_beatmapLevelCollection();

  // Ctor Parameters [CppParam { name: "", ty: "IAnnotatedBeatmapLevelCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAnnotatedBeatmapLevelCollection(IAnnotatedBeatmapLevelCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAnnotatedBeatmapLevelCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAnnotatedBeatmapLevelCollection(IAnnotatedBeatmapLevelCollection const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IAnnotatedBeatmapLevelCollection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, "", "IAnnotatedBeatmapLevelCollection");
