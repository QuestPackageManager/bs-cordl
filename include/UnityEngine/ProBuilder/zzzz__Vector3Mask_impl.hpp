#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\Vector3Mask.hpp"
#include "UnityEngine/ProBuilder/zzzz__Vector3Mask_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector3Mask.get_x
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ProBuilder::Vector3Mask::*)()>(&::UnityEngine::ProBuilder::Vector3Mask::get_x)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66fb6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), { "get_x", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector3Mask.get_y
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ProBuilder::Vector3Mask::*)()>(&::UnityEngine::ProBuilder::Vector3Mask::get_y)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66fb70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), { "get_y", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector3Mask.get_z
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ProBuilder::Vector3Mask::*)()>(&::UnityEngine::ProBuilder::Vector3Mask::get_z)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66fb724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), { "get_z", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector3Mask._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Vector3Mask::*)(::UnityEngine::Vector3, float_t)>(&::UnityEngine::ProBuilder::Vector3Mask::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x66fb73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector3Mask._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Vector3Mask::*)(uint8_t)>(&::UnityEngine::ProBuilder::Vector3Mask::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66fb770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector3Mask.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ProBuilder::Vector3Mask::*)()>(&::UnityEngine::ProBuilder::Vector3Mask::ToString)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x66fb778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), { ::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector3Mask.get_active
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::Vector3Mask::*)()>(&::UnityEngine::ProBuilder::Vector3Mask::get_active)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x66fb8a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), { "get_active", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector3Mask.op_Implicit___UnityEngine__Vector3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::ProBuilder::Vector3Mask)>(
    &::UnityEngine::ProBuilder::Vector3Mask::op_Implicit___UnityEngine__Vector3)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x66fb8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector3Mask.op_Explicit___UnityEngine__ProBuilder__Vector3Mask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Vector3Mask (*)(::UnityEngine::Vector3)>(
    &::UnityEngine::ProBuilder::Vector3Mask::op_Explicit___UnityEngine__ProBuilder__Vector3Mask)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x66fb930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), { "op_Explicit", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector3Mask.op_BitwiseOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Vector3Mask (*)(::UnityEngine::ProBuilder::Vector3Mask, ::UnityEngine::ProBuilder::Vector3Mask)>(
    &::UnityEngine::ProBuilder::Vector3Mask::op_BitwiseOr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66fb968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(),
                                                { "op_BitwiseOr", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector3Mask.op_BitwiseAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Vector3Mask (*)(::UnityEngine::ProBuilder::Vector3Mask, ::UnityEngine::ProBuilder::Vector3Mask)>(
    &::UnityEngine::ProBuilder::Vector3Mask::op_BitwiseAnd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66fb970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(),
                                                { "op_BitwiseAnd", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector3Mask.op_ExclusiveOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Vector3Mask (*)(::UnityEngine::ProBuilder::Vector3Mask, ::UnityEngine::ProBuilder::Vector3Mask)>(
    &::UnityEngine::ProBuilder::Vector3Mask::op_ExclusiveOr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66fb978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(),
                                                { "op_ExclusiveOr", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector3Mask.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::ProBuilder::Vector3Mask, float_t)>(&::UnityEngine::ProBuilder::Vector3Mask::op_Multiply)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x66fb980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(),
                                                             { "op_Multiply", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector3Mask.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::ProBuilder::Vector3Mask, ::UnityEngine::Vector3)>(
    &::UnityEngine::ProBuilder::Vector3Mask::op_Multiply)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x66fba28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(),
                                                             { "op_Multiply", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector3Mask.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Quaternion, ::UnityEngine::ProBuilder::Vector3Mask)>(
    &::UnityEngine::ProBuilder::Vector3Mask::op_Multiply)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x66fbac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(),
                                                             { "op_Multiply", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector3Mask.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::Vector3Mask, ::UnityEngine::ProBuilder::Vector3Mask)>(
    &::UnityEngine::ProBuilder::Vector3Mask::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66fbc40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector3Mask.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::Vector3Mask, ::UnityEngine::ProBuilder::Vector3Mask)>(
    &::UnityEngine::ProBuilder::Vector3Mask::op_Inequality)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x66fbc50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(),
                                                { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector3Mask.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ProBuilder::Vector3Mask::*)(int32_t)>(&::UnityEngine::ProBuilder::Vector3Mask::get_Item)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x66fbcbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector3Mask.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Vector3Mask::*)(int32_t, float_t)>(&::UnityEngine::ProBuilder::Vector3Mask::set_Item)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x66fbd10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector3Mask.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Vector3Mask::*)(::UnityEngine::ProBuilder::Vector3Mask)>(&::UnityEngine::ProBuilder::Vector3Mask::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66fbd78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector3Mask.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Vector3Mask::*)(::System::Object*)>(&::UnityEngine::ProBuilder::Vector3Mask::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x66fbd88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), { ::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Vector3Mask.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::Vector3Mask::*)()>(&::UnityEngine::ProBuilder::Vector3Mask::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66fbe38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), { ::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::Vector3Mask::setStaticF_XYZ(::UnityEngine::ProBuilder::Vector3Mask value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::Vector3Mask, "XYZ", ::UnityEngine::ProBuilder::Vector3Mask>(std::forward<::UnityEngine::ProBuilder::Vector3Mask>(value));
}
inline ::UnityEngine::ProBuilder::Vector3Mask UnityEngine::ProBuilder::Vector3Mask::getStaticF_XYZ() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::Vector3Mask, "XYZ", ::UnityEngine::ProBuilder::Vector3Mask>();
}
inline float_t UnityEngine::ProBuilder::Vector3Mask::get_x() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), { "get_x", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::ProBuilder::Vector3Mask::get_y() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), { "get_y", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::ProBuilder::Vector3Mask::get_z() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), { "get_z", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Vector3Mask::_ctor(::UnityEngine::Vector3 v, float_t epsilon) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v, epsilon);
}
inline void UnityEngine::ProBuilder::Vector3Mask::_ctor(uint8_t mask) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mask);
}
inline ::StringW UnityEngine::ProBuilder::Vector3Mask::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::Vector3Mask::get_active() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), { "get_active", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::Vector3Mask::op_Implicit___UnityEngine__Vector3(::UnityEngine::ProBuilder::Vector3Mask mask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, mask);
}
inline ::UnityEngine::ProBuilder::Vector3Mask UnityEngine::ProBuilder::Vector3Mask::op_Explicit___UnityEngine__ProBuilder__Vector3Mask(::UnityEngine::Vector3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), { "op_Explicit", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Vector3Mask>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::ProBuilder::Vector3Mask UnityEngine::ProBuilder::Vector3Mask::op_BitwiseOr(::UnityEngine::ProBuilder::Vector3Mask left, ::UnityEngine::ProBuilder::Vector3Mask right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(),
                                              { "op_BitwiseOr", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Vector3Mask>(nullptr, ___internal_method, left, right);
}
inline ::UnityEngine::ProBuilder::Vector3Mask UnityEngine::ProBuilder::Vector3Mask::op_BitwiseAnd(::UnityEngine::ProBuilder::Vector3Mask left, ::UnityEngine::ProBuilder::Vector3Mask right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(),
                                              { "op_BitwiseAnd", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Vector3Mask>(nullptr, ___internal_method, left, right);
}
inline ::UnityEngine::ProBuilder::Vector3Mask UnityEngine::ProBuilder::Vector3Mask::op_ExclusiveOr(::UnityEngine::ProBuilder::Vector3Mask left, ::UnityEngine::ProBuilder::Vector3Mask right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(),
                                              { "op_ExclusiveOr", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Vector3Mask>(nullptr, ___internal_method, left, right);
}
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::Vector3Mask::op_Multiply(::UnityEngine::ProBuilder::Vector3Mask mask, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), { "op_Multiply", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, mask, value);
}
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::Vector3Mask::op_Multiply(::UnityEngine::ProBuilder::Vector3Mask mask, ::UnityEngine::Vector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(),
                                                           { "op_Multiply", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, mask, value);
}
inline ::UnityEngine::Vector3 UnityEngine::ProBuilder::Vector3Mask::op_Multiply(::UnityEngine::Quaternion rotation, ::UnityEngine::ProBuilder::Vector3Mask mask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(),
                                                           { "op_Multiply", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, rotation, mask);
}
inline bool UnityEngine::ProBuilder::Vector3Mask::op_Equality(::UnityEngine::ProBuilder::Vector3Mask left, ::UnityEngine::ProBuilder::Vector3Mask right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::ProBuilder::Vector3Mask::op_Inequality(::UnityEngine::ProBuilder::Vector3Mask left, ::UnityEngine::ProBuilder::Vector3Mask right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(),
                                              { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline float_t UnityEngine::ProBuilder::Vector3Mask::get_Item(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, i);
}
inline void UnityEngine::ProBuilder::Vector3Mask::set_Item(int32_t i, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i, value);
}
inline bool UnityEngine::ProBuilder::Vector3Mask::Equals(::UnityEngine::ProBuilder::Vector3Mask other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::Vector3Mask>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::ProBuilder::Vector3Mask::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::ProBuilder::Vector3Mask::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::Vector3Mask>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::Vector3Mask>"
constexpr UnityEngine::ProBuilder::Vector3Mask::operator ::System::IEquatable_1<::UnityEngine::ProBuilder::Vector3Mask>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::ProBuilder::Vector3Mask>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::ProBuilder::Vector3Mask>"
constexpr ::System::IEquatable_1<::UnityEngine::ProBuilder::Vector3Mask>* UnityEngine::ProBuilder::Vector3Mask::i___System__IEquatable_1___UnityEngine__ProBuilder__Vector3Mask_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::ProBuilder::Vector3Mask>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Mask", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::Vector3Mask::Vector3Mask(uint8_t m_Mask) noexcept {
  this->m_Mask = m_Mask;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Vector3Mask::Vector3Mask() {}
