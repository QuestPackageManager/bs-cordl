#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/Events/SpaceshipSegmentType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SpaceshipSegmentType)
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay::Events {
class SpaceshipSegmentType;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType);
// Dependencies System.Object
namespace BeatSaber::Analytics::Gameplay::Events {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.Events.SpaceshipSegmentType
class CORDL_TYPE SpaceshipSegmentType : public ::System::Object {
public:
// Declarations
/// @brief Field Cutscene, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Cutscene, put=setStaticF_Cutscene)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*  Cutscene;

/// @brief Field Loading, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Loading, put=setStaticF_Loading)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*  Loading;

/// @brief Field Lobby, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Lobby, put=setStaticF_Lobby)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*  Lobby;

/// @brief Field Main, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Main, put=setStaticF_Main)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*  Main;

/// @brief Field Menu, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Menu, put=setStaticF_Menu)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*  Menu;

/// @brief Field Other, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Other, put=setStaticF_Other)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*  Other;

/// @brief Field Store, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Store, put=setStaticF_Store)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*  Store;

/// @brief Field Tutorial, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Tutorial, put=setStaticF_Tutorial)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*  Tutorial;

 __declspec(property(get=get_Value)) ::StringW  Value;

/// @brief Field <Value>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Value_k__BackingField, put=__cordl_internal_set__Value_k__BackingField)) ::StringW  _Value_k__BackingField;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* New_ctor(::StringW  value) ;

/// @brief Method ToString, addr 0x31d15b4, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get__Value_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Value_k__BackingField() ;

constexpr void __cordl_internal_set__Value_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x31d15ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  value) ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* getStaticF_Cutscene() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* getStaticF_Loading() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* getStaticF_Lobby() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* getStaticF_Main() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* getStaticF_Menu() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* getStaticF_Other() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* getStaticF_Store() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* getStaticF_Tutorial() ;

/// @brief Method get_Value, addr 0x31d15a4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Value() ;

static inline void setStaticF_Cutscene(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*  value) ;

static inline void setStaticF_Loading(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*  value) ;

static inline void setStaticF_Lobby(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*  value) ;

static inline void setStaticF_Main(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*  value) ;

static inline void setStaticF_Menu(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*  value) ;

static inline void setStaticF_Other(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*  value) ;

static inline void setStaticF_Store(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*  value) ;

static inline void setStaticF_Tutorial(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpaceshipSegmentType() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpaceshipSegmentType", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpaceshipSegmentType(SpaceshipSegmentType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpaceshipSegmentType", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpaceshipSegmentType(SpaceshipSegmentType const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22114};

/// @brief Field <Value>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Value_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType, ____Value_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType, 0x18>, "Size mismatch!");

} // namespace end def BeatSaber::Analytics::Gameplay::Events
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*, "BeatSaber.Analytics.Gameplay.Events", "SpaceshipSegmentType");
