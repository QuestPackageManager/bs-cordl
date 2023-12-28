#pragma once
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyEffect_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyEffect.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyEffect::*)()>(&::GlobalNamespace::MaterialPropertyEffect::Awake)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23a65d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyEffect*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyEffect.SetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyEffect::*)(float_t)>(&::GlobalNamespace::MaterialPropertyEffect::SetValue)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x23a65f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyEffect*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyEffect*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyEffect.TriggerValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyEffect::*)(float_t)>(
    &::GlobalNamespace::MaterialPropertyEffect::TriggerValue)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x23a66b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyEffect*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyEffect*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyEffect::*)()>(&::GlobalNamespace::MaterialPropertyEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a6780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyEffect*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MaterialPropertyBlockController*& GlobalNamespace::MaterialPropertyEffect::__get__materialPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> const& GlobalNamespace::MaterialPropertyEffect::__get__materialPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr void GlobalNamespace::MaterialPropertyEffect::__set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialPropertyBlockController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::MaterialPropertyEffect::__get__propertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyName;
}
constexpr ::StringW const& GlobalNamespace::MaterialPropertyEffect::__get__propertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyName;
}
constexpr void GlobalNamespace::MaterialPropertyEffect::__set__propertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____propertyName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::MaterialPropertyEffect::__get__propertyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyId;
}
constexpr int32_t const& GlobalNamespace::MaterialPropertyEffect::__get__propertyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyId;
}
constexpr void GlobalNamespace::MaterialPropertyEffect::__set__propertyId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____propertyId = value;
}
inline void GlobalNamespace::MaterialPropertyEffect::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyEffect*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyEffect::SetValue(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyEffect*>::get(), "SetValue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MaterialPropertyEffect::TriggerValue(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyEffect*>::get(), "TriggerValue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MaterialPropertyEffect* GlobalNamespace::MaterialPropertyEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MaterialPropertyEffect*>());
}
inline void GlobalNamespace::MaterialPropertyEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyEffect*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialPropertyEffect::MaterialPropertyEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
