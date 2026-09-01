#pragma once
// IWYU pragma private; include "System\Data\DataTablePropertyDescriptor.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_impl.hpp"
#include "System/Data/zzzz__DataTablePropertyDescriptor_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::DataTablePropertyDescriptor.get_Table
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::DataTablePropertyDescriptor::*)()>(&::System::Data::DataTablePropertyDescriptor::get_Table)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60311b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTablePropertyDescriptor*>(), { "get_Table", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTablePropertyDescriptor.get_ComponentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Data::DataTablePropertyDescriptor::*)()>(&::System::Data::DataTablePropertyDescriptor::get_ComponentType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x60311b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTablePropertyDescriptor*>(), { ::i2c::class_of<::System::Data::DataTablePropertyDescriptor*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTablePropertyDescriptor.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTablePropertyDescriptor::*)()>(&::System::Data::DataTablePropertyDescriptor::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6031218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTablePropertyDescriptor*>(), { ::i2c::class_of<::System::Data::DataTablePropertyDescriptor*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTablePropertyDescriptor.get_PropertyType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Data::DataTablePropertyDescriptor::*)()>(&::System::Data::DataTablePropertyDescriptor::get_PropertyType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6031220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTablePropertyDescriptor*>(), { ::i2c::class_of<::System::Data::DataTablePropertyDescriptor*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTablePropertyDescriptor.CanResetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTablePropertyDescriptor::*)(::System::Object*)>(&::System::Data::DataTablePropertyDescriptor::CanResetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6031280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTablePropertyDescriptor*>(), { ::i2c::class_of<::System::Data::DataTablePropertyDescriptor*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTablePropertyDescriptor.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::DataTablePropertyDescriptor::*)(::System::Object*)>(&::System::Data::DataTablePropertyDescriptor::GetValue)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6031288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTablePropertyDescriptor*>(), { ::i2c::class_of<::System::Data::DataTablePropertyDescriptor*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTablePropertyDescriptor.ResetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTablePropertyDescriptor::*)(::System::Object*)>(&::System::Data::DataTablePropertyDescriptor::ResetValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x603137c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTablePropertyDescriptor*>(), { ::i2c::class_of<::System::Data::DataTablePropertyDescriptor*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTablePropertyDescriptor.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataTablePropertyDescriptor::*)(::System::Object*, ::System::Object*)>(
    &::System::Data::DataTablePropertyDescriptor::SetValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6031380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTablePropertyDescriptor*>(), { ::i2c::class_of<::System::Data::DataTablePropertyDescriptor*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataTablePropertyDescriptor.ShouldSerializeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataTablePropertyDescriptor::*)(::System::Object*)>(&::System::Data::DataTablePropertyDescriptor::ShouldSerializeValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6031384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataTablePropertyDescriptor*>(), { ::i2c::class_of<::System::Data::DataTablePropertyDescriptor*>(), 22 }));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataTable*& System::Data::DataTablePropertyDescriptor::__cordl_internal_get__Table_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Table_k__BackingField;
}
constexpr ::System::Data::DataTable* const& System::Data::DataTablePropertyDescriptor::__cordl_internal_get__Table_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Table_k__BackingField;
}
constexpr void System::Data::DataTablePropertyDescriptor::__cordl_internal_set__Table_k__BackingField(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Table_k__BackingField = value;
}
inline ::System::Data::DataTable* System::Data::DataTablePropertyDescriptor::get_Table() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataTablePropertyDescriptor*>(), { "get_Table", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method);
}
inline ::System::Type* System::Data::DataTablePropertyDescriptor::get_ComponentType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTablePropertyDescriptor*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool System::Data::DataTablePropertyDescriptor::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTablePropertyDescriptor*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* System::Data::DataTablePropertyDescriptor::get_PropertyType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTablePropertyDescriptor*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool System::Data::DataTablePropertyDescriptor::CanResetValue(::System::Object* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTablePropertyDescriptor*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
inline ::System::Object* System::Data::DataTablePropertyDescriptor::GetValue(::System::Object* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTablePropertyDescriptor*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, component);
}
inline void System::Data::DataTablePropertyDescriptor::ResetValue(::System::Object* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTablePropertyDescriptor*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
inline void System::Data::DataTablePropertyDescriptor::SetValue(::System::Object* component, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTablePropertyDescriptor*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, value);
}
inline bool System::Data::DataTablePropertyDescriptor::ShouldSerializeValue(::System::Object* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataTablePropertyDescriptor*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
// Ctor Parameters []
constexpr ::System::Data::DataTablePropertyDescriptor::DataTablePropertyDescriptor() {}
