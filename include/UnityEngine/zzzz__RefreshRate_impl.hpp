#pragma once
// IWYU pragma private; include "UnityEngine/RefreshRate.hpp"
#include "UnityEngine/zzzz__RefreshRate_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::RefreshRate.get_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::RefreshRate::*)()>(&::UnityEngine::RefreshRate::get_value)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6850500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RefreshRate>::get(), "get_value",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RefreshRate.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::RefreshRate::*)(::UnityEngine::RefreshRate)>(&::UnityEngine::RefreshRate::Equals)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6850514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RefreshRate>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RefreshRate>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RefreshRate.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::RefreshRate::*)(::UnityEngine::RefreshRate)>(&::UnityEngine::RefreshRate::CompareTo)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6850550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RefreshRate>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RefreshRate>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RefreshRate.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::RefreshRate::*)()>(&::UnityEngine::RefreshRate::ToString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6850594;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RefreshRate>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RefreshRate>::get(), 3));
    return ___internal_method;
  }
};
inline double_t UnityEngine::RefreshRate::get_value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RefreshRate>::get(), "get_value",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline bool UnityEngine::RefreshRate::Equals(::UnityEngine::RefreshRate other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RefreshRate>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RefreshRate>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t UnityEngine::RefreshRate::CompareTo(::UnityEngine::RefreshRate other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RefreshRate>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RefreshRate>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
inline ::StringW UnityEngine::RefreshRate::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RefreshRate>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::RefreshRate>"
constexpr UnityEngine::RefreshRate::operator ::System::IEquatable_1<::UnityEngine::RefreshRate>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::RefreshRate>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::RefreshRate>"
constexpr ::System::IEquatable_1<::UnityEngine::RefreshRate>* UnityEngine::RefreshRate::i___System__IEquatable_1___UnityEngine__RefreshRate_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::RefreshRate>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::UnityEngine::RefreshRate>"
constexpr UnityEngine::RefreshRate::operator ::System::IComparable_1<::UnityEngine::RefreshRate>*() {
  return static_cast<::System::IComparable_1<::UnityEngine::RefreshRate>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::UnityEngine::RefreshRate>"
constexpr ::System::IComparable_1<::UnityEngine::RefreshRate>* UnityEngine::RefreshRate::i___System__IComparable_1___UnityEngine__RefreshRate_() {
  return static_cast<::System::IComparable_1<::UnityEngine::RefreshRate>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "numerator", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "denominator", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RefreshRate::RefreshRate(uint32_t numerator, uint32_t denominator) noexcept {
  this->numerator = numerator;
  this->denominator = denominator;
}
// Ctor Parameters []
constexpr ::UnityEngine::RefreshRate::RefreshRate() {}
