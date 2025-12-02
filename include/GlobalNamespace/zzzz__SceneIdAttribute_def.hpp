#pragma once
// IWYU pragma private; include "GlobalNamespace/SceneIdAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapSceneIdFilter_def.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(SceneIdAttribute)
namespace GlobalNamespace {
struct BeatmapSceneIdFilter;
}
// Forward declare root types
namespace GlobalNamespace {
class SceneIdAttribute;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SceneIdAttribute);
// Dependencies BeatmapSceneIdFilter, UnityEngine.PropertyAttribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: SceneIdAttribute
class CORDL_TYPE SceneIdAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field _filter, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__filter, put = __cordl_internal_set__filter)) ::GlobalNamespace::BeatmapSceneIdFilter _filter;

  __declspec(property(get = get_allowAllScenes)) bool allowAllScenes;

  __declspec(property(get = get_allowEmpty)) bool allowEmpty;

  __declspec(property(get = get_allowEnvironmentScenes)) bool allowEnvironmentScenes;

  __declspec(property(get = get_allowGameScenes)) bool allowGameScenes;

  __declspec(property(get = get_onlyAllowEnvironmentScenes)) bool onlyAllowEnvironmentScenes;

  static inline ::GlobalNamespace::SceneIdAttribute* New_ctor(::GlobalNamespace::BeatmapSceneIdFilter filter);

  constexpr ::GlobalNamespace::BeatmapSceneIdFilter const& __cordl_internal_get__filter() const;

  constexpr ::GlobalNamespace::BeatmapSceneIdFilter& __cordl_internal_get__filter();

  constexpr void __cordl_internal_set__filter(::GlobalNamespace::BeatmapSceneIdFilter value);

  /// @brief Method .ctor, addr 0x31da404, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapSceneIdFilter filter);

  /// @brief Method get_allowAllScenes, addr 0x31da3dc, size 0x14, virtual false, abstract: false, final false
  inline bool get_allowAllScenes();

  /// @brief Method get_allowEmpty, addr 0x31da3d0, size 0xc, virtual false, abstract: false, final false
  inline bool get_allowEmpty();

  /// @brief Method get_allowEnvironmentScenes, addr 0x31da3c4, size 0xc, virtual false, abstract: false, final false
  inline bool get_allowEnvironmentScenes();

  /// @brief Method get_allowGameScenes, addr 0x31da3b8, size 0xc, virtual false, abstract: false, final false
  inline bool get_allowGameScenes();

  /// @brief Method get_onlyAllowEnvironmentScenes, addr 0x31da3f0, size 0x14, virtual false, abstract: false, final false
  inline bool get_onlyAllowEnvironmentScenes();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneIdAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SceneIdAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneIdAttribute(SceneIdAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneIdAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneIdAttribute(SceneIdAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21318 };

  /// @brief Field _filter, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapSceneIdFilter ____filter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SceneIdAttribute, ____filter) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SceneIdAttribute, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SceneIdAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SceneIdAttribute*, "", "SceneIdAttribute");
