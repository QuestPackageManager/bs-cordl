#pragma once
// IWYU pragma private; include "System\TypeLoadException.hpp"
#include "System/zzzz__SystemException_impl.hpp"
#include "System/zzzz__TypeLoadException_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::System::TypeLoadException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TypeLoadException::*)()>(&::System::TypeLoadException::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c8a778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeLoadException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeLoadException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TypeLoadException::*)(::StringW)>(&::System::TypeLoadException::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c8a7d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeLoadException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeLoadException.get_Message
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::TypeLoadException::*)()>(&::System::TypeLoadException::get_Message)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c8a7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::TypeLoadException*>(), { ::i2c::class_of<::System::TypeLoadException*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeLoadException.SetMessageField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TypeLoadException::*)()>(&::System::TypeLoadException::SetMessageField)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5c8a814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeLoadException*>(), { "SetMessageField", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeLoadException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TypeLoadException::*)(::StringW, ::StringW)>(&::System::TypeLoadException::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c8a948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeLoadException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeLoadException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TypeLoadException::*)(::StringW, ::StringW, ::StringW, int32_t)>(&::System::TypeLoadException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c8a990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeLoadException*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeLoadException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TypeLoadException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::TypeLoadException::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5c8a9e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TypeLoadException*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TypeLoadException.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TypeLoadException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::TypeLoadException::GetObjectData)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5c8ab44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::TypeLoadException*>(), { ::i2c::class_of<::System::TypeLoadException*>(), 10 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::TypeLoadException::__cordl_internal_get_ClassName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ClassName;
}
constexpr ::StringW const& System::TypeLoadException::__cordl_internal_get_ClassName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ClassName;
}
constexpr void System::TypeLoadException::__cordl_internal_set_ClassName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ClassName = value;
}
constexpr ::StringW& System::TypeLoadException::__cordl_internal_get_AssemblyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AssemblyName;
}
constexpr ::StringW const& System::TypeLoadException::__cordl_internal_get_AssemblyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AssemblyName;
}
constexpr void System::TypeLoadException::__cordl_internal_set_AssemblyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AssemblyName = value;
}
constexpr ::StringW& System::TypeLoadException::__cordl_internal_get_MessageArg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MessageArg;
}
constexpr ::StringW const& System::TypeLoadException::__cordl_internal_get_MessageArg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MessageArg;
}
constexpr void System::TypeLoadException::__cordl_internal_set_MessageArg(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MessageArg = value;
}
constexpr int32_t& System::TypeLoadException::__cordl_internal_get_ResourceId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ResourceId;
}
constexpr int32_t const& System::TypeLoadException::__cordl_internal_get_ResourceId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ResourceId;
}
constexpr void System::TypeLoadException::__cordl_internal_set_ResourceId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ResourceId = value;
}
inline void System::TypeLoadException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeLoadException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::TypeLoadException::_ctor(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeLoadException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::StringW System::TypeLoadException::get_Message() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::TypeLoadException*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::TypeLoadException::SetMessageField() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeLoadException*>(), { "SetMessageField", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::TypeLoadException::_ctor(::StringW className, ::StringW assemblyName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeLoadException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, className, assemblyName);
}
inline void System::TypeLoadException::_ctor(::StringW className, ::StringW assemblyName, ::StringW messageArg, int32_t resourceId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TypeLoadException*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, className, assemblyName, messageArg, resourceId);
}
inline void System::TypeLoadException::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::TypeLoadException*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::TypeLoadException::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::TypeLoadException*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::TypeLoadException* System::TypeLoadException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TypeLoadException*>());
}
inline ::System::TypeLoadException* System::TypeLoadException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TypeLoadException*>(message));
}
inline ::System::TypeLoadException* System::TypeLoadException::New_ctor(::StringW className, ::StringW assemblyName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TypeLoadException*>(className, assemblyName));
}
inline ::System::TypeLoadException* System::TypeLoadException::New_ctor(::StringW className, ::StringW assemblyName, ::StringW messageArg, int32_t resourceId) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TypeLoadException*>(className, assemblyName, messageArg, resourceId));
}
inline ::System::TypeLoadException* System::TypeLoadException::New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TypeLoadException*>(info, context));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::TypeLoadException::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::TypeLoadException::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::TypeLoadException::TypeLoadException() {}
