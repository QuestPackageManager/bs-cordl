#pragma once
// IWYU pragma private; include "System/Threading/CancellationCallbackCoreWorkArguments.hpp"
#include "System/Threading/zzzz__CancellationCallbackCoreWorkArguments_def.hpp"
#include "System/Threading/zzzz__CancellationCallbackInfo_def.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArrayFragment_1_def.hpp"
//  Writing Method size for method: ::System::Threading::CancellationCallbackCoreWorkArguments._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::CancellationCallbackCoreWorkArguments::*)(
    ::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>*, int32_t)>(&::System::Threading::CancellationCallbackCoreWorkArguments::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5caa6b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationCallbackCoreWorkArguments>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void System::Threading::CancellationCallbackCoreWorkArguments::_ctor(::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>* currArrayFragment,
                                                                            int32_t currArrayIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationCallbackCoreWorkArguments>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, currArrayFragment, currArrayIndex);
}
// Ctor Parameters [CppParam { name: "_currArrayFragment", ty: "::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_currArrayIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::CancellationCallbackCoreWorkArguments::CancellationCallbackCoreWorkArguments(
    ::System::Threading::SparselyPopulatedArrayFragment_1<::System::Threading::CancellationCallbackInfo*>* _currArrayFragment, int32_t _currArrayIndex) noexcept {
  this->_currArrayFragment = _currArrayFragment;
  this->_currArrayIndex = _currArrayIndex;
}
// Ctor Parameters []
constexpr ::System::Threading::CancellationCallbackCoreWorkArguments::CancellationCallbackCoreWorkArguments() {}
