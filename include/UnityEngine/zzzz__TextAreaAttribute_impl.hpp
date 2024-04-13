#pragma once
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/zzzz__TextAreaAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextAreaAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextAreaAttribute::*)()>(&::UnityEngine::TextAreaAttribute::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x320354c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAreaAttribute*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextAreaAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextAreaAttribute::*)(int32_t, int32_t)>(&::UnityEngine::TextAreaAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x320356c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAreaAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::TextAreaAttribute::__cordl_internal_get_minLines() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minLines;
}
constexpr int32_t const& UnityEngine::TextAreaAttribute::__cordl_internal_get_minLines() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minLines;
}
constexpr void UnityEngine::TextAreaAttribute::__cordl_internal_set_minLines(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minLines = value;
}
constexpr int32_t& UnityEngine::TextAreaAttribute::__cordl_internal_get_maxLines() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxLines;
}
constexpr int32_t const& UnityEngine::TextAreaAttribute::__cordl_internal_get_maxLines() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxLines;
}
constexpr void UnityEngine::TextAreaAttribute::__cordl_internal_set_maxLines(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxLines = value;
}
inline ::UnityEngine::TextAreaAttribute* UnityEngine::TextAreaAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::TextAreaAttribute*>());
}
inline void UnityEngine::TextAreaAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAreaAttribute*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::TextAreaAttribute* UnityEngine::TextAreaAttribute::New_ctor(int32_t minLines, int32_t maxLines) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::TextAreaAttribute*>(minLines, maxLines));
}
inline void UnityEngine::TextAreaAttribute::_ctor(int32_t minLines, int32_t maxLines) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextAreaAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, minLines, maxLines);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextAreaAttribute::TextAreaAttribute() {}
