#pragma once
// IWYU pragma private; include "GlobalNamespace/StringExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StringExtensions_def.hpp"
#include "System/zzzz__StringComparison_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StringExtensions.Truncate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, int32_t, bool)>(&::GlobalNamespace::StringExtensions::Truncate)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x229c34c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StringExtensions*>::get(), "Truncate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringExtensions.Contains
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, ::System::StringComparison)>(&::GlobalNamespace::StringExtensions::Contains)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x229c414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StringExtensions*>::get(), "Contains", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::StringComparison>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringExtensions.AnyContains
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<::StringW, ::Array<::StringW>*>, ::StringW, ::System::StringComparison)>(
    &::GlobalNamespace::StringExtensions::AnyContains)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x229c434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StringExtensions*>::get(), "AnyContains", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::StringComparison>::get() })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::StringExtensions::Truncate(::StringW s, int32_t length, bool appendEllipsis) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StringExtensions*>::get(), "Truncate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, s, length, appendEllipsis);
}
inline bool GlobalNamespace::StringExtensions::Contains(::StringW source, ::StringW substring, ::System::StringComparison comp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StringExtensions*>::get(), "Contains", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::StringComparison>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, source, substring, comp);
}
inline bool GlobalNamespace::StringExtensions::AnyContains(::ArrayW<::StringW, ::Array<::StringW>*> stringArray, ::StringW value, ::System::StringComparison stringComparison) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StringExtensions*>::get(), "AnyContains", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::StringComparison>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, stringArray, value, stringComparison);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StringExtensions::StringExtensions() {}
