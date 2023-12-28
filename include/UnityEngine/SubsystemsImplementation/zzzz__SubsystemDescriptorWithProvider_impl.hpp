#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/SubsystemsImplementation/zzzz__SubsystemDescriptorWithProvider_def.hpp"
#include "UnityEngine/zzzz__ISubsystem_def.hpp"
#include "UnityEngine/zzzz__ISubsystemDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider.get_id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::*)()>(
    &::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d1b498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>::get(), "get_id",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider.CreateImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ISubsystem* (::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::*)()>(
    &::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::CreateImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider.UnityEngine_ISubsystemDescriptor_Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ISubsystem* (::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::*)()>(
    &::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::UnityEngine_ISubsystemDescriptor_Create)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d1b4a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>::get(),
                                                 "UnityEngine.ISubsystemDescriptor.Create", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::*)()>(
    &::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d1b4ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ISubsystemDescriptor"
constexpr UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::operator ::UnityEngine::ISubsystemDescriptor*() noexcept {
  return static_cast<::UnityEngine::ISubsystemDescriptor*>(static_cast<void*>(this));
}
constexpr ::StringW& UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::__get__id_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id_k__BackingField;
}
constexpr ::StringW const& UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::__get__id_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id_k__BackingField;
}
constexpr void UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::__set__id_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____id_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::get_id() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>::get(), "get_id",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::ISubsystem* UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::CreateImpl() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>::get(), "CreateImpl",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ISubsystem*, false>(this, ___internal_method);
}
inline ::UnityEngine::ISubsystem* UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::UnityEngine_ISubsystemDescriptor_Create() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>::get(),
                                               "UnityEngine.ISubsystemDescriptor.Create", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ISubsystem*, false>(this, ___internal_method);
}
inline ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider* UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>());
}
inline void UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider::SubsystemDescriptorWithProvider() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
