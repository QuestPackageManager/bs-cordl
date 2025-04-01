#pragma once
// IWYU pragma private; include "UnityEngine/SpookyHash.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__SpookyHash_def.hpp"
#include "UnityEngine/zzzz__SpookyHash_def.hpp"
//  Writing Method size for method: ::UnityEngine::SpookyHash_U._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SpookyHash_U::*)(::cordl_internals::Ptr<uint16_t>)>(&::UnityEngine::SpookyHash_U::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48952b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpookyHash_U>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint16_t>>::get() })));
    return ___internal_method;
  }
};
constexpr ::cordl_internals::Ptr<uint8_t>& UnityEngine::SpookyHash_U::__cordl_internal_get_p8() {
  return this->___p8;
}
constexpr ::cordl_internals::Ptr<uint8_t> const& UnityEngine::SpookyHash_U::__cordl_internal_get_p8() const {
  return this->___p8;
}
constexpr void UnityEngine::SpookyHash_U::__cordl_internal_set_p8(::cordl_internals::Ptr<uint8_t> value) {
  this->___p8 = value;
}
constexpr ::cordl_internals::Ptr<uint32_t>& UnityEngine::SpookyHash_U::__cordl_internal_get_p32() {
  return this->___p32;
}
constexpr ::cordl_internals::Ptr<uint32_t> const& UnityEngine::SpookyHash_U::__cordl_internal_get_p32() const {
  return this->___p32;
}
constexpr void UnityEngine::SpookyHash_U::__cordl_internal_set_p32(::cordl_internals::Ptr<uint32_t> value) {
  this->___p32 = value;
}
constexpr ::cordl_internals::Ptr<uint64_t>& UnityEngine::SpookyHash_U::__cordl_internal_get_p64() {
  return this->___p64;
}
constexpr ::cordl_internals::Ptr<uint64_t> const& UnityEngine::SpookyHash_U::__cordl_internal_get_p64() const {
  return this->___p64;
}
constexpr void UnityEngine::SpookyHash_U::__cordl_internal_set_p64(::cordl_internals::Ptr<uint64_t> value) {
  this->___p64 = value;
}
constexpr uint64_t& UnityEngine::SpookyHash_U::__cordl_internal_get_i() {
  return this->___i;
}
constexpr uint64_t const& UnityEngine::SpookyHash_U::__cordl_internal_get_i() const {
  return this->___i;
}
constexpr void UnityEngine::SpookyHash_U::__cordl_internal_set_i(uint64_t value) {
  this->___i = value;
}
inline void UnityEngine::SpookyHash_U::_ctor(::cordl_internals::Ptr<uint16_t> p8) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpookyHash_U>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p8);
}
// Ctor Parameters [CppParam { name: "p8", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "p32", ty: "::cordl_internals::Ptr<uint32_t>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "p64", ty: "::cordl_internals::Ptr<uint64_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "i", ty: "uint64_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::SpookyHash_U::SpookyHash_U(::cordl_internals::Ptr<uint8_t> p8, ::cordl_internals::Ptr<uint32_t> p32, ::cordl_internals::Ptr<uint64_t> p64, uint64_t i) noexcept {
  this->p8 = p8;
  this->p32 = p32;
  this->p64 = p64;
  this->i = i;
}
// Ctor Parameters []
constexpr ::UnityEngine::SpookyHash_U::SpookyHash_U() {}
//  Writing Method size for method: ::UnityEngine::SpookyHash.AttemptDetectAllowUnalignedRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::SpookyHash::AttemptDetectAllowUnalignedRead)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4894e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpookyHash*>::get(), "AttemptDetectAllowUnalignedRead",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpookyHash.Hash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<void>, uint64_t, ::cordl_internals::Ptr<uint64_t>, ::cordl_internals::Ptr<uint64_t>)>(
    &::UnityEngine::SpookyHash::Hash)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x4894b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpookyHash*>::get(), "Hash", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint64_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpookyHash.End
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::cordl_internals::Ptr<uint64_t>, ::ByRef<uint64_t>, ::ByRef<uint64_t>, ::ByRef<uint64_t>, ::ByRef<uint64_t>, ::ByRef<uint64_t>, ::ByRef<uint64_t>, ::ByRef<uint64_t>,
                         ::ByRef<uint64_t>, ::ByRef<uint64_t>, ::ByRef<uint64_t>, ::ByRef<uint64_t>, ::ByRef<uint64_t>)>(&::UnityEngine::SpookyHash::End)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x48957dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpookyHash*>::get(), "End", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 13>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpookyHash.EndPartial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ByRef<uint64_t>, ::ByRef<uint64_t>, ::ByRef<uint64_t>, ::ByRef<uint64_t>, ::ByRef<uint64_t>, ::ByRef<uint64_t>, ::ByRef<uint64_t>, ::ByRef<uint64_t>, ::ByRef<uint64_t>,
                         ::ByRef<uint64_t>, ::ByRef<uint64_t>, ::ByRef<uint64_t>)>(&::UnityEngine::SpookyHash::EndPartial)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x4895a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpookyHash*>::get(), "EndPartial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 12>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpookyHash.Rot64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<uint64_t>, int32_t)>(&::UnityEngine::SpookyHash::Rot64)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4895ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpookyHash*>::get(), "Rot64", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpookyHash.Short
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<void>, uint64_t, ::cordl_internals::Ptr<uint64_t>, ::cordl_internals::Ptr<uint64_t>)>(
    &::UnityEngine::SpookyHash::Short)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x4894f20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpookyHash*>::get(), "Short", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint64_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpookyHash.ShortMix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<uint64_t>, ::ByRef<uint64_t>, ::ByRef<uint64_t>, ::ByRef<uint64_t>)>(
    &::UnityEngine::SpookyHash::ShortMix)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x4895cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpookyHash*>::get(), "ShortMix", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpookyHash.ShortEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<uint64_t>, ::ByRef<uint64_t>, ::ByRef<uint64_t>, ::ByRef<uint64_t>)>(
    &::UnityEngine::SpookyHash::ShortEnd)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x4895f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpookyHash*>::get(), "ShortEnd", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpookyHash.Mix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::cordl_internals::Ptr<uint64_t>, ::ByRef<uint64_t>, ::ByRef<uint64_t>, ::ByRef<uint64_t>, ::ByRef<uint64_t>, ::ByRef<uint64_t>, ::ByRef<uint64_t>, ::ByRef<uint64_t>,
                         ::ByRef<uint64_t>, ::ByRef<uint64_t>, ::ByRef<uint64_t>, ::ByRef<uint64_t>, ::ByRef<uint64_t>)>(&::UnityEngine::SpookyHash::Mix)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x48952b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpookyHash*>::get(), "Mix", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 13>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpookyHash.memset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<void>, int32_t, uint64_t)>(&::UnityEngine::SpookyHash::memset)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x4895704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpookyHash*>::get(), "memset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::SpookyHash::setStaticF_AllowUnalignedRead(bool value) {
  ::cordl_internals::setStaticField<bool, "AllowUnalignedRead", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpookyHash*>::get>(std::forward<bool>(value));
}
inline bool UnityEngine::SpookyHash::getStaticF_AllowUnalignedRead() {
  return ::cordl_internals::getStaticField<bool, "AllowUnalignedRead", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpookyHash*>::get>();
}
inline bool UnityEngine::SpookyHash::AttemptDetectAllowUnalignedRead() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpookyHash*>::get(),
                                                                             "AttemptDetectAllowUnalignedRead", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::SpookyHash::Hash(::cordl_internals::Ptr<void> message, uint64_t length, ::cordl_internals::Ptr<uint64_t> hash1, ::cordl_internals::Ptr<uint64_t> hash2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpookyHash*>::get(), "Hash", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint64_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message, length, hash1, hash2);
}
inline void UnityEngine::SpookyHash::End(::cordl_internals::Ptr<uint64_t> data, ::ByRef<uint64_t> h0, ::ByRef<uint64_t> h1, ::ByRef<uint64_t> h2, ::ByRef<uint64_t> h3, ::ByRef<uint64_t> h4,
                                         ::ByRef<uint64_t> h5, ::ByRef<uint64_t> h6, ::ByRef<uint64_t> h7, ::ByRef<uint64_t> h8, ::ByRef<uint64_t> h9, ::ByRef<uint64_t> h10, ::ByRef<uint64_t> h11) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpookyHash*>::get(), "End", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 13>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, h0, h1, h2, h3, h4, h5, h6, h7, h8, h9, h10, h11);
}
inline void UnityEngine::SpookyHash::EndPartial(::ByRef<uint64_t> h0, ::ByRef<uint64_t> h1, ::ByRef<uint64_t> h2, ::ByRef<uint64_t> h3, ::ByRef<uint64_t> h4, ::ByRef<uint64_t> h5,
                                                ::ByRef<uint64_t> h6, ::ByRef<uint64_t> h7, ::ByRef<uint64_t> h8, ::ByRef<uint64_t> h9, ::ByRef<uint64_t> h10, ::ByRef<uint64_t> h11) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpookyHash*>::get(), "EndPartial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 12>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, h0, h1, h2, h3, h4, h5, h6, h7, h8, h9, h10, h11);
}
inline void UnityEngine::SpookyHash::Rot64(::ByRef<uint64_t> x, int32_t k) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpookyHash*>::get(), "Rot64", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, x, k);
}
inline void UnityEngine::SpookyHash::Short(::cordl_internals::Ptr<void> message, uint64_t length, ::cordl_internals::Ptr<uint64_t> hash1, ::cordl_internals::Ptr<uint64_t> hash2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpookyHash*>::get(), "Short", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint64_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message, length, hash1, hash2);
}
inline void UnityEngine::SpookyHash::ShortMix(::ByRef<uint64_t> h0, ::ByRef<uint64_t> h1, ::ByRef<uint64_t> h2, ::ByRef<uint64_t> h3) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpookyHash*>::get(), "ShortMix", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, h0, h1, h2, h3);
}
inline void UnityEngine::SpookyHash::ShortEnd(::ByRef<uint64_t> h0, ::ByRef<uint64_t> h1, ::ByRef<uint64_t> h2, ::ByRef<uint64_t> h3) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpookyHash*>::get(), "ShortEnd", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, h0, h1, h2, h3);
}
inline void UnityEngine::SpookyHash::Mix(::cordl_internals::Ptr<uint64_t> data, ::ByRef<uint64_t> s0, ::ByRef<uint64_t> s1, ::ByRef<uint64_t> s2, ::ByRef<uint64_t> s3, ::ByRef<uint64_t> s4,
                                         ::ByRef<uint64_t> s5, ::ByRef<uint64_t> s6, ::ByRef<uint64_t> s7, ::ByRef<uint64_t> s8, ::ByRef<uint64_t> s9, ::ByRef<uint64_t> s10, ::ByRef<uint64_t> s11) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpookyHash*>::get(), "Mix", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 13>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11);
}
inline void UnityEngine::SpookyHash::memset(::cordl_internals::Ptr<void> dst, int32_t value, uint64_t numberOfBytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpookyHash*>::get(), "memset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dst, value, numberOfBytes);
}
// Ctor Parameters []
constexpr ::UnityEngine::SpookyHash::SpookyHash() {}
