#pragma once
// IWYU pragma private; include "System/ComponentModel/ToolboxItemAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__ToolboxItemAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ToolboxItemAttribute.IsDefaultAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ToolboxItemAttribute::*)()>(&::System::ComponentModel::ToolboxItemAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x63ba6fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ToolboxItemAttribute*>(), { ::i2c::class_of<::System::ComponentModel::ToolboxItemAttribute*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ToolboxItemAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ToolboxItemAttribute::*)(bool)>(&::System::ComponentModel::ToolboxItemAttribute::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x63ba768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ToolboxItemAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ToolboxItemAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ToolboxItemAttribute::*)(::StringW)>(&::System::ComponentModel::ToolboxItemAttribute::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x63ba7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ToolboxItemAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ToolboxItemAttribute.get_ToolboxItemTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::ToolboxItemAttribute::*)()>(&::System::ComponentModel::ToolboxItemAttribute::get_ToolboxItemTypeName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63ba848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ToolboxItemAttribute*>(), { "get_ToolboxItemTypeName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ToolboxItemAttribute.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ToolboxItemAttribute::*)(::System::Object*)>(&::System::ComponentModel::ToolboxItemAttribute::Equals)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x63ba868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ToolboxItemAttribute*>(), { ::i2c::class_of<::System::ComponentModel::ToolboxItemAttribute*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ToolboxItemAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::ToolboxItemAttribute::*)()>(&::System::ComponentModel::ToolboxItemAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x63ba93c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ToolboxItemAttribute*>(), { ::i2c::class_of<::System::ComponentModel::ToolboxItemAttribute*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ComponentModel::ToolboxItemAttribute::__cordl_internal_get__toolboxItemTypeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toolboxItemTypeName;
}
constexpr ::StringW const& System::ComponentModel::ToolboxItemAttribute::__cordl_internal_get__toolboxItemTypeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toolboxItemTypeName;
}
constexpr void System::ComponentModel::ToolboxItemAttribute::__cordl_internal_set__toolboxItemTypeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____toolboxItemTypeName = value;
}
inline void System::ComponentModel::ToolboxItemAttribute::setStaticF_Default(::System::ComponentModel::ToolboxItemAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::ToolboxItemAttribute*, "Default", ::System::ComponentModel::ToolboxItemAttribute*>(
      std::forward<::System::ComponentModel::ToolboxItemAttribute*>(value));
}
inline ::System::ComponentModel::ToolboxItemAttribute* System::ComponentModel::ToolboxItemAttribute::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::ToolboxItemAttribute*, "Default", ::System::ComponentModel::ToolboxItemAttribute*>();
}
inline void System::ComponentModel::ToolboxItemAttribute::setStaticF_None(::System::ComponentModel::ToolboxItemAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::ToolboxItemAttribute*, "None", ::System::ComponentModel::ToolboxItemAttribute*>(
      std::forward<::System::ComponentModel::ToolboxItemAttribute*>(value));
}
inline ::System::ComponentModel::ToolboxItemAttribute* System::ComponentModel::ToolboxItemAttribute::getStaticF_None() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::ToolboxItemAttribute*, "None", ::System::ComponentModel::ToolboxItemAttribute*>();
}
inline bool System::ComponentModel::ToolboxItemAttribute::IsDefaultAttribute() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ToolboxItemAttribute*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::ComponentModel::ToolboxItemAttribute::_ctor(bool defaultType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ToolboxItemAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, defaultType);
}
inline void System::ComponentModel::ToolboxItemAttribute::_ctor(::StringW toolboxItemTypeName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ToolboxItemAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toolboxItemTypeName);
}
inline ::StringW System::ComponentModel::ToolboxItemAttribute::get_ToolboxItemTypeName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::ToolboxItemAttribute*>(), { "get_ToolboxItemTypeName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::ComponentModel::ToolboxItemAttribute::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ToolboxItemAttribute*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::ToolboxItemAttribute::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ToolboxItemAttribute*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::ComponentModel::ToolboxItemAttribute* System::ComponentModel::ToolboxItemAttribute::New_ctor(bool defaultType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ToolboxItemAttribute*>(defaultType));
}
inline ::System::ComponentModel::ToolboxItemAttribute* System::ComponentModel::ToolboxItemAttribute::New_ctor(::StringW toolboxItemTypeName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ToolboxItemAttribute*>(toolboxItemTypeName));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ToolboxItemAttribute::ToolboxItemAttribute() {}
