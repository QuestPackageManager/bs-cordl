#pragma once
// IWYU pragma private; include "Zenject/ZenAutoInjecter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__ZenAutoInjecter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__ZenAutoInjecter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Zenject::ZenAutoInjecter_ContainerSources::ZenAutoInjecter_ContainerSources(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Zenject::ZenAutoInjecter_ContainerSources::ZenAutoInjecter_ContainerSources() {}
constexpr ::Zenject::ZenAutoInjecter_ContainerSources Zenject::ZenAutoInjecter_ContainerSources::SceneContext{ static_cast<int32_t>(0x0) };
constexpr ::Zenject::ZenAutoInjecter_ContainerSources Zenject::ZenAutoInjecter_ContainerSources::ProjectContext{ static_cast<int32_t>(0x1) };
constexpr ::Zenject::ZenAutoInjecter_ContainerSources Zenject::ZenAutoInjecter_ContainerSources::SearchHierarchy{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::Zenject::ZenAutoInjecter.get_ContainerSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ZenAutoInjecter_ContainerSources (::Zenject::ZenAutoInjecter::*)()>(&::Zenject::ZenAutoInjecter::get_ContainerSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e9af48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenAutoInjecter*>(), { "get_ContainerSource", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenAutoInjecter.set_ContainerSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ZenAutoInjecter::*)(::Zenject::ZenAutoInjecter_ContainerSources)>(&::Zenject::ZenAutoInjecter::set_ContainerSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e9af50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenAutoInjecter*>(), { "set_ContainerSource", {}, { ::i2c::type_of<::Zenject::ZenAutoInjecter_ContainerSources>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenAutoInjecter.Construct
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ZenAutoInjecter::*)()>(&::Zenject::ZenAutoInjecter::Construct)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6e9af58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenAutoInjecter*>(), { "Construct", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenAutoInjecter.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ZenAutoInjecter::*)()>(&::Zenject::ZenAutoInjecter::Awake)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6e9af98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenAutoInjecter*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenAutoInjecter.LookupContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::DiContainer* (::Zenject::ZenAutoInjecter::*)()>(&::Zenject::ZenAutoInjecter::LookupContainer)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6e9afe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenAutoInjecter*>(), { "LookupContainer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenAutoInjecter.GetContainerForCurrentScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::DiContainer* (::Zenject::ZenAutoInjecter::*)()>(&::Zenject::ZenAutoInjecter::GetContainerForCurrentScene)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e9b124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenAutoInjecter*>(), { "GetContainerForCurrentScene", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenAutoInjecter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ZenAutoInjecter::*)()>(&::Zenject::ZenAutoInjecter::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e9b1b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenAutoInjecter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenAutoInjecter.__zenInjectMethod0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::ArrayW<::System::Object*>)>(&::Zenject::ZenAutoInjecter::__zenInjectMethod0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e9b1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Zenject::ZenAutoInjecter*>(), { "__zenInjectMethod0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenAutoInjecter.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ZenAutoInjecter::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x6e9b248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenAutoInjecter*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::ZenAutoInjecter_ContainerSources& Zenject::ZenAutoInjecter::__cordl_internal_get__containerSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____containerSource;
}
constexpr ::Zenject::ZenAutoInjecter_ContainerSources const& Zenject::ZenAutoInjecter::__cordl_internal_get__containerSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____containerSource;
}
constexpr void Zenject::ZenAutoInjecter::__cordl_internal_set__containerSource(::Zenject::ZenAutoInjecter_ContainerSources value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____containerSource = value;
}
constexpr bool& Zenject::ZenAutoInjecter::__cordl_internal_get__hasInjected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasInjected;
}
constexpr bool const& Zenject::ZenAutoInjecter::__cordl_internal_get__hasInjected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasInjected;
}
constexpr void Zenject::ZenAutoInjecter::__cordl_internal_set__hasInjected(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasInjected = value;
}
inline ::Zenject::ZenAutoInjecter_ContainerSources Zenject::ZenAutoInjecter::get_ContainerSource() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenAutoInjecter*>(), { "get_ContainerSource", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ZenAutoInjecter_ContainerSources>(this, ___internal_method);
}
inline void Zenject::ZenAutoInjecter::set_ContainerSource(::Zenject::ZenAutoInjecter_ContainerSources value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenAutoInjecter*>(), { "set_ContainerSource", {}, { ::i2c::type_of<::Zenject::ZenAutoInjecter_ContainerSources>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Zenject::ZenAutoInjecter::Construct() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenAutoInjecter*>(), { "Construct", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::ZenAutoInjecter::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenAutoInjecter*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::DiContainer* Zenject::ZenAutoInjecter::LookupContainer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenAutoInjecter*>(), { "LookupContainer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*>(this, ___internal_method);
}
inline ::Zenject::DiContainer* Zenject::ZenAutoInjecter::GetContainerForCurrentScene() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenAutoInjecter*>(), { "GetContainerForCurrentScene", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*>(this, ___internal_method);
}
inline void Zenject::ZenAutoInjecter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenAutoInjecter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::ZenAutoInjecter::__zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*> P_1) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::ZenAutoInjecter*>(), { "__zenInjectMethod0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, P_0, P_1);
}
inline ::Zenject::InjectTypeInfo* Zenject::ZenAutoInjecter::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenAutoInjecter*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::ZenAutoInjecter* Zenject::ZenAutoInjecter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ZenAutoInjecter*>());
}
// Ctor Parameters []
constexpr ::Zenject::ZenAutoInjecter::ZenAutoInjecter() {}
