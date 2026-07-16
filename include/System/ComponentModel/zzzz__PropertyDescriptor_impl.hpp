#pragma once
// IWYU pragma private; include "System/ComponentModel/PropertyDescriptor.hpp"
#include "System/ComponentModel/zzzz__MemberDescriptor_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/ComponentModel/zzzz__MemberDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::PropertyDescriptor::*)(::StringW, ::ArrayW<::System::Attribute*>)>(
    &::System::ComponentModel::PropertyDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63be7d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::PropertyDescriptor::*)(::System::ComponentModel::MemberDescriptor*, ::ArrayW<::System::Attribute*>)>(
    &::System::ComponentModel::PropertyDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63bc400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::ComponentModel::MemberDescriptor*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.get_ComponentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::PropertyDescriptor::*)()>(&::System::ComponentModel::PropertyDescriptor::get_ComponentType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.get_Converter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeConverter* (::System::ComponentModel::PropertyDescriptor::*)()>(
    &::System::ComponentModel::PropertyDescriptor::get_Converter)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x63be7e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::PropertyDescriptor::*)()>(&::System::ComponentModel::PropertyDescriptor::get_IsReadOnly)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.get_PropertyType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::PropertyDescriptor::*)()>(&::System::ComponentModel::PropertyDescriptor::get_PropertyType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.CanResetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::PropertyDescriptor::*)(::System::Object*)>(&::System::ComponentModel::PropertyDescriptor::CanResetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::PropertyDescriptor::*)(::System::Object*)>(&::System::ComponentModel::PropertyDescriptor::Equals)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x63bee00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::PropertyDescriptor::*)(::System::Type*)>(
    &::System::ComponentModel::PropertyDescriptor::CreateInstance)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x63bec0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.FillAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::PropertyDescriptor::*)(::System::Collections::IList*)>(
    &::System::ComponentModel::PropertyDescriptor::FillAttributes)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x63befd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::PropertyDescriptor::*)()>(&::System::ComponentModel::PropertyDescriptor::GetHashCode)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x63befe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.GetInvocationTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::PropertyDescriptor::*)(::System::Type*, ::System::Object*)>(
    &::System::ComponentModel::PropertyDescriptor::GetInvocationTarget)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x63bf038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.GetTypeFromName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::PropertyDescriptor::*)(::StringW)>(&::System::ComponentModel::PropertyDescriptor::GetTypeFromName)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x63bea34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), { "GetTypeFromName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::PropertyDescriptor::*)(::System::Object*)>(
    &::System::ComponentModel::PropertyDescriptor::GetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.OnValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::PropertyDescriptor::*)(::System::Object*, ::System::EventArgs*)>(
    &::System::ComponentModel::PropertyDescriptor::OnValueChanged)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x63bf124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.ResetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::PropertyDescriptor::*)(::System::Object*)>(&::System::ComponentModel::PropertyDescriptor::ResetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::PropertyDescriptor::*)(::System::Object*, ::System::Object*)>(
    &::System::ComponentModel::PropertyDescriptor::SetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.ShouldSerializeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::PropertyDescriptor::*)(::System::Object*)>(
    &::System::ComponentModel::PropertyDescriptor::ShouldSerializeValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 22 }));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::TypeConverter*& System::ComponentModel::PropertyDescriptor::__cordl_internal_get__converter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____converter;
}
constexpr ::System::ComponentModel::TypeConverter* const& System::ComponentModel::PropertyDescriptor::__cordl_internal_get__converter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____converter;
}
constexpr void System::ComponentModel::PropertyDescriptor::__cordl_internal_set__converter(::System::ComponentModel::TypeConverter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____converter = value;
}
constexpr ::System::Collections::Hashtable*& System::ComponentModel::PropertyDescriptor::__cordl_internal_get__valueChangedHandlers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueChangedHandlers;
}
constexpr ::System::Collections::Hashtable* const& System::ComponentModel::PropertyDescriptor::__cordl_internal_get__valueChangedHandlers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueChangedHandlers;
}
constexpr void System::ComponentModel::PropertyDescriptor::__cordl_internal_set__valueChangedHandlers(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____valueChangedHandlers = value;
}
constexpr ::ArrayW<::System::Object*>& System::ComponentModel::PropertyDescriptor::__cordl_internal_get__editors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editors;
}
constexpr ::ArrayW<::System::Object*> const& System::ComponentModel::PropertyDescriptor::__cordl_internal_get__editors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editors;
}
constexpr void System::ComponentModel::PropertyDescriptor::__cordl_internal_set__editors(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____editors = value;
}
constexpr ::ArrayW<::System::Type*>& System::ComponentModel::PropertyDescriptor::__cordl_internal_get__editorTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editorTypes;
}
constexpr ::ArrayW<::System::Type*> const& System::ComponentModel::PropertyDescriptor::__cordl_internal_get__editorTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editorTypes;
}
constexpr void System::ComponentModel::PropertyDescriptor::__cordl_internal_set__editorTypes(::ArrayW<::System::Type*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____editorTypes = value;
}
constexpr int32_t& System::ComponentModel::PropertyDescriptor::__cordl_internal_get__editorCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editorCount;
}
constexpr int32_t const& System::ComponentModel::PropertyDescriptor::__cordl_internal_get__editorCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editorCount;
}
constexpr void System::ComponentModel::PropertyDescriptor::__cordl_internal_set__editorCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____editorCount = value;
}
inline void System::ComponentModel::PropertyDescriptor::_ctor(::StringW name, ::ArrayW<::System::Attribute*> attrs) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, attrs);
}
inline void System::ComponentModel::PropertyDescriptor::_ctor(::System::ComponentModel::MemberDescriptor* descr, ::ArrayW<::System::Attribute*> attrs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::ComponentModel::MemberDescriptor*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, descr, attrs);
}
inline ::System::Type* System::ComponentModel::PropertyDescriptor::get_ComponentType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::ComponentModel::TypeConverter* System::ComponentModel::PropertyDescriptor::get_Converter() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*>(this, ___internal_method);
}
inline bool System::ComponentModel::PropertyDescriptor::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* System::ComponentModel::PropertyDescriptor::get_PropertyType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool System::ComponentModel::PropertyDescriptor::CanResetValue(::System::Object* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
inline bool System::ComponentModel::PropertyDescriptor::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline ::System::Object* System::ComponentModel::PropertyDescriptor::CreateInstance(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, type);
}
inline void System::ComponentModel::PropertyDescriptor::FillAttributes(::System::Collections::IList* attributeList) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributeList);
}
inline int32_t System::ComponentModel::PropertyDescriptor::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::PropertyDescriptor::GetInvocationTarget(::System::Type* type, ::System::Object* instance) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, type, instance);
}
inline ::System::Type* System::ComponentModel::PropertyDescriptor::GetTypeFromName(::StringW typeName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), { "GetTypeFromName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, typeName);
}
inline ::System::Object* System::ComponentModel::PropertyDescriptor::GetValue(::System::Object* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, component);
}
inline void System::ComponentModel::PropertyDescriptor::OnValueChanged(::System::Object* component, ::System::EventArgs* e) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, e);
}
inline void System::ComponentModel::PropertyDescriptor::ResetValue(::System::Object* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
inline void System::ComponentModel::PropertyDescriptor::SetValue(::System::Object* component, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, value);
}
inline bool System::ComponentModel::PropertyDescriptor::ShouldSerializeValue(::System::Object* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::PropertyDescriptor::New_ctor(::StringW name, ::ArrayW<::System::Attribute*> attrs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::PropertyDescriptor*>(name, attrs));
}
inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::PropertyDescriptor::New_ctor(::System::ComponentModel::MemberDescriptor* descr, ::ArrayW<::System::Attribute*> attrs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::PropertyDescriptor*>(descr, attrs));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::PropertyDescriptor::PropertyDescriptor() {}
