#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXPropertyBindingAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXPropertyBindingAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXPropertyBindingAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXPropertyBindingAttribute::*)(::ArrayW<::StringW>)>(
    &::UnityEngine::VFX::Utility::VFXPropertyBindingAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69e4044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXPropertyBindingAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& UnityEngine::VFX::Utility::VFXPropertyBindingAttribute::__cordl_internal_get_EditorTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EditorTypes;
}
constexpr ::ArrayW<::StringW> const& UnityEngine::VFX::Utility::VFXPropertyBindingAttribute::__cordl_internal_get_EditorTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EditorTypes;
}
constexpr void UnityEngine::VFX::Utility::VFXPropertyBindingAttribute::__cordl_internal_set_EditorTypes(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EditorTypes = value;
}
inline void UnityEngine::VFX::Utility::VFXPropertyBindingAttribute::_ctor(::ArrayW<::StringW> editorTypes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXPropertyBindingAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, editorTypes);
}
inline ::UnityEngine::VFX::Utility::VFXPropertyBindingAttribute* UnityEngine::VFX::Utility::VFXPropertyBindingAttribute::New_ctor(::ArrayW<::StringW> editorTypes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::Utility::VFXPropertyBindingAttribute*>(editorTypes));
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::Utility::VFXPropertyBindingAttribute::VFXPropertyBindingAttribute() {}
