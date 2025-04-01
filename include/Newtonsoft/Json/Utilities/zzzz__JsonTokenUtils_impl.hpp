#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/JsonTokenUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__JsonTokenUtils_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JsonTokenUtils.IsEndToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Newtonsoft::Json::JsonToken)>(&::Newtonsoft::Json::Utilities::JsonTokenUtils::IsEndToken)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3eb8628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JsonTokenUtils*>::get(), "IsEndToken", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JsonTokenUtils.IsStartToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Newtonsoft::Json::JsonToken)>(&::Newtonsoft::Json::Utilities::JsonTokenUtils::IsStartToken)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3ecc160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JsonTokenUtils*>::get(), "IsStartToken", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::JsonTokenUtils.IsPrimitiveToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Newtonsoft::Json::JsonToken)>(&::Newtonsoft::Json::Utilities::JsonTokenUtils::IsPrimitiveToken)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3ecc170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JsonTokenUtils*>::get(), "IsPrimitiveToken", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get() })));
    return ___internal_method;
  }
};
inline bool Newtonsoft::Json::Utilities::JsonTokenUtils::IsEndToken(::Newtonsoft::Json::JsonToken token) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JsonTokenUtils*>::get(), "IsEndToken", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, token);
}
inline bool Newtonsoft::Json::Utilities::JsonTokenUtils::IsStartToken(::Newtonsoft::Json::JsonToken token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JsonTokenUtils*>::get(), "IsStartToken", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, token);
}
inline bool Newtonsoft::Json::Utilities::JsonTokenUtils::IsPrimitiveToken(::Newtonsoft::Json::JsonToken token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::JsonTokenUtils*>::get(), "IsPrimitiveToken", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, token);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::JsonTokenUtils::JsonTokenUtils() {}
