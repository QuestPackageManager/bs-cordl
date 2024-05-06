#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__QuickPlaySetupModel_def.hpp"
#include "GlobalNamespace/zzzz__INetworkConfig_def.hpp"
#include "GlobalNamespace/zzzz__IQuickPlaySetupModel_def.hpp"
#include "GlobalNamespace/zzzz__QuickPlaySetupData_def.hpp"
#include "GlobalNamespace/zzzz__QuickPlaySetupModel_def.hpp"
#include "System/Net/Http/zzzz__HttpClient_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__UriBuilder_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB::*)()>(
    &::GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14cba38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::QuickPlaySetupData*, ::Array<::GlobalNamespace::QuickPlaySetupData*>*>&
GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::ArrayW<::GlobalNamespace::QuickPlaySetupData*, ::Array<::GlobalNamespace::QuickPlaySetupData*>*> const&
GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void
GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB::__cordl_internal_set_data(::ArrayW<::GlobalNamespace::QuickPlaySetupData*, ::Array<::GlobalNamespace::QuickPlaySetupData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB* GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB*>());
}
inline void GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB::__QuickPlaySetupModel__QuickPlaySetupDataFB() {}
//  Writing Method size for method: ::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::*)()>(
    &::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x7fc;
  constexpr static std::size_t addrs = 0x14cba40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x14cc23c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::QuickPlaySetupData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::QuickPlaySetupModel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_uriBuilder_5__2", ty: "::System::UriBuilder*", modifiers: "", def_value: Some("nullptr")
// }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::QuickPlaySetupData*> __t__builder, ::GlobalNamespace::QuickPlaySetupModel* __4__this,
    ::System::UriBuilder* _uriBuilder_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_uriBuilder_5__2 = _uriBuilder_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10() {}
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySetupModel.GetQuickPlaySetupAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* (
    ::GlobalNamespace::QuickPlaySetupModel::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::QuickPlaySetupModel::GetQuickPlaySetupAsync)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x14cb6b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySetupModel*>::get(), "GetQuickPlaySetupAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySetupModel.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuickPlaySetupModel::*)()>(&::GlobalNamespace::QuickPlaySetupModel::Init)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x14cb87c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySetupModel*>::get(), "Init",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySetupModel.StartRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuickPlaySetupModel::*)()>(&::GlobalNamespace::QuickPlaySetupModel::StartRequest)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x14cb814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySetupModel*>::get(), "StartRequest",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySetupModel.GetQuickPlaySetupInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* (
    ::GlobalNamespace::QuickPlaySetupModel::*)()>(&::GlobalNamespace::QuickPlaySetupModel::GetQuickPlaySetupInternal)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x14cb880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySetupModel*>::get(),
                                                                               "GetQuickPlaySetupInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySetupModel.IsQuickPlaySetupTaskValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::QuickPlaySetupModel::*)()>(
    &::GlobalNamespace::QuickPlaySetupModel::IsQuickPlaySetupTaskValid)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x14cb71c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySetupModel*>::get(),
                                                                               "IsQuickPlaySetupTaskValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySetupModel.IsUrlValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::QuickPlaySetupModel::*)(::StringW)>(&::GlobalNamespace::QuickPlaySetupModel::IsUrlValid)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x14cb974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySetupModel*>::get(), "IsUrlValid", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySetupModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuickPlaySetupModel::*)()>(&::GlobalNamespace::QuickPlaySetupModel::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x14cb9d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySetupModel*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IQuickPlaySetupModel"
constexpr GlobalNamespace::QuickPlaySetupModel::operator ::GlobalNamespace::IQuickPlaySetupModel*() noexcept {
  return static_cast<::GlobalNamespace::IQuickPlaySetupModel*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IQuickPlaySetupModel"
constexpr ::GlobalNamespace::IQuickPlaySetupModel* GlobalNamespace::QuickPlaySetupModel::i___GlobalNamespace__IQuickPlaySetupModel() noexcept {
  return static_cast<::GlobalNamespace::IQuickPlaySetupModel*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::INetworkConfig*& GlobalNamespace::QuickPlaySetupModel::__cordl_internal_get__networkConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkConfig*> const& GlobalNamespace::QuickPlaySetupModel::__cordl_internal_get__networkConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig;
}
constexpr void GlobalNamespace::QuickPlaySetupModel::__cordl_internal_set__networkConfig(::GlobalNamespace::INetworkConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____networkConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Http::HttpClient*& GlobalNamespace::QuickPlaySetupModel::__cordl_internal_get__client() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____client;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpClient*> const& GlobalNamespace::QuickPlaySetupModel::__cordl_internal_get__client() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____client;
}
constexpr void GlobalNamespace::QuickPlaySetupModel::__cordl_internal_set__client(::System::Net::Http::HttpClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____client)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>*& GlobalNamespace::QuickPlaySetupModel::__cordl_internal_get__request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____request;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>*> const&
GlobalNamespace::QuickPlaySetupModel::__cordl_internal_get__request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____request;
}
constexpr void GlobalNamespace::QuickPlaySetupModel::__cordl_internal_set__request(::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____request)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::DateTime& GlobalNamespace::QuickPlaySetupModel::__cordl_internal_get__lastRequestTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastRequestTime;
}
constexpr ::System::DateTime const& GlobalNamespace::QuickPlaySetupModel::__cordl_internal_get__lastRequestTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastRequestTime;
}
constexpr void GlobalNamespace::QuickPlaySetupModel::__cordl_internal_set__lastRequestTime(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastRequestTime = value;
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>*
GlobalNamespace::QuickPlaySetupModel::GetQuickPlaySetupAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySetupModel*>::get(), "GetQuickPlaySetupAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>*, false>(this, ___internal_method, cancellationToken);
}
inline void GlobalNamespace::QuickPlaySetupModel::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySetupModel*>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::QuickPlaySetupModel::StartRequest() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySetupModel*>::get(), "StartRequest",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* GlobalNamespace::QuickPlaySetupModel::GetQuickPlaySetupInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySetupModel*>::get(),
                                                                             "GetQuickPlaySetupInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::QuickPlaySetupModel::IsQuickPlaySetupTaskValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySetupModel*>::get(),
                                                                             "IsQuickPlaySetupTaskValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::QuickPlaySetupModel::IsUrlValid(::StringW url) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySetupModel*>::get(), "IsUrlValid", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, url);
}
inline ::GlobalNamespace::QuickPlaySetupModel* GlobalNamespace::QuickPlaySetupModel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::QuickPlaySetupModel*>());
}
inline void GlobalNamespace::QuickPlaySetupModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySetupModel*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuickPlaySetupModel::QuickPlaySetupModel() {}
