#pragma once
#include "GlobalNamespace/zzzz__EntitlementStatus_impl.hpp"
#include "HMUI/zzzz__SelectableCell_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__AnnotatedBeatmapLevelCollectionCell_def.hpp"
#include "GlobalNamespace/zzzz__AnnotatedBeatmapLevelCollectionCell_def.hpp"
#include "HMUI/zzzz__ImageView_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__IAnnotatedBeatmapLevelCollection_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "GlobalNamespace/zzzz__IAdditionalContentModel_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::*)()>(
    &::GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::MoveNext)> {
  constexpr static std::size_t size = 0xd6c;
  constexpr static std::size_t addrs = 0x2277a50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22>::get(),
                                    "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22787bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "contentModel", ty: "::GlobalNamespace::IAdditionalContentModel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_numberOfOwnedLevels_5__3", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_error_5__4", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap4", ty:
// "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell* __4__this,
    ::GlobalNamespace::IAdditionalContentModel* contentModel, ::System::Threading::CancellationToken _cancellationToken_5__2, int32_t _numberOfOwnedLevels_5__3, bool _error_5__4,
    ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>* __7__wrap4,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->contentModel = contentModel;
  this->_cancellationToken_5__2 = _cancellationToken_5__2;
  this->_numberOfOwnedLevels_5__3 = _numberOfOwnedLevels_5__3;
  this->_error_5__4 = _error_5__4;
  this->__7__wrap4 = __7__wrap4;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22() {}
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.get_cellIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)()>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::get_cellIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x227742c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>::get(),
                                                                               "get_cellIndex", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.set_cellIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)(int32_t)>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::set_cellIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2277434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>::get(), "set_cellIndex",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.SetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)(
    ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, bool, bool)>(&::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::SetData)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x227743c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>::get(), "SetData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.InternalToggle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)()>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::InternalToggle)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2277858;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.SelectionDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)(::HMUI::__SelectableCell__TransitionType)>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::SelectionDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x227787c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.HighlightDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)(::HMUI::__SelectableCell__TransitionType)>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::HighlightDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x227796c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.RefreshVisuals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)()>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::RefreshVisuals)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2277880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>::get(),
                                                                               "RefreshVisuals", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.GetInfoText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)(::StringW, int32_t, int32_t)>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::GetInfoText)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2277724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>::get(), "GetInfoText", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.RefreshAvailabilityAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)(::GlobalNamespace::IAdditionalContentModel*)>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::RefreshAvailabilityAsync)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2277970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>::get(), "RefreshAvailabilityAsync", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAdditionalContentModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.SetDownloadIconVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)(bool)>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::SetDownloadIconVisible)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2277814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>::get(), "SetDownloadIconVisible",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.CancelAsyncOperations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)()>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::CancelAsyncOperations)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2277a14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>::get(),
                                                                               "CancelAsyncOperations", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)()>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2277a28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__infoText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____infoText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__infoText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____infoText;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__set__infoText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____infoText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ImageView*& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__coverImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coverImage;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> const& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__coverImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coverImage;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__set__coverImage(::HMUI::ImageView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____coverImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ImageView*& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__selectionImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionImage;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> const& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__selectionImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionImage;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__set__selectionImage(::HMUI::ImageView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectionImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__downloadIconObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downloadIconObject;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__downloadIconObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downloadIconObject;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__set__downloadIconObject(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____downloadIconObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__newBadgeObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newBadgeObject;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__newBadgeObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newBadgeObject;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__set__newBadgeObject(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____newBadgeObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__updatedBadgeObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updatedBadgeObject;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__updatedBadgeObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updatedBadgeObject;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__set__updatedBadgeObject(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____updatedBadgeObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__selectedColor0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedColor0;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__selectedColor0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedColor0;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__set__selectedColor0(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedColor0 = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__selectedColor1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedColor1;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__selectedColor1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedColor1;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__set__selectedColor1(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedColor1 = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__highlightedColor0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedColor0;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__highlightedColor0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedColor0;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__set__highlightedColor0(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlightedColor0 = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__highlightedColor1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedColor1;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__highlightedColor1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedColor1;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__set__highlightedColor1(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlightedColor1 = value;
}
constexpr int32_t& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__cellIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellIndex_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__cellIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellIndex_k__BackingField;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__set__cellIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cellIndex_k__BackingField = value;
}
constexpr ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__annotatedBeatmapLevelCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____annotatedBeatmapLevelCollection;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*> const&
GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__annotatedBeatmapLevelCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____annotatedBeatmapLevelCollection;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__set__annotatedBeatmapLevelCollection(::GlobalNamespace::IAnnotatedBeatmapLevelCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____annotatedBeatmapLevelCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__cancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__cancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cancellationTokenSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::get_cellIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>::get(),
                                                                             "get_cellIndex", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::set_cellIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>::get(), "set_cellIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::SetData(::GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollection, bool isPromoted, bool isUpdated) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>::get(), "SetData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, annotatedBeatmapLevelCollection, isPromoted, isUpdated);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::InternalToggle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>::get(),
                                                                             "InternalToggle", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::SelectionDidChange(::HMUI::__SelectableCell__TransitionType transitionType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>::get(), "SelectionDidChange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SelectableCell__TransitionType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transitionType);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::HighlightDidChange(::HMUI::__SelectableCell__TransitionType transitionType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>::get(), "HighlightDidChange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SelectableCell__TransitionType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transitionType);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::RefreshVisuals() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>::get(),
                                                                             "RefreshVisuals", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param purchased: int32_t (default: static_cast<int32_t>(0xffffffff))
inline ::StringW GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::GetInfoText(::StringW name, int32_t songs, int32_t purchased) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>::get(), "GetInfoText", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, name, songs, purchased);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::RefreshAvailabilityAsync(::GlobalNamespace::IAdditionalContentModel* contentModel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>::get(), "RefreshAvailabilityAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAdditionalContentModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, contentModel);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::SetDownloadIconVisible(bool visible) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>::get(), "SetDownloadIconVisible",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, visible);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::CancelAsyncOperations() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>::get(),
                                                                             "CancelAsyncOperations", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell* GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>());
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::AnnotatedBeatmapLevelCollectionCell() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
