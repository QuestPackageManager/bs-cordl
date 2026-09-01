#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\PropagationPaths.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PropagationPaths_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__PropagationPaths_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::PropagationPaths___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PropagationPaths___c::*)()>(&::UnityEngine::UIElements::PropagationPaths___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6da6284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropagationPaths___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropagationPaths___c.__cctor_b__8_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PropagationPaths* (::UnityEngine::UIElements::PropagationPaths___c::*)()>(
    &::UnityEngine::UIElements::PropagationPaths___c::__cctor_b__8_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6da6288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropagationPaths___c*>(), { "<.cctor>b__8_0", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::PropagationPaths___c::setStaticF___9(::UnityEngine::UIElements::PropagationPaths___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::PropagationPaths___c*, "<>9", ::UnityEngine::UIElements::PropagationPaths___c*>(
      std::forward<::UnityEngine::UIElements::PropagationPaths___c*>(value));
}
inline ::UnityEngine::UIElements::PropagationPaths___c* UnityEngine::UIElements::PropagationPaths___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::PropagationPaths___c*, "<>9", ::UnityEngine::UIElements::PropagationPaths___c*>();
}
inline void UnityEngine::UIElements::PropagationPaths___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropagationPaths___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PropagationPaths* UnityEngine::UIElements::PropagationPaths___c::__cctor_b__8_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropagationPaths___c*>(), { "<.cctor>b__8_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PropagationPaths*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PropagationPaths___c* UnityEngine::UIElements::PropagationPaths___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PropagationPaths___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PropagationPaths___c::PropagationPaths___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::PropagationPaths._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PropagationPaths::*)()>(&::UnityEngine::UIElements::PropagationPaths::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6da5f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropagationPaths*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropagationPaths.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PropagationPaths* (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::EventBase*, int32_t)>(
    &::UnityEngine::UIElements::PropagationPaths::Build)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x6d9b4a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropagationPaths*>(),
                            { "Build", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PropagationPaths.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PropagationPaths::*)()>(&::UnityEngine::UIElements::PropagationPaths::Dispose)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6da6024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropagationPaths*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::PropagationPaths::__cordl_internal_get_trickleDownPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trickleDownPath;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* const& UnityEngine::UIElements::PropagationPaths::__cordl_internal_get_trickleDownPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trickleDownPath;
}
constexpr void UnityEngine::UIElements::PropagationPaths::__cordl_internal_set_trickleDownPath(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trickleDownPath = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::PropagationPaths::__cordl_internal_get_bubbleUpPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bubbleUpPath;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* const& UnityEngine::UIElements::PropagationPaths::__cordl_internal_get_bubbleUpPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bubbleUpPath;
}
constexpr void UnityEngine::UIElements::PropagationPaths::__cordl_internal_set_bubbleUpPath(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bubbleUpPath = value;
}
inline void UnityEngine::UIElements::PropagationPaths::setStaticF_s_Pool(::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::PropagationPaths*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::PropagationPaths*>*, "s_Pool", ::UnityEngine::UIElements::PropagationPaths*>(
      std::forward<::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::PropagationPaths*>*>(value));
}
inline ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::PropagationPaths*>* UnityEngine::UIElements::PropagationPaths::getStaticF_s_Pool() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::PropagationPaths*>*, "s_Pool", ::UnityEngine::UIElements::PropagationPaths*>();
}
inline void UnityEngine::UIElements::PropagationPaths::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropagationPaths*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PropagationPaths* UnityEngine::UIElements::PropagationPaths::Build(::UnityEngine::UIElements::VisualElement* elem, ::UnityEngine::UIElements::EventBase* evt,
                                                                                                     int32_t eventCategories) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropagationPaths*>(),
                          { "Build", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PropagationPaths*>(nullptr, ___internal_method, elem, evt, eventCategories);
}
inline void UnityEngine::UIElements::PropagationPaths::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PropagationPaths*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PropagationPaths* UnityEngine::UIElements::PropagationPaths::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PropagationPaths*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::PropagationPaths::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::PropagationPaths::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PropagationPaths::PropagationPaths() {}
