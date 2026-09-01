#pragma once
// IWYU pragma private; include "Unity\Jobs\LowLevel\Unsafe\BatchQueryJob_2.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__BatchQueryJob_2_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
template <typename CommandT, typename ResultT>
inline void Unity::Jobs::LowLevel::Unsafe::BatchQueryJob_2<CommandT, ResultT>::_ctor(::Unity::Collections::NativeArray_1<CommandT> commands, ::Unity::Collections::NativeArray_1<ResultT> results) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::BatchQueryJob_2<CommandT, ResultT>>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<CommandT>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<ResultT>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, commands, results);
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
