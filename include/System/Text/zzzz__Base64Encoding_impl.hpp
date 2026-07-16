#pragma once
// IWYU pragma private; include "System/Text/Base64Encoding.hpp"
#include "System/Text/zzzz__Encoding_impl.hpp"
#include "System/Text/zzzz__Base64Encoding_def.hpp"
//  Writing Method size for method: ::System::Text::Base64Encoding.GetMaxByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::Base64Encoding::*)(int32_t)>(&::System::Text::Base64Encoding::GetMaxByteCount)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x612b600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::Base64Encoding*>(), { ::i2c::class_of<::System::Text::Base64Encoding*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Base64Encoding.IsValidLeadBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::Base64Encoding::*)(int32_t, int32_t, int32_t, int32_t)>(&::System::Text::Base64Encoding::IsValidLeadBytes)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x612b720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::Base64Encoding*>(),
                                                { "IsValidLeadBytes", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Base64Encoding.IsValidTailBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::Base64Encoding::*)(int32_t, int32_t)>(&::System::Text::Base64Encoding::IsValidTailBytes)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x612b73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::Base64Encoding*>(), { "IsValidTailBytes", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Base64Encoding.GetByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::Base64Encoding::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Text::Base64Encoding::GetByteCount)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x612b750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::Base64Encoding*>(), { ::i2c::class_of<::System::Text::Base64Encoding*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Base64Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::Base64Encoding::*)(::ArrayW<char16_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::System::Text::Base64Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x62c;
  constexpr static std::size_t addrs = 0x612bbec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::Base64Encoding*>(), { ::i2c::class_of<::System::Text::Base64Encoding*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Base64Encoding.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::Base64Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::System::Text::Base64Encoding::GetBytes)> {
  constexpr static std::size_t size = 0x614;
  constexpr static std::size_t addrs = 0x612c218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::Base64Encoding*>(), { ::i2c::class_of<::System::Text::Base64Encoding*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Base64Encoding.GetMaxCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::Base64Encoding::*)(int32_t)>(&::System::Text::Base64Encoding::GetMaxCharCount)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x612c82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::Base64Encoding*>(), { ::i2c::class_of<::System::Text::Base64Encoding*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Base64Encoding.GetCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::Base64Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Text::Base64Encoding::GetCharCount)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x612c960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::Base64Encoding*>(), { ::i2c::class_of<::System::Text::Base64Encoding*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Base64Encoding.GetChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::Base64Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t)>(
    &::System::Text::Base64Encoding::GetChars)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x612c974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::Base64Encoding*>(), { ::i2c::class_of<::System::Text::Base64Encoding*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Base64Encoding.GetChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::Base64Encoding::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::System::Text::Base64Encoding::GetChars)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x6129958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Text::Base64Encoding*>(),
            { "GetChars", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Base64Encoding._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::Base64Encoding::*)()>(&::System::Text::Base64Encoding::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x612ce70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::Base64Encoding*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Text::Base64Encoding::setStaticF_char2val(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "char2val", ::System::Text::Base64Encoding*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Text::Base64Encoding::getStaticF_char2val() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "char2val", ::System::Text::Base64Encoding*>();
}
inline void System::Text::Base64Encoding::setStaticF_val2char(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "val2char", ::System::Text::Base64Encoding*>(std::forward<::StringW>(value));
}
inline ::StringW System::Text::Base64Encoding::getStaticF_val2char() {
  return ::cordl_internals::getStaticField<::StringW, "val2char", ::System::Text::Base64Encoding*>();
}
inline void System::Text::Base64Encoding::setStaticF_val2byte(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "val2byte", ::System::Text::Base64Encoding*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Text::Base64Encoding::getStaticF_val2byte() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "val2byte", ::System::Text::Base64Encoding*>();
}
inline int32_t System::Text::Base64Encoding::GetMaxByteCount(int32_t charCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::Base64Encoding*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, charCount);
}
inline bool System::Text::Base64Encoding::IsValidLeadBytes(int32_t v1, int32_t v2, int32_t v3, int32_t v4) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::Base64Encoding*>(),
                                              { "IsValidLeadBytes", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, v1, v2, v3, v4);
}
inline bool System::Text::Base64Encoding::IsValidTailBytes(int32_t v3, int32_t v4) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::Base64Encoding*>(), { "IsValidTailBytes", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, v3, v4);
}
inline int32_t System::Text::Base64Encoding::GetByteCount(::ArrayW<char16_t> chars, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::Base64Encoding*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, index, count);
}
inline int32_t System::Text::Base64Encoding::GetBytes(::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::Base64Encoding*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, charIndex, charCount, bytes, byteIndex);
}
inline int32_t System::Text::Base64Encoding::GetBytes(::ArrayW<uint8_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::Base64Encoding*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, charIndex, charCount, bytes, byteIndex);
}
inline int32_t System::Text::Base64Encoding::GetMaxCharCount(int32_t byteCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::Base64Encoding*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, byteCount);
}
inline int32_t System::Text::Base64Encoding::GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::Base64Encoding*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, index, count);
}
inline int32_t System::Text::Base64Encoding::GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::Base64Encoding*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, byteIndex, byteCount, chars, charIndex);
}
inline int32_t System::Text::Base64Encoding::GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<uint8_t> chars, int32_t charIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Text::Base64Encoding*>(),
          { "GetChars", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bytes, byteIndex, byteCount, chars, charIndex);
}
inline void System::Text::Base64Encoding::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::Base64Encoding*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::Base64Encoding* System::Text::Base64Encoding::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::Base64Encoding*>());
}
// Ctor Parameters []
constexpr ::System::Text::Base64Encoding::Base64Encoding() {}
