#pragma once
// IWYU pragma private; include "UnityEngine\TagHandle.hpp"
#include "UnityEngine/zzzz__TagHandle_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
//  Writing Method size for method: ::UnityEngine::TagHandle.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::TagHandle::*)()>(&::UnityEngine::TagHandle::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ae6e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TagHandle>(), { ::i2c::class_of<::UnityEngine::TagHandle>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TagHandle.TagToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint32_t)>(&::UnityEngine::TagHandle::TagToString)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6ae6e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TagHandle>(), { "TagToString", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TagHandle.TagToString_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::TagHandle::TagToString_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ae6f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TagHandle>(),
                                                             { "TagToString_Injected", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::TagHandle::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TagHandle>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW UnityEngine::TagHandle::TagToString(uint32_t tagIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TagHandle>(), { "TagToString", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, tagIndex);
}
inline void UnityEngine::TagHandle::TagToString_Injected(uint32_t tagIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TagHandle>(),
                                                           { "TagToString_Injected", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tagIndex, ret);
}
// Ctor Parameters [CppParam { name: "_tagIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TagHandle::TagHandle(uint32_t _tagIndex) noexcept {
  this->_tagIndex = _tagIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::TagHandle::TagHandle() {}
