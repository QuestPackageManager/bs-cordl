#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__EndPointManager_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Net/zzzz__EndPointListener_def.hpp"
#include "System/Net/zzzz__HttpListener_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
//  Writing Method size for method: ::System::Net::EndPointManager.AddListener
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::HttpListener*)>(&::System::Net::EndPointManager::AddListener)> {
  constexpr static std::size_t size = 0x70c;
  constexpr static std::size_t addrs = 0x2aaf0b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager*>::get(), "AddListener", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointManager.AddPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::Net::HttpListener*)>(&::System::Net::EndPointManager::AddPrefix)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2aafae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager*>::get(), "AddPrefix", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointManager.AddPrefixInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::Net::HttpListener*)>(&::System::Net::EndPointManager::AddPrefixInternal)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2aaf868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager*>::get(), "AddPrefixInternal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointManager.GetEPListener
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::EndPointListener* (*)(::StringW, int32_t, ::System::Net::HttpListener*, bool)>(
    &::System::Net::EndPointManager::GetEPListener)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x2aafc00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager*>::get(), "GetEPListener", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointManager.RemoveEndPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::EndPointListener*, ::System::Net::IPEndPoint*)>(
    &::System::Net::EndPointManager::RemoveEndPoint)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x2aae314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager*>::get(), "RemoveEndPoint", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPointListener*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointManager.RemoveListener
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::HttpListener*)>(&::System::Net::EndPointManager::RemoveListener)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x2aaffdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager*>::get(), "RemoveListener", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointManager.RemovePrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::Net::HttpListener*)>(&::System::Net::EndPointManager::RemovePrefix)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2aaf9c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager*>::get(), "RemovePrefix", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointManager.RemovePrefixInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::Net::HttpListener*)>(&::System::Net::EndPointManager::RemovePrefixInternal)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2ab0360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager*>::get(), "RemovePrefixInternal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener*>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::EndPointManager::setStaticF_ip_to_endpoints(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "ip_to_endpoints", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager*>::get>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Net::EndPointManager::getStaticF_ip_to_endpoints() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "ip_to_endpoints", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager*>::get>();
}
inline void System::Net::EndPointManager::AddListener(::System::Net::HttpListener* listener) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager*>::get(), "AddListener", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, listener);
}
inline void System::Net::EndPointManager::AddPrefix(::StringW prefix, ::System::Net::HttpListener* listener) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager*>::get(), "AddPrefix", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, prefix, listener);
}
inline void System::Net::EndPointManager::AddPrefixInternal(::StringW p, ::System::Net::HttpListener* listener) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager*>::get(), "AddPrefixInternal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p, listener);
}
inline ::System::Net::EndPointListener* System::Net::EndPointManager::GetEPListener(::StringW host, int32_t port, ::System::Net::HttpListener* listener, bool secure) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager*>::get(), "GetEPListener", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::EndPointListener*, false>(nullptr, ___internal_method, host, port, listener, secure);
}
inline void System::Net::EndPointManager::RemoveEndPoint(::System::Net::EndPointListener* epl, ::System::Net::IPEndPoint* ep) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager*>::get(), "RemoveEndPoint", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPointListener*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, epl, ep);
}
inline void System::Net::EndPointManager::RemoveListener(::System::Net::HttpListener* listener) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager*>::get(), "RemoveListener", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, listener);
}
inline void System::Net::EndPointManager::RemovePrefix(::StringW prefix, ::System::Net::HttpListener* listener) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager*>::get(), "RemovePrefix", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, prefix, listener);
}
inline void System::Net::EndPointManager::RemovePrefixInternal(::StringW prefix, ::System::Net::HttpListener* listener) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::EndPointManager*>::get(), "RemovePrefixInternal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpListener*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, prefix, listener);
}
// Ctor Parameters []
constexpr ::System::Net::EndPointManager::EndPointManager() {}
