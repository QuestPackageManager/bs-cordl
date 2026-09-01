#pragma once
// IWYU pragma private; include "System\ComponentModel\NotifyParentPropertyAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__NotifyParentPropertyAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::NotifyParentPropertyAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::NotifyParentPropertyAttribute::*)(bool)>(&::System::ComponentModel::NotifyParentPropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63eaca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::NotifyParentPropertyAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::NotifyParentPropertyAttribute.get_NotifyParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::NotifyParentPropertyAttribute::*)()>(
    &::System::ComponentModel::NotifyParentPropertyAttribute::get_NotifyParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63eaca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::NotifyParentPropertyAttribute*>(), { "get_NotifyParent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::NotifyParentPropertyAttribute.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::NotifyParentPropertyAttribute::*)(::System::Object*)>(
    &::System::ComponentModel::NotifyParentPropertyAttribute::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x63eacb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::NotifyParentPropertyAttribute*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::NotifyParentPropertyAttribute*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::NotifyParentPropertyAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::NotifyParentPropertyAttribute::*)()>(&::System::ComponentModel::NotifyParentPropertyAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63ead3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::NotifyParentPropertyAttribute*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::NotifyParentPropertyAttribute*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::NotifyParentPropertyAttribute.IsDefaultAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::NotifyParentPropertyAttribute::*)()>(
    &::System::ComponentModel::NotifyParentPropertyAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x63ead44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::NotifyParentPropertyAttribute*>(),
                                                                                          { ::i2c::class_of<::System::ComponentModel::NotifyParentPropertyAttribute*>(), 6 }));
    return ___internal_method;
  }
};
constexpr bool& System::ComponentModel::NotifyParentPropertyAttribute::__cordl_internal_get_notifyParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notifyParent;
}
constexpr bool const& System::ComponentModel::NotifyParentPropertyAttribute::__cordl_internal_get_notifyParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notifyParent;
}
constexpr void System::ComponentModel::NotifyParentPropertyAttribute::__cordl_internal_set_notifyParent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___notifyParent = value;
}
inline void System::ComponentModel::NotifyParentPropertyAttribute::setStaticF_Yes(::System::ComponentModel::NotifyParentPropertyAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::NotifyParentPropertyAttribute*, "Yes", ::System::ComponentModel::NotifyParentPropertyAttribute*>(
      std::forward<::System::ComponentModel::NotifyParentPropertyAttribute*>(value));
}
inline ::System::ComponentModel::NotifyParentPropertyAttribute* System::ComponentModel::NotifyParentPropertyAttribute::getStaticF_Yes() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::NotifyParentPropertyAttribute*, "Yes", ::System::ComponentModel::NotifyParentPropertyAttribute*>();
}
inline void System::ComponentModel::NotifyParentPropertyAttribute::setStaticF_No(::System::ComponentModel::NotifyParentPropertyAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::NotifyParentPropertyAttribute*, "No", ::System::ComponentModel::NotifyParentPropertyAttribute*>(
      std::forward<::System::ComponentModel::NotifyParentPropertyAttribute*>(value));
}
inline ::System::ComponentModel::NotifyParentPropertyAttribute* System::ComponentModel::NotifyParentPropertyAttribute::getStaticF_No() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::NotifyParentPropertyAttribute*, "No", ::System::ComponentModel::NotifyParentPropertyAttribute*>();
}
inline void System::ComponentModel::NotifyParentPropertyAttribute::setStaticF_Default(::System::ComponentModel::NotifyParentPropertyAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::NotifyParentPropertyAttribute*, "Default", ::System::ComponentModel::NotifyParentPropertyAttribute*>(
      std::forward<::System::ComponentModel::NotifyParentPropertyAttribute*>(value));
}
inline ::System::ComponentModel::NotifyParentPropertyAttribute* System::ComponentModel::NotifyParentPropertyAttribute::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::NotifyParentPropertyAttribute*, "Default", ::System::ComponentModel::NotifyParentPropertyAttribute*>();
}
inline void System::ComponentModel::NotifyParentPropertyAttribute::_ctor(bool notifyParent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::NotifyParentPropertyAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notifyParent);
}
inline bool System::ComponentModel::NotifyParentPropertyAttribute::get_NotifyParent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::NotifyParentPropertyAttribute*>(), { "get_NotifyParent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::ComponentModel::NotifyParentPropertyAttribute::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::NotifyParentPropertyAttribute*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::NotifyParentPropertyAttribute::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::NotifyParentPropertyAttribute*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::ComponentModel::NotifyParentPropertyAttribute::IsDefaultAttribute() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::NotifyParentPropertyAttribute*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ComponentModel::NotifyParentPropertyAttribute* System::ComponentModel::NotifyParentPropertyAttribute::New_ctor(bool notifyParent) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::NotifyParentPropertyAttribute*>(notifyParent));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::NotifyParentPropertyAttribute::NotifyParentPropertyAttribute() {}
