#pragma once
// IWYU pragma private; include "System/ComponentModel/CustomTypeDescriptor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__CustomTypeDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__AttributeCollection_def.hpp"
#include "System/ComponentModel/zzzz__EventDescriptorCollection_def.hpp"
#include "System/ComponentModel/zzzz__EventDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__ICustomTypeDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptorCollection_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::CustomTypeDescriptor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::CustomTypeDescriptor::*)()>(&::System::ComponentModel::CustomTypeDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63b8b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CustomTypeDescriptor.GetAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::AttributeCollection* (::System::ComponentModel::CustomTypeDescriptor::*)()>(
    &::System::ComponentModel::CustomTypeDescriptor::GetAttributes)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x63b8b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CustomTypeDescriptor.GetClassName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::CustomTypeDescriptor::*)()>(&::System::ComponentModel::CustomTypeDescriptor::GetClassName)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x63b8be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CustomTypeDescriptor.GetComponentName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::CustomTypeDescriptor::*)()>(&::System::ComponentModel::CustomTypeDescriptor::GetComponentName)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x63b8c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CustomTypeDescriptor.GetConverter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeConverter* (::System::ComponentModel::CustomTypeDescriptor::*)()>(
    &::System::ComponentModel::CustomTypeDescriptor::GetConverter)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x63b8d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CustomTypeDescriptor.GetDefaultEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptor* (::System::ComponentModel::CustomTypeDescriptor::*)()>(
    &::System::ComponentModel::CustomTypeDescriptor::GetDefaultEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x63b8e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CustomTypeDescriptor.GetDefaultProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptor* (::System::ComponentModel::CustomTypeDescriptor::*)()>(
    &::System::ComponentModel::CustomTypeDescriptor::GetDefaultProperty)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x63b8ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CustomTypeDescriptor.GetEditor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::CustomTypeDescriptor::*)(::System::Type*)>(
    &::System::ComponentModel::CustomTypeDescriptor::GetEditor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x63b8f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CustomTypeDescriptor.GetEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptorCollection* (::System::ComponentModel::CustomTypeDescriptor::*)()>(
    &::System::ComponentModel::CustomTypeDescriptor::GetEvents)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x63b9048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CustomTypeDescriptor.GetEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptorCollection* (::System::ComponentModel::CustomTypeDescriptor::*)(::ArrayW<::System::Attribute*>)>(
    &::System::ComponentModel::CustomTypeDescriptor::GetEvents)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x63b912c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CustomTypeDescriptor.GetProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::System::ComponentModel::CustomTypeDescriptor::*)()>(
    &::System::ComponentModel::CustomTypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x63b9224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CustomTypeDescriptor.GetProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::System::ComponentModel::CustomTypeDescriptor::*)(::ArrayW<::System::Attribute*>)>(
    &::System::ComponentModel::CustomTypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x63b9308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CustomTypeDescriptor.GetPropertyOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::CustomTypeDescriptor::*)(::System::ComponentModel::PropertyDescriptor*)>(
    &::System::ComponentModel::CustomTypeDescriptor::GetPropertyOwner)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x63b9400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), { ::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), 27 }));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::ICustomTypeDescriptor*& System::ComponentModel::CustomTypeDescriptor::__cordl_internal_get__parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent;
}
constexpr ::System::ComponentModel::ICustomTypeDescriptor* const& System::ComponentModel::CustomTypeDescriptor::__cordl_internal_get__parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent;
}
constexpr void System::ComponentModel::CustomTypeDescriptor::__cordl_internal_set__parent(::System::ComponentModel::ICustomTypeDescriptor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parent = value;
}
inline void System::ComponentModel::CustomTypeDescriptor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::CustomTypeDescriptor::GetAttributes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::CustomTypeDescriptor::GetClassName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::CustomTypeDescriptor::GetComponentName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::ComponentModel::TypeConverter* System::ComponentModel::CustomTypeDescriptor::GetConverter() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::CustomTypeDescriptor::GetDefaultEvent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::CustomTypeDescriptor::GetDefaultProperty() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::CustomTypeDescriptor::GetEditor(::System::Type* editorBaseType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, editorBaseType);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::CustomTypeDescriptor::GetEvents() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::CustomTypeDescriptor::GetEvents(::ArrayW<::System::Attribute*> attributes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*>(this, ___internal_method, attributes);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::CustomTypeDescriptor::GetProperties() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::CustomTypeDescriptor::GetProperties(::ArrayW<::System::Attribute*> attributes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(this, ___internal_method, attributes);
}
inline ::System::Object* System::ComponentModel::CustomTypeDescriptor::GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::CustomTypeDescriptor*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, pd);
}
inline ::System::ComponentModel::CustomTypeDescriptor* System::ComponentModel::CustomTypeDescriptor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::CustomTypeDescriptor*>());
}
/// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr System::ComponentModel::CustomTypeDescriptor::operator ::System::ComponentModel::ICustomTypeDescriptor*() noexcept {
  return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::CustomTypeDescriptor::i___System__ComponentModel__ICustomTypeDescriptor() noexcept {
  return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::CustomTypeDescriptor::CustomTypeDescriptor() {}
