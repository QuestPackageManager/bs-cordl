#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\Manager\TweakEnum.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__Tweak_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__TweakEnum_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugMember_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::TweakEnum.get_Member
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MemberInfo* (::Meta::XR::ImmersiveDebugger::Manager::TweakEnum::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::TweakEnum::get_Member)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a65ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::TweakEnum*>(), { "get_Member", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::TweakEnum.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::ImmersiveDebugger::Manager::TweakEnum::*)()>(&::Meta::XR::ImmersiveDebugger::Manager::TweakEnum::get_Value)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5a5a800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::TweakEnum*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::TweakEnum.set_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::TweakEnum::*)(::StringW)>(&::Meta::XR::ImmersiveDebugger::Manager::TweakEnum::set_Value)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5a5a6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::TweakEnum*>(), { "set_Value", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::TweakEnum._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::TweakEnum::*)(
    ::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::Meta::XR::ImmersiveDebugger::DebugMember*, ::System::Type*)>(
    &::Meta::XR::ImmersiveDebugger::Manager::TweakEnum::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a65bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::TweakEnum*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>(),
                                                                 ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugMember*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::TweakEnum.get_Tween
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::ImmersiveDebugger::Manager::TweakEnum::*)()>(&::Meta::XR::ImmersiveDebugger::Manager::TweakEnum::get_Tween)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a65bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::TweakEnum*>(), { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::TweakEnum*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::TweakEnum.set_Tween
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::TweakEnum::*)(float_t)>(&::Meta::XR::ImmersiveDebugger::Manager::TweakEnum::set_Tween)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a65bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::TweakEnum*>(), { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::TweakEnum*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Meta::XR::ImmersiveDebugger::Manager::TweakEnum::__cordl_internal_get__enumType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enumType;
}
constexpr ::System::Type* const& Meta::XR::ImmersiveDebugger::Manager::TweakEnum::__cordl_internal_get__enumType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enumType;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::TweakEnum::__cordl_internal_set__enumType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enumType = value;
}
constexpr float_t& Meta::XR::ImmersiveDebugger::Manager::TweakEnum::__cordl_internal_get__Tween_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Tween_k__BackingField;
}
constexpr float_t const& Meta::XR::ImmersiveDebugger::Manager::TweakEnum::__cordl_internal_get__Tween_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Tween_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::TweakEnum::__cordl_internal_set__Tween_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Tween_k__BackingField = value;
}
inline ::System::Reflection::MemberInfo* Meta::XR::ImmersiveDebugger::Manager::TweakEnum::get_Member() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::TweakEnum*>(), { "get_Member", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberInfo*>(this, ___internal_method);
}
inline ::StringW Meta::XR::ImmersiveDebugger::Manager::TweakEnum::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::TweakEnum*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Manager::TweakEnum::set_Value(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::TweakEnum*>(), { "set_Value", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::Manager::TweakEnum::_ctor(::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle,
                                                                   ::Meta::XR::ImmersiveDebugger::DebugMember* attribute, ::System::Type* enumType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::TweakEnum*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>(),
                                                               ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugMember*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberInfo, instanceHandle, attribute, enumType);
}
inline float_t Meta::XR::ImmersiveDebugger::Manager::TweakEnum::get_Tween() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::TweakEnum*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Manager::TweakEnum::set_Tween(float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::TweakEnum*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::XR::ImmersiveDebugger::Manager::TweakEnum* Meta::XR::ImmersiveDebugger::Manager::TweakEnum::New_ctor(::System::Reflection::MemberInfo* memberInfo,
                                                                                                                    ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle,
                                                                                                                    ::Meta::XR::ImmersiveDebugger::DebugMember* attribute, ::System::Type* enumType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::Manager::TweakEnum*>(memberInfo, instanceHandle, attribute, enumType));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Manager::TweakEnum::TweakEnum() {}
