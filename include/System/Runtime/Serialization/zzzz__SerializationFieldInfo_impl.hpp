#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\SerializationFieldInfo.hpp"
#include "System/Reflection/zzzz__FieldInfo_impl.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationFieldInfo_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__FieldAttributes_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/Reflection/zzzz__RuntimeFieldInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeFieldHandle_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationFieldInfo.get_Module
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Module* (::System::Runtime::Serialization::SerializationFieldInfo::*)()>(
    &::System::Runtime::Serialization::SerializationFieldInfo::get_Module)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b54fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationFieldInfo.get_MetadataToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::SerializationFieldInfo::*)()>(
    &::System::Runtime::Serialization::SerializationFieldInfo::get_MetadataToken)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b54ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationFieldInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SerializationFieldInfo::*)(::System::Reflection::RuntimeFieldInfo*, ::StringW)>(
    &::System::Runtime::Serialization::SerializationFieldInfo::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b4e0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Reflection::RuntimeFieldInfo*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationFieldInfo.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::SerializationFieldInfo::*)()>(
    &::System::Runtime::Serialization::SerializationFieldInfo::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5501c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationFieldInfo.get_DeclaringType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Serialization::SerializationFieldInfo::*)()>(
    &::System::Runtime::Serialization::SerializationFieldInfo::get_DeclaringType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b55024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationFieldInfo.get_ReflectedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Serialization::SerializationFieldInfo::*)()>(
    &::System::Runtime::Serialization::SerializationFieldInfo::get_ReflectedType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b55040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationFieldInfo.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Runtime::Serialization::SerializationFieldInfo::*)(bool)>(
    &::System::Runtime::Serialization::SerializationFieldInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b5505c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationFieldInfo.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Runtime::Serialization::SerializationFieldInfo::*)(::System::Type*, bool)>(
    &::System::Runtime::Serialization::SerializationFieldInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b55080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationFieldInfo.IsDefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::SerializationFieldInfo::*)(::System::Type*, bool)>(
    &::System::Runtime::Serialization::SerializationFieldInfo::IsDefined)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b550a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationFieldInfo.get_FieldType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Serialization::SerializationFieldInfo::*)()>(
    &::System::Runtime::Serialization::SerializationFieldInfo::get_FieldType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b550c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationFieldInfo.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::SerializationFieldInfo::*)(::System::Object*)>(
    &::System::Runtime::Serialization::SerializationFieldInfo::GetValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b550e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationFieldInfo.InternalGetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::SerializationFieldInfo::*)(::System::Object*)>(
    &::System::Runtime::Serialization::SerializationFieldInfo::InternalGetValue)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b4eea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(), { "InternalGetValue", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationFieldInfo.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SerializationFieldInfo::*)(::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags,
                                                                                                                          ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*)>(
    &::System::Runtime::Serialization::SerializationFieldInfo::SetValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b55104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationFieldInfo.InternalSetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SerializationFieldInfo::*)(::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags,
                                                                                                                          ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*)>(
    &::System::Runtime::Serialization::SerializationFieldInfo::InternalSetValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b4e810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(),
                                                             { "InternalSetValue",
                                                               {},
                                                               { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Reflection::BindingFlags>(),
                                                                 ::i2c::type_of<::System::Reflection::Binder*>(), ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationFieldInfo.get_FieldInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::RuntimeFieldInfo* (::System::Runtime::Serialization::SerializationFieldInfo::*)()>(
    &::System::Runtime::Serialization::SerializationFieldInfo::get_FieldInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b55124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(), { "get_FieldInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationFieldInfo.get_FieldHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeFieldHandle (::System::Runtime::Serialization::SerializationFieldInfo::*)()>(
    &::System::Runtime::Serialization::SerializationFieldInfo::get_FieldHandle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b5512c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationFieldInfo.get_Attributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::FieldAttributes (::System::Runtime::Serialization::SerializationFieldInfo::*)()>(
    &::System::Runtime::Serialization::SerializationFieldInfo::get_Attributes)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b5514c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(), 16 }));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::RuntimeFieldInfo*& System::Runtime::Serialization::SerializationFieldInfo::__cordl_internal_get_m_field() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_field;
}
constexpr ::System::Reflection::RuntimeFieldInfo* const& System::Runtime::Serialization::SerializationFieldInfo::__cordl_internal_get_m_field() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_field;
}
constexpr void System::Runtime::Serialization::SerializationFieldInfo::__cordl_internal_set_m_field(::System::Reflection::RuntimeFieldInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_field = value;
}
constexpr ::StringW& System::Runtime::Serialization::SerializationFieldInfo::__cordl_internal_get_m_serializationName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_serializationName;
}
constexpr ::StringW const& System::Runtime::Serialization::SerializationFieldInfo::__cordl_internal_get_m_serializationName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_serializationName;
}
constexpr void System::Runtime::Serialization::SerializationFieldInfo::__cordl_internal_set_m_serializationName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_serializationName = value;
}
inline ::System::Reflection::Module* System::Runtime::Serialization::SerializationFieldInfo::get_Module() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Module*>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::SerializationFieldInfo::get_MetadataToken() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Runtime::Serialization::SerializationFieldInfo::_ctor(::System::Reflection::RuntimeFieldInfo* field, ::StringW namePrefix) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Reflection::RuntimeFieldInfo*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, field, namePrefix);
}
inline ::StringW System::Runtime::Serialization::SerializationFieldInfo::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Type* System::Runtime::Serialization::SerializationFieldInfo::get_DeclaringType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Type* System::Runtime::Serialization::SerializationFieldInfo::get_ReflectedType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*> System::Runtime::Serialization::SerializationFieldInfo::GetCustomAttributes(bool inherit) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*> System::Runtime::Serialization::SerializationFieldInfo::GetCustomAttributes(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, attributeType, inherit);
}
inline bool System::Runtime::Serialization::SerializationFieldInfo::IsDefined(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributeType, inherit);
}
inline ::System::Type* System::Runtime::Serialization::SerializationFieldInfo::get_FieldType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Serialization::SerializationFieldInfo::GetValue(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj);
}
inline ::System::Object* System::Runtime::Serialization::SerializationFieldInfo::InternalGetValue(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(), { "InternalGetValue", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj);
}
inline void System::Runtime::Serialization::SerializationFieldInfo::SetValue(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr,
                                                                             ::System::Reflection::Binder* binder, ::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, value, invokeAttr, binder, culture);
}
inline void System::Runtime::Serialization::SerializationFieldInfo::InternalSetValue(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr,
                                                                                     ::System::Reflection::Binder* binder, ::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(),
                                                           { "InternalSetValue",
                                                             {},
                                                             { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Reflection::BindingFlags>(),
                                                               ::i2c::type_of<::System::Reflection::Binder*>(), ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, value, invokeAttr, binder, culture);
}
inline ::System::Reflection::RuntimeFieldInfo* System::Runtime::Serialization::SerializationFieldInfo::get_FieldInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(), { "get_FieldInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeFieldInfo*>(this, ___internal_method);
}
inline ::System::RuntimeFieldHandle System::Runtime::Serialization::SerializationFieldInfo::get_FieldHandle() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeFieldHandle>(this, ___internal_method);
}
inline ::System::Reflection::FieldAttributes System::Runtime::Serialization::SerializationFieldInfo::get_Attributes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::SerializationFieldInfo*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldAttributes>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::SerializationFieldInfo* System::Runtime::Serialization::SerializationFieldInfo::New_ctor(::System::Reflection::RuntimeFieldInfo* field, ::StringW namePrefix) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::SerializationFieldInfo*>(field, namePrefix));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::SerializationFieldInfo::SerializationFieldInfo() {}
