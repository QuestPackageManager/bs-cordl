#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ObjectIdRequest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ObjectIdRequest_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ObjectIdRequest.get_destination
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::UnityEngine::Rendering::ObjectIdRequest::*)()>(
    &::UnityEngine::Rendering::ObjectIdRequest::get_destination)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b21c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObjectIdRequest*>(), { "get_destination", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RenderTexture>& UnityEngine::Rendering::ObjectIdRequest::__cordl_internal_get__destination_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destination_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& UnityEngine::Rendering::ObjectIdRequest::__cordl_internal_get__destination_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destination_k__BackingField;
}
constexpr void UnityEngine::Rendering::ObjectIdRequest::__cordl_internal_set__destination_k__BackingField(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____destination_k__BackingField = value;
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::Rendering::ObjectIdRequest::get_destination() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObjectIdRequest*>(), { "get_destination", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ObjectIdRequest::ObjectIdRequest() {}
