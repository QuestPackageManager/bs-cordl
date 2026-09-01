#pragma once
// IWYU pragma private; include "System\Security\Cryptography\AesManaged.hpp"
#include "System/Security/Cryptography/zzzz__Aes_impl.hpp"
#include "System/Security/Cryptography/zzzz__AesManaged_def.hpp"
#include "System/Security/Cryptography/zzzz__CipherMode_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
#include "System/Security/Cryptography/zzzz__PaddingMode_def.hpp"
#include "System/Security/Cryptography/zzzz__RijndaelManaged_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::AesManaged._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesManaged::*)()>(&::System::Security::Cryptography::AesManaged::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5f57e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesManaged.get_FeedbackSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::AesManaged::*)()>(&::System::Security::Cryptography::AesManaged::get_FeedbackSize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f57f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesManaged.get_IV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::AesManaged::*)()>(&::System::Security::Cryptography::AesManaged::get_IV)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f57f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesManaged.set_IV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesManaged::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::AesManaged::set_IV)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f57fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesManaged.get_Key
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::AesManaged::*)()>(&::System::Security::Cryptography::AesManaged::get_Key)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f57fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesManaged.set_Key
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesManaged::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::AesManaged::set_Key)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f57fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesManaged.get_KeySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::AesManaged::*)()>(&::System::Security::Cryptography::AesManaged::get_KeySize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f58004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesManaged.set_KeySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesManaged::*)(int32_t)>(&::System::Security::Cryptography::AesManaged::set_KeySize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f58024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesManaged.get_Mode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::CipherMode (::System::Security::Cryptography::AesManaged::*)()>(
    &::System::Security::Cryptography::AesManaged::get_Mode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f58044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesManaged.set_Mode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesManaged::*)(::System::Security::Cryptography::CipherMode)>(
    &::System::Security::Cryptography::AesManaged::set_Mode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f58064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesManaged.get_Padding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::PaddingMode (::System::Security::Cryptography::AesManaged::*)()>(
    &::System::Security::Cryptography::AesManaged::get_Padding)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f580e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesManaged.set_Padding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesManaged::*)(::System::Security::Cryptography::PaddingMode)>(
    &::System::Security::Cryptography::AesManaged::set_Padding)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f58104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesManaged.CreateDecryptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::ICryptoTransform* (::System::Security::Cryptography::AesManaged::*)()>(
    &::System::Security::Cryptography::AesManaged::CreateDecryptor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f58124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesManaged.CreateDecryptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::ICryptoTransform* (::System::Security::Cryptography::AesManaged::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::System::Security::Cryptography::AesManaged::CreateDecryptor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5f58144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesManaged.CreateEncryptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::ICryptoTransform* (::System::Security::Cryptography::AesManaged::*)()>(
    &::System::Security::Cryptography::AesManaged::CreateEncryptor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f58284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesManaged.CreateEncryptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::ICryptoTransform* (::System::Security::Cryptography::AesManaged::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::System::Security::Cryptography::AesManaged::CreateEncryptor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5f582a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesManaged.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesManaged::*)(bool)>(&::System::Security::Cryptography::AesManaged::Dispose)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5f583e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesManaged.GenerateIV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesManaged::*)()>(&::System::Security::Cryptography::AesManaged::GenerateIV)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f58528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesManaged.GenerateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesManaged::*)()>(&::System::Security::Cryptography::AesManaged::GenerateKey)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f58548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 24 }));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::RijndaelManaged*& System::Security::Cryptography::AesManaged::__cordl_internal_get_m_rijndael() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_rijndael;
}
constexpr ::System::Security::Cryptography::RijndaelManaged* const& System::Security::Cryptography::AesManaged::__cordl_internal_get_m_rijndael() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_rijndael;
}
constexpr void System::Security::Cryptography::AesManaged::__cordl_internal_set_m_rijndael(::System::Security::Cryptography::RijndaelManaged* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_rijndael = value;
}
inline void System::Security::Cryptography::AesManaged::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::AesManaged::get_FeedbackSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::AesManaged::get_IV() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Security::Cryptography::AesManaged::set_IV(::ArrayW<uint8_t> value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::AesManaged::get_Key() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Security::Cryptography::AesManaged::set_Key(::ArrayW<uint8_t> value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Security::Cryptography::AesManaged::get_KeySize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Security::Cryptography::AesManaged::set_KeySize(int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::CipherMode System::Security::Cryptography::AesManaged::get_Mode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::CipherMode>(this, ___internal_method);
}
inline void System::Security::Cryptography::AesManaged::set_Mode(::System::Security::Cryptography::CipherMode value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::PaddingMode System::Security::Cryptography::AesManaged::get_Padding() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::PaddingMode>(this, ___internal_method);
}
inline void System::Security::Cryptography::AesManaged::set_Padding(::System::Security::Cryptography::PaddingMode value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::AesManaged::CreateDecryptor() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::AesManaged::CreateDecryptor(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*>(this, ___internal_method, key, iv);
}
inline ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::AesManaged::CreateEncryptor() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::AesManaged::CreateEncryptor(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*>(this, ___internal_method, key, iv);
}
inline void System::Security::Cryptography::AesManaged::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Security::Cryptography::AesManaged::GenerateIV() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::AesManaged::GenerateKey() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesManaged*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::AesManaged* System::Security::Cryptography::AesManaged::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::AesManaged*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::AesManaged::AesManaged() {}
