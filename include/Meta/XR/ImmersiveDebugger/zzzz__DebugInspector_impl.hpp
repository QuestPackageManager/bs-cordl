#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/DebugInspector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugInspector_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugInspector_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__InspectedHandle_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry.get_Handles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedHandle*>* (
    ::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::*)()>(&::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::get_Handles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5829ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry*>::get(), "get_Handles",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::*)(
    ::Meta::XR::ImmersiveDebugger::DebugInspector*)>(&::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::Initialize)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x58298e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::DebugInspector*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry.TryGetHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::*)(
    ::UnityEngine::Component*, ::ByRef<::Meta::XR::ImmersiveDebugger::InspectedHandle*>)>(&::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::TryGetHandle)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x582a2c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry*>::get(), "TryGetHandle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Component*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Meta::XR::ImmersiveDebugger::InspectedHandle*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::*)()>(
    &::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5829e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedHandle*>*& Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::__cordl_internal_get_handles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handles;
}
constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedHandle*>* const&
Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::__cordl_internal_get_handles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handles;
}
constexpr void
Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::__cordl_internal_set_handles(::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedHandle*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___handles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedHandle*>* Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::get_Handles() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry*>::get(), "get_Handles",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedHandle*>*, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::Initialize(::Meta::XR::ImmersiveDebugger::DebugInspector* owner) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::DebugInspector*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, owner);
}
inline bool Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::TryGetHandle(::UnityEngine::Component* component,
                                                                                         ::ByRef<::Meta::XR::ImmersiveDebugger::InspectedHandle*> inspectedHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry*>::get(), "TryGetHandle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Component*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Meta::XR::ImmersiveDebugger::InspectedHandle*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, component, inspectedHandle);
}
inline void Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry* Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::DebugInspector_InspectionRegistry() {}
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugInspector.get_Category
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Meta::XR::ImmersiveDebugger::DebugInspector::*)()>(
    &::Meta::XR::ImmersiveDebugger::DebugInspector::get_Category)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58298b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::DebugInspector*>::get(),
                                                                               "get_Category", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugInspector.get_Registry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry* (::Meta::XR::ImmersiveDebugger::DebugInspector::*)()>(&::Meta::XR::ImmersiveDebugger::DebugInspector::get_Registry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58298c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::DebugInspector*>::get(),
                                                                               "get_Registry", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugInspector.OnValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::DebugInspector::*)()>(
    &::Meta::XR::ImmersiveDebugger::DebugInspector::OnValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58298c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::DebugInspector*>::get(),
                                                                               "OnValidate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugInspector.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::DebugInspector::*)()>(
    &::Meta::XR::ImmersiveDebugger::DebugInspector::Initialize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58298cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::DebugInspector*>::get(),
                                                                               "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugInspector.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::DebugInspector::*)()>(
    &::Meta::XR::ImmersiveDebugger::DebugInspector::OnEnable)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5829bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::DebugInspector*>::get(),
                                                                               "OnEnable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugInspector.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::DebugInspector::*)()>(
    &::Meta::XR::ImmersiveDebugger::DebugInspector::OnDisable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5829d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::DebugInspector*>::get(),
                                                                               "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugInspector._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::DebugInspector::*)()>(&::Meta::XR::ImmersiveDebugger::DebugInspector::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5829e00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::DebugInspector*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::XR::ImmersiveDebugger::DebugInspector::__cordl_internal_get__category() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____category;
}
constexpr ::StringW const& Meta::XR::ImmersiveDebugger::DebugInspector::__cordl_internal_get__category() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____category;
}
constexpr void Meta::XR::ImmersiveDebugger::DebugInspector::__cordl_internal_set__category(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____category)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry*& Meta::XR::ImmersiveDebugger::DebugInspector::__cordl_internal_get_registry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registry;
}
constexpr ::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry* const& Meta::XR::ImmersiveDebugger::DebugInspector::__cordl_internal_get_registry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registry;
}
constexpr void Meta::XR::ImmersiveDebugger::DebugInspector::__cordl_internal_set_registry(::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___registry)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Meta::XR::ImmersiveDebugger::DebugInspector::get_Category() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::DebugInspector*>::get(),
                                                                             "get_Category", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry* Meta::XR::ImmersiveDebugger::DebugInspector::get_Registry() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::DebugInspector*>::get(),
                                                                             "get_Registry", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry*, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::DebugInspector::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::DebugInspector*>::get(),
                                                                             "OnValidate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::DebugInspector::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::DebugInspector*>::get(),
                                                                             "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::DebugInspector::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::DebugInspector*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::DebugInspector::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::DebugInspector*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::DebugInspector::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::DebugInspector*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::DebugInspector* Meta::XR::ImmersiveDebugger::DebugInspector::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::DebugInspector*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::DebugInspector::DebugInspector() {}
