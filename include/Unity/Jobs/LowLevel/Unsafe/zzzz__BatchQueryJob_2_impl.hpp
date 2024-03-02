#pragma once
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__BatchQueryJob_2_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
template <typename CommandT, typename ResultT>
inline void Unity::Jobs::LowLevel::Unsafe::BatchQueryJob_2<CommandT, ResultT>::_ctor(::Unity::Collections::NativeArray_1<CommandT> commands, ::Unity::Collections::NativeArray_1<ResultT> results) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::BatchQueryJob_2<CommandT, ResultT>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<CommandT>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<ResultT>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, commands, results);
}
// Ctor Parameters [CppParam { name: "commands", ty: "::Unity::Collections::NativeArray_1<CommandT>", modifiers: "", def_value: Some("{}") }, CppParam { name: "results", ty:
// "::Unity::Collections::NativeArray_1<ResultT>", modifiers: "", def_value: Some("{}") }]
template <typename CommandT, typename ResultT>
constexpr ::Unity::Jobs::LowLevel::Unsafe::BatchQueryJob_2<CommandT, ResultT>::BatchQueryJob_2(::Unity::Collections::NativeArray_1<CommandT> commands,
                                                                                               ::Unity::Collections::NativeArray_1<ResultT> results) noexcept {
  this->commands = commands;
  this->results = results;
}
// Ctor Parameters []
template <typename CommandT, typename ResultT> constexpr ::Unity::Jobs::LowLevel::Unsafe::BatchQueryJob_2<CommandT, ResultT>::BatchQueryJob_2() {}
