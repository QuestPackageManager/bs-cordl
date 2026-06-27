#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapCharacteristicsDropdown.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapCharacteristicsDropdown)
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class BeatmapCharacteristicsDropdown___c;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace HMUI {
class SimpleTextDropdown;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicsDropdown;
}
namespace GlobalNamespace {
class BeatmapCharacteristicsDropdown___c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCharacteristicsDropdown);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCharacteristicsDropdown___c);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapCharacteristicsDropdown/<>c
class CORDL_TYPE BeatmapCharacteristicsDropdown___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::BeatmapCharacteristicsDropdown___c*  __9;

/// @brief Field <>9__7_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_0, put=setStaticF___9__7_0)) ::System::Func_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>,::StringW>*  __9__7_0;

static inline ::GlobalNamespace::BeatmapCharacteristicsDropdown___c* New_ctor() ;

/// @brief Method <OnEnable>b__7_0, addr 0x5816530, size 0x18, virtual false, abstract: false, final false
inline ::StringW _OnEnable_b__7_0(::GlobalNamespace::BeatmapCharacteristicSO*  x) ;

/// @brief Method .ctor, addr 0x581652c, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::BeatmapCharacteristicsDropdown___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>,::StringW>* getStaticF___9__7_0() ;

static inline void setStaticF___9(::GlobalNamespace::BeatmapCharacteristicsDropdown___c*  value) ;

static inline void setStaticF___9__7_0(::System::Func_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BeatmapCharacteristicsDropdown___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicsDropdown___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapCharacteristicsDropdown___c(BeatmapCharacteristicsDropdown___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicsDropdown___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapCharacteristicsDropdown___c(BeatmapCharacteristicsDropdown___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6926};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCharacteristicsDropdown___c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapCharacteristicsDropdown
class CORDL_TYPE BeatmapCharacteristicsDropdown : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::BeatmapCharacteristicsDropdown___c;

/// @brief Field _beatmapCharacteristicCollection, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__beatmapCharacteristicCollection, put=__cordl_internal_set__beatmapCharacteristicCollection)) ::GlobalNamespace::BeatmapCharacteristicCollection*  _beatmapCharacteristicCollection;

/// @brief Field _beatmapCharacteristics, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__beatmapCharacteristics, put=__cordl_internal_set__beatmapCharacteristics)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*  _beatmapCharacteristics;

/// @brief Field _notAllowedCharacteristics, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__notAllowedCharacteristics, put=__cordl_internal_set__notAllowedCharacteristics)) ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>,::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>  _notAllowedCharacteristics;

/// @brief Field _simpleTextDropdown, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__simpleTextDropdown, put=__cordl_internal_set__simpleTextDropdown)) ::UnityW<::HMUI::SimpleTextDropdown>  _simpleTextDropdown;

/// @brief Field didSelectCellWithIdxEvent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_didSelectCellWithIdxEvent, put=__cordl_internal_set_didSelectCellWithIdxEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*  didSelectCellWithIdxEvent;

/// @brief Method GetSelectedBeatmapCharacteristic, addr 0x58161d0, size 0x60, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> GetSelectedBeatmapCharacteristic() ;

/// @brief Method HandleSimpleTextDropdownDidSelectCellWithIdx, addr 0x58163a4, size 0x90, virtual false, abstract: false, final false
inline void HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView*  dropdownWithTableView, int32_t  idx) ;

static inline ::GlobalNamespace::BeatmapCharacteristicsDropdown* New_ctor() ;

/// @brief Method OnDisable, addr 0x58160ec, size 0xdc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5815edc, size 0x210, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SelectCellWithBeatmapCharacteristic, addr 0x5816230, size 0x98, virtual false, abstract: false, final false
inline void SelectCellWithBeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO*  beatmapCharacteristic) ;

/// @brief Method SelectCellWithBeatmapCharacteristic, addr 0x58162c8, size 0xdc, virtual false, abstract: false, final false
inline void SelectCellWithBeatmapCharacteristic(::StringW  serializedName) ;

/// @brief Method SetNotAllowedCharacteristics, addr 0x58161c8, size 0x8, virtual false, abstract: false, final false
inline void SetNotAllowedCharacteristics(::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*,::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>  notAllowedCharacteristics) ;

constexpr ::GlobalNamespace::BeatmapCharacteristicCollection* const& __cordl_internal_get__beatmapCharacteristicCollection() const;

constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& __cordl_internal_get__beatmapCharacteristicCollection() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* const& __cordl_internal_get__beatmapCharacteristics() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*& __cordl_internal_get__beatmapCharacteristics() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>,::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> const& __cordl_internal_get__notAllowedCharacteristics() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>,::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>& __cordl_internal_get__notAllowedCharacteristics() ;

constexpr ::UnityW<::HMUI::SimpleTextDropdown> const& __cordl_internal_get__simpleTextDropdown() const;

constexpr ::UnityW<::HMUI::SimpleTextDropdown>& __cordl_internal_get__simpleTextDropdown() ;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* const& __cordl_internal_get_didSelectCellWithIdxEvent() const;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*& __cordl_internal_get_didSelectCellWithIdxEvent() ;

constexpr void __cordl_internal_set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection*  value) ;

constexpr void __cordl_internal_set__beatmapCharacteristics(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*  value) ;

constexpr void __cordl_internal_set__notAllowedCharacteristics(::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>,::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>  value) ;

constexpr void __cordl_internal_set__simpleTextDropdown(::UnityW<::HMUI::SimpleTextDropdown>  value) ;

constexpr void __cordl_internal_set_didSelectCellWithIdxEvent(::System::Action_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*  value) ;

/// @brief Method .ctor, addr 0x5816434, size 0xa4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_didSelectCellWithIdxEvent, addr 0x5815d5c, size 0xc0, virtual false, abstract: false, final false
inline void add_didSelectCellWithIdxEvent(::System::Action_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*  value) ;

/// @brief Method remove_didSelectCellWithIdxEvent, addr 0x5815e1c, size 0xc0, virtual false, abstract: false, final false
inline void remove_didSelectCellWithIdxEvent(::System::Action_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BeatmapCharacteristicsDropdown() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicsDropdown", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapCharacteristicsDropdown(BeatmapCharacteristicsDropdown && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicsDropdown", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapCharacteristicsDropdown(BeatmapCharacteristicsDropdown const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6927};

/// @brief Field _simpleTextDropdown, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::HMUI::SimpleTextDropdown>  ____simpleTextDropdown;

/// @brief Field _beatmapCharacteristicCollection, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::BeatmapCharacteristicCollection*  ____beatmapCharacteristicCollection;

/// @brief Field didSelectCellWithIdxEvent, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*  ___didSelectCellWithIdxEvent;

/// @brief Field _beatmapCharacteristics, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*  ____beatmapCharacteristics;

/// @brief Field _notAllowedCharacteristics, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>,::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>  ____notAllowedCharacteristics;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsDropdown, ____simpleTextDropdown) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsDropdown, ____beatmapCharacteristicCollection) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsDropdown, ___didSelectCellWithIdxEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsDropdown, ____beatmapCharacteristics) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsDropdown, ____notAllowedCharacteristics) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCharacteristicsDropdown, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicsDropdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicsDropdown*, "", "BeatmapCharacteristicsDropdown");
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicsDropdown___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicsDropdown___c*, "", "BeatmapCharacteristicsDropdown/<>c");
