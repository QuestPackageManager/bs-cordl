#pragma once
// IWYU pragma private; include "System/Net/EndPointManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__EndPointManager_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Net/zzzz__EndPointListener_def.hpp"
#include "System/Net/zzzz__HttpListener_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
//  Writing Method size for method: ::System::Net::EndPointManager.AddListener
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::HttpListener*)>(&::System::Net::EndPointManager::AddListener)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x642a324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointManager*>(), { "AddListener", {}, { ::i2c::type_of<::System::Net::HttpListener*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointManager.AddPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Net::HttpListener*)>(&::System::Net::EndPointManager::AddPrefix)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x642abc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::EndPointManager*>(), { "AddPrefix", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::HttpListener*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointManager.AddPrefixInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Net::HttpListener*)>(&::System::Net::EndPointManager::AddPrefixInternal)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x642a934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::EndPointManager*>(), { "AddPrefixInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::HttpListener*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointManager.GetEPListener
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::EndPointListener* (*)(::StringW, int32_t, ::System::Net::HttpListener*, bool)>(&::System::Net::EndPointManager::GetEPListener)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x642ace4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::EndPointManager*>(),
                                         { "GetEPListener", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::HttpListener*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointManager.RemoveEndPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::EndPointListener*, ::System::Net::IPEndPoint*)>(&::System::Net::EndPointManager::RemoveEndPoint)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x64295ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointManager*>(),
                                                             { "RemoveEndPoint", {}, { ::i2c::type_of<::System::Net::EndPointListener*>(), ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointManager.RemoveListener
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::HttpListener*)>(&::System::Net::EndPointManager::RemoveListener)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x642b09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointManager*>(), { "RemoveListener", {}, { ::i2c::type_of<::System::Net::HttpListener*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointManager.RemovePrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Net::HttpListener*)>(&::System::Net::EndPointManager::RemovePrefix)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x642aaa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::EndPointManager*>(), { "RemovePrefix", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::HttpListener*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::EndPointManager.RemovePrefixInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Net::HttpListener*)>(&::System::Net::EndPointManager::RemovePrefixInternal)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x642b3d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::EndPointManager*>(), { "RemovePrefixInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::HttpListener*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::EndPointManager::setStaticF_ip_to_endpoints(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "ip_to_endpoints", ::System::Net::EndPointManager*>(std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Net::EndPointManager::getStaticF_ip_to_endpoints() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "ip_to_endpoints", ::System::Net::EndPointManager*>();
}
inline void System::Net::EndPointManager::AddListener(::System::Net::HttpListener* listener) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointManager*>(), { "AddListener", {}, { ::i2c::type_of<::System::Net::HttpListener*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, listener);
}
inline void System::Net::EndPointManager::AddPrefix(::StringW prefix, ::System::Net::HttpListener* listener) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::EndPointManager*>(), { "AddPrefix", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::HttpListener*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prefix, listener);
}
inline void System::Net::EndPointManager::AddPrefixInternal(::StringW p, ::System::Net::HttpListener* listener) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::EndPointManager*>(), { "AddPrefixInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::HttpListener*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, listener);
}
inline ::System::Net::EndPointListener* System::Net::EndPointManager::GetEPListener(::StringW host, int32_t port, ::System::Net::HttpListener* listener, bool secure) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::EndPointManager*>(),
                                       { "GetEPListener", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::HttpListener*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::EndPointListener*>(nullptr, ___internal_method, host, port, listener, secure);
}
inline void System::Net::EndPointManager::RemoveEndPoint(::System::Net::EndPointListener* epl, ::System::Net::IPEndPoint* ep) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointManager*>(),
                                                           { "RemoveEndPoint", {}, { ::i2c::type_of<::System::Net::EndPointListener*>(), ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, epl, ep);
}
inline void System::Net::EndPointManager::RemoveListener(::System::Net::HttpListener* listener) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::EndPointManager*>(), { "RemoveListener", {}, { ::i2c::type_of<::System::Net::HttpListener*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, listener);
}
inline void System::Net::EndPointManager::RemovePrefix(::StringW prefix, ::System::Net::HttpListener* listener) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::EndPointManager*>(), { "RemovePrefix", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::HttpListener*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prefix, listener);
}
inline void System::Net::EndPointManager::RemovePrefixInternal(::StringW prefix, ::System::Net::HttpListener* listener) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::EndPointManager*>(), { "RemovePrefixInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::HttpListener*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prefix, listener);
}
// Ctor Parameters []
constexpr ::System::Net::EndPointManager::EndPointManager() {}
