#pragma once
// IWYU pragma private; include "GlobalNamespace/MockPlayerEntitlementResolver.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_impl.hpp"
#include "GlobalNamespace/zzzz__EntitlementsStatus_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockPlayerEntitlementResolver_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementsStatus_def.hpp"
#include "GlobalNamespace/zzzz__IEntitlementModel_def.hpp"
#include "GlobalNamespace/zzzz__IMockPlayerEntitlementResolver_def.hpp"
#include "GlobalNamespace/zzzz__MockPlayerEntitlementResolver_def.hpp"
#include "GlobalNamespace/zzzz__MockPlayerSettings_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4::*)()>(
    &::GlobalNamespace::MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x5e25b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e25e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementsStatus>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::MockPlayerEntitlementResolver*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4::MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementsStatus> __t__builder, ::GlobalNamespace::MockPlayerEntitlementResolver* __4__this,
    ::StringW levelId, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->levelId = levelId;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4::MockPlayerEntitlementResolver__GetLevelEntitlementStatusAsync_d__4() {}
//  Writing Method size for method: ::GlobalNamespace::MockPlayerEntitlementResolver._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerEntitlementResolver::*)(
    ::GlobalNamespace::MockPlayerSettings*, ::GlobalNamespace::BeatmapLevelsModel*, ::GlobalNamespace::IEntitlementModel*)>(&::GlobalNamespace::MockPlayerEntitlementResolver::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e2571c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerEntitlementResolver*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::MockPlayerSettings*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelsModel*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::IEntitlementModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerEntitlementResolver.GetLevelEntitlementStatusAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementsStatus>* (
    ::GlobalNamespace::MockPlayerEntitlementResolver::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::MockPlayerEntitlementResolver::GetLevelEntitlementStatusAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e25a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerEntitlementResolver*>(),
                                                             { "GetLevelEntitlementStatusAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerEntitlementResolver.IsDlcLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayerEntitlementResolver::*)(::StringW)>(&::GlobalNamespace::MockPlayerEntitlementResolver::IsDlcLevel)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e25b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerEntitlementResolver*>(), { "IsDlcLevel", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MockPlayerSettings*& GlobalNamespace::MockPlayerEntitlementResolver::__cordl_internal_get__settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
constexpr ::GlobalNamespace::MockPlayerSettings* const& GlobalNamespace::MockPlayerEntitlementResolver::__cordl_internal_get__settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
constexpr void GlobalNamespace::MockPlayerEntitlementResolver::__cordl_internal_set__settings(::GlobalNamespace::MockPlayerSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settings = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::MockPlayerEntitlementResolver::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::MockPlayerEntitlementResolver::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::MockPlayerEntitlementResolver::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsModel = value;
}
constexpr ::GlobalNamespace::IEntitlementModel*& GlobalNamespace::MockPlayerEntitlementResolver::__cordl_internal_get__entitlementModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlementModel;
}
constexpr ::GlobalNamespace::IEntitlementModel* const& GlobalNamespace::MockPlayerEntitlementResolver::__cordl_internal_get__entitlementModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlementModel;
}
constexpr void GlobalNamespace::MockPlayerEntitlementResolver::__cordl_internal_set__entitlementModel(::GlobalNamespace::IEntitlementModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____entitlementModel = value;
}
inline void GlobalNamespace::MockPlayerEntitlementResolver::_ctor(::GlobalNamespace::MockPlayerSettings* settings, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel,
                                                                  ::GlobalNamespace::IEntitlementModel* entitlementModel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerEntitlementResolver*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::MockPlayerSettings*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelsModel*>(),
                                                               ::i2c::type_of<::GlobalNamespace::IEntitlementModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings, beatmapLevelsModel, entitlementModel);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementsStatus>*
GlobalNamespace::MockPlayerEntitlementResolver::GetLevelEntitlementStatusAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerEntitlementResolver*>(),
                                                           { "GetLevelEntitlementStatusAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementsStatus>*>(this, ___internal_method, levelId, cancellationToken);
}
inline bool GlobalNamespace::MockPlayerEntitlementResolver::IsDlcLevel(::StringW levelId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerEntitlementResolver*>(), { "IsDlcLevel", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, levelId);
}
inline ::GlobalNamespace::MockPlayerEntitlementResolver* GlobalNamespace::MockPlayerEntitlementResolver::New_ctor(::GlobalNamespace::MockPlayerSettings* settings,
                                                                                                                  ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel,
                                                                                                                  ::GlobalNamespace::IEntitlementModel* entitlementModel) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MockPlayerEntitlementResolver*>(settings, beatmapLevelsModel, entitlementModel));
}
/// @brief Convert operator to "::GlobalNamespace::IMockPlayerEntitlementResolver"
constexpr GlobalNamespace::MockPlayerEntitlementResolver::operator ::GlobalNamespace::IMockPlayerEntitlementResolver*() noexcept {
  return static_cast<::GlobalNamespace::IMockPlayerEntitlementResolver*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMockPlayerEntitlementResolver"
constexpr ::GlobalNamespace::IMockPlayerEntitlementResolver* GlobalNamespace::MockPlayerEntitlementResolver::i___GlobalNamespace__IMockPlayerEntitlementResolver() noexcept {
  return static_cast<::GlobalNamespace::IMockPlayerEntitlementResolver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockPlayerEntitlementResolver::MockPlayerEntitlementResolver() {}
