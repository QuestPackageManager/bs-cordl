#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RendererList.hpp"
#include "System/zzzz__UIntPtr_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "System/zzzz__UIntPtr_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RendererList.get_isValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RendererList::*)()>(&::UnityEngine::Rendering::RendererList::get_isValid)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b2171c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RendererList>(), { "get_isValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RendererList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RendererList::*)(::System::UIntPtr, uint32_t)>(&::UnityEngine::Rendering::RendererList::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b21758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RendererList>(), { ".ctor", {}, { ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RendererList::setStaticF_nullRendererList(::UnityEngine::Rendering::RendererList value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RendererList, "nullRendererList", ::UnityEngine::Rendering::RendererList>(std::forward<::UnityEngine::Rendering::RendererList>(value));
}
inline ::UnityEngine::Rendering::RendererList UnityEngine::Rendering::RendererList::getStaticF_nullRendererList() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RendererList, "nullRendererList", ::UnityEngine::Rendering::RendererList>();
}
inline bool UnityEngine::Rendering::RendererList::get_isValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RendererList>(), { "get_isValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RendererList::_ctor(::System::UIntPtr ctx, uint32_t indx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RendererList>(), { ".ctor", {}, { ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ctx, indx);
}
// Ctor Parameters [CppParam { name: "context", ty: "::System::UIntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "index", ty: "uint32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "frame", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "contextID", ty:
// "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RendererList::RendererList(::System::UIntPtr context, uint32_t index, uint32_t frame, uint32_t type, uint32_t contextID) noexcept {
  this->context = context;
  this->index = index;
  this->frame = frame;
  this->type = type;
  this->contextID = contextID;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RendererList::RendererList() {}
