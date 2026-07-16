#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/SerializedTypeRestrictionAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__SerializedTypeRestrictionAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute::*)()>(
    &::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6912454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
inline void UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute* UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute::SerializedTypeRestrictionAttribute() {}
