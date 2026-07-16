#pragma once
// IWYU pragma private; include "System/ComponentModel/TypeDescriptionProvider.hpp"
#include "System/ComponentModel/zzzz__CustomTypeDescriptor_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptionProvider_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/ComponentModel/zzzz__ICustomTypeDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__IExtenderProvider_def.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptionProvider_def.hpp"
#include "System/zzzz__IServiceProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionProvider_EmptyCustomTypeDescriptor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::TypeDescriptionProvider_EmptyCustomTypeDescriptor::*)()>(
    &::System::ComponentModel::TypeDescriptionProvider_EmptyCustomTypeDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63c3d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionProvider_EmptyCustomTypeDescriptor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::ComponentModel::TypeDescriptionProvider_EmptyCustomTypeDescriptor::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionProvider_EmptyCustomTypeDescriptor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::TypeDescriptionProvider_EmptyCustomTypeDescriptor* System::ComponentModel::TypeDescriptionProvider_EmptyCustomTypeDescriptor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::TypeDescriptionProvider_EmptyCustomTypeDescriptor*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptionProvider_EmptyCustomTypeDescriptor::TypeDescriptionProvider_EmptyCustomTypeDescriptor() {}
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::TypeDescriptionProvider::*)()>(&::System::ComponentModel::TypeDescriptionProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63ba560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionProvider.CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::ComponentModel::TypeDescriptionProvider::*)(::System::IServiceProvider*, ::System::Type*, ::ArrayW<::System::Type*>, ::ArrayW<::System::Object*>)>(
        &::System::ComponentModel::TypeDescriptionProvider::CreateInstance)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x63c3c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionProvider*>(), { ::i2c::class_of<::System::ComponentModel::TypeDescriptionProvider*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionProvider.GetCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (::System::ComponentModel::TypeDescriptionProvider::*)(::System::Object*)>(
    &::System::ComponentModel::TypeDescriptionProvider::GetCache)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x63c3cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionProvider*>(), { ::i2c::class_of<::System::ComponentModel::TypeDescriptionProvider*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionProvider.GetExtendedTypeDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (::System::ComponentModel::TypeDescriptionProvider::*)(::System::Object*)>(
    &::System::ComponentModel::TypeDescriptionProvider::GetExtendedTypeDescriptor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x63c3cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionProvider*>(), { ::i2c::class_of<::System::ComponentModel::TypeDescriptionProvider*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionProvider.GetExtenderProviders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::ComponentModel::IExtenderProvider*> (::System::ComponentModel::TypeDescriptionProvider::*)(::System::Object*)>(
    &::System::ComponentModel::TypeDescriptionProvider::GetExtenderProviders)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x63c3d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionProvider*>(), { ::i2c::class_of<::System::ComponentModel::TypeDescriptionProvider*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionProvider.GetReflectionType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::TypeDescriptionProvider::*)(::System::Type*)>(
    &::System::ComponentModel::TypeDescriptionProvider::GetReflectionType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x63c3e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionProvider*>(), { "GetReflectionType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionProvider.GetReflectionType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::TypeDescriptionProvider::*)(::System::Type*, ::System::Object*)>(
    &::System::ComponentModel::TypeDescriptionProvider::GetReflectionType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x63c3e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionProvider*>(), { ::i2c::class_of<::System::ComponentModel::TypeDescriptionProvider*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionProvider.GetTypeDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (::System::ComponentModel::TypeDescriptionProvider::*)(::System::Type*)>(
    &::System::ComponentModel::TypeDescriptionProvider::GetTypeDescriptor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x63c3eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionProvider*>(), { "GetTypeDescriptor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionProvider.GetTypeDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (::System::ComponentModel::TypeDescriptionProvider::*)(::System::Object*)>(
    &::System::ComponentModel::TypeDescriptionProvider::GetTypeDescriptor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x63c3ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionProvider*>(), { "GetTypeDescriptor", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionProvider.GetTypeDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (::System::ComponentModel::TypeDescriptionProvider::*)(::System::Type*, ::System::Object*)>(
    &::System::ComponentModel::TypeDescriptionProvider::GetTypeDescriptor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x63c3f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionProvider*>(), { ::i2c::class_of<::System::ComponentModel::TypeDescriptionProvider*>(), 9 }));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::TypeDescriptionProvider*& System::ComponentModel::TypeDescriptionProvider::__cordl_internal_get__parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent;
}
constexpr ::System::ComponentModel::TypeDescriptionProvider* const& System::ComponentModel::TypeDescriptionProvider::__cordl_internal_get__parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent;
}
constexpr void System::ComponentModel::TypeDescriptionProvider::__cordl_internal_set__parent(::System::ComponentModel::TypeDescriptionProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parent = value;
}
constexpr ::System::ComponentModel::TypeDescriptionProvider_EmptyCustomTypeDescriptor*& System::ComponentModel::TypeDescriptionProvider::__cordl_internal_get__emptyDescriptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emptyDescriptor;
}
constexpr ::System::ComponentModel::TypeDescriptionProvider_EmptyCustomTypeDescriptor* const& System::ComponentModel::TypeDescriptionProvider::__cordl_internal_get__emptyDescriptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emptyDescriptor;
}
constexpr void System::ComponentModel::TypeDescriptionProvider::__cordl_internal_set__emptyDescriptor(::System::ComponentModel::TypeDescriptionProvider_EmptyCustomTypeDescriptor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____emptyDescriptor = value;
}
inline void System::ComponentModel::TypeDescriptionProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::TypeDescriptionProvider::CreateInstance(::System::IServiceProvider* provider, ::System::Type* objectType, ::ArrayW<::System::Type*> argTypes,
                                                                                         ::ArrayW<::System::Object*> args) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::TypeDescriptionProvider*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, provider, objectType, argTypes, args);
}
inline ::System::Collections::IDictionary* System::ComponentModel::TypeDescriptionProvider::GetCache(::System::Object* instance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::TypeDescriptionProvider*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(this, ___internal_method, instance);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptionProvider::GetExtendedTypeDescriptor(::System::Object* instance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::TypeDescriptionProvider*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*>(this, ___internal_method, instance);
}
inline ::ArrayW<::System::ComponentModel::IExtenderProvider*> System::ComponentModel::TypeDescriptionProvider::GetExtenderProviders(::System::Object* instance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::TypeDescriptionProvider*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::ComponentModel::IExtenderProvider*>>(this, ___internal_method, instance);
}
inline ::System::Type* System::ComponentModel::TypeDescriptionProvider::GetReflectionType(::System::Type* objectType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionProvider*>(), { "GetReflectionType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, objectType);
}
inline ::System::Type* System::ComponentModel::TypeDescriptionProvider::GetReflectionType(::System::Type* objectType, ::System::Object* instance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::TypeDescriptionProvider*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, objectType, instance);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptionProvider::GetTypeDescriptor(::System::Type* objectType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionProvider*>(), { "GetTypeDescriptor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*>(this, ___internal_method, objectType);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptionProvider::GetTypeDescriptor(::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::TypeDescriptionProvider*>(), { "GetTypeDescriptor", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*>(this, ___internal_method, instance);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptionProvider::GetTypeDescriptor(::System::Type* objectType, ::System::Object* instance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::TypeDescriptionProvider*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*>(this, ___internal_method, objectType, instance);
}
inline ::System::ComponentModel::TypeDescriptionProvider* System::ComponentModel::TypeDescriptionProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::TypeDescriptionProvider*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptionProvider::TypeDescriptionProvider() {}
