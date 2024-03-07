#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Rfc8032/zzzz__Ed25519_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Math/EC/Rfc8032/zzzz__Ed25519_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__Algorithm::__Ed25519__Algorithm(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__Algorithm::__Ed25519__Algorithm() {}
constexpr ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__Algorithm Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__Algorithm::Ed25519{ static_cast<int32_t>(0x0) };
constexpr ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__Algorithm Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__Algorithm::Ed25519ctx{ static_cast<int32_t>(0x1) };
constexpr ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__Algorithm Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__Algorithm::Ed25519ph{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum::*)()>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x10da5c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum::__cordl_internal_set_x(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___x)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum::__cordl_internal_set_y(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___y)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum::__cordl_internal_get_z() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum::__cordl_internal_get_z() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum::__cordl_internal_set_z(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___z)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum::__cordl_internal_get_u() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___u;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum::__cordl_internal_get_u() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___u;
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum::__cordl_internal_set_u(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___u)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum::__cordl_internal_get_v() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___v;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum::__cordl_internal_get_v() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___v;
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum::__cordl_internal_set_v(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___v)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum* Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*>());
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum::__Ed25519__PointAccum() {}
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt::*)()>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x10da654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt::__cordl_internal_set_x(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___x)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt::__cordl_internal_set_y(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___y)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt::__cordl_internal_get_z() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt::__cordl_internal_get_z() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt::__cordl_internal_set_z(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___z)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt::__cordl_internal_get_t() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt::__cordl_internal_get_t() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt::__cordl_internal_set_t(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___t)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt* Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>());
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt::__Ed25519__PointExt() {}
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp::*)()>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x10da6dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp::__cordl_internal_get_ypx_h() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ypx_h;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp::__cordl_internal_get_ypx_h() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ypx_h;
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp::__cordl_internal_set_ypx_h(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ypx_h)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp::__cordl_internal_get_ymx_h() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ymx_h;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp::__cordl_internal_get_ymx_h() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ymx_h;
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp::__cordl_internal_set_ymx_h(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ymx_h)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp::__cordl_internal_get_xyd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xyd;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp::__cordl_internal_get_xyd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xyd;
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp::__cordl_internal_set_xyd(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xyd)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp* Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp*>());
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp::__Ed25519__PointPrecomp() {}
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.CalculateS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CalculateS)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x10d5bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "CalculateS", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.CheckContextVar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, uint8_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CheckContextVar)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x10d62e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "CheckContextVar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.CheckPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<int32_t, ::Array<int32_t>*>, ::ArrayW<int32_t, ::Array<int32_t>*>)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CheckPoint)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x10d630c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "CheckPoint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.CheckPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<int32_t, ::Array<int32_t>*>, ::ArrayW<int32_t, ::Array<int32_t>*>,
                                                                                              ::ArrayW<int32_t, ::Array<int32_t>*>)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CheckPoint)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x10d6420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "CheckPoint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.CheckPointVar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CheckPointVar)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x10d6578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "CheckPointVar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.CheckScalarVar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CheckScalarVar)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x10d6724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "CheckScalarVar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.CreateDigest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IDigest* (*)()>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CreateDigest)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x10d67d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(),
                                                                               "CreateDigest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.CreatePrehash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IDigest* (*)()>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CreatePrehash)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x10d6830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(),
                                                                               "CreatePrehash", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.Decode24
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Decode24)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x10d687c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "Decode24", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.Decode32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Decode32)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x10d68d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "Decode32", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.Decode32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint32_t, ::Array<uint32_t>*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Decode32)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x10d6654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "Decode32", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.DecodePointVar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, bool, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::DecodePointVar)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x10d6938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "DecodePointVar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.DecodeScalar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint32_t, ::Array<uint32_t>*>)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::DecodeScalar)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x10d5d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "DecodeScalar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.Dom2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Crypto::IDigest*, uint8_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Dom2)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x10d6bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "Dom2", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.Encode24
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Encode24)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x10d6e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "Encode24", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.Encode32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Encode32)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x10d5dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "Encode32", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.Encode56
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Encode56)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x10d6e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "Encode56", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.EncodePoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
                                                                                              int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::EncodePoint)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x10d6efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "EncodePoint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.GeneratePrivateKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Security::SecureRandom*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::GeneratePrivateKey)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10d703c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "GeneratePrivateKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.GeneratePublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::GeneratePublicKey)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x10d7058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "GeneratePublicKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.GetWnafVar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int8_t, ::Array<int8_t>*> (*)(::ArrayW<uint32_t, ::Array<uint32_t>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::GetWnafVar)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x10d73bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "GetWnafVar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.ImplSign
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::Org::BouncyCastle::Crypto::IDigest*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t,
                         ::ArrayW<uint8_t, ::Array<uint8_t>*>, uint8_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
        &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ImplSign)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x10d7574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "ImplSign", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 12>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
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
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.ImplSign
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, uint8_t,
                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ImplSign)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x10d79c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "ImplSign", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.ImplSign
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, uint8_t,
                         ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ImplSign)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x10d7ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "ImplSign", std::span<Il2CppClass const* const, 0>(),
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
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.ImplVerify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t,
                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*>, uint8_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ImplVerify)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0x10d8008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "ImplVerify", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.PointAddVar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(bool, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*)>(
        &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointAddVar)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x10d8748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "PointAddVar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.PointAddVar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    bool, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointAddVar)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x10d8968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "PointAddVar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.PointAddPrecomp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp*, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*)>(
        &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointAddPrecomp)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x10d8b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "PointAddPrecomp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.PointCopy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt* (*)(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointCopy)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x10d8ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "PointCopy", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.PointCopy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt* (*)(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointCopy)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x10d8dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "PointCopy", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.PointDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointDouble)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x10d8eb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "PointDouble", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.PointExtendXY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointExtendXY)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x10d9008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "PointExtendXY", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.PointExtendXY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointExtendXY)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x10d6b6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "PointExtendXY", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.PointLookup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp*)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointLookup)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x10d9090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "PointLookup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.PointPrecompVar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*, ::Array<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>*> (*)(
        ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*, int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointPrecompVar)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x10d91bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "PointPrecompVar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.PointSetNeutral
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointSetNeutral)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x10d937c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "PointSetNeutral", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.PointSetNeutral
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointSetNeutral)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x10d93fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "PointSetNeutral", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.Precompute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Precompute)> {
  constexpr static std::size_t size = 0x804;
  constexpr static std::size_t addrs = 0x10d18c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(),
                                                                               "Precompute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.PruneScalar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PruneScalar)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x10d7278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "PruneScalar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.ReduceScalar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ReduceScalar)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x10d5e4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "ReduceScalar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.ScalarMultBase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ScalarMultBase)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x10d9474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "ScalarMultBase", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.ScalarMultBaseEncoded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ScalarMultBaseEncoded)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x10d72d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "ScalarMultBaseEncoded", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.ScalarMultBaseYZ
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<int32_t, ::Array<int32_t>*>,
                                                                                           ::ArrayW<int32_t, ::Array<int32_t>*>)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ScalarMultBaseYZ)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x10d23f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "ScalarMultBaseYZ", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.ScalarMultStrausVar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<uint32_t, ::Array<uint32_t>*>, ::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*,
                         ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ScalarMultStrausVar)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x10d858c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "ScalarMultStrausVar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.Sign
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t,
                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Sign)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x10d96c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "Sign", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.Sign
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t,
                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Sign)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x10d9778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "Sign", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.Sign
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Sign)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x10d9840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "Sign", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.Sign
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
                         int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Sign)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x10d98fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "Sign", std::span<Il2CppClass const* const, 0>(),
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
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.SignPrehash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::SignPrehash)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x10d99c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "SignPrehash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.SignPrehash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
                         int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::SignPrehash)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x10d9a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "SignPrehash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.SignPrehash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Org::BouncyCastle::Crypto::IDigest*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
        &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::SignPrehash)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x10d9b54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "SignPrehash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.SignPrehash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Org::BouncyCastle::Crypto::IDigest*,
                         ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::SignPrehash)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x10d9d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "SignPrehash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.Verify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
        &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Verify)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x10d9f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "Verify", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.Verify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t,
                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Verify)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x10d9fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "Verify", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.VerifyPrehash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t,
                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::VerifyPrehash)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x10da07c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "VerifyPrehash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519.VerifyPrehash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Org::BouncyCastle::Crypto::IDigest*)>(
        &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::VerifyPrehash)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x10da13c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "VerifyPrehash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::*)()>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10da5b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::setStaticF_PrehashSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "PrehashSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::getStaticF_PrehashSize() {
  return ::cordl_internals::getStaticField<int32_t, "PrehashSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::setStaticF_PublicKeySize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "PublicKeySize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::getStaticF_PublicKeySize() {
  return ::cordl_internals::getStaticField<int32_t, "PublicKeySize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::setStaticF_SecretKeySize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "SecretKeySize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::getStaticF_SecretKeySize() {
  return ::cordl_internals::getStaticField<int32_t, "SecretKeySize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::setStaticF_SignatureSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "SignatureSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::getStaticF_SignatureSize() {
  return ::cordl_internals::getStaticField<int32_t, "SignatureSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::setStaticF_Dom2Prefix(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "Dom2Prefix", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::getStaticF_Dom2Prefix() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "Dom2Prefix",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::setStaticF_P(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "P", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get>(
      std::forward<::ArrayW<uint32_t, ::Array<uint32_t>*>>(value));
}
inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::getStaticF_P() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "P",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::setStaticF_L(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "L", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get>(
      std::forward<::ArrayW<uint32_t, ::Array<uint32_t>*>>(value));
}
inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::getStaticF_L() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "L",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::setStaticF_B_x(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "B_x", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::getStaticF_B_x() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "B_x",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::setStaticF_B_y(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "B_y", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::getStaticF_B_y() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "B_y",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::setStaticF_C_d(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "C_d", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::getStaticF_C_d() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "C_d",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::setStaticF_C_d2(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "C_d2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::getStaticF_C_d2() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "C_d2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::setStaticF_C_d4(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "C_d4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::getStaticF_C_d4() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "C_d4",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::setStaticF_precompLock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "precompLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::getStaticF_precompLock() {
  return ::cordl_internals::getStaticField<::System::Object*, "precompLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::setStaticF_precompBaseTable(
    ::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*, ::Array<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*, ::Array<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>*>, "precompBaseTable",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get>(
      std::forward<::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*, ::Array<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>*>>(value));
}
inline ::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*, ::Array<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>*>
Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::getStaticF_precompBaseTable() {
  return ::cordl_internals::getStaticField<::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*, ::Array<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>*>,
                                           "precompBaseTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::setStaticF_precompBase(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "precompBase", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::getStaticF_precompBase() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "precompBase",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get>();
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CalculateS(::ArrayW<uint8_t, ::Array<uint8_t>*> r, ::ArrayW<uint8_t, ::Array<uint8_t>*> k,
                                                                                                      ::ArrayW<uint8_t, ::Array<uint8_t>*> s) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "CalculateS", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, r, k, s);
}
inline bool Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CheckContextVar(::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, uint8_t phflag) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "CheckContextVar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ctx, phflag);
}
inline int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CheckPoint(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "CheckPoint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, x, y);
}
inline int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CheckPoint(::ArrayW<int32_t, ::Array<int32_t>*> x, ::ArrayW<int32_t, ::Array<int32_t>*> y, ::ArrayW<int32_t, ::Array<int32_t>*> z) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "CheckPoint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, x, y, z);
}
inline bool Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CheckPointVar(::ArrayW<uint8_t, ::Array<uint8_t>*> p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "CheckPointVar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, p);
}
inline bool Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CheckScalarVar(::ArrayW<uint8_t, ::Array<uint8_t>*> s) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "CheckScalarVar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s);
}
inline ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CreateDigest() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(),
                                                                             "CreateDigest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDigest*, false>(nullptr, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::CreatePrehash() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(),
                                                                             "CreatePrehash", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDigest*, false>(nullptr, ___internal_method);
}
inline uint32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Decode24(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "Decode24", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, bs, off);
}
inline uint32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Decode32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "Decode32", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, bs, off);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Decode32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bsOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> n, int32_t nOff, int32_t nLen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "Decode32", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bs, bsOff, n, nOff, nLen);
}
inline bool Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::DecodePointVar(::ArrayW<uint8_t, ::Array<uint8_t>*> p, int32_t pOff, bool negate,
                                                                          ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt* r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "DecodePointVar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, p, pOff, negate, r);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::DecodeScalar(::ArrayW<uint8_t, ::Array<uint8_t>*> k, int32_t kOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> n) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "DecodeScalar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, k, kOff, n);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Dom2(::Org::BouncyCastle::Crypto::IDigest* d, uint8_t phflag, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "Dom2", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, d, phflag, ctx);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Encode24(uint32_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "Encode24", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, n, bs, off);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Encode32(uint32_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "Encode32", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, n, bs, off);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Encode56(uint64_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "Encode56", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, n, bs, off);
}
inline int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::EncodePoint(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum* p, ::ArrayW<uint8_t, ::Array<uint8_t>*> r, int32_t rOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "EncodePoint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, p, r, rOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::GeneratePrivateKey(::Org::BouncyCastle::Security::SecureRandom* random, ::ArrayW<uint8_t, ::Array<uint8_t>*> k) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "GeneratePrivateKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, random, k);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::GeneratePublicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "GeneratePublicKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, pk, pkOff);
}
inline ::ArrayW<int8_t, ::Array<int8_t>*> Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::GetWnafVar(::ArrayW<uint32_t, ::Array<uint32_t>*> n, int32_t width) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "GetWnafVar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int8_t, ::Array<int8_t>*>, false>(nullptr, ___internal_method, n, width);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ImplSign(::Org::BouncyCastle::Crypto::IDigest* d, ::ArrayW<uint8_t, ::Array<uint8_t>*> h, ::ArrayW<uint8_t, ::Array<uint8_t>*> s,
                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, uint8_t phflag,
                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "ImplSign", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 12>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, d, h, s, pk, pkOff, ctx, phflag, m, mOff, mLen, sig, sigOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ImplSign(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, uint8_t phflag,
                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "ImplSign", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, ctx, phflag, m, mOff, mLen, sig, sigOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ImplSign(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff,
                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, uint8_t phflag, ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff, int32_t mLen,
                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "ImplSign", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 11>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, pk, pkOff, ctx, phflag, m, mOff, mLen, sig, sigOff);
}
inline bool Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ImplVerify(::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff,
                                                                      ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, uint8_t phflag, ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff, int32_t mLen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "ImplVerify", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sig, sigOff, pk, pkOff, ctx, phflag, m, mOff, mLen);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointAddVar(bool negate, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt* p,
                                                                       ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum* r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "PointAddVar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, negate, p, r);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointAddVar(bool negate, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt* p,
                                                                       ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt* q, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt* r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "PointAddVar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, negate, p, q, r);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointAddPrecomp(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp* p,
                                                                           ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum* r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "PointAddPrecomp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p, r);
}
inline ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt* Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointCopy(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum* p) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "PointCopy", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*, false>(nullptr, ___internal_method, p);
}
inline ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt* Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointCopy(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt* p) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "PointCopy", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*, false>(nullptr, ___internal_method, p);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointDouble(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum* r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "PointDouble", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, r);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointExtendXY(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "PointExtendXY", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointExtendXY(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "PointExtendXY", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointLookup(int32_t block, int32_t index, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "PointLookup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointPrecomp*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, block, index, p);
}
inline ::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*, ::Array<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>*>
Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointPrecompVar(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt* p, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "PointPrecompVar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*, ::Array<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>*>, false>(
      nullptr, ___internal_method, p, count);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointSetNeutral(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "PointSetNeutral", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PointSetNeutral(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "PointSetNeutral", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Precompute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(),
                                                                             "Precompute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::PruneScalar(::ArrayW<uint8_t, ::Array<uint8_t>*> n, int32_t nOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "PruneScalar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, n, nOff, r);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ReduceScalar(::ArrayW<uint8_t, ::Array<uint8_t>*> n) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "ReduceScalar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, n);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ScalarMultBase(::ArrayW<uint8_t, ::Array<uint8_t>*> k, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum* r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "ScalarMultBase", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, k, r);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ScalarMultBaseEncoded(::ArrayW<uint8_t, ::Array<uint8_t>*> k, ::ArrayW<uint8_t, ::Array<uint8_t>*> r, int32_t rOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "ScalarMultBaseEncoded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, k, r, rOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ScalarMultBaseYZ(::ArrayW<uint8_t, ::Array<uint8_t>*> k, int32_t kOff, ::ArrayW<int32_t, ::Array<int32_t>*> y,
                                                                            ::ArrayW<int32_t, ::Array<int32_t>*> z) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "ScalarMultBaseYZ", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, k, kOff, y, z);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::ScalarMultStrausVar(::ArrayW<uint32_t, ::Array<uint32_t>*> nb, ::ArrayW<uint32_t, ::Array<uint32_t>*> np,
                                                                               ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt* p,
                                                                               ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum* r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "ScalarMultStrausVar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t, ::Array<uint32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointExt*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed25519__PointAccum*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nb, np, p, r);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Sign(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff, int32_t mLen,
                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "Sign", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, m, mOff, mLen, sig, sigOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Sign(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff,
                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "Sign", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, pk, pkOff, m, mOff, mLen, sig, sigOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Sign(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx,
                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "Sign", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, ctx, m, mOff, mLen, sig, sigOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Sign(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff,
                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff, int32_t mLen,
                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "Sign", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 10>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, pk, pkOff, ctx, m, mOff, mLen, sig, sigOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::SignPrehash(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx,
                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> ph, int32_t phOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "SignPrehash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, ctx, ph, phOff, sig, sigOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::SignPrehash(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff,
                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, ::ArrayW<uint8_t, ::Array<uint8_t>*> ph, int32_t phOff,
                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "SignPrehash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, pk, pkOff, ctx, ph, phOff, sig, sigOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::SignPrehash(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx,
                                                                       ::Org::BouncyCastle::Crypto::IDigest* ph, ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "SignPrehash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, ctx, ph, sig, sigOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::SignPrehash(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff,
                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, ::Org::BouncyCastle::Crypto::IDigest* ph, ::ArrayW<uint8_t, ::Array<uint8_t>*> sig,
                                                                       int32_t sigOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "SignPrehash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sk, skOff, pk, pkOff, ctx, ph, sig, sigOff);
}
inline bool Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Verify(::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff,
                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff, int32_t mLen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "Verify", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sig, sigOff, pk, pkOff, m, mOff, mLen);
}
inline bool Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Verify(::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff,
                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff, int32_t mLen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "Verify", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sig, sigOff, pk, pkOff, ctx, m, mOff, mLen);
}
inline bool Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::VerifyPrehash(::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff,
                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, ::ArrayW<uint8_t, ::Array<uint8_t>*> ph, int32_t phOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "VerifyPrehash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sig, sigOff, pk, pkOff, ctx, ph, phOff);
}
inline bool Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::VerifyPrehash(::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff,
                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, ::Org::BouncyCastle::Crypto::IDigest* ph) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), "VerifyPrehash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sig, sigOff, pk, pkOff, ctx, ph);
}
inline ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519* Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>());
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519::Ed25519() {}
