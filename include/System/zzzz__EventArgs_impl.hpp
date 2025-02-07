#pragma once
// IWYU pragma private; include "System/EventArgs.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__EventArgs_def.hpp"
//  Writing Method size for method: ::System::EventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::EventArgs::*)()>(&::System::EventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3dd95a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::EventArgs*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::EventArgs::setStaticF_Empty(::System::EventArgs* value) {
  ::cordl_internals::setStaticField<::System::EventArgs*, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::EventArgs*>::get>(std::forward<::System::EventArgs*>(value));
}
inline ::System::EventArgs* System::EventArgs::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<::System::EventArgs*, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::EventArgs*>::get>();
}
inline void System::EventArgs::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::EventArgs*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::EventArgs* System::EventArgs::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::EventArgs*>());
}
// Ctor Parameters []
constexpr ::System::EventArgs::EventArgs() {}
