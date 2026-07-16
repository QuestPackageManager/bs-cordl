#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelPackDetailViewController.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_impl.hpp"
#include "GlobalNamespace/zzzz__OpenProductStoreResult_impl.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "GlobalNamespace/zzzz__LevelPackDetailViewController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelModel_def.hpp"
#include "GlobalNamespace/zzzz__EventBinder_def.hpp"
#include "GlobalNamespace/zzzz__IAdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "GlobalNamespace/zzzz__IEntitlementModel_def.hpp"
#include "GlobalNamespace/zzzz__KawaseBlurRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__LevelPackDetailViewController_def.hpp"
#include "GlobalNamespace/zzzz__LoadingControl_def.hpp"
#include "HMUI/zzzz__ImageView_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LevelPackDetailViewController_ContentType::LevelPackDetailViewController_ContentType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelPackDetailViewController_ContentType::LevelPackDetailViewController_ContentType() {}
constexpr ::GlobalNamespace::LevelPackDetailViewController_ContentType GlobalNamespace::LevelPackDetailViewController_ContentType::Loading{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::LevelPackDetailViewController_ContentType GlobalNamespace::LevelPackDetailViewController_ContentType::NonBuyable{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::LevelPackDetailViewController_ContentType GlobalNamespace::LevelPackDetailViewController_ContentType::Buyable{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::LevelPackDetailViewController_ContentType GlobalNamespace::LevelPackDetailViewController_ContentType::Error{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__28.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__28::*)()>(
    &::GlobalNamespace::LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x59523ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__28>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__28.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__28::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__28::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595279c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__28>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__28::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__28>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__28::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__28>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__28::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__28::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::GlobalNamespace::LevelPackDetailViewController>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__28::LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__28(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::LevelPackDetailViewController> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OpenProductStoreResult> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__28::LevelPackDetailViewController__OpenLevelPackProductStoreAsync_d__28() {}
//  Writing Method size for method: ::GlobalNamespace::LevelPackDetailViewController__RefreshAvailabilityAsync_d__26.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelPackDetailViewController__RefreshAvailabilityAsync_d__26::*)()>(
    &::GlobalNamespace::LevelPackDetailViewController__RefreshAvailabilityAsync_d__26::MoveNext)> {
  constexpr static std::size_t size = 0x87c;
  constexpr static std::size_t addrs = 0x59527a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController__RefreshAvailabilityAsync_d__26>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackDetailViewController__RefreshAvailabilityAsync_d__26.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelPackDetailViewController__RefreshAvailabilityAsync_d__26::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::LevelPackDetailViewController__RefreshAvailabilityAsync_d__26::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5953020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController__RefreshAvailabilityAsync_d__26>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LevelPackDetailViewController__RefreshAvailabilityAsync_d__26::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController__RefreshAvailabilityAsync_d__26>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::LevelPackDetailViewController__RefreshAvailabilityAsync_d__26::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController__RefreshAvailabilityAsync_d__26>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::LevelPackDetailViewController__RefreshAvailabilityAsync_d__26::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::LevelPackDetailViewController__RefreshAvailabilityAsync_d__26::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::GlobalNamespace::LevelPackDetailViewController>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_cancellationTokenSource_5__2", ty:
// "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_timeoutTokenSource_5__3", ty: "::System::Threading::CancellationTokenSource*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LevelPackDetailViewController__RefreshAvailabilityAsync_d__26::LevelPackDetailViewController__RefreshAvailabilityAsync_d__26(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::LevelPackDetailViewController> __4__this,
    ::System::Threading::CancellationTokenSource* _cancellationTokenSource_5__2, ::System::Threading::CancellationTokenSource* _timeoutTokenSource_5__3,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_cancellationTokenSource_5__2 = _cancellationTokenSource_5__2;
  this->_timeoutTokenSource_5__3 = _timeoutTokenSource_5__3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelPackDetailViewController__RefreshAvailabilityAsync_d__26::LevelPackDetailViewController__RefreshAvailabilityAsync_d__26() {}
//  Writing Method size for method: ::GlobalNamespace::LevelPackDetailViewController.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelPackDetailViewController::*)(::GlobalNamespace::BeatmapLevelPack*)>(
    &::GlobalNamespace::LevelPackDetailViewController::SetData)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x5951620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController*>(), { "SetData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackDetailViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelPackDetailViewController::*)(bool, bool, bool)>(&::GlobalNamespace::LevelPackDetailViewController::DidActivate)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x59519c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController*>(), { ::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackDetailViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelPackDetailViewController::*)(bool, bool)>(&::GlobalNamespace::LevelPackDetailViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5951c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController*>(), { ::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackDetailViewController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelPackDetailViewController::*)()>(&::GlobalNamespace::LevelPackDetailViewController::OnDestroy)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5951d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController*>(), { ::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackDetailViewController.RefreshAvailabilityAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelPackDetailViewController::*)()>(&::GlobalNamespace::LevelPackDetailViewController::RefreshAvailabilityAsync)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5951920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController*>(), { "RefreshAvailabilityAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackDetailViewController.BuyPackButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelPackDetailViewController::*)()>(&::GlobalNamespace::LevelPackDetailViewController::BuyPackButtonWasPressed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5951ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController*>(), { "BuyPackButtonWasPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackDetailViewController.OpenLevelPackProductStoreAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelPackDetailViewController::*)()>(
    &::GlobalNamespace::LevelPackDetailViewController::OpenLevelPackProductStoreAsync)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5951f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController*>(), { "OpenLevelPackProductStoreAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackDetailViewController.ShowContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelPackDetailViewController::*)(::GlobalNamespace::LevelPackDetailViewController_ContentType, ::StringW)>(
    &::GlobalNamespace::LevelPackDetailViewController::ShowContent)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5952030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController*>(),
                                                             { "ShowContent", {}, { ::i2c::type_of<::GlobalNamespace::LevelPackDetailViewController_ContentType>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackDetailViewController.HandleAdditionalContentModelDidInvalidateData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelPackDetailViewController::*)()>(
    &::GlobalNamespace::LevelPackDetailViewController::HandleAdditionalContentModelDidInvalidateData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5952264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController*>(), { "HandleAdditionalContentModelDidInvalidateData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackDetailViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelPackDetailViewController::*)()>(&::GlobalNamespace::LevelPackDetailViewController::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5952268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackDetailViewController._DidActivate_g__HandleDidPressRefreshButton_23_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelPackDetailViewController::*)()>(
    &::GlobalNamespace::LevelPackDetailViewController::_DidActivate_g__HandleDidPressRefreshButton_23_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59522c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController*>(), { "<DidActivate>g__HandleDidPressRefreshButton|23_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackDetailViewController._DidActivate_b__23_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelPackDetailViewController::*)()>(&::GlobalNamespace::LevelPackDetailViewController::_DidActivate_b__23_1)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x59522cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController*>(), { "<DidActivate>b__23_1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackDetailViewController._DidActivate_b__23_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelPackDetailViewController::*)()>(&::GlobalNamespace::LevelPackDetailViewController::_DidActivate_b__23_2)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x595235c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController*>(), { "<DidActivate>b__23_2", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__detailWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____detailWrapper;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__detailWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____detailWrapper;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__cordl_internal_set__detailWrapper(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____detailWrapper = value;
}
constexpr ::UnityW<::HMUI::ImageView>& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__packImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packImage;
}
constexpr ::UnityW<::HMUI::ImageView> const& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__packImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packImage;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__cordl_internal_set__packImage(::UnityW<::HMUI::ImageView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____packImage = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__buyButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buyButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__buyButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buyButton;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__cordl_internal_set__buyButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buyButton = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__buyContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buyContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__buyContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buyContainer;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__cordl_internal_set__buyContainer(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buyContainer = value;
}
constexpr ::UnityW<::GlobalNamespace::LoadingControl>& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__loadingControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingControl;
}
constexpr ::UnityW<::GlobalNamespace::LoadingControl> const& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__loadingControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingControl;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__cordl_internal_set__loadingControl(::UnityW<::GlobalNamespace::LoadingControl> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadingControl = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__requireInternetContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requireInternetContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__requireInternetContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requireInternetContainer;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__cordl_internal_set__requireInternetContainer(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____requireInternetContainer = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__steamMessageGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____steamMessageGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__steamMessageGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____steamMessageGameObject;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__cordl_internal_set__steamMessageGameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____steamMessageGameObject = value;
}
constexpr ::UnityW<::GlobalNamespace::KawaseBlurRendererSO>& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__kawaseBlurRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kawaseBlurRenderer;
}
constexpr ::UnityW<::GlobalNamespace::KawaseBlurRendererSO> const& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__kawaseBlurRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kawaseBlurRenderer;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__cordl_internal_set__kawaseBlurRenderer(::UnityW<::GlobalNamespace::KawaseBlurRendererSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____kawaseBlurRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__defaultCoverSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultCoverSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__defaultCoverSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultCoverSprite;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__cordl_internal_set__defaultCoverSprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultCoverSprite = value;
}
constexpr ::GlobalNamespace::IAdditionalContentModel*& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__additionalContentModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalContentModel;
}
constexpr ::GlobalNamespace::IAdditionalContentModel* const& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__additionalContentModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalContentModel;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__cordl_internal_set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____additionalContentModel = value;
}
constexpr ::GlobalNamespace::IEntitlementModel*& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__entitlementModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlementModel;
}
constexpr ::GlobalNamespace::IEntitlementModel* const& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__entitlementModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlementModel;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__cordl_internal_set__entitlementModel(::GlobalNamespace::IEntitlementModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____entitlementModel = value;
}
constexpr ::GlobalNamespace::DlcPromoPanelModel*& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__dlcPromoPanelModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcPromoPanelModel;
}
constexpr ::GlobalNamespace::DlcPromoPanelModel* const& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__dlcPromoPanelModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcPromoPanelModel;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__cordl_internal_set__dlcPromoPanelModel(::GlobalNamespace::DlcPromoPanelModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dlcPromoPanelModel = value;
}
constexpr ::GlobalNamespace::IAnalyticsModel*& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__analyticsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr ::GlobalNamespace::IAnalyticsModel* const& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__analyticsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____analyticsModel = value;
}
constexpr ::GlobalNamespace::EventBinder*& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__eventBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventBinder;
}
constexpr ::GlobalNamespace::EventBinder* const& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__eventBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventBinder;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__cordl_internal_set__eventBinder(::GlobalNamespace::EventBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventBinder = value;
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__cancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__cancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cancellationTokenSource = value;
}
constexpr ::GlobalNamespace::BeatmapLevelPack*& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__pack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pack;
}
constexpr ::GlobalNamespace::BeatmapLevelPack* const& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__pack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pack;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__cordl_internal_set__pack(::GlobalNamespace::BeatmapLevelPack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pack = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__blurredPackArtwork() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blurredPackArtwork;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__blurredPackArtwork() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blurredPackArtwork;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__cordl_internal_set__blurredPackArtwork(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____blurredPackArtwork = value;
}
constexpr ::GlobalNamespace::EntitlementStatus& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__entitlementStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlementStatus;
}
constexpr ::GlobalNamespace::EntitlementStatus const& GlobalNamespace::LevelPackDetailViewController::__cordl_internal_get__entitlementStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlementStatus;
}
constexpr void GlobalNamespace::LevelPackDetailViewController::__cordl_internal_set__entitlementStatus(::GlobalNamespace::EntitlementStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____entitlementStatus = value;
}
inline void GlobalNamespace::LevelPackDetailViewController::SetData(::GlobalNamespace::BeatmapLevelPack* pack) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController*>(), { "SetData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pack);
}
inline void GlobalNamespace::LevelPackDetailViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::LevelPackDetailViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::LevelPackDetailViewController::OnDestroy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LevelPackDetailViewController::RefreshAvailabilityAsync() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController*>(), { "RefreshAvailabilityAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LevelPackDetailViewController::BuyPackButtonWasPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController*>(), { "BuyPackButtonWasPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LevelPackDetailViewController::OpenLevelPackProductStoreAsync() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController*>(), { "OpenLevelPackProductStoreAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LevelPackDetailViewController::ShowContent(::GlobalNamespace::LevelPackDetailViewController_ContentType contentType, ::StringW errorText) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController*>(),
                                                           { "ShowContent", {}, { ::i2c::type_of<::GlobalNamespace::LevelPackDetailViewController_ContentType>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contentType, errorText);
}
inline void GlobalNamespace::LevelPackDetailViewController::HandleAdditionalContentModelDidInvalidateData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController*>(), { "HandleAdditionalContentModelDidInvalidateData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LevelPackDetailViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LevelPackDetailViewController::_DidActivate_g__HandleDidPressRefreshButton_23_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController*>(), { "<DidActivate>g__HandleDidPressRefreshButton|23_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LevelPackDetailViewController::_DidActivate_b__23_1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController*>(), { "<DidActivate>b__23_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LevelPackDetailViewController::_DidActivate_b__23_2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackDetailViewController*>(), { "<DidActivate>b__23_2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LevelPackDetailViewController* GlobalNamespace::LevelPackDetailViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LevelPackDetailViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelPackDetailViewController::LevelPackDetailViewController() {}
