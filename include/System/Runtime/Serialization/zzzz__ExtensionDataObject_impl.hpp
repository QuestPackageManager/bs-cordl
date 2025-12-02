#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ExtensionDataObject.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__ExtensionDataObject_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__ExtensionDataMember_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataObject._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ExtensionDataObject::*)()>(
    &::System::Runtime::Serialization::ExtensionDataObject::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f33dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataObject*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataObject.get_Members
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>* (
    ::System::Runtime::Serialization::ExtensionDataObject::*)()>(&::System::Runtime::Serialization::ExtensionDataObject::get_Members)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f33ddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataObject*>::get(),
                                                                               "get_Members", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ExtensionDataObject.set_Members
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ExtensionDataObject::*)(
    ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>*)>(&::System::Runtime::Serialization::ExtensionDataObject::set_Members)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f33de4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataObject*>::get(), "set_Members", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>*& System::Runtime::Serialization::ExtensionDataObject::__cordl_internal_get_members() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___members;
}
constexpr ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>* const&
System::Runtime::Serialization::ExtensionDataObject::__cordl_internal_get_members() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___members;
}
constexpr void
System::Runtime::Serialization::ExtensionDataObject::__cordl_internal_set_members(::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___members)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Serialization::ExtensionDataObject::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataObject*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>* System::Runtime::Serialization::ExtensionDataObject::get_Members() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataObject*>::get(),
                                                                             "get_Members", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>*, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ExtensionDataObject::set_Members(::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ExtensionDataObject*>::get(), "set_Members", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::Runtime::Serialization::ExtensionDataMember*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Runtime::Serialization::ExtensionDataObject* System::Runtime::Serialization::ExtensionDataObject::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::ExtensionDataObject*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ExtensionDataObject::ExtensionDataObject() {}
