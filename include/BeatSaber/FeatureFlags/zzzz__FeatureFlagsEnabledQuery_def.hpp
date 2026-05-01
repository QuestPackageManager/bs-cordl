#pragma once
// IWYU pragma private; include "BeatSaber/FeatureFlags/FeatureFlagsEnabledQuery.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/GraphQL/Client/zzzz__QueryRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FeatureFlagsEnabledQuery)
namespace Main::GraphQL::Queries {
class FeatureFlagsEnabled;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace BeatSaber::FeatureFlags {
class FeatureFlagsEnabledQuery;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery);
// Dependencies OculusStudios.GraphQL.Client.QueryRequest
namespace BeatSaber::FeatureFlags {
// Is value type: false
// CS Name: BeatSaber.FeatureFlags.FeatureFlagsEnabledQuery
class CORDL_TYPE FeatureFlagsEnabledQuery : public ::OculusStudios::GraphQL::Client::QueryRequest {
public:
  // Declarations
  /// @brief Method CreateQuery, addr 0x31f74c4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Main::GraphQL::Queries::FeatureFlagsEnabled* CreateQuery(::System::Collections::Generic::List_1<::StringW>* features);

  static inline ::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery* New_ctor(::System::Collections::Generic::List_1<::StringW>* features);

  /// @brief Method .ctor, addr 0x31f6f70, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::StringW>* features);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FeatureFlagsEnabledQuery();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FeatureFlagsEnabledQuery", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FeatureFlagsEnabledQuery(FeatureFlagsEnabledQuery&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FeatureFlagsEnabledQuery", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FeatureFlagsEnabledQuery(FeatureFlagsEnabledQuery const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22650 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery, 0x68>, "Size mismatch!");

} // namespace BeatSaber::FeatureFlags
NEED_NO_BOX(::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::FeatureFlags::FeatureFlagsEnabledQuery*, "BeatSaber.FeatureFlags", "FeatureFlagsEnabledQuery");
