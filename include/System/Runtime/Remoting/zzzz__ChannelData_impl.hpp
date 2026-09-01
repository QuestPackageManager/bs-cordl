#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\ChannelData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/zzzz__ChannelData_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::ChannelData.get_ServerProviders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::System::Runtime::Remoting::ChannelData::*)()>(
    &::System::Runtime::Remoting::ChannelData::get_ServerProviders)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b28110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ChannelData*>(), { "get_ServerProviders", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ChannelData.get_ClientProviders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::System::Runtime::Remoting::ChannelData::*)()>(
    &::System::Runtime::Remoting::ChannelData::get_ClientProviders)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b28178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ChannelData*>(), { "get_ClientProviders", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ChannelData.get_CustomProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Hashtable* (::System::Runtime::Remoting::ChannelData::*)()>(
    &::System::Runtime::Remoting::ChannelData::get_CustomProperties)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b281e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ChannelData*>(), { "get_CustomProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ChannelData.CopyFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ChannelData::*)(::System::Runtime::Remoting::ChannelData*)>(
    &::System::Runtime::Remoting::ChannelData::CopyFrom)> {
  constexpr static std::size_t size = 0x888;
  constexpr static std::size_t addrs = 0x5b2824c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ChannelData*>(), { "CopyFrom", {}, { ::i2c::type_of<::System::Runtime::Remoting::ChannelData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ChannelData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ChannelData::*)()>(&::System::Runtime::Remoting::ChannelData::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b291d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ChannelData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Remoting::ChannelData::__cordl_internal_get_Ref() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Ref;
}
constexpr ::StringW const& System::Runtime::Remoting::ChannelData::__cordl_internal_get_Ref() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Ref;
}
constexpr void System::Runtime::Remoting::ChannelData::__cordl_internal_set_Ref(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Ref = value;
}
constexpr ::StringW& System::Runtime::Remoting::ChannelData::__cordl_internal_get_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr ::StringW const& System::Runtime::Remoting::ChannelData::__cordl_internal_get_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr void System::Runtime::Remoting::ChannelData::__cordl_internal_set_Type(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Type = value;
}
constexpr ::StringW& System::Runtime::Remoting::ChannelData::__cordl_internal_get_Id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Id;
}
constexpr ::StringW const& System::Runtime::Remoting::ChannelData::__cordl_internal_get_Id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Id;
}
constexpr void System::Runtime::Remoting::ChannelData::__cordl_internal_set_Id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Id = value;
}
constexpr ::StringW& System::Runtime::Remoting::ChannelData::__cordl_internal_get_DelayLoadAsClientChannel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DelayLoadAsClientChannel;
}
constexpr ::StringW const& System::Runtime::Remoting::ChannelData::__cordl_internal_get_DelayLoadAsClientChannel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DelayLoadAsClientChannel;
}
constexpr void System::Runtime::Remoting::ChannelData::__cordl_internal_set_DelayLoadAsClientChannel(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DelayLoadAsClientChannel = value;
}
constexpr ::System::Collections::ArrayList*& System::Runtime::Remoting::ChannelData::__cordl_internal_get__serverProviders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverProviders;
}
constexpr ::System::Collections::ArrayList* const& System::Runtime::Remoting::ChannelData::__cordl_internal_get__serverProviders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverProviders;
}
constexpr void System::Runtime::Remoting::ChannelData::__cordl_internal_set__serverProviders(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____serverProviders = value;
}
constexpr ::System::Collections::ArrayList*& System::Runtime::Remoting::ChannelData::__cordl_internal_get__clientProviders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clientProviders;
}
constexpr ::System::Collections::ArrayList* const& System::Runtime::Remoting::ChannelData::__cordl_internal_get__clientProviders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clientProviders;
}
constexpr void System::Runtime::Remoting::ChannelData::__cordl_internal_set__clientProviders(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clientProviders = value;
}
constexpr ::System::Collections::Hashtable*& System::Runtime::Remoting::ChannelData::__cordl_internal_get__customProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customProperties;
}
constexpr ::System::Collections::Hashtable* const& System::Runtime::Remoting::ChannelData::__cordl_internal_get__customProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customProperties;
}
constexpr void System::Runtime::Remoting::ChannelData::__cordl_internal_set__customProperties(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____customProperties = value;
}
inline ::System::Collections::ArrayList* System::Runtime::Remoting::ChannelData::get_ServerProviders() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ChannelData*>(), { "get_ServerProviders", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method);
}
inline ::System::Collections::ArrayList* System::Runtime::Remoting::ChannelData::get_ClientProviders() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ChannelData*>(), { "get_ClientProviders", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method);
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::ChannelData::get_CustomProperties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ChannelData*>(), { "get_CustomProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Hashtable*>(this, ___internal_method);
}
inline void System::Runtime::Remoting::ChannelData::CopyFrom(::System::Runtime::Remoting::ChannelData* other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ChannelData*>(), { "CopyFrom", {}, { ::i2c::type_of<::System::Runtime::Remoting::ChannelData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void System::Runtime::Remoting::ChannelData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ChannelData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::ChannelData* System::Runtime::Remoting::ChannelData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::ChannelData*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::ChannelData::ChannelData() {}
