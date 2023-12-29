#pragma once
#include "System/Threading/zzzz__CancellationCallbackCoreWorkArguments_def.hpp"
#include "System/Threading/zzzz__CancellationCallbackInfo_def.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArrayFragment_1_def.hpp"
//  Writing Method size for method: ::System::Threading::CancellationCallbackCoreWorkArguments._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::CancellationCallbackCoreWorkArguments::*)(
    ::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>*, int32_t)>(&::System::Threading::CancellationCallbackCoreWorkArguments::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24b8554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationCallbackCoreWorkArguments>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void System::Threading::CancellationCallbackCoreWorkArguments::_ctor(::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>* currArrayFragment,
                                                                            int32_t currArrayIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationCallbackCoreWorkArguments>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currArrayFragment, currArrayIndex);
}
// Ctor Parameters [CppParam { name: "_currArrayFragment", ty: "::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "_currArrayIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::CancellationCallbackCoreWorkArguments::CancellationCallbackCoreWorkArguments(
    ::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>* _currArrayFragment, int32_t _currArrayIndex) noexcept {
  this->_currArrayFragment = _currArrayFragment;
  this->_currArrayIndex = _currArrayIndex;
}
// Ctor Parameters []
constexpr ::System::Threading::CancellationCallbackCoreWorkArguments::CancellationCallbackCoreWorkArguments() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
