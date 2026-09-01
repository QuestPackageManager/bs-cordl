#pragma once
// IWYU pragma private; include "GlobalNamespace\ZenjectSafeBehaviour.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ZenjectSafeBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ZenjectSafeBehaviour.Inject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZenjectSafeBehaviour::*)()>(&::GlobalNamespace::ZenjectSafeBehaviour::Inject)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f5288c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ZenjectSafeBehaviour*>(), { "Inject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZenjectSafeBehaviour.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZenjectSafeBehaviour::*)()>(&::GlobalNamespace::ZenjectSafeBehaviour::OnEnable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f528cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ZenjectSafeBehaviour*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZenjectSafeBehaviour.TryInvokeOnEnablePostInjection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZenjectSafeBehaviour::*)()>(&::GlobalNamespace::ZenjectSafeBehaviour::TryInvokeOnEnablePostInjection)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f528ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ZenjectSafeBehaviour*>(), { "TryInvokeOnEnablePostInjection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZenjectSafeBehaviour.OnEnablePostInjection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZenjectSafeBehaviour::*)()>(&::GlobalNamespace::ZenjectSafeBehaviour::OnEnablePostInjection)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f528ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ZenjectSafeBehaviour*>(), { ::i2c::class_of<::GlobalNamespace::ZenjectSafeBehaviour*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZenjectSafeBehaviour._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZenjectSafeBehaviour::*)()>(&::GlobalNamespace::ZenjectSafeBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f4222c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ZenjectSafeBehaviour*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZenjectSafeBehaviour.__zenInjectMethod0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::ArrayW<::System::Object*>)>(&::GlobalNamespace::ZenjectSafeBehaviour::__zenInjectMethod0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f528f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ZenjectSafeBehaviour*>(),
                                                             { "__zenInjectMethod0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZenjectSafeBehaviour.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::GlobalNamespace::ZenjectSafeBehaviour::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5f52994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ZenjectSafeBehaviour*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::ZenjectSafeBehaviour::__cordl_internal_get__isInjected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInjected;
}
constexpr bool const& GlobalNamespace::ZenjectSafeBehaviour::__cordl_internal_get__isInjected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInjected;
}
constexpr void GlobalNamespace::ZenjectSafeBehaviour::__cordl_internal_set__isInjected(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isInjected = value;
}
constexpr bool& GlobalNamespace::ZenjectSafeBehaviour::__cordl_internal_get__wasOnEnableCalled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wasOnEnableCalled;
}
constexpr bool const& GlobalNamespace::ZenjectSafeBehaviour::__cordl_internal_get__wasOnEnableCalled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wasOnEnableCalled;
}
constexpr void GlobalNamespace::ZenjectSafeBehaviour::__cordl_internal_set__wasOnEnableCalled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____wasOnEnableCalled = value;
}
inline void GlobalNamespace::ZenjectSafeBehaviour::Inject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ZenjectSafeBehaviour*>(), { "Inject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZenjectSafeBehaviour::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ZenjectSafeBehaviour*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZenjectSafeBehaviour::TryInvokeOnEnablePostInjection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ZenjectSafeBehaviour*>(), { "TryInvokeOnEnablePostInjection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZenjectSafeBehaviour::OnEnablePostInjection() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ZenjectSafeBehaviour*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZenjectSafeBehaviour::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ZenjectSafeBehaviour*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZenjectSafeBehaviour::__zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*> P_1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ZenjectSafeBehaviour*>(),
                                                           { "__zenInjectMethod0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, P_0, P_1);
}
inline ::Zenject::InjectTypeInfo* GlobalNamespace::ZenjectSafeBehaviour::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ZenjectSafeBehaviour*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::ZenjectSafeBehaviour* GlobalNamespace::ZenjectSafeBehaviour::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ZenjectSafeBehaviour*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ZenjectSafeBehaviour::ZenjectSafeBehaviour() {}
