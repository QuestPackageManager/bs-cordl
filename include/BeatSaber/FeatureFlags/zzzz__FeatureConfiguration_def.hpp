#pragma once
// IWYU pragma private; include "BeatSaber/FeatureFlags/FeatureConfiguration.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FeatureConfiguration)
namespace GlobalNamespace {
class FeatureConfiguration_Hardcoded;
}
namespace GlobalNamespace {
class FeatureConfiguration_RemoteWithDependency;
}
namespace GlobalNamespace {
class FeatureConfiguration_Remote;
}
// Forward declare root types
namespace BeatSaber::FeatureFlags {
class FeatureConfiguration;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::FeatureFlags::FeatureConfiguration);
// Dependencies System.Object
namespace BeatSaber::FeatureFlags {
// Is value type: false
// CS Name: BeatSaber.FeatureFlags.FeatureConfiguration
class CORDL_TYPE FeatureConfiguration : public ::System::Object {
public:
  // Declarations
  using Hardcoded = ::GlobalNamespace::FeatureConfiguration_Hardcoded;

  using Remote = ::GlobalNamespace::FeatureConfiguration_Remote;

  using RemoteWithDependency = ::GlobalNamespace::FeatureConfiguration_RemoteWithDependency;

  static inline ::BeatSaber::FeatureFlags::FeatureConfiguration* New_ctor();

  /// @brief Method .ctor, addr 0x31f4ecc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FeatureConfiguration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FeatureConfiguration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FeatureConfiguration(FeatureConfiguration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FeatureConfiguration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FeatureConfiguration(FeatureConfiguration const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22638 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::FeatureFlags::FeatureConfiguration, 0x10>, "Size mismatch!");

} // namespace BeatSaber::FeatureFlags
NEED_NO_BOX(::BeatSaber::FeatureFlags::FeatureConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::FeatureFlags::FeatureConfiguration*, "BeatSaber.FeatureFlags", "FeatureConfiguration");
