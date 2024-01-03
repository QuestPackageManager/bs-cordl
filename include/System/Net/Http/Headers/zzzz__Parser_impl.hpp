#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/Headers/zzzz__Parser_def.hpp"
#include "System/Net/Http/Headers/zzzz__Parser_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::Http::Headers::__Parser__Token.Check
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::System::Net::Http::Headers::__Parser__Token::Check)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x28334d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__Parser__Token*>::get(), "Check", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::__Parser__Token.TryCheck
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Net::Http::Headers::__Parser__Token::TryCheck)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x283ba98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__Parser__Token*>::get(), "TryCheck", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::Http::Headers::__Parser__Token::Check(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__Parser__Token*>::get(), "Check", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, s);
}
inline bool System::Net::Http::Headers::__Parser__Token::TryCheck(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__Parser__Token*>::get(), "TryCheck", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s);
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::__Parser__Token::__Parser__Token() {}
//  Writing Method size for method: ::GlobalNamespace::__Parser__DateTime____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__Parser__DateTime____c::*)()>(&::GlobalNamespace::__Parser__DateTime____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x283ea48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Parser__DateTime____c*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Parser__DateTime____c.__cctor_b__2_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__Parser__DateTime____c::*)(::System::Object*)>(
    &::GlobalNamespace::__Parser__DateTime____c::__cctor_b__2_0)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x283ea50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Parser__DateTime____c*>::get(), "<.cctor>b__2_0",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__Parser__DateTime____c::setStaticF___9(::GlobalNamespace::__Parser__DateTime____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__Parser__DateTime____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Parser__DateTime____c*>::get>(
      std::forward<::GlobalNamespace::__Parser__DateTime____c*>(value));
}
inline ::GlobalNamespace::__Parser__DateTime____c* GlobalNamespace::__Parser__DateTime____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__Parser__DateTime____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Parser__DateTime____c*>::get>();
}
inline ::GlobalNamespace::__Parser__DateTime____c* GlobalNamespace::__Parser__DateTime____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__Parser__DateTime____c*>());
}
inline void GlobalNamespace::__Parser__DateTime____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Parser__DateTime____c*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__Parser__DateTime____c::__cctor_b__2_0(::System::Object* l) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Parser__DateTime____c*>::get(), "<.cctor>b__2_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, l);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__Parser__DateTime____c::__Parser__DateTime____c() {}
//  Writing Method size for method: ::System::Net::Http::Headers::__Parser__DateTime.TryParse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::System::DateTimeOffset>)>(&::System::Net::Http::Headers::__Parser__DateTime::TryParse)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x283e8bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__Parser__DateTime*>::get(), "TryParse", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeOffset>>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::Http::Headers::__Parser__DateTime::setStaticF_ToString(::System::Func_2<::System::Object*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Object*, ::StringW>*, "ToString",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__Parser__DateTime*>::get>(
      std::forward<::System::Func_2<::System::Object*, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Object*, ::StringW>* System::Net::Http::Headers::__Parser__DateTime::getStaticF_ToString() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Object*, ::StringW>*, "ToString",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__Parser__DateTime*>::get>();
}
inline bool System::Net::Http::Headers::__Parser__DateTime::TryParse(::StringW input, ByRef<::System::DateTimeOffset> result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__Parser__DateTime*>::get(), "TryParse", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DateTimeOffset>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, input, result);
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::__Parser__DateTime::__Parser__DateTime() {}
//  Writing Method size for method: ::System::Net::Http::Headers::__Parser__EmailAddress.TryParse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::StringW>)>(&::System::Net::Http::Headers::__Parser__EmailAddress::TryParse)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x283eb28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__Parser__EmailAddress*>::get(), "TryParse", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
inline bool System::Net::Http::Headers::__Parser__EmailAddress::TryParse(::StringW input, ByRef<::StringW> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__Parser__EmailAddress*>::get(), "TryParse", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, input, result);
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::__Parser__EmailAddress::__Parser__EmailAddress() {}
//  Writing Method size for method: ::System::Net::Http::Headers::__Parser__Host.TryParse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::StringW>)>(&::System::Net::Http::Headers::__Parser__Host::TryParse)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x283ec10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__Parser__Host*>::get(), "TryParse", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
inline bool System::Net::Http::Headers::__Parser__Host::TryParse(::StringW input, ByRef<::StringW> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__Parser__Host*>::get(), "TryParse", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, input, result);
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::__Parser__Host::__Parser__Host() {}
//  Writing Method size for method: ::System::Net::Http::Headers::__Parser__Int.TryParse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<int32_t>)>(&::System::Net::Http::Headers::__Parser__Int::TryParse)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x283ecd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__Parser__Int*>::get(), "TryParse", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
inline bool System::Net::Http::Headers::__Parser__Int::TryParse(::StringW input, ByRef<int32_t> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__Parser__Int*>::get(), "TryParse", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, input, result);
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::__Parser__Int::__Parser__Int() {}
//  Writing Method size for method: ::System::Net::Http::Headers::__Parser__Long.TryParse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<int64_t>)>(&::System::Net::Http::Headers::__Parser__Long::TryParse)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x283ed50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__Parser__Long*>::get(), "TryParse", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get() })));
    return ___internal_method;
  }
};
inline bool System::Net::Http::Headers::__Parser__Long::TryParse(::StringW input, ByRef<int64_t> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__Parser__Long*>::get(), "TryParse", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, input, result);
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::__Parser__Long::__Parser__Long() {}
//  Writing Method size for method: ::GlobalNamespace::__Parser__MD5____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__Parser__MD5____c::*)()>(&::GlobalNamespace::__Parser__MD5____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x283efe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Parser__MD5____c*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Parser__MD5____c.__cctor_b__2_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__Parser__MD5____c::*)(::System::Object*)>(
    &::GlobalNamespace::__Parser__MD5____c::__cctor_b__2_0)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x283efe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Parser__MD5____c*>::get(), "<.cctor>b__2_0", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__Parser__MD5____c::setStaticF___9(::GlobalNamespace::__Parser__MD5____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__Parser__MD5____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Parser__MD5____c*>::get>(
      std::forward<::GlobalNamespace::__Parser__MD5____c*>(value));
}
inline ::GlobalNamespace::__Parser__MD5____c* GlobalNamespace::__Parser__MD5____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__Parser__MD5____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Parser__MD5____c*>::get>();
}
inline ::GlobalNamespace::__Parser__MD5____c* GlobalNamespace::__Parser__MD5____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__Parser__MD5____c*>());
}
inline void GlobalNamespace::__Parser__MD5____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Parser__MD5____c*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__Parser__MD5____c::__cctor_b__2_0(::System::Object* l) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Parser__MD5____c*>::get(), "<.cctor>b__2_0", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, l);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__Parser__MD5____c::__Parser__MD5____c() {}
//  Writing Method size for method: ::System::Net::Http::Headers::__Parser__MD5.TryParse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>)>(
    &::System::Net::Http::Headers::__Parser__MD5::TryParse)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x283edc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__Parser__MD5*>::get(), "TryParse", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::Http::Headers::__Parser__MD5::setStaticF_ToString(::System::Func_2<::System::Object*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Object*, ::StringW>*, "ToString",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__Parser__MD5*>::get>(
      std::forward<::System::Func_2<::System::Object*, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Object*, ::StringW>* System::Net::Http::Headers::__Parser__MD5::getStaticF_ToString() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Object*, ::StringW>*, "ToString",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__Parser__MD5*>::get>();
}
inline bool System::Net::Http::Headers::__Parser__MD5::TryParse(::StringW input, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__Parser__MD5*>::get(), "TryParse", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, input, result);
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::__Parser__MD5::__Parser__MD5() {}
//  Writing Method size for method: ::System::Net::Http::Headers::__Parser__TimeSpanSeconds.TryParse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::System::TimeSpan>)>(&::System::Net::Http::Headers::__Parser__TimeSpanSeconds::TryParse)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x283f07c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__Parser__TimeSpanSeconds*>::get(), "TryParse", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::TimeSpan>>::get() })));
    return ___internal_method;
  }
};
inline bool System::Net::Http::Headers::__Parser__TimeSpanSeconds::TryParse(::StringW input, ByRef<::System::TimeSpan> result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__Parser__TimeSpanSeconds*>::get(), "TryParse", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::TimeSpan>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, input, result);
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::__Parser__TimeSpanSeconds::__Parser__TimeSpanSeconds() {}
//  Writing Method size for method: ::System::Net::Http::Headers::__Parser__Uri.TryParse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::System::Uri*>)>(&::System::Net::Http::Headers::__Parser__Uri::TryParse)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x283f12c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__Parser__Uri*>::get(), "TryParse", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Uri*>>::get() })));
    return ___internal_method;
  }
};
inline bool System::Net::Http::Headers::__Parser__Uri::TryParse(::StringW input, ByRef<::System::Uri*> result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::__Parser__Uri*>::get(), "TryParse", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Uri*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, input, result);
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::__Parser__Uri::__Parser__Uri() {}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::Parser::Parser() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
