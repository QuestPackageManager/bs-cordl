#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/DebugInspectorManager.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__DebugManagerAddon_1_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugInspectorManager_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__Category_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugInspector_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugMember_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__Telemetry_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugInspectorManager.RegisterInspector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::DebugInspectorManager::*)(::Meta::XR::ImmersiveDebugger::DebugInspector*)>(
    &::Meta::XR::ImmersiveDebugger::DebugInspectorManager::RegisterInspector)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a3d934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspectorManager*>(),
                                                                                           { "RegisterInspector", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugInspector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugInspectorManager.UnregisterInspector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::DebugInspectorManager::*)(::Meta::XR::ImmersiveDebugger::DebugInspector*)>(
    &::Meta::XR::ImmersiveDebugger::DebugInspectorManager::UnregisterInspector)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5a3da40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspectorManager*>(),
                                                                                           { "UnregisterInspector", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugInspector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugInspectorManager.get_Method
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::Telemetry_Method (::Meta::XR::ImmersiveDebugger::DebugInspectorManager::*)()>(
    &::Meta::XR::ImmersiveDebugger::DebugInspectorManager::get_Method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a3e97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspectorManager*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspectorManager*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugInspectorManager.OnReadyInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::DebugInspectorManager::*)()>(&::Meta::XR::ImmersiveDebugger::DebugInspectorManager::OnReadyInternal)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5a3e984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspectorManager*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspectorManager*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugInspectorManager.ProcessInspector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::DebugInspectorManager::*)(::Meta::XR::ImmersiveDebugger::DebugInspector*)>(
    &::Meta::XR::ImmersiveDebugger::DebugInspectorManager::ProcessInspector)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x5a3e194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspectorManager*>(),
                                                                                           { "ProcessInspector", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugInspector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugInspectorManager.UnprocessInspector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::DebugInspectorManager::*)(::Meta::XR::ImmersiveDebugger::DebugInspector*)>(
    &::Meta::XR::ImmersiveDebugger::DebugInspectorManager::UnprocessInspector)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x5a3e664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspectorManager*>(),
                                                                                           { "UnprocessInspector", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugInspector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugInspectorManager.UpdateCategory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::DebugInspectorManager::*)(
    ::Meta::XR::ImmersiveDebugger::DebugMember*, ::Meta::XR::ImmersiveDebugger::DebugInspector*)>(&::Meta::XR::ImmersiveDebugger::DebugInspectorManager::UpdateCategory)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5a3ebcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspectorManager*>(),
                            { "UpdateCategory", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugMember*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugInspector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugInspectorManager.FetchCategory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::Manager::Category (*)(::Meta::XR::ImmersiveDebugger::DebugMember*)>(
    &::Meta::XR::ImmersiveDebugger::DebugInspectorManager::FetchCategory)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a3ebfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspectorManager*>(),
                                                                                           { "FetchCategory", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugMember*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugInspectorManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::DebugInspectorManager::*)()>(&::Meta::XR::ImmersiveDebugger::DebugInspectorManager::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a3eccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspectorManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::DebugInspector>>*& Meta::XR::ImmersiveDebugger::DebugInspectorManager::__cordl_internal_get__inspectors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inspectors;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::DebugInspector>>* const&
Meta::XR::ImmersiveDebugger::DebugInspectorManager::__cordl_internal_get__inspectors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inspectors;
}
constexpr void
Meta::XR::ImmersiveDebugger::DebugInspectorManager::__cordl_internal_set__inspectors(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::DebugInspector>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inspectors = value;
}
inline void Meta::XR::ImmersiveDebugger::DebugInspectorManager::RegisterInspector(::Meta::XR::ImmersiveDebugger::DebugInspector* inspector) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspectorManager*>(),
                                                                                         { "RegisterInspector", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugInspector*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inspector);
}
inline void Meta::XR::ImmersiveDebugger::DebugInspectorManager::UnregisterInspector(::Meta::XR::ImmersiveDebugger::DebugInspector* inspector) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspectorManager*>(),
                                                                                         { "UnregisterInspector", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugInspector*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inspector);
}
inline ::Meta::XR::ImmersiveDebugger::Telemetry_Method Meta::XR::ImmersiveDebugger::DebugInspectorManager::get_Method() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspectorManager*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Telemetry_Method>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::DebugInspectorManager::OnReadyInternal() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspectorManager*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::DebugInspectorManager::ProcessInspector(::Meta::XR::ImmersiveDebugger::DebugInspector* inspector) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspectorManager*>(),
                                                                                         { "ProcessInspector", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugInspector*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inspector);
}
inline void Meta::XR::ImmersiveDebugger::DebugInspectorManager::UnprocessInspector(::Meta::XR::ImmersiveDebugger::DebugInspector* inspector) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspectorManager*>(),
                                                                                         { "UnprocessInspector", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugInspector*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inspector);
}
inline void Meta::XR::ImmersiveDebugger::DebugInspectorManager::UpdateCategory(::Meta::XR::ImmersiveDebugger::DebugMember* attribute, ::Meta::XR::ImmersiveDebugger::DebugInspector* inspector) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspectorManager*>(),
                                       { "UpdateCategory", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugMember*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugInspector*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attribute, inspector);
}
inline ::Meta::XR::ImmersiveDebugger::Manager::Category Meta::XR::ImmersiveDebugger::DebugInspectorManager::FetchCategory(::Meta::XR::ImmersiveDebugger::DebugMember* attribute) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspectorManager*>(),
                                                                                         { "FetchCategory", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugMember*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Manager::Category>(nullptr, ___internal_method, attribute);
}
inline void Meta::XR::ImmersiveDebugger::DebugInspectorManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugInspectorManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::DebugInspectorManager* Meta::XR::ImmersiveDebugger::DebugInspectorManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::DebugInspectorManager*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::DebugInspectorManager::DebugInspectorManager() {}
