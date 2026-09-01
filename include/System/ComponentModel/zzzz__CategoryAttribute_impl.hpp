#pragma once
// IWYU pragma private; include "System\ComponentModel\CategoryAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__CategoryAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::CategoryAttribute.get_Default
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::CategoryAttribute* (*)()>(&::System::ComponentModel::CategoryAttribute::get_Default)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x63ca4cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::CategoryAttribute*>(), { "get_Default", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CategoryAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::CategoryAttribute::*)()>(&::System::ComponentModel::CategoryAttribute::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x63ca58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::CategoryAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CategoryAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::CategoryAttribute::*)(::StringW)>(&::System::ComponentModel::CategoryAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x63ca5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::CategoryAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CategoryAttribute.get_Category
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::CategoryAttribute::*)()>(&::System::ComponentModel::CategoryAttribute::get_Category)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x63ca5e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::CategoryAttribute*>(), { "get_Category", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CategoryAttribute.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::CategoryAttribute::*)(::System::Object*)>(&::System::ComponentModel::CategoryAttribute::Equals)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x63ca628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::CategoryAttribute*>(), { ::i2c::class_of<::System::ComponentModel::CategoryAttribute*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CategoryAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::CategoryAttribute::*)()>(&::System::ComponentModel::CategoryAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x63ca76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::CategoryAttribute*>(), { ::i2c::class_of<::System::ComponentModel::CategoryAttribute*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CategoryAttribute.GetLocalizedString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::CategoryAttribute::*)(::StringW)>(&::System::ComponentModel::CategoryAttribute::GetLocalizedString)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x63ca7bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::CategoryAttribute*>(), { ::i2c::class_of<::System::ComponentModel::CategoryAttribute*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CategoryAttribute.IsDefaultAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::CategoryAttribute::*)()>(&::System::ComponentModel::CategoryAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x63cabc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::CategoryAttribute*>(), { ::i2c::class_of<::System::ComponentModel::CategoryAttribute*>(), 6 }));
    return ___internal_method;
  }
};
constexpr bool& System::ComponentModel::CategoryAttribute::__cordl_internal_get_localized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localized;
}
constexpr bool const& System::ComponentModel::CategoryAttribute::__cordl_internal_get_localized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localized;
}
constexpr void System::ComponentModel::CategoryAttribute::__cordl_internal_set_localized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localized = value;
}
constexpr ::StringW& System::ComponentModel::CategoryAttribute::__cordl_internal_get_categoryValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___categoryValue;
}
constexpr ::StringW const& System::ComponentModel::CategoryAttribute::__cordl_internal_get_categoryValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___categoryValue;
}
constexpr void System::ComponentModel::CategoryAttribute::__cordl_internal_set_categoryValue(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___categoryValue = value;
}
inline void System::ComponentModel::CategoryAttribute::setStaticF_defAttr(::System::ComponentModel::CategoryAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::CategoryAttribute*, "defAttr", ::System::ComponentModel::CategoryAttribute*>(
      std::forward<::System::ComponentModel::CategoryAttribute*>(value));
}
inline ::System::ComponentModel::CategoryAttribute* System::ComponentModel::CategoryAttribute::getStaticF_defAttr() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::CategoryAttribute*, "defAttr", ::System::ComponentModel::CategoryAttribute*>();
}
inline ::System::ComponentModel::CategoryAttribute* System::ComponentModel::CategoryAttribute::get_Default() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::CategoryAttribute*>(), { "get_Default", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::CategoryAttribute*>(nullptr, ___internal_method);
}
inline void System::ComponentModel::CategoryAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::CategoryAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::CategoryAttribute::_ctor(::StringW category) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::CategoryAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, category);
}
inline ::StringW System::ComponentModel::CategoryAttribute::get_Category() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::CategoryAttribute*>(), { "get_Category", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::ComponentModel::CategoryAttribute::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::CategoryAttribute*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::CategoryAttribute::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::CategoryAttribute*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::CategoryAttribute::GetLocalizedString(::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::CategoryAttribute*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline bool System::ComponentModel::CategoryAttribute::IsDefaultAttribute() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::CategoryAttribute*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ComponentModel::CategoryAttribute* System::ComponentModel::CategoryAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::CategoryAttribute*>());
}
inline ::System::ComponentModel::CategoryAttribute* System::ComponentModel::CategoryAttribute::New_ctor(::StringW category) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::CategoryAttribute*>(category));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::CategoryAttribute::CategoryAttribute() {}
