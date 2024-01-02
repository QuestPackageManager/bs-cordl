#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/zzzz__EncodingHelper_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Text::EncodingHelper.get_UTF8Unmarked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)()>(&::System::Text::EncodingHelper::get_UTF8Unmarked)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x24500ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper*>::get(), "get_UTF8Unmarked",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingHelper.InternalCodePage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(ByRef<int32_t>)>(&::System::Text::EncodingHelper::InternalCodePage)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24502dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper*>::get(), "InternalCodePage", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingHelper.GetDefaultEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)()>(&::System::Text::EncodingHelper::GetDefaultEncoding)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x244cf88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper*>::get(), "GetDefaultEncoding",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingHelper.InvokeI18N
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::StringW, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::System::Text::EncodingHelper::InvokeI18N)> {
  constexpr static std::size_t size = 0x70c;
  constexpr static std::size_t addrs = 0x244b3d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper*>::get(), "InvokeI18N", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
inline void System::Text::EncodingHelper::setStaticF_utf8EncodingWithoutMarkers(::System::Text::Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::Encoding*, "utf8EncodingWithoutMarkers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper*>::get>(
      std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* System::Text::EncodingHelper::getStaticF_utf8EncodingWithoutMarkers() {
  return ::cordl_internals::getStaticField<::System::Text::Encoding*, "utf8EncodingWithoutMarkers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper*>::get>();
}
inline void System::Text::EncodingHelper::setStaticF_lockobj(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "lockobj", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper*>::get>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Text::EncodingHelper::getStaticF_lockobj() {
  return ::cordl_internals::getStaticField<::System::Object*, "lockobj", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper*>::get>();
}
inline void System::Text::EncodingHelper::setStaticF_i18nAssembly(::System::Reflection::Assembly* value) {
  ::cordl_internals::setStaticField<::System::Reflection::Assembly*, "i18nAssembly", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper*>::get>(
      std::forward<::System::Reflection::Assembly*>(value));
}
inline ::System::Reflection::Assembly* System::Text::EncodingHelper::getStaticF_i18nAssembly() {
  return ::cordl_internals::getStaticField<::System::Reflection::Assembly*, "i18nAssembly", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper*>::get>();
}
inline void System::Text::EncodingHelper::setStaticF_i18nDisabled(bool value) {
  ::cordl_internals::setStaticField<bool, "i18nDisabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper*>::get>(std::forward<bool>(value));
}
inline bool System::Text::EncodingHelper::getStaticF_i18nDisabled() {
  return ::cordl_internals::getStaticField<bool, "i18nDisabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper*>::get>();
}
inline ::System::Text::Encoding* System::Text::EncodingHelper::get_UTF8Unmarked() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper*>::get(), "get_UTF8Unmarked",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(nullptr, ___internal_method);
}
inline ::StringW System::Text::EncodingHelper::InternalCodePage(ByRef<int32_t> code_page) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper*>::get(), "InternalCodePage", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, code_page);
}
inline ::System::Text::Encoding* System::Text::EncodingHelper::GetDefaultEncoding() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper*>::get(), "GetDefaultEncoding",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(nullptr, ___internal_method);
}
inline ::System::Object* System::Text::EncodingHelper::InvokeI18N(::StringW name, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper*>::get(), "InvokeI18N", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, name, args);
}
// Ctor Parameters []
constexpr ::System::Text::EncodingHelper::EncodingHelper() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
