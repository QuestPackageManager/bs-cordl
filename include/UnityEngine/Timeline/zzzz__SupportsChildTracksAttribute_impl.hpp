#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\SupportsChildTracksAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Timeline/zzzz__SupportsChildTracksAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::SupportsChildTracksAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::SupportsChildTracksAttribute::*)(::System::Type*, int32_t)>(
    &::UnityEngine::Timeline::SupportsChildTracksAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69cb428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SupportsChildTracksAttribute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& UnityEngine::Timeline::SupportsChildTracksAttribute::__cordl_internal_get_childType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___childType;
}
constexpr ::System::Type* const& UnityEngine::Timeline::SupportsChildTracksAttribute::__cordl_internal_get_childType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___childType;
}
constexpr void UnityEngine::Timeline::SupportsChildTracksAttribute::__cordl_internal_set_childType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___childType = value;
}
constexpr int32_t& UnityEngine::Timeline::SupportsChildTracksAttribute::__cordl_internal_get_levels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levels;
}
constexpr int32_t const& UnityEngine::Timeline::SupportsChildTracksAttribute::__cordl_internal_get_levels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levels;
}
constexpr void UnityEngine::Timeline::SupportsChildTracksAttribute::__cordl_internal_set_levels(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levels = value;
}
inline void UnityEngine::Timeline::SupportsChildTracksAttribute::_ctor(::System::Type* childType, int32_t levels) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SupportsChildTracksAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, childType, levels);
}
inline ::UnityEngine::Timeline::SupportsChildTracksAttribute* UnityEngine::Timeline::SupportsChildTracksAttribute::New_ctor(::System::Type* childType, int32_t levels) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::SupportsChildTracksAttribute*>(childType, levels));
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::SupportsChildTracksAttribute::SupportsChildTracksAttribute() {}
