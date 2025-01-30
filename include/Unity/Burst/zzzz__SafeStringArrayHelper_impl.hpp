#pragma once
// IWYU pragma private; include "Unity/Burst/SafeStringArrayHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/zzzz__SafeStringArrayHelper_def.hpp"
//  Writing Method size for method: ::Unity::Burst::SafeStringArrayHelper.SerialiseStringArraySafe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::Unity::Burst::SafeStringArrayHelper::SerialiseStringArraySafe)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x4506dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::SafeStringArrayHelper*>::get(), "SerialiseStringArraySafe", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::SafeStringArrayHelper.DeserialiseStringArraySafe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (*)(::StringW)>(
    &::Unity::Burst::SafeStringArrayHelper::DeserialiseStringArraySafe)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x4506fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::SafeStringArrayHelper*>::get(), "DeserialiseStringArraySafe",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::StringW Unity::Burst::SafeStringArrayHelper::SerialiseStringArraySafe(::ArrayW<::StringW, ::Array<::StringW>*> array) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::SafeStringArrayHelper*>::get(), "SerialiseStringArraySafe", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, array);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> Unity::Burst::SafeStringArrayHelper::DeserialiseStringArraySafe(::StringW input) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::SafeStringArrayHelper*>::get(), "DeserialiseStringArraySafe",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(nullptr, ___internal_method, input);
}
// Ctor Parameters []
constexpr ::Unity::Burst::SafeStringArrayHelper::SafeStringArrayHelper() {}
