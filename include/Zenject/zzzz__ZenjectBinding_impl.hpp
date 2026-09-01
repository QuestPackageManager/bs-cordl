#pragma once
// IWYU pragma private; include "Zenject\ZenjectBinding.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__ZenjectBinding_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "Zenject/zzzz__Context_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__ZenjectBinding_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Zenject::ZenjectBinding_BindTypes::ZenjectBinding_BindTypes(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Zenject::ZenjectBinding_BindTypes::ZenjectBinding_BindTypes() {}
constexpr ::Zenject::ZenjectBinding_BindTypes Zenject::ZenjectBinding_BindTypes::Self{ static_cast<int32_t>(0x0) };
constexpr ::Zenject::ZenjectBinding_BindTypes Zenject::ZenjectBinding_BindTypes::AllInterfaces{ static_cast<int32_t>(0x1) };
constexpr ::Zenject::ZenjectBinding_BindTypes Zenject::ZenjectBinding_BindTypes::AllInterfacesAndSelf{ static_cast<int32_t>(0x2) };
constexpr ::Zenject::ZenjectBinding_BindTypes Zenject::ZenjectBinding_BindTypes::BaseType{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::Zenject::ZenjectBinding.get_UseSceneContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::ZenjectBinding::*)()>(&::Zenject::ZenjectBinding::get_UseSceneContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e769f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectBinding*>(), { "get_UseSceneContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectBinding.get_IfNotBound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::ZenjectBinding::*)()>(&::Zenject::ZenjectBinding::get_IfNotBound)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e76a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectBinding*>(), { "get_IfNotBound", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectBinding.get_Context
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Zenject::Context> (::Zenject::ZenjectBinding::*)()>(&::Zenject::ZenjectBinding::get_Context)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e76a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectBinding*>(), { "get_Context", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectBinding.set_Context
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ZenjectBinding::*)(::Zenject::Context*)>(&::Zenject::ZenjectBinding::set_Context)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e76a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectBinding*>(), { "set_Context", {}, { ::i2c::type_of<::Zenject::Context*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectBinding.get_Components
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Component>> (::Zenject::ZenjectBinding::*)()>(&::Zenject::ZenjectBinding::get_Components)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e76a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectBinding*>(), { "get_Components", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectBinding.get_Identifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Zenject::ZenjectBinding::*)()>(&::Zenject::ZenjectBinding::get_Identifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e76a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectBinding*>(), { "get_Identifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectBinding.get_BindType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ZenjectBinding_BindTypes (::Zenject::ZenjectBinding::*)()>(&::Zenject::ZenjectBinding::get_BindType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e76a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectBinding*>(), { "get_BindType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectBinding.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ZenjectBinding::*)()>(&::Zenject::ZenjectBinding::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e76a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectBinding*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectBinding._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ZenjectBinding::*)()>(&::Zenject::ZenjectBinding::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e76a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectBinding*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectBinding.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ZenjectBinding::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6e76a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectBinding*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Component>>& Zenject::ZenjectBinding::__cordl_internal_get__components() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____components;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Component>> const& Zenject::ZenjectBinding::__cordl_internal_get__components() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____components;
}
constexpr void Zenject::ZenjectBinding::__cordl_internal_set__components(::ArrayW<::UnityW<::UnityEngine::Component>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____components = value;
}
constexpr ::StringW& Zenject::ZenjectBinding::__cordl_internal_get__identifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____identifier;
}
constexpr ::StringW const& Zenject::ZenjectBinding::__cordl_internal_get__identifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____identifier;
}
constexpr void Zenject::ZenjectBinding::__cordl_internal_set__identifier(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____identifier = value;
}
constexpr bool& Zenject::ZenjectBinding::__cordl_internal_get__useSceneContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useSceneContext;
}
constexpr bool const& Zenject::ZenjectBinding::__cordl_internal_get__useSceneContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useSceneContext;
}
constexpr void Zenject::ZenjectBinding::__cordl_internal_set__useSceneContext(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useSceneContext = value;
}
constexpr bool& Zenject::ZenjectBinding::__cordl_internal_get__ifNotBound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ifNotBound;
}
constexpr bool const& Zenject::ZenjectBinding::__cordl_internal_get__ifNotBound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ifNotBound;
}
constexpr void Zenject::ZenjectBinding::__cordl_internal_set__ifNotBound(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ifNotBound = value;
}
constexpr ::UnityW<::Zenject::Context>& Zenject::ZenjectBinding::__cordl_internal_get__context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____context;
}
constexpr ::UnityW<::Zenject::Context> const& Zenject::ZenjectBinding::__cordl_internal_get__context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____context;
}
constexpr void Zenject::ZenjectBinding::__cordl_internal_set__context(::UnityW<::Zenject::Context> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____context = value;
}
constexpr ::Zenject::ZenjectBinding_BindTypes& Zenject::ZenjectBinding::__cordl_internal_get__bindType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindType;
}
constexpr ::Zenject::ZenjectBinding_BindTypes const& Zenject::ZenjectBinding::__cordl_internal_get__bindType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindType;
}
constexpr void Zenject::ZenjectBinding::__cordl_internal_set__bindType(::Zenject::ZenjectBinding_BindTypes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bindType = value;
}
inline bool Zenject::ZenjectBinding::get_UseSceneContext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectBinding*>(), { "get_UseSceneContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Zenject::ZenjectBinding::get_IfNotBound() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectBinding*>(), { "get_IfNotBound", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::Zenject::Context> Zenject::ZenjectBinding::get_Context() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectBinding*>(), { "get_Context", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Zenject::Context>>(this, ___internal_method);
}
inline void Zenject::ZenjectBinding::set_Context(::Zenject::Context* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectBinding*>(), { "set_Context", {}, { ::i2c::type_of<::Zenject::Context*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityW<::UnityEngine::Component>> Zenject::ZenjectBinding::get_Components() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectBinding*>(), { "get_Components", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Component>>>(this, ___internal_method);
}
inline ::StringW Zenject::ZenjectBinding::get_Identifier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectBinding*>(), { "get_Identifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Zenject::ZenjectBinding_BindTypes Zenject::ZenjectBinding::get_BindType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectBinding*>(), { "get_BindType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ZenjectBinding_BindTypes>(this, ___internal_method);
}
inline void Zenject::ZenjectBinding::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectBinding*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::ZenjectBinding::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectBinding*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::InjectTypeInfo* Zenject::ZenjectBinding::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectBinding*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::ZenjectBinding* Zenject::ZenjectBinding::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ZenjectBinding*>());
}
// Ctor Parameters []
constexpr ::Zenject::ZenjectBinding::ZenjectBinding() {}
