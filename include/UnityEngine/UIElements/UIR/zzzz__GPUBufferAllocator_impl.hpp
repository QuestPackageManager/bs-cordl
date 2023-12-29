#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GPUBufferAllocator_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BestFitAllocator_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GPUBufferAllocator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::GPUBufferAllocator::*)(uint32_t)>(
    &::UnityEngine::UIElements::UIR::GPUBufferAllocator::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2c6eef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GPUBufferAllocator.Allocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::Alloc (::UnityEngine::UIElements::UIR::GPUBufferAllocator::*)(uint32_t, bool)>(
    &::UnityEngine::UIElements::UIR::GPUBufferAllocator::Allocate)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2c6a940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>::get(), "Allocate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GPUBufferAllocator.Free
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::GPUBufferAllocator::*)(::UnityEngine::UIElements::UIR::Alloc)>(
    &::UnityEngine::UIElements::UIR::GPUBufferAllocator::Free)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2c6aa7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>::get(), "Free", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::Alloc>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GPUBufferAllocator.get_isEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::GPUBufferAllocator::*)()>(
    &::UnityEngine::UIElements::UIR::GPUBufferAllocator::get_isEmpty)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2c6efbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>::get(),
                                                                               "get_isEmpty", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GPUBufferAllocator.HighLowCollide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::GPUBufferAllocator::*)()>(
    &::UnityEngine::UIElements::UIR::GPUBufferAllocator::HighLowCollide)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2c6ef84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>::get(),
                                                                               "HighLowCollide", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator*& UnityEngine::UIElements::UIR::GPUBufferAllocator::__get_m_Low() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Low;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::BestFitAllocator*> const& UnityEngine::UIElements::UIR::GPUBufferAllocator::__get_m_Low() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Low;
}
constexpr void UnityEngine::UIElements::UIR::GPUBufferAllocator::__set_m_Low(::UnityEngine::UIElements::UIR::BestFitAllocator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Low)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator*& UnityEngine::UIElements::UIR::GPUBufferAllocator::__get_m_High() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_High;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::BestFitAllocator*> const& UnityEngine::UIElements::UIR::GPUBufferAllocator::__get_m_High() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_High;
}
constexpr void UnityEngine::UIElements::UIR::GPUBufferAllocator::__set_m_High(::UnityEngine::UIElements::UIR::BestFitAllocator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_High)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::UIElements::UIR::GPUBufferAllocator* UnityEngine::UIElements::UIR::GPUBufferAllocator::New_ctor(uint32_t maxSize) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>(maxSize));
}
inline void UnityEngine::UIElements::UIR::GPUBufferAllocator::_ctor(uint32_t maxSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxSize);
}
inline ::UnityEngine::UIElements::UIR::Alloc UnityEngine::UIElements::UIR::GPUBufferAllocator::Allocate(uint32_t size, bool shortLived) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>::get(), "Allocate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::Alloc, false>(this, ___internal_method, size, shortLived);
}
inline void UnityEngine::UIElements::UIR::GPUBufferAllocator::Free(::UnityEngine::UIElements::UIR::Alloc alloc) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>::get(), "Free", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::Alloc>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, alloc);
}
inline bool UnityEngine::UIElements::UIR::GPUBufferAllocator::get_isEmpty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>::get(),
                                                                             "get_isEmpty", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::GPUBufferAllocator::HighLowCollide() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>::get(),
                                                                             "HighLowCollide", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::GPUBufferAllocator::GPUBufferAllocator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
