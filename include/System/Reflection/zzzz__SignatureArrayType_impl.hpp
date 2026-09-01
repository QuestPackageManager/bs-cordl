#pragma once
// IWYU pragma private; include "System\Reflection\SignatureArrayType.hpp"
#include "System/Reflection/zzzz__SignatureHasElementType_impl.hpp"
#include "System/Reflection/zzzz__SignatureArrayType_def.hpp"
#include "System/Reflection/zzzz__SignatureType_def.hpp"
//  Writing Method size for method: ::System::Reflection::SignatureArrayType._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::SignatureArrayType::*)(::System::Reflection::SignatureType*, int32_t, bool)>(
    &::System::Reflection::SignatureArrayType::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5b81534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureArrayType*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Reflection::SignatureType*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::SignatureArrayType.IsArrayImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::SignatureArrayType::*)()>(&::System::Reflection::SignatureArrayType::IsArrayImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b815c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureArrayType*>(), { "IsArrayImpl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::SignatureArrayType.IsByRefImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::SignatureArrayType::*)()>(&::System::Reflection::SignatureArrayType::IsByRefImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b815c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureArrayType*>(), { "IsByRefImpl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::SignatureArrayType.IsPointerImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::SignatureArrayType::*)()>(&::System::Reflection::SignatureArrayType::IsPointerImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b815d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureArrayType*>(), { "IsPointerImpl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::SignatureArrayType.get_IsSZArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::SignatureArrayType::*)()>(&::System::Reflection::SignatureArrayType::get_IsSZArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b815d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureArrayType*>(), { "get_IsSZArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::SignatureArrayType.get_IsVariableBoundArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::SignatureArrayType::*)()>(&::System::Reflection::SignatureArrayType::get_IsVariableBoundArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b815e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureArrayType*>(), { "get_IsVariableBoundArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::SignatureArrayType.GetArrayRank
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Reflection::SignatureArrayType::*)()>(&::System::Reflection::SignatureArrayType::GetArrayRank)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b815f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureArrayType*>(), { "GetArrayRank", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::SignatureArrayType.get_Suffix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::SignatureArrayType::*)()>(&::System::Reflection::SignatureArrayType::get_Suffix)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5b815f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureArrayType*>(), { "get_Suffix", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Reflection::SignatureArrayType::__cordl_internal_get__rank() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rank;
}
constexpr int32_t const& System::Reflection::SignatureArrayType::__cordl_internal_get__rank() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rank;
}
constexpr void System::Reflection::SignatureArrayType::__cordl_internal_set__rank(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rank = value;
}
constexpr bool& System::Reflection::SignatureArrayType::__cordl_internal_get__isMultiDim() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isMultiDim;
}
constexpr bool const& System::Reflection::SignatureArrayType::__cordl_internal_get__isMultiDim() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isMultiDim;
}
constexpr void System::Reflection::SignatureArrayType::__cordl_internal_set__isMultiDim(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isMultiDim = value;
}
inline void System::Reflection::SignatureArrayType::_ctor(::System::Reflection::SignatureType* elementType, int32_t rank, bool isMultiDim) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureArrayType*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Reflection::SignatureType*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elementType, rank, isMultiDim);
}
inline bool System::Reflection::SignatureArrayType::IsArrayImpl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureArrayType*>(), { "IsArrayImpl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::SignatureArrayType::IsByRefImpl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureArrayType*>(), { "IsByRefImpl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::SignatureArrayType::IsPointerImpl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureArrayType*>(), { "IsPointerImpl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::SignatureArrayType::get_IsSZArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureArrayType*>(), { "get_IsSZArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::SignatureArrayType::get_IsVariableBoundArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureArrayType*>(), { "get_IsVariableBoundArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Reflection::SignatureArrayType::GetArrayRank() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureArrayType*>(), { "GetArrayRank", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Reflection::SignatureArrayType::get_Suffix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignatureArrayType*>(), { "get_Suffix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Reflection::SignatureArrayType* System::Reflection::SignatureArrayType::New_ctor(::System::Reflection::SignatureType* elementType, int32_t rank, bool isMultiDim) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::SignatureArrayType*>(elementType, rank, isMultiDim));
}
// Ctor Parameters []
constexpr ::System::Reflection::SignatureArrayType::SignatureArrayType() {}
