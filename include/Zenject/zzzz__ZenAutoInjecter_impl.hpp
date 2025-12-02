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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ZenAutoInjecter_ContainerSources (::Zenject::ZenAutoInjecter::*)()>(
    &::Zenject::ZenAutoInjecter::get_ContainerSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c68c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenAutoInjecter*>::get(), "get_ContainerSource",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenAutoInjecter.set_ContainerSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ZenAutoInjecter::*)(::Zenject::ZenAutoInjecter_ContainerSources)>(
    &::Zenject::ZenAutoInjecter::set_ContainerSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c68c44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenAutoInjecter*>::get(), "set_ContainerSource", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ZenAutoInjecter_ContainerSources>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenAutoInjecter.Construct
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ZenAutoInjecter::*)()>(&::Zenject::ZenAutoInjecter::Construct)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6c68c4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenAutoInjecter*>::get(), "Construct",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenAutoInjecter.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ZenAutoInjecter::*)()>(&::Zenject::ZenAutoInjecter::Awake)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6c68c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenAutoInjecter*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenAutoInjecter.LookupContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer* (::Zenject::ZenAutoInjecter::*)()>(&::Zenject::ZenAutoInjecter::LookupContainer)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6c68cd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenAutoInjecter*>::get(), "LookupContainer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenAutoInjecter.GetContainerForCurrentScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer* (::Zenject::ZenAutoInjecter::*)()>(
    &::Zenject::ZenAutoInjecter::GetContainerForCurrentScene)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c68e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenAutoInjecter*>::get(),
                                                                               "GetContainerForCurrentScene", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenAutoInjecter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ZenAutoInjecter::*)()>(&::Zenject::ZenAutoInjecter::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c68eac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenAutoInjecter*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenAutoInjecter.__zenInjectMethod0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::ZenAutoInjecter::__zenInjectMethod0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6c68eb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenAutoInjecter*>::get(), "__zenInjectMethod0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenAutoInjecter.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ZenAutoInjecter::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x6c68f3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenAutoInjecter*>::get(), "__zenCreateInjectTypeInfo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenAutoInjecter*>::get(), "get_ContainerSource",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ZenAutoInjecter_ContainerSources, false>(this, ___internal_method);
}
inline void Zenject::ZenAutoInjecter::set_ContainerSource(::Zenject::ZenAutoInjecter_ContainerSources value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenAutoInjecter*>::get(), "set_ContainerSource", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ZenAutoInjecter_ContainerSources>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Zenject::ZenAutoInjecter::Construct() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenAutoInjecter*>::get(), "Construct",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Zenject::ZenAutoInjecter::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenAutoInjecter*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::DiContainer* Zenject::ZenAutoInjecter::LookupContainer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenAutoInjecter*>::get(), "LookupContainer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(this, ___internal_method);
}
inline ::Zenject::DiContainer* Zenject::ZenAutoInjecter::GetContainerForCurrentScene() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenAutoInjecter*>::get(), "GetContainerForCurrentScene",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(this, ___internal_method);
}
inline void Zenject::ZenAutoInjecter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenAutoInjecter*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Zenject::ZenAutoInjecter::__zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_1) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenAutoInjecter*>::get(), "__zenInjectMethod0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
inline ::Zenject::InjectTypeInfo* Zenject::ZenAutoInjecter::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenAutoInjecter*>::get(), "__zenCreateInjectTypeInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
inline ::Zenject::ZenAutoInjecter* Zenject::ZenAutoInjecter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::ZenAutoInjecter*>());
}
// Ctor Parameters []
constexpr ::Zenject::ZenAutoInjecter::ZenAutoInjecter() {}
