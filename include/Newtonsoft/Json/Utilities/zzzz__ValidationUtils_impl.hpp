#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ValidationUtils_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ValidationUtils.ArgumentNotNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::StringW)>(&::Newtonsoft::Json::Utilities::ValidationUtils::ArgumentNotNull)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2748128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ValidationUtils*>::get(),
                                                                               "ArgumentNotNull", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Utilities::ValidationUtils::ArgumentNotNull(::System::Object* value, ::StringW parameterName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ValidationUtils*>::get(), "ArgumentNotNull", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value, parameterName);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::ValidationUtils::ValidationUtils() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
