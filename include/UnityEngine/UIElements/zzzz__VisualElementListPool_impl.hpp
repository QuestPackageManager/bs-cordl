#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualElementListPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementListPool_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementListPool_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementListPool___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualElementListPool___c::*)()>(&::UnityEngine::UIElements::VisualElementListPool___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cc62e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementListPool___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementListPool___c.__cctor_b__4_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* (::UnityEngine::UIElements::VisualElementListPool___c::*)()>(
    &::UnityEngine::UIElements::VisualElementListPool___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6cc62e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementListPool___c*>(), { "<.cctor>b__4_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::VisualElementListPool___c::setStaticF___9(::UnityEngine::UIElements::VisualElementListPool___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::VisualElementListPool___c*, "<>9", ::UnityEngine::UIElements::VisualElementListPool___c*>(
      std::forward<::UnityEngine::UIElements::VisualElementListPool___c*>(value));
}
inline ::UnityEngine::UIElements::VisualElementListPool___c* UnityEngine::UIElements::VisualElementListPool___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::VisualElementListPool___c*, "<>9", ::UnityEngine::UIElements::VisualElementListPool___c*>();
}
inline void UnityEngine::UIElements::VisualElementListPool___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementListPool___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::VisualElementListPool___c::__cctor_b__4_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementListPool___c*>(), { "<.cctor>b__4_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElementListPool___c* UnityEngine::UIElements::VisualElementListPool___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::VisualElementListPool___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualElementListPool___c::VisualElementListPool___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementListPool.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* (*)(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*)>(
        &::UnityEngine::UIElements::VisualElementListPool::Copy)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6cc5f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementListPool*>(),
                                                             { "Copy", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementListPool.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* (*)(int32_t)>(
    &::UnityEngine::UIElements::VisualElementListPool::Get)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6cc5fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementListPool*>(), { "Get", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementListPool.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*)>(
    &::UnityEngine::UIElements::VisualElementListPool::Release)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6cc60b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementListPool*>(),
                                                             { "Release", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
    return ___internal_method;
  }
};
inline void
UnityEngine::UIElements::VisualElementListPool::setStaticF_pool(::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>*, "pool",
                                    ::UnityEngine::UIElements::VisualElementListPool*>(
      std::forward<::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>*>(value));
}
inline ::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>* UnityEngine::UIElements::VisualElementListPool::getStaticF_pool() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>*, "pool",
                                           ::UnityEngine::UIElements::VisualElementListPool*>();
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*
UnityEngine::UIElements::VisualElementListPool::Copy(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* elements) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementListPool*>(),
                                                           { "Copy", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>(nullptr, ___internal_method, elements);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::VisualElementListPool::Get(int32_t initialCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementListPool*>(), { "Get", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>(nullptr, ___internal_method, initialCapacity);
}
inline void UnityEngine::UIElements::VisualElementListPool::Release(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* elements) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementListPool*>(),
                                                           { "Release", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, elements);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualElementListPool::VisualElementListPool() {}
