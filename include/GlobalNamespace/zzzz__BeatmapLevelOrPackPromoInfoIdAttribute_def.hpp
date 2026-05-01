#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelOrPackPromoInfoIdAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelOrPackPromoInfoIdAttribute)
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelOrPackPromoInfoIdAttribute;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelOrPackPromoInfoIdAttribute);
// Dependencies UnityEngine.PropertyAttribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelOrPackPromoInfoIdAttribute
class CORDL_TYPE BeatmapLevelOrPackPromoInfoIdAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field allowEmpty, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get_allowEmpty, put = __cordl_internal_set_allowEmpty)) bool allowEmpty;

  static inline ::GlobalNamespace::BeatmapLevelOrPackPromoInfoIdAttribute* New_ctor(bool allowEmpty);

  constexpr bool const& __cordl_internal_get_allowEmpty() const;

  constexpr bool& __cordl_internal_get_allowEmpty();

  constexpr void __cordl_internal_set_allowEmpty(bool value);

  /// @brief Method .ctor, addr 0x368d684, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(bool allowEmpty);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelOrPackPromoInfoIdAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelOrPackPromoInfoIdAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelOrPackPromoInfoIdAttribute(BeatmapLevelOrPackPromoInfoIdAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelOrPackPromoInfoIdAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelOrPackPromoInfoIdAttribute(BeatmapLevelOrPackPromoInfoIdAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15174 };

  /// @brief Field allowEmpty, offset: 0x15, size: 0x1, def value: None
  bool ___allowEmpty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelOrPackPromoInfoIdAttribute, ___allowEmpty) == 0x15, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelOrPackPromoInfoIdAttribute, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelOrPackPromoInfoIdAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelOrPackPromoInfoIdAttribute*, "", "BeatmapLevelOrPackPromoInfoIdAttribute");
