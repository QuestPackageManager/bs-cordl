#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/IntVec4.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__IntVec4_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::IntVec4.get_x
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ProBuilder::IntVec4::*)()>(&::UnityEngine::ProBuilder::IntVec4::get_x)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66bdb04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(), { "get_x", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::IntVec4.get_y
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ProBuilder::IntVec4::*)()>(&::UnityEngine::ProBuilder::IntVec4::get_y)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66bdb0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(), { "get_y", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::IntVec4.get_z
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ProBuilder::IntVec4::*)()>(&::UnityEngine::ProBuilder::IntVec4::get_z)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66bdb14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(), { "get_z", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::IntVec4.get_w
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ProBuilder::IntVec4::*)()>(&::UnityEngine::ProBuilder::IntVec4::get_w)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66bdb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(), { "get_w", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::IntVec4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::IntVec4::*)(::UnityEngine::Vector4)>(&::UnityEngine::ProBuilder::IntVec4::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x66bdb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::IntVec4.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ProBuilder::IntVec4::*)()>(&::UnityEngine::ProBuilder::IntVec4::ToString)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x66bdb30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(), { ::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::IntVec4.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::IntVec4, ::UnityEngine::ProBuilder::IntVec4)>(&::UnityEngine::ProBuilder::IntVec4::op_Equality)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x66bdcd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::IntVec4>(), ::i2c::type_of<::UnityEngine::ProBuilder::IntVec4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::IntVec4.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::IntVec4, ::UnityEngine::ProBuilder::IntVec4)>(&::UnityEngine::ProBuilder::IntVec4::op_Inequality)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x66bddc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::IntVec4>(), ::i2c::type_of<::UnityEngine::ProBuilder::IntVec4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::IntVec4.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::IntVec4::*)(::UnityEngine::ProBuilder::IntVec4)>(&::UnityEngine::ProBuilder::IntVec4::Equals)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x66bdd0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::IntVec4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::IntVec4.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::IntVec4::*)(::UnityEngine::Vector4)>(&::UnityEngine::ProBuilder::IntVec4::Equals)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x66bde6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::IntVec4.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::IntVec4::*)(::System::Object*)>(&::UnityEngine::ProBuilder::IntVec4::Equals)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x66bdf20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(), { ::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::IntVec4.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::IntVec4::*)()>(&::UnityEngine::ProBuilder::IntVec4::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66bdfe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(), { ::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::IntVec4.round
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t)>(&::UnityEngine::ProBuilder::IntVec4::round)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x66bde00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(), { "round", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::IntVec4.op_Implicit___UnityEngine__Vector4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::ProBuilder::IntVec4)>(&::UnityEngine::ProBuilder::IntVec4::op_Implicit___UnityEngine__Vector4)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66bdffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::IntVec4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::IntVec4.op_Implicit___UnityEngine__ProBuilder__IntVec4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::IntVec4 (*)(::UnityEngine::Vector4)>(
    &::UnityEngine::ProBuilder::IntVec4::op_Implicit___UnityEngine__ProBuilder__IntVec4)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66be000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::ProBuilder::IntVec4::get_x() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(), { "get_x", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::ProBuilder::IntVec4::get_y() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(), { "get_y", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::ProBuilder::IntVec4::get_z() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(), { "get_z", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::ProBuilder::IntVec4::get_w() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(), { "get_w", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::ProBuilder::IntVec4::_ctor(::UnityEngine::Vector4 vector) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, vector);
}
inline ::StringW UnityEngine::ProBuilder::IntVec4::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::IntVec4::op_Equality(::UnityEngine::ProBuilder::IntVec4 a, ::UnityEngine::ProBuilder::IntVec4 b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::IntVec4>(), ::i2c::type_of<::UnityEngine::ProBuilder::IntVec4>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::ProBuilder::IntVec4::op_Inequality(::UnityEngine::ProBuilder::IntVec4 a, ::UnityEngine::ProBuilder::IntVec4 b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::IntVec4>(), ::i2c::type_of<::UnityEngine::ProBuilder::IntVec4>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::ProBuilder::IntVec4::Equals(::UnityEngine::ProBuilder::IntVec4 p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::IntVec4>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, p);
}
inline bool UnityEngine::ProBuilder::IntVec4::Equals(::UnityEngine::Vector4 p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, p);
}
inline bool UnityEngine::ProBuilder::IntVec4::Equals(::System::Object* b) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, b);
}
inline int32_t UnityEngine::ProBuilder::IntVec4::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::IntVec4::round(float_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(), { "round", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector4 UnityEngine::ProBuilder::IntVec4::op_Implicit___UnityEngine__Vector4(::UnityEngine::ProBuilder::IntVec4 p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::ProBuilder::IntVec4>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, p);
}
inline ::UnityEngine::ProBuilder::IntVec4 UnityEngine::ProBuilder::IntVec4::op_Implicit___UnityEngine__ProBuilder__IntVec4(::UnityEngine::Vector4 p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::IntVec4>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::IntVec4>(nullptr, ___internal_method, p);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec4>"
constexpr UnityEngine::ProBuilder::IntVec4::operator ::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec4>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec4>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec4>"
constexpr ::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec4>* UnityEngine::ProBuilder::IntVec4::i___System__IEquatable_1___UnityEngine__ProBuilder__IntVec4_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec4>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "value", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::IntVec4::IntVec4(::UnityEngine::Vector4 value) noexcept {
  this->value = value;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::IntVec4::IntVec4() {}
