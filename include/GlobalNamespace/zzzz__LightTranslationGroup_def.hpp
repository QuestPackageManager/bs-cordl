#pragma once
// IWYU pragma private; include "GlobalNamespace/LightTranslationGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IEditTimeValidated_def.hpp"
#include "GlobalNamespace/zzzz__LightTransformGroup_3_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(LightTranslationGroup)
namespace GlobalNamespace {
class LightGroupTranslationXTransform;
}
namespace GlobalNamespace {
class LightGroupTranslationYTransform;
}
namespace GlobalNamespace {
class LightGroupTranslationZTransform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class LightTranslationGroup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightTranslationGroup);
// Dependencies IEditTimeValidated, LightTransformGroup`3<TX, TY, TZ>, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightTranslationGroup
class CORDL_TYPE LightTranslationGroup : public ::GlobalNamespace::LightTransformGroup_3<::GlobalNamespace::LightGroupTranslationXTransform*, ::GlobalNamespace::LightGroupTranslationYTransform*,
                                                                                         ::GlobalNamespace::LightGroupTranslationZTransform*> {
public:
  // Declarations
  /// @brief Field _xDistributionLimits, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__xDistributionLimits, put = __cordl_internal_set__xDistributionLimits)) ::UnityEngine::Vector2 _xDistributionLimits;

  /// @brief Field _xTranslationLimits, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__xTranslationLimits, put = __cordl_internal_set__xTranslationLimits)) ::UnityEngine::Vector2 _xTranslationLimits;

  /// @brief Field _yDistributionLimits, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__yDistributionLimits, put = __cordl_internal_set__yDistributionLimits)) ::UnityEngine::Vector2 _yDistributionLimits;

  /// @brief Field _yTranslationLimits, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__yTranslationLimits, put = __cordl_internal_set__yTranslationLimits)) ::UnityEngine::Vector2 _yTranslationLimits;

  /// @brief Field _zDistributionLimits, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__zDistributionLimits, put = __cordl_internal_set__zDistributionLimits)) ::UnityEngine::Vector2 _zDistributionLimits;

  /// @brief Field _zTranslationLimits, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__zTranslationLimits, put = __cordl_internal_set__zTranslationLimits)) ::UnityEngine::Vector2 _zTranslationLimits;

  __declspec(property(get = get_xDistributionLimits)) ::UnityEngine::Vector2 xDistributionLimits;

  __declspec(property(get = get_xTranslationLimits)) ::UnityEngine::Vector2 xTranslationLimits;

  __declspec(property(get = get_yDistributionLimits)) ::UnityEngine::Vector2 yDistributionLimits;

  __declspec(property(get = get_yTranslationLimits)) ::UnityEngine::Vector2 yTranslationLimits;

  __declspec(property(get = get_zDistributionLimits)) ::UnityEngine::Vector2 zDistributionLimits;

  __declspec(property(get = get_zTranslationLimits)) ::UnityEngine::Vector2 zTranslationLimits;

  /// @brief Convert operator to "::GlobalNamespace::IEditTimeValidated"
  constexpr operator ::GlobalNamespace::IEditTimeValidated*() noexcept;

  static inline ::GlobalNamespace::LightTranslationGroup* New_ctor();

  /// @brief Method __Validate, addr 0x3b8e398, size 0x214, virtual false, abstract: false, final false
  inline bool __Validate();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__xDistributionLimits() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__xDistributionLimits();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__xTranslationLimits() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__xTranslationLimits();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__yDistributionLimits() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__yDistributionLimits();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__yTranslationLimits() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__yTranslationLimits();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__zDistributionLimits() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__zDistributionLimits();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__zTranslationLimits() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__zTranslationLimits();

  constexpr void __cordl_internal_set__xDistributionLimits(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__xTranslationLimits(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__yDistributionLimits(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__yTranslationLimits(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__zDistributionLimits(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__zTranslationLimits(::UnityEngine::Vector2 value);

  /// @brief Method .ctor, addr 0x3b8e5ac, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_xDistributionLimits, addr 0x3b8e380, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_xDistributionLimits();

  /// @brief Method get_xTranslationLimits, addr 0x3b8e368, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_xTranslationLimits();

  /// @brief Method get_yDistributionLimits, addr 0x3b8e388, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_yDistributionLimits();

  /// @brief Method get_yTranslationLimits, addr 0x3b8e370, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_yTranslationLimits();

  /// @brief Method get_zDistributionLimits, addr 0x3b8e390, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_zDistributionLimits();

  /// @brief Method get_zTranslationLimits, addr 0x3b8e378, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_zTranslationLimits();

  /// @brief Convert to "::GlobalNamespace::IEditTimeValidated"
  constexpr ::GlobalNamespace::IEditTimeValidated* i___GlobalNamespace__IEditTimeValidated() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightTranslationGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightTranslationGroup(LightTranslationGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightTranslationGroup(LightTranslationGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4308 };

  /// @brief Field _xTranslationLimits, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____xTranslationLimits;

  /// @brief Field _yTranslationLimits, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____yTranslationLimits;

  /// @brief Field _zTranslationLimits, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____zTranslationLimits;

  /// @brief Field _xDistributionLimits, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____xDistributionLimits;

  /// @brief Field _yDistributionLimits, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____yDistributionLimits;

  /// @brief Field _zDistributionLimits, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____zDistributionLimits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightTranslationGroup, ____xTranslationLimits) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationGroup, ____yTranslationLimits) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationGroup, ____zTranslationLimits) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationGroup, ____xDistributionLimits) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationGroup, ____yDistributionLimits) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationGroup, ____zDistributionLimits) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightTranslationGroup, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightTranslationGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightTranslationGroup*, "", "LightTranslationGroup");
