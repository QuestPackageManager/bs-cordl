#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/ShaderPropertyIDFromGameObjectAttribute.hpp"
#include "BGLib/UnityExtension/zzzz__ShaderPropertyIDAttribute_impl.hpp"
#include "BGLib/UnityExtension/zzzz__ShaderPropertyIDFromGameObjectAttribute_def.hpp"
#include "BGLib/UnityExtension/zzzz__ShaderPropertyAttributeFilter_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute::*)(
    ::StringW, ::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType)>(&::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3328704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute.GetTargetName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute::*)()>(
    &::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute::GetTargetName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3328708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute*>(),
                                                                                          { ::i2c::class_of<::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute*>(), 7 }));
    return ___internal_method;
  }
};
inline void BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute::_ctor(::StringW nameFilter, ::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType filterPropType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameFilter, filterPropType);
}
inline ::StringW BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute::GetTargetName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute*
BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute::New_ctor(::StringW nameFilter, ::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType filterPropType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute*>(nameFilter, filterPropType));
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute::ShaderPropertyIDFromGameObjectAttribute() {}
