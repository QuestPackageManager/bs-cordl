#pragma once
#include "JetBrains/Annotations/zzzz__ImplicitUseKindFlags_impl.hpp"
#include "JetBrains/Annotations/zzzz__ImplicitUseTargetFlags_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__UsedImplicitlyAttribute_def.hpp"
#include "JetBrains/Annotations/zzzz__ImplicitUseKindFlags_def.hpp"
#include "JetBrains/Annotations/zzzz__ImplicitUseTargetFlags_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::UsedImplicitlyAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::UsedImplicitlyAttribute::*)()>(
    &::JetBrains::Annotations::UsedImplicitlyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c9e630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::UsedImplicitlyAttribute*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::UsedImplicitlyAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::UsedImplicitlyAttribute::*)(
    ::JetBrains::Annotations::ImplicitUseKindFlags, ::JetBrains::Annotations::ImplicitUseTargetFlags)>(&::JetBrains::Annotations::UsedImplicitlyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2c9e654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::UsedImplicitlyAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::JetBrains::Annotations::ImplicitUseKindFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::JetBrains::Annotations::ImplicitUseTargetFlags>::get() })));
    return ___internal_method;
  }
};
constexpr ::JetBrains::Annotations::ImplicitUseKindFlags& JetBrains::Annotations::UsedImplicitlyAttribute::__get__UseKindFlags_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____UseKindFlags_k__BackingField;
}
constexpr ::JetBrains::Annotations::ImplicitUseKindFlags const& JetBrains::Annotations::UsedImplicitlyAttribute::__get__UseKindFlags_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____UseKindFlags_k__BackingField;
}
constexpr void JetBrains::Annotations::UsedImplicitlyAttribute::__set__UseKindFlags_k__BackingField(::JetBrains::Annotations::ImplicitUseKindFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____UseKindFlags_k__BackingField = value;
}
constexpr ::JetBrains::Annotations::ImplicitUseTargetFlags& JetBrains::Annotations::UsedImplicitlyAttribute::__get__TargetFlags_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____TargetFlags_k__BackingField;
}
constexpr ::JetBrains::Annotations::ImplicitUseTargetFlags const& JetBrains::Annotations::UsedImplicitlyAttribute::__get__TargetFlags_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____TargetFlags_k__BackingField;
}
constexpr void JetBrains::Annotations::UsedImplicitlyAttribute::__set__TargetFlags_k__BackingField(::JetBrains::Annotations::ImplicitUseTargetFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____TargetFlags_k__BackingField = value;
}
inline ::JetBrains::Annotations::UsedImplicitlyAttribute* JetBrains::Annotations::UsedImplicitlyAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::JetBrains::Annotations::UsedImplicitlyAttribute*>());
}
inline void JetBrains::Annotations::UsedImplicitlyAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::UsedImplicitlyAttribute*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::JetBrains::Annotations::UsedImplicitlyAttribute* JetBrains::Annotations::UsedImplicitlyAttribute::New_ctor(::JetBrains::Annotations::ImplicitUseKindFlags useKindFlags,
                                                                                                                    ::JetBrains::Annotations::ImplicitUseTargetFlags targetFlags) {
  return THROW_UNLESS(::il2cpp_utils::New<::JetBrains::Annotations::UsedImplicitlyAttribute*>(useKindFlags, targetFlags));
}
inline void JetBrains::Annotations::UsedImplicitlyAttribute::_ctor(::JetBrains::Annotations::ImplicitUseKindFlags useKindFlags, ::JetBrains::Annotations::ImplicitUseTargetFlags targetFlags) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::UsedImplicitlyAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::JetBrains::Annotations::ImplicitUseKindFlags>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::JetBrains::Annotations::ImplicitUseTargetFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, useKindFlags, targetFlags);
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::UsedImplicitlyAttribute::UsedImplicitlyAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
