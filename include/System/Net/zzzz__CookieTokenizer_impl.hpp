#pragma once
#include "System/Net/zzzz__CookieToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__CookieTokenizer_def.hpp"
#include "System/Net/zzzz__CookieToken_def.hpp"
#include "System/Net/zzzz__CookieTokenizer_def.hpp"
//  Writing Method size for method: ::System::Net::__CookieTokenizer__RecognizedAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__CookieTokenizer__RecognizedAttribute::*)(::StringW, ::System::Net::CookieToken)>(
    &::System::Net::__CookieTokenizer__RecognizedAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2fe478c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__CookieTokenizer__RecognizedAttribute>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CookieToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__CookieTokenizer__RecognizedAttribute.get_Token
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::CookieToken (::System::Net::__CookieTokenizer__RecognizedAttribute::*)()>(
    &::System::Net::__CookieTokenizer__RecognizedAttribute::get_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe4798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__CookieTokenizer__RecognizedAttribute>::get(),
                                                                               "get_Token", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__CookieTokenizer__RecognizedAttribute.IsEqualTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::__CookieTokenizer__RecognizedAttribute::*)(::StringW)>(
    &::System::Net::__CookieTokenizer__RecognizedAttribute::IsEqualTo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2fe4458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__CookieTokenizer__RecognizedAttribute>::get(), "IsEqualTo",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::__CookieTokenizer__RecognizedAttribute::_ctor(::StringW name, ::System::Net::CookieToken token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__CookieTokenizer__RecognizedAttribute>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CookieToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, token);
}
inline ::System::Net::CookieToken System::Net::__CookieTokenizer__RecognizedAttribute::get_Token() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__CookieTokenizer__RecognizedAttribute>::get(),
                                                                             "get_Token", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::CookieToken, false>(this, ___internal_method);
}
inline bool System::Net::__CookieTokenizer__RecognizedAttribute::IsEqualTo(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__CookieTokenizer__RecognizedAttribute>::get(), "IsEqualTo",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_token", ty: "::System::Net::CookieToken", modifiers: "", def_value:
// Some("{}") }]
constexpr ::System::Net::__CookieTokenizer__RecognizedAttribute::__CookieTokenizer__RecognizedAttribute(::StringW m_name, ::System::Net::CookieToken m_token) noexcept {
  this->m_name = m_name;
  this->m_token = m_token;
}
// Ctor Parameters []
constexpr ::System::Net::__CookieTokenizer__RecognizedAttribute::__CookieTokenizer__RecognizedAttribute() {}
//  Writing Method size for method: ::System::Net::CookieTokenizer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CookieTokenizer::*)(::StringW)>(&::System::Net::CookieTokenizer::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2fe3d68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.get_EndOfCookie
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::CookieTokenizer::*)()>(&::System::Net::CookieTokenizer::get_EndOfCookie)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe3da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "get_EndOfCookie",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.set_EndOfCookie
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CookieTokenizer::*)(bool)>(&::System::Net::CookieTokenizer::set_EndOfCookie)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2fe3da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "set_EndOfCookie",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.get_Eof
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::CookieTokenizer::*)()>(&::System::Net::CookieTokenizer::get_Eof)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2fe3db4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "get_Eof",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::CookieTokenizer::*)()>(&::System::Net::CookieTokenizer::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe3dc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "get_Name",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.set_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CookieTokenizer::*)(::StringW)>(&::System::Net::CookieTokenizer::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe3dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "set_Name", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.get_Quoted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::CookieTokenizer::*)()>(&::System::Net::CookieTokenizer::get_Quoted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe3dd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "get_Quoted",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.set_Quoted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CookieTokenizer::*)(bool)>(&::System::Net::CookieTokenizer::set_Quoted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2fe3ddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "set_Quoted", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.get_Token
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::CookieToken (::System::Net::CookieTokenizer::*)()>(&::System::Net::CookieTokenizer::get_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe3de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "get_Token",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.set_Token
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CookieTokenizer::*)(::System::Net::CookieToken)>(&::System::Net::CookieTokenizer::set_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe3df0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "set_Token", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CookieToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::CookieTokenizer::*)()>(&::System::Net::CookieTokenizer::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe3df8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "get_Value",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.set_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CookieTokenizer::*)(::StringW)>(&::System::Net::CookieTokenizer::set_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe3e00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "set_Value", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.Extract
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::CookieTokenizer::*)()>(&::System::Net::CookieTokenizer::Extract)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2fe3e08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "Extract",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.FindNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::CookieToken (::System::Net::CookieTokenizer::*)(bool, bool)>(
    &::System::Net::CookieTokenizer::FindNext)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x2fe3e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "FindNext", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.Next
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::CookieToken (::System::Net::CookieTokenizer::*)(bool, bool)>(&::System::Net::CookieTokenizer::Next)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2fe4134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "Next", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CookieTokenizer::*)()>(&::System::Net::CookieTokenizer::Reset)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2fe4234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieTokenizer.TokenFromName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::CookieToken (::System::Net::CookieTokenizer::*)(bool)>(
    &::System::Net::CookieTokenizer::TokenFromName)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2fe429c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "TokenFromName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& System::Net::CookieTokenizer::__cordl_internal_get_m_eofCookie() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_eofCookie;
}
constexpr bool const& System::Net::CookieTokenizer::__cordl_internal_get_m_eofCookie() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_eofCookie;
}
constexpr void System::Net::CookieTokenizer::__cordl_internal_set_m_eofCookie(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_eofCookie = value;
}
constexpr int32_t& System::Net::CookieTokenizer::__cordl_internal_get_m_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_index;
}
constexpr int32_t const& System::Net::CookieTokenizer::__cordl_internal_get_m_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_index;
}
constexpr void System::Net::CookieTokenizer::__cordl_internal_set_m_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_index = value;
}
constexpr int32_t& System::Net::CookieTokenizer::__cordl_internal_get_m_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_length;
}
constexpr int32_t const& System::Net::CookieTokenizer::__cordl_internal_get_m_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_length;
}
constexpr void System::Net::CookieTokenizer::__cordl_internal_set_m_length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_length = value;
}
constexpr ::StringW& System::Net::CookieTokenizer::__cordl_internal_get_m_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_name;
}
constexpr ::StringW const& System::Net::CookieTokenizer::__cordl_internal_get_m_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_name;
}
constexpr void System::Net::CookieTokenizer::__cordl_internal_set_m_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::CookieTokenizer::__cordl_internal_get_m_quoted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_quoted;
}
constexpr bool const& System::Net::CookieTokenizer::__cordl_internal_get_m_quoted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_quoted;
}
constexpr void System::Net::CookieTokenizer::__cordl_internal_set_m_quoted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_quoted = value;
}
constexpr int32_t& System::Net::CookieTokenizer::__cordl_internal_get_m_start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_start;
}
constexpr int32_t const& System::Net::CookieTokenizer::__cordl_internal_get_m_start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_start;
}
constexpr void System::Net::CookieTokenizer::__cordl_internal_set_m_start(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_start = value;
}
constexpr ::System::Net::CookieToken& System::Net::CookieTokenizer::__cordl_internal_get_m_token() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_token;
}
constexpr ::System::Net::CookieToken const& System::Net::CookieTokenizer::__cordl_internal_get_m_token() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_token;
}
constexpr void System::Net::CookieTokenizer::__cordl_internal_set_m_token(::System::Net::CookieToken value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_token = value;
}
constexpr int32_t& System::Net::CookieTokenizer::__cordl_internal_get_m_tokenLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_tokenLength;
}
constexpr int32_t const& System::Net::CookieTokenizer::__cordl_internal_get_m_tokenLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_tokenLength;
}
constexpr void System::Net::CookieTokenizer::__cordl_internal_set_m_tokenLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_tokenLength = value;
}
constexpr ::StringW& System::Net::CookieTokenizer::__cordl_internal_get_m_tokenStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_tokenStream;
}
constexpr ::StringW const& System::Net::CookieTokenizer::__cordl_internal_get_m_tokenStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_tokenStream;
}
constexpr void System::Net::CookieTokenizer::__cordl_internal_set_m_tokenStream(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_tokenStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::CookieTokenizer::__cordl_internal_get_m_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_value;
}
constexpr ::StringW const& System::Net::CookieTokenizer::__cordl_internal_get_m_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_value;
}
constexpr void System::Net::CookieTokenizer::__cordl_internal_set_m_value(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void
System::Net::CookieTokenizer::setStaticF_RecognizedAttributes(::ArrayW<::System::Net::__CookieTokenizer__RecognizedAttribute, ::Array<::System::Net::__CookieTokenizer__RecognizedAttribute>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Net::__CookieTokenizer__RecognizedAttribute, ::Array<::System::Net::__CookieTokenizer__RecognizedAttribute>*>, "RecognizedAttributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get>(
      std::forward<::ArrayW<::System::Net::__CookieTokenizer__RecognizedAttribute, ::Array<::System::Net::__CookieTokenizer__RecognizedAttribute>*>>(value));
}
inline ::ArrayW<::System::Net::__CookieTokenizer__RecognizedAttribute, ::Array<::System::Net::__CookieTokenizer__RecognizedAttribute>*>
System::Net::CookieTokenizer::getStaticF_RecognizedAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Net::__CookieTokenizer__RecognizedAttribute, ::Array<::System::Net::__CookieTokenizer__RecognizedAttribute>*>, "RecognizedAttributes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get>();
}
inline void System::Net::CookieTokenizer::setStaticF_RecognizedServerAttributes(
    ::ArrayW<::System::Net::__CookieTokenizer__RecognizedAttribute, ::Array<::System::Net::__CookieTokenizer__RecognizedAttribute>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Net::__CookieTokenizer__RecognizedAttribute, ::Array<::System::Net::__CookieTokenizer__RecognizedAttribute>*>, "RecognizedServerAttributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get>(
      std::forward<::ArrayW<::System::Net::__CookieTokenizer__RecognizedAttribute, ::Array<::System::Net::__CookieTokenizer__RecognizedAttribute>*>>(value));
}
inline ::ArrayW<::System::Net::__CookieTokenizer__RecognizedAttribute, ::Array<::System::Net::__CookieTokenizer__RecognizedAttribute>*>
System::Net::CookieTokenizer::getStaticF_RecognizedServerAttributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Net::__CookieTokenizer__RecognizedAttribute, ::Array<::System::Net::__CookieTokenizer__RecognizedAttribute>*>,
                                           "RecognizedServerAttributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get>();
}
inline ::System::Net::CookieTokenizer* System::Net::CookieTokenizer::New_ctor(::StringW tokenStream) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::CookieTokenizer*>(tokenStream));
}
inline void System::Net::CookieTokenizer::_ctor(::StringW tokenStream) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tokenStream);
}
inline bool System::Net::CookieTokenizer::get_EndOfCookie() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "get_EndOfCookie",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::CookieTokenizer::set_EndOfCookie(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "set_EndOfCookie",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::CookieTokenizer::get_Eof() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "get_Eof",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::Net::CookieTokenizer::get_Name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "get_Name",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Net::CookieTokenizer::set_Name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "set_Name", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::CookieTokenizer::get_Quoted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "get_Quoted",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::CookieTokenizer::set_Quoted(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "set_Quoted", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::CookieToken System::Net::CookieTokenizer::get_Token() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "get_Token",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::CookieToken, false>(this, ___internal_method);
}
inline void System::Net::CookieTokenizer::set_Token(::System::Net::CookieToken value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "set_Token", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CookieToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW System::Net::CookieTokenizer::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "get_Value",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Net::CookieTokenizer::set_Value(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "set_Value", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW System::Net::CookieTokenizer::Extract() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "Extract",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Net::CookieToken System::Net::CookieTokenizer::FindNext(bool ignoreComma, bool ignoreEquals) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "FindNext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::CookieToken, false>(this, ___internal_method, ignoreComma, ignoreEquals);
}
inline ::System::Net::CookieToken System::Net::CookieTokenizer::Next(bool first, bool parseResponseCookies) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "Next", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::CookieToken, false>(this, ___internal_method, first, parseResponseCookies);
}
inline void System::Net::CookieTokenizer::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::CookieToken System::Net::CookieTokenizer::TokenFromName(bool parseResponseCookies) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieTokenizer*>::get(), "TokenFromName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::CookieToken, false>(this, ___internal_method, parseResponseCookies);
}
// Ctor Parameters []
constexpr ::System::Net::CookieTokenizer::CookieTokenizer() {}
