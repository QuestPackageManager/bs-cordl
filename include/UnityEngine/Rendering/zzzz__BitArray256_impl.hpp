#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BitArray256.hpp"
#include "UnityEngine/Rendering/zzzz__BitArray256_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__IBitArray_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray256.get_capacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Rendering::BitArray256::*)()>(&::UnityEngine::Rendering::BitArray256::get_capacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67b21ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(), { "get_capacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray256.get_allFalse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::BitArray256::*)()>(&::UnityEngine::Rendering::BitArray256::get_allFalse)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x67b21b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(), { "get_allFalse", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray256.get_allTrue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::BitArray256::*)()>(&::UnityEngine::Rendering::BitArray256::get_allTrue)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x67b21e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(), { "get_allTrue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray256.get_humanizedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::BitArray256::*)()>(&::UnityEngine::Rendering::BitArray256::get_humanizedData)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x67b2220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(), { "get_humanizedData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray256.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::BitArray256::*)(uint32_t)>(&::UnityEngine::Rendering::BitArray256::get_Item)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x67b25fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(), { "get_Item", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray256.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BitArray256::*)(uint32_t, bool)>(&::UnityEngine::Rendering::BitArray256::set_Item)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x67b267c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(), { "set_Item", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray256._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BitArray256::*)(uint64_t, uint64_t, uint64_t, uint64_t)>(&::UnityEngine::Rendering::BitArray256::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67b2744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(),
                                                             { ".ctor", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray256._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BitArray256::*)(::System::Collections::Generic::IEnumerable_1<uint32_t>*)>(
    &::UnityEngine::Rendering::BitArray256::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x67b2750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<uint32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray256.op_OnesComplement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BitArray256 (*)(::UnityEngine::Rendering::BitArray256)>(&::UnityEngine::Rendering::BitArray256::op_OnesComplement)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67b2870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(), { "op_OnesComplement", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray256>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray256.op_BitwiseOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BitArray256 (*)(::UnityEngine::Rendering::BitArray256, ::UnityEngine::Rendering::BitArray256)>(
    &::UnityEngine::Rendering::BitArray256::op_BitwiseOr)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67b2884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(),
                                                { "op_BitwiseOr", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray256>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray256>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray256.op_BitwiseAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BitArray256 (*)(::UnityEngine::Rendering::BitArray256, ::UnityEngine::Rendering::BitArray256)>(
    &::UnityEngine::Rendering::BitArray256::op_BitwiseAnd)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67b289c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(),
                                                { "op_BitwiseAnd", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray256>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray256>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray256.BitAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::IBitArray* (::UnityEngine::Rendering::BitArray256::*)(::UnityEngine::Rendering::IBitArray*)>(
    &::UnityEngine::Rendering::BitArray256::BitAnd)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x67b28b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(), { "BitAnd", {}, { ::i2c::type_of<::UnityEngine::Rendering::IBitArray*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray256.BitOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::IBitArray* (::UnityEngine::Rendering::BitArray256::*)(::UnityEngine::Rendering::IBitArray*)>(
    &::UnityEngine::Rendering::BitArray256::BitOr)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x67b2958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(), { "BitOr", {}, { ::i2c::type_of<::UnityEngine::Rendering::IBitArray*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray256.BitNot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::IBitArray* (::UnityEngine::Rendering::BitArray256::*)()>(&::UnityEngine::Rendering::BitArray256::BitNot)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x67b29fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(), { "BitNot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray256.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::BitArray256, ::UnityEngine::Rendering::BitArray256)>(&::UnityEngine::Rendering::BitArray256::op_Equality)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x67b2a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray256>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray256>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray256.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::BitArray256, ::UnityEngine::Rendering::BitArray256)>(&::UnityEngine::Rendering::BitArray256::op_Inequality)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x67b2ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(),
                                                { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray256>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray256>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray256.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::BitArray256::*)(::System::Object*)>(&::UnityEngine::Rendering::BitArray256::Equals)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x67b2afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(), { ::i2c::class_of<::UnityEngine::Rendering::BitArray256>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BitArray256.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::BitArray256::*)()>(&::UnityEngine::Rendering::BitArray256::GetHashCode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x67b2ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(), { ::i2c::class_of<::UnityEngine::Rendering::BitArray256>(), 2 }));
    return ___internal_method;
  }
};
inline uint32_t UnityEngine::Rendering::BitArray256::get_capacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(), { "get_capacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::BitArray256::get_allFalse() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(), { "get_allFalse", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::BitArray256::get_allTrue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(), { "get_allTrue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::BitArray256::get_humanizedData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(), { "get_humanizedData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::BitArray256::get_Item(uint32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(), { "get_Item", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline void UnityEngine::Rendering::BitArray256::set_Item(uint32_t index, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(), { "set_Item", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline void UnityEngine::Rendering::BitArray256::_ctor(uint64_t initValue1, uint64_t initValue2, uint64_t initValue3, uint64_t initValue4) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(),
                                                           { ".ctor", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initValue1, initValue2, initValue3, initValue4);
}
inline void UnityEngine::Rendering::BitArray256::_ctor(::System::Collections::Generic::IEnumerable_1<uint32_t>* bitIndexTrue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<uint32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bitIndexTrue);
}
inline ::UnityEngine::Rendering::BitArray256 UnityEngine::Rendering::BitArray256::op_OnesComplement(::UnityEngine::Rendering::BitArray256 a) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(), { "op_OnesComplement", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray256>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BitArray256>(nullptr, ___internal_method, a);
}
inline ::UnityEngine::Rendering::BitArray256 UnityEngine::Rendering::BitArray256::op_BitwiseOr(::UnityEngine::Rendering::BitArray256 a, ::UnityEngine::Rendering::BitArray256 b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(),
                                              { "op_BitwiseOr", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray256>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray256>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BitArray256>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Rendering::BitArray256 UnityEngine::Rendering::BitArray256::op_BitwiseAnd(::UnityEngine::Rendering::BitArray256 a, ::UnityEngine::Rendering::BitArray256 b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(),
                                              { "op_BitwiseAnd", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray256>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray256>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BitArray256>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Rendering::IBitArray* UnityEngine::Rendering::BitArray256::BitAnd(::UnityEngine::Rendering::IBitArray* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(), { "BitAnd", {}, { ::i2c::type_of<::UnityEngine::Rendering::IBitArray*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IBitArray*>(*this, ___internal_method, other);
}
inline ::UnityEngine::Rendering::IBitArray* UnityEngine::Rendering::BitArray256::BitOr(::UnityEngine::Rendering::IBitArray* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(), { "BitOr", {}, { ::i2c::type_of<::UnityEngine::Rendering::IBitArray*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IBitArray*>(*this, ___internal_method, other);
}
inline ::UnityEngine::Rendering::IBitArray* UnityEngine::Rendering::BitArray256::BitNot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(), { "BitNot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IBitArray*>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::BitArray256::op_Equality(::UnityEngine::Rendering::BitArray256 a, ::UnityEngine::Rendering::BitArray256 b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray256>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray256>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::Rendering::BitArray256::op_Inequality(::UnityEngine::Rendering::BitArray256 a, ::UnityEngine::Rendering::BitArray256 b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BitArray256>(),
                                              { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::Rendering::BitArray256>(), ::i2c::type_of<::UnityEngine::Rendering::BitArray256>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::Rendering::BitArray256::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::BitArray256>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::BitArray256::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::BitArray256>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::Rendering::IBitArray"
constexpr UnityEngine::Rendering::BitArray256::operator ::UnityEngine::Rendering::IBitArray*() {
  return static_cast<::UnityEngine::Rendering::IBitArray*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Rendering::IBitArray"
constexpr ::UnityEngine::Rendering::IBitArray* UnityEngine::Rendering::BitArray256::i___UnityEngine__Rendering__IBitArray() {
  return static_cast<::UnityEngine::Rendering::IBitArray*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "data1", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "data2", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "data3", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "data4", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BitArray256::BitArray256(uint64_t data1, uint64_t data2, uint64_t data3, uint64_t data4) noexcept {
  this->data1 = data1;
  this->data2 = data2;
  this->data3 = data3;
  this->data4 = data4;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BitArray256::BitArray256() {}
