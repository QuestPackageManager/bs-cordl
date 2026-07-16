#pragma once
// IWYU pragma private; include "UnityEngine/VFX/EventAttributeFloat.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/VFX/zzzz__EventAttributeValue_1_impl.hpp"
#include "UnityEngine/VFX/zzzz__EventAttributeFloat_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "UnityEngine/VFX/zzzz__EventAttributeFloat_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXEventAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::EventAttributeFloat___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::EventAttributeFloat___c::*)()>(&::UnityEngine::VFX::EventAttributeFloat___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69cd5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeFloat___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::EventAttributeFloat___c.__ctor_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::VFX::EventAttributeFloat___c::*)(::UnityEngine::VFX::VFXEventAttribute*, int32_t)>(
    &::UnityEngine::VFX::EventAttributeFloat___c::__ctor_b__0_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x69cd5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeFloat___c*>(),
                                                             { "<.ctor>b__0_0", {}, { ::i2c::type_of<::UnityEngine::VFX::VFXEventAttribute*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::EventAttributeFloat___c.__ctor_b__0_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::EventAttributeFloat___c::*)(::UnityEngine::VFX::VFXEventAttribute*, int32_t, float_t)>(
    &::UnityEngine::VFX::EventAttributeFloat___c::__ctor_b__0_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x69cd5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeFloat___c*>(),
                                                { "<.ctor>b__0_1", {}, { ::i2c::type_of<::UnityEngine::VFX::VFXEventAttribute*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::VFX::EventAttributeFloat___c::setStaticF___9(::UnityEngine::VFX::EventAttributeFloat___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::VFX::EventAttributeFloat___c*, "<>9", ::UnityEngine::VFX::EventAttributeFloat___c*>(
      std::forward<::UnityEngine::VFX::EventAttributeFloat___c*>(value));
}
inline ::UnityEngine::VFX::EventAttributeFloat___c* UnityEngine::VFX::EventAttributeFloat___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::VFX::EventAttributeFloat___c*, "<>9", ::UnityEngine::VFX::EventAttributeFloat___c*>();
}
inline void UnityEngine::VFX::EventAttributeFloat___c::setStaticF___9__0_0(::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>*, "<>9__0_0", ::UnityEngine::VFX::EventAttributeFloat___c*>(
      std::forward<::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>*>(value));
}
inline ::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>* UnityEngine::VFX::EventAttributeFloat___c::getStaticF___9__0_0() {
  return ::cordl_internals::getStaticField<::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>*, "<>9__0_0", ::UnityEngine::VFX::EventAttributeFloat___c*>();
}
inline void UnityEngine::VFX::EventAttributeFloat___c::setStaticF___9__0_1(::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, float_t>*, "<>9__0_1", ::UnityEngine::VFX::EventAttributeFloat___c*>(
      std::forward<::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, float_t>*>(value));
}
inline ::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, float_t>* UnityEngine::VFX::EventAttributeFloat___c::getStaticF___9__0_1() {
  return ::cordl_internals::getStaticField<::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, float_t>*, "<>9__0_1", ::UnityEngine::VFX::EventAttributeFloat___c*>();
}
inline void UnityEngine::VFX::EventAttributeFloat___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeFloat___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::VFX::EventAttributeFloat___c::__ctor_b__0_0(::UnityEngine::VFX::VFXEventAttribute* e, int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeFloat___c*>(),
                                                           { "<.ctor>b__0_0", {}, { ::i2c::type_of<::UnityEngine::VFX::VFXEventAttribute*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e, id);
}
inline void UnityEngine::VFX::EventAttributeFloat___c::__ctor_b__0_1(::UnityEngine::VFX::VFXEventAttribute* e, int32_t id, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeFloat___c*>(),
                                              { "<.ctor>b__0_1", {}, { ::i2c::type_of<::UnityEngine::VFX::VFXEventAttribute*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, id, value);
}
inline ::UnityEngine::VFX::EventAttributeFloat___c* UnityEngine::VFX::EventAttributeFloat___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::EventAttributeFloat___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::EventAttributeFloat___c::EventAttributeFloat___c() {}
//  Writing Method size for method: ::UnityEngine::VFX::EventAttributeFloat._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::EventAttributeFloat::*)()>(&::UnityEngine::VFX::EventAttributeFloat::_ctor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x69cd408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeFloat*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::VFX::EventAttributeFloat::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeFloat*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::EventAttributeFloat* UnityEngine::VFX::EventAttributeFloat::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::EventAttributeFloat*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::EventAttributeFloat::EventAttributeFloat() {}
