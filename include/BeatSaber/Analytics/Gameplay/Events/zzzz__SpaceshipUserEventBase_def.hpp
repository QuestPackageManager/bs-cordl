#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/Events/SpaceshipUserEventBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OSCE/Analytics/zzzz__BaseAnalyticsEvent_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SpaceshipUserEventBase)
namespace GlobalNamespace {
struct IDType;
}
namespace OSCE::Analytics {
class AnalyticsManager;
}
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay::Events {
class SpaceshipUserEventBase;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase);
// Dependencies OSCE.Analytics.BaseAnalyticsEvent, System.Nullable`1<T>
namespace BeatSaber::Analytics::Gameplay::Events {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.Events.SpaceshipUserEventBase
class CORDL_TYPE SpaceshipUserEventBase : public ::OSCE::Analytics::BaseAnalyticsEvent {
public:
// Declarations
/// @brief Field app_id, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_app_id, put=__cordl_internal_set_app_id)) ::System::Nullable_1<uint64_t>  app_id;

/// @brief Field seg_id, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_seg_id, put=__cordl_internal_set_seg_id)) ::StringW  seg_id;

/// @brief Field seq_num, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_seq_num, put=__cordl_internal_set_seq_num)) ::System::Nullable_1<int32_t>  seq_num;

/// @brief Field session_id, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_session_id, put=__cordl_internal_set_session_id)) ::StringW  session_id;

/// @brief Field user_rid, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_user_rid, put=__cordl_internal_set_user_rid)) ::System::Nullable_1<int64_t>  user_rid;

/// @brief Field user_type, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_user_type, put=__cordl_internal_set_user_type)) ::StringW  user_type;

/// @brief Method ApplyBasicFields, addr 0x31d1090, size 0x128, virtual true, abstract: false, final false
inline void ApplyBasicFields(::OSCE::Analytics::AnalyticsManager*  manager) ;

/// @brief Method GetIDType, addr 0x31d17a0, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::IDType GetIDType() ;

static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase* New_ctor() ;

/// @brief Method ReturnEventToPool, addr 0x31d17a8, size 0x4c, virtual true, abstract: false, final false
inline void ReturnEventToPool() ;

constexpr ::System::Nullable_1<uint64_t> const& __cordl_internal_get_app_id() const;

constexpr ::System::Nullable_1<uint64_t>& __cordl_internal_get_app_id() ;

constexpr ::StringW const& __cordl_internal_get_seg_id() const;

constexpr ::StringW& __cordl_internal_get_seg_id() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_seq_num() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_seq_num() ;

constexpr ::StringW const& __cordl_internal_get_session_id() const;

constexpr ::StringW& __cordl_internal_get_session_id() ;

constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get_user_rid() const;

constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get_user_rid() ;

constexpr ::StringW const& __cordl_internal_get_user_type() const;

constexpr ::StringW& __cordl_internal_get_user_type() ;

constexpr void __cordl_internal_set_app_id(::System::Nullable_1<uint64_t>  value) ;

constexpr void __cordl_internal_set_seg_id(::StringW  value) ;

constexpr void __cordl_internal_set_seq_num(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_session_id(::StringW  value) ;

constexpr void __cordl_internal_set_user_rid(::System::Nullable_1<int64_t>  value) ;

constexpr void __cordl_internal_set_user_type(::StringW  value) ;

/// @brief Method .ctor, addr 0x31d0d40, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpaceshipUserEventBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpaceshipUserEventBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpaceshipUserEventBase(SpaceshipUserEventBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpaceshipUserEventBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpaceshipUserEventBase(SpaceshipUserEventBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22115};

/// @brief Field seg_id, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___seg_id;

/// @brief Field app_id, offset: 0x30, size: 0x10, def value: None
 ::System::Nullable_1<uint64_t>  ___app_id;

/// @brief Field session_id, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___session_id;

/// @brief Field user_rid, offset: 0x48, size: 0x10, def value: None
 ::System::Nullable_1<int64_t>  ___user_rid;

/// @brief Field seq_num, offset: 0x58, size: 0x8, def value: None
 ::System::Nullable_1<int32_t>  ___seq_num;

/// @brief Field user_type, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___user_type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase, ___seg_id) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase, ___app_id) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase, ___session_id) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase, ___user_rid) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase, ___seq_num) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase, ___user_type) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase, 0x68>, "Size mismatch!");

} // namespace end def BeatSaber::Analytics::Gameplay::Events
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase*, "BeatSaber.Analytics.Gameplay.Events", "SpaceshipUserEventBase");
