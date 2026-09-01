#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UIR\BMPAlloc.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__OwnedState_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BMPAlloc.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::BMPAlloc::*)(::UnityEngine::UIElements::UIR::BMPAlloc)>(
    &::UnityEngine::UIElements::UIR::BMPAlloc::Equals)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6cefcb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::BMPAlloc>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BMPAlloc.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::BMPAlloc::*)()>(&::UnityEngine::UIElements::UIR::BMPAlloc::IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6cec5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::BMPAlloc>(), { "IsValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BMPAlloc.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::UIR::BMPAlloc::*)()>(&::UnityEngine::UIElements::UIR::BMPAlloc::ToString)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6cf3e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::BMPAlloc>(), { ::i2c::class_of<::UnityEngine::UIElements::UIR::BMPAlloc>(), 3 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::BMPAlloc::setStaticF_Invalid(::UnityEngine::UIElements::UIR::BMPAlloc value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UIR::BMPAlloc, "Invalid", ::UnityEngine::UIElements::UIR::BMPAlloc>(std::forward<::UnityEngine::UIElements::UIR::BMPAlloc>(value));
}
inline ::UnityEngine::UIElements::UIR::BMPAlloc UnityEngine::UIElements::UIR::BMPAlloc::getStaticF_Invalid() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UIR::BMPAlloc, "Invalid", ::UnityEngine::UIElements::UIR::BMPAlloc>();
}
inline bool UnityEngine::UIElements::UIR::BMPAlloc::Equals(::UnityEngine::UIElements::UIR::BMPAlloc other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::BMPAlloc>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::UIR::BMPAlloc::IsValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::BMPAlloc>(), { "IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::UIR::BMPAlloc::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UIR::BMPAlloc>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "page", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pageLine", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "bitIndex", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ownedState", ty: "::UnityEngine::UIElements::UIR::OwnedState", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc::BMPAlloc(int32_t page, uint16_t pageLine, uint8_t bitIndex, ::UnityEngine::UIElements::UIR::OwnedState ownedState) noexcept {
  this->page = page;
  this->pageLine = pageLine;
  this->bitIndex = bitIndex;
  this->ownedState = ownedState;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc::BMPAlloc() {}
