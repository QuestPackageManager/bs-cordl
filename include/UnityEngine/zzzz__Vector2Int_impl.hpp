#pragma once
// IWYU pragma private; include "UnityEngine\Vector2Int.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Vector2Int.get_x
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Vector2Int::*)()>(&::UnityEngine::Vector2Int::get_x)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ad3100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "get_x", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.set_x
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Vector2Int::*)(int32_t)>(&::UnityEngine::Vector2Int::set_x)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ad3108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "set_x", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.get_y
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Vector2Int::*)()>(&::UnityEngine::Vector2Int::get_y)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ad3110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "get_y", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.set_y
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Vector2Int::*)(int32_t)>(&::UnityEngine::Vector2Int::set_y)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ad3118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "set_y", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Vector2Int::*)(int32_t, int32_t)>(&::UnityEngine::Vector2Int::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ad3120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.get_magnitude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Vector2Int::*)()>(&::UnityEngine::Vector2Int::get_magnitude)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6ad3128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "get_magnitude", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.Max
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int)>(&::UnityEngine::Vector2Int::Max)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6ad3140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "Max", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.op_Implicit___UnityEngine__Vector2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2Int)>(&::UnityEngine::Vector2Int::op_Implicit___UnityEngine__Vector2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6ad3160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.FloorToInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)(::UnityEngine::Vector2)>(&::UnityEngine::Vector2Int::FloorToInt)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6ad3170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "FloorToInt", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int)>(&::UnityEngine::Vector2Int::op_Addition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6ad323c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "op_Addition", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)(int32_t, ::UnityEngine::Vector2Int)>(&::UnityEngine::Vector2Int::op_Multiply)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6ad3254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "op_Multiply", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)(::UnityEngine::Vector2Int, int32_t)>(&::UnityEngine::Vector2Int::op_Division)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6ad3268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "op_Division", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int)>(&::UnityEngine::Vector2Int::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6ad327c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int)>(&::UnityEngine::Vector2Int::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6ad3288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Vector2Int::*)(::System::Object*)>(&::UnityEngine::Vector2Int::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6ad3294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { ::i2c::class_of<::UnityEngine::Vector2Int>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Vector2Int::*)(::UnityEngine::Vector2Int)>(&::UnityEngine::Vector2Int::Equals)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ad3320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Vector2Int::*)()>(&::UnityEngine::Vector2Int::GetHashCode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6ad3348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { ::i2c::class_of<::UnityEngine::Vector2Int>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Vector2Int::*)()>(&::UnityEngine::Vector2Int::ToString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6ad336c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { ::i2c::class_of<::UnityEngine::Vector2Int>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Vector2Int::*)(::StringW, ::System::IFormatProvider*)>(&::UnityEngine::Vector2Int::ToString)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6ad337c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.get_zero
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)()>(&::UnityEngine::Vector2Int::get_zero)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6ad34fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "get_zero", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Vector2Int.get_one
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)()>(&::UnityEngine::Vector2Int::get_one)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6ad3548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "get_one", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Vector2Int::setStaticF_s_Zero(::UnityEngine::Vector2Int value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2Int, "s_Zero", ::UnityEngine::Vector2Int>(std::forward<::UnityEngine::Vector2Int>(value));
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::getStaticF_s_Zero() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2Int, "s_Zero", ::UnityEngine::Vector2Int>();
}
inline void UnityEngine::Vector2Int::setStaticF_s_One(::UnityEngine::Vector2Int value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2Int, "s_One", ::UnityEngine::Vector2Int>(std::forward<::UnityEngine::Vector2Int>(value));
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::getStaticF_s_One() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2Int, "s_One", ::UnityEngine::Vector2Int>();
}
inline void UnityEngine::Vector2Int::setStaticF_s_Up(::UnityEngine::Vector2Int value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2Int, "s_Up", ::UnityEngine::Vector2Int>(std::forward<::UnityEngine::Vector2Int>(value));
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::getStaticF_s_Up() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2Int, "s_Up", ::UnityEngine::Vector2Int>();
}
inline void UnityEngine::Vector2Int::setStaticF_s_Down(::UnityEngine::Vector2Int value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2Int, "s_Down", ::UnityEngine::Vector2Int>(std::forward<::UnityEngine::Vector2Int>(value));
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::getStaticF_s_Down() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2Int, "s_Down", ::UnityEngine::Vector2Int>();
}
inline void UnityEngine::Vector2Int::setStaticF_s_Left(::UnityEngine::Vector2Int value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2Int, "s_Left", ::UnityEngine::Vector2Int>(std::forward<::UnityEngine::Vector2Int>(value));
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::getStaticF_s_Left() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2Int, "s_Left", ::UnityEngine::Vector2Int>();
}
inline void UnityEngine::Vector2Int::setStaticF_s_Right(::UnityEngine::Vector2Int value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2Int, "s_Right", ::UnityEngine::Vector2Int>(std::forward<::UnityEngine::Vector2Int>(value));
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::getStaticF_s_Right() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2Int, "s_Right", ::UnityEngine::Vector2Int>();
}
inline int32_t UnityEngine::Vector2Int::get_x() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "get_x", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Vector2Int::set_x(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "set_x", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::Vector2Int::get_y() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "get_y", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Vector2Int::set_y(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "set_y", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Vector2Int::_ctor(int32_t x, int32_t y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y);
}
inline float_t UnityEngine::Vector2Int::get_magnitude() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "get_magnitude", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::Max(::UnityEngine::Vector2Int lhs, ::UnityEngine::Vector2Int rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "Max", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method, lhs, rhs);
}
inline ::UnityEngine::Vector2 UnityEngine::Vector2Int::op_Implicit___UnityEngine__Vector2(::UnityEngine::Vector2Int v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::FloorToInt(::UnityEngine::Vector2 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "FloorToInt", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::op_Addition(::UnityEngine::Vector2Int a, ::UnityEngine::Vector2Int b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "op_Addition", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::op_Multiply(int32_t a, ::UnityEngine::Vector2Int b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "op_Multiply", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::op_Division(::UnityEngine::Vector2Int a, int32_t b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "op_Division", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::Vector2Int::op_Equality(::UnityEngine::Vector2Int lhs, ::UnityEngine::Vector2Int rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::Vector2Int::op_Inequality(::UnityEngine::Vector2Int lhs, ::UnityEngine::Vector2Int rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::Vector2Int::Equals(::System::Object* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Vector2Int>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Vector2Int::Equals(::UnityEngine::Vector2Int other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::Vector2Int::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Vector2Int>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW UnityEngine::Vector2Int::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Vector2Int>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW UnityEngine::Vector2Int::ToString(::StringW format, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::get_zero() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "get_zero", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2Int UnityEngine::Vector2Int::get_one() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Vector2Int>(), { "get_one", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Vector2Int>"
constexpr UnityEngine::Vector2Int::operator ::System::IEquatable_1<::UnityEngine::Vector2Int>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Vector2Int>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Vector2Int>"
constexpr ::System::IEquatable_1<::UnityEngine::Vector2Int>* UnityEngine::Vector2Int::i___System__IEquatable_1___UnityEngine__Vector2Int_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Vector2Int>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr UnityEngine::Vector2Int::operator ::System::IFormattable*() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* UnityEngine::Vector2Int::i___System__IFormattable() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_X", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Y", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Vector2Int::Vector2Int(int32_t m_X, int32_t m_Y) noexcept {
  this->m_X = m_X;
  this->m_Y = m_Y;
}
// Ctor Parameters []
constexpr ::UnityEngine::Vector2Int::Vector2Int() {}
