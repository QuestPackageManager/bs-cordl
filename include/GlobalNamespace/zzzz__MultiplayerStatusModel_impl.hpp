#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerStatusModel.hpp"
#include "GlobalNamespace/zzzz__MultiplayerStatusData_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerStatusModel_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerStatusModel_def.hpp"
#include "GlobalNamespace/zzzz__INetworkConfig_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerStatusData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerStatusModel_def.hpp"
#include "System/Net/Http/zzzz__HttpClient_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__UriBuilder_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusModel_MultiplayerStatusDataFB._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerStatusModel_MultiplayerStatusDataFB::*)()>(
    &::GlobalNamespace::MultiplayerStatusModel_MultiplayerStatusDataFB::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x373195c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusModel_MultiplayerStatusDataFB*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::MultiplayerStatusData*>& GlobalNamespace::MultiplayerStatusModel_MultiplayerStatusDataFB::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::ArrayW<::GlobalNamespace::MultiplayerStatusData*> const& GlobalNamespace::MultiplayerStatusModel_MultiplayerStatusDataFB::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void GlobalNamespace::MultiplayerStatusModel_MultiplayerStatusDataFB::__cordl_internal_set_data(::ArrayW<::GlobalNamespace::MultiplayerStatusData*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
inline void GlobalNamespace::MultiplayerStatusModel_MultiplayerStatusDataFB::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusModel_MultiplayerStatusDataFB*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerStatusModel_MultiplayerStatusDataFB* GlobalNamespace::MultiplayerStatusModel_MultiplayerStatusDataFB::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerStatusModel_MultiplayerStatusDataFB*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerStatusModel_MultiplayerStatusDataFB::MultiplayerStatusModel_MultiplayerStatusDataFB() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9::*)()>(
    &::GlobalNamespace::MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x8b8;
  constexpr static std::size_t addrs = 0x3731960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3732218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerStatusData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::MultiplayerStatusModel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_uriBuilder_5__2", ty: "::System::UriBuilder*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9::MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerStatusData*> __t__builder, ::GlobalNamespace::MultiplayerStatusModel* __4__this,
    ::System::UriBuilder* _uriBuilder_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_uriBuilder_5__2 = _uriBuilder_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9::MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusModel.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerStatusModel::*)()>(&::GlobalNamespace::MultiplayerStatusModel::Init)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3731714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusModel*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusModel.GetMultiplayerStatusAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* (
    ::GlobalNamespace::MultiplayerStatusModel::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::MultiplayerStatusModel::GetMultiplayerStatusAsync)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3731744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusModel*>(),
                                                                                           { "GetMultiplayerStatusAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusModel.IsAvailabilityTaskValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerStatusModel::*)()>(&::GlobalNamespace::MultiplayerStatusModel::IsAvailabilityTaskValid)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x37317bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusModel*>(), { "IsAvailabilityTaskValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusModel.StartRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerStatusModel::*)()>(&::GlobalNamespace::MultiplayerStatusModel::StartRequest)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x373172c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusModel*>(), { "StartRequest", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusModel.GetMultiplayerStatusAsyncInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* (::GlobalNamespace::MultiplayerStatusModel::*)()>(
    &::GlobalNamespace::MultiplayerStatusModel::GetMultiplayerStatusAsyncInternal)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3731820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusModel*>(), { "GetMultiplayerStatusAsyncInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerStatusModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerStatusModel::*)()>(&::GlobalNamespace::MultiplayerStatusModel::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3731900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::INetworkConfig*& GlobalNamespace::MultiplayerStatusModel::__cordl_internal_get__networkConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig;
}
constexpr ::GlobalNamespace::INetworkConfig* const& GlobalNamespace::MultiplayerStatusModel::__cordl_internal_get__networkConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig;
}
constexpr void GlobalNamespace::MultiplayerStatusModel::__cordl_internal_set__networkConfig(::GlobalNamespace::INetworkConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____networkConfig = value;
}
constexpr ::System::Net::Http::HttpClient*& GlobalNamespace::MultiplayerStatusModel::__cordl_internal_get__client() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____client;
}
constexpr ::System::Net::Http::HttpClient* const& GlobalNamespace::MultiplayerStatusModel::__cordl_internal_get__client() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____client;
}
constexpr void GlobalNamespace::MultiplayerStatusModel::__cordl_internal_set__client(::System::Net::Http::HttpClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____client = value;
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>*& GlobalNamespace::MultiplayerStatusModel::__cordl_internal_get__request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____request;
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* const& GlobalNamespace::MultiplayerStatusModel::__cordl_internal_get__request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____request;
}
constexpr void GlobalNamespace::MultiplayerStatusModel::__cordl_internal_set__request(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____request = value;
}
inline void GlobalNamespace::MultiplayerStatusModel::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusModel*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>*
GlobalNamespace::MultiplayerStatusModel::GetMultiplayerStatusAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusModel*>(),
                                                                                         { "GetMultiplayerStatusAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>*>(this, ___internal_method, cancellationToken);
}
inline bool GlobalNamespace::MultiplayerStatusModel::IsAvailabilityTaskValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusModel*>(), { "IsAvailabilityTaskValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerStatusModel::StartRequest() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusModel*>(), { "StartRequest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* GlobalNamespace::MultiplayerStatusModel::GetMultiplayerStatusAsyncInternal() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusModel*>(), { "GetMultiplayerStatusAsyncInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>*>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerStatusModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerStatusModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerStatusModel* GlobalNamespace::MultiplayerStatusModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerStatusModel*>());
}
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerStatusModel"
constexpr GlobalNamespace::MultiplayerStatusModel::operator ::GlobalNamespace::IMultiplayerStatusModel*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerStatusModel*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMultiplayerStatusModel"
constexpr ::GlobalNamespace::IMultiplayerStatusModel* GlobalNamespace::MultiplayerStatusModel::i___GlobalNamespace__IMultiplayerStatusModel() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerStatusModel*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerStatusModel::MultiplayerStatusModel() {}
