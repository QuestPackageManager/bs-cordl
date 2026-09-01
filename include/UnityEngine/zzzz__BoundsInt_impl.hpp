#pragma once
// IWYU pragma private; include "UnityEngine\BoundsInt.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "UnityEngine/zzzz__BoundsInt_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
//  Writing Method size for method: ::UnityEngine::BoundsInt.get_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3Int (::UnityEngine::BoundsInt::*)()>(&::UnityEngine::BoundsInt::get_position)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a80364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BoundsInt>(), { "get_position", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::BoundsInt.set_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::BoundsInt::*)(::UnityEngine::Vector3Int)>(&::UnityEngine::BoundsInt::set_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6a80374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BoundsInt>(), { "set_position", {}, { ::i2c::type_of<::UnityEngine::Vector3Int>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::BoundsInt.get_size
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3Int (::UnityEngine::BoundsInt::*)()>(&::UnityEngine::BoundsInt::get_size)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a80380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BoundsInt>(), { "get_size", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::BoundsInt.set_size
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::BoundsInt::*)(::UnityEngine::Vector3Int)>(&::UnityEngine::BoundsInt::set_size)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6a80390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BoundsInt>(), { "set_size", {}, { ::i2c::type_of<::UnityEngine::Vector3Int>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::BoundsInt._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::BoundsInt::*)(::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int)>(&::UnityEngine::BoundsInt::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a8039c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::BoundsInt>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::UnityEngine::Vector3Int>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::BoundsInt.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::BoundsInt::*)()>(&::UnityEngine::BoundsInt::ToString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a803b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::BoundsInt>(), { ::i2c::class_of<::UnityEngine::BoundsInt>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::BoundsInt.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::BoundsInt::*)(::StringW, ::System::IFormatProvider*)>(&::UnityEngine::BoundsInt::ToString)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6a803c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BoundsInt>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::BoundsInt.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::BoundsInt::*)(::System::Object*)>(&::UnityEngine::BoundsInt::Equals)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6a80528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::BoundsInt>(), { ::i2c::class_of<::UnityEngine::BoundsInt>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::BoundsInt.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::BoundsInt::*)(::UnityEngine::BoundsInt)>(&::UnityEngine::BoundsInt::Equals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6a805f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BoundsInt>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::BoundsInt>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::BoundsInt.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::BoundsInt::*)()>(&::UnityEngine::BoundsInt::GetHashCode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a8065c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::BoundsInt>(), { ::i2c::class_of<::UnityEngine::BoundsInt>(), 2 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3Int UnityEngine::BoundsInt::get_position() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BoundsInt>(), { "get_position", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int>(*this, ___internal_method);
}
inline void UnityEngine::BoundsInt::set_position(::UnityEngine::Vector3Int value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BoundsInt>(), { "set_position", {}, { ::i2c::type_of<::UnityEngine::Vector3Int>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3Int UnityEngine::BoundsInt::get_size() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BoundsInt>(), { "get_size", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int>(*this, ___internal_method);
}
inline void UnityEngine::BoundsInt::set_size(::UnityEngine::Vector3Int value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BoundsInt>(), { "set_size", {}, { ::i2c::type_of<::UnityEngine::Vector3Int>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::BoundsInt::_ctor(::UnityEngine::Vector3Int position, ::UnityEngine::Vector3Int size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::BoundsInt>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::UnityEngine::Vector3Int>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, size);
}
inline ::StringW UnityEngine::BoundsInt::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::BoundsInt>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW UnityEngine::BoundsInt::ToString(::StringW format, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BoundsInt>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
inline bool UnityEngine::BoundsInt::Equals(::System::Object* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::BoundsInt>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::BoundsInt::Equals(::UnityEngine::BoundsInt other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BoundsInt>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::BoundsInt>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::BoundsInt::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::BoundsInt>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::BoundsInt>"
constexpr UnityEngine::BoundsInt::operator ::System::IEquatable_1<::UnityEngine::BoundsInt>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::BoundsInt>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::BoundsInt>"
constexpr ::System::IEquatable_1<::UnityEngine::BoundsInt>* UnityEngine::BoundsInt::i___System__IEquatable_1___UnityEngine__BoundsInt_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::BoundsInt>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr UnityEngine::BoundsInt::operator ::System::IFormattable*() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* UnityEngine::BoundsInt::i___System__IFormattable() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Size", ty: "::UnityEngine::Vector3Int", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::BoundsInt::BoundsInt(::UnityEngine::Vector3Int m_Position, ::UnityEngine::Vector3Int m_Size) noexcept {
  this->m_Position = m_Position;
  this->m_Size = m_Size;
}
// Ctor Parameters []
constexpr ::UnityEngine::BoundsInt::BoundsInt() {}
