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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsProcessableFile::*)(::System::IO::FileInfo*)>(
    &::Org::BouncyCastle::Cms::CmsProcessableFile::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x144899c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableFile._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsProcessableFile::*)(::System::IO::FileInfo*, int32_t)>(
    &::Org::BouncyCastle::Cms::CmsProcessableFile::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x14489cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableFile.GetInputStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Cms::CmsProcessableFile::*)()>(
    &::Org::BouncyCastle::Cms::CmsProcessableFile::GetInputStream)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x14489fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableFile.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsProcessableFile::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Cms::CmsProcessableFile::Write)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1448a90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsProcessableFile.GetContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::Cms::CmsProcessableFile::*)()>(
    &::Org::BouncyCastle::Cms::CmsProcessableFile::GetContent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1448b14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile*>::get(), 9));
    return ___internal_method;
  }
};
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
constexpr ::System::IO::FileInfo*& Org::BouncyCastle::Cms::CmsProcessableFile::__cordl_internal_get__file() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____file;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::FileInfo*> const& Org::BouncyCastle::Cms::CmsProcessableFile::__cordl_internal_get__file() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____file;
}
constexpr void Org::BouncyCastle::Cms::CmsProcessableFile::__cordl_internal_set__file(::System::IO::FileInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____file)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline ::Org::BouncyCastle::Cms::CmsProcessableFile* Org::BouncyCastle::Cms::CmsProcessableFile::New_ctor(::System::IO::FileInfo* file) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::CmsProcessableFile*>(file));
}
inline void Org::BouncyCastle::Cms::CmsProcessableFile::_ctor(::System::IO::FileInfo* file) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, file);
}
inline ::Org::BouncyCastle::Cms::CmsProcessableFile* Org::BouncyCastle::Cms::CmsProcessableFile::New_ctor(::System::IO::FileInfo* file, int32_t bufSize) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::CmsProcessableFile*>(file, bufSize));
}
inline void Org::BouncyCastle::Cms::CmsProcessableFile::_ctor(::System::IO::FileInfo* file, int32_t bufSize) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, file, bufSize);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsProcessableFile::GetInputStream() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::CmsProcessableFile::Write(::System::IO::Stream* zOut) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, zOut);
}
inline ::System::Object* Org::BouncyCastle::Cms::CmsProcessableFile::GetContent() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsProcessableFile*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsProcessableFile::CmsProcessableFile() {}
