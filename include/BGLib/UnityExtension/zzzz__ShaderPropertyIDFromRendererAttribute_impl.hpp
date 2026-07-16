#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/ShaderPropertyIDFromRendererAttribute.hpp"
#include "BGLib/UnityExtension/zzzz__ShaderPropertyIDAttribute_impl.hpp"
#include "BGLib/UnityExtension/zzzz__ShaderPropertyIDFromRendererAttribute_def.hpp"
#include "BGLib/UnityExtension/zzzz__ShaderPropertyAttributeFilter_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute::*)(
    ::StringW, ::StringW, ::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType)>(&::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x332874c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute*>(),
                            { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute.GetTargetName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute::*)()>(
    &::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute::GetTargetName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3328778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute*>(),
                                                                                          { ::i2c::class_of<::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute*>(), 7 }));
    return ___internal_method;
  }
};
constexpr ::StringW& BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute::__cordl_internal_get_propertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyName;
}
constexpr ::StringW const& BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute::__cordl_internal_get_propertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyName;
}
constexpr void BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute::__cordl_internal_set_propertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___propertyName = value;
}
inline void BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute::_ctor(::StringW propertyName, ::StringW nameFilter,
                                                                                ::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType filterPropType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute*>(),
                          { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName, nameFilter, filterPropType);
}
inline ::StringW BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute::GetTargetName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute*
BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute::New_ctor(::StringW propertyName, ::StringW nameFilter, ::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType filterPropType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute*>(propertyName, nameFilter, filterPropType));
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute::ShaderPropertyIDFromRendererAttribute() {}
