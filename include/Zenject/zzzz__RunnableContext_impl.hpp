#pragma once
// IWYU pragma private; include "Zenject\RunnableContext.hpp"
#include "Zenject/zzzz__Context_impl.hpp"
#include "Zenject/zzzz__RunnableContext_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::Zenject::RunnableContext.NoDomainReloadInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Zenject::RunnableContext::NoDomainReloadInit)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6e722fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::RunnableContext*>(), { "NoDomainReloadInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::RunnableContext.get_Initialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::RunnableContext::*)()>(&::Zenject::RunnableContext::get_Initialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e7235c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::RunnableContext*>(), { "get_Initialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::RunnableContext.set_Initialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::RunnableContext::*)(bool)>(&::Zenject::RunnableContext::set_Initialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e72364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::RunnableContext*>(), { "set_Initialized", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::RunnableContext.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::RunnableContext::*)()>(&::Zenject::RunnableContext::Initialize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e6f438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::RunnableContext*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::RunnableContext.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::RunnableContext::*)()>(&::Zenject::RunnableContext::Run)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6e7236c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::RunnableContext*>(), { ::i2c::class_of<::Zenject::RunnableContext*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::RunnableContext.RunInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::RunnableContext::*)()>(&::Zenject::RunnableContext::RunInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::RunnableContext*>(), { ::i2c::class_of<::Zenject::RunnableContext*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::RunnableContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::RunnableContext::*)()>(&::Zenject::RunnableContext::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e6fdd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::RunnableContext*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::RunnableContext.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::RunnableContext::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6e72430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::RunnableContext*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& Zenject::RunnableContext::__cordl_internal_get__autoRun() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoRun;
}
constexpr bool const& Zenject::RunnableContext::__cordl_internal_get__autoRun() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoRun;
}
constexpr void Zenject::RunnableContext::__cordl_internal_set__autoRun(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____autoRun = value;
}
constexpr bool& Zenject::RunnableContext::__cordl_internal_get__Initialized_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Initialized_k__BackingField;
}
constexpr bool const& Zenject::RunnableContext::__cordl_internal_get__Initialized_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Initialized_k__BackingField;
}
constexpr void Zenject::RunnableContext::__cordl_internal_set__Initialized_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Initialized_k__BackingField = value;
}
inline void Zenject::RunnableContext::setStaticF__staticAutoRun(bool value) {
  ::cordl_internals::setStaticField<bool, "_staticAutoRun", ::Zenject::RunnableContext*>(std::forward<bool>(value));
}
inline bool Zenject::RunnableContext::getStaticF__staticAutoRun() {
  return ::cordl_internals::getStaticField<bool, "_staticAutoRun", ::Zenject::RunnableContext*>();
}
inline void Zenject::RunnableContext::NoDomainReloadInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::RunnableContext*>(), { "NoDomainReloadInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Zenject::RunnableContext::get_Initialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::RunnableContext*>(), { "get_Initialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Zenject::RunnableContext::set_Initialized(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::RunnableContext*>(), { "set_Initialized", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Zenject::RunnableContext::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::RunnableContext*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::RunnableContext::Run() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::RunnableContext*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::RunnableContext::RunInternal() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::RunnableContext*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline T Zenject::RunnableContext::CreateComponent(::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::RunnableContext*>(), { "CreateComponent", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, gameObject);
}
inline void Zenject::RunnableContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::RunnableContext*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::InjectTypeInfo* Zenject::RunnableContext::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::RunnableContext*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::RunnableContext* Zenject::RunnableContext::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::RunnableContext*>());
}
// Ctor Parameters []
constexpr ::Zenject::RunnableContext::RunnableContext() {}
