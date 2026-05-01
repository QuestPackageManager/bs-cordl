#pragma once
// IWYU pragma private; include "BeatSaber/FeatureFlags/FeatureConfiguration_Hardcoded.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/FeatureFlags/zzzz__FeatureConfiguration_def.hpp"
CORDL_MODULE_EXPORT(FeatureConfiguration_Hardcoded)
// Forward declare root types
namespace GlobalNamespace {
class FeatureConfiguration_Hardcoded;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FeatureConfiguration_Hardcoded);
// Dependencies BeatSaber.FeatureFlags.FeatureConfiguration
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatSaber.FeatureFlags.FeatureConfiguration/Hardcoded
class CORDL_TYPE FeatureConfiguration_Hardcoded : public ::BeatSaber::FeatureFlags::FeatureConfiguration {
public:
  // Declarations
  /// @brief Field value, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) bool value;

  static inline ::GlobalNamespace::FeatureConfiguration_Hardcoded* New_ctor(bool value);

  constexpr bool const& __cordl_internal_get_value() const;

  constexpr bool& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_value(bool value);

  /// @brief Method .ctor, addr 0x31f4ed0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FeatureConfiguration_Hardcoded();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FeatureConfiguration_Hardcoded", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FeatureConfiguration_Hardcoded(FeatureConfiguration_Hardcoded&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FeatureConfiguration_Hardcoded", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FeatureConfiguration_Hardcoded(FeatureConfiguration_Hardcoded const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22635 };

  /// @brief Field value, offset: 0x10, size: 0x1, def value: None
  bool ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FeatureConfiguration_Hardcoded, ___value) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FeatureConfiguration_Hardcoded, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FeatureConfiguration_Hardcoded);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FeatureConfiguration_Hardcoded*, "BeatSaber.FeatureFlags", "FeatureConfiguration/Hardcoded");
