#pragma once
// IWYU pragma private; include "UnityEngine\AssetFileNameExtensionAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__AssetFileNameExtensionAttribute_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::AssetFileNameExtensionAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AssetFileNameExtensionAttribute::*)(::StringW, ::ArrayW<::StringW>)>(
    &::UnityEngine::AssetFileNameExtensionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb5e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetFileNameExtensionAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::AssetFileNameExtensionAttribute::__cordl_internal_get__preferredExtension_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preferredExtension_k__BackingField;
}
constexpr ::StringW const& UnityEngine::AssetFileNameExtensionAttribute::__cordl_internal_get__preferredExtension_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preferredExtension_k__BackingField;
}
constexpr void UnityEngine::AssetFileNameExtensionAttribute::__cordl_internal_set__preferredExtension_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____preferredExtension_k__BackingField = value;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& UnityEngine::AssetFileNameExtensionAttribute::__cordl_internal_get__otherExtensions_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____otherExtensions_k__BackingField;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* const& UnityEngine::AssetFileNameExtensionAttribute::__cordl_internal_get__otherExtensions_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____otherExtensions_k__BackingField;
}
constexpr void UnityEngine::AssetFileNameExtensionAttribute::__cordl_internal_set__otherExtensions_k__BackingField(::System::Collections::Generic::IEnumerable_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____otherExtensions_k__BackingField = value;
}
inline void UnityEngine::AssetFileNameExtensionAttribute::_ctor(::StringW preferredExtension, ::ArrayW<::StringW> otherExtensions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetFileNameExtensionAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, preferredExtension, otherExtensions);
}
inline ::UnityEngine::AssetFileNameExtensionAttribute* UnityEngine::AssetFileNameExtensionAttribute::New_ctor(::StringW preferredExtension, ::ArrayW<::StringW> otherExtensions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AssetFileNameExtensionAttribute*>(preferredExtension, otherExtensions));
}
// Ctor Parameters []
constexpr ::UnityEngine::AssetFileNameExtensionAttribute::AssetFileNameExtensionAttribute() {}
