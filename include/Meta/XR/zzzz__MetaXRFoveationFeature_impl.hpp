#pragma once
// IWYU pragma private; include "Meta/XR/MetaXRFoveationFeature.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "Meta/XR/zzzz__MetaXRFoveationFeature_def.hpp"
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
//  Writing Method size for method: ::Meta::XR::MetaXRFoveationFeature.OnSessionCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MetaXRFoveationFeature::*)(uint64_t)>(&::Meta::XR::MetaXRFoveationFeature::OnSessionCreate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e4e170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFoveationFeature*>(), { ::i2c::class_of<::Meta::XR::MetaXRFoveationFeature*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXRFoveationFeature.get_foveatedRenderingLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRManager_FoveatedRenderingLevel (*)()>(&::Meta::XR::MetaXRFoveationFeature::get_foveatedRenderingLevel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e4e1c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFoveationFeature*>(), { "get_foveatedRenderingLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXRFoveationFeature.set_foveatedRenderingLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRManager_FoveatedRenderingLevel)>(&::Meta::XR::MetaXRFoveationFeature::set_foveatedRenderingLevel)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e4e258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFoveationFeature*>(), { "set_foveatedRenderingLevel", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_FoveatedRenderingLevel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXRFoveationFeature.get_useDynamicFoveatedRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Meta::XR::MetaXRFoveationFeature::get_useDynamicFoveatedRendering)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e4e364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFoveationFeature*>(), { "get_useDynamicFoveatedRendering", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXRFoveationFeature.set_useDynamicFoveatedRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Meta::XR::MetaXRFoveationFeature::set_useDynamicFoveatedRendering)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e4e388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFoveationFeature*>(), { "set_useDynamicFoveatedRendering", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXRFoveationFeature.FBSetFoveationLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, uint32_t, float_t, uint32_t)>(&::Meta::XR::MetaXRFoveationFeature::FBSetFoveationLevel)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e4e2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFoveationFeature*>(),
                                                { "FBSetFoveationLevel", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXRFoveationFeature.FBGetFoveationLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<uint32_t>)>(&::Meta::XR::MetaXRFoveationFeature::FBGetFoveationLevel)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e4e1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFoveationFeature*>(), { "FBGetFoveationLevel", {}, { ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXRFoveationFeature.FBGetFoveationDynamic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<uint32_t>)>(&::Meta::XR::MetaXRFoveationFeature::FBGetFoveationDynamic)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e4e3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFoveationFeature*>(), { "FBGetFoveationDynamic", {}, { ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXRFoveationFeature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MetaXRFoveationFeature::*)()>(&::Meta::XR::MetaXRFoveationFeature::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4e464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFoveationFeature*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Meta::XR::MetaXRFoveationFeature::setStaticF__xrSession(uint64_t value) {
  ::cordl_internals::setStaticField<uint64_t, "_xrSession", ::Meta::XR::MetaXRFoveationFeature*>(std::forward<uint64_t>(value));
}
inline uint64_t Meta::XR::MetaXRFoveationFeature::getStaticF__xrSession() {
  return ::cordl_internals::getStaticField<uint64_t, "_xrSession", ::Meta::XR::MetaXRFoveationFeature*>();
}
inline void Meta::XR::MetaXRFoveationFeature::setStaticF__foveatedRenderingLevel(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "_foveatedRenderingLevel", ::Meta::XR::MetaXRFoveationFeature*>(std::forward<uint32_t>(value));
}
inline uint32_t Meta::XR::MetaXRFoveationFeature::getStaticF__foveatedRenderingLevel() {
  return ::cordl_internals::getStaticField<uint32_t, "_foveatedRenderingLevel", ::Meta::XR::MetaXRFoveationFeature*>();
}
inline void Meta::XR::MetaXRFoveationFeature::setStaticF__useDynamicFoveation(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "_useDynamicFoveation", ::Meta::XR::MetaXRFoveationFeature*>(std::forward<uint32_t>(value));
}
inline uint32_t Meta::XR::MetaXRFoveationFeature::getStaticF__useDynamicFoveation() {
  return ::cordl_internals::getStaticField<uint32_t, "_useDynamicFoveation", ::Meta::XR::MetaXRFoveationFeature*>();
}
inline void Meta::XR::MetaXRFoveationFeature::OnSessionCreate(uint64_t xrSession) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::MetaXRFoveationFeature*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrSession);
}
inline ::GlobalNamespace::OVRManager_FoveatedRenderingLevel Meta::XR::MetaXRFoveationFeature::get_foveatedRenderingLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFoveationFeature*>(), { "get_foveatedRenderingLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_FoveatedRenderingLevel>(nullptr, ___internal_method);
}
inline void Meta::XR::MetaXRFoveationFeature::set_foveatedRenderingLevel(::GlobalNamespace::OVRManager_FoveatedRenderingLevel value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFoveationFeature*>(), { "set_foveatedRenderingLevel", {}, { ::i2c::type_of<::GlobalNamespace::OVRManager_FoveatedRenderingLevel>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool Meta::XR::MetaXRFoveationFeature::get_useDynamicFoveatedRendering() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFoveationFeature*>(), { "get_useDynamicFoveatedRendering", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Meta::XR::MetaXRFoveationFeature::set_useDynamicFoveatedRendering(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFoveationFeature*>(), { "set_useDynamicFoveatedRendering", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MetaXRFoveationFeature::FBSetFoveationLevel(uint64_t session, uint32_t level, float_t verticalOffset, uint32_t dynamic) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFoveationFeature*>(),
                                              { "FBSetFoveationLevel", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, session, level, verticalOffset, dynamic);
}
inline void Meta::XR::MetaXRFoveationFeature::FBGetFoveationLevel(::by_ref<uint32_t> level) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFoveationFeature*>(), { "FBGetFoveationLevel", {}, { ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, level);
}
inline void Meta::XR::MetaXRFoveationFeature::FBGetFoveationDynamic(::by_ref<uint32_t> dynamic) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFoveationFeature*>(), { "FBGetFoveationDynamic", {}, { ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dynamic);
}
inline void Meta::XR::MetaXRFoveationFeature::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFoveationFeature*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MetaXRFoveationFeature* Meta::XR::MetaXRFoveationFeature::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MetaXRFoveationFeature*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MetaXRFoveationFeature::MetaXRFoveationFeature() {}
