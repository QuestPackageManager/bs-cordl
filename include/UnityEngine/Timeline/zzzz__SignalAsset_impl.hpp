#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\SignalAsset.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/Timeline/zzzz__SignalAsset_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::SignalAsset.add_OnEnableCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>*)>(&::UnityEngine::Timeline::SignalAsset::add_OnEnableCallback)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x69c6824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalAsset*>(),
                                                             { "add_OnEnableCallback", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalAsset.remove_OnEnableCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>*)>(&::UnityEngine::Timeline::SignalAsset::remove_OnEnableCallback)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x69c6904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalAsset*>(),
                                                             { "remove_OnEnableCallback", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalAsset.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::SignalAsset::*)()>(&::UnityEngine::Timeline::SignalAsset::OnEnable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x69c69e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalAsset*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::SignalAsset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::SignalAsset::*)()>(&::UnityEngine::Timeline::SignalAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69c6a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalAsset*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::SignalAsset::setStaticF_OnEnableCallback(::System::Action_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>*, "OnEnableCallback", ::UnityEngine::Timeline::SignalAsset*>(
      std::forward<::System::Action_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* UnityEngine::Timeline::SignalAsset::getStaticF_OnEnableCallback() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>*, "OnEnableCallback", ::UnityEngine::Timeline::SignalAsset*>();
}
inline void UnityEngine::Timeline::SignalAsset::add_OnEnableCallback(::System::Action_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalAsset*>(),
                                                           { "add_OnEnableCallback", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Timeline::SignalAsset::remove_OnEnableCallback(::System::Action_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalAsset*>(),
                                                           { "remove_OnEnableCallback", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Timeline::SignalAsset::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalAsset*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Timeline::SignalAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalAsset*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::SignalAsset* UnityEngine::Timeline::SignalAsset::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::SignalAsset*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::SignalAsset::SignalAsset() {}
