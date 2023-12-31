#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventSourceAttribute_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventSourceAttribute.set_Guid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Tracing::EventSourceAttribute::*)(::StringW)>(
    &::System::Diagnostics::Tracing::EventSourceAttribute::set_Guid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bf1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventSourceAttribute*>::get(), "set_Guid",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventSourceAttribute.set_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Tracing::EventSourceAttribute::*)(::StringW)>(
    &::System::Diagnostics::Tracing::EventSourceAttribute::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bf24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventSourceAttribute*>::get(), "set_Name",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Tracing::EventSourceAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Tracing::EventSourceAttribute::*)()>(
    &::System::Diagnostics::Tracing::EventSourceAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x257bf2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventSourceAttribute*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Diagnostics::Tracing::EventSourceAttribute::__get__Guid_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Guid_k__BackingField;
}
constexpr ::StringW const& System::Diagnostics::Tracing::EventSourceAttribute::__get__Guid_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Guid_k__BackingField;
}
constexpr void System::Diagnostics::Tracing::EventSourceAttribute::__set__Guid_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Guid_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Diagnostics::Tracing::EventSourceAttribute::__get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& System::Diagnostics::Tracing::EventSourceAttribute::__get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void System::Diagnostics::Tracing::EventSourceAttribute::__set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Name_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Diagnostics::Tracing::EventSourceAttribute::set_Guid(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventSourceAttribute*>::get(), "set_Guid",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Diagnostics::Tracing::EventSourceAttribute::set_Name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventSourceAttribute*>::get(), "set_Name",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Diagnostics::Tracing::EventSourceAttribute* System::Diagnostics::Tracing::EventSourceAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Diagnostics::Tracing::EventSourceAttribute*>());
}
inline void System::Diagnostics::Tracing::EventSourceAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Tracing::EventSourceAttribute*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::Tracing::EventSourceAttribute::EventSourceAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
