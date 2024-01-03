#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LevelCollectionTableView_def.hpp"
#include "GlobalNamespace/zzzz__LevelListTableCell_def.hpp"
#include "GlobalNamespace/zzzz__IAdditionalContentModel_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsPromoDataSO_def.hpp"
#include "GlobalNamespace/zzzz__LevelPackHeaderTableCell_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "GlobalNamespace/zzzz__LevelCollectionTableView_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "HMUI/zzzz__AlphabetScrollbar_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__LevelCollectionTableView____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelCollectionTableView____c::*)()>(
    &::GlobalNamespace::__LevelCollectionTableView____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e6d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelCollectionTableView____c*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LevelCollectionTableView____c._SetData_b__27_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__LevelCollectionTableView____c::*)(::GlobalNamespace::IPreviewBeatmapLevel*)>(
    &::GlobalNamespace::__LevelCollectionTableView____c::_SetData_b__27_0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x22e6d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelCollectionTableView____c*>::get(), "<SetData>b__27_0", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__LevelCollectionTableView____c::setStaticF___9(::GlobalNamespace::__LevelCollectionTableView____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__LevelCollectionTableView____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelCollectionTableView____c*>::get>(
      std::forward<::GlobalNamespace::__LevelCollectionTableView____c*>(value));
}
inline ::GlobalNamespace::__LevelCollectionTableView____c* GlobalNamespace::__LevelCollectionTableView____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__LevelCollectionTableView____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelCollectionTableView____c*>::get>();
}
inline void GlobalNamespace::__LevelCollectionTableView____c::setStaticF___9__27_0(::System::Func_2<::GlobalNamespace::IPreviewBeatmapLevel*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::IPreviewBeatmapLevel*, bool>*, "<>9__27_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelCollectionTableView____c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::IPreviewBeatmapLevel*, bool>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::IPreviewBeatmapLevel*, bool>* GlobalNamespace::__LevelCollectionTableView____c::getStaticF___9__27_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::IPreviewBeatmapLevel*, bool>*, "<>9__27_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelCollectionTableView____c*>::get>();
}
inline ::GlobalNamespace::__LevelCollectionTableView____c* GlobalNamespace::__LevelCollectionTableView____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LevelCollectionTableView____c*>());
}
inline void GlobalNamespace::__LevelCollectionTableView____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelCollectionTableView____c*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__LevelCollectionTableView____c::_SetData_b__27_0(::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelCollectionTableView____c*>::get(), "<SetData>b__27_0", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, beatmapLevel);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LevelCollectionTableView____c::__LevelCollectionTableView____c() {}
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionTableView.add_didSelectLevelEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionTableView::*)(
    ::System::Action_2<::GlobalNamespace::LevelCollectionTableView*, ::GlobalNamespace::IPreviewBeatmapLevel*>*)>(&::GlobalNamespace::LevelCollectionTableView::add_didSelectLevelEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22e4b7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), "add_didSelectLevelEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionTableView*, ::GlobalNamespace::IPreviewBeatmapLevel*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionTableView.remove_didSelectLevelEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionTableView::*)(
    ::System::Action_2<::GlobalNamespace::LevelCollectionTableView*, ::GlobalNamespace::IPreviewBeatmapLevel*>*)>(&::GlobalNamespace::LevelCollectionTableView::remove_didSelectLevelEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22e4c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), "remove_didSelectLevelEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionTableView*, ::GlobalNamespace::IPreviewBeatmapLevel*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionTableView.add_didSelectHeaderEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionTableView::*)(
    ::System::Action_1<::GlobalNamespace::LevelCollectionTableView*>*)>(&::GlobalNamespace::LevelCollectionTableView::add_didSelectHeaderEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22e4cdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), "add_didSelectHeaderEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelCollectionTableView*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionTableView.remove_didSelectHeaderEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionTableView::*)(
    ::System::Action_1<::GlobalNamespace::LevelCollectionTableView*>*)>(&::GlobalNamespace::LevelCollectionTableView::remove_didSelectHeaderEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22e4d8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), "remove_didSelectHeaderEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelCollectionTableView*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionTableView.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionTableView::*)(::StringW, ::UnityEngine::Sprite*)>(
    &::GlobalNamespace::LevelCollectionTableView::Init)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22e4e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), "Init", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionTableView.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionTableView::*)()>(&::GlobalNamespace::LevelCollectionTableView::Init)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x22e4e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), "Init",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionTableView.SetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionTableView::*)(
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*, ::System::Collections::Generic::HashSet_1<::StringW>*, bool, bool)>(
    &::GlobalNamespace::LevelCollectionTableView::SetData)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x22e4f3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), "SetData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionTableView.RefreshFavorites
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionTableView::*)(::System::Collections::Generic::HashSet_1<::StringW>*)>(
    &::GlobalNamespace::LevelCollectionTableView::RefreshFavorites)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x22e527c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), "RefreshFavorites", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionTableView.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionTableView::*)()>(&::GlobalNamespace::LevelCollectionTableView::OnEnable)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x22e5388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), "OnEnable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionTableView.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionTableView::*)()>(&::GlobalNamespace::LevelCollectionTableView::OnDisable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x22e5474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), "OnDisable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionTableView.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionTableView::*)()>(&::GlobalNamespace::LevelCollectionTableView::OnDestroy)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x22e5564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionTableView.CellSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::LevelCollectionTableView::*)()>(&::GlobalNamespace::LevelCollectionTableView::CellSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e5638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), "CellSize",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionTableView.NumberOfCells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::LevelCollectionTableView::*)()>(
    &::GlobalNamespace::LevelCollectionTableView::NumberOfCells)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22e5640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(),
                                                                               "NumberOfCells", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionTableView.CellForIdx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::TableCell* (::GlobalNamespace::LevelCollectionTableView::*)(::HMUI::TableView*, int32_t)>(
    &::GlobalNamespace::LevelCollectionTableView::CellForIdx)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x22e56f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), "CellForIdx", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionTableView.HandleDidSelectRowEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionTableView::*)(::HMUI::TableView*, int32_t)>(
    &::GlobalNamespace::LevelCollectionTableView::HandleDidSelectRowEvent)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x22e5ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), "HandleDidSelectRowEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionTableView.HandleAdditionalContentModelDidInvalidateData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionTableView::*)()>(
    &::GlobalNamespace::LevelCollectionTableView::HandleAdditionalContentModelDidInvalidateData)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22e5fec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(),
                                                                               "HandleAdditionalContentModelDidInvalidateData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionTableView.CancelAsyncOperations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionTableView::*)()>(
    &::GlobalNamespace::LevelCollectionTableView::CancelAsyncOperations)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x22e6090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(),
                                                                               "CancelAsyncOperations", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionTableView.RefreshLevelsAvailability
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionTableView::*)()>(
    &::GlobalNamespace::LevelCollectionTableView::RefreshLevelsAvailability)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x22e640c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(),
                                                                               "RefreshLevelsAvailability", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionTableView.SelectLevelPackHeaderCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionTableView::*)()>(
    &::GlobalNamespace::LevelCollectionTableView::SelectLevelPackHeaderCell)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22e6954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(),
                                                                               "SelectLevelPackHeaderCell", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionTableView.ClearSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionTableView::*)()>(
    &::GlobalNamespace::LevelCollectionTableView::ClearSelection)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x22e6980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(),
                                                                               "ClearSelection", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionTableView.SelectLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionTableView::*)(::GlobalNamespace::IPreviewBeatmapLevel*)>(
    &::GlobalNamespace::LevelCollectionTableView::SelectLevel)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x22e69b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), "SelectLevel", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionTableView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionTableView::*)()>(&::GlobalNamespace::LevelCollectionTableView::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x22e6c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HMUI::__TableView__IDataSource"
constexpr GlobalNamespace::LevelCollectionTableView::operator ::HMUI::__TableView__IDataSource*() noexcept {
  return static_cast<::HMUI::__TableView__IDataSource*>(static_cast<void*>(this));
}
constexpr ::HMUI::TableView*& GlobalNamespace::LevelCollectionTableView::__get__tableView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableView;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::TableView*> const& GlobalNamespace::LevelCollectionTableView::__get__tableView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableView;
}
constexpr void GlobalNamespace::LevelCollectionTableView::__set__tableView(::HMUI::TableView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tableView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::AlphabetScrollbar*& GlobalNamespace::LevelCollectionTableView::__get__alphabetScrollbar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alphabetScrollbar;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::AlphabetScrollbar*> const& GlobalNamespace::LevelCollectionTableView::__get__alphabetScrollbar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alphabetScrollbar;
}
constexpr void GlobalNamespace::LevelCollectionTableView::__set__alphabetScrollbar(::HMUI::AlphabetScrollbar* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____alphabetScrollbar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LevelListTableCell*& GlobalNamespace::LevelCollectionTableView::__get__levelCellPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelCellPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelListTableCell*> const& GlobalNamespace::LevelCollectionTableView::__get__levelCellPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelCellPrefab;
}
constexpr void GlobalNamespace::LevelCollectionTableView::__set__levelCellPrefab(::GlobalNamespace::LevelListTableCell* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelCellPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::LevelCollectionTableView::__get__levelCellsReuseIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelCellsReuseIdentifier;
}
constexpr ::StringW const& GlobalNamespace::LevelCollectionTableView::__get__levelCellsReuseIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelCellsReuseIdentifier;
}
constexpr void GlobalNamespace::LevelCollectionTableView::__set__levelCellsReuseIdentifier(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelCellsReuseIdentifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LevelPackHeaderTableCell*& GlobalNamespace::LevelCollectionTableView::__get__packCellPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packCellPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelPackHeaderTableCell*> const& GlobalNamespace::LevelCollectionTableView::__get__packCellPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packCellPrefab;
}
constexpr void GlobalNamespace::LevelCollectionTableView::__set__packCellPrefab(::GlobalNamespace::LevelPackHeaderTableCell* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____packCellPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::LevelCollectionTableView::__get__packCellsReuseIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packCellsReuseIdentifier;
}
constexpr ::StringW const& GlobalNamespace::LevelCollectionTableView::__get__packCellsReuseIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packCellsReuseIdentifier;
}
constexpr void GlobalNamespace::LevelCollectionTableView::__set__packCellsReuseIdentifier(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____packCellsReuseIdentifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::LevelCollectionTableView::__get__cellHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellHeight;
}
constexpr float_t const& GlobalNamespace::LevelCollectionTableView::__get__cellHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellHeight;
}
constexpr void GlobalNamespace::LevelCollectionTableView::__set__cellHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cellHeight = value;
}
constexpr int32_t& GlobalNamespace::LevelCollectionTableView::__get__showAlphabetScrollbarLevelCountThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showAlphabetScrollbarLevelCountThreshold;
}
constexpr int32_t const& GlobalNamespace::LevelCollectionTableView::__get__showAlphabetScrollbarLevelCountThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showAlphabetScrollbarLevelCountThreshold;
}
constexpr void GlobalNamespace::LevelCollectionTableView::__set__showAlphabetScrollbarLevelCountThreshold(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showAlphabetScrollbarLevelCountThreshold = value;
}
constexpr ::GlobalNamespace::IAdditionalContentModel*& GlobalNamespace::LevelCollectionTableView::__get__additionalContentModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalContentModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> const& GlobalNamespace::LevelCollectionTableView::__get__additionalContentModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalContentModel;
}
constexpr void GlobalNamespace::LevelCollectionTableView::__set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____additionalContentModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelsPromoDataSO*& GlobalNamespace::LevelCollectionTableView::__get__beatmapLevelsPromoData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsPromoData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsPromoDataSO*> const& GlobalNamespace::LevelCollectionTableView::__get__beatmapLevelsPromoData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsPromoData;
}
constexpr void GlobalNamespace::LevelCollectionTableView::__set__beatmapLevelsPromoData(::GlobalNamespace::BeatmapLevelsPromoDataSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelsPromoData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerDataModel*& GlobalNamespace::LevelCollectionTableView::__get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& GlobalNamespace::LevelCollectionTableView::__get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::LevelCollectionTableView::__set__playerDataModel(::GlobalNamespace::PlayerDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::LevelCollectionTableView*, ::GlobalNamespace::IPreviewBeatmapLevel*>*& GlobalNamespace::LevelCollectionTableView::__get_didSelectLevelEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectLevelEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::LevelCollectionTableView*, ::GlobalNamespace::IPreviewBeatmapLevel*>*> const&
GlobalNamespace::LevelCollectionTableView::__get_didSelectLevelEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectLevelEvent;
}
constexpr void GlobalNamespace::LevelCollectionTableView::__set_didSelectLevelEvent(::System::Action_2<::GlobalNamespace::LevelCollectionTableView*, ::GlobalNamespace::IPreviewBeatmapLevel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didSelectLevelEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::LevelCollectionTableView*>*& GlobalNamespace::LevelCollectionTableView::__get_didSelectHeaderEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectHeaderEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::LevelCollectionTableView*>*> const& GlobalNamespace::LevelCollectionTableView::__get_didSelectHeaderEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectHeaderEvent;
}
constexpr void GlobalNamespace::LevelCollectionTableView::__set_didSelectHeaderEvent(::System::Action_1<::GlobalNamespace::LevelCollectionTableView*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didSelectHeaderEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::LevelCollectionTableView::__get__isInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr bool const& GlobalNamespace::LevelCollectionTableView::__get__isInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr void GlobalNamespace::LevelCollectionTableView::__set__isInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isInitialized = value;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*& GlobalNamespace::LevelCollectionTableView::__get__previewBeatmapLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewBeatmapLevels;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*> const&
GlobalNamespace::LevelCollectionTableView::__get__previewBeatmapLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewBeatmapLevels;
}
constexpr void GlobalNamespace::LevelCollectionTableView::__set__previewBeatmapLevels(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____previewBeatmapLevels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Sprite*& GlobalNamespace::LevelCollectionTableView::__get__headerSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headerSprite;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& GlobalNamespace::LevelCollectionTableView::__get__headerSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headerSprite;
}
constexpr void GlobalNamespace::LevelCollectionTableView::__set__headerSprite(::UnityEngine::Sprite* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headerSprite)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::LevelCollectionTableView::__get__headerText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headerText;
}
constexpr ::StringW const& GlobalNamespace::LevelCollectionTableView::__get__headerText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headerText;
}
constexpr void GlobalNamespace::LevelCollectionTableView::__set__headerText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headerText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::LevelCollectionTableView::__get__showLevelPackHeader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showLevelPackHeader;
}
constexpr bool const& GlobalNamespace::LevelCollectionTableView::__get__showLevelPackHeader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showLevelPackHeader;
}
constexpr void GlobalNamespace::LevelCollectionTableView::__set__showLevelPackHeader(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showLevelPackHeader = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::LevelCollectionTableView::__get__favoriteLevelIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____favoriteLevelIds;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& GlobalNamespace::LevelCollectionTableView::__get__favoriteLevelIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____favoriteLevelIds;
}
constexpr void GlobalNamespace::LevelCollectionTableView::__set__favoriteLevelIds(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____favoriteLevelIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::LevelCollectionTableView::__get__selectedRow() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedRow;
}
constexpr int32_t const& GlobalNamespace::LevelCollectionTableView::__get__selectedRow() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedRow;
}
constexpr void GlobalNamespace::LevelCollectionTableView::__set__selectedRow(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedRow = value;
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& GlobalNamespace::LevelCollectionTableView::__get__selectedPreviewBeatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedPreviewBeatmapLevel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& GlobalNamespace::LevelCollectionTableView::__get__selectedPreviewBeatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedPreviewBeatmapLevel;
}
constexpr void GlobalNamespace::LevelCollectionTableView::__set__selectedPreviewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectedPreviewBeatmapLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LevelCollectionTableView::add_didSelectLevelEvent(::System::Action_2<::GlobalNamespace::LevelCollectionTableView*, ::GlobalNamespace::IPreviewBeatmapLevel*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), "add_didSelectLevelEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionTableView*, ::GlobalNamespace::IPreviewBeatmapLevel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelCollectionTableView::remove_didSelectLevelEvent(::System::Action_2<::GlobalNamespace::LevelCollectionTableView*, ::GlobalNamespace::IPreviewBeatmapLevel*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), "remove_didSelectLevelEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionTableView*, ::GlobalNamespace::IPreviewBeatmapLevel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelCollectionTableView::add_didSelectHeaderEvent(::System::Action_1<::GlobalNamespace::LevelCollectionTableView*>* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), "add_didSelectHeaderEvent", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelCollectionTableView*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelCollectionTableView::remove_didSelectHeaderEvent(::System::Action_1<::GlobalNamespace::LevelCollectionTableView*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), "remove_didSelectHeaderEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelCollectionTableView*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelCollectionTableView::Init(::StringW headerText, ::UnityEngine::Sprite* headerSprite) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), "Init", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, headerText, headerSprite);
}
inline void GlobalNamespace::LevelCollectionTableView::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), "Init",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCollectionTableView::SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* previewBeatmapLevels,
                                                               ::System::Collections::Generic::HashSet_1<::StringW>* favoriteLevelIds, bool beatmapLevelsAreSorted, bool sortPreviewBeatmapLevels) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), "SetData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::StringW>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, previewBeatmapLevels, favoriteLevelIds, beatmapLevelsAreSorted, sortPreviewBeatmapLevels);
}
inline void GlobalNamespace::LevelCollectionTableView::RefreshFavorites(::System::Collections::Generic::HashSet_1<::StringW>* favoriteLevelIds) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), "RefreshFavorites", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, favoriteLevelIds);
}
inline void GlobalNamespace::LevelCollectionTableView::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), "OnEnable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCollectionTableView::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), "OnDisable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCollectionTableView::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::LevelCollectionTableView::CellSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), "CellSize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::LevelCollectionTableView::NumberOfCells() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(),
                                                                             "NumberOfCells", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::HMUI::TableCell* GlobalNamespace::LevelCollectionTableView::CellForIdx(::HMUI::TableView* tableView, int32_t row) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), "CellForIdx", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HMUI::TableCell*, false>(this, ___internal_method, tableView, row);
}
inline void GlobalNamespace::LevelCollectionTableView::HandleDidSelectRowEvent(::HMUI::TableView* tableView, int32_t row) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), "HandleDidSelectRowEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tableView, row);
}
inline void GlobalNamespace::LevelCollectionTableView::HandleAdditionalContentModelDidInvalidateData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(),
                                                                             "HandleAdditionalContentModelDidInvalidateData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCollectionTableView::CancelAsyncOperations() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(),
                                                                             "CancelAsyncOperations", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCollectionTableView::RefreshLevelsAvailability() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(),
                                                                             "RefreshLevelsAvailability", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCollectionTableView::SelectLevelPackHeaderCell() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(),
                                                                             "SelectLevelPackHeaderCell", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCollectionTableView::ClearSelection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(),
                                                                             "ClearSelection", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCollectionTableView::SelectLevel(::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), "SelectLevel", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapLevel);
}
inline ::GlobalNamespace::LevelCollectionTableView* GlobalNamespace::LevelCollectionTableView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LevelCollectionTableView*>());
}
inline void GlobalNamespace::LevelCollectionTableView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionTableView*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelCollectionTableView::LevelCollectionTableView() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
