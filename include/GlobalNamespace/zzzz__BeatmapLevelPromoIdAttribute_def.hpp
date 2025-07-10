#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelPromoIdAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapLevelPromoIdFilter_def.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelPromoIdAttribute)
namespace GlobalNamespace {
struct BeatmapLevelPromoIdFilter;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelPromoIdAttribute;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelPromoIdAttribute);
// Dependencies BeatmapLevelPromoIdFilter, UnityEngine.PropertyAttribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelPromoIdAttribute
class CORDL_TYPE BeatmapLevelPromoIdAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field _filter, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__filter, put = __cordl_internal_set__filter)) ::GlobalNamespace::BeatmapLevelPromoIdFilter _filter;

  __declspec(property(get = get_allowEmpty)) bool allowEmpty;

  __declspec(property(get = get_allowLevels)) bool allowLevels;

  __declspec(property(get = get_allowPacks)) bool allowPacks;

  static inline ::GlobalNamespace::BeatmapLevelPromoIdAttribute* New_ctor(::GlobalNamespace::BeatmapLevelPromoIdFilter filter);

  constexpr ::GlobalNamespace::BeatmapLevelPromoIdFilter const& __cordl_internal_get__filter() const;

  constexpr ::GlobalNamespace::BeatmapLevelPromoIdFilter& __cordl_internal_get__filter();

  constexpr void __cordl_internal_set__filter(::GlobalNamespace::BeatmapLevelPromoIdFilter value);

  /// @brief Method .ctor, addr 0x26f975c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapLevelPromoIdFilter filter);

  /// @brief Method get_allowEmpty, addr 0x26f9750, size 0xc, virtual false, abstract: false, final false
  inline bool get_allowEmpty();

  /// @brief Method get_allowLevels, addr 0x26f9744, size 0xc, virtual false, abstract: false, final false
  inline bool get_allowLevels();

  /// @brief Method get_allowPacks, addr 0x26f9738, size 0xc, virtual false, abstract: false, final false
  inline bool get_allowPacks();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelPromoIdAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelPromoIdAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelPromoIdAttribute(BeatmapLevelPromoIdAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelPromoIdAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelPromoIdAttribute(BeatmapLevelPromoIdAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13241 };

  /// @brief Field _filter, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapLevelPromoIdFilter ____filter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelPromoIdAttribute, ____filter) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelPromoIdAttribute, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelPromoIdAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelPromoIdAttribute*, "", "BeatmapLevelPromoIdAttribute");
