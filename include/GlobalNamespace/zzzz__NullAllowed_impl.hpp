#pragma once
#include "GlobalNamespace/zzzz__NullAllowed_impl.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__NullAllowed_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "GlobalNamespace/zzzz__NullAllowed_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__NullAllowed__Context::__NullAllowed__Context(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__NullAllowed__Context::__NullAllowed__Context() {}
constexpr ::GlobalNamespace::__NullAllowed__Context GlobalNamespace::__NullAllowed__Context::Everywhere{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__NullAllowed__Context GlobalNamespace::__NullAllowed__Context::Prefab{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::NullAllowed._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NullAllowed::*)()>(&::GlobalNamespace::NullAllowed::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1fac2d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullAllowed*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NullAllowed._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NullAllowed::*)(::GlobalNamespace::__NullAllowed__Context)>(
    &::GlobalNamespace::NullAllowed::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1fac2ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullAllowed*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NullAllowed__Context>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NullAllowed._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NullAllowed::*)(::StringW, ::System::Object*)>(&::GlobalNamespace::NullAllowed::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1fac314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullAllowed*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__NullAllowed__Context& GlobalNamespace::NullAllowed::__get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::GlobalNamespace::__NullAllowed__Context const& GlobalNamespace::NullAllowed::__get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void GlobalNamespace::NullAllowed::__set_context(::GlobalNamespace::__NullAllowed__Context value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___context = value;
}
constexpr ::StringW& GlobalNamespace::NullAllowed::__get_propertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyName;
}
constexpr ::StringW const& GlobalNamespace::NullAllowed::__get_propertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyName;
}
constexpr void GlobalNamespace::NullAllowed::__set_propertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___propertyName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& GlobalNamespace::NullAllowed::__get_ifNotValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ifNotValue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::NullAllowed::__get_ifNotValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ifNotValue;
}
constexpr void GlobalNamespace::NullAllowed::__set_ifNotValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ifNotValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::NullAllowed* GlobalNamespace::NullAllowed::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NullAllowed*>());
}
inline void GlobalNamespace::NullAllowed::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullAllowed*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NullAllowed* GlobalNamespace::NullAllowed::New_ctor(::GlobalNamespace::__NullAllowed__Context context) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NullAllowed*>(context));
}
inline void GlobalNamespace::NullAllowed::_ctor(::GlobalNamespace::__NullAllowed__Context context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullAllowed*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NullAllowed__Context>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline ::GlobalNamespace::NullAllowed* GlobalNamespace::NullAllowed::New_ctor(::StringW propertyName, ::System::Object* ifNotValue) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NullAllowed*>(propertyName, ifNotValue));
}
inline void GlobalNamespace::NullAllowed::_ctor(::StringW propertyName, ::System::Object* ifNotValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullAllowed*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, propertyName, ifNotValue);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NullAllowed::NullAllowed() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
