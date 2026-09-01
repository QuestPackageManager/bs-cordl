#pragma once
// IWYU pragma private; include "UnityEngine\VFX\EventAttributeVector4.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/VFX/zzzz__EventAttributeValue_1_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/VFX/zzzz__EventAttributeVector4_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "UnityEngine/VFX/zzzz__EventAttributeVector4_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXEventAttribute_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::EventAttributeVector4___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::EventAttributeVector4___c::*)()>(&::UnityEngine::VFX::EventAttributeVector4___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69d3428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeVector4___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::EventAttributeVector4___c.__ctor_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::VFX::EventAttributeVector4___c::*)(::UnityEngine::VFX::VFXEventAttribute*, int32_t)>(
    &::UnityEngine::VFX::EventAttributeVector4___c::__ctor_b__0_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x69d342c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeVector4___c*>(),
                                                             { "<.ctor>b__0_0", {}, { ::i2c::type_of<::UnityEngine::VFX::VFXEventAttribute*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::EventAttributeVector4___c.__ctor_b__0_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::EventAttributeVector4___c::*)(::UnityEngine::VFX::VFXEventAttribute*, int32_t, ::UnityEngine::Vector4)>(
    &::UnityEngine::VFX::EventAttributeVector4___c::__ctor_b__0_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x69d3448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeVector4___c*>(),
                                         { "<.ctor>b__0_1", {}, { ::i2c::type_of<::UnityEngine::VFX::VFXEventAttribute*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::VFX::EventAttributeVector4___c::setStaticF___9(::UnityEngine::VFX::EventAttributeVector4___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::VFX::EventAttributeVector4___c*, "<>9", ::UnityEngine::VFX::EventAttributeVector4___c*>(
      std::forward<::UnityEngine::VFX::EventAttributeVector4___c*>(value));
}
inline ::UnityEngine::VFX::EventAttributeVector4___c* UnityEngine::VFX::EventAttributeVector4___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::VFX::EventAttributeVector4___c*, "<>9", ::UnityEngine::VFX::EventAttributeVector4___c*>();
}
inline void UnityEngine::VFX::EventAttributeVector4___c::setStaticF___9__0_0(::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>*, "<>9__0_0", ::UnityEngine::VFX::EventAttributeVector4___c*>(
      std::forward<::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>*>(value));
}
inline ::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>* UnityEngine::VFX::EventAttributeVector4___c::getStaticF___9__0_0() {
  return ::cordl_internals::getStaticField<::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>*, "<>9__0_0", ::UnityEngine::VFX::EventAttributeVector4___c*>();
}
inline void UnityEngine::VFX::EventAttributeVector4___c::setStaticF___9__0_1(::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, ::UnityEngine::Vector4>* value) {
  ::cordl_internals::setStaticField<::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, ::UnityEngine::Vector4>*, "<>9__0_1", ::UnityEngine::VFX::EventAttributeVector4___c*>(
      std::forward<::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, ::UnityEngine::Vector4>*>(value));
}
inline ::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, ::UnityEngine::Vector4>* UnityEngine::VFX::EventAttributeVector4___c::getStaticF___9__0_1() {
  return ::cordl_internals::getStaticField<::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, ::UnityEngine::Vector4>*, "<>9__0_1", ::UnityEngine::VFX::EventAttributeVector4___c*>();
}
inline void UnityEngine::VFX::EventAttributeVector4___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeVector4___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::VFX::EventAttributeVector4___c::__ctor_b__0_0(::UnityEngine::VFX::VFXEventAttribute* e, int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeVector4___c*>(),
                                                           { "<.ctor>b__0_0", {}, { ::i2c::type_of<::UnityEngine::VFX::VFXEventAttribute*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e, id);
}
inline void UnityEngine::VFX::EventAttributeVector4___c::__ctor_b__0_1(::UnityEngine::VFX::VFXEventAttribute* e, int32_t id, ::UnityEngine::Vector4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeVector4___c*>(),
                                       { "<.ctor>b__0_1", {}, { ::i2c::type_of<::UnityEngine::VFX::VFXEventAttribute*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, id, value);
}
inline ::UnityEngine::VFX::EventAttributeVector4___c* UnityEngine::VFX::EventAttributeVector4___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::EventAttributeVector4___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::EventAttributeVector4___c::EventAttributeVector4___c() {}
//  Writing Method size for method: ::UnityEngine::VFX::EventAttributeVector4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::EventAttributeVector4::*)()>(&::UnityEngine::VFX::EventAttributeVector4::_ctor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x69d3254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeVector4*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::VFX::EventAttributeVector4::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeVector4*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::EventAttributeVector4* UnityEngine::VFX::EventAttributeVector4::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::EventAttributeVector4*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::EventAttributeVector4::EventAttributeVector4() {}
