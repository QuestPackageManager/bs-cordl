#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UIR\MeshWriteDataPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ImplicitPool_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshWriteDataPool_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshWriteDataPool_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshWriteData_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshWriteDataPool___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::MeshWriteDataPool___c::*)()>(&::UnityEngine::UIElements::UIR::MeshWriteDataPool___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ce61a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshWriteDataPool___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshWriteDataPool___c.__cctor_b__2_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::MeshWriteData* (::UnityEngine::UIElements::UIR::MeshWriteDataPool___c::*)()>(
    &::UnityEngine::UIElements::UIR::MeshWriteDataPool___c::__cctor_b__2_0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ce61a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshWriteDataPool___c*>(), { "<.cctor>b__2_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::MeshWriteDataPool___c::setStaticF___9(::UnityEngine::UIElements::UIR::MeshWriteDataPool___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UIR::MeshWriteDataPool___c*, "<>9", ::UnityEngine::UIElements::UIR::MeshWriteDataPool___c*>(
      std::forward<::UnityEngine::UIElements::UIR::MeshWriteDataPool___c*>(value));
}
inline ::UnityEngine::UIElements::UIR::MeshWriteDataPool___c* UnityEngine::UIElements::UIR::MeshWriteDataPool___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UIR::MeshWriteDataPool___c*, "<>9", ::UnityEngine::UIElements::UIR::MeshWriteDataPool___c*>();
}
inline void UnityEngine::UIElements::UIR::MeshWriteDataPool___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshWriteDataPool___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::MeshWriteData* UnityEngine::UIElements::UIR::MeshWriteDataPool___c::__cctor_b__2_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshWriteDataPool___c*>(), { "<.cctor>b__2_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshWriteData*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::MeshWriteDataPool___c* UnityEngine::UIElements::UIR::MeshWriteDataPool___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::MeshWriteDataPool___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::MeshWriteDataPool___c::MeshWriteDataPool___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshWriteDataPool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::MeshWriteDataPool::*)()>(&::UnityEngine::UIElements::UIR::MeshWriteDataPool::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6ce5ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshWriteDataPool*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::MeshWriteDataPool::setStaticF_k_CreateAction(::System::Func_1<::UnityEngine::UIElements::MeshWriteData*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::UIElements::MeshWriteData*>*, "k_CreateAction", ::UnityEngine::UIElements::UIR::MeshWriteDataPool*>(
      std::forward<::System::Func_1<::UnityEngine::UIElements::MeshWriteData*>*>(value));
}
inline ::System::Func_1<::UnityEngine::UIElements::MeshWriteData*>* UnityEngine::UIElements::UIR::MeshWriteDataPool::getStaticF_k_CreateAction() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::UIElements::MeshWriteData*>*, "k_CreateAction", ::UnityEngine::UIElements::UIR::MeshWriteDataPool*>();
}
inline void UnityEngine::UIElements::UIR::MeshWriteDataPool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshWriteDataPool*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::MeshWriteDataPool* UnityEngine::UIElements::UIR::MeshWriteDataPool::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::MeshWriteDataPool*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::MeshWriteDataPool::MeshWriteDataPool() {}
