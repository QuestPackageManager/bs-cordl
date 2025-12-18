#pragma once
// IWYU pragma private; include "Mono/Security/Cryptography/RC4.hpp"
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_impl.hpp"
#include "Mono/Security/Cryptography/zzzz__RC4_def.hpp"
#include "System/Security/Cryptography/zzzz__KeySizes_def.hpp"
//  Writing Method size for method: ::Mono::Security::Cryptography::RC4._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::RC4::*)()>(&::Mono::Security::Cryptography::RC4::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x58efad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RC4*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RC4.get_IV
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::Cryptography::RC4::*)()>(
    &::Mono::Security::Cryptography::RC4::get_IV)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x58f4864;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RC4*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RC4*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RC4.set_IV
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::RC4::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Mono::Security::Cryptography::RC4::set_IV)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58f48ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RC4*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RC4*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RC4.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Cryptography::RC4* (*)()>(&::Mono::Security::Cryptography::RC4::Create)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x58f48b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RC4*>::get(), "Create",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Mono::Security::Cryptography::RC4::setStaticF_s_legalBlockSizes(::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*>, "s_legalBlockSizes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RC4*>::get>(
      std::forward<::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*>>(value));
}
inline ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> Mono::Security::Cryptography::RC4::getStaticF_s_legalBlockSizes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*>, "s_legalBlockSizes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RC4*>::get>();
}
inline void Mono::Security::Cryptography::RC4::setStaticF_s_legalKeySizes(::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*>, "s_legalKeySizes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RC4*>::get>(
      std::forward<::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*>>(value));
}
inline ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> Mono::Security::Cryptography::RC4::getStaticF_s_legalKeySizes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*>, "s_legalKeySizes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RC4*>::get>();
}
inline void Mono::Security::Cryptography::RC4::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RC4*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::Cryptography::RC4::get_IV() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RC4*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::RC4::set_IV(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RC4*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Mono::Security::Cryptography::RC4* Mono::Security::Cryptography::RC4::Create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::RC4*>::get(), "Create",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Cryptography::RC4*, false>(nullptr, ___internal_method);
}
inline ::Mono::Security::Cryptography::RC4* Mono::Security::Cryptography::RC4::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Security::Cryptography::RC4*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::Cryptography::RC4::RC4() {}
