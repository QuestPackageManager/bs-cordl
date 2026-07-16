#pragma once
// IWYU pragma private; include "System/Reflection/RuntimeModule.hpp"
#include "System/Reflection/zzzz__Module_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/Reflection/zzzz__RuntimeModule_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__RuntimeAssembly_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::RuntimeModule.get_Assembly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (::System::Reflection::RuntimeModule::*)()>(&::System::Reflection::RuntimeModule::get_Assembly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8d624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeModule*>(), { ::i2c::class_of<::System::Reflection::RuntimeModule*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeModule.get_ScopeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::RuntimeModule::*)()>(&::System::Reflection::RuntimeModule::get_ScopeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8d62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeModule*>(), { ::i2c::class_of<::System::Reflection::RuntimeModule*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeModule.get_ModuleVersionId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::System::Reflection::RuntimeModule::*)()>(&::System::Reflection::RuntimeModule::get_ModuleVersionId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b8d634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeModule*>(), { ::i2c::class_of<::System::Reflection::RuntimeModule*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeModule.IsResource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::RuntimeModule::*)()>(&::System::Reflection::RuntimeModule::IsResource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8d644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeModule*>(), { ::i2c::class_of<::System::Reflection::RuntimeModule*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeModule.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::RuntimeModule::*)(bool)>(&::System::Reflection::RuntimeModule::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b8d64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeModule*>(), { ::i2c::class_of<::System::Reflection::RuntimeModule*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeModule.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::RuntimeModule::*)(::System::Type*, bool)>(
    &::System::Reflection::RuntimeModule::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b8d6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeModule*>(), { ::i2c::class_of<::System::Reflection::RuntimeModule*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeModule.IsDefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::RuntimeModule::*)(::System::Type*, bool)>(&::System::Reflection::RuntimeModule::IsDefined)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b8d72c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeModule*>(), { ::i2c::class_of<::System::Reflection::RuntimeModule*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeModule.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::RuntimeModule::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::RuntimeModule::GetObjectData)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5b8d7a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeModule*>(), { ::i2c::class_of<::System::Reflection::RuntimeModule*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeModule.GetRuntimeAssembly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::RuntimeAssembly* (::System::Reflection::RuntimeModule::*)()>(&::System::Reflection::RuntimeModule::GetRuntimeAssembly)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b8d834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeModule*>(), { "GetRuntimeAssembly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeModule.GetModuleVersionId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::System::Reflection::RuntimeModule::*)()>(&::System::Reflection::RuntimeModule::GetModuleVersionId)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b8d8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeModule*>(), { ::i2c::class_of<::System::Reflection::RuntimeModule*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeModule.GetGuidInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::ArrayW<uint8_t>)>(&::System::Reflection::RuntimeModule::GetGuidInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8d91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeModule*>(),
                                                                                           { "GetGuidInternal", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::RuntimeModule::*)()>(&::System::Reflection::RuntimeModule::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b8d920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeModule*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& System::Reflection::RuntimeModule::__cordl_internal_get__impl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____impl;
}
constexpr ::System::IntPtr const& System::Reflection::RuntimeModule::__cordl_internal_get__impl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____impl;
}
constexpr void System::Reflection::RuntimeModule::__cordl_internal_set__impl(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____impl = value;
}
constexpr ::System::Reflection::Assembly*& System::Reflection::RuntimeModule::__cordl_internal_get_assembly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assembly;
}
constexpr ::System::Reflection::Assembly* const& System::Reflection::RuntimeModule::__cordl_internal_get_assembly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assembly;
}
constexpr void System::Reflection::RuntimeModule::__cordl_internal_set_assembly(::System::Reflection::Assembly* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___assembly = value;
}
constexpr ::StringW& System::Reflection::RuntimeModule::__cordl_internal_get_fqname() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fqname;
}
constexpr ::StringW const& System::Reflection::RuntimeModule::__cordl_internal_get_fqname() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fqname;
}
constexpr void System::Reflection::RuntimeModule::__cordl_internal_set_fqname(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fqname = value;
}
constexpr ::StringW& System::Reflection::RuntimeModule::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& System::Reflection::RuntimeModule::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Reflection::RuntimeModule::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::StringW& System::Reflection::RuntimeModule::__cordl_internal_get_scopename() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scopename;
}
constexpr ::StringW const& System::Reflection::RuntimeModule::__cordl_internal_get_scopename() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scopename;
}
constexpr void System::Reflection::RuntimeModule::__cordl_internal_set_scopename(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scopename = value;
}
constexpr bool& System::Reflection::RuntimeModule::__cordl_internal_get_is_resource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_resource;
}
constexpr bool const& System::Reflection::RuntimeModule::__cordl_internal_get_is_resource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_resource;
}
constexpr void System::Reflection::RuntimeModule::__cordl_internal_set_is_resource(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___is_resource = value;
}
constexpr int32_t& System::Reflection::RuntimeModule::__cordl_internal_get_token() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___token;
}
constexpr int32_t const& System::Reflection::RuntimeModule::__cordl_internal_get_token() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___token;
}
constexpr void System::Reflection::RuntimeModule::__cordl_internal_set_token(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___token = value;
}
inline ::System::Reflection::Assembly* System::Reflection::RuntimeModule::get_Assembly() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeModule*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(this, ___internal_method);
}
inline ::StringW System::Reflection::RuntimeModule::get_ScopeName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeModule*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Guid System::Reflection::RuntimeModule::get_ModuleVersionId() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeModule*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline bool System::Reflection::RuntimeModule::IsResource() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeModule*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*> System::Reflection::RuntimeModule::GetCustomAttributes(bool inherit) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeModule*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*> System::Reflection::RuntimeModule::GetCustomAttributes(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeModule*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, attributeType, inherit);
}
inline bool System::Reflection::RuntimeModule::IsDefined(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeModule*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributeType, inherit);
}
inline void System::Reflection::RuntimeModule::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeModule*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::Reflection::RuntimeAssembly* System::Reflection::RuntimeModule::GetRuntimeAssembly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeModule*>(), { "GetRuntimeAssembly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeAssembly*>(this, ___internal_method);
}
inline ::System::Guid System::Reflection::RuntimeModule::GetModuleVersionId() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeModule*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void System::Reflection::RuntimeModule::GetGuidInternal(::System::IntPtr _cordl_module, ::ArrayW<uint8_t> guid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeModule*>(),
                                                                                         { "GetGuidInternal", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_module, guid);
}
inline void System::Reflection::RuntimeModule::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeModule*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Reflection::RuntimeModule* System::Reflection::RuntimeModule::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::RuntimeModule*>());
}
// Ctor Parameters []
constexpr ::System::Reflection::RuntimeModule::RuntimeModule() {}
