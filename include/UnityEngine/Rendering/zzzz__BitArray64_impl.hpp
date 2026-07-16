#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BitArray64.hpp"
#include "UnityEngine/Rendering/zzzz__BitArray64_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__IBitArray_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray64.get_capacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Rendering::BitArray64::*)()>(&::UnityEngine::Rendering::BitArray64::get_capacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67b15a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(), { "get_capacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray64.get_allFalse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::BitArray64::*)()>(&::UnityEngine::Rendering::BitArray64::get_allFalse)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x67b15ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(), { "get_allFalse", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray64.get_allTrue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::BitArray64::*)()>(&::UnityEngine::Rendering::BitArray64::get_allTrue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x67b15bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(), { "get_allTrue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray64.get_humanizedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::BitArray64::*)()>(&::UnityEngine::Rendering::BitArray64::get_humanizedData)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x67b15cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(), { "get_humanizedData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray64.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::BitArray64::*)(uint32_t)>(&::UnityEngine::Rendering::BitArray64::get_Item)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x67b1784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(), { "get_Item", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray64.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BitArray64::*)(uint32_t, bool)>(&::UnityEngine::Rendering::BitArray64::set_Item)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x67b17a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(), { "set_Item", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray64._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BitArray64::*)(uint64_t)>(&::UnityEngine::Rendering::BitArray64::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67b17e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray64._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BitArray64::*)(::System::Collections::Generic::IEnumerable_1<uint32_t>*)>(
    &::UnityEngine::Rendering::BitArray64::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x67b17f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<uint32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray64.op_OnesComplement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BitArray64 (*)(::UnityEngine::Rendering::BitArray64)>(&::UnityEngine::Rendering::BitArray64::op_OnesComplement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67b18b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(), { "op_OnesComplement", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray64>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray64.op_BitwiseOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BitArray64 (*)(::UnityEngine::Rendering::BitArray64, ::UnityEngine::Rendering::BitArray64)>(
    &::UnityEngine::Rendering::BitArray64::op_BitwiseOr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67b18b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(),
                                                { "op_BitwiseOr", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray64>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray64>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray64.op_BitwiseAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BitArray64 (*)(::UnityEngine::Rendering::BitArray64, ::UnityEngine::Rendering::BitArray64)>(
    &::UnityEngine::Rendering::BitArray64::op_BitwiseAnd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67b18c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(),
                                                { "op_BitwiseAnd", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray64>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray64>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray64.BitAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::IBitArray* (::UnityEngine::Rendering::BitArray64::*)(::UnityEngine::Rendering::IBitArray*)>(
    &::UnityEngine::Rendering::BitArray64::BitAnd)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x67b18c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(), { "BitAnd", {}, { ::i2c::type_of<::UnityEngine::Rendering::IBitArray*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray64.BitOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::IBitArray* (::UnityEngine::Rendering::BitArray64::*)(::UnityEngine::Rendering::IBitArray*)>(
    &::UnityEngine::Rendering::BitArray64::BitOr)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x67b1960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(), { "BitOr", {}, { ::i2c::type_of<::UnityEngine::Rendering::IBitArray*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray64.BitNot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::IBitArray* (::UnityEngine::Rendering::BitArray64::*)()>(&::UnityEngine::Rendering::BitArray64::BitNot)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67b19f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(), { "BitNot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray64.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::BitArray64, ::UnityEngine::Rendering::BitArray64)>(&::UnityEngine::Rendering::BitArray64::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67b1a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray64>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray64>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray64.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::BitArray64, ::UnityEngine::Rendering::BitArray64)>(&::UnityEngine::Rendering::BitArray64::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67b1a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(),
                                                { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray64>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray64>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray64.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::BitArray64::*)(::System::Object*)>(&::UnityEngine::Rendering::BitArray64::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67b1a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(), { ::i2c::class_of<::UnityEngine::Rendering::BitArray64>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray64.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::BitArray64::*)()>(&::UnityEngine::Rendering::BitArray64::GetHashCode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67b1af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(), { ::i2c::class_of<::UnityEngine::Rendering::BitArray64>(), 2 }));
    return ___internal_method;
  }
};
inline uint32_t UnityEngine::Rendering::BitArray64::get_capacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(), { "get_capacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::BitArray64::get_allFalse() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(), { "get_allFalse", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::BitArray64::get_allTrue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(), { "get_allTrue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::BitArray64::get_humanizedData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(), { "get_humanizedData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::BitArray64::get_Item(uint32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(), { "get_Item", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline void UnityEngine::Rendering::BitArray64::set_Item(uint32_t index, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(), { "set_Item", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline void UnityEngine::Rendering::BitArray64::_ctor(uint64_t initValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initValue);
}
inline void UnityEngine::Rendering::BitArray64::_ctor(::System::Collections::Generic::IEnumerable_1<uint32_t>* bitIndexTrue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<uint32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bitIndexTrue);
}
inline ::UnityEngine::Rendering::BitArray64 UnityEngine::Rendering::BitArray64::op_OnesComplement(::UnityEngine::Rendering::BitArray64 a) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(), { "op_OnesComplement", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray64>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BitArray64>(nullptr, ___internal_method, a);
}
inline ::UnityEngine::Rendering::BitArray64 UnityEngine::Rendering::BitArray64::op_BitwiseOr(::UnityEngine::Rendering::BitArray64 a, ::UnityEngine::Rendering::BitArray64 b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(),
                                              { "op_BitwiseOr", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray64>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray64>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BitArray64>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Rendering::BitArray64 UnityEngine::Rendering::BitArray64::op_BitwiseAnd(::UnityEngine::Rendering::BitArray64 a, ::UnityEngine::Rendering::BitArray64 b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(),
                                              { "op_BitwiseAnd", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray64>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray64>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BitArray64>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Rendering::IBitArray* UnityEngine::Rendering::BitArray64::BitAnd(::UnityEngine::Rendering::IBitArray* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(), { "BitAnd", {}, { ::i2c::type_of<::UnityEngine::Rendering::IBitArray*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IBitArray*>(*this, ___internal_method, other);
}
inline ::UnityEngine::Rendering::IBitArray* UnityEngine::Rendering::BitArray64::BitOr(::UnityEngine::Rendering::IBitArray* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(), { "BitOr", {}, { ::i2c::type_of<::UnityEngine::Rendering::IBitArray*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IBitArray*>(*this, ___internal_method, other);
}
inline ::UnityEngine::Rendering::IBitArray* UnityEngine::Rendering::BitArray64::BitNot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(), { "BitNot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IBitArray*>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::BitArray64::op_Equality(::UnityEngine::Rendering::BitArray64 a, ::UnityEngine::Rendering::BitArray64 b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray64>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray64>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::Rendering::BitArray64::op_Inequality(::UnityEngine::Rendering::BitArray64 a, ::UnityEngine::Rendering::BitArray64 b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray64>(),
                                              { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray64>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray64>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::Rendering::BitArray64::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::BitArray64>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::BitArray64::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::BitArray64>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::Rendering::IBitArray"
constexpr UnityEngine::Rendering::BitArray64::operator ::UnityEngine::Rendering::IBitArray*() {
  return static_cast<::UnityEngine::Rendering::IBitArray*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Rendering::IBitArray"
constexpr ::UnityEngine::Rendering::IBitArray* UnityEngine::Rendering::BitArray64::i___UnityEngine__Rendering__IBitArray() {
  return static_cast<::UnityEngine::Rendering::IBitArray*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "data", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BitArray64::BitArray64(uint64_t data) noexcept {
  this->data = data;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BitArray64::BitArray64() {}
