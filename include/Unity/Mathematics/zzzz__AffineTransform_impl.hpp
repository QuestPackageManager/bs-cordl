#pragma once
// IWYU pragma private; include "Unity\Mathematics\AffineTransform.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__float3x3_impl.hpp"
#include "Unity/Mathematics/zzzz__AffineTransform_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__RigidTransform_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float3x3_def.hpp"
#include "Unity/Mathematics/zzzz__float3x4_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::AffineTransform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::AffineTransform::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion)>(
    &::Unity::Mathematics::AffineTransform::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x65ff470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::AffineTransform>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::AffineTransform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::AffineTransform::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::AffineTransform::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x65ff4e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::AffineTransform>(),
                            { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::AffineTransform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::AffineTransform::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3x3)>(
    &::Unity::Mathematics::AffineTransform::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x65ff59c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::AffineTransform>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3x3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::AffineTransform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::AffineTransform::*)(::Unity::Mathematics::float3x3)>(&::Unity::Mathematics::AffineTransform::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x65ff5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::AffineTransform>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3x3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::AffineTransform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::AffineTransform::*)(::Unity::Mathematics::RigidTransform)>(&::Unity::Mathematics::AffineTransform::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x65ff630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::AffineTransform>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::RigidTransform>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::AffineTransform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::AffineTransform::*)(::Unity::Mathematics::float3x4)>(&::Unity::Mathematics::AffineTransform::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x65ff69c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::AffineTransform>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::AffineTransform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::AffineTransform::*)(::Unity::Mathematics::float4x4)>(&::Unity::Mathematics::AffineTransform::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x65ff6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::AffineTransform>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::AffineTransform.op_Implicit___Unity__Mathematics__float3x4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3x4 (*)(::Unity::Mathematics::AffineTransform)>(
    &::Unity::Mathematics::AffineTransform::op_Implicit___Unity__Mathematics__float3x4)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65ff710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::AffineTransform>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::AffineTransform>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::AffineTransform.op_Implicit___Unity__Mathematics__float4x4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (*)(::Unity::Mathematics::AffineTransform)>(
    &::Unity::Mathematics::AffineTransform::op_Implicit___Unity__Mathematics__float4x4)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x65ff724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::AffineTransform>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::AffineTransform>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::AffineTransform.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::AffineTransform::*)(::Unity::Mathematics::AffineTransform)>(&::Unity::Mathematics::AffineTransform::Equals)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x65ff77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::AffineTransform>(), { "Equals", {}, { ::i2c::type_of<::Unity::Mathematics::AffineTransform>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::AffineTransform.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::AffineTransform::*)(::System::Object*)>(&::Unity::Mathematics::AffineTransform::Equals)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x65ff848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::AffineTransform>(), { ::i2c::class_of<::Unity::Mathematics::AffineTransform>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::AffineTransform.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::AffineTransform::*)()>(&::Unity::Mathematics::AffineTransform::GetHashCode)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x65ff974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::AffineTransform>(), { ::i2c::class_of<::Unity::Mathematics::AffineTransform>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::AffineTransform.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::AffineTransform::*)()>(&::Unity::Mathematics::AffineTransform::ToString)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x65ffa3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::AffineTransform>(), { ::i2c::class_of<::Unity::Mathematics::AffineTransform>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::AffineTransform.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::AffineTransform::*)(::StringW, ::System::IFormatProvider*)>(&::Unity::Mathematics::AffineTransform::ToString)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x65ffddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::AffineTransform>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::AffineTransform::setStaticF_identity(::Unity::Mathematics::AffineTransform value) {
  ::cordl_internals::setStaticField<::Unity::Mathematics::AffineTransform, "identity", ::Unity::Mathematics::AffineTransform>(std::forward<::Unity::Mathematics::AffineTransform>(value));
}
inline ::Unity::Mathematics::AffineTransform Unity::Mathematics::AffineTransform::getStaticF_identity() {
  return ::cordl_internals::getStaticField<::Unity::Mathematics::AffineTransform, "identity", ::Unity::Mathematics::AffineTransform>();
}
inline void Unity::Mathematics::AffineTransform::setStaticF_zero(::Unity::Mathematics::AffineTransform value) {
  ::cordl_internals::setStaticField<::Unity::Mathematics::AffineTransform, "zero", ::Unity::Mathematics::AffineTransform>(std::forward<::Unity::Mathematics::AffineTransform>(value));
}
inline ::Unity::Mathematics::AffineTransform Unity::Mathematics::AffineTransform::getStaticF_zero() {
  return ::cordl_internals::getStaticField<::Unity::Mathematics::AffineTransform, "zero", ::Unity::Mathematics::AffineTransform>();
}
inline void Unity::Mathematics::AffineTransform::_ctor(::Unity::Mathematics::float3 translation, ::Unity::Mathematics::quaternion rotation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::AffineTransform>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, translation, rotation);
}
inline void Unity::Mathematics::AffineTransform::_ctor(::Unity::Mathematics::float3 translation, ::Unity::Mathematics::quaternion rotation, ::Unity::Mathematics::float3 scale) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::AffineTransform>(),
                          { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, translation, rotation, scale);
}
inline void Unity::Mathematics::AffineTransform::_ctor(::Unity::Mathematics::float3 translation, ::Unity::Mathematics::float3x3 rotationScale) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::AffineTransform>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3x3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, translation, rotationScale);
}
inline void Unity::Mathematics::AffineTransform::_ctor(::Unity::Mathematics::float3x3 rotationScale) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::AffineTransform>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3x3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rotationScale);
}
inline void Unity::Mathematics::AffineTransform::_ctor(::Unity::Mathematics::RigidTransform rigid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::AffineTransform>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::RigidTransform>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rigid);
}
inline void Unity::Mathematics::AffineTransform::_ctor(::Unity::Mathematics::float3x4 m) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::AffineTransform>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, m);
}
inline void Unity::Mathematics::AffineTransform::_ctor(::Unity::Mathematics::float4x4 m) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::AffineTransform>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, m);
}
inline ::Unity::Mathematics::float3x4 Unity::Mathematics::AffineTransform::op_Implicit___Unity__Mathematics__float3x4(::Unity::Mathematics::AffineTransform m) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::AffineTransform>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::AffineTransform>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3x4>(nullptr, ___internal_method, m);
}
inline ::Unity::Mathematics::float4x4 Unity::Mathematics::AffineTransform::op_Implicit___Unity__Mathematics__float4x4(::Unity::Mathematics::AffineTransform m) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::AffineTransform>(), { "op_Implicit", {}, { ::i2c::type_of<::Unity::Mathematics::AffineTransform>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(nullptr, ___internal_method, m);
}
inline bool Unity::Mathematics::AffineTransform::Equals(::Unity::Mathematics::AffineTransform rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::AffineTransform>(), { "Equals", {}, { ::i2c::type_of<::Unity::Mathematics::AffineTransform>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool Unity::Mathematics::AffineTransform::Equals(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::AffineTransform>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline int32_t Unity::Mathematics::AffineTransform::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::AffineTransform>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::AffineTransform::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::AffineTransform>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::AffineTransform::ToString(::StringW format, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::AffineTransform>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::AffineTransform>"
constexpr Unity::Mathematics::AffineTransform::operator ::System::IEquatable_1<::Unity::Mathematics::AffineTransform>*() {
  return static_cast<::System::IEquatable_1<::Unity::Mathematics::AffineTransform>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::AffineTransform>"
constexpr ::System::IEquatable_1<::Unity::Mathematics::AffineTransform>* Unity::Mathematics::AffineTransform::i___System__IEquatable_1___Unity__Mathematics__AffineTransform_() {
  return static_cast<::System::IEquatable_1<::Unity::Mathematics::AffineTransform>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr Unity::Mathematics::AffineTransform::operator ::System::IFormattable*() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* Unity::Mathematics::AffineTransform::i___System__IFormattable() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "rs", ty: "::Unity::Mathematics::float3x3", modifiers: "", def_value: Some("{}") }, CppParam { name: "t", ty: "::Unity::Mathematics::float3", modifiers: "",
// def_value: Some("{}") }]
constexpr ::Unity::Mathematics::AffineTransform::AffineTransform(::Unity::Mathematics::float3x3 rs, ::Unity::Mathematics::float3 t) noexcept {
  this->rs = rs;
  this->t = t;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::AffineTransform::AffineTransform() {}
