#pragma once
// IWYU pragma private; include "System/Diagnostics/DebuggerBrowsableAttribute.hpp"
#include "System/Diagnostics/zzzz__DebuggerBrowsableState_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/zzzz__DebuggerBrowsableAttribute_def.hpp"
#include "System/Diagnostics/zzzz__DebuggerBrowsableState_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::DebuggerBrowsableAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::DebuggerBrowsableAttribute::*)(::System::Diagnostics::DebuggerBrowsableState)>(
    &::System::Diagnostics::DebuggerBrowsableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3d40758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DebuggerBrowsableAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::DebuggerBrowsableState>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Diagnostics::DebuggerBrowsableState& System::Diagnostics::DebuggerBrowsableAttribute::__cordl_internal_get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr ::System::Diagnostics::DebuggerBrowsableState const& System::Diagnostics::DebuggerBrowsableAttribute::__cordl_internal_get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr void System::Diagnostics::DebuggerBrowsableAttribute::__cordl_internal_set_state(::System::Diagnostics::DebuggerBrowsableState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___state = value;
}
inline ::System::Diagnostics::DebuggerBrowsableAttribute* System::Diagnostics::DebuggerBrowsableAttribute::New_ctor(::System::Diagnostics::DebuggerBrowsableState state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Diagnostics::DebuggerBrowsableAttribute*>(state));
}
inline void System::Diagnostics::DebuggerBrowsableAttribute::_ctor(::System::Diagnostics::DebuggerBrowsableState state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DebuggerBrowsableAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::DebuggerBrowsableState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::DebuggerBrowsableAttribute::DebuggerBrowsableAttribute() {}
