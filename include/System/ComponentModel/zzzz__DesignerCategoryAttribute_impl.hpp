#pragma once
// IWYU pragma private; include "System\ComponentModel\DesignerCategoryAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__DesignerCategoryAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::DesignerCategoryAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::DesignerCategoryAttribute::*)()>(&::System::ComponentModel::DesignerCategoryAttribute::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x63b4500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignerCategoryAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DesignerCategoryAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::DesignerCategoryAttribute::*)(::StringW)>(&::System::ComponentModel::DesignerCategoryAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63b4518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignerCategoryAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DesignerCategoryAttribute.get_Category
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::DesignerCategoryAttribute::*)()>(&::System::ComponentModel::DesignerCategoryAttribute::get_Category)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63b4520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignerCategoryAttribute*>(), { "get_Category", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DesignerCategoryAttribute.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::DesignerCategoryAttribute::*)(::System::Object*)>(
    &::System::ComponentModel::DesignerCategoryAttribute::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x63b4528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignerCategoryAttribute*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::DesignerCategoryAttribute*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DesignerCategoryAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::DesignerCategoryAttribute::*)()>(&::System::ComponentModel::DesignerCategoryAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x63b45b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignerCategoryAttribute*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::DesignerCategoryAttribute*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DesignerCategoryAttribute.IsDefaultAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::DesignerCategoryAttribute::*)()>(&::System::ComponentModel::DesignerCategoryAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x63b45d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignerCategoryAttribute*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::DesignerCategoryAttribute*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DesignerCategoryAttribute.get_TypeId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::DesignerCategoryAttribute::*)()>(
    &::System::ComponentModel::DesignerCategoryAttribute::get_TypeId)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x63b4650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignerCategoryAttribute*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::DesignerCategoryAttribute*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ComponentModel::DesignerCategoryAttribute::__cordl_internal_get__Category_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Category_k__BackingField;
}
constexpr ::StringW const& System::ComponentModel::DesignerCategoryAttribute::__cordl_internal_get__Category_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Category_k__BackingField;
}
constexpr void System::ComponentModel::DesignerCategoryAttribute::__cordl_internal_set__Category_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Category_k__BackingField = value;
}
inline void System::ComponentModel::DesignerCategoryAttribute::setStaticF_Component(::System::ComponentModel::DesignerCategoryAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::DesignerCategoryAttribute*, "Component", ::System::ComponentModel::DesignerCategoryAttribute*>(
      std::forward<::System::ComponentModel::DesignerCategoryAttribute*>(value));
}
inline ::System::ComponentModel::DesignerCategoryAttribute* System::ComponentModel::DesignerCategoryAttribute::getStaticF_Component() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::DesignerCategoryAttribute*, "Component", ::System::ComponentModel::DesignerCategoryAttribute*>();
}
inline void System::ComponentModel::DesignerCategoryAttribute::setStaticF_Default(::System::ComponentModel::DesignerCategoryAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::DesignerCategoryAttribute*, "Default", ::System::ComponentModel::DesignerCategoryAttribute*>(
      std::forward<::System::ComponentModel::DesignerCategoryAttribute*>(value));
}
inline ::System::ComponentModel::DesignerCategoryAttribute* System::ComponentModel::DesignerCategoryAttribute::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::DesignerCategoryAttribute*, "Default", ::System::ComponentModel::DesignerCategoryAttribute*>();
}
inline void System::ComponentModel::DesignerCategoryAttribute::setStaticF_Form(::System::ComponentModel::DesignerCategoryAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::DesignerCategoryAttribute*, "Form", ::System::ComponentModel::DesignerCategoryAttribute*>(
      std::forward<::System::ComponentModel::DesignerCategoryAttribute*>(value));
}
inline ::System::ComponentModel::DesignerCategoryAttribute* System::ComponentModel::DesignerCategoryAttribute::getStaticF_Form() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::DesignerCategoryAttribute*, "Form", ::System::ComponentModel::DesignerCategoryAttribute*>();
}
inline void System::ComponentModel::DesignerCategoryAttribute::setStaticF_Generic(::System::ComponentModel::DesignerCategoryAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::DesignerCategoryAttribute*, "Generic", ::System::ComponentModel::DesignerCategoryAttribute*>(
      std::forward<::System::ComponentModel::DesignerCategoryAttribute*>(value));
}
inline ::System::ComponentModel::DesignerCategoryAttribute* System::ComponentModel::DesignerCategoryAttribute::getStaticF_Generic() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::DesignerCategoryAttribute*, "Generic", ::System::ComponentModel::DesignerCategoryAttribute*>();
}
inline void System::ComponentModel::DesignerCategoryAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignerCategoryAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::DesignerCategoryAttribute::_ctor(::StringW category) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignerCategoryAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, category);
}
inline ::StringW System::ComponentModel::DesignerCategoryAttribute::get_Category() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::DesignerCategoryAttribute*>(), { "get_Category", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::ComponentModel::DesignerCategoryAttribute::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DesignerCategoryAttribute*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::DesignerCategoryAttribute::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DesignerCategoryAttribute*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::ComponentModel::DesignerCategoryAttribute::IsDefaultAttribute() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DesignerCategoryAttribute*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::DesignerCategoryAttribute::get_TypeId() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::DesignerCategoryAttribute*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::ComponentModel::DesignerCategoryAttribute* System::ComponentModel::DesignerCategoryAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::DesignerCategoryAttribute*>());
}
inline ::System::ComponentModel::DesignerCategoryAttribute* System::ComponentModel::DesignerCategoryAttribute::New_ctor(::StringW category) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::DesignerCategoryAttribute*>(category));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::DesignerCategoryAttribute::DesignerCategoryAttribute() {}
