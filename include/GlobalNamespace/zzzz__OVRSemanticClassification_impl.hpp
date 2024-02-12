#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSemanticClassification_def.hpp"
#include "GlobalNamespace/zzzz__IOVRSceneComponent_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSemanticClassification.get_Labels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::StringW>* (::GlobalNamespace::OVRSemanticClassification::*)()>(
    &::GlobalNamespace::OVRSemanticClassification::get_Labels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27a77c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSemanticClassification*>::get(),
                                                                               "get_Labels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSemanticClassification.Contains
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSemanticClassification::*)(::StringW)>(
    &::GlobalNamespace::OVRSemanticClassification::Contains)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x27a77c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSemanticClassification*>::get(), "Contains", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSemanticClassification.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSemanticClassification::*)()>(&::GlobalNamespace::OVRSemanticClassification::Awake)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x27a7928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSemanticClassification*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSemanticClassification.IOVRSceneComponent_Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSemanticClassification::*)()>(
    &::GlobalNamespace::OVRSemanticClassification::IOVRSceneComponent_Initialize)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x27a79f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSemanticClassification*>::get(),
                                                                               "IOVRSceneComponent.Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSemanticClassification._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSemanticClassification::*)()>(&::GlobalNamespace::OVRSemanticClassification::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x27a7b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSemanticClassification*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IOVRSceneComponent"
constexpr GlobalNamespace::OVRSemanticClassification::operator ::GlobalNamespace::IOVRSceneComponent*() noexcept {
  return static_cast<::GlobalNamespace::IOVRSceneComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IOVRSceneComponent"
constexpr ::GlobalNamespace::IOVRSceneComponent* GlobalNamespace::OVRSemanticClassification::i___GlobalNamespace__IOVRSceneComponent() noexcept {
  return static_cast<::GlobalNamespace::IOVRSceneComponent*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::OVRSemanticClassification::__cordl_internal_get__labels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____labels;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GlobalNamespace::OVRSemanticClassification::__cordl_internal_get__labels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____labels;
}
constexpr void GlobalNamespace::OVRSemanticClassification::__cordl_internal_set__labels(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____labels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* GlobalNamespace::OVRSemanticClassification::get_Labels() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSemanticClassification*>::get(), "get_Labels",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::StringW>*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSemanticClassification::Contains(::StringW label) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSemanticClassification*>::get(), "Contains", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, label);
}
inline void GlobalNamespace::OVRSemanticClassification::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSemanticClassification*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSemanticClassification::IOVRSceneComponent_Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSemanticClassification*>::get(),
                                                                             "IOVRSceneComponent.Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSemanticClassification* GlobalNamespace::OVRSemanticClassification::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRSemanticClassification*>());
}
inline void GlobalNamespace::OVRSemanticClassification::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSemanticClassification*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSemanticClassification::OVRSemanticClassification() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
