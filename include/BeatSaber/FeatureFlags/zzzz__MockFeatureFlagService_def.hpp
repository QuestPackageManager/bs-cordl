#pragma once
// IWYU pragma private; include "BeatSaber/FeatureFlags/MockFeatureFlagService.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MockFeatureFlagService)
namespace BeatSaber::FeatureFlags {
struct Feature;
}
namespace BeatSaber::FeatureFlags {
class IFeatureFlagService;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace Zenject {
class IInitializable;
}
// Forward declare root types
namespace BeatSaber::FeatureFlags {
class MockFeatureFlagService;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::FeatureFlags::MockFeatureFlagService);
// Dependencies System.Object
namespace BeatSaber::FeatureFlags {
// Is value type: false
// CS Name: BeatSaber.FeatureFlags.MockFeatureFlagService
class CORDL_TYPE MockFeatureFlagService : public ::System::Object {
public:
  // Declarations
  /// @brief Field _enabledFeatures, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__enabledFeatures,
                      put = __cordl_internal_set__enabledFeatures)) ::System::Collections::Generic::Dictionary_2<::BeatSaber::FeatureFlags::Feature, bool>* _enabledFeatures;

  /// @brief Convert operator to "::BeatSaber::FeatureFlags::IFeatureFlagService"
  constexpr operator ::BeatSaber::FeatureFlags::IFeatureFlagService*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method Initialize, addr 0x31f723c, size 0x28, virtual true, abstract: false, final true
  inline void Initialize();

  /// @brief Method IsFeatureEnabled, addr 0x31f72e0, size 0x98, virtual true, abstract: false, final true
  inline ::System::Nullable_1<bool> IsFeatureEnabled(::BeatSaber::FeatureFlags::Feature feature);

  /// @brief Method IsFeatureEnabledAsync, addr 0x31f7378, size 0xb4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<bool>* IsFeatureEnabledAsync(::BeatSaber::FeatureFlags::Feature feature);

  static inline ::BeatSaber::FeatureFlags::MockFeatureFlagService* New_ctor();

  /// @brief Method SetFeatureEnabled, addr 0x31f7264, size 0x7c, virtual false, abstract: false, final false
  inline void SetFeatureEnabled(::BeatSaber::FeatureFlags::Feature feature, bool enabled);

  constexpr ::System::Collections::Generic::Dictionary_2<::BeatSaber::FeatureFlags::Feature, bool>* const& __cordl_internal_get__enabledFeatures() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::BeatSaber::FeatureFlags::Feature, bool>*& __cordl_internal_get__enabledFeatures();

  constexpr void __cordl_internal_set__enabledFeatures(::System::Collections::Generic::Dictionary_2<::BeatSaber::FeatureFlags::Feature, bool>* value);

  /// @brief Method .ctor, addr 0x31f742c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::BeatSaber::FeatureFlags::IFeatureFlagService"
  constexpr ::BeatSaber::FeatureFlags::IFeatureFlagService* i___BeatSaber__FeatureFlags__IFeatureFlagService() noexcept;

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockFeatureFlagService();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockFeatureFlagService", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockFeatureFlagService(MockFeatureFlagService&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockFeatureFlagService", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockFeatureFlagService(MockFeatureFlagService const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22649 };

  /// @brief Field _enabledFeatures, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::BeatSaber::FeatureFlags::Feature, bool>* ____enabledFeatures;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::FeatureFlags::MockFeatureFlagService, ____enabledFeatures) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::FeatureFlags::MockFeatureFlagService, 0x18>, "Size mismatch!");

} // namespace BeatSaber::FeatureFlags
NEED_NO_BOX(::BeatSaber::FeatureFlags::MockFeatureFlagService);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::FeatureFlags::MockFeatureFlagService*, "BeatSaber.FeatureFlags", "MockFeatureFlagService");
