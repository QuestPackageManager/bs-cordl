#pragma once
// IWYU pragma private; include "System/ComponentModel/DescriptionAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__DescriptionAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::DescriptionAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::DescriptionAttribute::*)()>(&::System::ComponentModel::DescriptionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x63ae8d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DescriptionAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DescriptionAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::DescriptionAttribute::*)(::StringW)>(&::System::ComponentModel::DescriptionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63ae8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DescriptionAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DescriptionAttribute.get_Description
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::DescriptionAttribute::*)()>(&::System::ComponentModel::DescriptionAttribute::get_Description)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63ae8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DescriptionAttribute*>(), { ::i2c::class_of<::System::ComponentModel::DescriptionAttribute*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DescriptionAttribute.get_DescriptionValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::DescriptionAttribute::*)()>(&::System::ComponentModel::DescriptionAttribute::get_DescriptionValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63ae8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DescriptionAttribute*>(), { "get_DescriptionValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DescriptionAttribute.set_DescriptionValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::DescriptionAttribute::*)(::StringW)>(&::System::ComponentModel::DescriptionAttribute::set_DescriptionValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63ae900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DescriptionAttribute*>(), { "set_DescriptionValue", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DescriptionAttribute.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::DescriptionAttribute::*)(::System::Object*)>(&::System::ComponentModel::DescriptionAttribute::Equals)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x63ae908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DescriptionAttribute*>(), { ::i2c::class_of<::System::ComponentModel::DescriptionAttribute*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DescriptionAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::DescriptionAttribute::*)()>(&::System::ComponentModel::DescriptionAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x63ae9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DescriptionAttribute*>(), { ::i2c::class_of<::System::ComponentModel::DescriptionAttribute*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DescriptionAttribute.IsDefaultAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::DescriptionAttribute::*)()>(&::System::ComponentModel::DescriptionAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x63ae9fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DescriptionAttribute*>(), { ::i2c::class_of<::System::ComponentModel::DescriptionAttribute*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ComponentModel::DescriptionAttribute::__cordl_internal_get__DescriptionValue_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DescriptionValue_k__BackingField;
}
constexpr ::StringW const& System::ComponentModel::DescriptionAttribute::__cordl_internal_get__DescriptionValue_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DescriptionValue_k__BackingField;
}
constexpr void System::ComponentModel::DescriptionAttribute::__cordl_internal_set__DescriptionValue_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DescriptionValue_k__BackingField = value;
}
inline void System::ComponentModel::DescriptionAttribute::setStaticF_Default(::System::ComponentModel::DescriptionAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::DescriptionAttribute*, "Default", ::System::ComponentModel::DescriptionAttribute*>(
      std::forward<::System::ComponentModel::DescriptionAttribute*>(value));
}
inline ::System::ComponentModel::DescriptionAttribute* System::ComponentModel::DescriptionAttribute::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::DescriptionAttribute*, "Default", ::System::ComponentModel::DescriptionAttribute*>();
}
inline void System::ComponentModel::DescriptionAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DescriptionAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::DescriptionAttribute::_ctor(::StringW description) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DescriptionAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, description);
}
inline ::StringW System::ComponentModel::DescriptionAttribute::get_Description() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DescriptionAttribute*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::DescriptionAttribute::get_DescriptionValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DescriptionAttribute*>(), { "get_DescriptionValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::ComponentModel::DescriptionAttribute::set_DescriptionValue(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DescriptionAttribute*>(), { "set_DescriptionValue", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::ComponentModel::DescriptionAttribute::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DescriptionAttribute*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::DescriptionAttribute::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DescriptionAttribute*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::ComponentModel::DescriptionAttribute::IsDefaultAttribute() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DescriptionAttribute*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ComponentModel::DescriptionAttribute* System::ComponentModel::DescriptionAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::DescriptionAttribute*>());
}
inline ::System::ComponentModel::DescriptionAttribute* System::ComponentModel::DescriptionAttribute::New_ctor(::StringW description) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::DescriptionAttribute*>(description));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::DescriptionAttribute::DescriptionAttribute() {}
