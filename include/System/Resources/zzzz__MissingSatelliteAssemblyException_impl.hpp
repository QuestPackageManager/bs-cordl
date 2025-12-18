#pragma once
// IWYU pragma private; include "System/Resources/MissingSatelliteAssemblyException.hpp"
#include "System/zzzz__SystemException_impl.hpp"
#include "System/Resources/zzzz__MissingSatelliteAssemblyException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::System::Resources::MissingSatelliteAssemblyException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::MissingSatelliteAssemblyException::*)()>(
    &::System::Resources::MissingSatelliteAssemblyException::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x59c3094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::MissingSatelliteAssemblyException*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::MissingSatelliteAssemblyException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::MissingSatelliteAssemblyException::*)(::StringW, ::StringW)>(
    &::System::Resources::MissingSatelliteAssemblyException::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x59c30f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::MissingSatelliteAssemblyException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::MissingSatelliteAssemblyException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::MissingSatelliteAssemblyException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Resources::MissingSatelliteAssemblyException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59c3128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::MissingSatelliteAssemblyException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Resources::MissingSatelliteAssemblyException::__cordl_internal_get__cultureName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cultureName;
}
constexpr ::StringW const& System::Resources::MissingSatelliteAssemblyException::__cordl_internal_get__cultureName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cultureName;
}
constexpr void System::Resources::MissingSatelliteAssemblyException::__cordl_internal_set__cultureName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cultureName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Resources::MissingSatelliteAssemblyException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::MissingSatelliteAssemblyException*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Resources::MissingSatelliteAssemblyException::_ctor(::StringW message, ::StringW cultureName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::MissingSatelliteAssemblyException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, cultureName);
}
inline void System::Resources::MissingSatelliteAssemblyException::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::MissingSatelliteAssemblyException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline ::System::Resources::MissingSatelliteAssemblyException* System::Resources::MissingSatelliteAssemblyException::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Resources::MissingSatelliteAssemblyException*>());
}
inline ::System::Resources::MissingSatelliteAssemblyException* System::Resources::MissingSatelliteAssemblyException::New_ctor(::StringW message, ::StringW cultureName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Resources::MissingSatelliteAssemblyException*>(message, cultureName));
}
inline ::System::Resources::MissingSatelliteAssemblyException* System::Resources::MissingSatelliteAssemblyException::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                              ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Resources::MissingSatelliteAssemblyException*>(info, context));
}
// Ctor Parameters []
constexpr ::System::Resources::MissingSatelliteAssemblyException::MissingSatelliteAssemblyException() {}
