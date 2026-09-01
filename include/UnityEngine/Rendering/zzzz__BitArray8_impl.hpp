#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\BitArray8.hpp"
#include "UnityEngine/Rendering/zzzz__BitArray8_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__IBitArray_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray8.get_capacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Rendering::BitArray8::*)()>(&::UnityEngine::Rendering::BitArray8::get_capacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67b5da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(), { "get_capacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray8.get_allFalse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::BitArray8::*)()>(&::UnityEngine::Rendering::BitArray8::get_allFalse)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x67b5dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(), { "get_allFalse", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray8.get_allTrue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::BitArray8::*)()>(&::UnityEngine::Rendering::BitArray8::get_allTrue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x67b5dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(), { "get_allTrue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray8.get_humanizedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::BitArray8::*)()>(&::UnityEngine::Rendering::BitArray8::get_humanizedData)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x67b5dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(), { "get_humanizedData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray8.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::BitArray8::*)(uint32_t)>(&::UnityEngine::Rendering::BitArray8::get_Item)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x67b5ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(), { "get_Item", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray8.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BitArray8::*)(uint32_t, bool)>(&::UnityEngine::Rendering::BitArray8::set_Item)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x67b5f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(), { "set_Item", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray8._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BitArray8::*)(uint8_t)>(&::UnityEngine::Rendering::BitArray8::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67b5f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray8._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BitArray8::*)(::System::Collections::Generic::IEnumerable_1<uint32_t>*)>(
    &::UnityEngine::Rendering::BitArray8::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x67b5f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<uint32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray8.op_OnesComplement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BitArray8 (*)(::UnityEngine::Rendering::BitArray8)>(&::UnityEngine::Rendering::BitArray8::op_OnesComplement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67b6024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(), { "op_OnesComplement", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray8>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray8.op_BitwiseOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BitArray8 (*)(::UnityEngine::Rendering::BitArray8, ::UnityEngine::Rendering::BitArray8)>(
    &::UnityEngine::Rendering::BitArray8::op_BitwiseOr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67b602c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(),
                                                { "op_BitwiseOr", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray8>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray8>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray8.op_BitwiseAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BitArray8 (*)(::UnityEngine::Rendering::BitArray8, ::UnityEngine::Rendering::BitArray8)>(
    &::UnityEngine::Rendering::BitArray8::op_BitwiseAnd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67b6034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(),
                                                { "op_BitwiseAnd", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray8>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray8>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray8.BitAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::IBitArray* (::UnityEngine::Rendering::BitArray8::*)(::UnityEngine::Rendering::IBitArray*)>(
    &::UnityEngine::Rendering::BitArray8::BitAnd)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x67b603c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(), { "BitAnd", {}, { ::i2c::type_of<::UnityEngine::Rendering::IBitArray*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray8.BitOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::IBitArray* (::UnityEngine::Rendering::BitArray8::*)(::UnityEngine::Rendering::IBitArray*)>(
    &::UnityEngine::Rendering::BitArray8::BitOr)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x67b60d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(), { "BitOr", {}, { ::i2c::type_of<::UnityEngine::Rendering::IBitArray*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray8.BitNot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::IBitArray* (::UnityEngine::Rendering::BitArray8::*)()>(&::UnityEngine::Rendering::BitArray8::BitNot)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67b616c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(), { "BitNot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray8.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::BitArray8, ::UnityEngine::Rendering::BitArray8)>(&::UnityEngine::Rendering::BitArray8::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x67b61d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray8>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray8>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray8.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::BitArray8, ::UnityEngine::Rendering::BitArray8)>(&::UnityEngine::Rendering::BitArray8::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x67b61e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(),
                                                { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray8>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray8>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray8.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::BitArray8::*)(::System::Object*)>(&::UnityEngine::Rendering::BitArray8::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67b61f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(), { ::i2c::class_of<::UnityEngine::Rendering::BitArray8>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray8.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::BitArray8::*)()>(&::UnityEngine::Rendering::BitArray8::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67b626c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(), { ::i2c::class_of<::UnityEngine::Rendering::BitArray8>(), 2 }));
    return ___internal_method;
  }
};
inline uint32_t UnityEngine::Rendering::BitArray8::get_capacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(), { "get_capacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::BitArray8::get_allFalse() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(), { "get_allFalse", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::BitArray8::get_allTrue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(), { "get_allTrue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::BitArray8::get_humanizedData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(), { "get_humanizedData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::BitArray8::get_Item(uint32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(), { "get_Item", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline void UnityEngine::Rendering::BitArray8::set_Item(uint32_t index, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(), { "set_Item", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline void UnityEngine::Rendering::BitArray8::_ctor(uint8_t initValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initValue);
}
inline void UnityEngine::Rendering::BitArray8::_ctor(::System::Collections::Generic::IEnumerable_1<uint32_t>* bitIndexTrue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<uint32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bitIndexTrue);
}
inline ::UnityEngine::Rendering::BitArray8 UnityEngine::Rendering::BitArray8::op_OnesComplement(::UnityEngine::Rendering::BitArray8 a) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(), { "op_OnesComplement", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray8>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BitArray8>(nullptr, ___internal_method, a);
}
inline ::UnityEngine::Rendering::BitArray8 UnityEngine::Rendering::BitArray8::op_BitwiseOr(::UnityEngine::Rendering::BitArray8 a, ::UnityEngine::Rendering::BitArray8 b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(),
                                                           { "op_BitwiseOr", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray8>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray8>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BitArray8>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Rendering::BitArray8 UnityEngine::Rendering::BitArray8::op_BitwiseAnd(::UnityEngine::Rendering::BitArray8 a, ::UnityEngine::Rendering::BitArray8 b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(),
                                                           { "op_BitwiseAnd", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray8>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray8>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BitArray8>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Rendering::IBitArray* UnityEngine::Rendering::BitArray8::BitAnd(::UnityEngine::Rendering::IBitArray* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(), { "BitAnd", {}, { ::i2c::type_of<::UnityEngine::Rendering::IBitArray*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IBitArray*>(*this, ___internal_method, other);
}
inline ::UnityEngine::Rendering::IBitArray* UnityEngine::Rendering::BitArray8::BitOr(::UnityEngine::Rendering::IBitArray* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(), { "BitOr", {}, { ::i2c::type_of<::UnityEngine::Rendering::IBitArray*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IBitArray*>(*this, ___internal_method, other);
}
inline ::UnityEngine::Rendering::IBitArray* UnityEngine::Rendering::BitArray8::BitNot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(), { "BitNot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IBitArray*>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::BitArray8::op_Equality(::UnityEngine::Rendering::BitArray8 a, ::UnityEngine::Rendering::BitArray8 b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray8>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray8>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::Rendering::BitArray8::op_Inequality(::UnityEngine::Rendering::BitArray8 a, ::UnityEngine::Rendering::BitArray8 b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray8>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray8>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray8>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::Rendering::BitArray8::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::BitArray8>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::BitArray8::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::BitArray8>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::Rendering::IBitArray"
constexpr UnityEngine::Rendering::BitArray8::operator ::UnityEngine::Rendering::IBitArray*() {
  return static_cast<::UnityEngine::Rendering::IBitArray*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Rendering::IBitArray"
constexpr ::UnityEngine::Rendering::IBitArray* UnityEngine::Rendering::BitArray8::i___UnityEngine__Rendering__IBitArray() {
  return static_cast<::UnityEngine::Rendering::IBitArray*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "data", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BitArray8::BitArray8(uint8_t data) noexcept {
  this->data = data;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BitArray8::BitArray8() {}
