#pragma once
// IWYU pragma private; include "GlobalNamespace/DnsEndPoint.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DnsEndPoint_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DnsEndPoint.get_endPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPEndPoint* (::GlobalNamespace::DnsEndPoint::*)()>(&::GlobalNamespace::DnsEndPoint::get_endPoint)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x332d6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DnsEndPoint*>(), { "get_endPoint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DnsEndPoint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DnsEndPoint::*)(::StringW, int32_t)>(&::GlobalNamespace::DnsEndPoint::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x332d770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DnsEndPoint*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DnsEndPoint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DnsEndPoint::*)(::System::Net::IPEndPoint*)>(&::GlobalNamespace::DnsEndPoint::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x332d77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DnsEndPoint*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DnsEndPoint.GetEndPointAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::IPEndPoint*>* (::GlobalNamespace::DnsEndPoint::*)(::BGNet::Core::ITaskUtility*)>(
    &::GlobalNamespace::DnsEndPoint::GetEndPointAsync)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x332d830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DnsEndPoint*>(), { "GetEndPointAsync", {}, { ::i2c::type_of<::BGNet::Core::ITaskUtility*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DnsEndPoint.GetEndPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPEndPoint* (::GlobalNamespace::DnsEndPoint::*)()>(&::GlobalNamespace::DnsEndPoint::GetEndPoint)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x332d950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DnsEndPoint*>(), { "GetEndPoint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DnsEndPoint.GetEndPointInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPEndPoint* (::GlobalNamespace::DnsEndPoint::*)()>(&::GlobalNamespace::DnsEndPoint::GetEndPointInternal)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x332d9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DnsEndPoint*>(), { "GetEndPointInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DnsEndPoint.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::DnsEndPoint::*)()>(&::GlobalNamespace::DnsEndPoint::ToString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x332daa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::DnsEndPoint*>(), { ::i2c::class_of<::GlobalNamespace::DnsEndPoint*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DnsEndPoint.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DnsEndPoint::*)(::System::Object*)>(&::GlobalNamespace::DnsEndPoint::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x332db40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::DnsEndPoint*>(), { ::i2c::class_of<::GlobalNamespace::DnsEndPoint*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DnsEndPoint.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DnsEndPoint::*)(::GlobalNamespace::DnsEndPoint*)>(&::GlobalNamespace::DnsEndPoint::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x332dbe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DnsEndPoint*>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::DnsEndPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DnsEndPoint.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::DnsEndPoint::*)()>(&::GlobalNamespace::DnsEndPoint::GetHashCode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x332dc38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::DnsEndPoint*>(), { ::i2c::class_of<::GlobalNamespace::DnsEndPoint*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::DnsEndPoint::__cordl_internal_get_hostName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hostName;
}
constexpr ::StringW const& GlobalNamespace::DnsEndPoint::__cordl_internal_get_hostName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hostName;
}
constexpr void GlobalNamespace::DnsEndPoint::__cordl_internal_set_hostName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hostName = value;
}
constexpr int32_t& GlobalNamespace::DnsEndPoint::__cordl_internal_get_port() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___port;
}
constexpr int32_t const& GlobalNamespace::DnsEndPoint::__cordl_internal_get_port() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___port;
}
constexpr void GlobalNamespace::DnsEndPoint::__cordl_internal_set_port(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___port = value;
}
constexpr ::System::Threading::Tasks::Task_1<::System::Net::IPEndPoint*>*& GlobalNamespace::DnsEndPoint::__cordl_internal_get__getEndPointTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getEndPointTask;
}
constexpr ::System::Threading::Tasks::Task_1<::System::Net::IPEndPoint*>* const& GlobalNamespace::DnsEndPoint::__cordl_internal_get__getEndPointTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getEndPointTask;
}
constexpr void GlobalNamespace::DnsEndPoint::__cordl_internal_set__getEndPointTask(::System::Threading::Tasks::Task_1<::System::Net::IPEndPoint*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____getEndPointTask = value;
}
inline ::System::Net::IPEndPoint* GlobalNamespace::DnsEndPoint::get_endPoint() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DnsEndPoint*>(), { "get_endPoint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*>(this, ___internal_method);
}
inline void GlobalNamespace::DnsEndPoint::_ctor(::StringW hostName, int32_t port) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DnsEndPoint*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hostName, port);
}
inline void GlobalNamespace::DnsEndPoint::_ctor(::System::Net::IPEndPoint* endPoint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DnsEndPoint*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endPoint);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::IPEndPoint*>* GlobalNamespace::DnsEndPoint::GetEndPointAsync(::BGNet::Core::ITaskUtility* taskUtility) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DnsEndPoint*>(), { "GetEndPointAsync", {}, { ::i2c::type_of<::BGNet::Core::ITaskUtility*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::IPEndPoint*>*>(this, ___internal_method, taskUtility);
}
inline ::System::Net::IPEndPoint* GlobalNamespace::DnsEndPoint::GetEndPoint() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DnsEndPoint*>(), { "GetEndPoint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*>(this, ___internal_method);
}
inline ::System::Net::IPEndPoint* GlobalNamespace::DnsEndPoint::GetEndPointInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DnsEndPoint*>(), { "GetEndPointInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::DnsEndPoint::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::DnsEndPoint*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::DnsEndPoint::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::DnsEndPoint*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool GlobalNamespace::DnsEndPoint::Equals(::GlobalNamespace::DnsEndPoint* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DnsEndPoint*>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::DnsEndPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline int32_t GlobalNamespace::DnsEndPoint::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::DnsEndPoint*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::DnsEndPoint* GlobalNamespace::DnsEndPoint::New_ctor(::StringW hostName, int32_t port) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DnsEndPoint*>(hostName, port));
}
inline ::GlobalNamespace::DnsEndPoint* GlobalNamespace::DnsEndPoint::New_ctor(::System::Net::IPEndPoint* endPoint) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DnsEndPoint*>(endPoint));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::DnsEndPoint*>"
constexpr GlobalNamespace::DnsEndPoint::operator ::System::IEquatable_1<::GlobalNamespace::DnsEndPoint*>*() noexcept {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::DnsEndPoint*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::DnsEndPoint*>"
constexpr ::System::IEquatable_1<::GlobalNamespace::DnsEndPoint*>* GlobalNamespace::DnsEndPoint::i___System__IEquatable_1___GlobalNamespace__DnsEndPoint__() noexcept {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::DnsEndPoint*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DnsEndPoint::DnsEndPoint() {}
