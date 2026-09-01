#pragma once
// IWYU pragma private; include "GlobalNamespace\OculusTestExperiment.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OculusTestExperiment_def.hpp"
#include "GlobalNamespace/zzzz__IExperimentData_def.hpp"
#include "GlobalNamespace/zzzz__IExperimentModel_def.hpp"
#include "GlobalNamespace/zzzz__OculusTestExperiment_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OculusTestExperiment_ExperimentData.get_experimentPlatformKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OculusTestExperiment_ExperimentData::*)()>(
    &::GlobalNamespace::OculusTestExperiment_ExperimentData::get_experimentPlatformKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370a1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusTestExperiment_ExperimentData*>(), { "get_experimentPlatformKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusTestExperiment_ExperimentData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusTestExperiment_ExperimentData::*)(::StringW)>(&::GlobalNamespace::OculusTestExperiment_ExperimentData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370a1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusTestExperiment_ExperimentData*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::OculusTestExperiment_ExperimentData::__cordl_internal_get__experimentPlatformKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____experimentPlatformKey;
}
constexpr ::StringW const& GlobalNamespace::OculusTestExperiment_ExperimentData::__cordl_internal_get__experimentPlatformKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____experimentPlatformKey;
}
constexpr void GlobalNamespace::OculusTestExperiment_ExperimentData::__cordl_internal_set__experimentPlatformKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____experimentPlatformKey = value;
}
inline ::StringW GlobalNamespace::OculusTestExperiment_ExperimentData::get_experimentPlatformKey() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusTestExperiment_ExperimentData*>(), { "get_experimentPlatformKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::OculusTestExperiment_ExperimentData::_ctor(::StringW experimentPlatformKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusTestExperiment_ExperimentData*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, experimentPlatformKey);
}
inline ::GlobalNamespace::OculusTestExperiment_ExperimentData* GlobalNamespace::OculusTestExperiment_ExperimentData::New_ctor(::StringW experimentPlatformKey) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OculusTestExperiment_ExperimentData*>(experimentPlatformKey));
}
/// @brief Convert operator to "::GlobalNamespace::IExperimentData"
constexpr GlobalNamespace::OculusTestExperiment_ExperimentData::operator ::GlobalNamespace::IExperimentData*() noexcept {
  return static_cast<::GlobalNamespace::IExperimentData*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IExperimentData"
constexpr ::GlobalNamespace::IExperimentData* GlobalNamespace::OculusTestExperiment_ExperimentData::i___GlobalNamespace__IExperimentData() noexcept {
  return static_cast<::GlobalNamespace::IExperimentData*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusTestExperiment_ExperimentData::OculusTestExperiment_ExperimentData() {}
//  Writing Method size for method: ::GlobalNamespace::OculusTestExperiment__Init_d__3.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusTestExperiment__Init_d__3::*)()>(&::GlobalNamespace::OculusTestExperiment__Init_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x370a1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusTestExperiment__Init_d__3>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusTestExperiment__Init_d__3.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusTestExperiment__Init_d__3::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::OculusTestExperiment__Init_d__3::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370a64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusTestExperiment__Init_d__3>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OculusTestExperiment__Init_d__3::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusTestExperiment__Init_d__3>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OculusTestExperiment__Init_d__3::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusTestExperiment__Init_d__3>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OculusTestExperiment__Init_d__3::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OculusTestExperiment__Init_d__3::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusTestExperiment*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OculusTestExperiment__Init_d__3::OculusTestExperiment__Init_d__3(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                              ::GlobalNamespace::OculusTestExperiment* __4__this,
                                                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusTestExperiment__Init_d__3::OculusTestExperiment__Init_d__3() {}
//  Writing Method size for method: ::GlobalNamespace::OculusTestExperiment.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusTestExperiment::*)()>(&::GlobalNamespace::OculusTestExperiment::Init)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x370a124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusTestExperiment*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusTestExperiment._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusTestExperiment::*)()>(&::GlobalNamespace::OculusTestExperiment::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x370a1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusTestExperiment*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IExperimentModel*& GlobalNamespace::OculusTestExperiment::__cordl_internal_get__experimentModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____experimentModel;
}
constexpr ::GlobalNamespace::IExperimentModel* const& GlobalNamespace::OculusTestExperiment::__cordl_internal_get__experimentModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____experimentModel;
}
constexpr void GlobalNamespace::OculusTestExperiment::__cordl_internal_set__experimentModel(::GlobalNamespace::IExperimentModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____experimentModel = value;
}
inline void GlobalNamespace::OculusTestExperiment::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusTestExperiment*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OculusTestExperiment::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusTestExperiment*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OculusTestExperiment* GlobalNamespace::OculusTestExperiment::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OculusTestExperiment*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusTestExperiment::OculusTestExperiment() {}
