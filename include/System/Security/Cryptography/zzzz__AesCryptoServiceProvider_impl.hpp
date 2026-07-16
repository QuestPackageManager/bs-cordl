#pragma once
// IWYU pragma private; include "System/Security/Cryptography/AesCryptoServiceProvider.hpp"
#include "System/Security/Cryptography/zzzz__Aes_impl.hpp"
#include "System/Security/Cryptography/zzzz__AesCryptoServiceProvider_def.hpp"
#include "System/Security/Cryptography/zzzz__CipherMode_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
#include "System/Security/Cryptography/zzzz__PaddingMode_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesCryptoServiceProvider::*)()>(&::System::Security::Cryptography::AesCryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f52d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.GenerateIV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesCryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::AesCryptoServiceProvider::GenerateIV)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f52db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.GenerateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesCryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::AesCryptoServiceProvider::GenerateKey)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f52ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.CreateDecryptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::ICryptoTransform* (
    ::System::Security::Cryptography::AesCryptoServiceProvider::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::AesCryptoServiceProvider::CreateDecryptor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5f52e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.CreateEncryptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::ICryptoTransform* (
    ::System::Security::Cryptography::AesCryptoServiceProvider::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::AesCryptoServiceProvider::CreateEncryptor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5f535a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.get_IV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::AesCryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::AesCryptoServiceProvider::get_IV)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f53694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.set_IV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesCryptoServiceProvider::*)(::ArrayW<uint8_t>)>(
    &::System::Security::Cryptography::AesCryptoServiceProvider::set_IV)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5369c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.get_Key
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::AesCryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::AesCryptoServiceProvider::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f536a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.set_Key
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesCryptoServiceProvider::*)(::ArrayW<uint8_t>)>(
    &::System::Security::Cryptography::AesCryptoServiceProvider::set_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f536ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.get_KeySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::AesCryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::AesCryptoServiceProvider::get_KeySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f536b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.set_KeySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesCryptoServiceProvider::*)(int32_t)>(
    &::System::Security::Cryptography::AesCryptoServiceProvider::set_KeySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f536bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.get_FeedbackSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::AesCryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::AesCryptoServiceProvider::get_FeedbackSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f536c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.get_Mode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::CipherMode (::System::Security::Cryptography::AesCryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::AesCryptoServiceProvider::get_Mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f536cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.set_Mode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesCryptoServiceProvider::*)(::System::Security::Cryptography::CipherMode)>(
    &::System::Security::Cryptography::AesCryptoServiceProvider::set_Mode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f536d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.get_Padding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::PaddingMode (::System::Security::Cryptography::AesCryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::AesCryptoServiceProvider::get_Padding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f53730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.set_Padding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesCryptoServiceProvider::*)(::System::Security::Cryptography::PaddingMode)>(
    &::System::Security::Cryptography::AesCryptoServiceProvider::set_Padding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f53738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.CreateDecryptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::ICryptoTransform* (::System::Security::Cryptography::AesCryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::AesCryptoServiceProvider::CreateDecryptor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f53740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.CreateEncryptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::ICryptoTransform* (::System::Security::Cryptography::AesCryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::AesCryptoServiceProvider::CreateEncryptor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f53790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AesCryptoServiceProvider.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AesCryptoServiceProvider::*)(bool)>(
    &::System::Security::Cryptography::AesCryptoServiceProvider::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f537e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 5 }));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::AesCryptoServiceProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::AesCryptoServiceProvider::GenerateIV() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::AesCryptoServiceProvider::GenerateKey() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::AesCryptoServiceProvider::CreateDecryptor(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*>(this, ___internal_method, key, iv);
}
inline ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::AesCryptoServiceProvider::CreateEncryptor(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*>(this, ___internal_method, key, iv);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::AesCryptoServiceProvider::get_IV() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Security::Cryptography::AesCryptoServiceProvider::set_IV(::ArrayW<uint8_t> value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::AesCryptoServiceProvider::get_Key() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Security::Cryptography::AesCryptoServiceProvider::set_Key(::ArrayW<uint8_t> value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Security::Cryptography::AesCryptoServiceProvider::get_KeySize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Security::Cryptography::AesCryptoServiceProvider::set_KeySize(int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Security::Cryptography::AesCryptoServiceProvider::get_FeedbackSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Security::Cryptography::CipherMode System::Security::Cryptography::AesCryptoServiceProvider::get_Mode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::CipherMode>(this, ___internal_method);
}
inline void System::Security::Cryptography::AesCryptoServiceProvider::set_Mode(::System::Security::Cryptography::CipherMode value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::PaddingMode System::Security::Cryptography::AesCryptoServiceProvider::get_Padding() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::PaddingMode>(this, ___internal_method);
}
inline void System::Security::Cryptography::AesCryptoServiceProvider::set_Padding(::System::Security::Cryptography::PaddingMode value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::AesCryptoServiceProvider::CreateDecryptor() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::AesCryptoServiceProvider::CreateEncryptor() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*>(this, ___internal_method);
}
inline void System::Security::Cryptography::AesCryptoServiceProvider::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AesCryptoServiceProvider*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::Security::Cryptography::AesCryptoServiceProvider* System::Security::Cryptography::AesCryptoServiceProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::AesCryptoServiceProvider*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::AesCryptoServiceProvider::AesCryptoServiceProvider() {}
