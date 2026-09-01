#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\AncestorFilter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__CountingBloomFilter_impl.hpp"
#include "UnityEngine/UIElements/zzzz__AncestorFilter_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleComplexSelector_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::AncestorFilter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::AncestorFilter::*)()>(&::UnityEngine::UIElements::AncestorFilter::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6d8278c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AncestorFilter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AncestorFilter.AddHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::AncestorFilter::*)(int32_t)>(&::UnityEngine::UIElements::AncestorFilter::AddHash)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6d82804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AncestorFilter*>(), { "AddHash", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AncestorFilter.IsCandidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::AncestorFilter::*)(::UnityEngine::UIElements::StyleComplexSelector*)>(
    &::UnityEngine::UIElements::AncestorFilter::IsCandidate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6d828a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AncestorFilter*>(),
                                                                                           { "IsCandidate", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleComplexSelector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AncestorFilter.PushElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::AncestorFilter::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::AncestorFilter::PushElement)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6d828fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AncestorFilter*>(), { "PushElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::AncestorFilter.PopElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::AncestorFilter::*)()>(&::UnityEngine::UIElements::AncestorFilter::PopElement)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6d82a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AncestorFilter*>(), { "PopElement", {}, {} })));
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
  this->___m_HashStack = value;
}
inline void UnityEngine::UIElements::AncestorFilter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AncestorFilter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::AncestorFilter::AddHash(int32_t hash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AncestorFilter*>(), { "AddHash", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash);
}
inline bool UnityEngine::UIElements::AncestorFilter::IsCandidate(::UnityEngine::UIElements::StyleComplexSelector* complexSel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AncestorFilter*>(), { "IsCandidate", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleComplexSelector*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, complexSel);
}
inline void UnityEngine::UIElements::AncestorFilter::PushElement(::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AncestorFilter*>(), { "PushElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void UnityEngine::UIElements::AncestorFilter::PopElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::AncestorFilter*>(), { "PopElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::AncestorFilter* UnityEngine::UIElements::AncestorFilter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::AncestorFilter*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::AncestorFilter::AncestorFilter() {}
