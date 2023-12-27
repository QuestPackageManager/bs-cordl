#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockRandomValueSetter_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockRandomValueSetter.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockRandomValueSetter::*)()>(
    &::GlobalNamespace::MaterialPropertyBlockRandomValueSetter::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x211520c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockRandomValueSetter*>::get(), "Start",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockRandomValueSetter.OnValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockRandomValueSetter::*)()>(
    &::GlobalNamespace::MaterialPropertyBlockRandomValueSetter::OnValidate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2115418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockRandomValueSetter*>::get(), "OnValidate",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockRandomValueSetter.RefreshPropertyId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockRandomValueSetter::*)()>(
    &::GlobalNamespace::MaterialPropertyBlockRandomValueSetter::RefreshPropertyId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x211543c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockRandomValueSetter*>::get(), "RefreshPropertyId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockRandomValueSetter.ApplyParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockRandomValueSetter::*)()>(
    &::GlobalNamespace::MaterialPropertyBlockRandomValueSetter::ApplyParams)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x2115210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockRandomValueSetter*>::get(), "ApplyParams",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockRandomValueSetter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockRandomValueSetter::*)()>(
    &::GlobalNamespace::MaterialPropertyBlockRandomValueSetter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x211545c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockRandomValueSetter*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*>& GlobalNamespace::MaterialPropertyBlockRandomValueSetter::__get__renderers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____renderers;
}
constexpr ::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> const& GlobalNamespace::MaterialPropertyBlockRandomValueSetter::__get__renderers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____renderers;
}
constexpr void GlobalNamespace::MaterialPropertyBlockRandomValueSetter::__set__renderers(::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::MaterialPropertyBlockRandomValueSetter::__get__propertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____propertyName;
}
constexpr ::StringW const& GlobalNamespace::MaterialPropertyBlockRandomValueSetter::__get__propertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____propertyName;
}
constexpr void GlobalNamespace::MaterialPropertyBlockRandomValueSetter::__set__propertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____propertyName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MaterialPropertyBlockRandomValueSetter::__get__minValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____minValue;
}
constexpr float_t const& GlobalNamespace::MaterialPropertyBlockRandomValueSetter::__get__minValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____minValue;
}
constexpr void GlobalNamespace::MaterialPropertyBlockRandomValueSetter::__set__minValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____minValue = value;
}
constexpr float_t& GlobalNamespace::MaterialPropertyBlockRandomValueSetter::__get__maxValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____maxValue;
}
constexpr float_t const& GlobalNamespace::MaterialPropertyBlockRandomValueSetter::__get__maxValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____maxValue;
}
constexpr void GlobalNamespace::MaterialPropertyBlockRandomValueSetter::__set__maxValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____maxValue = value;
}
constexpr ::ArrayW<::UnityEngine::MaterialPropertyBlock*, ::Array<::UnityEngine::MaterialPropertyBlock*>*>& GlobalNamespace::MaterialPropertyBlockRandomValueSetter::__get__materialPropertyBlocks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____materialPropertyBlocks;
}
constexpr ::ArrayW<::UnityEngine::MaterialPropertyBlock*, ::Array<::UnityEngine::MaterialPropertyBlock*>*> const&
GlobalNamespace::MaterialPropertyBlockRandomValueSetter::__get__materialPropertyBlocks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____materialPropertyBlocks;
}
constexpr void
GlobalNamespace::MaterialPropertyBlockRandomValueSetter::__set__materialPropertyBlocks(::ArrayW<::UnityEngine::MaterialPropertyBlock*, ::Array<::UnityEngine::MaterialPropertyBlock*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialPropertyBlocks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::MaterialPropertyBlockRandomValueSetter::__get__propertyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____propertyId;
}
constexpr int32_t const& GlobalNamespace::MaterialPropertyBlockRandomValueSetter::__get__propertyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____propertyId;
}
constexpr void GlobalNamespace::MaterialPropertyBlockRandomValueSetter::__set__propertyId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____propertyId = value;
}
inline void GlobalNamespace::MaterialPropertyBlockRandomValueSetter::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockRandomValueSetter*>::get(),
                                                                             "Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyBlockRandomValueSetter::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockRandomValueSetter*>::get(),
                                                                             "OnValidate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyBlockRandomValueSetter::RefreshPropertyId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockRandomValueSetter*>::get(),
                                                                             "RefreshPropertyId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyBlockRandomValueSetter::ApplyParams() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockRandomValueSetter*>::get(),
                                                                             "ApplyParams", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialPropertyBlockRandomValueSetter* GlobalNamespace::MaterialPropertyBlockRandomValueSetter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MaterialPropertyBlockRandomValueSetter*>());
}
inline void GlobalNamespace::MaterialPropertyBlockRandomValueSetter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockRandomValueSetter*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialPropertyBlockRandomValueSetter::MaterialPropertyBlockRandomValueSetter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
