#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/BlittableListWrapper.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_impl.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableListWrapper_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::BlittableListWrapper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::BlittableListWrapper::*)(::UnityEngine::Bindings::BlittableArrayWrapper, int32_t)>(
    &::UnityEngine::Bindings::BlittableListWrapper::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6933f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::BlittableListWrapper>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bindings::BlittableArrayWrapper>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Bindings::BlittableListWrapper::_ctor(::UnityEngine::Bindings::BlittableArrayWrapper arrayWrapper, int32_t listSize) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::BlittableListWrapper>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bindings::BlittableArrayWrapper>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arrayWrapper, listSize);
}
template <typename T> inline void UnityEngine::Bindings::BlittableListWrapper::Unmarshal(::System::Collections::Generic::List_1<T>* list) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::BlittableListWrapper>::get(), "Unmarshal",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list);
}
// Ctor Parameters [CppParam { name: "arrayWrapper", ty: "::UnityEngine::Bindings::BlittableArrayWrapper", modifiers: "", def_value: Some("{}") }, CppParam { name: "listSize", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Bindings::BlittableListWrapper::BlittableListWrapper(::UnityEngine::Bindings::BlittableArrayWrapper arrayWrapper, int32_t listSize) noexcept {
  this->arrayWrapper = arrayWrapper;
  this->listSize = listSize;
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::BlittableListWrapper::BlittableListWrapper() {}
