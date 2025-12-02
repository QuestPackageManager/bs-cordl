#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/HLSLArray.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Rendering/zzzz__HLSLArray_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::HLSLArray._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::HLSLArray::*)(int32_t, ::System::Type*)>(
    &::UnityEngine::Rendering::HLSLArray::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6584658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HLSLArray*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::HLSLArray::__cordl_internal_get_arraySize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arraySize;
}
constexpr int32_t const& UnityEngine::Rendering::HLSLArray::__cordl_internal_get_arraySize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arraySize;
}
constexpr void UnityEngine::Rendering::HLSLArray::__cordl_internal_set_arraySize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___arraySize = value;
}
constexpr ::System::Type*& UnityEngine::Rendering::HLSLArray::__cordl_internal_get_elementType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementType;
}
constexpr ::System::Type* const& UnityEngine::Rendering::HLSLArray::__cordl_internal_get_elementType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementType;
}
constexpr void UnityEngine::Rendering::HLSLArray::__cordl_internal_set_elementType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___elementType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::HLSLArray::_ctor(int32_t arraySize, ::System::Type* elementType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::HLSLArray*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arraySize, elementType);
}
inline ::UnityEngine::Rendering::HLSLArray* UnityEngine::Rendering::HLSLArray::New_ctor(int32_t arraySize, ::System::Type* elementType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::HLSLArray*>(arraySize, elementType));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::HLSLArray::HLSLArray() {}
