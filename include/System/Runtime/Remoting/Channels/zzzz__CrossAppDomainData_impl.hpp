#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Channels/CrossAppDomainData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__CrossAppDomainData_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Channels::CrossAppDomainData::*)(int32_t)>(
    &::System::Runtime::Remoting::Channels::CrossAppDomainData::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3cddfec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainData*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainData.get_DomainID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Remoting::Channels::CrossAppDomainData::*)()>(
    &::System::Runtime::Remoting::Channels::CrossAppDomainData::get_DomainID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cde094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainData*>::get(), "get_DomainID",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainData.get_ProcessID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::Channels::CrossAppDomainData::*)()>(
    &::System::Runtime::Remoting::Channels::CrossAppDomainData::get_ProcessID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cde09c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainData*>::get(), "get_ProcessID",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Runtime::Remoting::Channels::CrossAppDomainData::__cordl_internal_get__ContextID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ContextID;
}
constexpr ::System::Object* const& System::Runtime::Remoting::Channels::CrossAppDomainData::__cordl_internal_get__ContextID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ContextID;
}
constexpr void System::Runtime::Remoting::Channels::CrossAppDomainData::__cordl_internal_set__ContextID(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ContextID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Runtime::Remoting::Channels::CrossAppDomainData::__cordl_internal_get__DomainID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DomainID;
}
constexpr int32_t const& System::Runtime::Remoting::Channels::CrossAppDomainData::__cordl_internal_get__DomainID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DomainID;
}
constexpr void System::Runtime::Remoting::Channels::CrossAppDomainData::__cordl_internal_set__DomainID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DomainID = value;
}
constexpr ::StringW& System::Runtime::Remoting::Channels::CrossAppDomainData::__cordl_internal_get__processGuid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____processGuid;
}
constexpr ::StringW const& System::Runtime::Remoting::Channels::CrossAppDomainData::__cordl_internal_get__processGuid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____processGuid;
}
constexpr void System::Runtime::Remoting::Channels::CrossAppDomainData::__cordl_internal_set__processGuid(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____processGuid)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Remoting::Channels::CrossAppDomainData::_ctor(int32_t domainId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, domainId);
}
inline int32_t System::Runtime::Remoting::Channels::CrossAppDomainData::get_DomainID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainData*>::get(),
                                                                             "get_DomainID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::Channels::CrossAppDomainData::get_ProcessID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainData*>::get(),
                                                                             "get_ProcessID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Channels::CrossAppDomainData* System::Runtime::Remoting::Channels::CrossAppDomainData::New_ctor(int32_t domainId) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Channels::CrossAppDomainData*>(domainId));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Channels::CrossAppDomainData::CrossAppDomainData() {}
