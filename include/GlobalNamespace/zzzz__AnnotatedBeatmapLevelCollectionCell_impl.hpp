#pragma once
// IWYU pragma private; include "GlobalNamespace/AnnotatedBeatmapLevelCollectionCell.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_impl.hpp"
#include "HMUI/zzzz__SelectableCell_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__AnnotatedBeatmapLevelCollectionCell_def.hpp"
#include "GlobalNamespace/zzzz__AnnotatedBeatmapLevelCollectionCell_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IEntitlementModel_def.hpp"
#include "HMUI/zzzz__ImageView_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell__RefreshAvailabilityAsync_d__23.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell__RefreshAvailabilityAsync_d__23::*)()>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell__RefreshAvailabilityAsync_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x59fa908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell__RefreshAvailabilityAsync_d__23>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell__RefreshAvailabilityAsync_d__23.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell__RefreshAvailabilityAsync_d__23::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell__RefreshAvailabilityAsync_d__23::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59faee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell__RefreshAvailabilityAsync_d__23>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell__RefreshAvailabilityAsync_d__23::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell__RefreshAvailabilityAsync_d__23>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell__RefreshAvailabilityAsync_d__23::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell__RefreshAvailabilityAsync_d__23>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::AnnotatedBeatmapLevelCollectionCell__RefreshAvailabilityAsync_d__23::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::AnnotatedBeatmapLevelCollectionCell__RefreshAvailabilityAsync_d__23::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>", modifiers: "", def_value: Some("{}") }, CppParam { name: "entitlementModel", ty: "::GlobalNamespace::IEntitlementModel*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_numberOfOwnedLevels_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_error_5__4", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__7__wrap4", ty: "::System::Collections::Generic::List_1_Enumerator<::GlobalNamespace::BeatmapLevel*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell__RefreshAvailabilityAsync_d__23::AnnotatedBeatmapLevelCollectionCell__RefreshAvailabilityAsync_d__23(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell> __4__this,
    ::GlobalNamespace::IEntitlementModel* entitlementModel, ::System::Threading::CancellationToken _cancellationToken_5__2, int32_t _numberOfOwnedLevels_5__3, bool _error_5__4,
    ::System::Collections::Generic::List_1_Enumerator<::GlobalNamespace::BeatmapLevel*> __7__wrap4,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->entitlementModel = entitlementModel;
  this->_cancellationToken_5__2 = _cancellationToken_5__2;
  this->_numberOfOwnedLevels_5__3 = _numberOfOwnedLevels_5__3;
  this->_error_5__4 = _error_5__4;
  this->__7__wrap4 = __7__wrap4;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell__RefreshAvailabilityAsync_d__23::AnnotatedBeatmapLevelCollectionCell__RefreshAvailabilityAsync_d__23() {}
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.get_cellIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)()>(&::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::get_cellIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59fa3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>(), { "get_cellIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.set_cellIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)(int32_t)>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::set_cellIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59fa3f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>(), { "set_cellIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)(::GlobalNamespace::BeatmapLevelPack*, bool, bool, bool)>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::SetData)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x59fa400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>(),
                                         { "SetData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.InternalToggle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)()>(&::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::InternalToggle)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x59fa6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.SelectionDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)(::HMUI::SelectableCell_TransitionType)>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::SelectionDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59fa6fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.HighlightDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)(::HMUI::SelectableCell_TransitionType)>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::HighlightDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59fa7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.RefreshVisuals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)()>(&::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::RefreshVisuals)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x59fa700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>(), { "RefreshVisuals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.GetInfoText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)(::StringW, int32_t, int32_t)>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::GetInfoText)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x59fa548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>(),
                                                             { "GetInfoText", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.RefreshAvailabilityAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)(::GlobalNamespace::IEntitlementModel*)>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::RefreshAvailabilityAsync)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x59fa800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>(),
                                                                                           { "RefreshAvailabilityAsync", {}, { ::i2c::type_of<::GlobalNamespace::IEntitlementModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.SetDownloadIconVisible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)(bool)>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::SetDownloadIconVisible)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x59fa65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>(), { "SetDownloadIconVisible", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.CancelAsyncOperations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)()>(
    &::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::CancelAsyncOperations)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x59fa8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>(), { "CancelAsyncOperations", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)()>(&::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59fa8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_get__infoText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____infoText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_get__infoText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____infoText;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_set__infoText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____infoText = value;
}
constexpr ::UnityW<::HMUI::ImageView>& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_get__coverImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coverImage;
}
constexpr ::UnityW<::HMUI::ImageView> const& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_get__coverImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coverImage;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_set__coverImage(::UnityW<::HMUI::ImageView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____coverImage = value;
}
constexpr ::UnityW<::HMUI::ImageView>& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_get__selectionImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionImage;
}
constexpr ::UnityW<::HMUI::ImageView> const& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_get__selectionImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionImage;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_set__selectionImage(::UnityW<::HMUI::ImageView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectionImage = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_get__downloadIconObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downloadIconObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_get__downloadIconObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downloadIconObject;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_set__downloadIconObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____downloadIconObject = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_get__newBadgeObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newBadgeObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_get__newBadgeObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newBadgeObject;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_set__newBadgeObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____newBadgeObject = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_get__updatedBadgeObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updatedBadgeObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_get__updatedBadgeObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updatedBadgeObject;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_set__updatedBadgeObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____updatedBadgeObject = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_get__selectedColor0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedColor0;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_get__selectedColor0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedColor0;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_set__selectedColor0(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedColor0 = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_get__selectedColor1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedColor1;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_get__selectedColor1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedColor1;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_set__selectedColor1(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedColor1 = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_get__highlightedColor0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedColor0;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_get__highlightedColor0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedColor0;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_set__highlightedColor0(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlightedColor0 = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_get__highlightedColor1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedColor1;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_get__highlightedColor1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedColor1;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_set__highlightedColor1(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlightedColor1 = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_get__defaultCoverSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultCoverSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_get__defaultCoverSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultCoverSprite;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_set__defaultCoverSprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultCoverSprite = value;
}
constexpr int32_t& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_get__cellIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellIndex_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_get__cellIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellIndex_k__BackingField;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_set__cellIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cellIndex_k__BackingField = value;
}
constexpr ::GlobalNamespace::BeatmapLevelPack*& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_get__beatmapLevelPack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelPack;
}
constexpr ::GlobalNamespace::BeatmapLevelPack* const& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_get__beatmapLevelPack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelPack;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_set__beatmapLevelPack(::GlobalNamespace::BeatmapLevelPack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelPack = value;
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_get__cancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_get__cancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cancellationTokenSource = value;
}
inline int32_t GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::get_cellIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>(), { "get_cellIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::set_cellIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>(), { "set_cellIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::SetData(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack, bool isPromoted, bool isUpdated, bool interactable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>(),
                                              { "SetData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapLevelPack, isPromoted, isUpdated, interactable);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::InternalToggle() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::SelectionDidChange(::HMUI::SelectableCell_TransitionType transitionType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transitionType);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::HighlightDidChange(::HMUI::SelectableCell_TransitionType transitionType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transitionType);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::RefreshVisuals() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>(), { "RefreshVisuals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::GetInfoText(::StringW name, int32_t songs, int32_t purchased) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>(),
                                                           { "GetInfoText", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name, songs, purchased);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::RefreshAvailabilityAsync(::GlobalNamespace::IEntitlementModel* entitlementModel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>(),
                                                                                         { "RefreshAvailabilityAsync", {}, { ::i2c::type_of<::GlobalNamespace::IEntitlementModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entitlementModel);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::SetDownloadIconVisible(bool visible) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>(), { "SetDownloadIconVisible", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visible);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::CancelAsyncOperations() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>(), { "CancelAsyncOperations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell* GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::AnnotatedBeatmapLevelCollectionCell() {}
