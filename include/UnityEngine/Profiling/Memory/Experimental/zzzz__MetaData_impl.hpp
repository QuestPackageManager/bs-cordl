#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Profiling/Memory/Experimental/zzzz__MetaData_def.hpp"
//  Writing Method size for method: ::UnityEngine::Profiling::Memory::Experimental::MetaData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Profiling::Memory::Experimental::MetaData::*)()>(
    &::UnityEngine::Profiling::Memory::Experimental::MetaData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ce6cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Memory::Experimental::MetaData*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Profiling::Memory::Experimental::MetaData::__get_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___content;
}
constexpr ::StringW const& UnityEngine::Profiling::Memory::Experimental::MetaData::__get_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___content;
}
constexpr void UnityEngine::Profiling::Memory::Experimental::MetaData::__set_content(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___content)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::Profiling::Memory::Experimental::MetaData::__get_platform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___platform;
}
constexpr ::StringW const& UnityEngine::Profiling::Memory::Experimental::MetaData::__get_platform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___platform;
}
constexpr void UnityEngine::Profiling::Memory::Experimental::MetaData::__set_platform(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___platform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Profiling::Memory::Experimental::MetaData* UnityEngine::Profiling::Memory::Experimental::MetaData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Profiling::Memory::Experimental::MetaData*>());
}
inline void UnityEngine::Profiling::Memory::Experimental::MetaData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Memory::Experimental::MetaData*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Profiling::Memory::Experimental::MetaData::MetaData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
