#pragma once
// IWYU pragma private; include "Meta/XR/MetaXRSubsampledLayout.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "Meta/XR/zzzz__MetaXRSubsampledLayout_def.hpp"
//  Writing Method size for method: ::Meta::XR::MetaXRSubsampledLayout.OnInstanceCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MetaXRSubsampledLayout::*)(uint64_t)>(&::Meta::XR::MetaXRSubsampledLayout::OnInstanceCreate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e4e624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRSubsampledLayout*>(), { ::i2c::class_of<::Meta::XR::MetaXRSubsampledLayout*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXRSubsampledLayout.MetaSetSubsampledLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Meta::XR::MetaXRSubsampledLayout::MetaSetSubsampledLayout)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e4e644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRSubsampledLayout*>(), { "MetaSetSubsampledLayout", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXRSubsampledLayout._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MetaXRSubsampledLayout::*)()>(&::Meta::XR::MetaXRSubsampledLayout::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4e6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRSubsampledLayout*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool Meta::XR::MetaXRSubsampledLayout::OnInstanceCreate(uint64_t xrInstance) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::MetaXRSubsampledLayout*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xrInstance);
}
inline void Meta::XR::MetaXRSubsampledLayout::MetaSetSubsampledLayout(bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRSubsampledLayout*>(), { "MetaSetSubsampledLayout", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enabled);
}
inline void Meta::XR::MetaXRSubsampledLayout::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRSubsampledLayout*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MetaXRSubsampledLayout* Meta::XR::MetaXRSubsampledLayout::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MetaXRSubsampledLayout*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MetaXRSubsampledLayout::MetaXRSubsampledLayout() {}
