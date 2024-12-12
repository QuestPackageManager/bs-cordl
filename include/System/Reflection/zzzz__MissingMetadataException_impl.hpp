#pragma once
// IWYU pragma private; include "System/Reflection/MissingMetadataException.hpp"
#include "System/zzzz__TypeAccessException_impl.hpp"
#include "System/Reflection/zzzz__MissingMetadataException_def.hpp"
//  Writing Method size for method: ::System::Reflection::MissingMetadataException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::MissingMetadataException::*)()>(&::System::Reflection::MissingMetadataException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d28e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::MissingMetadataException*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Reflection::MissingMetadataException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::MissingMetadataException*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Reflection::MissingMetadataException* System::Reflection::MissingMetadataException::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::MissingMetadataException*>());
}
// Ctor Parameters []
constexpr ::System::Reflection::MissingMetadataException::MissingMetadataException() {}
