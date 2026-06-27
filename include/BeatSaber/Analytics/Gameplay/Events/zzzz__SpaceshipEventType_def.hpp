#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/Events/SpaceshipEventType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SpaceshipEventType)
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay::Events {
class SpaceshipEventType;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType);
// Dependencies System.Object
namespace BeatSaber::Analytics::Gameplay::Events {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.Events.SpaceshipEventType
class CORDL_TYPE SpaceshipEventType : public ::System::Object {
public:
// Declarations
/// @brief Field ChangeSetting, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ChangeSetting, put=setStaticF_ChangeSetting)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*  ChangeSetting;

/// @brief Field End, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_End, put=setStaticF_End)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*  End;

/// @brief Field EndAbort, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EndAbort, put=setStaticF_EndAbort)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*  EndAbort;

/// @brief Field Heartbeat, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Heartbeat, put=setStaticF_Heartbeat)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*  Heartbeat;

/// @brief Field Pause, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pause, put=setStaticF_Pause)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*  Pause;

/// @brief Field Resume, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Resume, put=setStaticF_Resume)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*  Resume;

/// @brief Field Start, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Start, put=setStaticF_Start)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*  Start;

/// @brief Field Update, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Update, put=setStaticF_Update)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*  Update;

 __declspec(property(get=get_Value)) ::StringW  Value;

/// @brief Field <Value>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Value_k__BackingField, put=__cordl_internal_set__Value_k__BackingField)) ::StringW  _Value_k__BackingField;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* New_ctor(::StringW  value) ;

/// @brief Method ToString, addr 0x31d0d54, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get__Value_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Value_k__BackingField() ;

constexpr void __cordl_internal_set__Value_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x31d0d4c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  value) ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* getStaticF_ChangeSetting() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* getStaticF_End() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* getStaticF_EndAbort() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* getStaticF_Heartbeat() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* getStaticF_Pause() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* getStaticF_Resume() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* getStaticF_Start() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* getStaticF_Update() ;

/// @brief Method get_Value, addr 0x31d0d44, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Value() ;

static inline void setStaticF_ChangeSetting(::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*  value) ;

static inline void setStaticF_End(::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*  value) ;

static inline void setStaticF_EndAbort(::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*  value) ;

static inline void setStaticF_Heartbeat(::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*  value) ;

static inline void setStaticF_Pause(::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*  value) ;

static inline void setStaticF_Resume(::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*  value) ;

static inline void setStaticF_Start(::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*  value) ;

static inline void setStaticF_Update(::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpaceshipEventType() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpaceshipEventType", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpaceshipEventType(SpaceshipEventType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpaceshipEventType", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpaceshipEventType(SpaceshipEventType const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22107};

/// @brief Field <Value>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Value_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType, ____Value_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType, 0x18>, "Size mismatch!");

} // namespace end def BeatSaber::Analytics::Gameplay::Events
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*, "BeatSaber.Analytics.Gameplay.Events", "SpaceshipEventType");
