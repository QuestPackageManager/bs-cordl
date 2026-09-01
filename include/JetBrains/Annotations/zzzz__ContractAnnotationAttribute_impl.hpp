#pragma once
// IWYU pragma private; include "JetBrains\Annotations\ContractAnnotationAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__ContractAnnotationAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::ContractAnnotationAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::ContractAnnotationAttribute::*)(::StringW)>(&::JetBrains::Annotations::ContractAnnotationAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e3deb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::ContractAnnotationAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::ContractAnnotationAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::ContractAnnotationAttribute::*)(::StringW, bool)>(
    &::JetBrains::Annotations::ContractAnnotationAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e3dec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::ContractAnnotationAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::ContractAnnotationAttribute.get_Contract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::JetBrains::Annotations::ContractAnnotationAttribute::*)()>(&::JetBrains::Annotations::ContractAnnotationAttribute::get_Contract)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3ded0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::ContractAnnotationAttribute*>(), { "get_Contract", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::ContractAnnotationAttribute.set_Contract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::ContractAnnotationAttribute::*)(::StringW)>(
    &::JetBrains::Annotations::ContractAnnotationAttribute::set_Contract)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3ded8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::ContractAnnotationAttribute*>(), { "set_Contract", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::ContractAnnotationAttribute.get_ForceFullStates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JetBrains::Annotations::ContractAnnotationAttribute::*)()>(
    &::JetBrains::Annotations::ContractAnnotationAttribute::get_ForceFullStates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3dee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::ContractAnnotationAttribute*>(), { "get_ForceFullStates", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::ContractAnnotationAttribute.set_ForceFullStates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::ContractAnnotationAttribute::*)(bool)>(
    &::JetBrains::Annotations::ContractAnnotationAttribute::set_ForceFullStates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3dee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::ContractAnnotationAttribute*>(), { "set_ForceFullStates", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& JetBrains::Annotations::ContractAnnotationAttribute::__cordl_internal_get__Contract_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Contract_k__BackingField;
}
constexpr ::StringW const& JetBrains::Annotations::ContractAnnotationAttribute::__cordl_internal_get__Contract_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Contract_k__BackingField;
}
constexpr void JetBrains::Annotations::ContractAnnotationAttribute::__cordl_internal_set__Contract_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Contract_k__BackingField = value;
}
constexpr bool& JetBrains::Annotations::ContractAnnotationAttribute::__cordl_internal_get__ForceFullStates_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ForceFullStates_k__BackingField;
}
constexpr bool const& JetBrains::Annotations::ContractAnnotationAttribute::__cordl_internal_get__ForceFullStates_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ForceFullStates_k__BackingField;
}
constexpr void JetBrains::Annotations::ContractAnnotationAttribute::__cordl_internal_set__ForceFullStates_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ForceFullStates_k__BackingField = value;
}
inline void JetBrains::Annotations::ContractAnnotationAttribute::_ctor(::StringW contract) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::ContractAnnotationAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contract);
}
inline void JetBrains::Annotations::ContractAnnotationAttribute::_ctor(::StringW contract, bool forceFullStates) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::ContractAnnotationAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contract, forceFullStates);
}
inline ::StringW JetBrains::Annotations::ContractAnnotationAttribute::get_Contract() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::ContractAnnotationAttribute*>(), { "get_Contract", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void JetBrains::Annotations::ContractAnnotationAttribute::set_Contract(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::ContractAnnotationAttribute*>(), { "set_Contract", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool JetBrains::Annotations::ContractAnnotationAttribute::get_ForceFullStates() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::ContractAnnotationAttribute*>(), { "get_ForceFullStates", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JetBrains::Annotations::ContractAnnotationAttribute::set_ForceFullStates(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::ContractAnnotationAttribute*>(), { "set_ForceFullStates", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::JetBrains::Annotations::ContractAnnotationAttribute* JetBrains::Annotations::ContractAnnotationAttribute::New_ctor(::StringW contract) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::ContractAnnotationAttribute*>(contract));
}
inline ::JetBrains::Annotations::ContractAnnotationAttribute* JetBrains::Annotations::ContractAnnotationAttribute::New_ctor(::StringW contract, bool forceFullStates) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::ContractAnnotationAttribute*>(contract, forceFullStates));
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::ContractAnnotationAttribute::ContractAnnotationAttribute() {}
