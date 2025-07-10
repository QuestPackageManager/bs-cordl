#pragma once
// IWYU pragma private; include "System/ComponentModel/Design/Serialization/InstanceDescriptor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/Design/Serialization/zzzz__InstanceDescriptor_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::Design::Serialization::InstanceDescriptor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::Design::Serialization::InstanceDescriptor::*)(
    ::System::Reflection::MemberInfo*, ::System::Collections::ICollection*)>(&::System::ComponentModel::Design::Serialization::InstanceDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x447f454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::Serialization::InstanceDescriptor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::Serialization::InstanceDescriptor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::Design::Serialization::InstanceDescriptor::*)(
    ::System::Reflection::MemberInfo*, ::System::Collections::ICollection*, bool)>(&::System::ComponentModel::Design::Serialization::InstanceDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x447f45c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::Serialization::InstanceDescriptor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::Serialization::InstanceDescriptor.get_Arguments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (::System::ComponentModel::Design::Serialization::InstanceDescriptor::*)()>(
    &::System::ComponentModel::Design::Serialization::InstanceDescriptor::get_Arguments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x447f964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::Serialization::InstanceDescriptor*>::get(), "get_Arguments",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::Serialization::InstanceDescriptor.get_MemberInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MemberInfo* (::System::ComponentModel::Design::Serialization::InstanceDescriptor::*)()>(
    &::System::ComponentModel::Design::Serialization::InstanceDescriptor::get_MemberInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x447f96c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::Serialization::InstanceDescriptor*>::get(), "get_MemberInfo",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::Serialization::InstanceDescriptor.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::ComponentModel::Design::Serialization::InstanceDescriptor::*)()>(
    &::System::ComponentModel::Design::Serialization::InstanceDescriptor::Invoke)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x446f3c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::Serialization::InstanceDescriptor*>::get(), "Invoke",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::ICollection*& System::ComponentModel::Design::Serialization::InstanceDescriptor::__cordl_internal_get__Arguments_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Arguments_k__BackingField;
}
constexpr ::System::Collections::ICollection* const& System::ComponentModel::Design::Serialization::InstanceDescriptor::__cordl_internal_get__Arguments_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Arguments_k__BackingField;
}
constexpr void System::ComponentModel::Design::Serialization::InstanceDescriptor::__cordl_internal_set__Arguments_k__BackingField(::System::Collections::ICollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Arguments_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::ComponentModel::Design::Serialization::InstanceDescriptor::__cordl_internal_get__IsComplete_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsComplete_k__BackingField;
}
constexpr bool const& System::ComponentModel::Design::Serialization::InstanceDescriptor::__cordl_internal_get__IsComplete_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsComplete_k__BackingField;
}
constexpr void System::ComponentModel::Design::Serialization::InstanceDescriptor::__cordl_internal_set__IsComplete_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsComplete_k__BackingField = value;
}
constexpr ::System::Reflection::MemberInfo*& System::ComponentModel::Design::Serialization::InstanceDescriptor::__cordl_internal_get__MemberInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MemberInfo_k__BackingField;
}
constexpr ::System::Reflection::MemberInfo* const& System::ComponentModel::Design::Serialization::InstanceDescriptor::__cordl_internal_get__MemberInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MemberInfo_k__BackingField;
}
constexpr void System::ComponentModel::Design::Serialization::InstanceDescriptor::__cordl_internal_set__MemberInfo_k__BackingField(::System::Reflection::MemberInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____MemberInfo_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::ComponentModel::Design::Serialization::InstanceDescriptor::_ctor(::System::Reflection::MemberInfo* member, ::System::Collections::ICollection* arguments) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::Serialization::InstanceDescriptor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, member, arguments);
}
inline void System::ComponentModel::Design::Serialization::InstanceDescriptor::_ctor(::System::Reflection::MemberInfo* member, ::System::Collections::ICollection* arguments, bool isComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::Serialization::InstanceDescriptor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, member, arguments, isComplete);
}
inline ::System::Collections::ICollection* System::ComponentModel::Design::Serialization::InstanceDescriptor::get_Arguments() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::Serialization::InstanceDescriptor*>::get(), "get_Arguments",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(this, ___internal_method);
}
inline ::System::Reflection::MemberInfo* System::ComponentModel::Design::Serialization::InstanceDescriptor::get_MemberInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::Serialization::InstanceDescriptor*>::get(), "get_MemberInfo",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberInfo*, false>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::Design::Serialization::InstanceDescriptor::Invoke() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::Serialization::InstanceDescriptor*>::get(), "Invoke",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::Design::Serialization::InstanceDescriptor* System::ComponentModel::Design::Serialization::InstanceDescriptor::New_ctor(::System::Reflection::MemberInfo* member,
                                                                                                                                                        ::System::Collections::ICollection* arguments) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::Design::Serialization::InstanceDescriptor*>(member, arguments));
}
inline ::System::ComponentModel::Design::Serialization::InstanceDescriptor*
System::ComponentModel::Design::Serialization::InstanceDescriptor::New_ctor(::System::Reflection::MemberInfo* member, ::System::Collections::ICollection* arguments, bool isComplete) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::Design::Serialization::InstanceDescriptor*>(member, arguments, isComplete));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::Design::Serialization::InstanceDescriptor::InstanceDescriptor() {}
