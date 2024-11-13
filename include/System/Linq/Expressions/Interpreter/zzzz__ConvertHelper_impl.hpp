#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/ConvertHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ConvertHelper_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ConvertHelper.ToInt32NoNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Object*)>(&::System::Linq::Expressions::Interpreter::ConvertHelper::ToInt32NoNull)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x405ed60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::ConvertHelper*>::get(), "ToInt32NoNull",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline int32_t System::Linq::Expressions::Interpreter::ConvertHelper::ToInt32NoNull(::System::Object* val) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::ConvertHelper*>::get(), "ToInt32NoNull",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, val);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::ConvertHelper::ConvertHelper() {}
