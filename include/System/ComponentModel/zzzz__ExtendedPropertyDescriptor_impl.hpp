#pragma once
// IWYU pragma private; include "System\ComponentModel\ExtendedPropertyDescriptor.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_impl.hpp"
#include "System/ComponentModel/zzzz__ExtendedPropertyDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__IExtenderProvider_def.hpp"
#include "System/ComponentModel/zzzz__ReflectPropertyDescriptor_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ExtendedPropertyDescriptor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ExtendedPropertyDescriptor::*)(::System::ComponentModel::ReflectPropertyDescriptor*, ::System::Type*,
                                                                                                                      ::System::ComponentModel::IExtenderProvider*, ::ArrayW<::System::Attribute*>)>(
    &::System::ComponentModel::ExtendedPropertyDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x63c19ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExtendedPropertyDescriptor*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), ::i2c::type_of<::System::Type*>(),
                                                                 ::i2c::type_of<::System::ComponentModel::IExtenderProvider*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ExtendedPropertyDescriptor.CanResetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ExtendedPropertyDescriptor::*)(::System::Object*)>(
    &::System::ComponentModel::ExtendedPropertyDescriptor::CanResetValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x63c1c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExtendedPropertyDescriptor*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ExtendedPropertyDescriptor*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ExtendedPropertyDescriptor.get_ComponentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::ExtendedPropertyDescriptor::*)()>(
    &::System::ComponentModel::ExtendedPropertyDescriptor::get_ComponentType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63c1cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExtendedPropertyDescriptor*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ExtendedPropertyDescriptor*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ExtendedPropertyDescriptor.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ExtendedPropertyDescriptor::*)()>(&::System::ComponentModel::ExtendedPropertyDescriptor::get_IsReadOnly)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x63c1cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExtendedPropertyDescriptor*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ExtendedPropertyDescriptor*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ExtendedPropertyDescriptor.get_PropertyType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::ExtendedPropertyDescriptor::*)()>(
    &::System::ComponentModel::ExtendedPropertyDescriptor::get_PropertyType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63c1db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExtendedPropertyDescriptor*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ExtendedPropertyDescriptor*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ExtendedPropertyDescriptor.get_DisplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::ExtendedPropertyDescriptor::*)()>(&::System::ComponentModel::ExtendedPropertyDescriptor::get_DisplayName)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x63c1dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExtendedPropertyDescriptor*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ExtendedPropertyDescriptor*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ExtendedPropertyDescriptor.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::ExtendedPropertyDescriptor::*)(::System::Object*)>(
    &::System::ComponentModel::ExtendedPropertyDescriptor::GetValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x63c1fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExtendedPropertyDescriptor*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ExtendedPropertyDescriptor*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ExtendedPropertyDescriptor.ResetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ExtendedPropertyDescriptor::*)(::System::Object*)>(
    &::System::ComponentModel::ExtendedPropertyDescriptor::ResetValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x63c1ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExtendedPropertyDescriptor*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ExtendedPropertyDescriptor*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ExtendedPropertyDescriptor.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ExtendedPropertyDescriptor::*)(::System::Object*, ::System::Object*)>(
    &::System::ComponentModel::ExtendedPropertyDescriptor::SetValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x63c2020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExtendedPropertyDescriptor*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ExtendedPropertyDescriptor*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ExtendedPropertyDescriptor.ShouldSerializeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ExtendedPropertyDescriptor::*)(::System::Object*)>(
    &::System::ComponentModel::ExtendedPropertyDescriptor::ShouldSerializeValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x63c204c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExtendedPropertyDescriptor*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::ExtendedPropertyDescriptor*>(), 22 }));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::ReflectPropertyDescriptor*& System::ComponentModel::ExtendedPropertyDescriptor::__cordl_internal_get__extenderInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extenderInfo;
}
constexpr ::System::ComponentModel::ReflectPropertyDescriptor* const& System::ComponentModel::ExtendedPropertyDescriptor::__cordl_internal_get__extenderInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extenderInfo;
}
constexpr void System::ComponentModel::ExtendedPropertyDescriptor::__cordl_internal_set__extenderInfo(::System::ComponentModel::ReflectPropertyDescriptor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____extenderInfo = value;
}
constexpr ::System::ComponentModel::IExtenderProvider*& System::ComponentModel::ExtendedPropertyDescriptor::__cordl_internal_get__provider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____provider;
}
constexpr ::System::ComponentModel::IExtenderProvider* const& System::ComponentModel::ExtendedPropertyDescriptor::__cordl_internal_get__provider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____provider;
}
constexpr void System::ComponentModel::ExtendedPropertyDescriptor::__cordl_internal_set__provider(::System::ComponentModel::IExtenderProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____provider = value;
}
inline void System::ComponentModel::ExtendedPropertyDescriptor::_ctor(::System::ComponentModel::ReflectPropertyDescriptor* extenderInfo, ::System::Type* receiverType,
                                                                      ::System::ComponentModel::IExtenderProvider* provider, ::ArrayW<::System::Attribute*> attributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ExtendedPropertyDescriptor*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::ComponentModel::ReflectPropertyDescriptor*>(), ::i2c::type_of<::System::Type*>(),
                                                               ::i2c::type_of<::System::ComponentModel::IExtenderProvider*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, extenderInfo, receiverType, provider, attributes);
}
inline bool System::ComponentModel::ExtendedPropertyDescriptor::CanResetValue(::System::Object* comp) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ExtendedPropertyDescriptor*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, comp);
}
inline ::System::Type* System::ComponentModel::ExtendedPropertyDescriptor::get_ComponentType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ExtendedPropertyDescriptor*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool System::ComponentModel::ExtendedPropertyDescriptor::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ExtendedPropertyDescriptor*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* System::ComponentModel::ExtendedPropertyDescriptor::get_PropertyType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ExtendedPropertyDescriptor*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::ExtendedPropertyDescriptor::get_DisplayName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ExtendedPropertyDescriptor*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::ExtendedPropertyDescriptor::GetValue(::System::Object* comp) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ExtendedPropertyDescriptor*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, comp);
}
inline void System::ComponentModel::ExtendedPropertyDescriptor::ResetValue(::System::Object* comp) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ExtendedPropertyDescriptor*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comp);
}
inline void System::ComponentModel::ExtendedPropertyDescriptor::SetValue(::System::Object* component, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ExtendedPropertyDescriptor*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, value);
}
inline bool System::ComponentModel::ExtendedPropertyDescriptor::ShouldSerializeValue(::System::Object* comp) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ExtendedPropertyDescriptor*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, comp);
}
inline ::System::ComponentModel::ExtendedPropertyDescriptor* System::ComponentModel::ExtendedPropertyDescriptor::New_ctor(::System::ComponentModel::ReflectPropertyDescriptor* extenderInfo,
                                                                                                                          ::System::Type* receiverType,
                                                                                                                          ::System::ComponentModel::IExtenderProvider* provider,
                                                                                                                          ::ArrayW<::System::Attribute*> attributes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ExtendedPropertyDescriptor*>(extenderInfo, receiverType, provider, attributes));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ExtendedPropertyDescriptor::ExtendedPropertyDescriptor() {}
