#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/FormatterData.hpp"
#include "System/Runtime/Remoting/zzzz__ProviderData_impl.hpp"
#include "System/Runtime/Remoting/zzzz__FormatterData_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::FormatterData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::FormatterData::*)()>(&::System::Runtime::Remoting::FormatterData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3ccf7b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::FormatterData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::FormatterData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::FormatterData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::FormatterData* System::Runtime::Remoting::FormatterData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::FormatterData*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::FormatterData::FormatterData() {}
