#pragma once
// IWYU pragma private; include "UnityEngine/RejectDragAndDropMaterial.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__RejectDragAndDropMaterial_def.hpp"
//  Writing Method size for method: ::UnityEngine::RejectDragAndDropMaterial._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RejectDragAndDropMaterial::*)()>(&::UnityEngine::RejectDragAndDropMaterial::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x7014a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RejectDragAndDropMaterial*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::RejectDragAndDropMaterial::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RejectDragAndDropMaterial*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::RejectDragAndDropMaterial* UnityEngine::RejectDragAndDropMaterial::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::RejectDragAndDropMaterial*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::RejectDragAndDropMaterial::RejectDragAndDropMaterial() {}
