#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelOrPackIdAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapLevelOrPackIdFilter_def.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelOrPackIdAttribute)
namespace GlobalNamespace {
struct BeatmapLevelOrPackIdFilter;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelOrPackIdAttribute;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelOrPackIdAttribute);
// Dependencies BeatmapLevelOrPackIdFilter, UnityEngine.PropertyAttribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelOrPackIdAttribute
class CORDL_TYPE BeatmapLevelOrPackIdAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  __declspec(property(get = get_allowEmpty)) bool allowEmpty;

  __declspec(property(get = get_allowLevels)) bool allowLevels;

  __declspec(property(get = get_allowPacks)) bool allowPacks;

  /// @brief Field filter, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_filter, put = __cordl_internal_set_filter)) ::GlobalNamespace::BeatmapLevelOrPackIdFilter filter;

  static inline ::GlobalNamespace::BeatmapLevelOrPackIdAttribute* New_ctor(::GlobalNamespace::BeatmapLevelOrPackIdFilter filter);

  constexpr ::GlobalNamespace::BeatmapLevelOrPackIdFilter const& __cordl_internal_get_filter() const;

  constexpr ::GlobalNamespace::BeatmapLevelOrPackIdFilter& __cordl_internal_get_filter();

  constexpr void __cordl_internal_set_filter(::GlobalNamespace::BeatmapLevelOrPackIdFilter value);

  /// @brief Method .ctor, addr 0x3650c50, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapLevelOrPackIdFilter filter);

  /// @brief Method get_allowEmpty, addr 0x3650c3c, size 0xc, virtual false, abstract: false, final false
  inline bool get_allowEmpty();

  /// @brief Method get_allowLevels, addr 0x3650c28, size 0xc, virtual false, abstract: false, final false
  inline bool get_allowLevels();

  /// @brief Method get_allowPacks, addr 0x3650c14, size 0xc, virtual false, abstract: false, final false
  inline bool get_allowPacks();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelOrPackIdAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelOrPackIdAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelOrPackIdAttribute(BeatmapLevelOrPackIdAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelOrPackIdAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelOrPackIdAttribute(BeatmapLevelOrPackIdAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15161 };

  /// @brief Field filter, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapLevelOrPackIdFilter ___filter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelOrPackIdAttribute, ___filter) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelOrPackIdAttribute, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelOrPackIdAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelOrPackIdAttribute*, "", "BeatmapLevelOrPackIdAttribute");
