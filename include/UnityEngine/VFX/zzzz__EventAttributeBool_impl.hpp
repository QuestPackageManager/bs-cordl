#pragma once
// IWYU pragma private; include "UnityEngine/VFX/EventAttributeBool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/VFX/zzzz__EventAttributeValue_1_impl.hpp"
#include "UnityEngine/VFX/zzzz__EventAttributeBool_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "UnityEngine/VFX/zzzz__EventAttributeBool_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXEventAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::EventAttributeBool___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::EventAttributeBool___c::*)()>(&::UnityEngine::VFX::EventAttributeBool___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69ce248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeBool___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::EventAttributeBool___c.__ctor_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::VFX::EventAttributeBool___c::*)(::UnityEngine::VFX::VFXEventAttribute*, int32_t)>(
    &::UnityEngine::VFX::EventAttributeBool___c::__ctor_b__0_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x69ce24c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeBool___c*>(),
                                                             { "<.ctor>b__0_0", {}, { ::i2c::type_of<::UnityEngine::VFX::VFXEventAttribute*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::EventAttributeBool___c.__ctor_b__0_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::EventAttributeBool___c::*)(::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool)>(
    &::UnityEngine::VFX::EventAttributeBool___c::__ctor_b__0_1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x69ce268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeBool___c*>(),
                                                { "<.ctor>b__0_1", {}, { ::i2c::type_of<::UnityEngine::VFX::VFXEventAttribute*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::VFX::EventAttributeBool___c::setStaticF___9(::UnityEngine::VFX::EventAttributeBool___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::VFX::EventAttributeBool___c*, "<>9", ::UnityEngine::VFX::EventAttributeBool___c*>(std::forward<::UnityEngine::VFX::EventAttributeBool___c*>(value));
}
inline ::UnityEngine::VFX::EventAttributeBool___c* UnityEngine::VFX::EventAttributeBool___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::VFX::EventAttributeBool___c*, "<>9", ::UnityEngine::VFX::EventAttributeBool___c*>();
}
inline void UnityEngine::VFX::EventAttributeBool___c::setStaticF___9__0_0(::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>*, "<>9__0_0", ::UnityEngine::VFX::EventAttributeBool___c*>(
      std::forward<::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>*>(value));
}
inline ::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>* UnityEngine::VFX::EventAttributeBool___c::getStaticF___9__0_0() {
  return ::cordl_internals::getStaticField<::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>*, "<>9__0_0", ::UnityEngine::VFX::EventAttributeBool___c*>();
}
inline void UnityEngine::VFX::EventAttributeBool___c::setStaticF___9__0_1(::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>* value) {
  ::cordl_internals::setStaticField<::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>*, "<>9__0_1", ::UnityEngine::VFX::EventAttributeBool___c*>(
      std::forward<::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>*>(value));
}
inline ::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>* UnityEngine::VFX::EventAttributeBool___c::getStaticF___9__0_1() {
  return ::cordl_internals::getStaticField<::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>*, "<>9__0_1", ::UnityEngine::VFX::EventAttributeBool___c*>();
}
inline void UnityEngine::VFX::EventAttributeBool___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeBool___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::VFX::EventAttributeBool___c::__ctor_b__0_0(::UnityEngine::VFX::VFXEventAttribute* e, int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeBool___c*>(),
                                                           { "<.ctor>b__0_0", {}, { ::i2c::type_of<::UnityEngine::VFX::VFXEventAttribute*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e, id);
}
inline void UnityEngine::VFX::EventAttributeBool___c::__ctor_b__0_1(::UnityEngine::VFX::VFXEventAttribute* e, int32_t id, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeBool___c*>(),
                                                           { "<.ctor>b__0_1", {}, { ::i2c::type_of<::UnityEngine::VFX::VFXEventAttribute*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, id, value);
}
inline ::UnityEngine::VFX::EventAttributeBool___c* UnityEngine::VFX::EventAttributeBool___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::EventAttributeBool___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::EventAttributeBool___c::EventAttributeBool___c() {}
//  Writing Method size for method: ::UnityEngine::VFX::EventAttributeBool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::EventAttributeBool::*)()>(&::UnityEngine::VFX::EventAttributeBool::_ctor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x69ce074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeBool*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::VFX::EventAttributeBool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeBool*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::EventAttributeBool* UnityEngine::VFX::EventAttributeBool::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::EventAttributeBool*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::EventAttributeBool::EventAttributeBool() {}
