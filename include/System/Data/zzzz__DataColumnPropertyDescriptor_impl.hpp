#pragma once
// IWYU pragma private; include "System\Data\DataColumnPropertyDescriptor.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_impl.hpp"
#include "System/Data/zzzz__DataColumnPropertyDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__AttributeCollection_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::DataColumnPropertyDescriptor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumnPropertyDescriptor::*)(::System::Data::DataColumn*)>(&::System::Data::DataColumnPropertyDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6023008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnPropertyDescriptor.get_Attributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::AttributeCollection* (::System::Data::DataColumnPropertyDescriptor::*)()>(
    &::System::Data::DataColumnPropertyDescriptor::get_Attributes)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6023040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), { ::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnPropertyDescriptor.get_Column
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataColumn* (::System::Data::DataColumnPropertyDescriptor::*)()>(&::System::Data::DataColumnPropertyDescriptor::get_Column)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60231f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), { "get_Column", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnPropertyDescriptor.get_ComponentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Data::DataColumnPropertyDescriptor::*)()>(&::System::Data::DataColumnPropertyDescriptor::get_ComponentType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x60231fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), { ::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnPropertyDescriptor.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataColumnPropertyDescriptor::*)()>(&::System::Data::DataColumnPropertyDescriptor::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x602325c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), { ::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnPropertyDescriptor.get_PropertyType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Data::DataColumnPropertyDescriptor::*)()>(&::System::Data::DataColumnPropertyDescriptor::get_PropertyType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6023274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), { ::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnPropertyDescriptor.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataColumnPropertyDescriptor::*)(::System::Object*)>(&::System::Data::DataColumnPropertyDescriptor::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x602328c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), { ::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnPropertyDescriptor.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataColumnPropertyDescriptor::*)()>(&::System::Data::DataColumnPropertyDescriptor::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6023308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), { ::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnPropertyDescriptor.CanResetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataColumnPropertyDescriptor::*)(::System::Object*)>(&::System::Data::DataColumnPropertyDescriptor::CanResetValue)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6023324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), { ::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnPropertyDescriptor.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::DataColumnPropertyDescriptor::*)(::System::Object*)>(
    &::System::Data::DataColumnPropertyDescriptor::GetValue)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6023498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), { ::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnPropertyDescriptor.ResetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumnPropertyDescriptor::*)(::System::Object*)>(&::System::Data::DataColumnPropertyDescriptor::ResetValue)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x602352c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), { ::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnPropertyDescriptor.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataColumnPropertyDescriptor::*)(::System::Object*, ::System::Object*)>(
    &::System::Data::DataColumnPropertyDescriptor::SetValue)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6023684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), { ::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnPropertyDescriptor.ShouldSerializeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataColumnPropertyDescriptor::*)(::System::Object*)>(
    &::System::Data::DataColumnPropertyDescriptor::ShouldSerializeValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602376c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), { ::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), 22 }));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataColumn*& System::Data::DataColumnPropertyDescriptor::__cordl_internal_get__Column_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Column_k__BackingField;
}
constexpr ::System::Data::DataColumn* const& System::Data::DataColumnPropertyDescriptor::__cordl_internal_get__Column_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Column_k__BackingField;
}
constexpr void System::Data::DataColumnPropertyDescriptor::__cordl_internal_set__Column_k__BackingField(::System::Data::DataColumn* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Column_k__BackingField = value;
}
inline void System::Data::DataColumnPropertyDescriptor::_ctor(::System::Data::DataColumn* dataColumn) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataColumn*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataColumn);
}
inline ::System::ComponentModel::AttributeCollection* System::Data::DataColumnPropertyDescriptor::get_Attributes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*>(this, ___internal_method);
}
inline ::System::Data::DataColumn* System::Data::DataColumnPropertyDescriptor::get_Column() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), { "get_Column", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataColumn*>(this, ___internal_method);
}
inline ::System::Type* System::Data::DataColumnPropertyDescriptor::get_ComponentType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool System::Data::DataColumnPropertyDescriptor::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* System::Data::DataColumnPropertyDescriptor::get_PropertyType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool System::Data::DataColumnPropertyDescriptor::Equals(::System::Object* other) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline int32_t System::Data::DataColumnPropertyDescriptor::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Data::DataColumnPropertyDescriptor::CanResetValue(::System::Object* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
inline ::System::Object* System::Data::DataColumnPropertyDescriptor::GetValue(::System::Object* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, component);
}
inline void System::Data::DataColumnPropertyDescriptor::ResetValue(::System::Object* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
inline void System::Data::DataColumnPropertyDescriptor::SetValue(::System::Object* component, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, value);
}
inline bool System::Data::DataColumnPropertyDescriptor::ShouldSerializeValue(::System::Object* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::DataColumnPropertyDescriptor*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
inline ::System::Data::DataColumnPropertyDescriptor* System::Data::DataColumnPropertyDescriptor::New_ctor(::System::Data::DataColumn* dataColumn) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataColumnPropertyDescriptor*>(dataColumn));
}
// Ctor Parameters []
constexpr ::System::Data::DataColumnPropertyDescriptor::DataColumnPropertyDescriptor() {}
