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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedHandle*>* (
    ::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::*)()>(&::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::get_Handles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a3db80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry*>(), { "get_Handles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::*)(::Meta::XR::ImmersiveDebugger::DebugInspector*)>(
    &::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::Initialize)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x5a3d594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry*>(),
                                                                                           { "Initialize", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugInspector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry.TryGetHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::*)(
    ::UnityEngine::Component*, ::by_ref<::Meta::XR::ImmersiveDebugger::InspectedHandle*>)>(&::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::TryGetHandle)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5a3df74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry*>(),
                                                { "TryGetHandle", {}, { ::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::by_ref<::Meta::XR::ImmersiveDebugger::InspectedHandle*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::*)()>(
    &::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a3db0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry*>(), { ".ctor", {}, {} })));
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
  this->___handles = value;
}
inline ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedHandle*>* Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::get_Handles() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry*>(), { "get_Handles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedHandle*>*>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::Initialize(::Meta::XR::ImmersiveDebugger::DebugInspector* owner) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry*>(),
                                                                                         { "Initialize", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugInspector*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner);
}
inline bool Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::TryGetHandle(::UnityEngine::Component* component,
                                                                                         ::by_ref<::Meta::XR::ImmersiveDebugger::InspectedHandle*> inspectedHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry*>(),
                                              { "TryGetHandle", {}, { ::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::by_ref<::Meta::XR::ImmersiveDebugger::InspectedHandle*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component, inspectedHandle);
}
inline void Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry* Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry::DebugInspector_InspectionRegistry() {}
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugInspector.get_Category
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::ImmersiveDebugger::DebugInspector::*)()>(&::Meta::XR::ImmersiveDebugger::DebugInspector::get_Category)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a3d568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspector*>(), { "get_Category", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugInspector.get_Registry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry* (::Meta::XR::ImmersiveDebugger::DebugInspector::*)()>(
    &::Meta::XR::ImmersiveDebugger::DebugInspector::get_Registry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a3d570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspector*>(), { "get_Registry", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugInspector.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::DebugInspector::*)()>(&::Meta::XR::ImmersiveDebugger::DebugInspector::OnValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a3d578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspector*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugInspector.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::DebugInspector::*)()>(&::Meta::XR::ImmersiveDebugger::DebugInspector::Initialize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a3d57c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspector*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugInspector.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::DebugInspector::*)()>(&::Meta::XR::ImmersiveDebugger::DebugInspector::OnEnable)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a3d87c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspector*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugInspector.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::DebugInspector::*)()>(&::Meta::XR::ImmersiveDebugger::DebugInspector::OnDisable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a3d9e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspector*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugInspector._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::DebugInspector::*)()>(&::Meta::XR::ImmersiveDebugger::DebugInspector::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a3dab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspector*>(), { ".ctor", {}, {} })));
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
  this->____category = value;
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
  this->___registry = value;
}
inline ::StringW Meta::XR::ImmersiveDebugger::DebugInspector::get_Category() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspector*>(), { "get_Category", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry* Meta::XR::ImmersiveDebugger::DebugInspector::get_Registry() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspector*>(), { "get_Registry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry*>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::DebugInspector::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspector*>(), { "OnValidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::DebugInspector::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspector*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::DebugInspector::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspector*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::DebugInspector::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspector*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::DebugInspector::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspector*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::DebugInspector* Meta::XR::ImmersiveDebugger::DebugInspector::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::DebugInspector*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::DebugInspector::DebugInspector() {}
