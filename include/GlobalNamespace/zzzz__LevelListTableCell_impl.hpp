#pragma once
#include "GlobalNamespace/zzzz__EntitlementStatus_impl.hpp"
#include "HMUI/zzzz__TableCell_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Sprite_impl.hpp"
#include "GlobalNamespace/zzzz__LevelListTableCell_def.hpp"
#include "GlobalNamespace/zzzz__LevelListTableCell_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "GlobalNamespace/zzzz__IAdditionalContentModel_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19::*)()>(
    &::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19::MoveNext)> {
  constexpr static std::size_t size = 0xa50;
  constexpr static std::size_t addrs = 0x227aee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x227b934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LevelListTableCell*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "level", ty: "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "isFavorite", ty: "bool",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "isPromoted", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isUpdated", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19::__LevelListTableCell___SetDataFromLevelAsync_d__19(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::LevelListTableCell* __4__this, ::GlobalNamespace::IPreviewBeatmapLevel* level,
    bool isFavorite, bool isPromoted, bool isUpdated, ::System::Threading::CancellationToken _cancellationToken_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->level = level;
  this->isFavorite = isFavorite;
  this->isPromoted = isPromoted;
  this->isUpdated = isUpdated;
  this->_cancellationToken_5__2 = _cancellationToken_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LevelListTableCell___SetDataFromLevelAsync_d__19::__LevelListTableCell___SetDataFromLevelAsync_d__19() {}
//  Writing Method size for method: ::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__24.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__24::*)()>(
    &::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x227b940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__24>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__24.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__24::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__24::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x227bdac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__24>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__24::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__24::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__24>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__24::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__24>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LevelListTableCell*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "contentModel", ty:
// "::GlobalNamespace::IAdditionalContentModel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__24::__LevelListTableCell___RefreshAvailabilityAsync_d__24(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::LevelListTableCell* __4__this, ::StringW levelID,
    ::GlobalNamespace::IAdditionalContentModel* contentModel, ::System::Threading::CancellationToken _cancellationToken_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->levelID = levelID;
  this->contentModel = contentModel;
  this->_cancellationToken_5__2 = _cancellationToken_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LevelListTableCell___RefreshAvailabilityAsync_d__24::__LevelListTableCell___RefreshAvailabilityAsync_d__24() {}
//  Writing Method size for method: ::GlobalNamespace::LevelListTableCell.SetDataFromLevelAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelListTableCell::*)(::GlobalNamespace::IPreviewBeatmapLevel*, bool, bool, bool)>(
    &::GlobalNamespace::LevelListTableCell::SetDataFromLevelAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x227ac64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell*>::get(), "SetDataFromLevelAsync", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelListTableCell.SelectionDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelListTableCell::*)(::HMUI::__SelectableCell__TransitionType)>(
    &::GlobalNamespace::LevelListTableCell::SelectionDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x227ad24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelListTableCell.HighlightDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelListTableCell::*)(::HMUI::__SelectableCell__TransitionType)>(
    &::GlobalNamespace::LevelListTableCell::HighlightDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x227adec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelListTableCell.RefreshVisuals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelListTableCell::*)()>(&::GlobalNamespace::LevelListTableCell::RefreshVisuals)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x227ad28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell*>::get(), "RefreshVisuals",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelListTableCell.WasPreparedForReuse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelListTableCell::*)()>(&::GlobalNamespace::LevelListTableCell::WasPreparedForReuse)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x227adf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelListTableCell.RefreshAvailabilityAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelListTableCell::*)(::GlobalNamespace::IAdditionalContentModel*, ::StringW)>(
    &::GlobalNamespace::LevelListTableCell::RefreshAvailabilityAsync)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x227ae2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell*>::get(), "RefreshAvailabilityAsync", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAdditionalContentModel*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelListTableCell.CancelAsyncOperations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelListTableCell::*)()>(&::GlobalNamespace::LevelListTableCell::CancelAsyncOperations)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x227adf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell*>::get(),
                                                                               "CancelAsyncOperations", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelListTableCell._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelListTableCell::*)()>(&::GlobalNamespace::LevelListTableCell::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x227aed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UI::Image*& GlobalNamespace::LevelListTableCell::__get__backgroundImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundImage;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& GlobalNamespace::LevelListTableCell::__get__backgroundImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundImage;
}
constexpr void GlobalNamespace::LevelListTableCell::__set__backgroundImage(::UnityEngine::UI::Image* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____backgroundImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::CanvasGroup*& GlobalNamespace::LevelListTableCell::__get__canvasGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasGroup;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& GlobalNamespace::LevelListTableCell::__get__canvasGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasGroup;
}
constexpr void GlobalNamespace::LevelListTableCell::__set__canvasGroup(::UnityEngine::CanvasGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____canvasGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Image*& GlobalNamespace::LevelListTableCell::__get__coverImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coverImage;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& GlobalNamespace::LevelListTableCell::__get__coverImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coverImage;
}
constexpr void GlobalNamespace::LevelListTableCell::__set__coverImage(::UnityEngine::UI::Image* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____coverImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::LevelListTableCell::__get__songNameText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songNameText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::LevelListTableCell::__get__songNameText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songNameText;
}
constexpr void GlobalNamespace::LevelListTableCell::__set__songNameText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songNameText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::LevelListTableCell::__get__songAuthorText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songAuthorText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::LevelListTableCell::__get__songAuthorText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songAuthorText;
}
constexpr void GlobalNamespace::LevelListTableCell::__set__songAuthorText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songAuthorText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Image*& GlobalNamespace::LevelListTableCell::__get__favoritesBadgeImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____favoritesBadgeImage;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& GlobalNamespace::LevelListTableCell::__get__favoritesBadgeImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____favoritesBadgeImage;
}
constexpr void GlobalNamespace::LevelListTableCell::__set__favoritesBadgeImage(::UnityEngine::UI::Image* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____favoritesBadgeImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::LevelListTableCell::__get__songDurationText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songDurationText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::LevelListTableCell::__get__songDurationText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songDurationText;
}
constexpr void GlobalNamespace::LevelListTableCell::__set__songDurationText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songDurationText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::LevelListTableCell::__get__songBpmText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songBpmText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::LevelListTableCell::__get__songBpmText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songBpmText;
}
constexpr void GlobalNamespace::LevelListTableCell::__set__songBpmText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songBpmText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::LevelListTableCell::__get__highlightBackgroundColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightBackgroundColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LevelListTableCell::__get__highlightBackgroundColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightBackgroundColor;
}
constexpr void GlobalNamespace::LevelListTableCell::__set__highlightBackgroundColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlightBackgroundColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::LevelListTableCell::__get__selectedBackgroundColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedBackgroundColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LevelListTableCell::__get__selectedBackgroundColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedBackgroundColor;
}
constexpr void GlobalNamespace::LevelListTableCell::__set__selectedBackgroundColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedBackgroundColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::LevelListTableCell::__get__selectedAndHighlightedBackgroundColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAndHighlightedBackgroundColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LevelListTableCell::__get__selectedAndHighlightedBackgroundColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAndHighlightedBackgroundColor;
}
constexpr void GlobalNamespace::LevelListTableCell::__set__selectedAndHighlightedBackgroundColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedAndHighlightedBackgroundColor = value;
}
constexpr float_t& GlobalNamespace::LevelListTableCell::__get__notOwnedAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notOwnedAlpha;
}
constexpr float_t const& GlobalNamespace::LevelListTableCell::__get__notOwnedAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notOwnedAlpha;
}
constexpr void GlobalNamespace::LevelListTableCell::__set__notOwnedAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____notOwnedAlpha = value;
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::LevelListTableCell::__get__promoBadgeGo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoBadgeGo;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::LevelListTableCell::__get__promoBadgeGo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoBadgeGo;
}
constexpr void GlobalNamespace::LevelListTableCell::__set__promoBadgeGo(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____promoBadgeGo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::LevelListTableCell::__get__updatedBadgeGo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updatedBadgeGo;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::LevelListTableCell::__get__updatedBadgeGo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updatedBadgeGo;
}
constexpr void GlobalNamespace::LevelListTableCell::__set__updatedBadgeGo(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____updatedBadgeGo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::LevelListTableCell::__get__refreshingAvailabilityCancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refreshingAvailabilityCancellationTokenSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& GlobalNamespace::LevelListTableCell::__get__refreshingAvailabilityCancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refreshingAvailabilityCancellationTokenSource;
}
constexpr void GlobalNamespace::LevelListTableCell::__set__refreshingAvailabilityCancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____refreshingAvailabilityCancellationTokenSource)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::LevelListTableCell::__get__settingDataCancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingDataCancellationTokenSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& GlobalNamespace::LevelListTableCell::__get__settingDataCancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingDataCancellationTokenSource;
}
constexpr void GlobalNamespace::LevelListTableCell::__set__settingDataCancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingDataCancellationTokenSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::LevelListTableCell::__get__notOwned() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notOwned;
}
constexpr bool const& GlobalNamespace::LevelListTableCell::__get__notOwned() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notOwned;
}
constexpr void GlobalNamespace::LevelListTableCell::__set__notOwned(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____notOwned = value;
}
constexpr ::StringW& GlobalNamespace::LevelListTableCell::__get__refreshingAvailabilityLevelID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refreshingAvailabilityLevelID;
}
constexpr ::StringW const& GlobalNamespace::LevelListTableCell::__get__refreshingAvailabilityLevelID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refreshingAvailabilityLevelID;
}
constexpr void GlobalNamespace::LevelListTableCell::__set__refreshingAvailabilityLevelID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____refreshingAvailabilityLevelID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::LevelListTableCell::__get__settingDataFromLevelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingDataFromLevelId;
}
constexpr ::StringW const& GlobalNamespace::LevelListTableCell::__get__settingDataFromLevelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingDataFromLevelId;
}
constexpr void GlobalNamespace::LevelListTableCell::__set__settingDataFromLevelId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingDataFromLevelId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LevelListTableCell::SetDataFromLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel* level, bool isFavorite, bool isPromoted, bool isUpdated) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell*>::get(), "SetDataFromLevelAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level, isFavorite, isPromoted, isUpdated);
}
inline void GlobalNamespace::LevelListTableCell::SelectionDidChange(::HMUI::__SelectableCell__TransitionType transitionType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transitionType);
}
inline void GlobalNamespace::LevelListTableCell::HighlightDidChange(::HMUI::__SelectableCell__TransitionType transitionType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transitionType);
}
inline void GlobalNamespace::LevelListTableCell::RefreshVisuals() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell*>::get(), "RefreshVisuals",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelListTableCell::WasPreparedForReuse() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelListTableCell::RefreshAvailabilityAsync(::GlobalNamespace::IAdditionalContentModel* contentModel, ::StringW levelID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell*>::get(), "RefreshAvailabilityAsync", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAdditionalContentModel*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, contentModel, levelID);
}
inline void GlobalNamespace::LevelListTableCell::CancelAsyncOperations() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell*>::get(),
                                                                             "CancelAsyncOperations", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LevelListTableCell* GlobalNamespace::LevelListTableCell::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LevelListTableCell*>());
}
inline void GlobalNamespace::LevelListTableCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelListTableCell::LevelListTableCell() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
