#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__SinkProviderData_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::SinkProviderData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Channels::SinkProviderData::*)(::StringW)>(
    &::System::Runtime::Remoting::Channels::SinkProviderData::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x24a41d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::SinkProviderData*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::SinkProviderData.get_Children
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (::System::Runtime::Remoting::Channels::SinkProviderData::*)()>(
    &::System::Runtime::Remoting::Channels::SinkProviderData::get_Children)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a4280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::SinkProviderData*>::get(),
                                                                               "get_Children", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::SinkProviderData.get_Properties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (::System::Runtime::Remoting::Channels::SinkProviderData::*)()>(
    &::System::Runtime::Remoting::Channels::SinkProviderData::get_Properties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a4288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::SinkProviderData*>::get(),
                                                                               "get_Properties", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Remoting::Channels::SinkProviderData::__get_sinkName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___sinkName;
}
constexpr ::StringW const& System::Runtime::Remoting::Channels::SinkProviderData::__get_sinkName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___sinkName;
}
constexpr void System::Runtime::Remoting::Channels::SinkProviderData::__set_sinkName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sinkName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Runtime::Remoting::Channels::SinkProviderData::__get_children() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___children;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& System::Runtime::Remoting::Channels::SinkProviderData::__get_children() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___children;
}
constexpr void System::Runtime::Remoting::Channels::SinkProviderData::__set_children(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___children)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Runtime::Remoting::Channels::SinkProviderData::__get_properties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___properties;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Runtime::Remoting::Channels::SinkProviderData::__get_properties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___properties;
}
constexpr void System::Runtime::Remoting::Channels::SinkProviderData::__set_properties(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___properties)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Remoting::Channels::SinkProviderData* System::Runtime::Remoting::Channels::SinkProviderData::New_ctor(::StringW name) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Channels::SinkProviderData*>(name));
}
inline void System::Runtime::Remoting::Channels::SinkProviderData::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::SinkProviderData*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline ::System::Collections::IList* System::Runtime::Remoting::Channels::SinkProviderData::get_Children() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::SinkProviderData*>::get(),
                                                                             "get_Children", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*, false>(this, ___internal_method);
}
inline ::System::Collections::IDictionary* System::Runtime::Remoting::Channels::SinkProviderData::get_Properties() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::SinkProviderData*>::get(),
                                                                             "get_Properties", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Channels::SinkProviderData::SinkProviderData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
