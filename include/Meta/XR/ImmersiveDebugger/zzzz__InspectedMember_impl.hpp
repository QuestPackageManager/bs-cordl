#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/InspectedMember.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__InspectedItemBase_impl.hpp"
#include "System/Reflection/zzzz__BindingFlags_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__InspectedMember_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugGizmoType_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugMember_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedMember.get_SupportedGizmos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugGizmoType>* (::Meta::XR::ImmersiveDebugger::InspectedMember::*)()>(
    &::Meta::XR::ImmersiveDebugger::InspectedMember::get_SupportedGizmos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a3f91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedMember*>(), { "get_SupportedGizmos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedMember.set_SupportedGizmos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::InspectedMember::*)(
    ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugGizmoType>*)>(&::Meta::XR::ImmersiveDebugger::InspectedMember::set_SupportedGizmos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a3f924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedMember*>(),
                                                { "set_SupportedGizmos", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugGizmoType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedMember.get_MemberInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MemberInfo* (::Meta::XR::ImmersiveDebugger::InspectedMember::*)()>(
    &::Meta::XR::ImmersiveDebugger::InspectedMember::get_MemberInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a3f92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedMember*>(), { "get_MemberInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedMember.set_MemberInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::InspectedMember::*)(::System::Reflection::MemberInfo*)>(
    &::Meta::XR::ImmersiveDebugger::InspectedMember::set_MemberInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a3f934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedMember*>(), { "set_MemberInfo", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedMember._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::InspectedMember::*)(::System::Reflection::MemberInfo*)>(
    &::Meta::XR::ImmersiveDebugger::InspectedMember::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5a3f860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedMember*>(), { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedMember.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::InspectedMember::*)()>(&::Meta::XR::ImmersiveDebugger::InspectedMember::Initialize)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5a3ef84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedMember*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedMember.PopulateSupportedGizmos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::InspectedMember::*)(
    ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugGizmoType>*)>(&::Meta::XR::ImmersiveDebugger::InspectedMember::PopulateSupportedGizmos)> {
  constexpr static std::size_t size = 0x5ec;
  constexpr static std::size_t addrs = 0x5a3f93c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedMember*>(),
                                                { "PopulateSupportedGizmos", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugGizmoType>*>() } })));
    return ___internal_method;
  }
};
constexpr ::Meta::XR::ImmersiveDebugger::DebugMember*& Meta::XR::ImmersiveDebugger::InspectedMember::__cordl_internal_get_attribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attribute;
}
constexpr ::Meta::XR::ImmersiveDebugger::DebugMember* const& Meta::XR::ImmersiveDebugger::InspectedMember::__cordl_internal_get_attribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attribute;
}
constexpr void Meta::XR::ImmersiveDebugger::InspectedMember::__cordl_internal_set_attribute(::Meta::XR::ImmersiveDebugger::DebugMember* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attribute = value;
}
constexpr ::StringW& Meta::XR::ImmersiveDebugger::InspectedMember::__cordl_internal_get_memberName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberName;
}
constexpr ::StringW const& Meta::XR::ImmersiveDebugger::InspectedMember::__cordl_internal_get_memberName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberName;
}
constexpr void Meta::XR::ImmersiveDebugger::InspectedMember::__cordl_internal_set_memberName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberName = value;
}
constexpr int32_t& Meta::XR::ImmersiveDebugger::InspectedMember::__cordl_internal_get__editorSelectedGizmoIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editorSelectedGizmoIndex;
}
constexpr int32_t const& Meta::XR::ImmersiveDebugger::InspectedMember::__cordl_internal_get__editorSelectedGizmoIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editorSelectedGizmoIndex;
}
constexpr void Meta::XR::ImmersiveDebugger::InspectedMember::__cordl_internal_set__editorSelectedGizmoIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____editorSelectedGizmoIndex = value;
}
constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugGizmoType>*&
Meta::XR::ImmersiveDebugger::InspectedMember::__cordl_internal_get__SupportedGizmos_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SupportedGizmos_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugGizmoType>* const&
Meta::XR::ImmersiveDebugger::InspectedMember::__cordl_internal_get__SupportedGizmos_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SupportedGizmos_k__BackingField;
}
constexpr void
Meta::XR::ImmersiveDebugger::InspectedMember::__cordl_internal_set__SupportedGizmos_k__BackingField(::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugGizmoType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SupportedGizmos_k__BackingField = value;
}
constexpr ::System::Reflection::MemberInfo*& Meta::XR::ImmersiveDebugger::InspectedMember::__cordl_internal_get__MemberInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MemberInfo_k__BackingField;
}
constexpr ::System::Reflection::MemberInfo* const& Meta::XR::ImmersiveDebugger::InspectedMember::__cordl_internal_get__MemberInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MemberInfo_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::InspectedMember::__cordl_internal_set__MemberInfo_k__BackingField(::System::Reflection::MemberInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MemberInfo_k__BackingField = value;
}
inline ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugGizmoType>* Meta::XR::ImmersiveDebugger::InspectedMember::get_SupportedGizmos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedMember*>(), { "get_SupportedGizmos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugGizmoType>*>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::InspectedMember::set_SupportedGizmos(::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugGizmoType>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedMember*>(),
                                              { "set_SupportedGizmos", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugGizmoType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Reflection::MemberInfo* Meta::XR::ImmersiveDebugger::InspectedMember::get_MemberInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedMember*>(), { "get_MemberInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberInfo*>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::InspectedMember::set_MemberInfo(::System::Reflection::MemberInfo* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedMember*>(), { "set_MemberInfo", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::InspectedMember::_ctor(::System::Reflection::MemberInfo* member) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedMember*>(), { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, member);
}
inline void Meta::XR::ImmersiveDebugger::InspectedMember::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedMember*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::InspectedMember::PopulateSupportedGizmos(::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugGizmoType>* supportedGizmos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedMember*>(),
                                              { "PopulateSupportedGizmos", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugGizmoType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, supportedGizmos);
}
inline ::Meta::XR::ImmersiveDebugger::InspectedMember* Meta::XR::ImmersiveDebugger::InspectedMember::New_ctor(::System::Reflection::MemberInfo* member) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::InspectedMember*>(member));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::InspectedMember::InspectedMember() {}
constexpr ::System::Reflection::BindingFlags Meta::XR::ImmersiveDebugger::InspectedMember::Flags{ static_cast<int32_t>(0x3e) };
