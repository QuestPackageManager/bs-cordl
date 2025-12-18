#pragma once
// IWYU pragma private; include "UnityEngine/XR/Management/XRLoaderHelper.hpp"
#include "UnityEngine/XR/Management/zzzz__XRLoader_impl.hpp"
#include "UnityEngine/XR/Management/zzzz__XRLoaderHelper_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__ISubsystem_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Management::XRLoaderHelper.Deinitialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Management::XRLoaderHelper::*)()>(
    &::UnityEngine::XR::Management::XRLoaderHelper::Deinitialize)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6819f44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Management::XRLoaderHelper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Management::XRLoaderHelper*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Management::XRLoaderHelper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Management::XRLoaderHelper::*)()>(&::UnityEngine::XR::Management::XRLoaderHelper::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6819fa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Management::XRLoaderHelper*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ISubsystem*>*& UnityEngine::XR::Management::XRLoaderHelper::__cordl_internal_get_m_SubsystemInstanceMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubsystemInstanceMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ISubsystem*>* const&
UnityEngine::XR::Management::XRLoaderHelper::__cordl_internal_get_m_SubsystemInstanceMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubsystemInstanceMap;
}
constexpr void
UnityEngine::XR::Management::XRLoaderHelper::__cordl_internal_set_m_SubsystemInstanceMap(::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::ISubsystem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SubsystemInstanceMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline T UnityEngine::XR::Management::XRLoaderHelper::GetLoadedSubsystem() {
  auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                                  ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Management::XRLoaderHelper*>::get(), 8)));
  auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::XR::Management::XRLoaderHelper::StartSubsystem() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Management::XRLoaderHelper*>::get(), "StartSubsystem",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::XR::Management::XRLoaderHelper::StopSubsystem() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Management::XRLoaderHelper*>::get(), "StopSubsystem",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::XR::Management::XRLoaderHelper::DestroySubsystem() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Management::XRLoaderHelper*>::get(), "DestroySubsystem",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TDescriptor, typename TSubsystem>
inline void UnityEngine::XR::Management::XRLoaderHelper::CreateSubsystem(::System::Collections::Generic::List_1<TDescriptor>* descriptors, ::StringW id) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Management::XRLoaderHelper*>::get(), "CreateSubsystem",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubsystem>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<TDescriptor>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubsystem>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, descriptors, id);
}
template <typename TDescriptor, typename TSubsystem>
inline void UnityEngine::XR::Management::XRLoaderHelper::CreateIntegratedSubsystem(::System::Collections::Generic::List_1<TDescriptor>* descriptors, ::StringW id) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Management::XRLoaderHelper*>::get(), "CreateIntegratedSubsystem",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubsystem>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<TDescriptor>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubsystem>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, descriptors, id);
}
template <typename TDescriptor, typename TSubsystem>
inline void UnityEngine::XR::Management::XRLoaderHelper::CreateStandaloneSubsystem(::System::Collections::Generic::List_1<TDescriptor>* descriptors, ::StringW id) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Management::XRLoaderHelper*>::get(), "CreateStandaloneSubsystem",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubsystem>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<TDescriptor>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDescriptor>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubsystem>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, descriptors, id);
}
inline bool UnityEngine::XR::Management::XRLoaderHelper::Deinitialize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Management::XRLoaderHelper*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Management::XRLoaderHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Management::XRLoaderHelper*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::Management::XRLoaderHelper* UnityEngine::XR::Management::XRLoaderHelper::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Management::XRLoaderHelper*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Management::XRLoaderHelper::XRLoaderHelper() {}
