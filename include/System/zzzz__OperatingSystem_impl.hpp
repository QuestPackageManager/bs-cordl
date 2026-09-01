#pragma once
// IWYU pragma private; include "System\OperatingSystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__PlatformID_impl.hpp"
#include "System/zzzz__OperatingSystem_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__PlatformID_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::System::OperatingSystem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::OperatingSystem::*)(::System::PlatformID, ::System::Version*)>(&::System::OperatingSystem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c69e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::OperatingSystem*>(), { ".ctor", {}, { ::i2c::type_of<::System::PlatformID>(), ::i2c::type_of<::System::Version*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OperatingSystem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::OperatingSystem::*)(::System::PlatformID, ::System::Version*, ::StringW)>(&::System::OperatingSystem::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5c69e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::OperatingSystem*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::PlatformID>(), ::i2c::type_of<::System::Version*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OperatingSystem.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::OperatingSystem::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::OperatingSystem::GetObjectData)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5c69f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::OperatingSystem*>(),
                         { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OperatingSystem.get_Platform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::PlatformID (::System::OperatingSystem::*)()>(&::System::OperatingSystem::get_Platform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c69fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::OperatingSystem*>(), { "get_Platform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OperatingSystem.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Version* (::System::OperatingSystem::*)()>(&::System::OperatingSystem::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c69fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::OperatingSystem*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OperatingSystem.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::OperatingSystem::*)()>(&::System::OperatingSystem::Clone)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c69fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::OperatingSystem*>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OperatingSystem.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::OperatingSystem::*)()>(&::System::OperatingSystem::ToString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c6a048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::OperatingSystem*>(), { ::i2c::class_of<::System::OperatingSystem*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OperatingSystem.get_VersionString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::OperatingSystem::*)()>(&::System::OperatingSystem::get_VersionString)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5c6a04c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::OperatingSystem*>(), { "get_VersionString", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Version*& System::OperatingSystem::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr ::System::Version* const& System::OperatingSystem::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void System::OperatingSystem::__cordl_internal_set__version(::System::Version* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
constexpr ::System::PlatformID& System::OperatingSystem::__cordl_internal_get__platform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform;
}
constexpr ::System::PlatformID const& System::OperatingSystem::__cordl_internal_get__platform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform;
}
constexpr void System::OperatingSystem::__cordl_internal_set__platform(::System::PlatformID value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____platform = value;
}
constexpr ::StringW& System::OperatingSystem::__cordl_internal_get__servicePack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____servicePack;
}
constexpr ::StringW const& System::OperatingSystem::__cordl_internal_get__servicePack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____servicePack;
}
constexpr void System::OperatingSystem::__cordl_internal_set__servicePack(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____servicePack = value;
}
constexpr ::StringW& System::OperatingSystem::__cordl_internal_get__versionString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____versionString;
}
constexpr ::StringW const& System::OperatingSystem::__cordl_internal_get__versionString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____versionString;
}
constexpr void System::OperatingSystem::__cordl_internal_set__versionString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____versionString = value;
}
inline void System::OperatingSystem::_ctor(::System::PlatformID platform, ::System::Version* version) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::OperatingSystem*>(), { ".ctor", {}, { ::i2c::type_of<::System::PlatformID>(), ::i2c::type_of<::System::Version*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, platform, version);
}
inline void System::OperatingSystem::_ctor(::System::PlatformID platform, ::System::Version* version, ::StringW servicePack) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::OperatingSystem*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::PlatformID>(), ::i2c::type_of<::System::Version*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, platform, version, servicePack);
}
inline void System::OperatingSystem::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::OperatingSystem*>(),
                          { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::PlatformID System::OperatingSystem::get_Platform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::OperatingSystem*>(), { "get_Platform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::PlatformID>(this, ___internal_method);
}
inline ::System::Version* System::OperatingSystem::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::OperatingSystem*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Version*>(this, ___internal_method);
}
inline ::System::Object* System::OperatingSystem::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::OperatingSystem*>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::StringW System::OperatingSystem::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::OperatingSystem*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::OperatingSystem::get_VersionString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::OperatingSystem*>(), { "get_VersionString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::OperatingSystem* System::OperatingSystem::New_ctor(::System::PlatformID platform, ::System::Version* version) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::OperatingSystem*>(platform, version));
}
inline ::System::OperatingSystem* System::OperatingSystem::New_ctor(::System::PlatformID platform, ::System::Version* version, ::StringW servicePack) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::OperatingSystem*>(platform, version, servicePack));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::OperatingSystem::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::OperatingSystem::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::OperatingSystem::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::OperatingSystem::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::OperatingSystem::OperatingSystem() {}
