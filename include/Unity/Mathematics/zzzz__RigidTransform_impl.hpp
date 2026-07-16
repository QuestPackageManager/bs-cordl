#pragma once
// IWYU pragma private; include "Unity/Mathematics/RigidTransform.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__quaternion_impl.hpp"
#include "Unity/Mathematics/zzzz__RigidTransform_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float3x3_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "Unity/Mathematics/zzzz__math_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::RigidTransform::*)(::Unity::Mathematics::quaternion, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::RigidTransform::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x667e314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::RigidTransform::*)(::Unity::Mathematics::float3x3, ::Unity::Mathematics::float3)>(
    &::Unity::Mathematics::RigidTransform::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x667e328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3x3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::RigidTransform::*)(::Unity::Mathematics::float4x4)>(&::Unity::Mathematics::RigidTransform::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x667e390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.AxisAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::RigidTransform (*)(::Unity::Mathematics::float3, float_t)>(&::Unity::Mathematics::RigidTransform::AxisAngle)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x667e3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { "AxisAngle", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.EulerXYZ
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::RigidTransform (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::RigidTransform::EulerXYZ)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x667e52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { "EulerXYZ", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.EulerXZY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::RigidTransform (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::RigidTransform::EulerXZY)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x667e644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { "EulerXZY", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.EulerYXZ
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::RigidTransform (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::RigidTransform::EulerYXZ)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x667e760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { "EulerYXZ", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.EulerYZX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::RigidTransform (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::RigidTransform::EulerYZX)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x667e884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { "EulerYZX", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.EulerZXY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::RigidTransform (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::RigidTransform::EulerZXY)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x667e99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { "EulerZXY", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.EulerZYX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::RigidTransform (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::RigidTransform::EulerZYX)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x667eabc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { "EulerZYX", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.EulerXYZ
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::RigidTransform (*)(float_t, float_t, float_t)>(&::Unity::Mathematics::RigidTransform::EulerXYZ)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x667ebd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(),
                                                                                           { "EulerXYZ", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.EulerXZY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::RigidTransform (*)(float_t, float_t, float_t)>(&::Unity::Mathematics::RigidTransform::EulerXZY)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x667ecec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(),
                                                                                           { "EulerXZY", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.EulerYXZ
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::RigidTransform (*)(float_t, float_t, float_t)>(&::Unity::Mathematics::RigidTransform::EulerYXZ)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x667ee08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(),
                                                                                           { "EulerYXZ", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.EulerYZX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::RigidTransform (*)(float_t, float_t, float_t)>(&::Unity::Mathematics::RigidTransform::EulerYZX)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x667ef2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(),
                                                                                           { "EulerYZX", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.EulerZXY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::RigidTransform (*)(float_t, float_t, float_t)>(&::Unity::Mathematics::RigidTransform::EulerZXY)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x667f044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(),
                                                                                           { "EulerZXY", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.EulerZYX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::RigidTransform (*)(float_t, float_t, float_t)>(&::Unity::Mathematics::RigidTransform::EulerZYX)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x667f164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(),
                                                                                           { "EulerZYX", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.Euler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::RigidTransform (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::math_RotationOrder)>(
    &::Unity::Mathematics::RigidTransform::Euler)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x667f27c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(),
                                                             { "Euler", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::math_RotationOrder>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.Euler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::RigidTransform (*)(float_t, float_t, float_t, ::Unity::Mathematics::math_RotationOrder)>(
    &::Unity::Mathematics::RigidTransform::Euler)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x667f85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(),
                            { "Euler", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::math_RotationOrder>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.RotateX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::RigidTransform (*)(float_t)>(&::Unity::Mathematics::RigidTransform::RotateX)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x667f890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { "RotateX", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.RotateY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::RigidTransform (*)(float_t)>(&::Unity::Mathematics::RigidTransform::RotateY)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x667f9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { "RotateY", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.RotateZ
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::RigidTransform (*)(float_t)>(&::Unity::Mathematics::RigidTransform::RotateZ)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x667facc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { "RotateZ", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.Translate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::RigidTransform (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::RigidTransform::Translate)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x667fbe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { "Translate", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::RigidTransform::*)(::Unity::Mathematics::RigidTransform)>(&::Unity::Mathematics::RigidTransform::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x667fc5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { "Equals", {}, { ::i2c::type_of<::Unity::Mathematics::RigidTransform>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Mathematics::RigidTransform::*)(::System::Object*)>(&::Unity::Mathematics::RigidTransform::Equals)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x667fcd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { ::i2c::class_of<::Unity::Mathematics::RigidTransform>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::RigidTransform::*)()>(&::Unity::Mathematics::RigidTransform::GetHashCode)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x667fdb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { ::i2c::class_of<::Unity::Mathematics::RigidTransform>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::RigidTransform::*)()>(&::Unity::Mathematics::RigidTransform::ToString)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x667fe50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { ::i2c::class_of<::Unity::Mathematics::RigidTransform>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::RigidTransform.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Mathematics::RigidTransform::*)(::StringW, ::System::IFormatProvider*)>(&::Unity::Mathematics::RigidTransform::ToString)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x66800b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::RigidTransform::setStaticF_identity(::Unity::Mathematics::RigidTransform value) {
  ::cordl_internals::setStaticField<::Unity::Mathematics::RigidTransform, "identity", ::Unity::Mathematics::RigidTransform>(std::forward<::Unity::Mathematics::RigidTransform>(value));
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::getStaticF_identity() {
  return ::cordl_internals::getStaticField<::Unity::Mathematics::RigidTransform, "identity", ::Unity::Mathematics::RigidTransform>();
}
inline void Unity::Mathematics::RigidTransform::_ctor(::Unity::Mathematics::quaternion rotation, ::Unity::Mathematics::float3 translation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rotation, translation);
}
inline void Unity::Mathematics::RigidTransform::_ctor(::Unity::Mathematics::float3x3 rotation, ::Unity::Mathematics::float3 translation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float3x3>(), ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rotation, translation);
}
inline void Unity::Mathematics::RigidTransform::_ctor(::Unity::Mathematics::float4x4 transform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Mathematics::float4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, transform);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::AxisAngle(::Unity::Mathematics::float3 axis, float_t angle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { "AxisAngle", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform>(nullptr, ___internal_method, axis, angle);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::EulerXYZ(::Unity::Mathematics::float3 xyz) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { "EulerXYZ", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform>(nullptr, ___internal_method, xyz);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::EulerXZY(::Unity::Mathematics::float3 xyz) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { "EulerXZY", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform>(nullptr, ___internal_method, xyz);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::EulerYXZ(::Unity::Mathematics::float3 xyz) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { "EulerYXZ", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform>(nullptr, ___internal_method, xyz);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::EulerYZX(::Unity::Mathematics::float3 xyz) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { "EulerYZX", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform>(nullptr, ___internal_method, xyz);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::EulerZXY(::Unity::Mathematics::float3 xyz) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { "EulerZXY", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform>(nullptr, ___internal_method, xyz);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::EulerZYX(::Unity::Mathematics::float3 xyz) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { "EulerZYX", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform>(nullptr, ___internal_method, xyz);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::EulerXYZ(float_t x, float_t y, float_t z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(),
                                                                                         { "EulerXYZ", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform>(nullptr, ___internal_method, x, y, z);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::EulerXZY(float_t x, float_t y, float_t z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(),
                                                                                         { "EulerXZY", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform>(nullptr, ___internal_method, x, y, z);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::EulerYXZ(float_t x, float_t y, float_t z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(),
                                                                                         { "EulerYXZ", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform>(nullptr, ___internal_method, x, y, z);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::EulerYZX(float_t x, float_t y, float_t z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(),
                                                                                         { "EulerYZX", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform>(nullptr, ___internal_method, x, y, z);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::EulerZXY(float_t x, float_t y, float_t z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(),
                                                                                         { "EulerZXY", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform>(nullptr, ___internal_method, x, y, z);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::EulerZYX(float_t x, float_t y, float_t z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(),
                                                                                         { "EulerZYX", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform>(nullptr, ___internal_method, x, y, z);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::Euler(::Unity::Mathematics::float3 xyz, ::Unity::Mathematics::math_RotationOrder order) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(),
                                                           { "Euler", {}, { ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::math_RotationOrder>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform>(nullptr, ___internal_method, xyz, order);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::Euler(float_t x, float_t y, float_t z, ::Unity::Mathematics::math_RotationOrder order) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(),
                          { "Euler", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Mathematics::math_RotationOrder>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform>(nullptr, ___internal_method, x, y, z, order);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::RotateX(float_t angle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { "RotateX", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform>(nullptr, ___internal_method, angle);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::RotateY(float_t angle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { "RotateY", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform>(nullptr, ___internal_method, angle);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::RotateZ(float_t angle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { "RotateZ", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform>(nullptr, ___internal_method, angle);
}
inline ::Unity::Mathematics::RigidTransform Unity::Mathematics::RigidTransform::Translate(::Unity::Mathematics::float3 vector) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { "Translate", {}, { ::i2c::type_of<::Unity::Mathematics::float3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::RigidTransform>(nullptr, ___internal_method, vector);
}
inline bool Unity::Mathematics::RigidTransform::Equals(::Unity::Mathematics::RigidTransform x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { "Equals", {}, { ::i2c::type_of<::Unity::Mathematics::RigidTransform>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, x);
}
inline bool Unity::Mathematics::RigidTransform::Equals(::System::Object* x) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::RigidTransform>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, x);
}
inline int32_t Unity::Mathematics::RigidTransform::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::RigidTransform>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::RigidTransform::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Mathematics::RigidTransform>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Unity::Mathematics::RigidTransform::ToString(::StringW format, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Mathematics::RigidTransform>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
// Ctor Parameters [CppParam { name: "rot", ty: "::Unity::Mathematics::quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "pos", ty: "::Unity::Mathematics::float3", modifiers: "",
// def_value: Some("{}") }]
constexpr ::Unity::Mathematics::RigidTransform::RigidTransform(::Unity::Mathematics::quaternion rot, ::Unity::Mathematics::float3 pos) noexcept {
  this->rot = rot;
  this->pos = pos;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::RigidTransform::RigidTransform() {}
