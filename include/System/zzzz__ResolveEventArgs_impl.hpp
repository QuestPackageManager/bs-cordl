#pragma once
// IWYU pragma private; include "System\ResolveEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/zzzz__ResolveEventArgs_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
//  Writing Method size for method: ::System::ResolveEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ResolveEventArgs::*)(::StringW)>(&::System::ResolveEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c5a1c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ResolveEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ResolveEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ResolveEventArgs::*)(::StringW, ::System::Reflection::Assembly*)>(&::System::ResolveEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c5a224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ResolveEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::Assembly*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ResolveEventArgs::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& System::ResolveEventArgs::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void System::ResolveEventArgs::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Name_k__BackingField = value;
}
constexpr ::System::Reflection::Assembly*& System::ResolveEventArgs::__cordl_internal_get__RequestingAssembly_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RequestingAssembly_k__BackingField;
}
constexpr ::System::Reflection::Assembly* const& System::ResolveEventArgs::__cordl_internal_get__RequestingAssembly_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RequestingAssembly_k__BackingField;
}
constexpr void System::ResolveEventArgs::__cordl_internal_set__RequestingAssembly_k__BackingField(::System::Reflection::Assembly* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____RequestingAssembly_k__BackingField = value;
}
inline void System::ResolveEventArgs::_ctor(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ResolveEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::ResolveEventArgs::_ctor(::StringW name, ::System::Reflection::Assembly* requestingAssembly) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ResolveEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::Assembly*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, requestingAssembly);
}
inline ::System::ResolveEventArgs* System::ResolveEventArgs::New_ctor(::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ResolveEventArgs*>(name));
}
inline ::System::ResolveEventArgs* System::ResolveEventArgs::New_ctor(::StringW name, ::System::Reflection::Assembly* requestingAssembly) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ResolveEventArgs*>(name, requestingAssembly));
}
// Ctor Parameters []
constexpr ::System::ResolveEventArgs::ResolveEventArgs() {}
