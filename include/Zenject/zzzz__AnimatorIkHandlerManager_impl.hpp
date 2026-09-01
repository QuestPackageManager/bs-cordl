#pragma once
// IWYU pragma private; include "Zenject\AnimatorIkHandlerManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__AnimatorIkHandlerManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IAnimatorIkHandler_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::Zenject::AnimatorIkHandlerManager.Construct
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::AnimatorIkHandlerManager::*)(::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>*)>(
    &::Zenject::AnimatorIkHandlerManager::Construct)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e8d2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::AnimatorIkHandlerManager*>(),
                                                             { "Construct", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AnimatorIkHandlerManager.OnAnimatorIk
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::AnimatorIkHandlerManager::*)()>(&::Zenject::AnimatorIkHandlerManager::OnAnimatorIk)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6e8d304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::AnimatorIkHandlerManager*>(), { "OnAnimatorIk", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AnimatorIkHandlerManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::AnimatorIkHandlerManager::*)()>(&::Zenject::AnimatorIkHandlerManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e8d474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::AnimatorIkHandlerManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AnimatorIkHandlerManager.__zenInjectMethod0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::ArrayW<::System::Object*>)>(&::Zenject::AnimatorIkHandlerManager::__zenInjectMethod0)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6e8d478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::AnimatorIkHandlerManager*>(),
                                                             { "__zenInjectMethod0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::AnimatorIkHandlerManager.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::AnimatorIkHandlerManager::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x6e8d564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::AnimatorIkHandlerManager*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>*& Zenject::AnimatorIkHandlerManager::__cordl_internal_get__handlers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handlers;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>* const& Zenject::AnimatorIkHandlerManager::__cordl_internal_get__handlers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handlers;
}
constexpr void Zenject::AnimatorIkHandlerManager::__cordl_internal_set__handlers(::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handlers = value;
}
inline void Zenject::AnimatorIkHandlerManager::Construct(::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>* handlers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::AnimatorIkHandlerManager*>(),
                                                           { "Construct", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::IAnimatorIkHandler*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handlers);
}
inline void Zenject::AnimatorIkHandlerManager::OnAnimatorIk() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::AnimatorIkHandlerManager*>(), { "OnAnimatorIk", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::AnimatorIkHandlerManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::AnimatorIkHandlerManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::AnimatorIkHandlerManager::__zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*> P_1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::AnimatorIkHandlerManager*>(),
                                                           { "__zenInjectMethod0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, P_0, P_1);
}
inline ::Zenject::InjectTypeInfo* Zenject::AnimatorIkHandlerManager::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::AnimatorIkHandlerManager*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::AnimatorIkHandlerManager* Zenject::AnimatorIkHandlerManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::AnimatorIkHandlerManager*>());
}
// Ctor Parameters []
constexpr ::Zenject::AnimatorIkHandlerManager::AnimatorIkHandlerManager() {}
