#pragma once
#include "GlobalNamespace/zzzz__Billboard_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__Billboard_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__Billboard_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__Billboard__RotationMode::__Billboard__RotationMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__Billboard__RotationMode::__Billboard__RotationMode() {}
constexpr ::GlobalNamespace::__Billboard__RotationMode GlobalNamespace::__Billboard__RotationMode::AllAxis{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__Billboard__RotationMode GlobalNamespace::__Billboard__RotationMode::XAxis{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__Billboard__RotationMode GlobalNamespace::__Billboard__RotationMode::YAxis{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__Billboard__RotationMode GlobalNamespace::__Billboard__RotationMode::ZAxis{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::Billboard.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Billboard::*)()>(&::GlobalNamespace::Billboard::Awake)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1f93fa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Billboard*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Billboard.OnWillRenderObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Billboard::*)()>(&::GlobalNamespace::Billboard::OnWillRenderObject)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1f93fbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Billboard*>::get(), "OnWillRenderObject",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Billboard._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Billboard::*)()>(&::GlobalNamespace::Billboard::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f9408c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Billboard*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__Billboard__RotationMode& GlobalNamespace::Billboard::__get__rotationMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationMode;
}
constexpr ::GlobalNamespace::__Billboard__RotationMode const& GlobalNamespace::Billboard::__get__rotationMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationMode;
}
constexpr void GlobalNamespace::Billboard::__set__rotationMode(::GlobalNamespace::__Billboard__RotationMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotationMode = value;
}
constexpr bool& GlobalNamespace::Billboard::__get__flipDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flipDirection;
}
constexpr bool const& GlobalNamespace::Billboard::__get__flipDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flipDirection;
}
constexpr void GlobalNamespace::Billboard::__set__flipDirection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flipDirection = value;
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::Billboard::__get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::Billboard::__get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr void GlobalNamespace::Billboard::__set__transform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::Billboard::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Billboard*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Billboard::OnWillRenderObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Billboard*>::get(), "OnWillRenderObject",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::Billboard* GlobalNamespace::Billboard::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::Billboard*>());
}
inline void GlobalNamespace::Billboard::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Billboard*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Billboard::Billboard() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
