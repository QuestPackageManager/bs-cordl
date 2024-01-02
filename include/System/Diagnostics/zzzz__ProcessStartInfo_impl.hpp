#pragma once
#include "System/Diagnostics/zzzz__ProcessWindowStyle_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__ProcessStartInfo_def.hpp"
#include "System/Collections/Specialized/zzzz__StringDictionary_def.hpp"
#include "System/Collections/ObjectModel/zzzz__Collection_1_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Diagnostics/zzzz__Process_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/zzzz__WeakReference_def.hpp"
#include "System/Diagnostics/zzzz__ProcessWindowStyle_def.hpp"
#include "System/Security/zzzz__SecureString_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::ProcessStartInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::ProcessStartInfo::*)()>(&::System::Diagnostics::ProcessStartInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x297331c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::ProcessStartInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::ProcessStartInfo::*)(::System::Diagnostics::Process*)>(
    &::System::Diagnostics::ProcessStartInfo::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x296fe90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::Process*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::ProcessStartInfo.get_ArgumentList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ObjectModel::Collection_1<::StringW>* (::System::Diagnostics::ProcessStartInfo::*)()>(
    &::System::Diagnostics::ProcessStartInfo::get_ArgumentList)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x29731a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                               "get_ArgumentList", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::ProcessStartInfo.get_Arguments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Diagnostics::ProcessStartInfo::*)()>(&::System::Diagnostics::ProcessStartInfo::get_Arguments)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2973220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(), "get_Arguments",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::ProcessStartInfo.set_Arguments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::ProcessStartInfo::*)(::StringW)>(
    &::System::Diagnostics::ProcessStartInfo::set_Arguments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x297332c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(), "set_Arguments", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::ProcessStartInfo.get_EnvironmentVariables
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Specialized::StringDictionary* (::System::Diagnostics::ProcessStartInfo::*)()>(
    &::System::Diagnostics::ProcessStartInfo::get_EnvironmentVariables)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x2972c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                               "get_EnvironmentVariables", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::ProcessStartInfo.get_RedirectStandardInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::ProcessStartInfo::*)()>(
    &::System::Diagnostics::ProcessStartInfo::get_RedirectStandardInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2973334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                               "get_RedirectStandardInput", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::ProcessStartInfo.set_RedirectStandardInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::ProcessStartInfo::*)(bool)>(
    &::System::Diagnostics::ProcessStartInfo::set_RedirectStandardInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x297333c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(), "set_RedirectStandardInput",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::ProcessStartInfo.get_RedirectStandardOutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::ProcessStartInfo::*)()>(
    &::System::Diagnostics::ProcessStartInfo::get_RedirectStandardOutput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2973348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                               "get_RedirectStandardOutput", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::ProcessStartInfo.set_RedirectStandardOutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::ProcessStartInfo::*)(bool)>(
    &::System::Diagnostics::ProcessStartInfo::set_RedirectStandardOutput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2973350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(), "set_RedirectStandardOutput",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::ProcessStartInfo.get_RedirectStandardError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::ProcessStartInfo::*)()>(
    &::System::Diagnostics::ProcessStartInfo::get_RedirectStandardError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x297335c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                               "get_RedirectStandardError", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::ProcessStartInfo.set_RedirectStandardError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::ProcessStartInfo::*)(bool)>(
    &::System::Diagnostics::ProcessStartInfo::set_RedirectStandardError)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2973364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(), "set_RedirectStandardError",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::ProcessStartInfo.get_StandardErrorEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (::System::Diagnostics::ProcessStartInfo::*)()>(
    &::System::Diagnostics::ProcessStartInfo::get_StandardErrorEncoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2973370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                               "get_StandardErrorEncoding", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::ProcessStartInfo.get_StandardOutputEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (::System::Diagnostics::ProcessStartInfo::*)()>(
    &::System::Diagnostics::ProcessStartInfo::get_StandardOutputEncoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2973378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                               "get_StandardOutputEncoding", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::ProcessStartInfo.get_UseShellExecute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::ProcessStartInfo::*)()>(&::System::Diagnostics::ProcessStartInfo::get_UseShellExecute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2973380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                               "get_UseShellExecute", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::ProcessStartInfo.set_UseShellExecute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::ProcessStartInfo::*)(bool)>(
    &::System::Diagnostics::ProcessStartInfo::set_UseShellExecute)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2973388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(), "set_UseShellExecute",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::ProcessStartInfo.get_UserName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Diagnostics::ProcessStartInfo::*)()>(&::System::Diagnostics::ProcessStartInfo::get_UserName)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x29728bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(), "get_UserName",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::ProcessStartInfo.get_Password
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::SecureString* (::System::Diagnostics::ProcessStartInfo::*)()>(
    &::System::Diagnostics::ProcessStartInfo::get_Password)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2973394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(), "get_Password",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::ProcessStartInfo.get_Domain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Diagnostics::ProcessStartInfo::*)()>(&::System::Diagnostics::ProcessStartInfo::get_Domain)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x29732c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(), "get_Domain",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::ProcessStartInfo.get_LoadUserProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::ProcessStartInfo::*)()>(&::System::Diagnostics::ProcessStartInfo::get_LoadUserProfile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x297339c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                               "get_LoadUserProfile", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::ProcessStartInfo.get_FileName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Diagnostics::ProcessStartInfo::*)()>(&::System::Diagnostics::ProcessStartInfo::get_FileName)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2970d4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(), "get_FileName",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::ProcessStartInfo.set_FileName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::ProcessStartInfo::*)(::StringW)>(
    &::System::Diagnostics::ProcessStartInfo::set_FileName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29733a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(), "set_FileName", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::ProcessStartInfo.get_WorkingDirectory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Diagnostics::ProcessStartInfo::*)()>(
    &::System::Diagnostics::ProcessStartInfo::get_WorkingDirectory)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2973274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                               "get_WorkingDirectory", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::ProcessStartInfo.set_WindowStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::ProcessStartInfo::*)(::System::Diagnostics::ProcessWindowStyle)>(
    &::System::Diagnostics::ProcessStartInfo::set_WindowStyle)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x29733ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(), "set_WindowStyle", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessWindowStyle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::ProcessStartInfo.get_HaveEnvVars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::ProcessStartInfo::*)()>(&::System::Diagnostics::ProcessStartInfo::get_HaveEnvVars)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2972c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                               "get_HaveEnvVars", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::ProcessStartInfo.get_StandardInputEncoding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (::System::Diagnostics::ProcessStartInfo::*)()>(
    &::System::Diagnostics::ProcessStartInfo::get_StandardInputEncoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2973524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                               "get_StandardInputEncoding", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Diagnostics::ProcessStartInfo::__get_fileName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileName;
}
constexpr ::StringW const& System::Diagnostics::ProcessStartInfo::__get_fileName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileName;
}
constexpr void System::Diagnostics::ProcessStartInfo::__set_fileName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fileName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Diagnostics::ProcessStartInfo::__get_arguments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arguments;
}
constexpr ::StringW const& System::Diagnostics::ProcessStartInfo::__get_arguments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arguments;
}
constexpr void System::Diagnostics::ProcessStartInfo::__set_arguments(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___arguments)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Diagnostics::ProcessStartInfo::__get_directory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___directory;
}
constexpr ::StringW const& System::Diagnostics::ProcessStartInfo::__get_directory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___directory;
}
constexpr void System::Diagnostics::ProcessStartInfo::__set_directory(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___directory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Diagnostics::ProcessStartInfo::__get_verb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___verb;
}
constexpr ::StringW const& System::Diagnostics::ProcessStartInfo::__get_verb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___verb;
}
constexpr void System::Diagnostics::ProcessStartInfo::__set_verb(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___verb)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Diagnostics::ProcessWindowStyle& System::Diagnostics::ProcessStartInfo::__get_windowStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowStyle;
}
constexpr ::System::Diagnostics::ProcessWindowStyle const& System::Diagnostics::ProcessStartInfo::__get_windowStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowStyle;
}
constexpr void System::Diagnostics::ProcessStartInfo::__set_windowStyle(::System::Diagnostics::ProcessWindowStyle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___windowStyle = value;
}
constexpr bool& System::Diagnostics::ProcessStartInfo::__get_errorDialog() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorDialog;
}
constexpr bool const& System::Diagnostics::ProcessStartInfo::__get_errorDialog() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorDialog;
}
constexpr void System::Diagnostics::ProcessStartInfo::__set_errorDialog(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___errorDialog = value;
}
constexpr void*& System::Diagnostics::ProcessStartInfo::__get_errorDialogParentHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorDialogParentHandle;
}
constexpr void* const& System::Diagnostics::ProcessStartInfo::__get_errorDialogParentHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorDialogParentHandle;
}
constexpr void System::Diagnostics::ProcessStartInfo::__set_errorDialogParentHandle(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___errorDialogParentHandle = value;
}
constexpr bool& System::Diagnostics::ProcessStartInfo::__get_useShellExecute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useShellExecute;
}
constexpr bool const& System::Diagnostics::ProcessStartInfo::__get_useShellExecute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useShellExecute;
}
constexpr void System::Diagnostics::ProcessStartInfo::__set_useShellExecute(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useShellExecute = value;
}
constexpr ::StringW& System::Diagnostics::ProcessStartInfo::__get_userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userName;
}
constexpr ::StringW const& System::Diagnostics::ProcessStartInfo::__get_userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userName;
}
constexpr void System::Diagnostics::ProcessStartInfo::__set_userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Diagnostics::ProcessStartInfo::__get_domain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___domain;
}
constexpr ::StringW const& System::Diagnostics::ProcessStartInfo::__get_domain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___domain;
}
constexpr void System::Diagnostics::ProcessStartInfo::__set_domain(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___domain)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::SecureString*& System::Diagnostics::ProcessStartInfo::__get_password() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___password;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::SecureString*> const& System::Diagnostics::ProcessStartInfo::__get_password() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___password;
}
constexpr void System::Diagnostics::ProcessStartInfo::__set_password(::System::Security::SecureString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___password)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Diagnostics::ProcessStartInfo::__get_passwordInClearText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passwordInClearText;
}
constexpr ::StringW const& System::Diagnostics::ProcessStartInfo::__get_passwordInClearText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passwordInClearText;
}
constexpr void System::Diagnostics::ProcessStartInfo::__set_passwordInClearText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___passwordInClearText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Diagnostics::ProcessStartInfo::__get_loadUserProfile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadUserProfile;
}
constexpr bool const& System::Diagnostics::ProcessStartInfo::__get_loadUserProfile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadUserProfile;
}
constexpr void System::Diagnostics::ProcessStartInfo::__set_loadUserProfile(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loadUserProfile = value;
}
constexpr bool& System::Diagnostics::ProcessStartInfo::__get_redirectStandardInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redirectStandardInput;
}
constexpr bool const& System::Diagnostics::ProcessStartInfo::__get_redirectStandardInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redirectStandardInput;
}
constexpr void System::Diagnostics::ProcessStartInfo::__set_redirectStandardInput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___redirectStandardInput = value;
}
constexpr bool& System::Diagnostics::ProcessStartInfo::__get_redirectStandardOutput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redirectStandardOutput;
}
constexpr bool const& System::Diagnostics::ProcessStartInfo::__get_redirectStandardOutput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redirectStandardOutput;
}
constexpr void System::Diagnostics::ProcessStartInfo::__set_redirectStandardOutput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___redirectStandardOutput = value;
}
constexpr bool& System::Diagnostics::ProcessStartInfo::__get_redirectStandardError() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redirectStandardError;
}
constexpr bool const& System::Diagnostics::ProcessStartInfo::__get_redirectStandardError() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redirectStandardError;
}
constexpr void System::Diagnostics::ProcessStartInfo::__set_redirectStandardError(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___redirectStandardError = value;
}
constexpr ::System::Text::Encoding*& System::Diagnostics::ProcessStartInfo::__get_standardOutputEncoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standardOutputEncoding;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& System::Diagnostics::ProcessStartInfo::__get_standardOutputEncoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standardOutputEncoding;
}
constexpr void System::Diagnostics::ProcessStartInfo::__set_standardOutputEncoding(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___standardOutputEncoding)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::Encoding*& System::Diagnostics::ProcessStartInfo::__get_standardErrorEncoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standardErrorEncoding;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& System::Diagnostics::ProcessStartInfo::__get_standardErrorEncoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standardErrorEncoding;
}
constexpr void System::Diagnostics::ProcessStartInfo::__set_standardErrorEncoding(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___standardErrorEncoding)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Diagnostics::ProcessStartInfo::__get_createNoWindow() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createNoWindow;
}
constexpr bool const& System::Diagnostics::ProcessStartInfo::__get_createNoWindow() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createNoWindow;
}
constexpr void System::Diagnostics::ProcessStartInfo::__set_createNoWindow(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___createNoWindow = value;
}
constexpr ::System::WeakReference*& System::Diagnostics::ProcessStartInfo::__get_weakParentProcess() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___weakParentProcess;
}
constexpr ::cordl_internals::to_const_pointer<::System::WeakReference*> const& System::Diagnostics::ProcessStartInfo::__get_weakParentProcess() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___weakParentProcess;
}
constexpr void System::Diagnostics::ProcessStartInfo::__set_weakParentProcess(::System::WeakReference* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___weakParentProcess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Specialized::StringDictionary*& System::Diagnostics::ProcessStartInfo::__get_environmentVariables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentVariables;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Specialized::StringDictionary*> const& System::Diagnostics::ProcessStartInfo::__get_environmentVariables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentVariables;
}
constexpr void System::Diagnostics::ProcessStartInfo::__set_environmentVariables(::System::Collections::Specialized::StringDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___environmentVariables)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ObjectModel::Collection_1<::StringW>*& System::Diagnostics::ProcessStartInfo::__get__argumentList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____argumentList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ObjectModel::Collection_1<::StringW>*> const& System::Diagnostics::ProcessStartInfo::__get__argumentList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____argumentList;
}
constexpr void System::Diagnostics::ProcessStartInfo::__set__argumentList(::System::Collections::ObjectModel::Collection_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____argumentList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& System::Diagnostics::ProcessStartInfo::__get_environment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environment;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const& System::Diagnostics::ProcessStartInfo::__get_environment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environment;
}
constexpr void System::Diagnostics::ProcessStartInfo::__set_environment(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___environment)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::Encoding*& System::Diagnostics::ProcessStartInfo::__get__StandardInputEncoding_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StandardInputEncoding_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& System::Diagnostics::ProcessStartInfo::__get__StandardInputEncoding_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StandardInputEncoding_k__BackingField;
}
constexpr void System::Diagnostics::ProcessStartInfo::__set__StandardInputEncoding_k__BackingField(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____StandardInputEncoding_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Diagnostics::ProcessStartInfo::setStaticF_empty(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Diagnostics::ProcessStartInfo::getStaticF_empty() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get>();
}
inline ::System::Diagnostics::ProcessStartInfo* System::Diagnostics::ProcessStartInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Diagnostics::ProcessStartInfo*>());
}
inline void System::Diagnostics::ProcessStartInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Diagnostics::ProcessStartInfo* System::Diagnostics::ProcessStartInfo::New_ctor(::System::Diagnostics::Process* parent) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Diagnostics::ProcessStartInfo*>(parent));
}
inline void System::Diagnostics::ProcessStartInfo::_ctor(::System::Diagnostics::Process* parent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::Process*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parent);
}
inline ::System::Collections::ObjectModel::Collection_1<::StringW>* System::Diagnostics::ProcessStartInfo::get_ArgumentList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                             "get_ArgumentList", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::Collection_1<::StringW>*, false>(this, ___internal_method);
}
inline ::StringW System::Diagnostics::ProcessStartInfo::get_Arguments() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(), "get_Arguments",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Diagnostics::ProcessStartInfo::set_Arguments(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(), "set_Arguments", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Specialized::StringDictionary* System::Diagnostics::ProcessStartInfo::get_EnvironmentVariables() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                             "get_EnvironmentVariables", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Specialized::StringDictionary*, false>(this, ___internal_method);
}
inline bool System::Diagnostics::ProcessStartInfo::get_RedirectStandardInput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                             "get_RedirectStandardInput", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Diagnostics::ProcessStartInfo::set_RedirectStandardInput(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(), "set_RedirectStandardInput",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Diagnostics::ProcessStartInfo::get_RedirectStandardOutput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                             "get_RedirectStandardOutput", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Diagnostics::ProcessStartInfo::set_RedirectStandardOutput(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(), "set_RedirectStandardOutput",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Diagnostics::ProcessStartInfo::get_RedirectStandardError() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                             "get_RedirectStandardError", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Diagnostics::ProcessStartInfo::set_RedirectStandardError(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(), "set_RedirectStandardError",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Text::Encoding* System::Diagnostics::ProcessStartInfo::get_StandardErrorEncoding() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                             "get_StandardErrorEncoding", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(this, ___internal_method);
}
inline ::System::Text::Encoding* System::Diagnostics::ProcessStartInfo::get_StandardOutputEncoding() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                             "get_StandardOutputEncoding", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(this, ___internal_method);
}
inline bool System::Diagnostics::ProcessStartInfo::get_UseShellExecute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                             "get_UseShellExecute", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Diagnostics::ProcessStartInfo::set_UseShellExecute(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(), "set_UseShellExecute",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW System::Diagnostics::ProcessStartInfo::get_UserName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(), "get_UserName",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Security::SecureString* System::Diagnostics::ProcessStartInfo::get_Password() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(), "get_Password",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Security::SecureString*, false>(this, ___internal_method);
}
inline ::StringW System::Diagnostics::ProcessStartInfo::get_Domain() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(), "get_Domain",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Diagnostics::ProcessStartInfo::get_LoadUserProfile() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                             "get_LoadUserProfile", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::Diagnostics::ProcessStartInfo::get_FileName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(), "get_FileName",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Diagnostics::ProcessStartInfo::set_FileName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(), "set_FileName", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW System::Diagnostics::ProcessStartInfo::get_WorkingDirectory() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                             "get_WorkingDirectory", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Diagnostics::ProcessStartInfo::set_WindowStyle(::System::Diagnostics::ProcessWindowStyle value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(), "set_WindowStyle", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessWindowStyle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Diagnostics::ProcessStartInfo::get_HaveEnvVars() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(), "get_HaveEnvVars",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Text::Encoding* System::Diagnostics::ProcessStartInfo::get_StandardInputEncoding() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                             "get_StandardInputEncoding", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::ProcessStartInfo::ProcessStartInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
