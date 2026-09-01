#pragma once
// IWYU pragma private; include "BGLib\UnityExtension\ExternalFileReader.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_impl.hpp"
#include "BGLib/UnityExtension/zzzz__ExternalFileReader_def.hpp"
#include "BGLib/UnityExtension/zzzz__ExternalFileReader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::ExternalFileReader__ExistsAsync_d__0.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::ExternalFileReader__ExistsAsync_d__0::*)()>(
    &::BGLib::UnityExtension::ExternalFileReader__ExistsAsync_d__0::MoveNext)> {
  constexpr static std::size_t size = 0x7c8;
  constexpr static std::size_t addrs = 0x3328520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::ExternalFileReader__ExistsAsync_d__0>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::ExternalFileReader__ExistsAsync_d__0.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::ExternalFileReader__ExistsAsync_d__0::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::BGLib::UnityExtension::ExternalFileReader__ExistsAsync_d__0::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3328e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::ExternalFileReader__ExistsAsync_d__0>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BGLib::UnityExtension::ExternalFileReader__ExistsAsync_d__0::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::ExternalFileReader__ExistsAsync_d__0>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BGLib::UnityExtension::ExternalFileReader__ExistsAsync_d__0::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::ExternalFileReader__ExistsAsync_d__0>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::UnityExtension::ExternalFileReader__ExistsAsync_d__0::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BGLib::UnityExtension::ExternalFileReader__ExistsAsync_d__0::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "filePath", ty: "::StringW", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_webRequest_5__2", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest_Result>", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::UnityExtension::ExternalFileReader__ExistsAsync_d__0::ExternalFileReader__ExistsAsync_d__0(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::StringW filePath, ::UnityEngine::Networking::UnityWebRequest* _webRequest_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest_Result> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->filePath = filePath;
  this->_webRequest_5__2 = _webRequest_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::ExternalFileReader__ExistsAsync_d__0::ExternalFileReader__ExistsAsync_d__0() {}
//  Writing Method size for method: ::BGLib::UnityExtension::ExternalFileReader.ExistsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (*)(::StringW)>(&::BGLib::UnityExtension::ExternalFileReader::ExistsAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3328440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::ExternalFileReader*>(), { "ExistsAsync", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<bool>* BGLib::UnityExtension::ExternalFileReader::ExistsAsync(::StringW filePath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::ExternalFileReader*>(), { "ExistsAsync", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(nullptr, ___internal_method, filePath);
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::ExternalFileReader::ExternalFileReader() {}
