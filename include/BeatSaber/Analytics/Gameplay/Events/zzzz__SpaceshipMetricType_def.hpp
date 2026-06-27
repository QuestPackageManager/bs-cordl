#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/Events/SpaceshipMetricType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SpaceshipMetricType)
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay::Events {
class SpaceshipMetricType;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType);
// Dependencies System.Object
namespace BeatSaber::Analytics::Gameplay::Events {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.Events.SpaceshipMetricType
class CORDL_TYPE SpaceshipMetricType : public ::System::Object {
public:
// Declarations
/// @brief Field Action, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Action, put=setStaticF_Action)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  Action;

/// @brief Field Damage, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Damage, put=setStaticF_Damage)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  Damage;

/// @brief Field Death, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Death, put=setStaticF_Death)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  Death;

/// @brief Field Discovery, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Discovery, put=setStaticF_Discovery)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  Discovery;

/// @brief Field Distance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Distance, put=setStaticF_Distance)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  Distance;

/// @brief Field Friction, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Friction, put=setStaticF_Friction)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  Friction;

/// @brief Field Other, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Other, put=setStaticF_Other)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  Other;

/// @brief Field Outcome, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Outcome, put=setStaticF_Outcome)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  Outcome;

/// @brief Field Preq, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Preq, put=setStaticF_Preq)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  Preq;

/// @brief Field Progression, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Progression, put=setStaticF_Progression)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  Progression;

/// @brief Field Purchase, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Purchase, put=setStaticF_Purchase)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  Purchase;

/// @brief Field Rate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Rate, put=setStaticF_Rate)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  Rate;

/// @brief Field RewardCurrency, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RewardCurrency, put=setStaticF_RewardCurrency)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  RewardCurrency;

/// @brief Field RewardItems, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RewardItems, put=setStaticF_RewardItems)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  RewardItems;

/// @brief Field RewardPoints, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RewardPoints, put=setStaticF_RewardPoints)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  RewardPoints;

/// @brief Field RewardStatus, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RewardStatus, put=setStaticF_RewardStatus)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  RewardStatus;

/// @brief Field Social, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Social, put=setStaticF_Social)) ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  Social;

 __declspec(property(get=get_Value)) ::StringW  Value;

/// @brief Field <Value>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Value_k__BackingField, put=__cordl_internal_set__Value_k__BackingField)) ::StringW  _Value_k__BackingField;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* New_ctor(::StringW  value) ;

/// @brief Method ToString, addr 0x31d11c8, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get__Value_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Value_k__BackingField() ;

constexpr void __cordl_internal_set__Value_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x31d11c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  value) ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* getStaticF_Action() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* getStaticF_Damage() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* getStaticF_Death() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* getStaticF_Discovery() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* getStaticF_Distance() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* getStaticF_Friction() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* getStaticF_Other() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* getStaticF_Outcome() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* getStaticF_Preq() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* getStaticF_Progression() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* getStaticF_Purchase() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* getStaticF_Rate() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* getStaticF_RewardCurrency() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* getStaticF_RewardItems() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* getStaticF_RewardPoints() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* getStaticF_RewardStatus() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType* getStaticF_Social() ;

/// @brief Method get_Value, addr 0x31d11b8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Value() ;

static inline void setStaticF_Action(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  value) ;

static inline void setStaticF_Damage(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  value) ;

static inline void setStaticF_Death(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  value) ;

static inline void setStaticF_Discovery(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  value) ;

static inline void setStaticF_Distance(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  value) ;

static inline void setStaticF_Friction(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  value) ;

static inline void setStaticF_Other(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  value) ;

static inline void setStaticF_Outcome(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  value) ;

static inline void setStaticF_Preq(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  value) ;

static inline void setStaticF_Progression(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  value) ;

static inline void setStaticF_Purchase(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  value) ;

static inline void setStaticF_Rate(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  value) ;

static inline void setStaticF_RewardCurrency(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  value) ;

static inline void setStaticF_RewardItems(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  value) ;

static inline void setStaticF_RewardPoints(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  value) ;

static inline void setStaticF_RewardStatus(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  value) ;

static inline void setStaticF_Social(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpaceshipMetricType() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpaceshipMetricType", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpaceshipMetricType(SpaceshipMetricType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpaceshipMetricType", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpaceshipMetricType(SpaceshipMetricType const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22111};

/// @brief Field <Value>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Value_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType, ____Value_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType, 0x18>, "Size mismatch!");

} // namespace end def BeatSaber::Analytics::Gameplay::Events
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::Events::SpaceshipMetricType*, "BeatSaber.Analytics.Gameplay.Events", "SpaceshipMetricType");
