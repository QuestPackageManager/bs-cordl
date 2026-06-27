#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/SegmentState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SegmentState)
namespace BeatSaber::Analytics::Gameplay::Events {
class SpaceshipSegmentEventSettingsField;
}
namespace BeatSaber::Analytics::Gameplay::Events {
class SpaceshipSegmentType;
}
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay {
class SegmentState;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::SegmentState);
// Dependencies System.Object
namespace BeatSaber::Analytics::Gameplay {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.SegmentState
class CORDL_TYPE SegmentState : public ::System::Object {
public:
// Declarations
/// @brief Field SeqNum, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_SeqNum, put=__cordl_internal_set_SeqNum)) int32_t  SeqNum;

/// @brief Field Settings, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Settings, put=__cordl_internal_set_Settings)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*  Settings;

/// @brief Field Type, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*  Type;

static inline ::BeatSaber::Analytics::Gameplay::SegmentState* New_ctor(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*  type) ;

constexpr int32_t const& __cordl_internal_get_SeqNum() const;

constexpr int32_t& __cordl_internal_get_SeqNum() ;

constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField* const& __cordl_internal_get_Settings() const;

constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*& __cordl_internal_get_Settings() ;

constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* const& __cordl_internal_get_Type() const;

constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*& __cordl_internal_get_Type() ;

constexpr void __cordl_internal_set_SeqNum(int32_t  value) ;

constexpr void __cordl_internal_set_Settings(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*  value) ;

constexpr void __cordl_internal_set_Type(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*  value) ;

/// @brief Method .ctor, addr 0x31ced14, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*  type) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SegmentState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SegmentState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SegmentState(SegmentState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SegmentState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SegmentState(SegmentState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22084};

/// @brief Field Type, offset: 0x10, size: 0x8, def value: None
 ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*  ___Type;

/// @brief Field Settings, offset: 0x18, size: 0x8, def value: None
 ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentEventSettingsField*  ___Settings;

/// @brief Field SeqNum, offset: 0x20, size: 0x4, def value: None
 int32_t  ___SeqNum;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Gameplay::SegmentState, ___Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::SegmentState, ___Settings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::SegmentState, ___SeqNum) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Analytics::Gameplay::SegmentState, 0x28>, "Size mismatch!");

} // namespace end def BeatSaber::Analytics::Gameplay
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::SegmentState);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::SegmentState*, "BeatSaber.Analytics.Gameplay", "SegmentState");
