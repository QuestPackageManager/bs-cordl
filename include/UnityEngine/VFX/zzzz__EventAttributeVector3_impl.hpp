#pragma once
// IWYU pragma private; include "UnityEngine/VFX/EventAttributeVector3.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/VFX/zzzz__EventAttributeValue_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/VFX/zzzz__EventAttributeVector3_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "UnityEngine/VFX/zzzz__EventAttributeVector3_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXEventAttribute_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::EventAttributeVector3___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::EventAttributeVector3___c::*)()>(&::UnityEngine::VFX::EventAttributeVector3___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69cd9fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeVector3___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::EventAttributeVector3___c.__ctor_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::VFX::EventAttributeVector3___c::*)(::UnityEngine::VFX::VFXEventAttribute*, int32_t)>(
    &::UnityEngine::VFX::EventAttributeVector3___c::__ctor_b__0_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x69cda00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeVector3___c*>(),
                                                             { "<.ctor>b__0_0", {}, { ::i2c::type_of<::UnityEngine::VFX::VFXEventAttribute*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::EventAttributeVector3___c.__ctor_b__0_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::EventAttributeVector3___c::*)(::UnityEngine::VFX::VFXEventAttribute*, int32_t, ::UnityEngine::Vector3)>(
    &::UnityEngine::VFX::EventAttributeVector3___c::__ctor_b__0_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x69cda1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeVector3___c*>(),
                                         { "<.ctor>b__0_1", {}, { ::i2c::type_of<::UnityEngine::VFX::VFXEventAttribute*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::VFX::EventAttributeVector3___c::setStaticF___9(::UnityEngine::VFX::EventAttributeVector3___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::VFX::EventAttributeVector3___c*, "<>9", ::UnityEngine::VFX::EventAttributeVector3___c*>(
      std::forward<::UnityEngine::VFX::EventAttributeVector3___c*>(value));
}
inline ::UnityEngine::VFX::EventAttributeVector3___c* UnityEngine::VFX::EventAttributeVector3___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::VFX::EventAttributeVector3___c*, "<>9", ::UnityEngine::VFX::EventAttributeVector3___c*>();
}
inline void UnityEngine::VFX::EventAttributeVector3___c::setStaticF___9__0_0(::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>*, "<>9__0_0", ::UnityEngine::VFX::EventAttributeVector3___c*>(
      std::forward<::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>*>(value));
}
inline ::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>* UnityEngine::VFX::EventAttributeVector3___c::getStaticF___9__0_0() {
  return ::cordl_internals::getStaticField<::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>*, "<>9__0_0", ::UnityEngine::VFX::EventAttributeVector3___c*>();
}
inline void UnityEngine::VFX::EventAttributeVector3___c::setStaticF___9__0_1(::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, ::UnityEngine::Vector3>* value) {
  ::cordl_internals::setStaticField<::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, ::UnityEngine::Vector3>*, "<>9__0_1", ::UnityEngine::VFX::EventAttributeVector3___c*>(
      std::forward<::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, ::UnityEngine::Vector3>*>(value));
}
inline ::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, ::UnityEngine::Vector3>* UnityEngine::VFX::EventAttributeVector3___c::getStaticF___9__0_1() {
  return ::cordl_internals::getStaticField<::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, ::UnityEngine::Vector3>*, "<>9__0_1", ::UnityEngine::VFX::EventAttributeVector3___c*>();
}
inline void UnityEngine::VFX::EventAttributeVector3___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeVector3___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::VFX::EventAttributeVector3___c::__ctor_b__0_0(::UnityEngine::VFX::VFXEventAttribute* e, int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeVector3___c*>(),
                                                           { "<.ctor>b__0_0", {}, { ::i2c::type_of<::UnityEngine::VFX::VFXEventAttribute*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e, id);
}
inline void UnityEngine::VFX::EventAttributeVector3___c::__ctor_b__0_1(::UnityEngine::VFX::VFXEventAttribute* e, int32_t id, ::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeVector3___c*>(),
                                       { "<.ctor>b__0_1", {}, { ::i2c::type_of<::UnityEngine::VFX::VFXEventAttribute*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, id, value);
}
inline ::UnityEngine::VFX::EventAttributeVector3___c* UnityEngine::VFX::EventAttributeVector3___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::EventAttributeVector3___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::EventAttributeVector3___c::EventAttributeVector3___c() {}
//  Writing Method size for method: ::UnityEngine::VFX::EventAttributeVector3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::EventAttributeVector3::*)()>(&::UnityEngine::VFX::EventAttributeVector3::_ctor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x69cd828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeVector3*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::VFX::EventAttributeVector3::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeVector3*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::EventAttributeVector3* UnityEngine::VFX::EventAttributeVector3::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::EventAttributeVector3*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::EventAttributeVector3::EventAttributeVector3() {}
