#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\InspectedItemBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__InspectedItemBase_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedItemBase.get_Valid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::InspectedItemBase::*)()>(&::Meta::XR::ImmersiveDebugger::InspectedItemBase::get_Valid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a41724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedItemBase*>(), { "get_Valid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedItemBase.set_Valid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::InspectedItemBase::*)(bool)>(&::Meta::XR::ImmersiveDebugger::InspectedItemBase::set_Valid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4172c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedItemBase*>(), { "set_Valid", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedItemBase.get_Visible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::InspectedItemBase::*)()>(&::Meta::XR::ImmersiveDebugger::InspectedItemBase::get_Visible)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a40d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedItemBase*>(), { "get_Visible", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedItemBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::InspectedItemBase::*)()>(&::Meta::XR::ImmersiveDebugger::InspectedItemBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a41734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedItemBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& Meta::XR::ImmersiveDebugger::InspectedItemBase::__cordl_internal_get_enabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enabled;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::InspectedItemBase::__cordl_internal_get_enabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enabled;
}
constexpr void Meta::XR::ImmersiveDebugger::InspectedItemBase::__cordl_internal_set_enabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enabled = value;
}
constexpr ::StringW& Meta::XR::ImmersiveDebugger::InspectedItemBase::__cordl_internal_get_typeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeName;
}
constexpr ::StringW const& Meta::XR::ImmersiveDebugger::InspectedItemBase::__cordl_internal_get_typeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeName;
}
constexpr void Meta::XR::ImmersiveDebugger::InspectedItemBase::__cordl_internal_set_typeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___typeName = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::InspectedItemBase::__cordl_internal_get__Valid_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Valid_k__BackingField;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::InspectedItemBase::__cordl_internal_get__Valid_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Valid_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::InspectedItemBase::__cordl_internal_set__Valid_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Valid_k__BackingField = value;
}
inline bool Meta::XR::ImmersiveDebugger::InspectedItemBase::get_Valid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedItemBase*>(), { "get_Valid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::InspectedItemBase::set_Valid(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedItemBase*>(), { "set_Valid", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::InspectedItemBase::get_Visible() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedItemBase*>(), { "get_Visible", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::InspectedItemBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedItemBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::InspectedItemBase* Meta::XR::ImmersiveDebugger::InspectedItemBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::InspectedItemBase*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::InspectedItemBase::InspectedItemBase() {}
