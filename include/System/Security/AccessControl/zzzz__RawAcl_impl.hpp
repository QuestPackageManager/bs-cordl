#pragma once
#include "System/Security/AccessControl/zzzz__GenericAcl_impl.hpp"
#include "System/Security/AccessControl/zzzz__RawAcl_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Security/AccessControl/zzzz__GenericAce_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::RawAcl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::RawAcl::*)(uint8_t, int32_t)>(
    &::System::Security::AccessControl::RawAcl::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2704b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::RawAcl*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::RawAcl.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::AccessControl::RawAcl::*)()>(&::System::Security::AccessControl::RawAcl::get_Count)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x27082cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::RawAcl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::RawAcl*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::RawAcl.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::GenericAce* (::System::Security::AccessControl::RawAcl::*)(int32_t)>(
    &::System::Security::AccessControl::RawAcl::get_Item)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2708314;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::RawAcl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::RawAcl*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::RawAcl.set_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::RawAcl::*)(int32_t, ::System::Security::AccessControl::GenericAce*)>(
    &::System::Security::AccessControl::RawAcl::set_Item)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x270836c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::RawAcl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::RawAcl*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::RawAcl.InsertAce
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::RawAcl::*)(int32_t, ::System::Security::AccessControl::GenericAce*)>(
    &::System::Security::AccessControl::RawAcl::InsertAce)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x270623c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::RawAcl*>::get(), "InsertAce", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::GenericAce*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::RawAcl.RemoveAce
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::RawAcl::*)(int32_t)>(
    &::System::Security::AccessControl::RawAcl::RemoveAce)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2705c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::RawAcl*>::get(), "RemoveAce", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr uint8_t& System::Security::AccessControl::RawAcl::__cordl_internal_get_revision() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___revision;
}
constexpr uint8_t const& System::Security::AccessControl::RawAcl::__cordl_internal_get_revision() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___revision;
}
constexpr void System::Security::AccessControl::RawAcl::__cordl_internal_set_revision(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___revision = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Security::AccessControl::GenericAce*>*& System::Security::AccessControl::RawAcl::__cordl_internal_get_list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Security::AccessControl::GenericAce*>*> const&
System::Security::AccessControl::RawAcl::__cordl_internal_get_list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
constexpr void System::Security::AccessControl::RawAcl::__cordl_internal_set_list(::System::Collections::Generic::List_1<::System::Security::AccessControl::GenericAce*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___list)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Security::AccessControl::RawAcl* System::Security::AccessControl::RawAcl::New_ctor(uint8_t revision, int32_t capacity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::AccessControl::RawAcl*>(revision, capacity));
}
inline void System::Security::AccessControl::RawAcl::_ctor(uint8_t revision, int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::RawAcl*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, revision, capacity);
}
inline int32_t System::Security::AccessControl::RawAcl::get_Count() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::RawAcl*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Security::AccessControl::GenericAce* System::Security::AccessControl::RawAcl::get_Item(int32_t index) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::RawAcl*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::GenericAce*, false>(this, ___internal_method, index);
}
inline void System::Security::AccessControl::RawAcl::set_Item(int32_t index, ::System::Security::AccessControl::GenericAce* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::RawAcl*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
inline void System::Security::AccessControl::RawAcl::InsertAce(int32_t index, ::System::Security::AccessControl::GenericAce* ace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::RawAcl*>::get(), "InsertAce", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::GenericAce*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, ace);
}
inline void System::Security::AccessControl::RawAcl::RemoveAce(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::RawAcl*>::get(), "RemoveAce",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::RawAcl::RawAcl() {}
