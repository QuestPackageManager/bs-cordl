#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/AncestorFilter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__CountingBloomFilter_impl.hpp"
#include "UnityEngine/UIElements/zzzz__AncestorFilter_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleComplexSelector_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::AncestorFilter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::AncestorFilter::*)()>(&::UnityEngine::UIElements::AncestorFilter::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x4a0e050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AncestorFilter*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AncestorFilter.AddHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::AncestorFilter::*)(int32_t)>(&::UnityEngine::UIElements::AncestorFilter::AddHash)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x4a0e0d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AncestorFilter*>::get(), "AddHash", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AncestorFilter.IsCandidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::AncestorFilter::*)(::UnityEngine::UIElements::StyleComplexSelector*)>(
    &::UnityEngine::UIElements::AncestorFilter::IsCandidate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x4a0e164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AncestorFilter*>::get(), "IsCandidate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleComplexSelector*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AncestorFilter.PushElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::AncestorFilter::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::AncestorFilter::PushElement)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x4a0e1bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AncestorFilter*>::get(), "PushElement", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AncestorFilter.PopElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::AncestorFilter::*)()>(&::UnityEngine::UIElements::AncestorFilter::PopElement)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x4a0e3ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AncestorFilter*>::get(), "PopElement",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::CountingBloomFilter& UnityEngine::UIElements::AncestorFilter::__cordl_internal_get_m_CountingBloomFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CountingBloomFilter;
}
constexpr ::UnityEngine::UIElements::CountingBloomFilter const& UnityEngine::UIElements::AncestorFilter::__cordl_internal_get_m_CountingBloomFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CountingBloomFilter;
}
constexpr void UnityEngine::UIElements::AncestorFilter::__cordl_internal_set_m_CountingBloomFilter(::UnityEngine::UIElements::CountingBloomFilter value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CountingBloomFilter = value;
}
constexpr ::System::Collections::Generic::Stack_1<int32_t>*& UnityEngine::UIElements::AncestorFilter::__cordl_internal_get_m_HashStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HashStack;
}
constexpr ::System::Collections::Generic::Stack_1<int32_t>* const& UnityEngine::UIElements::AncestorFilter::__cordl_internal_get_m_HashStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HashStack;
}
constexpr void UnityEngine::UIElements::AncestorFilter::__cordl_internal_set_m_HashStack(::System::Collections::Generic::Stack_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HashStack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::AncestorFilter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AncestorFilter*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::AncestorFilter::AddHash(int32_t hash) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AncestorFilter*>::get(), "AddHash",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hash);
}
inline bool UnityEngine::UIElements::AncestorFilter::IsCandidate(::UnityEngine::UIElements::StyleComplexSelector* complexSel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AncestorFilter*>::get(), "IsCandidate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleComplexSelector*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, complexSel);
}
inline void UnityEngine::UIElements::AncestorFilter::PushElement(::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AncestorFilter*>::get(), "PushElement", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element);
}
inline void UnityEngine::UIElements::AncestorFilter::PopElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::AncestorFilter*>::get(), "PopElement",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::AncestorFilter* UnityEngine::UIElements::AncestorFilter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::AncestorFilter*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::AncestorFilter::AncestorFilter() {}
