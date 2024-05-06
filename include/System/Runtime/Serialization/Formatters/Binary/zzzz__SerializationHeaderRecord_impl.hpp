#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/SerializationHeaderRecord.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryHeaderEnum_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerializationHeaderRecord_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryHeaderEnum_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryParser_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryWriter_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28425a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::*)(
    ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum, int32_t, int32_t, int32_t, int32_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x28425b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::*)(
    ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(&::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::Write)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x284260c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*>::get(), "Write",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord.GetInt32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::GetInt32)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x28426bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*>::get(),
                                                 "GetInt32", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::*)(
    ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*)>(&::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::Read)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2842730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*>::get(), "Read",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord.Dump
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::Dump)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2842894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*>::get(),
                                                 "Dump", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_get_binaryFormatterMajorVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryFormatterMajorVersion;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_get_binaryFormatterMajorVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryFormatterMajorVersion;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_set_binaryFormatterMajorVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binaryFormatterMajorVersion = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_get_binaryFormatterMinorVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryFormatterMinorVersion;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_get_binaryFormatterMinorVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryFormatterMinorVersion;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_set_binaryFormatterMinorVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binaryFormatterMinorVersion = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum&
System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_get_binaryHeaderEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryHeaderEnum;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const&
System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_get_binaryHeaderEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryHeaderEnum;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_set_binaryHeaderEnum(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binaryHeaderEnum = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_get_topId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topId;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_get_topId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_set_topId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___topId = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_get_headerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headerId;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_get_headerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headerId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_set_headerId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headerId = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_get_majorVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___majorVersion;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_get_majorVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___majorVersion;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_set_majorVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___majorVersion = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_get_minorVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minorVersion;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_get_minorVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minorVersion;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_set_minorVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minorVersion = value;
}
inline ::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord* System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*>());
}
inline void System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*
System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::New_ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum, int32_t topId,
                                                                                        int32_t headerId, int32_t majorVersion, int32_t minorVersion) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*>(binaryHeaderEnum, topId, headerId, majorVersion, minorVersion));
}
inline void System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::_ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum, int32_t topId,
                                                                                                 int32_t headerId, int32_t majorVersion, int32_t minorVersion) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, binaryHeaderEnum, topId, headerId, majorVersion, minorVersion);
}
inline void System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*>::get(), "Write",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sout);
}
inline int32_t System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::GetInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*>::get(),
                                               "GetInt32", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, buffer, index);
}
inline void System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*>::get(), "Read", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline void System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::Dump() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*>::get(), "Dump",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::SerializationHeaderRecord() {}
