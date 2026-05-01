#pragma once
// IWYU pragma private; include "BeatSaber/FeatureFlags/FeatureConfiguration_RemoteWithDependency.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/FeatureFlags/zzzz__FeatureConfiguration_Remote_def.hpp"
#include "BeatSaber/FeatureFlags/zzzz__Feature_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FeatureConfiguration_RemoteWithDependency)
namespace BeatSaber::FeatureFlags {
struct Feature;
}
// Forward declare root types
namespace GlobalNamespace {
class FeatureConfiguration_RemoteWithDependency;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FeatureConfiguration_RemoteWithDependency);
// Dependencies BeatSaber.FeatureFlags.Feature, BeatSaber.FeatureFlags.FeatureConfiguration::Remote
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatSaber.FeatureFlags.FeatureConfiguration/RemoteWithDependency
class CORDL_TYPE FeatureConfiguration_RemoteWithDependency : public ::GlobalNamespace::FeatureConfiguration_Remote {
public:
  // Declarations
  /// @brief Field dependency, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_dependency, put = __cordl_internal_set_dependency)) ::BeatSaber::FeatureFlags::Feature dependency;

  static inline ::GlobalNamespace::FeatureConfiguration_RemoteWithDependency* New_ctor(::StringW feature, bool defaultValue, ::BeatSaber::FeatureFlags::Feature dependency);

  constexpr ::BeatSaber::FeatureFlags::Feature const& __cordl_internal_get_dependency() const;

  constexpr ::BeatSaber::FeatureFlags::Feature& __cordl_internal_get_dependency();

  constexpr void __cordl_internal_set_dependency(::BeatSaber::FeatureFlags::Feature value);

  /// @brief Method .ctor, addr 0x31f4ee4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::StringW feature, bool defaultValue, ::BeatSaber::FeatureFlags::Feature dependency);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FeatureConfiguration_RemoteWithDependency();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FeatureConfiguration_RemoteWithDependency", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FeatureConfiguration_RemoteWithDependency(FeatureConfiguration_RemoteWithDependency&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FeatureConfiguration_RemoteWithDependency", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FeatureConfiguration_RemoteWithDependency(FeatureConfiguration_RemoteWithDependency const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22637 };

  /// @brief Field dependency, offset: 0x1c, size: 0x4, def value: None
  ::BeatSaber::FeatureFlags::Feature ___dependency;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FeatureConfiguration_RemoteWithDependency, ___dependency) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FeatureConfiguration_RemoteWithDependency, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FeatureConfiguration_RemoteWithDependency);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FeatureConfiguration_RemoteWithDependency*, "BeatSaber.FeatureFlags", "FeatureConfiguration/RemoteWithDependency");
