#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LocalKeywordSpace.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeywordSpace_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeywordSpace.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::LocalKeywordSpace::*)(::System::Object*)>(
    &::UnityEngine::Rendering::LocalKeywordSpace::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x345ad74;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LocalKeywordSpace>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LocalKeywordSpace>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeywordSpace.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::LocalKeywordSpace::*)(::UnityEngine::Rendering::LocalKeywordSpace)>(
    &::UnityEngine::Rendering::LocalKeywordSpace::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x345adf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LocalKeywordSpace>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LocalKeywordSpace>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeywordSpace.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rendering::LocalKeywordSpace, ::UnityEngine::Rendering::LocalKeywordSpace)>(
    &::UnityEngine::Rendering::LocalKeywordSpace::op_Equality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x345acf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LocalKeywordSpace>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LocalKeywordSpace>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LocalKeywordSpace>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LocalKeywordSpace.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::LocalKeywordSpace::*)()>(
    &::UnityEngine::Rendering::LocalKeywordSpace::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x345ad4c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LocalKeywordSpace>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LocalKeywordSpace>::get(), 2));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::LocalKeywordSpace>"
constexpr UnityEngine::Rendering::LocalKeywordSpace::operator ::System::IEquatable_1<::UnityEngine::Rendering::LocalKeywordSpace>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::LocalKeywordSpace>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::LocalKeywordSpace>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::LocalKeywordSpace>* UnityEngine::Rendering::LocalKeywordSpace::i___System__IEquatable_1___UnityEngine__Rendering__LocalKeywordSpace_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::LocalKeywordSpace>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline bool UnityEngine::Rendering::LocalKeywordSpace::Equals(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LocalKeywordSpace>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, o);
}
inline bool UnityEngine::Rendering::LocalKeywordSpace::Equals(::UnityEngine::Rendering::LocalKeywordSpace rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LocalKeywordSpace>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LocalKeywordSpace>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, rhs);
}
inline bool UnityEngine::Rendering::LocalKeywordSpace::op_Equality(::UnityEngine::Rendering::LocalKeywordSpace lhs, ::UnityEngine::Rendering::LocalKeywordSpace rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LocalKeywordSpace>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LocalKeywordSpace>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LocalKeywordSpace>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lhs, rhs);
}
inline int32_t UnityEngine::Rendering::LocalKeywordSpace::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LocalKeywordSpace>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_KeywordSpace", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::LocalKeywordSpace::LocalKeywordSpace(::System::IntPtr m_KeywordSpace) noexcept {
  this->m_KeywordSpace = m_KeywordSpace;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LocalKeywordSpace::LocalKeywordSpace() {}
