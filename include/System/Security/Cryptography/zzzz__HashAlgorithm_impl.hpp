#pragma once
// IWYU pragma private; include "System\Security\Cryptography\HashAlgorithm.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::HashAlgorithm._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::HashAlgorithm::*)()>(&::System::Security::Cryptography::HashAlgorithm::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5af8220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HashAlgorithm.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::HashAlgorithm* (*)(::StringW)>(&::System::Security::Cryptography::HashAlgorithm::Create)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5af8224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), { "Create", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HashAlgorithm.get_HashSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::HashAlgorithm::*)()>(&::System::Security::Cryptography::HashAlgorithm::get_HashSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af82a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), { ::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HashAlgorithm.get_Hash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::HashAlgorithm::*)()>(&::System::Security::Cryptography::HashAlgorithm::get_Hash)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5af82b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), { ::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HashAlgorithm.ComputeHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::HashAlgorithm::*)(::ArrayW<uint8_t>)>(
    &::System::Security::Cryptography::HashAlgorithm::ComputeHash)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5af83c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), { "ComputeHash", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HashAlgorithm.ComputeHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::HashAlgorithm::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Security::Cryptography::HashAlgorithm::ComputeHash)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5af850c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(),
                                                             { "ComputeHash", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HashAlgorithm.ComputeHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::HashAlgorithm::*)(::System::IO::Stream*)>(
    &::System::Security::Cryptography::HashAlgorithm::ComputeHash)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5af866c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), { "ComputeHash", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HashAlgorithm.CaptureHashCodeAndReinitialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::HashAlgorithm::*)()>(
    &::System::Security::Cryptography::HashAlgorithm::CaptureHashCodeAndReinitialize)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5af8464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), { "CaptureHashCodeAndReinitialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HashAlgorithm.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::HashAlgorithm::*)()>(&::System::Security::Cryptography::HashAlgorithm::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5af8890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HashAlgorithm.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::HashAlgorithm::*)()>(&::System::Security::Cryptography::HashAlgorithm::Clear)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5af8900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HashAlgorithm.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::HashAlgorithm::*)(bool)>(&::System::Security::Cryptography::HashAlgorithm::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5af8998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), { ::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HashAlgorithm.get_InputBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::HashAlgorithm::*)()>(&::System::Security::Cryptography::HashAlgorithm::get_InputBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af89a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), { ::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HashAlgorithm.get_OutputBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::HashAlgorithm::*)()>(&::System::Security::Cryptography::HashAlgorithm::get_OutputBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af89b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), { ::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HashAlgorithm.get_CanTransformMultipleBlocks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::HashAlgorithm::*)()>(&::System::Security::Cryptography::HashAlgorithm::get_CanTransformMultipleBlocks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af89b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), { ::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HashAlgorithm.TransformBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::HashAlgorithm::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::System::Security::Cryptography::HashAlgorithm::TransformBlock)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5af89c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(),
            { "TransformBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HashAlgorithm.TransformFinalBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::HashAlgorithm::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Security::Cryptography::HashAlgorithm::TransformFinalBlock)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5af8ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(),
                                                             { "TransformFinalBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HashAlgorithm.ValidateTransformBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::HashAlgorithm::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Security::Cryptography::HashAlgorithm::ValidateTransformBlock)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5af8a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(),
                                                             { "ValidateTransformBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HashAlgorithm.HashCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::HashAlgorithm::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Security::Cryptography::HashAlgorithm::HashCore)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), { ::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HashAlgorithm.HashFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::HashAlgorithm::*)()>(&::System::Security::Cryptography::HashAlgorithm::HashFinal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), { ::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HashAlgorithm.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::HashAlgorithm::*)()>(&::System::Security::Cryptography::HashAlgorithm::Initialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), { ::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), 18 }));
    return ___internal_method;
  }
};
constexpr bool& System::Security::Cryptography::HashAlgorithm::__cordl_internal_get__disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr bool const& System::Security::Cryptography::HashAlgorithm::__cordl_internal_get__disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr void System::Security::Cryptography::HashAlgorithm::__cordl_internal_set__disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed = value;
}
constexpr int32_t& System::Security::Cryptography::HashAlgorithm::__cordl_internal_get_HashSizeValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HashSizeValue;
}
constexpr int32_t const& System::Security::Cryptography::HashAlgorithm::__cordl_internal_get_HashSizeValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HashSizeValue;
}
constexpr void System::Security::Cryptography::HashAlgorithm::__cordl_internal_set_HashSizeValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___HashSizeValue = value;
}
constexpr ::ArrayW<uint8_t>& System::Security::Cryptography::HashAlgorithm::__cordl_internal_get_HashValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HashValue;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Cryptography::HashAlgorithm::__cordl_internal_get_HashValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HashValue;
}
constexpr void System::Security::Cryptography::HashAlgorithm::__cordl_internal_set_HashValue(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___HashValue = value;
}
constexpr int32_t& System::Security::Cryptography::HashAlgorithm::__cordl_internal_get_State() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___State;
}
constexpr int32_t const& System::Security::Cryptography::HashAlgorithm::__cordl_internal_get_State() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___State;
}
constexpr void System::Security::Cryptography::HashAlgorithm::__cordl_internal_set_State(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___State = value;
}
inline void System::Security::Cryptography::HashAlgorithm::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::HashAlgorithm* System::Security::Cryptography::HashAlgorithm::Create(::StringW hashName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), { "Create", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::HashAlgorithm*>(nullptr, ___internal_method, hashName);
}
inline int32_t System::Security::Cryptography::HashAlgorithm::get_HashSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::HashAlgorithm::get_Hash() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::HashAlgorithm::ComputeHash(::ArrayW<uint8_t> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), { "ComputeHash", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, buffer);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::HashAlgorithm::ComputeHash(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(),
                                                           { "ComputeHash", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, buffer, offset, count);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::HashAlgorithm::ComputeHash(::System::IO::Stream* inputStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), { "ComputeHash", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, inputStream);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::HashAlgorithm::CaptureHashCodeAndReinitialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), { "CaptureHashCodeAndReinitialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Security::Cryptography::HashAlgorithm::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::HashAlgorithm::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::HashAlgorithm::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline int32_t System::Security::Cryptography::HashAlgorithm::get_InputBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::HashAlgorithm::get_OutputBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Security::Cryptography::HashAlgorithm::get_CanTransformMultipleBlocks() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::HashAlgorithm::TransformBlock(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount, ::ArrayW<uint8_t> outputBuffer,
                                                                             int32_t outputOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(),
          { "TransformBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::HashAlgorithm::TransformFinalBlock(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(),
                                                           { "TransformFinalBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, inputBuffer, inputOffset, inputCount);
}
inline void System::Security::Cryptography::HashAlgorithm::ValidateTransformBlock(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(),
                                                           { "ValidateTransformBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputBuffer, inputOffset, inputCount);
}
inline void System::Security::Cryptography::HashAlgorithm::HashCore(::ArrayW<uint8_t> array, int32_t ibStart, int32_t cbSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, ibStart, cbSize);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::HashAlgorithm::HashFinal() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Security::Cryptography::HashAlgorithm::Initialize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::HashAlgorithm*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::HashAlgorithm* System::Security::Cryptography::HashAlgorithm::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::HashAlgorithm*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Security::Cryptography::HashAlgorithm::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Security::Cryptography::HashAlgorithm::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Security::Cryptography::ICryptoTransform"
constexpr System::Security::Cryptography::HashAlgorithm::operator ::System::Security::Cryptography::ICryptoTransform*() noexcept {
  return static_cast<::System::Security::Cryptography::ICryptoTransform*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Security::Cryptography::ICryptoTransform"
constexpr ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::HashAlgorithm::i___System__Security__Cryptography__ICryptoTransform() noexcept {
  return static_cast<::System::Security::Cryptography::ICryptoTransform*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::HashAlgorithm::HashAlgorithm() {}
