#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsProcessableFile.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessableFile_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsReadable_def.hpp"
#include "System/IO/zzzz__FileInfo_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableFile._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsProcessableFile::*)(::System::IO::FileInfo*)>(&::Org::BouncyCastle::Cms::CmsProcessableFile::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x36ae184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessableFile*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::FileInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableFile._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsProcessableFile::*)(::System::IO::FileInfo*, int32_t)>(
    &::Org::BouncyCastle::Cms::CmsProcessableFile::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x36ae194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessableFile*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::FileInfo*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableFile.GetInputStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Cms::CmsProcessableFile::*)()>(&::Org::BouncyCastle::Cms::CmsProcessableFile::GetInputStream)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x36ae1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessableFile*>(), { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessableFile*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableFile.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsProcessableFile::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Cms::CmsProcessableFile::Write)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x36ae240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessableFile*>(), { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessableFile*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableFile.GetContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::Cms::CmsProcessableFile::*)()>(&::Org::BouncyCastle::Cms::CmsProcessableFile::GetContent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36ae2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessableFile*>(), { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessableFile*>(), 9 }));
    return ___internal_method;
  }
};
constexpr ::System::IO::FileInfo*& Org::BouncyCastle::Cms::CmsProcessableFile::__cordl_internal_get__file() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____file;
}
constexpr ::System::IO::FileInfo* const& Org::BouncyCastle::Cms::CmsProcessableFile::__cordl_internal_get__file() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____file;
}
constexpr void Org::BouncyCastle::Cms::CmsProcessableFile::__cordl_internal_set__file(::System::IO::FileInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____file = value;
}
constexpr int32_t& Org::BouncyCastle::Cms::CmsProcessableFile::__cordl_internal_get__bufSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufSize;
}
constexpr int32_t const& Org::BouncyCastle::Cms::CmsProcessableFile::__cordl_internal_get__bufSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufSize;
}
constexpr void Org::BouncyCastle::Cms::CmsProcessableFile::__cordl_internal_set__bufSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bufSize = value;
}
inline void Org::BouncyCastle::Cms::CmsProcessableFile::_ctor(::System::IO::FileInfo* file) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessableFile*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::FileInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, file);
}
inline void Org::BouncyCastle::Cms::CmsProcessableFile::_ctor(::System::IO::FileInfo* file, int32_t bufSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessableFile*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::FileInfo*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, file, bufSize);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsProcessableFile::GetInputStream() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessableFile*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::CmsProcessableFile::Write(::System::IO::Stream* zOut) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessableFile*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zOut);
}
inline ::System::Object* Org::BouncyCastle::Cms::CmsProcessableFile::GetContent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsProcessableFile*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsProcessableFile* Org::BouncyCastle::Cms::CmsProcessableFile::New_ctor(::System::IO::FileInfo* file) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsProcessableFile*>(file));
}
inline ::Org::BouncyCastle::Cms::CmsProcessableFile* Org::BouncyCastle::Cms::CmsProcessableFile::New_ctor(::System::IO::FileInfo* file, int32_t bufSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsProcessableFile*>(file, bufSize));
}
/// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsProcessable"
constexpr Org::BouncyCastle::Cms::CmsProcessableFile::operator ::Org::BouncyCastle::Cms::CmsProcessable*() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::CmsProcessable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Cms::CmsProcessable"
constexpr ::Org::BouncyCastle::Cms::CmsProcessable* Org::BouncyCastle::Cms::CmsProcessableFile::i___Org__BouncyCastle__Cms__CmsProcessable() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::CmsProcessable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsReadable"
constexpr Org::BouncyCastle::Cms::CmsProcessableFile::operator ::Org::BouncyCastle::Cms::CmsReadable*() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::CmsReadable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Cms::CmsReadable"
constexpr ::Org::BouncyCastle::Cms::CmsReadable* Org::BouncyCastle::Cms::CmsProcessableFile::i___Org__BouncyCastle__Cms__CmsReadable() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::CmsReadable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsProcessableFile::CmsProcessableFile() {}
