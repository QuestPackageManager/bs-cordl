#pragma once
// IWYU pragma private; include "BeatSaber/FeatureFlags/IFeatureFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IFeatureFlags)
namespace BeatSaber::FeatureFlags {
class FeatureConfiguration;
}
namespace BeatSaber::FeatureFlags {
struct Feature;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IReadOnlyDictionary_2;
}
// Forward declare root types
namespace BeatSaber::FeatureFlags {
class IFeatureFlags;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::FeatureFlags::IFeatureFlags);
// Dependencies 
namespace BeatSaber::FeatureFlags {
// Is value type: false
// CS Name: BeatSaber.FeatureFlags.IFeatureFlags
class CORDL_TYPE IFeatureFlags {
public:
// Declarations
/// @brief Method GetConfiguration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::BeatSaber::FeatureFlags::Feature,::BeatSaber::FeatureFlags::FeatureConfiguration*>* GetConfiguration() ;

// Ctor Parameters [CppParam { name: "", ty: "IFeatureFlags", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFeatureFlags(IFeatureFlags const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22651};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatSaber::FeatureFlags
NEED_NO_BOX(::BeatSaber::FeatureFlags::IFeatureFlags);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::FeatureFlags::IFeatureFlags*, "BeatSaber.FeatureFlags", "IFeatureFlags");
