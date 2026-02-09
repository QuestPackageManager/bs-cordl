#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/PropertiesInitialization.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/Internal/zzzz__PropertiesInitialization_def.hpp"
//  Writing Method size for method: ::Unity::Properties::Internal::PropertiesInitialization.InitializeProperties
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::Properties::Internal::PropertiesInitialization::InitializeProperties)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x69e6f68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::PropertiesInitialization*>::get(),
                        "InitializeProperties",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Unity::Properties::Internal::PropertiesInitialization::InitializeProperties()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::PropertiesInitialization*>::get(),
                        "InitializeProperties",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Properties::Internal::PropertiesInitialization::PropertiesInitialization()   {
}
