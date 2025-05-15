#pragma once
// IWYU pragma private; include "System/Xml/Serialization/CodeIdentifier.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Serialization/zzzz__CodeIdentifier_def.hpp"
#include "Microsoft/CSharp/zzzz__CodeDomProvider_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::CodeIdentifier.MakePascal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Xml::Serialization::CodeIdentifier::MakePascal)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x4366e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::CodeIdentifier*>::get(), "MakePascal",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::CodeIdentifier.MakeValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Xml::Serialization::CodeIdentifier::MakeValid)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x4367028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::CodeIdentifier*>::get(), "MakeValid", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::CodeIdentifier.IsValidStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::System::Xml::Serialization::CodeIdentifier::IsValidStart)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x4367228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::CodeIdentifier*>::get(), "IsValidStart",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::CodeIdentifier.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::System::Xml::Serialization::CodeIdentifier::IsValid)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x43671ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::CodeIdentifier*>::get(), "IsValid", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::Serialization::CodeIdentifier::setStaticF_csharp(::Microsoft::CSharp::CodeDomProvider* value) {
  ::cordl_internals::setStaticField<::Microsoft::CSharp::CodeDomProvider*, "csharp", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::CodeIdentifier*>::get>(
      std::forward<::Microsoft::CSharp::CodeDomProvider*>(value));
}
inline ::Microsoft::CSharp::CodeDomProvider* System::Xml::Serialization::CodeIdentifier::getStaticF_csharp() {
  return ::cordl_internals::getStaticField<::Microsoft::CSharp::CodeDomProvider*, "csharp",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::CodeIdentifier*>::get>();
}
inline ::StringW System::Xml::Serialization::CodeIdentifier::MakePascal(::StringW identifier) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::CodeIdentifier*>::get(), "MakePascal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, identifier);
}
inline ::StringW System::Xml::Serialization::CodeIdentifier::MakeValid(::StringW identifier) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::CodeIdentifier*>::get(), "MakeValid", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, identifier);
}
inline bool System::Xml::Serialization::CodeIdentifier::IsValidStart(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::CodeIdentifier*>::get(), "IsValidStart",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, c);
}
inline bool System::Xml::Serialization::CodeIdentifier::IsValid(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::CodeIdentifier*>::get(), "IsValid", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, c);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::CodeIdentifier::CodeIdentifier() {}
