#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Rfc8032/zzzz__Ed448_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IXof_def.hpp"
#include "Org/BouncyCastle/Math/EC/Rfc8032/zzzz__Ed448_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__Algorithm::__Ed448__Algorithm(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__Algorithm::__Ed448__Algorithm() {}
constexpr ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__Algorithm Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__Algorithm::Ed448{ static_cast<int32_t>(0x0) };
constexpr ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__Algorithm Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__Algorithm::Ed448ph{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt::*)()>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x10b9c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt::__cordl_internal_set_x(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___x)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt::__cordl_internal_set_y(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___y)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt::__cordl_internal_get_z() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt::__cordl_internal_get_z() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt::__cordl_internal_set_z(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___z)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>());
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt::__Ed448__PointExt() {}
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp::*)()>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x10baed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp::__cordl_internal_set_x(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___x)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp::__cordl_internal_set_y(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___y)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp* Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp*>());
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp::__Ed448__PointPrecomp() {}
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.CalculateS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CalculateS)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x10b7054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "CalculateS", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.CheckContextVar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckContextVar)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x10b7b64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "CheckContextVar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.CheckPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint32_t, ::Array<uint32_t>*>, ::ArrayW<uint32_t, ::Array<uint32_t>*>)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckPoint)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x10b7b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "CheckPoint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.CheckPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint32_t, ::Array<uint32_t>*>, ::ArrayW<uint32_t, ::Array<uint32_t>*>,
                                                                                              ::ArrayW<uint32_t, ::Array<uint32_t>*>)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckPoint)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x10b7c50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "CheckPoint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.CheckPointVar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckPointVar)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x10b7d7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "CheckPointVar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.CheckScalarVar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckScalarVar)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x10b7f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "CheckScalarVar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.CreatePrehash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IXof* (*)()>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CreatePrehash)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x10b8000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(),
                                                                               "CreatePrehash", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.CreateXof
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IXof* (*)()>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CreateXof)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x10b804c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(),
                                                                               "CreateXof", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Decode16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Decode16)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x10b80ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "Decode16", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Decode24
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Decode24)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x10b80ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "Decode24", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Decode32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Decode32)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x10b8140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "Decode32", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Decode32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint32_t, ::Array<uint32_t>*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Decode32)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x10b7e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "Decode32", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.DecodePointVar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, bool, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::DecodePointVar)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x10b81a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "DecodePointVar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.DecodeScalar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint32_t, ::Array<uint32_t>*>)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::DecodeScalar)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x10b71ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "DecodeScalar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Dom4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Crypto::IXof*, uint8_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Dom4)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x10b83c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "Dom4", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IXof*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Encode24
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Encode24)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x10b85f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "Encode24", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Encode32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Encode32)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x10b7260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "Encode32", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Encode56
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Encode56)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x10b8658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "Encode56", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.EncodePoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::EncodePoint)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x10b86d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "EncodePoint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.GeneratePrivateKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Security::SecureRandom*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::GeneratePrivateKey)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10b8808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "GeneratePrivateKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.GeneratePublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::GeneratePublicKey)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x10b8824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "GeneratePublicKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.GetWnafVar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int8_t, ::Array<int8_t>*> (*)(::ArrayW<uint32_t, ::Array<uint32_t>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::GetWnafVar)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x10b8b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "GetWnafVar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.ImplSign
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::Org::BouncyCastle::Crypto::IXof*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
    uint8_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ImplSign)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x10b8d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "ImplSign", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 12>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IXof*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.ImplSign
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, uint8_t,
                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ImplSign)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x10b9178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "ImplSign", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.ImplSign
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, uint8_t,
                         ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ImplSign)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x10b9438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "ImplSign", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 11>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.ImplVerify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t,
                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*>, uint8_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ImplVerify)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x10b96e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "ImplVerify", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.PointAddVar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    bool, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointAddVar)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x10b9df8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "PointAddVar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.PointAddPrecomp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp*, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointAddPrecomp)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x10ba05c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "PointAddPrecomp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.PointCopy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* (*)(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointCopy)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x10ba254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "PointCopy", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.PointDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointDouble)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x10ba2fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "PointDouble", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.PointExtendXY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointExtendXY)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10b83a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "PointExtendXY", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.PointLookup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp*)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointLookup)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x10ba478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "PointLookup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.PointPrecompVar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*, ::Array<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>*> (*)(
        ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*, int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointPrecompVar)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x10ba554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "PointPrecompVar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.PointSetNeutral
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointSetNeutral)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x10ba6d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "PointSetNeutral", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Precompute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Precompute)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0x10ba708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(),
                                                                               "Precompute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.PruneScalar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PruneScalar)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x10b8a04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "PruneScalar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.ReduceScalar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ReduceScalar)> {
  constexpr static std::size_t size = 0x884;
  constexpr static std::size_t addrs = 0x10b72e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "ReduceScalar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.ScalarMultBase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ScalarMultBase)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x10bacbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "ScalarMultBase", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.ScalarMultBaseEncoded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ScalarMultBaseEncoded)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x10b8a64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "ScalarMultBaseEncoded", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.ScalarMultBaseXY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint32_t, ::Array<uint32_t>*>,
                                                                                           ::ArrayW<uint32_t, ::Array<uint32_t>*>)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ScalarMultBaseXY)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x10baf00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "ScalarMultBaseXY", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.ScalarMultStrausVar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<uint32_t, ::Array<uint32_t>*>, ::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*,
                         ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ScalarMultStrausVar)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x10b9c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "ScalarMultStrausVar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Sign
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Sign)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x10bb054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "Sign", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Sign
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
                         int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Sign)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x10bb110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "Sign", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 10>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.SignPrehash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::SignPrehash)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x10bb1dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "SignPrehash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.SignPrehash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
                         int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::SignPrehash)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x10bb294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "SignPrehash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.SignPrehash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Org::BouncyCastle::Crypto::IXof*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
        &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::SignPrehash)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x10bb368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "SignPrehash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IXof*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.SignPrehash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Org::BouncyCastle::Crypto::IXof*,
                         ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::SignPrehash)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x10bb534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "SignPrehash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IXof*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Verify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t,
                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Verify)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x10bb71c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "Verify", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.VerifyPrehash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t,
                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::VerifyPrehash)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x10bb7dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "VerifyPrehash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.VerifyPrehash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Org::BouncyCastle::Crypto::IXof*)>(
        &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::VerifyPrehash)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x10bb89c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "VerifyPrehash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IXof*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::*)()>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10bbc60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::setStaticF_PrehashSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "PrehashSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed448::getStaticF_PrehashSize() {
  return ::cordl_internals::getStaticField<int32_t, "PrehashSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::setStaticF_PublicKeySize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "PublicKeySize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed448::getStaticF_PublicKeySize() {
  return ::cordl_internals::getStaticField<int32_t, "PublicKeySize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::setStaticF_SecretKeySize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "SecretKeySize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed448::getStaticF_SecretKeySize() {
  return ::cordl_internals::getStaticField<int32_t, "SecretKeySize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::setStaticF_SignatureSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "SignatureSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed448::getStaticF_SignatureSize() {
  return ::cordl_internals::getStaticField<int32_t, "SignatureSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::setStaticF_Dom4Prefix(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "Dom4Prefix", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::getStaticF_Dom4Prefix() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "Dom4Prefix",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::setStaticF_P(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "P", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get>(
      std::forward<::ArrayW<uint32_t, ::Array<uint32_t>*>>(value));
}
inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::getStaticF_P() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "P", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::setStaticF_L(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "L", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get>(
      std::forward<::ArrayW<uint32_t, ::Array<uint32_t>*>>(value));
}
inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::getStaticF_L() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "L", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::setStaticF_N(::Org::BouncyCastle::Math::BigInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger*, "N", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get>(
      std::forward<::Org::BouncyCastle::Math::BigInteger*>(value));
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::Rfc8032::Ed448::getStaticF_N() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger*, "N", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::setStaticF_B_x(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "B_x", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get>(
      std::forward<::ArrayW<uint32_t, ::Array<uint32_t>*>>(value));
}
inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::getStaticF_B_x() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "B_x",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::setStaticF_B_y(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "B_y", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get>(
      std::forward<::ArrayW<uint32_t, ::Array<uint32_t>*>>(value));
}
inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::getStaticF_B_y() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "B_y",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::setStaticF_precompLock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "precompLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* Org::BouncyCastle::Math::EC::Rfc8032::Ed448::getStaticF_precompLock() {
  return ::cordl_internals::getStaticField<::System::Object*, "precompLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::setStaticF_precompBaseTable(
    ::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*, ::Array<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*, ::Array<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>*>, "precompBaseTable",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get>(
      std::forward<::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*, ::Array<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>*>>(value));
}
inline ::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*, ::Array<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>*>
Org::BouncyCastle::Math::EC::Rfc8032::Ed448::getStaticF_precompBaseTable() {
  return ::cordl_internals::getStaticField<::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*, ::Array<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>*>,
                                           "precompBaseTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::setStaticF_precompBase(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "precompBase", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get>(
      std::forward<::ArrayW<uint32_t, ::Array<uint32_t>*>>(value));
}
inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::getStaticF_precompBase() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "precompBase",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get>();
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CalculateS(::ArrayW<uint8_t, ::Array<uint8_t>*> r, ::ArrayW<uint8_t, ::Array<uint8_t>*> k,
                                                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "CalculateS", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, r, k, s);
}
inline bool Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckContextVar(::ArrayW<uint8_t, ::Array<uint8_t>*> ctx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "CheckContextVar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx);
}
inline int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckPoint(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "CheckPoint", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, x, y);
}
inline int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckPoint(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "CheckPoint", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, x, y, z);
}
inline bool Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckPointVar(::ArrayW<uint8_t, ::Array<uint8_t>*> p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "CheckPointVar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, p);
}
inline bool Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckScalarVar(::ArrayW<uint8_t, ::Array<uint8_t>*> s) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "CheckScalarVar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s);
}
inline ::Org::BouncyCastle::Crypto::IXof* Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CreatePrehash() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(),
                                                                             "CreatePrehash", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IXof*, false>(nullptr, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IXof* Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CreateXof() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "CreateXof",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IXof*, false>(nullptr, ___internal_method);
}
inline uint32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Decode16(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "Decode16", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, bs, off);
}
inline uint32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Decode24(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "Decode24", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, bs, off);
}
inline uint32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Decode32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "Decode32", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, bs, off);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Decode32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bsOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> n, int32_t nOff, int32_t nLen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "Decode32", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bs, bsOff, n, nOff, nLen);
}
inline bool Org::BouncyCastle::Math::EC::Rfc8032::Ed448::DecodePointVar(::ArrayW<uint8_t, ::Array<uint8_t>*> p, int32_t pOff, bool negate,
                                                                        ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "DecodePointVar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, p, pOff, negate, r);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::DecodeScalar(::ArrayW<uint8_t, ::Array<uint8_t>*> k, int32_t kOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> n) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "DecodeScalar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, k, kOff, n);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Dom4(::Org::BouncyCastle::Crypto::IXof* d, uint8_t x, ::ArrayW<uint8_t, ::Array<uint8_t>*> y) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "Dom4", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IXof*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, d, x, y);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Encode24(uint32_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "Encode24", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, n, bs, off);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Encode32(uint32_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "Encode32", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, n, bs, off);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Encode56(uint64_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "Encode56", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, n, bs, off);
}
inline int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed448::EncodePoint(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* p, ::ArrayW<uint8_t, ::Array<uint8_t>*> r, int32_t rOff) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "EncodePoint", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, p, r, rOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::GeneratePrivateKey(::Org::BouncyCastle::Security::SecureRandom* random, ::ArrayW<uint8_t, ::Array<uint8_t>*> k) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "GeneratePrivateKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, random, k);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::GeneratePublicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "GeneratePublicKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, pk, pkOff);
}
inline ::ArrayW<int8_t, ::Array<int8_t>*> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::GetWnafVar(::ArrayW<uint32_t, ::Array<uint32_t>*> n, int32_t width) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "GetWnafVar", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int8_t, ::Array<int8_t>*>, false>(nullptr, ___internal_method, n, width);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ImplSign(::Org::BouncyCastle::Crypto::IXof* d, ::ArrayW<uint8_t, ::Array<uint8_t>*> h, ::ArrayW<uint8_t, ::Array<uint8_t>*> s,
                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, uint8_t phflag,
                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "ImplSign", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 12>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IXof*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, d, h, s, pk, pkOff, ctx, phflag, m, mOff, mLen, sig, sigOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ImplSign(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, uint8_t phflag,
                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "ImplSign", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, ctx, phflag, m, mOff, mLen, sig, sigOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ImplSign(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff,
                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, uint8_t phflag, ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff, int32_t mLen,
                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "ImplSign", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 11>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, pk, pkOff, ctx, phflag, m, mOff, mLen, sig, sigOff);
}
inline bool Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ImplVerify(::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff,
                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, uint8_t phflag, ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff, int32_t mLen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "ImplVerify", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sig, sigOff, pk, pkOff, ctx, phflag, m, mOff, mLen);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointAddVar(bool negate, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* p,
                                                                     ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* r) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "PointAddVar", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, negate, p, r);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointAddPrecomp(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp* p,
                                                                         ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "PointAddPrecomp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p, r);
}
inline ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointCopy(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* p) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "PointCopy", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*, false>(nullptr, ___internal_method, p);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointDouble(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* r) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "PointDouble", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, r);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointExtendXY(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "PointExtendXY", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointLookup(int32_t block, int32_t index, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "PointLookup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, block, index, p);
}
inline ::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*, ::Array<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>*>
Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointPrecompVar(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* p, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "PointPrecompVar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*, ::Array<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>*>, false>(
      nullptr, ___internal_method, p, count);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointSetNeutral(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "PointSetNeutral", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Precompute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(),
                                                                             "Precompute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PruneScalar(::ArrayW<uint8_t, ::Array<uint8_t>*> n, int32_t nOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> r) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "PruneScalar", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, n, nOff, r);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ReduceScalar(::ArrayW<uint8_t, ::Array<uint8_t>*> n) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "ReduceScalar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, n);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ScalarMultBase(::ArrayW<uint8_t, ::Array<uint8_t>*> k, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "ScalarMultBase", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, k, r);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ScalarMultBaseEncoded(::ArrayW<uint8_t, ::Array<uint8_t>*> k, ::ArrayW<uint8_t, ::Array<uint8_t>*> r, int32_t rOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "ScalarMultBaseEncoded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, k, r, rOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ScalarMultBaseXY(::ArrayW<uint8_t, ::Array<uint8_t>*> k, int32_t kOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> x,
                                                                          ::ArrayW<uint32_t, ::Array<uint32_t>*> y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "ScalarMultBaseXY", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, k, kOff, x, y);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ScalarMultStrausVar(::ArrayW<uint32_t, ::Array<uint32_t>*> nb, ::ArrayW<uint32_t, ::Array<uint32_t>*> np,
                                                                             ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* p,
                                                                             ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "ScalarMultStrausVar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nb, np, p, r);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Sign(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, ::ArrayW<uint8_t, ::Array<uint8_t>*> m,
                                                              int32_t mOff, int32_t mLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "Sign", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, ctx, m, mOff, mLen, sig, sigOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Sign(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff,
                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff, int32_t mLen,
                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "Sign", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 10>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, pk, pkOff, ctx, m, mOff, mLen, sig, sigOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::SignPrehash(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx,
                                                                     ::ArrayW<uint8_t, ::Array<uint8_t>*> ph, int32_t phOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "SignPrehash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, ctx, ph, phOff, sig, sigOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::SignPrehash(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff,
                                                                     ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, ::ArrayW<uint8_t, ::Array<uint8_t>*> ph, int32_t phOff,
                                                                     ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "SignPrehash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, pk, pkOff, ctx, ph, phOff, sig, sigOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::SignPrehash(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx,
                                                                     ::Org::BouncyCastle::Crypto::IXof* ph, ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "SignPrehash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IXof*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, ctx, ph, sig, sigOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::SignPrehash(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff,
                                                                     ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, ::Org::BouncyCastle::Crypto::IXof* ph, ::ArrayW<uint8_t, ::Array<uint8_t>*> sig,
                                                                     int32_t sigOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "SignPrehash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IXof*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, pk, pkOff, ctx, ph, sig, sigOff);
}
inline bool Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Verify(::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff,
                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff, int32_t mLen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "Verify", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sig, sigOff, pk, pkOff, ctx, m, mOff, mLen);
}
inline bool Org::BouncyCastle::Math::EC::Rfc8032::Ed448::VerifyPrehash(::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff,
                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, ::ArrayW<uint8_t, ::Array<uint8_t>*> ph, int32_t phOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "VerifyPrehash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sig, sigOff, pk, pkOff, ctx, ph, phOff);
}
inline bool Org::BouncyCastle::Math::EC::Rfc8032::Ed448::VerifyPrehash(::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff,
                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, ::Org::BouncyCastle::Crypto::IXof* ph) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), "VerifyPrehash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IXof*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sig, sigOff, pk, pkOff, ctx, ph);
}
inline ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448* Org::BouncyCastle::Math::EC::Rfc8032::Ed448::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>());
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Ed448() {}
