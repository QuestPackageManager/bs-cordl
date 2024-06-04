#pragma once
// IWYU pragma private; include "System/Xml/OpenedHost.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__OpenedHost_def.hpp"
//  Writing Method size for method: ::System::Xml::OpenedHost._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::OpenedHost::*)()>(&::System::Xml::OpenedHost::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ed992c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::OpenedHost*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& System::Xml::OpenedHost::__cordl_internal_get_nonCachedConnectionsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nonCachedConnectionsCount;
}
constexpr int32_t const& System::Xml::OpenedHost::__cordl_internal_get_nonCachedConnectionsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nonCachedConnectionsCount;
}
constexpr void System::Xml::OpenedHost::__cordl_internal_set_nonCachedConnectionsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nonCachedConnectionsCount = value;
}
inline ::System::Xml::OpenedHost* System::Xml::OpenedHost::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::OpenedHost*>());
}
inline void System::Xml::OpenedHost::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::OpenedHost*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::OpenedHost::OpenedHost() {}
