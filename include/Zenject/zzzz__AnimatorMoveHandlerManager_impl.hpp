#pragma once
// IWYU pragma private; include "Zenject/AnimatorMoveHandlerManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__AnimatorMoveHandlerManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IAnimatorMoveHandler_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::Zenject::AnimatorMoveHandlerManager.Construct
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::AnimatorMoveHandlerManager::*)(::System::Collections::Generic::List_1<::Zenject::IAnimatorMoveHandler*>*)>(
    &::Zenject::AnimatorMoveHandlerManager::Construct)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e8a6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::AnimatorMoveHandlerManager*>(),
                                                             { "Construct", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::IAnimatorMoveHandler*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AnimatorMoveHandlerManager.OnAnimatorMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::AnimatorMoveHandlerManager::*)()>(&::Zenject::AnimatorMoveHandlerManager::OnAnimatorMove)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6e8a700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::AnimatorMoveHandlerManager*>(), { "OnAnimatorMove", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AnimatorMoveHandlerManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::AnimatorMoveHandlerManager::*)()>(&::Zenject::AnimatorMoveHandlerManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e8a870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::AnimatorMoveHandlerManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AnimatorMoveHandlerManager.__zenInjectMethod0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::ArrayW<::System::Object*>)>(&::Zenject::AnimatorMoveHandlerManager::__zenInjectMethod0)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6e8a874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::AnimatorMoveHandlerManager*>(),
                                                             { "__zenInjectMethod0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AnimatorMoveHandlerManager.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::AnimatorMoveHandlerManager::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x6e8a960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::AnimatorMoveHandlerManager*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Zenject::IAnimatorMoveHandler*>*& Zenject::AnimatorMoveHandlerManager::__cordl_internal_get__handlers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handlers;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::IAnimatorMoveHandler*>* const& Zenject::AnimatorMoveHandlerManager::__cordl_internal_get__handlers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handlers;
}
constexpr void Zenject::AnimatorMoveHandlerManager::__cordl_internal_set__handlers(::System::Collections::Generic::List_1<::Zenject::IAnimatorMoveHandler*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handlers = value;
}
inline void Zenject::AnimatorMoveHandlerManager::Construct(::System::Collections::Generic::List_1<::Zenject::IAnimatorMoveHandler*>* handlers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::AnimatorMoveHandlerManager*>(),
                                                           { "Construct", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::IAnimatorMoveHandler*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handlers);
}
inline void Zenject::AnimatorMoveHandlerManager::OnAnimatorMove() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::AnimatorMoveHandlerManager*>(), { "OnAnimatorMove", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::AnimatorMoveHandlerManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::AnimatorMoveHandlerManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::AnimatorMoveHandlerManager::__zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*> P_1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::AnimatorMoveHandlerManager*>(),
                                                           { "__zenInjectMethod0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, P_0, P_1);
}
inline ::Zenject::InjectTypeInfo* Zenject::AnimatorMoveHandlerManager::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::AnimatorMoveHandlerManager*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::AnimatorMoveHandlerManager* Zenject::AnimatorMoveHandlerManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::AnimatorMoveHandlerManager*>());
}
// Ctor Parameters []
constexpr ::Zenject::AnimatorMoveHandlerManager::AnimatorMoveHandlerManager() {}
