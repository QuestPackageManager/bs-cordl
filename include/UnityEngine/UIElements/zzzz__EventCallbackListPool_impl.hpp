#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\EventCallbackListPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackListPool_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackList_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackListPool.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventCallbackList* (
    ::UnityEngine::UIElements::EventCallbackListPool::*)(::UnityEngine::UIElements::EventCallbackList*)>(&::UnityEngine::UIElements::EventCallbackListPool::Get)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6d98a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackListPool*>(), { "Get", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventCallbackList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackListPool.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::EventCallbackListPool::*)(::UnityEngine::UIElements::EventCallbackList*)>(
    &::UnityEngine::UIElements::EventCallbackListPool::Release)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6d98cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackListPool*>(),
                                                                                           { "Release", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventCallbackList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventCallbackListPool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::EventCallbackListPool::*)()>(&::UnityEngine::UIElements::EventCallbackListPool::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6d98d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackListPool*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventCallbackList*>*& UnityEngine::UIElements::EventCallbackListPool::__cordl_internal_get_m_Stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Stack;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventCallbackList*>* const& UnityEngine::UIElements::EventCallbackListPool::__cordl_internal_get_m_Stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Stack;
}
constexpr void UnityEngine::UIElements::EventCallbackListPool::__cordl_internal_set_m_Stack(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventCallbackList*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Stack = value;
}
inline ::UnityEngine::UIElements::EventCallbackList* UnityEngine::UIElements::EventCallbackListPool::Get(::UnityEngine::UIElements::EventCallbackList* initializer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackListPool*>(), { "Get", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventCallbackList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventCallbackList*>(this, ___internal_method, initializer);
}
inline void UnityEngine::UIElements::EventCallbackListPool::Release(::UnityEngine::UIElements::EventCallbackList* element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackListPool*>(), { "Release", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventCallbackList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void UnityEngine::UIElements::EventCallbackListPool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackListPool*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::EventCallbackListPool* UnityEngine::UIElements::EventCallbackListPool::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::EventCallbackListPool*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventCallbackListPool::EventCallbackListPool() {}
