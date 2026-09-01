#pragma once
// IWYU pragma private; include "System\Net\AutoWebProxyScriptEngine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__AutoWebProxyScriptEngine_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::AutoWebProxyScriptEngine.GetProxies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::AutoWebProxyScriptEngine::*)(::System::Uri*, ::by_ref<::System::Collections::Generic::IList_1<::StringW>*>)>(
    &::System::Net::AutoWebProxyScriptEngine::GetProxies)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6425e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::AutoWebProxyScriptEngine*>(),
                                                { "GetProxies", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::IList_1<::StringW>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::AutoWebProxyScriptEngine.GetProxies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::AutoWebProxyScriptEngine::*)(::System::Uri*, ::by_ref<::System::Collections::Generic::IList_1<::StringW>*>,
                                                                                                         ::by_ref<int32_t>)>(&::System::Net::AutoWebProxyScriptEngine::GetProxies)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6426198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Net::AutoWebProxyScriptEngine*>(),
            { "GetProxies", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::IList_1<::StringW>*>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
inline bool System::Net::AutoWebProxyScriptEngine::GetProxies(::System::Uri* destination, ::by_ref<::System::Collections::Generic::IList_1<::StringW>*> proxyList) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::AutoWebProxyScriptEngine*>(),
                                              { "GetProxies", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::IList_1<::StringW>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, destination, proxyList);
}
inline bool System::Net::AutoWebProxyScriptEngine::GetProxies(::System::Uri* destination, ::by_ref<::System::Collections::Generic::IList_1<::StringW>*> proxyList, ::by_ref<int32_t> syncStatus) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Net::AutoWebProxyScriptEngine*>(),
          { "GetProxies", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::IList_1<::StringW>*>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, destination, proxyList, syncStatus);
}
// Ctor Parameters []
constexpr ::System::Net::AutoWebProxyScriptEngine::AutoWebProxyScriptEngine() {}
