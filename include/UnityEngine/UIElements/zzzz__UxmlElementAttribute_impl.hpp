#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlElementAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "UnityEngine/UIElements/zzzz__LibraryVisibility_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlElementAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlElementAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlElementAttribute::*)(::StringW)>(&::UnityEngine::UIElements::UxmlElementAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x7146870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlElementAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlElementAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlElementAttribute::*)(::StringW, ::ArrayW<::System::Type*>)>(
    &::UnityEngine::UIElements::UxmlElementAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x7146880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlElementAttribute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::UxmlElementAttribute::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& UnityEngine::UIElements::UxmlElementAttribute::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void UnityEngine::UIElements::UxmlElementAttribute::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::UnityEngine::UIElements::LibraryVisibility& UnityEngine::UIElements::UxmlElementAttribute::__cordl_internal_get_visibility() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___visibility;
}
constexpr ::UnityEngine::UIElements::LibraryVisibility const& UnityEngine::UIElements::UxmlElementAttribute::__cordl_internal_get_visibility() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___visibility;
}
constexpr void UnityEngine::UIElements::UxmlElementAttribute::__cordl_internal_set_visibility(::UnityEngine::UIElements::LibraryVisibility value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___visibility = value;
}
constexpr ::ArrayW<::System::Type*>& UnityEngine::UIElements::UxmlElementAttribute::__cordl_internal_get_supportedChildTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportedChildTypes;
}
constexpr ::ArrayW<::System::Type*> const& UnityEngine::UIElements::UxmlElementAttribute::__cordl_internal_get_supportedChildTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportedChildTypes;
}
constexpr void UnityEngine::UIElements::UxmlElementAttribute::__cordl_internal_set_supportedChildTypes(::ArrayW<::System::Type*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___supportedChildTypes = value;
}
inline void UnityEngine::UIElements::UxmlElementAttribute::_ctor(::StringW uxmlName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlElementAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uxmlName);
}
inline void UnityEngine::UIElements::UxmlElementAttribute::_ctor(::StringW uxmlName, /* [ParamArray] */ ::ArrayW<::System::Type*> supportedTypes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlElementAttribute*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uxmlName, supportedTypes);
}
inline ::UnityEngine::UIElements::UxmlElementAttribute* UnityEngine::UIElements::UxmlElementAttribute::New_ctor(::StringW uxmlName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UxmlElementAttribute*>(uxmlName));
}
inline ::UnityEngine::UIElements::UxmlElementAttribute* UnityEngine::UIElements::UxmlElementAttribute::New_ctor(::StringW uxmlName, /* [ParamArray] */ ::ArrayW<::System::Type*> supportedTypes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UxmlElementAttribute*>(uxmlName, supportedTypes));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlElementAttribute::UxmlElementAttribute() {}
