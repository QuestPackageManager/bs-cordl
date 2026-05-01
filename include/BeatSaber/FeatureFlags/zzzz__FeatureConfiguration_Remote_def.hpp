#pragma once
// IWYU pragma private; include "BeatSaber/FeatureFlags/FeatureConfiguration_Remote.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/FeatureFlags/zzzz__FeatureConfiguration_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FeatureConfiguration_Remote)
// Forward declare root types
namespace GlobalNamespace {
class FeatureConfiguration_Remote;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FeatureConfiguration_Remote);
// Dependencies BeatSaber.FeatureFlags.FeatureConfiguration
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatSaber.FeatureFlags.FeatureConfiguration/Remote
class CORDL_TYPE FeatureConfiguration_Remote : public ::BeatSaber::FeatureFlags::FeatureConfiguration {
public:
  // Declarations
  /// @brief Field defaultValue, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_defaultValue, put = __cordl_internal_set_defaultValue)) bool defaultValue;

  /// @brief Field feature, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_feature, put = __cordl_internal_set_feature)) ::StringW feature;

  static inline ::GlobalNamespace::FeatureConfiguration_Remote* New_ctor(::StringW feature, bool defaultValue);

  constexpr bool const& __cordl_internal_get_defaultValue() const;

  constexpr bool& __cordl_internal_get_defaultValue();

  constexpr ::StringW const& __cordl_internal_get_feature() const;

  constexpr ::StringW& __cordl_internal_get_feature();

  constexpr void __cordl_internal_set_defaultValue(bool value);

  constexpr void __cordl_internal_set_feature(::StringW value);

  /// @brief Method .ctor, addr 0x31f4ed8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW feature, bool defaultValue);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FeatureConfiguration_Remote();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FeatureConfiguration_Remote", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FeatureConfiguration_Remote(FeatureConfiguration_Remote&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FeatureConfiguration_Remote", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FeatureConfiguration_Remote(FeatureConfiguration_Remote const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22636 };

  /// @brief Field feature, offset: 0x10, size: 0x8, def value: None
  ::StringW ___feature;

  /// @brief Field defaultValue, offset: 0x18, size: 0x1, def value: None
  bool ___defaultValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FeatureConfiguration_Remote, ___feature) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FeatureConfiguration_Remote, ___defaultValue) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FeatureConfiguration_Remote, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FeatureConfiguration_Remote);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FeatureConfiguration_Remote*, "BeatSaber.FeatureFlags", "FeatureConfiguration/Remote");
