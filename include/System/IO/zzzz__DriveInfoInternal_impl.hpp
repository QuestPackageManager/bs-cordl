#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__DriveInfoInternal_def.hpp"
//  Writing Method size for method: ::System::IO::DriveInfoInternal.GetLogicalDrives
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (*)()>(&::System::IO::DriveInfoInternal::GetLogicalDrives)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25460dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::DriveInfoInternal*>::get(), "GetLogicalDrives",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::IO::DriveInfoInternal::GetLogicalDrives() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::DriveInfoInternal*>::get(), "GetLogicalDrives",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::IO::DriveInfoInternal::DriveInfoInternal() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
