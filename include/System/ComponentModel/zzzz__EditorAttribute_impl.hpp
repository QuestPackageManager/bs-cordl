#pragma once
// IWYU pragma private; include "System\ComponentModel\EditorAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__EditorAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::EditorAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::EditorAttribute::*)(::StringW, ::StringW)>(&::System::ComponentModel::EditorAttribute::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x63c0638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::EditorAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EditorAttribute.get_EditorBaseTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::EditorAttribute::*)()>(&::System::ComponentModel::EditorAttribute::get_EditorBaseTypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63c06c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::EditorAttribute*>(), { "get_EditorBaseTypeName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EditorAttribute.get_EditorTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::EditorAttribute::*)()>(&::System::ComponentModel::EditorAttribute::get_EditorTypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63c06c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::EditorAttribute*>(), { "get_EditorTypeName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EditorAttribute.get_TypeId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::EditorAttribute::*)()>(&::System::ComponentModel::EditorAttribute::get_TypeId)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x63c06d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::EditorAttribute*>(), { ::i2c::class_of<::System::ComponentModel::EditorAttribute*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EditorAttribute.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::EditorAttribute::*)(::System::Object*)>(&::System::ComponentModel::EditorAttribute::Equals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x63c0760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::EditorAttribute*>(), { ::i2c::class_of<::System::ComponentModel::EditorAttribute*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EditorAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::EditorAttribute::*)()>(&::System::ComponentModel::EditorAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63c0800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::EditorAttribute*>(), { ::i2c::class_of<::System::ComponentModel::EditorAttribute*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ComponentModel::EditorAttribute::__cordl_internal_get__typeId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeId;
}
constexpr ::StringW const& System::ComponentModel::EditorAttribute::__cordl_internal_get__typeId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeId;
}
constexpr void System::ComponentModel::EditorAttribute::__cordl_internal_set__typeId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____typeId = value;
}
constexpr ::StringW& System::ComponentModel::EditorAttribute::__cordl_internal_get__EditorBaseTypeName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EditorBaseTypeName_k__BackingField;
}
constexpr ::StringW const& System::ComponentModel::EditorAttribute::__cordl_internal_get__EditorBaseTypeName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EditorBaseTypeName_k__BackingField;
}
constexpr void System::ComponentModel::EditorAttribute::__cordl_internal_set__EditorBaseTypeName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____EditorBaseTypeName_k__BackingField = value;
}
constexpr ::StringW& System::ComponentModel::EditorAttribute::__cordl_internal_get__EditorTypeName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EditorTypeName_k__BackingField;
}
constexpr ::StringW const& System::ComponentModel::EditorAttribute::__cordl_internal_get__EditorTypeName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EditorTypeName_k__BackingField;
}
constexpr void System::ComponentModel::EditorAttribute::__cordl_internal_set__EditorTypeName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____EditorTypeName_k__BackingField = value;
}
inline void System::ComponentModel::EditorAttribute::_ctor(::StringW typeName, ::StringW baseTypeName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::EditorAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeName, baseTypeName);
}
inline ::StringW System::ComponentModel::EditorAttribute::get_EditorBaseTypeName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::EditorAttribute*>(), { "get_EditorBaseTypeName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::EditorAttribute::get_EditorTypeName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::EditorAttribute*>(), { "get_EditorTypeName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::EditorAttribute::get_TypeId() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::EditorAttribute*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::ComponentModel::EditorAttribute::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::EditorAttribute*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::EditorAttribute::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::EditorAttribute*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::ComponentModel::EditorAttribute* System::ComponentModel::EditorAttribute::New_ctor(::StringW typeName, ::StringW baseTypeName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::EditorAttribute*>(typeName, baseTypeName));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::EditorAttribute::EditorAttribute() {}
