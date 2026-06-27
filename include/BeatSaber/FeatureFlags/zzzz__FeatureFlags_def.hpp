#pragma once
// IWYU pragma private; include "BeatSaber/FeatureFlags/FeatureFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FeatureFlags)
namespace BeatSaber::FeatureFlags {
class FeatureConfiguration;
}
namespace BeatSaber::FeatureFlags {
struct Feature;
}
namespace BeatSaber::FeatureFlags {
class IFeatureFlags;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IReadOnlyDictionary_2;
}
// Forward declare root types
namespace BeatSaber::FeatureFlags {
class FeatureFlags;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::FeatureFlags::FeatureFlags);
// Dependencies System.Object
namespace BeatSaber::FeatureFlags {
// Is value type: false
// CS Name: BeatSaber.FeatureFlags.FeatureFlags
class CORDL_TYPE FeatureFlags : public ::System::Object {
public:
// Declarations
/// @brief Field _configurations, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__configurations, put=__cordl_internal_set__configurations)) ::System::Collections::Generic::Dictionary_2<::BeatSaber::FeatureFlags::Feature,::BeatSaber::FeatureFlags::FeatureConfiguration*>*  _configurations;

/// @brief Convert operator to "::BeatSaber::FeatureFlags::IFeatureFlags"
constexpr operator  ::BeatSaber::FeatureFlags::IFeatureFlags*() noexcept;

/// @brief Method GetConfiguration, addr 0x31f5c14, size 0x8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::BeatSaber::FeatureFlags::Feature,::BeatSaber::FeatureFlags::FeatureConfiguration*>* GetConfiguration() ;

static inline ::BeatSaber::FeatureFlags::FeatureFlags* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::BeatSaber::FeatureFlags::Feature,::BeatSaber::FeatureFlags::FeatureConfiguration*>* const& __cordl_internal_get__configurations() const;

constexpr ::System::Collections::Generic::Dictionary_2<::BeatSaber::FeatureFlags::Feature,::BeatSaber::FeatureFlags::FeatureConfiguration*>*& __cordl_internal_get__configurations() ;

constexpr void __cordl_internal_set__configurations(::System::Collections::Generic::Dictionary_2<::BeatSaber::FeatureFlags::Feature,::BeatSaber::FeatureFlags::FeatureConfiguration*>*  value) ;

/// @brief Method .ctor, addr 0x31f5c1c, size 0x198, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::BeatSaber::FeatureFlags::IFeatureFlags"
constexpr ::BeatSaber::FeatureFlags::IFeatureFlags* i___BeatSaber__FeatureFlags__IFeatureFlags() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FeatureFlags() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FeatureFlags", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FeatureFlags(FeatureFlags && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FeatureFlags", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FeatureFlags(FeatureFlags const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22643};

/// @brief Field _configurations, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::BeatSaber::FeatureFlags::Feature,::BeatSaber::FeatureFlags::FeatureConfiguration*>*  ____configurations;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::FeatureFlags::FeatureFlags, ____configurations) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::FeatureFlags::FeatureFlags, 0x18>, "Size mismatch!");

} // namespace end def BeatSaber::FeatureFlags
NEED_NO_BOX(::BeatSaber::FeatureFlags::FeatureFlags);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::FeatureFlags::FeatureFlags*, "BeatSaber.FeatureFlags", "FeatureFlags");
