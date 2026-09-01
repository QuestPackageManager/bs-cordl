#pragma once
// IWYU pragma private; include "UnityEngine\Bindings\BlittableListWrapper.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_impl.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableListWrapper_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::BlittableListWrapper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bindings::BlittableListWrapper::*)(::UnityEngine::Bindings::BlittableArrayWrapper, int32_t)>(
    &::UnityEngine::Bindings::BlittableListWrapper::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6afeec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::BlittableListWrapper>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Bindings::BlittableArrayWrapper>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Bindings::BlittableListWrapper::_ctor(::UnityEngine::Bindings::BlittableArrayWrapper arrayWrapper, int32_t listSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::BlittableListWrapper>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Bindings::BlittableArrayWrapper>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, arrayWrapper, listSize);
}
template <typename T> inline void UnityEngine::Bindings::BlittableListWrapper::Unmarshal(::System::Collections::Generic::List_1<T>* list) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::BlittableListWrapper>(),
                                                           { "Unmarshal", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, list);
}
// Ctor Parameters [CppParam { name: "arrayWrapper", ty: "::UnityEngine::Bindings::BlittableArrayWrapper", modifiers: "", def_value: Some("{}") }, CppParam { name: "listSize", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Bindings::BlittableListWrapper::BlittableListWrapper(::UnityEngine::Bindings::BlittableArrayWrapper arrayWrapper, int32_t listSize) noexcept {
  this->arrayWrapper = arrayWrapper;
  this->listSize = listSize;
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::BlittableListWrapper::BlittableListWrapper() {}
