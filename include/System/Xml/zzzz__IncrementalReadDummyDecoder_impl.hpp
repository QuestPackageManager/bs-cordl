#pragma once
// IWYU pragma private; include "System/Xml/IncrementalReadDummyDecoder.hpp"
#include "System/Xml/zzzz__IncrementalReadDecoder_impl.hpp"
#include "System/Xml/zzzz__IncrementalReadDummyDecoder_def.hpp"
#include "System/zzzz__Array_def.hpp"
//  Writing Method size for method: ::System::Xml::IncrementalReadDummyDecoder.get_DecodedCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::IncrementalReadDummyDecoder::*)()>(&::System::Xml::IncrementalReadDummyDecoder::get_DecodedCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ac2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IncrementalReadDummyDecoder*>(), { ::i2c::class_of<::System::Xml::IncrementalReadDummyDecoder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IncrementalReadDummyDecoder.get_IsFull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::IncrementalReadDummyDecoder::*)()>(&::System::Xml::IncrementalReadDummyDecoder::get_IsFull)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ac2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IncrementalReadDummyDecoder*>(), { ::i2c::class_of<::System::Xml::IncrementalReadDummyDecoder*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IncrementalReadDummyDecoder.SetNextOutputBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::IncrementalReadDummyDecoder::*)(::System::Array*, int32_t, int32_t)>(
    &::System::Xml::IncrementalReadDummyDecoder::SetNextOutputBuffer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61ac2e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IncrementalReadDummyDecoder*>(), { ::i2c::class_of<::System::Xml::IncrementalReadDummyDecoder*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IncrementalReadDummyDecoder.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::IncrementalReadDummyDecoder::*)(::ArrayW<char16_t>, int32_t, int32_t)>(
    &::System::Xml::IncrementalReadDummyDecoder::Decode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ac2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IncrementalReadDummyDecoder*>(), { ::i2c::class_of<::System::Xml::IncrementalReadDummyDecoder*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IncrementalReadDummyDecoder.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::IncrementalReadDummyDecoder::*)(::StringW, int32_t, int32_t)>(&::System::Xml::IncrementalReadDummyDecoder::Decode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ac2ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IncrementalReadDummyDecoder*>(), { ::i2c::class_of<::System::Xml::IncrementalReadDummyDecoder*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IncrementalReadDummyDecoder.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::IncrementalReadDummyDecoder::*)()>(&::System::Xml::IncrementalReadDummyDecoder::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61ac2f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IncrementalReadDummyDecoder*>(), { ::i2c::class_of<::System::Xml::IncrementalReadDummyDecoder*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::IncrementalReadDummyDecoder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::IncrementalReadDummyDecoder::*)()>(&::System::Xml::IncrementalReadDummyDecoder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61ac2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::IncrementalReadDummyDecoder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t System::Xml::IncrementalReadDummyDecoder::get_DecodedCount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IncrementalReadDummyDecoder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Xml::IncrementalReadDummyDecoder::get_IsFull() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IncrementalReadDummyDecoder*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::IncrementalReadDummyDecoder::SetNextOutputBuffer(::System::Array* array, int32_t offset, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IncrementalReadDummyDecoder*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, offset, len);
}
inline int32_t System::Xml::IncrementalReadDummyDecoder::Decode(::ArrayW<char16_t> chars, int32_t startPos, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IncrementalReadDummyDecoder*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, startPos, len);
}
inline int32_t System::Xml::IncrementalReadDummyDecoder::Decode(::StringW str, int32_t startPos, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IncrementalReadDummyDecoder*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, str, startPos, len);
}
inline void System::Xml::IncrementalReadDummyDecoder::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IncrementalReadDummyDecoder*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::IncrementalReadDummyDecoder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::IncrementalReadDummyDecoder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::IncrementalReadDummyDecoder* System::Xml::IncrementalReadDummyDecoder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::IncrementalReadDummyDecoder*>());
}
// Ctor Parameters []
constexpr ::System::Xml::IncrementalReadDummyDecoder::IncrementalReadDummyDecoder() {}
