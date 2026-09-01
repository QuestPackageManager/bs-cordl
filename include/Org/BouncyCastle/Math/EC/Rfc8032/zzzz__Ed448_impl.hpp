#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Math\EC\Rfc8032\Ed448.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Rfc8032/zzzz__Ed448_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IXof_def.hpp"
#include "Org/BouncyCastle/Math/EC/Rfc8032/zzzz__Ed448_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_Algorithm::Ed448_Algorithm(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_Algorithm::Ed448_Algorithm() {}
constexpr ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_Algorithm Org::BouncyCastle::Math::EC::Rfc8032::Ed448_Algorithm::Ed448{ static_cast<int32_t>(0x0) };
constexpr ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_Algorithm Org::BouncyCastle::Math::EC::Rfc8032::Ed448_Algorithm::Ed448ph{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt::*)()>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x351f580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint32_t>& Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr ::ArrayW<uint32_t> const& Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt::__cordl_internal_set_x(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
constexpr ::ArrayW<uint32_t>& Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr ::ArrayW<uint32_t> const& Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt::__cordl_internal_set_y(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___y = value;
}
constexpr ::ArrayW<uint32_t>& Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt::__cordl_internal_get_z() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr ::ArrayW<uint32_t> const& Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt::__cordl_internal_get_z() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt::__cordl_internal_set_z(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___z = value;
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt* Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt::Ed448_PointExt() {}
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointPrecomp._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointPrecomp::*)()>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointPrecomp::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x352088c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointPrecomp*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint32_t>& Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointPrecomp::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr ::ArrayW<uint32_t> const& Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointPrecomp::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointPrecomp::__cordl_internal_set_x(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
constexpr ::ArrayW<uint32_t>& Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointPrecomp::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr ::ArrayW<uint32_t> const& Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointPrecomp::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointPrecomp::__cordl_internal_set_y(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___y = value;
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointPrecomp::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointPrecomp*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointPrecomp* Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointPrecomp::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointPrecomp*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointPrecomp::Ed448_PointPrecomp() {}
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.CalculateS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CalculateS)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x351c8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                             { "CalculateS", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.CheckContextVar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckContextVar)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x351d458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(), { "CheckContextVar", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.CheckPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckPoint)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x351d46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                                                           { "CheckPoint", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.CheckPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>, ::ArrayW<uint32_t>)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckPoint)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x351d550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                { "CheckPoint", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.CheckPointVar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckPointVar)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x351d688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(), { "CheckPointVar", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.CheckScalarVar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckScalarVar)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x351d844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(), { "CheckScalarVar", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.CreatePrehash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IXof* (*)()>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CreatePrehash)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x351d920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(), { "CreatePrehash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.CreateXof
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IXof* (*)()>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CreateXof)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x351d970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(), { "CreateXof", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Decode16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Decode16)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x351d9cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(), { "Decode16", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Decode24
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Decode24)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x351da0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(), { "Decode24", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Decode32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Decode32)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x351da60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(), { "Decode32", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Decode32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint32_t>, int32_t, int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Decode32)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x351d770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
            { "Decode32", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.DecodePointVar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t, bool, ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::DecodePointVar)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x351dac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(), { "DecodePointVar",
                                                                                                              {},
                                                                                                              { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                                                                                ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.DecodeScalar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint32_t>)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::DecodeScalar)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x351ca48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                             { "DecodeScalar", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Dom4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Crypto::IXof*, uint8_t, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Dom4)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x351dcfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                { "Dom4", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IXof*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Encode24
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Encode24)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x351df34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                             { "Encode24", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Encode32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Encode32)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x351cac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                             { "Encode32", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Encode56
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Encode56)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x351df98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                             { "Encode56", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.EncodePoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::EncodePoint)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x351e018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                            { "EncodePoint", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.GeneratePrivateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Security::SecureRandom*, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::GeneratePrivateKey)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x351e160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                             { "GeneratePrivateKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.GeneratePublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::GeneratePublicKey)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x351e178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                            { "GeneratePublicKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.GetWnafVar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int8_t> (*)(::ArrayW<uint32_t>, int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::GetWnafVar)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x351e4a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                                                           { "GetWnafVar", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.ImplSign
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Crypto::IXof*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, uint8_t,
                                                                ::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ImplSign)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x351e664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                            { "ImplSign",
                              {},
                              { ::i2c::type_of<::Org::BouncyCastle::Crypto::IXof*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.ImplSign
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ImplSign)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x351eaec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                                                           { "ImplSign",
                                                                                             {},
                                                                                             { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                               ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.ImplSign
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t,
                                                                ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ImplSign)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x351edb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                             { "ImplSign",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.ImplVerify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ImplVerify)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0x351f06c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                                                           { "ImplVerify",
                                                                                             {},
                                                                                             { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint8_t>(),
                                                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.PointAddVar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*, ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointAddVar)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x351f760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                                                           { "PointAddVar",
                                                                                             {},
                                                                                             { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.PointAddPrecomp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointPrecomp*, ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointAddPrecomp)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x351f9d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
            { "PointAddPrecomp", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointPrecomp*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.PointCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt* (*)(::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointCopy)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x351fbc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                                                           { "PointCopy", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.PointDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointDouble)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x351fc74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                                                           { "PointDouble", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.PointExtendXY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointExtendXY)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x351dce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                                                           { "PointExtendXY", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.PointLookup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointPrecomp*)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointLookup)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x351fdf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                            { "PointLookup", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointPrecomp*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.PointPrecompVar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*> (*)(::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointPrecompVar)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x351fed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                             { "PointPrecompVar", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.PointSetNeutral
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointSetNeutral)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3520038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                                                           { "PointSetNeutral", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Precompute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Precompute)> {
  constexpr static std::size_t size = 0x5e8;
  constexpr static std::size_t addrs = 0x3520070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(), { "Precompute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.PruneScalar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PruneScalar)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x351e368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                             { "PruneScalar", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.ReduceScalar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ReduceScalar)> {
  constexpr static std::size_t size = 0x918;
  constexpr static std::size_t addrs = 0x351cb40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(), { "ReduceScalar", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.ScalarMultBase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ScalarMultBase)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x3520658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                { "ScalarMultBase", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.ScalarMultBaseEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ScalarMultBaseEncoded)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x351e3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                { "ScalarMultBaseEncoded", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.ScalarMultBaseXY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint32_t>, ::ArrayW<uint32_t>)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ScalarMultBaseXY)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x35208b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                         { "ScalarMultBaseXY", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.ScalarMultStrausVar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>, ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*,
                                                                ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ScalarMultStrausVar)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x351f5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                         { "ScalarMultStrausVar",
                                           {},
                                           { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Sign
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Sign)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3520a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                { "Sign",
                                                  {},
                                                  { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Sign
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>,
                                                                int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Sign)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3520acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                            { "Sign",
                              {},
                              { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.SignPrehash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::SignPrehash)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3520b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                             { "SignPrehash",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                 ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.SignPrehash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::SignPrehash)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3520c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                                                           { "SignPrehash",
                                                                                             {},
                                                                                             { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.SignPrehash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, ::Org::BouncyCastle::Crypto::IXof*, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::SignPrehash)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x3520d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                             { "SignPrehash",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Crypto::IXof*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.SignPrehash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, ::Org::BouncyCastle::Crypto::IXof*, ::ArrayW<uint8_t>,
                                                                int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::SignPrehash)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x3520f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                            { "SignPrehash",
                              {},
                              { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                ::i2c::type_of<::Org::BouncyCastle::Crypto::IXof*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.Verify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Verify)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x35210f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                             { "Verify",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.VerifyPrehash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::VerifyPrehash)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x35211b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                             { "VerifyPrehash",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448.VerifyPrehash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, ::Org::BouncyCastle::Crypto::IXof*)>(
    &::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::VerifyPrehash)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x352127c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                             { "VerifyPrehash",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IXof*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::*)()>(&::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3521650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::setStaticF_PrehashSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "PrehashSize", ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed448::getStaticF_PrehashSize() {
  return ::cordl_internals::getStaticField<int32_t, "PrehashSize", ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::setStaticF_PublicKeySize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "PublicKeySize", ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed448::getStaticF_PublicKeySize() {
  return ::cordl_internals::getStaticField<int32_t, "PublicKeySize", ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::setStaticF_SecretKeySize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "SecretKeySize", ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed448::getStaticF_SecretKeySize() {
  return ::cordl_internals::getStaticField<int32_t, "SecretKeySize", ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::setStaticF_SignatureSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "SignatureSize", ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed448::getStaticF_SignatureSize() {
  return ::cordl_internals::getStaticField<int32_t, "SignatureSize", ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::setStaticF_Dom4Prefix(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "Dom4Prefix", ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::getStaticF_Dom4Prefix() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "Dom4Prefix", ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::setStaticF_P(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "P", ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::getStaticF_P() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "P", ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::setStaticF_L(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "L", ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::getStaticF_L() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "L", ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::setStaticF_N(::Org::BouncyCastle::Math::BigInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger*, "N", ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(std::forward<::Org::BouncyCastle::Math::BigInteger*>(value));
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::Rfc8032::Ed448::getStaticF_N() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger*, "N", ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::setStaticF_B_x(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "B_x", ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::getStaticF_B_x() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "B_x", ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::setStaticF_B_y(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "B_y", ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::getStaticF_B_y() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "B_y", ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::setStaticF_precompLock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "precompLock", ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Org::BouncyCastle::Math::EC::Rfc8032::Ed448::getStaticF_precompLock() {
  return ::cordl_internals::getStaticField<::System::Object*, "precompLock", ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::setStaticF_precompBaseTable(::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>, "precompBaseTable", ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(
      std::forward<::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>>(value));
}
inline ::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::getStaticF_precompBaseTable() {
  return ::cordl_internals::getStaticField<::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>, "precompBaseTable", ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>();
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::setStaticF_precompBase(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "precompBase", ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::getStaticF_precompBase() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "precompBase", ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>();
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CalculateS(::ArrayW<uint8_t> r, ::ArrayW<uint8_t> k, ::ArrayW<uint8_t> s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                           { "CalculateS", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, r, k, s);
}
inline bool Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckContextVar(::ArrayW<uint8_t> ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(), { "CheckContextVar", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx);
}
inline int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckPoint(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                                                         { "CheckPoint", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x, y);
}
inline int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckPoint(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                              { "CheckPoint", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x, y, z);
}
inline bool Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckPointVar(::ArrayW<uint8_t> p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(), { "CheckPointVar", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, p);
}
inline bool Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CheckScalarVar(::ArrayW<uint8_t> s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(), { "CheckScalarVar", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s);
}
inline ::Org::BouncyCastle::Crypto::IXof* Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CreatePrehash() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(), { "CreatePrehash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IXof*>(nullptr, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IXof* Org::BouncyCastle::Math::EC::Rfc8032::Ed448::CreateXof() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(), { "CreateXof", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IXof*>(nullptr, ___internal_method);
}
inline uint32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Decode16(::ArrayW<uint8_t> bs, int32_t off) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(), { "Decode16", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, bs, off);
}
inline uint32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Decode24(::ArrayW<uint8_t> bs, int32_t off) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(), { "Decode24", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, bs, off);
}
inline uint32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Decode32(::ArrayW<uint8_t> bs, int32_t off) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(), { "Decode32", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, bs, off);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Decode32(::ArrayW<uint8_t> bs, int32_t bsOff, ::ArrayW<uint32_t> n, int32_t nOff, int32_t nLen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
          { "Decode32", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bs, bsOff, n, nOff, nLen);
}
inline bool Org::BouncyCastle::Math::EC::Rfc8032::Ed448::DecodePointVar(::ArrayW<uint8_t> p, int32_t pOff, bool negate, ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt* r) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                          { "DecodePointVar",
                            {},
                            { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, p, pOff, negate, r);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::DecodeScalar(::ArrayW<uint8_t> k, int32_t kOff, ::ArrayW<uint32_t> n) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                           { "DecodeScalar", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, k, kOff, n);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Dom4(::Org::BouncyCastle::Crypto::IXof* d, uint8_t x, ::ArrayW<uint8_t> y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                           { "Dom4", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IXof*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, d, x, y);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Encode24(uint32_t n, ::ArrayW<uint8_t> bs, int32_t off) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                           { "Encode24", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, n, bs, off);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Encode32(uint32_t n, ::ArrayW<uint8_t> bs, int32_t off) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                           { "Encode32", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, n, bs, off);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Encode56(uint64_t n, ::ArrayW<uint8_t> bs, int32_t off) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                           { "Encode56", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, n, bs, off);
}
inline int32_t Org::BouncyCastle::Math::EC::Rfc8032::Ed448::EncodePoint(::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt* p, ::ArrayW<uint8_t> r, int32_t rOff) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                          { "EncodePoint", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, p, r, rOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::GeneratePrivateKey(::Org::BouncyCastle::Security::SecureRandom* random, ::ArrayW<uint8_t> k) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                           { "GeneratePrivateKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, random, k);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::GeneratePublicKey(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> pk, int32_t pkOff) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                          { "GeneratePublicKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sk, skOff, pk, pkOff);
}
inline ::ArrayW<int8_t> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::GetWnafVar(::ArrayW<uint32_t> n, int32_t width) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(), { "GetWnafVar", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int8_t>>(nullptr, ___internal_method, n, width);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ImplSign(::Org::BouncyCastle::Crypto::IXof* d, ::ArrayW<uint8_t> h, ::ArrayW<uint8_t> s, ::ArrayW<uint8_t> pk, int32_t pkOff,
                                                                  ::ArrayW<uint8_t> ctx, uint8_t phflag, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t> sig, int32_t sigOff) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                          { "ImplSign",
                            {},
                            { ::i2c::type_of<::Org::BouncyCastle::Crypto::IXof*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                              ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                              ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, d, h, s, pk, pkOff, ctx, phflag, m, mOff, mLen, sig, sigOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ImplSign(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> ctx, uint8_t phflag, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen,
                                                                  ::ArrayW<uint8_t> sig, int32_t sigOff) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                                                         { "ImplSign",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                             ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sk, skOff, ctx, phflag, m, mOff, mLen, sig, sigOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ImplSign(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, uint8_t phflag, ::ArrayW<uint8_t> m,
                                                                  int32_t mOff, int32_t mLen, ::ArrayW<uint8_t> sig, int32_t sigOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                           { "ImplSign",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sk, skOff, pk, pkOff, ctx, phflag, m, mOff, mLen, sig, sigOff);
}
inline bool Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ImplVerify(::ArrayW<uint8_t> sig, int32_t sigOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, uint8_t phflag,
                                                                    ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                                                         { "ImplVerify",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint8_t>(),
                                                                                             ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sig, sigOff, pk, pkOff, ctx, phflag, m, mOff, mLen);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointAddVar(bool negate, ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt* p,
                                                                     ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt* r) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                                                         { "PointAddVar",
                                                                                           {},
                                                                                           { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, negate, p, r);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointAddPrecomp(::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointPrecomp* p, ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt* r) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
          { "PointAddPrecomp", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointPrecomp*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, r);
}
inline ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt* Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointCopy(::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt* p) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                                                         { "PointCopy", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>(nullptr, ___internal_method, p);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointDouble(::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt* r) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                                                         { "PointDouble", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, r);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointExtendXY(::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt* p) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                                                         { "PointExtendXY", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointLookup(int32_t block, int32_t index, ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointPrecomp* p) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                          { "PointLookup", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointPrecomp*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, block, index, p);
}
inline ::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointPrecompVar(::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt* p,
                                                                                                                                      int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                           { "PointPrecompVar", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>>(nullptr, ___internal_method, p, count);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointSetNeutral(::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt* p) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                                                         { "PointSetNeutral", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Precompute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(), { "Precompute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PruneScalar(::ArrayW<uint8_t> n, int32_t nOff, ::ArrayW<uint8_t> r) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                           { "PruneScalar", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, n, nOff, r);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ReduceScalar(::ArrayW<uint8_t> n) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(), { "ReduceScalar", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, n);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ScalarMultBase(::ArrayW<uint8_t> k, ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt* r) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                              { "ScalarMultBase", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, k, r);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ScalarMultBaseEncoded(::ArrayW<uint8_t> k, ::ArrayW<uint8_t> r, int32_t rOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                           { "ScalarMultBaseEncoded", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, k, r, rOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ScalarMultBaseXY(::ArrayW<uint8_t> k, int32_t kOff, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                          { "ScalarMultBaseXY", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, k, kOff, x, y);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::ScalarMultStrausVar(::ArrayW<uint32_t> nb, ::ArrayW<uint32_t> np, ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt* p,
                                                                             ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt* r) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                              { "ScalarMultStrausVar",
                                                {},
                                                { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448_PointExt*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nb, np, p, r);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Sign(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t> sig,
                                                              int32_t sigOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                           { "Sign",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sk, skOff, ctx, m, mOff, mLen, sig, sigOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Sign(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> m, int32_t mOff,
                                                              int32_t mLen, ::ArrayW<uint8_t> sig, int32_t sigOff) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                          { "Sign",
                            {},
                            { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                              ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sk, skOff, pk, pkOff, ctx, m, mOff, mLen, sig, sigOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::SignPrehash(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> ph, int32_t phOff, ::ArrayW<uint8_t> sig,
                                                                     int32_t sigOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                           { "SignPrehash",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sk, skOff, ctx, ph, phOff, sig, sigOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::SignPrehash(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> ph,
                                                                     int32_t phOff, ::ArrayW<uint8_t> sig, int32_t sigOff) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                                                         { "SignPrehash",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sk, skOff, pk, pkOff, ctx, ph, phOff, sig, sigOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::SignPrehash(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> ctx, ::Org::BouncyCastle::Crypto::IXof* ph, ::ArrayW<uint8_t> sig,
                                                                     int32_t sigOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                           { "SignPrehash",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::IXof*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sk, skOff, ctx, ph, sig, sigOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::SignPrehash(::ArrayW<uint8_t> sk, int32_t skOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx,
                                                                     ::Org::BouncyCastle::Crypto::IXof* ph, ::ArrayW<uint8_t> sig, int32_t sigOff) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                          { "SignPrehash",
                            {},
                            { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                              ::i2c::type_of<::Org::BouncyCastle::Crypto::IXof*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sk, skOff, pk, pkOff, ctx, ph, sig, sigOff);
}
inline bool Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Verify(::ArrayW<uint8_t> sig, int32_t sigOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> m, int32_t mOff,
                                                                int32_t mLen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                           { "Verify",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sig, sigOff, pk, pkOff, ctx, m, mOff, mLen);
}
inline bool Org::BouncyCastle::Math::EC::Rfc8032::Ed448::VerifyPrehash(::ArrayW<uint8_t> sig, int32_t sigOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> ph,
                                                                       int32_t phOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                           { "VerifyPrehash",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sig, sigOff, pk, pkOff, ctx, ph, phOff);
}
inline bool Org::BouncyCastle::Math::EC::Rfc8032::Ed448::VerifyPrehash(::ArrayW<uint8_t> sig, int32_t sigOff, ::ArrayW<uint8_t> pk, int32_t pkOff, ::ArrayW<uint8_t> ctx,
                                                                       ::Org::BouncyCastle::Crypto::IXof* ph) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(),
                                                           { "VerifyPrehash",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IXof*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sig, sigOff, pk, pkOff, ctx, ph);
}
inline void Org::BouncyCastle::Math::EC::Rfc8032::Ed448::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448* Org::BouncyCastle::Math::EC::Rfc8032::Ed448::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Ed448() {}
