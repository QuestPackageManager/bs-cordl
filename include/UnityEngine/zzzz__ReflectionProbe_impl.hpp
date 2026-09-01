#pragma once
// IWYU pragma private; include "UnityEngine\ReflectionProbe.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/zzzz__ReflectionProbe_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__ReflectionProbeClearFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__ReflectionProbeMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__ReflectionProbeRefreshMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__ReflectionProbeTimeSlicingMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__ReflectionProbeType_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Cubemap_def.hpp"
#include "UnityEngine/zzzz__ReflectionProbe_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ReflectionProbe_ReflectionProbeEvent::ReflectionProbe_ReflectionProbeEvent(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ReflectionProbe_ReflectionProbeEvent::ReflectionProbe_ReflectionProbeEvent() {}
constexpr ::UnityEngine::ReflectionProbe_ReflectionProbeEvent UnityEngine::ReflectionProbe_ReflectionProbeEvent::ReflectionProbeAdded{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ReflectionProbe_ReflectionProbeEvent UnityEngine::ReflectionProbe_ReflectionProbeEvent::ReflectionProbeRemoved{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::ReflectionProbe___c__DisplayClass95_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ReflectionProbe___c__DisplayClass95_0::*)()>(&::UnityEngine::ReflectionProbe___c__DisplayClass95_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a7a128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe___c__DisplayClass95_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe___c__DisplayClass95_0._add_defaultReflectionSet_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ReflectionProbe___c__DisplayClass95_0::*)(::System::Action_1<::UnityW<::UnityEngine::Texture>>*)>(
    &::UnityEngine::ReflectionProbe___c__DisplayClass95_0::_add_defaultReflectionSet_b__1)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6a7a76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe___c__DisplayClass95_0*>(),
                                                             { "<add_defaultReflectionSet>b__1", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe___c__DisplayClass95_0._add_defaultReflectionSet_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ReflectionProbe___c__DisplayClass95_0::*)(::UnityEngine::Texture*)>(
    &::UnityEngine::ReflectionProbe___c__DisplayClass95_0::_add_defaultReflectionSet_b__0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a7a7e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe___c__DisplayClass95_0*>(),
                                                                                           { "<add_defaultReflectionSet>b__0", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityW<::UnityEngine::Cubemap>>*& UnityEngine::ReflectionProbe___c__DisplayClass95_0::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::Cubemap>>* const& UnityEngine::ReflectionProbe___c__DisplayClass95_0::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void UnityEngine::ReflectionProbe___c__DisplayClass95_0::__cordl_internal_set_value(::System::Action_1<::UnityW<::UnityEngine::Cubemap>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
inline void UnityEngine::ReflectionProbe___c__DisplayClass95_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe___c__DisplayClass95_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ReflectionProbe___c__DisplayClass95_0::_add_defaultReflectionSet_b__1(::System::Action_1<::UnityW<::UnityEngine::Texture>>* h) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe___c__DisplayClass95_0*>(),
                                                           { "<add_defaultReflectionSet>b__1", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, h);
}
inline void UnityEngine::ReflectionProbe___c__DisplayClass95_0::_add_defaultReflectionSet_b__0(::UnityEngine::Texture* b) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe___c__DisplayClass95_0*>(),
                                                                                         { "<add_defaultReflectionSet>b__0", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline ::UnityEngine::ReflectionProbe___c__DisplayClass95_0* UnityEngine::ReflectionProbe___c__DisplayClass95_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ReflectionProbe___c__DisplayClass95_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ReflectionProbe___c__DisplayClass95_0::ReflectionProbe___c__DisplayClass95_0() {}
//  Writing Method size for method: ::UnityEngine::ReflectionProbe___c__DisplayClass98_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ReflectionProbe___c__DisplayClass98_0::*)()>(&::UnityEngine::ReflectionProbe___c__DisplayClass98_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a7a51c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe___c__DisplayClass98_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe___c__DisplayClass98_0._add_defaultReflectionTexture_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ReflectionProbe___c__DisplayClass98_0::*)(::System::Action_1<::UnityW<::UnityEngine::Texture>>*)>(
    &::UnityEngine::ReflectionProbe___c__DisplayClass98_0::_add_defaultReflectionTexture_b__0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6a7a874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe___c__DisplayClass98_0*>(),
                                                             { "<add_defaultReflectionTexture>b__0", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityW<::UnityEngine::Texture>>*& UnityEngine::ReflectionProbe___c__DisplayClass98_0::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::Texture>>* const& UnityEngine::ReflectionProbe___c__DisplayClass98_0::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void UnityEngine::ReflectionProbe___c__DisplayClass98_0::__cordl_internal_set_value(::System::Action_1<::UnityW<::UnityEngine::Texture>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
inline void UnityEngine::ReflectionProbe___c__DisplayClass98_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe___c__DisplayClass98_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ReflectionProbe___c__DisplayClass98_0::_add_defaultReflectionTexture_b__0(::System::Action_1<::UnityW<::UnityEngine::Texture>>* h) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe___c__DisplayClass98_0*>(),
                                                           { "<add_defaultReflectionTexture>b__0", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, h);
}
inline ::UnityEngine::ReflectionProbe___c__DisplayClass98_0* UnityEngine::ReflectionProbe___c__DisplayClass98_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ReflectionProbe___c__DisplayClass98_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ReflectionProbe___c__DisplayClass98_0::ReflectionProbe___c__DisplayClass98_0() {}
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ReflectionProbeType (::UnityEngine::ReflectionProbe::*)()>(&::UnityEngine::ReflectionProbe::get_type)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a76440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ReflectionProbe::*)(::UnityEngine::Rendering::ReflectionProbeType)>(&::UnityEngine::ReflectionProbe::set_type)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a76524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_type", {}, { ::i2c::type_of<::UnityEngine::Rendering::ReflectionProbeType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_size
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ReflectionProbe::*)()>(&::UnityEngine::ReflectionProbe::get_size)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6a76620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_size", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_size
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ReflectionProbe::*)(::UnityEngine::Vector3)>(&::UnityEngine::ReflectionProbe::set_size)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6a7672c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_size", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_center
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::ReflectionProbe::*)()>(&::UnityEngine::ReflectionProbe::get_center)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6a76830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_center", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_center
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ReflectionProbe::*)(::UnityEngine::Vector3)>(&::UnityEngine::ReflectionProbe::set_center)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6a7693c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_center", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_nearClipPlane
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ReflectionProbe::*)()>(&::UnityEngine::ReflectionProbe::get_nearClipPlane)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a76a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_nearClipPlane", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_nearClipPlane
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ReflectionProbe::*)(float_t)>(&::UnityEngine::ReflectionProbe::set_nearClipPlane)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a76b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_nearClipPlane", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_farClipPlane
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ReflectionProbe::*)()>(&::UnityEngine::ReflectionProbe::get_farClipPlane)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a76c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_farClipPlane", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_farClipPlane
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ReflectionProbe::*)(float_t)>(&::UnityEngine::ReflectionProbe::set_farClipPlane)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a76d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_farClipPlane", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_intensity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ReflectionProbe::*)()>(&::UnityEngine::ReflectionProbe::get_intensity)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a76e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_intensity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_intensity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ReflectionProbe::*)(float_t)>(&::UnityEngine::ReflectionProbe::set_intensity)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a76ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_intensity", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_bounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::UnityEngine::ReflectionProbe::*)()>(&::UnityEngine::ReflectionProbe::get_bounds)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6a76ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_bounds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_hdr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ReflectionProbe::*)()>(&::UnityEngine::ReflectionProbe::get_hdr)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a77114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_hdr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_hdr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ReflectionProbe::*)(bool)>(&::UnityEngine::ReflectionProbe::set_hdr)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a771f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_hdr", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_renderDynamicObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ReflectionProbe::*)()>(&::UnityEngine::ReflectionProbe::get_renderDynamicObjects)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a772f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_renderDynamicObjects", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_renderDynamicObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ReflectionProbe::*)(bool)>(&::UnityEngine::ReflectionProbe::set_renderDynamicObjects)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a773d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_renderDynamicObjects", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_shadowDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ReflectionProbe::*)()>(&::UnityEngine::ReflectionProbe::get_shadowDistance)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a774d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_shadowDistance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_shadowDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ReflectionProbe::*)(float_t)>(&::UnityEngine::ReflectionProbe::set_shadowDistance)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a775b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_shadowDistance", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_resolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ReflectionProbe::*)()>(&::UnityEngine::ReflectionProbe::get_resolution)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a776bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_resolution", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_resolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ReflectionProbe::*)(int32_t)>(&::UnityEngine::ReflectionProbe::set_resolution)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a777a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_resolution", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_cullingMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ReflectionProbe::*)()>(&::UnityEngine::ReflectionProbe::get_cullingMask)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a7789c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_cullingMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_cullingMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ReflectionProbe::*)(int32_t)>(&::UnityEngine::ReflectionProbe::set_cullingMask)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a77980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_cullingMask", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_clearFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ReflectionProbeClearFlags (::UnityEngine::ReflectionProbe::*)()>(&::UnityEngine::ReflectionProbe::get_clearFlags)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a77a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_clearFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_clearFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ReflectionProbe::*)(::UnityEngine::Rendering::ReflectionProbeClearFlags)>(
    &::UnityEngine::ReflectionProbe::set_clearFlags)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a77b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_clearFlags", {}, { ::i2c::type_of<::UnityEngine::Rendering::ReflectionProbeClearFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_backgroundColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::ReflectionProbe::*)()>(&::UnityEngine::ReflectionProbe::get_backgroundColor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6a77c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_backgroundColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_backgroundColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ReflectionProbe::*)(::UnityEngine::Color)>(&::UnityEngine::ReflectionProbe::set_backgroundColor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6a77d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_backgroundColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_blendDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ReflectionProbe::*)()>(&::UnityEngine::ReflectionProbe::get_blendDistance)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a77e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_blendDistance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_blendDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ReflectionProbe::*)(float_t)>(&::UnityEngine::ReflectionProbe::set_blendDistance)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a77f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_blendDistance", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_boxProjection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ReflectionProbe::*)()>(&::UnityEngine::ReflectionProbe::get_boxProjection)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a78050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_boxProjection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_boxProjection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ReflectionProbe::*)(bool)>(&::UnityEngine::ReflectionProbe::set_boxProjection)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a78134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_boxProjection", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_mode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ReflectionProbeMode (::UnityEngine::ReflectionProbe::*)()>(&::UnityEngine::ReflectionProbe::get_mode)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a78230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_mode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_mode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ReflectionProbe::*)(::UnityEngine::Rendering::ReflectionProbeMode)>(&::UnityEngine::ReflectionProbe::set_mode)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a78314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_mode", {}, { ::i2c::type_of<::UnityEngine::Rendering::ReflectionProbeMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_importance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ReflectionProbe::*)()>(&::UnityEngine::ReflectionProbe::get_importance)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a78410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_importance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_importance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ReflectionProbe::*)(int32_t)>(&::UnityEngine::ReflectionProbe::set_importance)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a784f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_importance", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_refreshMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ReflectionProbeRefreshMode (::UnityEngine::ReflectionProbe::*)()>(&::UnityEngine::ReflectionProbe::get_refreshMode)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a785f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_refreshMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_refreshMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ReflectionProbe::*)(::UnityEngine::Rendering::ReflectionProbeRefreshMode)>(
    &::UnityEngine::ReflectionProbe::set_refreshMode)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a786d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_refreshMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::ReflectionProbeRefreshMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_timeSlicingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode (::UnityEngine::ReflectionProbe::*)()>(
    &::UnityEngine::ReflectionProbe::get_timeSlicingMode)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a787d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_timeSlicingMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_timeSlicingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ReflectionProbe::*)(::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode)>(
    &::UnityEngine::ReflectionProbe::set_timeSlicingMode)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a788b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_timeSlicingMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_bakedTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (::UnityEngine::ReflectionProbe::*)()>(&::UnityEngine::ReflectionProbe::get_bakedTexture)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6a789b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_bakedTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_bakedTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ReflectionProbe::*)(::UnityEngine::Texture*)>(&::UnityEngine::ReflectionProbe::set_bakedTexture)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6a78b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_bakedTexture", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_customBakedTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (::UnityEngine::ReflectionProbe::*)()>(&::UnityEngine::ReflectionProbe::get_customBakedTexture)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6a78c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_customBakedTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_customBakedTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ReflectionProbe::*)(::UnityEngine::Texture*)>(&::UnityEngine::ReflectionProbe::set_customBakedTexture)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6a78e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_customBakedTexture", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_realtimeTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::UnityEngine::ReflectionProbe::*)()>(&::UnityEngine::ReflectionProbe::get_realtimeTexture)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6a78f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_realtimeTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_realtimeTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ReflectionProbe::*)(::UnityEngine::RenderTexture*)>(&::UnityEngine::ReflectionProbe::set_realtimeTexture)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6a79124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_realtimeTexture", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_texture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (::UnityEngine::ReflectionProbe::*)()>(&::UnityEngine::ReflectionProbe::get_texture)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6a79250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_texture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_textureHDRDecodeValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::ReflectionProbe::*)()>(&::UnityEngine::ReflectionProbe::get_textureHDRDecodeValues)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6a79404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_textureHDRDecodeValues", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ReflectionProbe::*)()>(&::UnityEngine::ReflectionProbe::Reset)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a7950c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.RenderProbe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ReflectionProbe::*)()>(&::UnityEngine::ReflectionProbe::RenderProbe)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6a795f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "RenderProbe", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.RenderProbe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ReflectionProbe::*)(::UnityEngine::RenderTexture*)>(&::UnityEngine::ReflectionProbe::RenderProbe)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6a79610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "RenderProbe", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.IsFinishedRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ReflectionProbe::*)(int32_t)>(&::UnityEngine::ReflectionProbe::IsFinishedRendering)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6a7972c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "IsFinishedRendering", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.ScheduleRender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ReflectionProbe::*)(::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode, ::UnityEngine::RenderTexture*)>(
    &::UnityEngine::ReflectionProbe::ScheduleRender)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6a7963c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                         { "ScheduleRender", {}, { ::i2c::type_of<::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode>(), ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.BlendCubemap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Texture*, ::UnityEngine::Texture*, float_t, ::UnityEngine::RenderTexture*)>(
    &::UnityEngine::ReflectionProbe::BlendCubemap)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6a7987c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "BlendCubemap",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Texture*>(),
                                                                                                        ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.UpdateCachedState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::ReflectionProbe::UpdateCachedState)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a799f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "UpdateCachedState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_minBakedCubemapResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::ReflectionProbe::get_minBakedCubemapResolution)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a79a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_minBakedCubemapResolution", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_maxBakedCubemapResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::ReflectionProbe::get_maxBakedCubemapResolution)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a79a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_maxBakedCubemapResolution", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_defaultTextureHDRDecodeValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)()>(&::UnityEngine::ReflectionProbe::get_defaultTextureHDRDecodeValues)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6a79a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_defaultTextureHDRDecodeValues", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_defaultTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (*)()>(&::UnityEngine::ReflectionProbe::get_defaultTexture)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6a79b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_defaultTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.add_reflectionProbeChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>*)>(
    &::UnityEngine::ReflectionProbe::add_reflectionProbeChanged)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6a79c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
            { "add_reflectionProbeChanged", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.remove_reflectionProbeChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>*)>(
    &::UnityEngine::ReflectionProbe::remove_reflectionProbeChanged)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6a79da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
            { "remove_reflectionProbeChanged", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.CallReflectionProbeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ReflectionProbe*, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent)>(
    &::UnityEngine::ReflectionProbe::CallReflectionProbeEvent)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6a79ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                            { "CallReflectionProbeEvent", {}, { ::i2c::type_of<::UnityEngine::ReflectionProbe*>(), ::i2c::type_of<::UnityEngine::ReflectionProbe_ReflectionProbeEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.add_defaultReflectionSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::Cubemap>>*)>(&::UnityEngine::ReflectionProbe::add_defaultReflectionSet)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x6a79f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "add_defaultReflectionSet", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Cubemap>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.remove_defaultReflectionSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::Cubemap>>*)>(&::UnityEngine::ReflectionProbe::remove_defaultReflectionSet)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6a7a34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "remove_defaultReflectionSet", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Cubemap>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.add_defaultReflectionTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::Texture>>*)>(&::UnityEngine::ReflectionProbe::add_defaultReflectionTexture)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x6a7a12c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "add_defaultReflectionTexture", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.remove_defaultReflectionTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::Texture>>*)>(&::UnityEngine::ReflectionProbe::remove_defaultReflectionTexture)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6a7a494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                                             { "remove_defaultReflectionTexture", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.CallSetDefaultReflection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture*)>(&::UnityEngine::ReflectionProbe::CallSetDefaultReflection)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6a7a520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "CallSetDefaultReflection", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ReflectionProbe::*)()>(&::UnityEngine::ReflectionProbe::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a7a664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_type_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ReflectionProbeType (*)(::System::IntPtr)>(&::UnityEngine::ReflectionProbe::get_type_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a764e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_type_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_type_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::ReflectionProbeType)>(&::UnityEngine::ReflectionProbe::set_type_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a765dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                                             { "set_type_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ReflectionProbeType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_size_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ReflectionProbe::get_size_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a766e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                                             { "get_size_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_size_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ReflectionProbe::set_size_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a767ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                                             { "set_size_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_center_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ReflectionProbe::get_center_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a768f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                                             { "get_center_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_center_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::ReflectionProbe::set_center_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a769fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                                             { "set_center_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_nearClipPlane_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::ReflectionProbe::get_nearClipPlane_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a76ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_nearClipPlane_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_nearClipPlane_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::ReflectionProbe::set_nearClipPlane_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a76bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_nearClipPlane_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_farClipPlane_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::ReflectionProbe::get_farClipPlane_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a76cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_farClipPlane_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_farClipPlane_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::ReflectionProbe::set_farClipPlane_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a76dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_farClipPlane_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_intensity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::ReflectionProbe::get_intensity_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a76eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_intensity_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_intensity_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::ReflectionProbe::set_intensity_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a76fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_intensity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_bounds_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bounds>)>(&::UnityEngine::ReflectionProbe::get_bounds_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a770d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                                             { "get_bounds_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_hdr_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ReflectionProbe::get_hdr_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a771bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_hdr_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_hdr_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::ReflectionProbe::set_hdr_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a772b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_hdr_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_renderDynamicObjects_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ReflectionProbe::get_renderDynamicObjects_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a7739c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_renderDynamicObjects_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_renderDynamicObjects_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::ReflectionProbe::set_renderDynamicObjects_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a77490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_renderDynamicObjects_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_shadowDistance_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::ReflectionProbe::get_shadowDistance_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a7757c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_shadowDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_shadowDistance_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::ReflectionProbe::set_shadowDistance_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a77670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                                                                           { "set_shadowDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_resolution_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::ReflectionProbe::get_resolution_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a77764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_resolution_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_resolution_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::ReflectionProbe::set_resolution_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a77858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_resolution_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_cullingMask_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::ReflectionProbe::get_cullingMask_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a77944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_cullingMask_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_cullingMask_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::ReflectionProbe::set_cullingMask_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a77a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_cullingMask_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_clearFlags_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ReflectionProbeClearFlags (*)(::System::IntPtr)>(&::UnityEngine::ReflectionProbe::get_clearFlags_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a77b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_clearFlags_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_clearFlags_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::ReflectionProbeClearFlags)>(&::UnityEngine::ReflectionProbe::set_clearFlags_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a77c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                                { "set_clearFlags_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ReflectionProbeClearFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_backgroundColor_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Color>)>(&::UnityEngine::ReflectionProbe::get_backgroundColor_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a77d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                                             { "get_backgroundColor_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_backgroundColor_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Color>)>(&::UnityEngine::ReflectionProbe::set_backgroundColor_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a77e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                                             { "set_backgroundColor_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_blendDistance_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::ReflectionProbe::get_blendDistance_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a77f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_blendDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_blendDistance_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::ReflectionProbe::set_blendDistance_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a78004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_blendDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_boxProjection_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::ReflectionProbe::get_boxProjection_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a780f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_boxProjection_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_boxProjection_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::ReflectionProbe::set_boxProjection_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a781ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_boxProjection_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_mode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ReflectionProbeMode (*)(::System::IntPtr)>(&::UnityEngine::ReflectionProbe::get_mode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a782d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_mode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_mode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::ReflectionProbeMode)>(&::UnityEngine::ReflectionProbe::set_mode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a783cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                                             { "set_mode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ReflectionProbeMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_importance_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::ReflectionProbe::get_importance_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a784b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_importance_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_importance_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::ReflectionProbe::set_importance_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a785ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_importance_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_refreshMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ReflectionProbeRefreshMode (*)(::System::IntPtr)>(&::UnityEngine::ReflectionProbe::get_refreshMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a78698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_refreshMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_refreshMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::ReflectionProbeRefreshMode)>(&::UnityEngine::ReflectionProbe::set_refreshMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a7878c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                                { "set_refreshMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ReflectionProbeRefreshMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_timeSlicingMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode (*)(::System::IntPtr)>(&::UnityEngine::ReflectionProbe::get_timeSlicingMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a78878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_timeSlicingMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_timeSlicingMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode)>(
    &::UnityEngine::ReflectionProbe::set_timeSlicingMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a7896c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                         { "set_timeSlicingMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_bakedTexture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::ReflectionProbe::get_bakedTexture_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a78b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_bakedTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_bakedTexture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::ReflectionProbe::set_bakedTexture_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a78c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_bakedTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_customBakedTexture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::ReflectionProbe::get_customBakedTexture_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a78e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_customBakedTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_customBakedTexture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::ReflectionProbe::set_customBakedTexture_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a78f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                                             { "set_customBakedTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_realtimeTexture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::ReflectionProbe::get_realtimeTexture_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a790e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_realtimeTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.set_realtimeTexture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::ReflectionProbe::set_realtimeTexture_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a7920c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_realtimeTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_texture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::ReflectionProbe::get_texture_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a793c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_texture_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_textureHDRDecodeValues_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector4>)>(&::UnityEngine::ReflectionProbe::get_textureHDRDecodeValues_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a794c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                                { "get_textureHDRDecodeValues_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.Reset_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::ReflectionProbe::Reset_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a795b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "Reset_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.IsFinishedRendering_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t)>(&::UnityEngine::ReflectionProbe::IsFinishedRendering_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a797e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                                                                           { "IsFinishedRendering_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.ScheduleRender_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode, ::System::IntPtr)>(
    &::UnityEngine::ReflectionProbe::ScheduleRender_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a79828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                         { "ScheduleRender_Injected",
                                           {},
                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.BlendCubemap_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, float_t, ::System::IntPtr)>(&::UnityEngine::ReflectionProbe::BlendCubemap_Injected)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6a79994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                         { "BlendCubemap_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_defaultTextureHDRDecodeValues_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector4>)>(&::UnityEngine::ReflectionProbe::get_defaultTextureHDRDecodeValues_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a79afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_defaultTextureHDRDecodeValues_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.get_defaultTexture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::ReflectionProbe::get_defaultTexture_Injected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a79c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_defaultTexture_Injected", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::ReflectionProbe::setStaticF_reflectionProbeChanged(::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>*, "reflectionProbeChanged",
                                    ::UnityEngine::ReflectionProbe*>(
      std::forward<::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>*>(value));
}
inline ::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>* UnityEngine::ReflectionProbe::getStaticF_reflectionProbeChanged() {
  return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>*, "reflectionProbeChanged",
                                           ::UnityEngine::ReflectionProbe*>();
}
inline void
UnityEngine::ReflectionProbe::setStaticF_registeredDefaultReflectionSetActions(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action_1<::UnityW<::UnityEngine::Texture>>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*, "registeredDefaultReflectionSetActions",
                                    ::UnityEngine::ReflectionProbe*>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action_1<::UnityW<::UnityEngine::Texture>>*>* UnityEngine::ReflectionProbe::getStaticF_registeredDefaultReflectionSetActions() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*, "registeredDefaultReflectionSetActions",
                                           ::UnityEngine::ReflectionProbe*>();
}
inline void UnityEngine::ReflectionProbe::setStaticF_registeredDefaultReflectionTextureActions(::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*, "registeredDefaultReflectionTextureActions",
                                    ::UnityEngine::ReflectionProbe*>(std::forward<::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>* UnityEngine::ReflectionProbe::getStaticF_registeredDefaultReflectionTextureActions() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*, "registeredDefaultReflectionTextureActions",
                                           ::UnityEngine::ReflectionProbe*>();
}
inline ::UnityEngine::Rendering::ReflectionProbeType UnityEngine::ReflectionProbe::get_type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ReflectionProbeType>(this, ___internal_method);
}
inline void UnityEngine::ReflectionProbe::set_type(::UnityEngine::Rendering::ReflectionProbeType value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_type", {}, { ::i2c::type_of<::UnityEngine::Rendering::ReflectionProbeType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::ReflectionProbe::get_size() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_size", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::ReflectionProbe::set_size(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_size", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::ReflectionProbe::get_center() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_center", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::ReflectionProbe::set_center(::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_center", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ReflectionProbe::get_nearClipPlane() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_nearClipPlane", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ReflectionProbe::set_nearClipPlane(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_nearClipPlane", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ReflectionProbe::get_farClipPlane() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_farClipPlane", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ReflectionProbe::set_farClipPlane(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_farClipPlane", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ReflectionProbe::get_intensity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_intensity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ReflectionProbe::set_intensity(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_intensity", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Bounds UnityEngine::ReflectionProbe::get_bounds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_bounds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline bool UnityEngine::ReflectionProbe::get_hdr() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_hdr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ReflectionProbe::set_hdr(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_hdr", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ReflectionProbe::get_renderDynamicObjects() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_renderDynamicObjects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ReflectionProbe::set_renderDynamicObjects(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_renderDynamicObjects", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ReflectionProbe::get_shadowDistance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_shadowDistance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ReflectionProbe::set_shadowDistance(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_shadowDistance", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::ReflectionProbe::get_resolution() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_resolution", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::ReflectionProbe::set_resolution(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_resolution", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::ReflectionProbe::get_cullingMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_cullingMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::ReflectionProbe::set_cullingMask(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_cullingMask", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::ReflectionProbeClearFlags UnityEngine::ReflectionProbe::get_clearFlags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_clearFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ReflectionProbeClearFlags>(this, ___internal_method);
}
inline void UnityEngine::ReflectionProbe::set_clearFlags(::UnityEngine::Rendering::ReflectionProbeClearFlags value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_clearFlags", {}, { ::i2c::type_of<::UnityEngine::Rendering::ReflectionProbeClearFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color UnityEngine::ReflectionProbe::get_backgroundColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_backgroundColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void UnityEngine::ReflectionProbe::set_backgroundColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_backgroundColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::ReflectionProbe::get_blendDistance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_blendDistance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ReflectionProbe::set_blendDistance(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_blendDistance", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::ReflectionProbe::get_boxProjection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_boxProjection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ReflectionProbe::set_boxProjection(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_boxProjection", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::ReflectionProbeMode UnityEngine::ReflectionProbe::get_mode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_mode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ReflectionProbeMode>(this, ___internal_method);
}
inline void UnityEngine::ReflectionProbe::set_mode(::UnityEngine::Rendering::ReflectionProbeMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_mode", {}, { ::i2c::type_of<::UnityEngine::Rendering::ReflectionProbeMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::ReflectionProbe::get_importance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_importance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::ReflectionProbe::set_importance(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_importance", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::ReflectionProbeRefreshMode UnityEngine::ReflectionProbe::get_refreshMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_refreshMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ReflectionProbeRefreshMode>(this, ___internal_method);
}
inline void UnityEngine::ReflectionProbe::set_refreshMode(::UnityEngine::Rendering::ReflectionProbeRefreshMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_refreshMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::ReflectionProbeRefreshMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode UnityEngine::ReflectionProbe::get_timeSlicingMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_timeSlicingMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode>(this, ___internal_method);
}
inline void UnityEngine::ReflectionProbe::set_timeSlicingMode(::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_timeSlicingMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::ReflectionProbe::get_bakedTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_bakedTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(this, ___internal_method);
}
inline void UnityEngine::ReflectionProbe::set_bakedTexture(::UnityEngine::Texture* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_bakedTexture", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::ReflectionProbe::get_customBakedTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_customBakedTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(this, ___internal_method);
}
inline void UnityEngine::ReflectionProbe::set_customBakedTexture(::UnityEngine::Texture* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_customBakedTexture", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::ReflectionProbe::get_realtimeTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_realtimeTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
inline void UnityEngine::ReflectionProbe::set_realtimeTexture(::UnityEngine::RenderTexture* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_realtimeTexture", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::ReflectionProbe::get_texture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_texture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 UnityEngine::ReflectionProbe::get_textureHDRDecodeValues() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_textureHDRDecodeValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline void UnityEngine::ReflectionProbe::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::ReflectionProbe::RenderProbe() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "RenderProbe", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::ReflectionProbe::RenderProbe(::UnityEngine::RenderTexture* targetTexture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "RenderProbe", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, targetTexture);
}
inline bool UnityEngine::ReflectionProbe::IsFinishedRendering(int32_t renderId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "IsFinishedRendering", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, renderId);
}
inline int32_t UnityEngine::ReflectionProbe::ScheduleRender(::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode timeSlicingMode, ::UnityEngine::RenderTexture* targetTexture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                       { "ScheduleRender", {}, { ::i2c::type_of<::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode>(), ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, timeSlicingMode, targetTexture);
}
inline bool UnityEngine::ReflectionProbe::BlendCubemap(::UnityEngine::Texture* src, ::UnityEngine::Texture* dst, float_t blend, ::UnityEngine::RenderTexture* target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "BlendCubemap",
                                                                                                                 {},
                                                                                                                 { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Texture*>(),
                                                                                                                   ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, src, dst, blend, target);
}
inline void UnityEngine::ReflectionProbe::UpdateCachedState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "UpdateCachedState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::ReflectionProbe::get_minBakedCubemapResolution() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_minBakedCubemapResolution", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::ReflectionProbe::get_maxBakedCubemapResolution() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_maxBakedCubemapResolution", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector4 UnityEngine::ReflectionProbe::get_defaultTextureHDRDecodeValues() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_defaultTextureHDRDecodeValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::ReflectionProbe::get_defaultTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_defaultTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(nullptr, ___internal_method);
}
inline void UnityEngine::ReflectionProbe::add_reflectionProbeChanged(::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
          { "add_reflectionProbeChanged", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::ReflectionProbe::remove_reflectionProbeChanged(::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
          { "remove_reflectionProbeChanged", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::ReflectionProbe::CallReflectionProbeEvent(::UnityEngine::ReflectionProbe* probe, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent probeEvent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                          { "CallReflectionProbeEvent", {}, { ::i2c::type_of<::UnityEngine::ReflectionProbe*>(), ::i2c::type_of<::UnityEngine::ReflectionProbe_ReflectionProbeEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, probe, probeEvent);
}
inline void UnityEngine::ReflectionProbe::add_defaultReflectionSet(::System::Action_1<::UnityW<::UnityEngine::Cubemap>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "add_defaultReflectionSet", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Cubemap>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::ReflectionProbe::remove_defaultReflectionSet(::System::Action_1<::UnityW<::UnityEngine::Cubemap>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "remove_defaultReflectionSet", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Cubemap>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::ReflectionProbe::add_defaultReflectionTexture(::System::Action_1<::UnityW<::UnityEngine::Texture>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "add_defaultReflectionTexture", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::ReflectionProbe::remove_defaultReflectionTexture(::System::Action_1<::UnityW<::UnityEngine::Texture>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "remove_defaultReflectionTexture", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::ReflectionProbe::CallSetDefaultReflection(::UnityEngine::Texture* defaultReflectionCubemap) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "CallSetDefaultReflection", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, defaultReflectionCubemap);
}
inline void UnityEngine::ReflectionProbe::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ReflectionProbeType UnityEngine::ReflectionProbe::get_type_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_type_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ReflectionProbeType>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ReflectionProbe::set_type_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::ReflectionProbeType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                                           { "set_type_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ReflectionProbeType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ReflectionProbe::get_size_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                                           { "get_size_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ReflectionProbe::set_size_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                                           { "set_size_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ReflectionProbe::get_center_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                                           { "get_center_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ReflectionProbe::set_center_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                                           { "set_center_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::ReflectionProbe::get_nearClipPlane_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_nearClipPlane_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ReflectionProbe::set_nearClipPlane_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_nearClipPlane_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::ReflectionProbe::get_farClipPlane_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_farClipPlane_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ReflectionProbe::set_farClipPlane_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_farClipPlane_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::ReflectionProbe::get_intensity_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_intensity_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ReflectionProbe::set_intensity_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_intensity_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ReflectionProbe::get_bounds_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bounds> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                                           { "get_bounds_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline bool UnityEngine::ReflectionProbe::get_hdr_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_hdr_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ReflectionProbe::set_hdr_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_hdr_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::ReflectionProbe::get_renderDynamicObjects_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_renderDynamicObjects_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ReflectionProbe::set_renderDynamicObjects_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                                                                         { "set_renderDynamicObjects_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::ReflectionProbe::get_shadowDistance_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_shadowDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ReflectionProbe::set_shadowDistance_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_shadowDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::ReflectionProbe::get_resolution_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_resolution_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ReflectionProbe::set_resolution_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_resolution_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::ReflectionProbe::get_cullingMask_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_cullingMask_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ReflectionProbe::set_cullingMask_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_cullingMask_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Rendering::ReflectionProbeClearFlags UnityEngine::ReflectionProbe::get_clearFlags_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_clearFlags_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ReflectionProbeClearFlags>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ReflectionProbe::set_clearFlags_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::ReflectionProbeClearFlags value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                              { "set_clearFlags_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ReflectionProbeClearFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::ReflectionProbe::get_backgroundColor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Color> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                                           { "get_backgroundColor_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ReflectionProbe::set_backgroundColor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Color> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                                           { "set_backgroundColor_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::ReflectionProbe::get_blendDistance_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_blendDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ReflectionProbe::set_blendDistance_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_blendDistance_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::ReflectionProbe::get_boxProjection_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_boxProjection_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ReflectionProbe::set_boxProjection_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_boxProjection_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Rendering::ReflectionProbeMode UnityEngine::ReflectionProbe::get_mode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_mode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ReflectionProbeMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ReflectionProbe::set_mode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::ReflectionProbeMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                                           { "set_mode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ReflectionProbeMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::ReflectionProbe::get_importance_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_importance_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ReflectionProbe::set_importance_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_importance_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Rendering::ReflectionProbeRefreshMode UnityEngine::ReflectionProbe::get_refreshMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_refreshMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ReflectionProbeRefreshMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ReflectionProbe::set_refreshMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::ReflectionProbeRefreshMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                              { "set_refreshMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ReflectionProbeRefreshMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode UnityEngine::ReflectionProbe::get_timeSlicingMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_timeSlicingMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ReflectionProbe::set_timeSlicingMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                       { "set_timeSlicingMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::System::IntPtr UnityEngine::ReflectionProbe::get_bakedTexture_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_bakedTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ReflectionProbe::set_bakedTexture_Injected(::System::IntPtr _unity_self, ::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_bakedTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::System::IntPtr UnityEngine::ReflectionProbe::get_customBakedTexture_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_customBakedTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ReflectionProbe::set_customBakedTexture_Injected(::System::IntPtr _unity_self, ::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_customBakedTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::System::IntPtr UnityEngine::ReflectionProbe::get_realtimeTexture_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_realtimeTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ReflectionProbe::set_realtimeTexture_Injected(::System::IntPtr _unity_self, ::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "set_realtimeTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::System::IntPtr UnityEngine::ReflectionProbe::get_texture_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_texture_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::ReflectionProbe::get_textureHDRDecodeValues_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector4> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                                                           { "get_textureHDRDecodeValues_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::ReflectionProbe::Reset_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "Reset_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::ReflectionProbe::IsFinishedRendering_Injected(::System::IntPtr _unity_self, int32_t renderId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "IsFinishedRendering_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, renderId);
}
inline int32_t UnityEngine::ReflectionProbe::ScheduleRender_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode timeSlicingMode,
                                                                     ::System::IntPtr targetTexture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
          { "ScheduleRender_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, timeSlicingMode, targetTexture);
}
inline bool UnityEngine::ReflectionProbe::BlendCubemap_Injected(::System::IntPtr src, ::System::IntPtr dst, float_t blend, ::System::IntPtr target) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(),
                          { "BlendCubemap_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, src, dst, blend, target);
}
inline void UnityEngine::ReflectionProbe::get_defaultTextureHDRDecodeValues_Injected(::by_ref<::UnityEngine::Vector4> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_defaultTextureHDRDecodeValues_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline ::System::IntPtr UnityEngine::ReflectionProbe::get_defaultTexture_Injected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ReflectionProbe*>(), { "get_defaultTexture_Injected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::UnityEngine::ReflectionProbe* UnityEngine::ReflectionProbe::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ReflectionProbe*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ReflectionProbe::ReflectionProbe() {}
