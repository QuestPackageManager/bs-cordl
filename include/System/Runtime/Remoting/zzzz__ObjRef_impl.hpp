#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/ObjRef.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/zzzz__ObjRef_def.hpp"
#include "System/Runtime/Remoting/zzzz__IChannelInfo_def.hpp"
#include "System/Runtime/Remoting/zzzz__IEnvoyInfo_def.hpp"
#include "System/Runtime/Remoting/zzzz__IRemotingTypeInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__IObjectReference_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::ObjRef._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ObjRef::*)()>(&::System::Runtime::Remoting::ObjRef::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b1f670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ObjRef._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ObjRef::*)(::StringW, ::System::Runtime::Remoting::IChannelInfo*)>(
    &::System::Runtime::Remoting::ObjRef::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1f6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Remoting::IChannelInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ObjRef.DeserializeInTheCurrentDomain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::ObjRef* (::System::Runtime::Remoting::ObjRef::*)(int32_t, ::ArrayW<uint8_t>)>(
    &::System::Runtime::Remoting::ObjRef::DeserializeInTheCurrentDomain)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5b1f6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), { "DeserializeInTheCurrentDomain", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ObjRef.SerializeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Runtime::Remoting::ObjRef::*)()>(&::System::Runtime::Remoting::ObjRef::SerializeType)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b1f800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), { "SerializeType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ObjRef._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ObjRef::*)(::System::Type*, ::StringW, ::System::Object*)>(&::System::Runtime::Remoting::ObjRef::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5b1f878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ObjRef._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ObjRef::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Remoting::ObjRef::_ctor)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x5b1f96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ObjRef.get_IsReferenceToWellKnow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::ObjRef::*)()>(&::System::Runtime::Remoting::ObjRef::get_IsReferenceToWellKnow)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b1fe98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), { "get_IsReferenceToWellKnow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ObjRef.get_ChannelInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::IChannelInfo* (::System::Runtime::Remoting::ObjRef::*)()>(&::System::Runtime::Remoting::ObjRef::get_ChannelInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1ff04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), { ::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ObjRef.get_EnvoyInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::IEnvoyInfo* (::System::Runtime::Remoting::ObjRef::*)()>(&::System::Runtime::Remoting::ObjRef::get_EnvoyInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1ff0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), { ::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ObjRef.set_EnvoyInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ObjRef::*)(::System::Runtime::Remoting::IEnvoyInfo*)>(&::System::Runtime::Remoting::ObjRef::set_EnvoyInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1ff14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), { ::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ObjRef.get_TypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::IRemotingTypeInfo* (::System::Runtime::Remoting::ObjRef::*)()>(
    &::System::Runtime::Remoting::ObjRef::get_TypeInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1ff1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), { ::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ObjRef.set_TypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ObjRef::*)(::System::Runtime::Remoting::IRemotingTypeInfo*)>(
    &::System::Runtime::Remoting::ObjRef::set_TypeInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1ff24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), { ::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ObjRef.get_URI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::ObjRef::*)()>(&::System::Runtime::Remoting::ObjRef::get_URI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1ff2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), { ::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ObjRef.set_URI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ObjRef::*)(::StringW)>(&::System::Runtime::Remoting::ObjRef::set_URI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1ff34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), { ::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ObjRef.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ObjRef::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Remoting::ObjRef::GetObjectData)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5b1ff3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), { ::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ObjRef.GetRealObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::ObjRef::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::Runtime::Remoting::ObjRef::GetRealObject)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b2010c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), { ::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ObjRef.UpdateChannelInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::ObjRef::*)()>(&::System::Runtime::Remoting::ObjRef::UpdateChannelInfo)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b1f674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), { "UpdateChannelInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::ObjRef.get_ServerType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Remoting::ObjRef::*)()>(&::System::Runtime::Remoting::ObjRef::get_ServerType)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5b201bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), { "get_ServerType", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Remoting::IChannelInfo*& System::Runtime::Remoting::ObjRef::__cordl_internal_get_channel_info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___channel_info;
}
constexpr ::System::Runtime::Remoting::IChannelInfo* const& System::Runtime::Remoting::ObjRef::__cordl_internal_get_channel_info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___channel_info;
}
constexpr void System::Runtime::Remoting::ObjRef::__cordl_internal_set_channel_info(::System::Runtime::Remoting::IChannelInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___channel_info = value;
}
constexpr ::StringW& System::Runtime::Remoting::ObjRef::__cordl_internal_get_uri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uri;
}
constexpr ::StringW const& System::Runtime::Remoting::ObjRef::__cordl_internal_get_uri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uri;
}
constexpr void System::Runtime::Remoting::ObjRef::__cordl_internal_set_uri(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___uri = value;
}
constexpr ::System::Runtime::Remoting::IRemotingTypeInfo*& System::Runtime::Remoting::ObjRef::__cordl_internal_get_typeInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeInfo;
}
constexpr ::System::Runtime::Remoting::IRemotingTypeInfo* const& System::Runtime::Remoting::ObjRef::__cordl_internal_get_typeInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeInfo;
}
constexpr void System::Runtime::Remoting::ObjRef::__cordl_internal_set_typeInfo(::System::Runtime::Remoting::IRemotingTypeInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___typeInfo = value;
}
constexpr ::System::Runtime::Remoting::IEnvoyInfo*& System::Runtime::Remoting::ObjRef::__cordl_internal_get_envoyInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___envoyInfo;
}
constexpr ::System::Runtime::Remoting::IEnvoyInfo* const& System::Runtime::Remoting::ObjRef::__cordl_internal_get_envoyInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___envoyInfo;
}
constexpr void System::Runtime::Remoting::ObjRef::__cordl_internal_set_envoyInfo(::System::Runtime::Remoting::IEnvoyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___envoyInfo = value;
}
constexpr int32_t& System::Runtime::Remoting::ObjRef::__cordl_internal_get_flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flags;
}
constexpr int32_t const& System::Runtime::Remoting::ObjRef::__cordl_internal_get_flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flags;
}
constexpr void System::Runtime::Remoting::ObjRef::__cordl_internal_set_flags(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flags = value;
}
constexpr ::System::Type*& System::Runtime::Remoting::ObjRef::__cordl_internal_get__serverType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverType;
}
constexpr ::System::Type* const& System::Runtime::Remoting::ObjRef::__cordl_internal_get__serverType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverType;
}
constexpr void System::Runtime::Remoting::ObjRef::__cordl_internal_set__serverType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____serverType = value;
}
inline void System::Runtime::Remoting::ObjRef::setStaticF_MarshalledObjectRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MarshalledObjectRef", ::System::Runtime::Remoting::ObjRef*>(std::forward<int32_t>(value));
}
inline int32_t System::Runtime::Remoting::ObjRef::getStaticF_MarshalledObjectRef() {
  return ::cordl_internals::getStaticField<int32_t, "MarshalledObjectRef", ::System::Runtime::Remoting::ObjRef*>();
}
inline void System::Runtime::Remoting::ObjRef::setStaticF_WellKnowObjectRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "WellKnowObjectRef", ::System::Runtime::Remoting::ObjRef*>(std::forward<int32_t>(value));
}
inline int32_t System::Runtime::Remoting::ObjRef::getStaticF_WellKnowObjectRef() {
  return ::cordl_internals::getStaticField<int32_t, "WellKnowObjectRef", ::System::Runtime::Remoting::ObjRef*>();
}
inline void System::Runtime::Remoting::ObjRef::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Remoting::ObjRef::_ctor(::StringW uri, ::System::Runtime::Remoting::IChannelInfo* cinfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Remoting::IChannelInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri, cinfo);
}
inline ::System::Runtime::Remoting::ObjRef* System::Runtime::Remoting::ObjRef::DeserializeInTheCurrentDomain(int32_t domainId, ::ArrayW<uint8_t> tInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(),
                                                                                         { "DeserializeInTheCurrentDomain", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::ObjRef*>(this, ___internal_method, domainId, tInfo);
}
inline ::ArrayW<uint8_t> System::Runtime::Remoting::ObjRef::SerializeType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), { "SerializeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Runtime::Remoting::ObjRef::_ctor(::System::Type* type, ::StringW url, ::System::Object* remoteChannelData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, url, remoteChannelData);
}
inline void System::Runtime::Remoting::ObjRef::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline bool System::Runtime::Remoting::ObjRef::get_IsReferenceToWellKnow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), { "get_IsReferenceToWellKnow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::IChannelInfo* System::Runtime::Remoting::ObjRef::get_ChannelInfo() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::IChannelInfo*>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::IEnvoyInfo* System::Runtime::Remoting::ObjRef::get_EnvoyInfo() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::IEnvoyInfo*>(this, ___internal_method);
}
inline void System::Runtime::Remoting::ObjRef::set_EnvoyInfo(::System::Runtime::Remoting::IEnvoyInfo* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Remoting::IRemotingTypeInfo* System::Runtime::Remoting::ObjRef::get_TypeInfo() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::IRemotingTypeInfo*>(this, ___internal_method);
}
inline void System::Runtime::Remoting::ObjRef::set_TypeInfo(::System::Runtime::Remoting::IRemotingTypeInfo* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Runtime::Remoting::ObjRef::get_URI() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Runtime::Remoting::ObjRef::set_URI(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Remoting::ObjRef::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::Object* System::Runtime::Remoting::ObjRef::GetRealObject(::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context);
}
inline void System::Runtime::Remoting::ObjRef::UpdateChannelInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), { "UpdateChannelInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Type* System::Runtime::Remoting::ObjRef::get_ServerType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::ObjRef*>(), { "get_ServerType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::ObjRef* System::Runtime::Remoting::ObjRef::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::ObjRef*>());
}
inline ::System::Runtime::Remoting::ObjRef* System::Runtime::Remoting::ObjRef::New_ctor(::StringW uri, ::System::Runtime::Remoting::IChannelInfo* cinfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::ObjRef*>(uri, cinfo));
}
inline ::System::Runtime::Remoting::ObjRef* System::Runtime::Remoting::ObjRef::New_ctor(::System::Type* type, ::StringW url, ::System::Object* remoteChannelData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::ObjRef*>(type, url, remoteChannelData));
}
inline ::System::Runtime::Remoting::ObjRef* System::Runtime::Remoting::ObjRef::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                        ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::ObjRef*>(info, context));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IObjectReference"
constexpr System::Runtime::Remoting::ObjRef::operator ::System::Runtime::Serialization::IObjectReference*() noexcept {
  return static_cast<::System::Runtime::Serialization::IObjectReference*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IObjectReference"
constexpr ::System::Runtime::Serialization::IObjectReference* System::Runtime::Remoting::ObjRef::i___System__Runtime__Serialization__IObjectReference() noexcept {
  return static_cast<::System::Runtime::Serialization::IObjectReference*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Runtime::Remoting::ObjRef::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Runtime::Remoting::ObjRef::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::ObjRef::ObjRef() {}
