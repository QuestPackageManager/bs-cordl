#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/CowatchViewerUpdate.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__CowatchViewerUpdate_def.hpp"
#include "Oculus/Platform/Models/zzzz__CowatchViewerList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::CowatchViewerUpdate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::CowatchViewerUpdate::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::CowatchViewerUpdate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5c4106c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::CowatchViewerUpdate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::Models::CowatchViewerList*& Oculus::Platform::Models::CowatchViewerUpdate::__cordl_internal_get_DataList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DataList;
}
constexpr ::Oculus::Platform::Models::CowatchViewerList* const& Oculus::Platform::Models::CowatchViewerUpdate::__cordl_internal_get_DataList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DataList;
}
constexpr void Oculus::Platform::Models::CowatchViewerUpdate::__cordl_internal_set_DataList(::Oculus::Platform::Models::CowatchViewerList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DataList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint64_t& Oculus::Platform::Models::CowatchViewerUpdate::__cordl_internal_get_Id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Id;
}
constexpr uint64_t const& Oculus::Platform::Models::CowatchViewerUpdate::__cordl_internal_get_Id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Id;
}
constexpr void Oculus::Platform::Models::CowatchViewerUpdate::__cordl_internal_set_Id(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Id = value;
}
inline void Oculus::Platform::Models::CowatchViewerUpdate::_ctor(::System::IntPtr o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::CowatchViewerUpdate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::CowatchViewerUpdate* Oculus::Platform::Models::CowatchViewerUpdate::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::CowatchViewerUpdate*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::CowatchViewerUpdate::CowatchViewerUpdate() {}
