#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/LegacyModelConverter.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "BeatSaber/GameSettings/zzzz__LegacyModelConverter_def.hpp"
#include "BeatSaber/GameSettings/zzzz__GraphicSettings_def.hpp"
#include "BeatSaber/GameSettings/zzzz__LegacyModelConverter_def.hpp"
#include "BeatSaber/GameSettings/zzzz__LegacySettingsModel_def.hpp"
#include "BeatSaber/GameSettings/zzzz__MainSettings_def.hpp"
#include "BeatSaber/PerformancePresets/zzzz__PerformancePreset_def.hpp"
#include "GlobalNamespace/zzzz__IFileStorage_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::BeatSaber::GameSettings::__LegacyModelConverter___RequiresUpdateAsync_d__4.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::__LegacyModelConverter___RequiresUpdateAsync_d__4::*)()>(
    &::BeatSaber::GameSettings::__LegacyModelConverter___RequiresUpdateAsync_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x105f648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::__LegacyModelConverter___RequiresUpdateAsync_d__4>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::__LegacyModelConverter___RequiresUpdateAsync_d__4.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::__LegacyModelConverter___RequiresUpdateAsync_d__4::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::GameSettings::__LegacyModelConverter___RequiresUpdateAsync_d__4::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x105f87c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::__LegacyModelConverter___RequiresUpdateAsync_d__4>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::GameSettings::__LegacyModelConverter___RequiresUpdateAsync_d__4::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BeatSaber::GameSettings::__LegacyModelConverter___RequiresUpdateAsync_d__4::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void BeatSaber::GameSettings::__LegacyModelConverter___RequiresUpdateAsync_d__4::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::__LegacyModelConverter___RequiresUpdateAsync_d__4>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::__LegacyModelConverter___RequiresUpdateAsync_d__4::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::__LegacyModelConverter___RequiresUpdateAsync_d__4>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::GameSettings::LegacyModelConverter*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::GameSettings::LegacySettingsModel*>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::BeatSaber::GameSettings::__LegacyModelConverter___RequiresUpdateAsync_d__4::__LegacyModelConverter___RequiresUpdateAsync_d__4(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::BeatSaber::GameSettings::LegacyModelConverter* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::GameSettings::LegacySettingsModel*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::__LegacyModelConverter___RequiresUpdateAsync_d__4::__LegacyModelConverter___RequiresUpdateAsync_d__4() {}
//  Writing Method size for method: ::BeatSaber::GameSettings::__LegacyModelConverter___AttemptConversionAsync_d__5.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::__LegacyModelConverter___AttemptConversionAsync_d__5::*)()>(
    &::BeatSaber::GameSettings::__LegacyModelConverter___AttemptConversionAsync_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x828;
  constexpr static std::size_t addrs = 0x105f8d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::__LegacyModelConverter___AttemptConversionAsync_d__5>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::__LegacyModelConverter___AttemptConversionAsync_d__5.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::__LegacyModelConverter___AttemptConversionAsync_d__5::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::GameSettings::__LegacyModelConverter___AttemptConversionAsync_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1060478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::__LegacyModelConverter___AttemptConversionAsync_d__5>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::GameSettings::__LegacyModelConverter___AttemptConversionAsync_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BeatSaber::GameSettings::__LegacyModelConverter___AttemptConversionAsync_d__5::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void BeatSaber::GameSettings::__LegacyModelConverter___AttemptConversionAsync_d__5::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::__LegacyModelConverter___AttemptConversionAsync_d__5>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::__LegacyModelConverter___AttemptConversionAsync_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::__LegacyModelConverter___AttemptConversionAsync_d__5>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::BeatSaber::GameSettings::MainSettings*,::BeatSaber::GameSettings::GraphicSettings*>>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::GameSettings::LegacyModelConverter*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_legacyModel_5__2", ty:
// "::BeatSaber::GameSettings::LegacySettingsModel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_mainSettings_5__3", ty: "::BeatSaber::GameSettings::MainSettings*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "_graphicSettings_5__4", ty: "::BeatSaber::GameSettings::GraphicSettings*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1",
// ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::GameSettings::LegacySettingsModel*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::BeatSaber::PerformancePresets::PerformancePreset*>>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::GameSettings::__LegacyModelConverter___AttemptConversionAsync_d__5::__LegacyModelConverter___AttemptConversionAsync_d__5(
    int32_t __1__state,
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::BeatSaber::GameSettings::MainSettings*, ::BeatSaber::GameSettings::GraphicSettings*>> __t__builder,
    ::BeatSaber::GameSettings::LegacyModelConverter* __4__this, ::BeatSaber::GameSettings::LegacySettingsModel* _legacyModel_5__2, ::BeatSaber::GameSettings::MainSettings* _mainSettings_5__3,
    ::BeatSaber::GameSettings::GraphicSettings* _graphicSettings_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::GameSettings::LegacySettingsModel*> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>> __u__2,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_legacyModel_5__2 = _legacyModel_5__2;
  this->_mainSettings_5__3 = _mainSettings_5__3;
  this->_graphicSettings_5__4 = _graphicSettings_5__4;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::__LegacyModelConverter___AttemptConversionAsync_d__5::__LegacyModelConverter___AttemptConversionAsync_d__5() {}
//  Writing Method size for method: ::BeatSaber::GameSettings::LegacyModelConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::LegacyModelConverter::*)(::GlobalNamespace::IFileStorage*)>(
    &::BeatSaber::GameSettings::LegacyModelConverter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x105f430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::LegacyModelConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::LegacyModelConverter.RequiresUpdateAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::BeatSaber::GameSettings::LegacyModelConverter::*)()>(
    &::BeatSaber::GameSettings::LegacyModelConverter::RequiresUpdateAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x105f458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::LegacyModelConverter*>::get(),
                                                                               "RequiresUpdateAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::LegacyModelConverter.AttemptConversionAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::BeatSaber::GameSettings::MainSettings*, ::BeatSaber::GameSettings::GraphicSettings*>>* (
        ::BeatSaber::GameSettings::LegacyModelConverter::*)()>(&::BeatSaber::GameSettings::LegacyModelConverter::AttemptConversionAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x105f550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::LegacyModelConverter*>::get(),
                                                                               "AttemptConversionAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IFileStorage*& BeatSaber::GameSettings::LegacyModelConverter::__cordl_internal_get__fileStorage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileStorage;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IFileStorage*> const& BeatSaber::GameSettings::LegacyModelConverter::__cordl_internal_get__fileStorage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileStorage;
}
constexpr void BeatSaber::GameSettings::LegacyModelConverter::__cordl_internal_set__fileStorage(::GlobalNamespace::IFileStorage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fileStorage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::GameSettings::LegacySettingsModel*& BeatSaber::GameSettings::LegacyModelConverter::__cordl_internal_get__legacyModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____legacyModel;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::LegacySettingsModel*> const& BeatSaber::GameSettings::LegacyModelConverter::__cordl_internal_get__legacyModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____legacyModel;
}
constexpr void BeatSaber::GameSettings::LegacyModelConverter::__cordl_internal_set__legacyModel(::BeatSaber::GameSettings::LegacySettingsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____legacyModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatSaber::GameSettings::LegacyModelConverter* BeatSaber::GameSettings::LegacyModelConverter::New_ctor(::GlobalNamespace::IFileStorage* fileStorage) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::GameSettings::LegacyModelConverter*>(fileStorage));
}
inline void BeatSaber::GameSettings::LegacyModelConverter::_ctor(::GlobalNamespace::IFileStorage* fileStorage) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::LegacyModelConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fileStorage);
}
inline ::System::Threading::Tasks::Task_1<bool>* BeatSaber::GameSettings::LegacyModelConverter::RequiresUpdateAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::LegacyModelConverter*>::get(),
                                                                             "RequiresUpdateAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::BeatSaber::GameSettings::MainSettings*, ::BeatSaber::GameSettings::GraphicSettings*>>*
BeatSaber::GameSettings::LegacyModelConverter::AttemptConversionAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::LegacyModelConverter*>::get(),
                                                                             "AttemptConversionAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::BeatSaber::GameSettings::MainSettings*, ::BeatSaber::GameSettings::GraphicSettings*>>*, false>(
      this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::LegacyModelConverter::LegacyModelConverter() {}
