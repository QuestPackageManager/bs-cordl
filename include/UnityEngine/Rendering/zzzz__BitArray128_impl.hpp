#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BitArray128.hpp"
#include "UnityEngine/Rendering/zzzz__BitArray128_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__IBitArray_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray128.get_capacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Rendering::BitArray128::*)()>(&::UnityEngine::Rendering::BitArray128::get_capacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67b1b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(), { "get_capacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray128.get_allFalse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::BitArray128::*)()>(&::UnityEngine::Rendering::BitArray128::get_allFalse)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x67b1b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(), { "get_allFalse", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray128.get_allTrue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::BitArray128::*)()>(&::UnityEngine::Rendering::BitArray128::get_allTrue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x67b1b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(), { "get_allTrue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray128.get_humanizedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::BitArray128::*)()>(&::UnityEngine::Rendering::BitArray128::get_humanizedData)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x67b1b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(), { "get_humanizedData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray128.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::BitArray128::*)(uint32_t)>(&::UnityEngine::Rendering::BitArray128::get_Item)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67b1dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(), { "get_Item", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray128.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BitArray128::*)(uint32_t, bool)>(&::UnityEngine::Rendering::BitArray128::set_Item)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x67b1dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(), { "set_Item", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray128._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BitArray128::*)(uint64_t, uint64_t)>(&::UnityEngine::Rendering::BitArray128::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67b1e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray128._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BitArray128::*)(::System::Collections::Generic::IEnumerable_1<uint32_t>*)>(
    &::UnityEngine::Rendering::BitArray128::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x67b1e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<uint32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray128.op_OnesComplement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BitArray128 (*)(::UnityEngine::Rendering::BitArray128)>(&::UnityEngine::Rendering::BitArray128::op_OnesComplement)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67b1f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(), { "op_OnesComplement", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray128>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray128.op_BitwiseOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BitArray128 (*)(::UnityEngine::Rendering::BitArray128, ::UnityEngine::Rendering::BitArray128)>(
    &::UnityEngine::Rendering::BitArray128::op_BitwiseOr)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67b1f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(),
                                                { "op_BitwiseOr", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray128>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray128>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray128.op_BitwiseAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BitArray128 (*)(::UnityEngine::Rendering::BitArray128, ::UnityEngine::Rendering::BitArray128)>(
    &::UnityEngine::Rendering::BitArray128::op_BitwiseAnd)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67b1f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(),
                                                { "op_BitwiseAnd", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray128>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray128>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray128.BitAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::IBitArray* (::UnityEngine::Rendering::BitArray128::*)(::UnityEngine::Rendering::IBitArray*)>(
    &::UnityEngine::Rendering::BitArray128::BitAnd)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x67b1f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(), { "BitAnd", {}, { ::i2c::type_of<::UnityEngine::Rendering::IBitArray*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray128.BitOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::IBitArray* (::UnityEngine::Rendering::BitArray128::*)(::UnityEngine::Rendering::IBitArray*)>(
    &::UnityEngine::Rendering::BitArray128::BitOr)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x67b1fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(), { "BitOr", {}, { ::i2c::type_of<::UnityEngine::Rendering::IBitArray*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray128.BitNot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::IBitArray* (::UnityEngine::Rendering::BitArray128::*)()>(&::UnityEngine::Rendering::BitArray128::BitNot)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67b2070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(), { "BitNot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray128.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::BitArray128, ::UnityEngine::Rendering::BitArray128)>(&::UnityEngine::Rendering::BitArray128::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x67b20d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray128>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray128>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray128.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::BitArray128, ::UnityEngine::Rendering::BitArray128)>(&::UnityEngine::Rendering::BitArray128::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x67b20e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(),
                                                { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray128>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray128>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray128.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::BitArray128::*)(::System::Object*)>(&::UnityEngine::Rendering::BitArray128::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x67b20f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(), { ::i2c::class_of<::UnityEngine::Rendering::BitArray128>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray128.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::BitArray128::*)()>(&::UnityEngine::Rendering::BitArray128::GetHashCode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x67b2180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(), { ::i2c::class_of<::UnityEngine::Rendering::BitArray128>(), 2 }));
    return ___internal_method;
  }
};
inline uint32_t UnityEngine::Rendering::BitArray128::get_capacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(), { "get_capacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::BitArray128::get_allFalse() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(), { "get_allFalse", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::BitArray128::get_allTrue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(), { "get_allTrue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::BitArray128::get_humanizedData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(), { "get_humanizedData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::BitArray128::get_Item(uint32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(), { "get_Item", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline void UnityEngine::Rendering::BitArray128::set_Item(uint32_t index, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(), { "set_Item", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline void UnityEngine::Rendering::BitArray128::_ctor(uint64_t initValue1, uint64_t initValue2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initValue1, initValue2);
}
inline void UnityEngine::Rendering::BitArray128::_ctor(::System::Collections::Generic::IEnumerable_1<uint32_t>* bitIndexTrue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<uint32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bitIndexTrue);
}
inline ::UnityEngine::Rendering::BitArray128 UnityEngine::Rendering::BitArray128::op_OnesComplement(::UnityEngine::Rendering::BitArray128 a) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(), { "op_OnesComplement", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray128>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BitArray128>(nullptr, ___internal_method, a);
}
inline ::UnityEngine::Rendering::BitArray128 UnityEngine::Rendering::BitArray128::op_BitwiseOr(::UnityEngine::Rendering::BitArray128 a, ::UnityEngine::Rendering::BitArray128 b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(),
                                              { "op_BitwiseOr", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray128>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray128>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BitArray128>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Rendering::BitArray128 UnityEngine::Rendering::BitArray128::op_BitwiseAnd(::UnityEngine::Rendering::BitArray128 a, ::UnityEngine::Rendering::BitArray128 b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(),
                                              { "op_BitwiseAnd", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray128>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray128>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BitArray128>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Rendering::IBitArray* UnityEngine::Rendering::BitArray128::BitAnd(::UnityEngine::Rendering::IBitArray* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(), { "BitAnd", {}, { ::i2c::type_of<::UnityEngine::Rendering::IBitArray*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IBitArray*>(*this, ___internal_method, other);
}
inline ::UnityEngine::Rendering::IBitArray* UnityEngine::Rendering::BitArray128::BitOr(::UnityEngine::Rendering::IBitArray* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(), { "BitOr", {}, { ::i2c::type_of<::UnityEngine::Rendering::IBitArray*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IBitArray*>(*this, ___internal_method, other);
}
inline ::UnityEngine::Rendering::IBitArray* UnityEngine::Rendering::BitArray128::BitNot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(), { "BitNot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IBitArray*>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::BitArray128::op_Equality(::UnityEngine::Rendering::BitArray128 a, ::UnityEngine::Rendering::BitArray128 b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray128>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray128>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::Rendering::BitArray128::op_Inequality(::UnityEngine::Rendering::BitArray128 a, ::UnityEngine::Rendering::BitArray128 b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray128>(),
                                              { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray128>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray128>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::Rendering::BitArray128::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::BitArray128>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::BitArray128::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::BitArray128>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::Rendering::IBitArray"
constexpr UnityEngine::Rendering::BitArray128::operator ::UnityEngine::Rendering::IBitArray*() {
  return static_cast<::UnityEngine::Rendering::IBitArray*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Rendering::IBitArray"
constexpr ::UnityEngine::Rendering::IBitArray* UnityEngine::Rendering::BitArray128::i___UnityEngine__Rendering__IBitArray() {
  return static_cast<::UnityEngine::Rendering::IBitArray*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "data1", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "data2", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BitArray128::BitArray128(uint64_t data1, uint64_t data2) noexcept {
  this->data1 = data1;
  this->data2 = data2;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BitArray128::BitArray128() {}
