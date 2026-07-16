#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/InspectedHandle.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__InspectedItemBase_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__InspectedHandle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugInspector_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__InspectedMember_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedHandle.get_InstanceHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle (::Meta::XR::ImmersiveDebugger::InspectedHandle::*)()>(
    &::Meta::XR::ImmersiveDebugger::InspectedHandle::get_InstanceHandle)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a3f438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedHandle*>(), { "get_InstanceHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedHandle.set_InstanceHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::InspectedHandle::*)(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle)>(
    &::Meta::XR::ImmersiveDebugger::InspectedHandle::set_InstanceHandle)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a3f44c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedHandle*>(),
                                                                                           { "set_InstanceHandle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedHandle.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Meta::XR::ImmersiveDebugger::InspectedHandle::*)()>(&::Meta::XR::ImmersiveDebugger::InspectedHandle::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a3f460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedHandle*>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedHandle.set_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::InspectedHandle::*)(::System::Type*)>(&::Meta::XR::ImmersiveDebugger::InspectedHandle::set_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a3f468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedHandle*>(), { "set_Type", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::InspectedHandle::*)(::Meta::XR::ImmersiveDebugger::DebugInspector*, ::System::Type*)>(
    &::Meta::XR::ImmersiveDebugger::InspectedHandle::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a3e0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedHandle*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugInspector*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedHandle.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::InspectedHandle::*)(::Meta::XR::ImmersiveDebugger::DebugInspector*)>(
    &::Meta::XR::ImmersiveDebugger::InspectedHandle::Initialize)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x5a3db88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedHandle*>(),
                                                                                           { "Initialize", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugInspector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedHandle.TryGetMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::InspectedHandle::*)(
    ::System::Reflection::MemberInfo*, ::by_ref<::Meta::XR::ImmersiveDebugger::InspectedMember*>)>(&::Meta::XR::ImmersiveDebugger::InspectedHandle::TryGetMember)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5a3f510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedHandle*>(),
                            { "TryGetMember", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::by_ref<::Meta::XR::ImmersiveDebugger::InspectedMember*>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>*& Meta::XR::ImmersiveDebugger::InspectedHandle::__cordl_internal_get_inspectedMembers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inspectedMembers;
}
constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>* const& Meta::XR::ImmersiveDebugger::InspectedHandle::__cordl_internal_get_inspectedMembers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inspectedMembers;
}
constexpr void Meta::XR::ImmersiveDebugger::InspectedHandle::__cordl_internal_set_inspectedMembers(::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inspectedMembers = value;
}
constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle& Meta::XR::ImmersiveDebugger::InspectedHandle::__cordl_internal_get__InstanceHandle_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InstanceHandle_k__BackingField;
}
constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle const& Meta::XR::ImmersiveDebugger::InspectedHandle::__cordl_internal_get__InstanceHandle_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InstanceHandle_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::InspectedHandle::__cordl_internal_set__InstanceHandle_k__BackingField(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____InstanceHandle_k__BackingField = value;
}
constexpr ::System::Type*& Meta::XR::ImmersiveDebugger::InspectedHandle::__cordl_internal_get__Type_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr ::System::Type* const& Meta::XR::ImmersiveDebugger::InspectedHandle::__cordl_internal_get__Type_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::InspectedHandle::__cordl_internal_set__Type_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Type_k__BackingField = value;
}
inline ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle Meta::XR::ImmersiveDebugger::InspectedHandle::get_InstanceHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedHandle*>(), { "get_InstanceHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::InspectedHandle::set_InstanceHandle(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedHandle*>(),
                                                                                         { "set_InstanceHandle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Type* Meta::XR::ImmersiveDebugger::InspectedHandle::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedHandle*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::InspectedHandle::set_Type(::System::Type* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedHandle*>(), { "set_Type", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::InspectedHandle::_ctor(::Meta::XR::ImmersiveDebugger::DebugInspector* owner, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedHandle*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugInspector*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, type);
}
inline void Meta::XR::ImmersiveDebugger::InspectedHandle::Initialize(::Meta::XR::ImmersiveDebugger::DebugInspector* owner) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedHandle*>(),
                                                                                         { "Initialize", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugInspector*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner);
}
inline bool Meta::XR::ImmersiveDebugger::InspectedHandle::TryGetMember(::System::Reflection::MemberInfo* memberInfo, ::by_ref<::Meta::XR::ImmersiveDebugger::InspectedMember*> inspectedMember) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedHandle*>(),
                                       { "TryGetMember", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::by_ref<::Meta::XR::ImmersiveDebugger::InspectedMember*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, memberInfo, inspectedMember);
}
inline ::Meta::XR::ImmersiveDebugger::InspectedHandle* Meta::XR::ImmersiveDebugger::InspectedHandle::New_ctor(::Meta::XR::ImmersiveDebugger::DebugInspector* owner, ::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::InspectedHandle*>(owner, type));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::InspectedHandle::InspectedHandle() {}
