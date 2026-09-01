#pragma once
// IWYU pragma private; include "System\Reflection\SignaturePointerType.hpp"
#include "System/Reflection/zzzz__SignatureHasElementType_impl.hpp"
#include "System/Reflection/zzzz__SignaturePointerType_def.hpp"
#include "System/Reflection/zzzz__SignatureType_def.hpp"
//  Writing Method size for method: ::System::Reflection::SignaturePointerType._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::SignaturePointerType::*)(::System::Reflection::SignatureType*)>(
    &::System::Reflection::SignaturePointerType::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b81f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignaturePointerType*>(), { ".ctor", {}, { ::i2c::type_of<::System::Reflection::SignatureType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::SignaturePointerType.IsArrayImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::SignaturePointerType::*)()>(&::System::Reflection::SignaturePointerType::IsArrayImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b81fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignaturePointerType*>(), { "IsArrayImpl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::SignaturePointerType.IsByRefImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::SignaturePointerType::*)()>(&::System::Reflection::SignaturePointerType::IsByRefImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b81fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignaturePointerType*>(), { "IsByRefImpl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::SignaturePointerType.IsPointerImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::SignaturePointerType::*)()>(&::System::Reflection::SignaturePointerType::IsPointerImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b81fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignaturePointerType*>(), { "IsPointerImpl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::SignaturePointerType.get_IsSZArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::SignaturePointerType::*)()>(&::System::Reflection::SignaturePointerType::get_IsSZArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b81fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignaturePointerType*>(), { "get_IsSZArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::SignaturePointerType.get_IsVariableBoundArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::SignaturePointerType::*)()>(&::System::Reflection::SignaturePointerType::get_IsVariableBoundArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b81fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignaturePointerType*>(), { "get_IsVariableBoundArray", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::SignaturePointerType.GetArrayRank
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Reflection::SignaturePointerType::*)()>(&::System::Reflection::SignaturePointerType::GetArrayRank)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b81fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignaturePointerType*>(), { "GetArrayRank", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::SignaturePointerType.get_Suffix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::SignaturePointerType::*)()>(&::System::Reflection::SignaturePointerType::get_Suffix)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b82018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignaturePointerType*>(), { "get_Suffix", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Reflection::SignaturePointerType::_ctor(::System::Reflection::SignatureType* elementType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignaturePointerType*>(), { ".ctor", {}, { ::i2c::type_of<::System::Reflection::SignatureType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elementType);
}
inline bool System::Reflection::SignaturePointerType::IsArrayImpl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignaturePointerType*>(), { "IsArrayImpl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::SignaturePointerType::IsByRefImpl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignaturePointerType*>(), { "IsByRefImpl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::SignaturePointerType::IsPointerImpl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignaturePointerType*>(), { "IsPointerImpl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::SignaturePointerType::get_IsSZArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignaturePointerType*>(), { "get_IsSZArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::SignaturePointerType::get_IsVariableBoundArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignaturePointerType*>(), { "get_IsVariableBoundArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Reflection::SignaturePointerType::GetArrayRank() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignaturePointerType*>(), { "GetArrayRank", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Reflection::SignaturePointerType::get_Suffix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::SignaturePointerType*>(), { "get_Suffix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Reflection::SignaturePointerType* System::Reflection::SignaturePointerType::New_ctor(::System::Reflection::SignatureType* elementType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::SignaturePointerType*>(elementType));
}
// Ctor Parameters []
constexpr ::System::Reflection::SignaturePointerType::SignaturePointerType() {}
