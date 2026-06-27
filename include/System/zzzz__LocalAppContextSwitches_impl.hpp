#pragma once
// IWYU pragma private; include "System/LocalAppContextSwitches.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__LocalAppContextSwitches_def.hpp"
//  Writing Method size for method: ::System::LocalAppContextSwitches.get_AllowArbitraryTypeInstantiation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::LocalAppContextSwitches::get_AllowArbitraryTypeInstantiation)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5ebccc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalAppContextSwitches*>::get(),
                        "get_AllowArbitraryTypeInstantiation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void System::LocalAppContextSwitches::setStaticF_s_allowArbitraryTypeInstantiation(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_allowArbitraryTypeInstantiation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalAppContextSwitches*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::LocalAppContextSwitches::getStaticF_s_allowArbitraryTypeInstantiation()  {
return ::cordl_internals::getStaticField<int32_t, "s_allowArbitraryTypeInstantiation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalAppContextSwitches*>::get>();
}
inline bool System::LocalAppContextSwitches::get_AllowArbitraryTypeInstantiation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalAppContextSwitches*>::get(),
                        "get_AllowArbitraryTypeInstantiation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::LocalAppContextSwitches::LocalAppContextSwitches()   {
}
