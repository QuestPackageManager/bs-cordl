#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__SharedStatics_def.hpp"
#include "System/Security/Util/zzzz__Tokenizer_def.hpp"
//  Writing Method size for method: ::System::SharedStatics._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::SharedStatics::*)()>(&::System::SharedStatics::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26e4ebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::SharedStatics*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SharedStatics.GetSharedStringMaker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Util::__Tokenizer__StringMaker* (*)()>(&::System::SharedStatics::GetSharedStringMaker)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x26e4ec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::SharedStatics*>::get(), "GetSharedStringMaker",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SharedStatics.ReleaseSharedStringMaker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::System::Security::Util::__Tokenizer__StringMaker*>)>(
    &::System::SharedStatics::ReleaseSharedStringMaker)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x26e5094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::SharedStatics*>::get(), "ReleaseSharedStringMaker", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Security::Util::__Tokenizer__StringMaker*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Security::Util::__Tokenizer__StringMaker*& System::SharedStatics::__cordl_internal_get__maker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maker;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Util::__Tokenizer__StringMaker*> const& System::SharedStatics::__cordl_internal_get__maker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maker;
}
constexpr void System::SharedStatics::__cordl_internal_set__maker(::System::Security::Util::__Tokenizer__StringMaker* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____maker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::SharedStatics::setStaticF__sharedStatics(::System::SharedStatics* value) {
  ::cordl_internals::setStaticField<::System::SharedStatics*, "_sharedStatics", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::SharedStatics*>::get>(
      std::forward<::System::SharedStatics*>(value));
}
inline ::System::SharedStatics* System::SharedStatics::getStaticF__sharedStatics() {
  return ::cordl_internals::getStaticField<::System::SharedStatics*, "_sharedStatics", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::SharedStatics*>::get>();
}
inline ::System::SharedStatics* System::SharedStatics::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::SharedStatics*>());
}
inline void System::SharedStatics::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::SharedStatics*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::Util::__Tokenizer__StringMaker* System::SharedStatics::GetSharedStringMaker() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::SharedStatics*>::get(), "GetSharedStringMaker",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Util::__Tokenizer__StringMaker*, false>(nullptr, ___internal_method);
}
inline void System::SharedStatics::ReleaseSharedStringMaker(ByRef<::System::Security::Util::__Tokenizer__StringMaker*> maker) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::SharedStatics*>::get(), "ReleaseSharedStringMaker", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Security::Util::__Tokenizer__StringMaker*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, maker);
}
// Ctor Parameters []
constexpr ::System::SharedStatics::SharedStatics() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
