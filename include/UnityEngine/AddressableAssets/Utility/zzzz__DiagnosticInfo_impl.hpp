#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AddressableAssets/Utility/zzzz__DiagnosticInfo_def.hpp"
#include "UnityEngine/ResourceManagement/Diagnostics/zzzz__DiagnosticEvent_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Utility::DiagnosticInfo.CreateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent (
    ::UnityEngine::AddressableAssets::Utility::DiagnosticInfo::*)(::StringW, ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType, int32_t, int32_t)>(
    &::UnityEngine::AddressableAssets::Utility::DiagnosticInfo::CreateEvent)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2a28770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Utility::DiagnosticInfo*>::get(), "CreateEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Utility::DiagnosticInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::Utility::DiagnosticInfo::*)()>(
    &::UnityEngine::AddressableAssets::Utility::DiagnosticInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a287b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Utility::DiagnosticInfo*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::AddressableAssets::Utility::DiagnosticInfo::__get_DisplayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisplayName;
}
constexpr ::StringW const& UnityEngine::AddressableAssets::Utility::DiagnosticInfo::__get_DisplayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisplayName;
}
constexpr void UnityEngine::AddressableAssets::Utility::DiagnosticInfo::__set_DisplayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DisplayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::AddressableAssets::Utility::DiagnosticInfo::__get_ObjectId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ObjectId;
}
constexpr int32_t const& UnityEngine::AddressableAssets::Utility::DiagnosticInfo::__get_ObjectId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ObjectId;
}
constexpr void UnityEngine::AddressableAssets::Utility::DiagnosticInfo::__set_ObjectId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ObjectId = value;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& UnityEngine::AddressableAssets::Utility::DiagnosticInfo::__get_Dependencies() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Dependencies;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& UnityEngine::AddressableAssets::Utility::DiagnosticInfo::__get_Dependencies() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Dependencies;
}
constexpr void UnityEngine::AddressableAssets::Utility::DiagnosticInfo::__set_Dependencies(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Dependencies)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent
UnityEngine::AddressableAssets::Utility::DiagnosticInfo::CreateEvent(::StringW category, ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType eventType, int32_t frame,
                                                                     int32_t val) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Utility::DiagnosticInfo*>::get(), "CreateEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent, false>(this, ___internal_method, category, eventType, frame, val);
}
inline ::UnityEngine::AddressableAssets::Utility::DiagnosticInfo* UnityEngine::AddressableAssets::Utility::DiagnosticInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::AddressableAssets::Utility::DiagnosticInfo*>());
}
inline void UnityEngine::AddressableAssets::Utility::DiagnosticInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Utility::DiagnosticInfo*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::AddressableAssets::Utility::DiagnosticInfo::DiagnosticInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
