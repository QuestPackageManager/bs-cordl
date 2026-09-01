#pragma once
// IWYU pragma private; include "GlobalNamespace\MockBeatmapLoader.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockBeatmapLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKeyNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListModel_def.hpp"
#include "GlobalNamespace/zzzz__IMockBeatmapDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__MockBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__MockBeatmapLoader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapLoader__GetBeatmapData_d__4.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockBeatmapLoader__GetBeatmapData_d__4::*)()>(&::GlobalNamespace::MockBeatmapLoader__GetBeatmapData_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x59ca2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapLoader__GetBeatmapData_d__4>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapLoader__GetBeatmapData_d__4.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockBeatmapLoader__GetBeatmapData_d__4::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::MockBeatmapLoader__GetBeatmapData_d__4::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x59ca800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapLoader__GetBeatmapData_d__4>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MockBeatmapLoader__GetBeatmapData_d__4::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapLoader__GetBeatmapData_d__4>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::MockBeatmapLoader__GetBeatmapData_d__4::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapLoader__GetBeatmapData_d__4>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::MockBeatmapLoader__GetBeatmapData_d__4::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::MockBeatmapLoader__GetBeatmapData_d__4::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MockBeatmapData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmap", ty:
// "::GlobalNamespace::BeatmapKeyNetSerializable*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MockBeatmapLoader*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MockBeatmapLoader__GetBeatmapData_d__4::MockBeatmapLoader__GetBeatmapData_d__4(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MockBeatmapData*> __t__builder, ::GlobalNamespace::BeatmapKeyNetSerializable* beatmap,
    ::GlobalNamespace::MockBeatmapLoader* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->beatmap = beatmap;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockBeatmapLoader__GetBeatmapData_d__4::MockBeatmapLoader__GetBeatmapData_d__4() {}
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapLoader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockBeatmapLoader::*)(::GlobalNamespace::BeatmapLevelsModel*, ::GlobalNamespace::BeatmapDataLoader*,
                                                                                                      ::GlobalNamespace::EnvironmentsListModel*)>(&::GlobalNamespace::MockBeatmapLoader::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59ca1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapLoader*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::BeatmapLevelsModel*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDataLoader*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapLoader.GetBeatmapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MockBeatmapData*>* (
    ::GlobalNamespace::MockBeatmapLoader::*)(::GlobalNamespace::BeatmapKeyNetSerializable*, ::System::Threading::CancellationToken)>(&::GlobalNamespace::MockBeatmapLoader::GetBeatmapData)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x59ca1f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapLoader*>(),
                                         { "GetBeatmapData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKeyNetSerializable*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapLoader.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockBeatmapLoader::*)()>(&::GlobalNamespace::MockBeatmapLoader::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59ca2e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapLoader*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::MockBeatmapLoader::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::MockBeatmapLoader::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::MockBeatmapLoader::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsModel = value;
}
constexpr ::GlobalNamespace::BeatmapDataLoader*& GlobalNamespace::MockBeatmapLoader::__cordl_internal_get__beatmapDataLoader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataLoader;
}
constexpr ::GlobalNamespace::BeatmapDataLoader* const& GlobalNamespace::MockBeatmapLoader::__cordl_internal_get__beatmapDataLoader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataLoader;
}
constexpr void GlobalNamespace::MockBeatmapLoader::__cordl_internal_set__beatmapDataLoader(::GlobalNamespace::BeatmapDataLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapDataLoader = value;
}
constexpr ::GlobalNamespace::EnvironmentsListModel*& GlobalNamespace::MockBeatmapLoader::__cordl_internal_get__environmentsListModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentsListModel;
}
constexpr ::GlobalNamespace::EnvironmentsListModel* const& GlobalNamespace::MockBeatmapLoader::__cordl_internal_get__environmentsListModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentsListModel;
}
constexpr void GlobalNamespace::MockBeatmapLoader::__cordl_internal_set__environmentsListModel(::GlobalNamespace::EnvironmentsListModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentsListModel = value;
}
inline void GlobalNamespace::MockBeatmapLoader::_ctor(::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel, ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader,
                                                      ::GlobalNamespace::EnvironmentsListModel* environmentsListModel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapLoader*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::BeatmapLevelsModel*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDataLoader*>(),
                                                               ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapLevelsModel, beatmapDataLoader, environmentsListModel);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MockBeatmapData*>* GlobalNamespace::MockBeatmapLoader::GetBeatmapData(::GlobalNamespace::BeatmapKeyNetSerializable* beatmap,
                                                                                                                                   ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapLoader*>(),
                                       { "GetBeatmapData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKeyNetSerializable*>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::MockBeatmapData*>*>(this, ___internal_method, beatmap, cancellationToken);
}
inline void GlobalNamespace::MockBeatmapLoader::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapLoader*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MockBeatmapLoader* GlobalNamespace::MockBeatmapLoader::New_ctor(::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel,
                                                                                          ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader,
                                                                                          ::GlobalNamespace::EnvironmentsListModel* environmentsListModel) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MockBeatmapLoader*>(beatmapLevelsModel, beatmapDataLoader, environmentsListModel));
}
/// @brief Convert operator to "::GlobalNamespace::IMockBeatmapDataProvider"
constexpr GlobalNamespace::MockBeatmapLoader::operator ::GlobalNamespace::IMockBeatmapDataProvider*() noexcept {
  return static_cast<::GlobalNamespace::IMockBeatmapDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMockBeatmapDataProvider"
constexpr ::GlobalNamespace::IMockBeatmapDataProvider* GlobalNamespace::MockBeatmapLoader::i___GlobalNamespace__IMockBeatmapDataProvider() noexcept {
  return static_cast<::GlobalNamespace::IMockBeatmapDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::MockBeatmapLoader::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MockBeatmapLoader::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockBeatmapLoader::MockBeatmapLoader() {}
