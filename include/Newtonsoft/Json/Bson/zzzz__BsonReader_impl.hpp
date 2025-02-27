#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonReader.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonType_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_impl.hpp"
#include "System/zzzz__DateTimeKind_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonReader_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonBinaryType_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonReader_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__DateTimeKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState::BsonReader_BsonReaderState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState::BsonReader_BsonReaderState() {}
constexpr ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState Newtonsoft::Json::Bson::BsonReader_BsonReaderState::Normal{ static_cast<int32_t>(0x0) };
constexpr ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState Newtonsoft::Json::Bson::BsonReader_BsonReaderState::ReferenceStart{ static_cast<int32_t>(0x1) };
constexpr ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState Newtonsoft::Json::Bson::BsonReader_BsonReaderState::ReferenceRef{ static_cast<int32_t>(0x2) };
constexpr ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState Newtonsoft::Json::Bson::BsonReader_BsonReaderState::ReferenceId{ static_cast<int32_t>(0x3) };
constexpr ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState Newtonsoft::Json::Bson::BsonReader_BsonReaderState::CodeWScopeStart{ static_cast<int32_t>(0x4) };
constexpr ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState Newtonsoft::Json::Bson::BsonReader_BsonReaderState::CodeWScopeCode{ static_cast<int32_t>(0x5) };
constexpr ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState Newtonsoft::Json::Bson::BsonReader_BsonReaderState::CodeWScopeScope{ static_cast<int32_t>(0x6) };
constexpr ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState Newtonsoft::Json::Bson::BsonReader_BsonReaderState::CodeWScopeScopeObject{ static_cast<int32_t>(0x7) };
constexpr ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState Newtonsoft::Json::Bson::BsonReader_BsonReaderState::CodeWScopeScopeEnd{ static_cast<int32_t>(0x8) };
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader_ContainerContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonReader_ContainerContext::*)(::Newtonsoft::Json::Bson::BsonType)>(
    &::Newtonsoft::Json::Bson::BsonReader_ContainerContext::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3f5f528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader_ContainerContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonType>::get() })));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Bson::BsonType& Newtonsoft::Json::Bson::BsonReader_ContainerContext::__cordl_internal_get_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr ::Newtonsoft::Json::Bson::BsonType const& Newtonsoft::Json::Bson::BsonReader_ContainerContext::__cordl_internal_get_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr void Newtonsoft::Json::Bson::BsonReader_ContainerContext::__cordl_internal_set_Type(::Newtonsoft::Json::Bson::BsonType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Type = value;
}
constexpr int32_t& Newtonsoft::Json::Bson::BsonReader_ContainerContext::__cordl_internal_get_Length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Length;
}
constexpr int32_t const& Newtonsoft::Json::Bson::BsonReader_ContainerContext::__cordl_internal_get_Length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Length;
}
constexpr void Newtonsoft::Json::Bson::BsonReader_ContainerContext::__cordl_internal_set_Length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Length = value;
}
constexpr int32_t& Newtonsoft::Json::Bson::BsonReader_ContainerContext::__cordl_internal_get_Position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Position;
}
constexpr int32_t const& Newtonsoft::Json::Bson::BsonReader_ContainerContext::__cordl_internal_get_Position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Position;
}
constexpr void Newtonsoft::Json::Bson::BsonReader_ContainerContext::__cordl_internal_set_Position(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Position = value;
}
inline void Newtonsoft::Json::Bson::BsonReader_ContainerContext::_ctor(::Newtonsoft::Json::Bson::BsonType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader_ContainerContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline ::Newtonsoft::Json::Bson::BsonReader_ContainerContext* Newtonsoft::Json::Bson::BsonReader_ContainerContext::New_ctor(::Newtonsoft::Json::Bson::BsonType type) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Bson::BsonReader_ContainerContext*>(type));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Bson::BsonReader_ContainerContext::BsonReader_ContainerContext() {}
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.get_JsonNet35BinaryCompatibility
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Bson::BsonReader::*)()>(
    &::Newtonsoft::Json::Bson::BsonReader::get_JsonNet35BinaryCompatibility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3f5e840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "get_JsonNet35BinaryCompatibility",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.set_JsonNet35BinaryCompatibility
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonReader::*)(bool)>(
    &::Newtonsoft::Json::Bson::BsonReader::set_JsonNet35BinaryCompatibility)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3f5e848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "set_JsonNet35BinaryCompatibility",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.get_ReadRootValueAsArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::get_ReadRootValueAsArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3f5e854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(),
                                                                               "get_ReadRootValueAsArray", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.set_ReadRootValueAsArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonReader::*)(bool)>(
    &::Newtonsoft::Json::Bson::BsonReader::set_ReadRootValueAsArray)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3f5e85c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "set_ReadRootValueAsArray",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.get_DateTimeKindHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTimeKind (::Newtonsoft::Json::Bson::BsonReader::*)()>(
    &::Newtonsoft::Json::Bson::BsonReader::get_DateTimeKindHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3f5e868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(),
                                                                               "get_DateTimeKindHandling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.set_DateTimeKindHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonReader::*)(::System::DateTimeKind)>(
    &::Newtonsoft::Json::Bson::BsonReader::set_DateTimeKindHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3f5e870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "set_DateTimeKindHandling", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTimeKind>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonReader::*)(::System::IO::Stream*)>(
    &::Newtonsoft::Json::Bson::BsonReader::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3f5e878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonReader::*)(::System::IO::BinaryReader*)>(
    &::Newtonsoft::Json::Bson::BsonReader::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3f5e980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::BinaryReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonReader::*)(::System::IO::Stream*, bool, ::System::DateTimeKind)>(
    &::Newtonsoft::Json::Bson::BsonReader::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3f5e884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTimeKind>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonReader::*)(::System::IO::BinaryReader*, bool, ::System::DateTimeKind)>(
    &::Newtonsoft::Json::Bson::BsonReader::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3f5e98c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::BinaryReader*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTimeKind>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.ReadElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::ReadElement)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3f5ea5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "ReadElement",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::Read)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x3f5ed30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::Close)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3f5f460;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.ReadCodeWScope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::ReadCodeWScope)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x3f5f284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "ReadCodeWScope",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.ReadReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::ReadReference)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x3f5f0cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "ReadReference",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.ReadNormal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::ReadNormal)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x3f5eed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "ReadNormal",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.PopContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::PopContext)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3f5fbcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "PopContext",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.PushContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonReader::*)(::Newtonsoft::Json::Bson::BsonReader_ContainerContext*)>(
    &::Newtonsoft::Json::Bson::BsonReader::PushContext)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3f5f550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "PushContext", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonReader_ContainerContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.ReadByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::ReadByte)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3f5fb98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "ReadByte",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.ReadType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonReader::*)(::Newtonsoft::Json::Bson::BsonType)>(
    &::Newtonsoft::Json::Bson::BsonReader::ReadType)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x3f5f62c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "ReadType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.ReadBinary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Newtonsoft::Json::Bson::BsonReader::*)(::ByRef<::Newtonsoft::Json::Bson::BsonBinaryType>)>(&::Newtonsoft::Json::Bson::BsonReader::ReadBinary)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3f5fccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "ReadBinary", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Newtonsoft::Json::Bson::BsonBinaryType>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.ReadString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::ReadString)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x3f5eaac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "ReadString",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.ReadLengthString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::ReadLengthString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3f5f4d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "ReadLengthString",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.GetString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Bson::BsonReader::*)(int32_t)>(&::Newtonsoft::Json::Bson::BsonReader::GetString)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x3f5fe94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "GetString", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.GetLastFullCharStop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Newtonsoft::Json::Bson::BsonReader::*)(int32_t)>(
    &::Newtonsoft::Json::Bson::BsonReader::GetLastFullCharStop)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3f5fe08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "GetLastFullCharStop",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.BytesInSequence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Newtonsoft::Json::Bson::BsonReader::*)(uint8_t)>(&::Newtonsoft::Json::Bson::BsonReader::BytesInSequence)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x3f60100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "BytesInSequence", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.EnsureBuffers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::EnsureBuffers)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3f5fd5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "EnsureBuffers",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.ReadDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::ReadDouble)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3f5fc94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "ReadDouble",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.ReadInt32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::ReadInt32)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3f5f498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "ReadInt32",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.ReadInt64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Newtonsoft::Json::Bson::BsonReader::*)()>(&::Newtonsoft::Json::Bson::BsonReader::ReadInt64)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3f5fd24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "ReadInt64",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.ReadType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Bson::BsonType (::Newtonsoft::Json::Bson::BsonReader::*)()>(
    &::Newtonsoft::Json::Bson::BsonReader::ReadType)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3f5ea78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "ReadType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.MovePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonReader::*)(int32_t)>(&::Newtonsoft::Json::Bson::BsonReader::MovePosition)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3f5fc70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "MovePosition", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonReader.ReadBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Newtonsoft::Json::Bson::BsonReader::*)(int32_t)>(
    &::Newtonsoft::Json::Bson::BsonReader::ReadBytes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3f5f5f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "ReadBytes", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::IO::BinaryReader*& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reader;
}
constexpr ::System::IO::BinaryReader* const& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reader;
}
constexpr void Newtonsoft::Json::Bson::BsonReader::__cordl_internal_set__reader(::System::IO::BinaryReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonReader_ContainerContext*>*& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stack;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonReader_ContainerContext*>* const& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stack;
}
constexpr void Newtonsoft::Json::Bson::BsonReader::__cordl_internal_set__stack(::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonReader_ContainerContext*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__byteBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____byteBuffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__byteBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____byteBuffer;
}
constexpr void Newtonsoft::Json::Bson::BsonReader::__cordl_internal_set__byteBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____byteBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__charBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charBuffer;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__charBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____charBuffer;
}
constexpr void Newtonsoft::Json::Bson::BsonReader::__cordl_internal_set__charBuffer(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____charBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::Bson::BsonType& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__currentElementType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentElementType;
}
constexpr ::Newtonsoft::Json::Bson::BsonType const& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__currentElementType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentElementType;
}
constexpr void Newtonsoft::Json::Bson::BsonReader::__cordl_internal_set__currentElementType(::Newtonsoft::Json::Bson::BsonType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentElementType = value;
}
constexpr ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__bsonReaderState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bsonReaderState;
}
constexpr ::Newtonsoft::Json::Bson::BsonReader_BsonReaderState const& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__bsonReaderState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bsonReaderState;
}
constexpr void Newtonsoft::Json::Bson::BsonReader::__cordl_internal_set__bsonReaderState(::Newtonsoft::Json::Bson::BsonReader_BsonReaderState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bsonReaderState = value;
}
constexpr ::Newtonsoft::Json::Bson::BsonReader_ContainerContext*& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__currentContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentContext;
}
constexpr ::Newtonsoft::Json::Bson::BsonReader_ContainerContext* const& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__currentContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentContext;
}
constexpr void Newtonsoft::Json::Bson::BsonReader::__cordl_internal_set__currentContext(::Newtonsoft::Json::Bson::BsonReader_ContainerContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__readRootValueAsArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readRootValueAsArray;
}
constexpr bool const& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__readRootValueAsArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readRootValueAsArray;
}
constexpr void Newtonsoft::Json::Bson::BsonReader::__cordl_internal_set__readRootValueAsArray(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____readRootValueAsArray = value;
}
constexpr bool& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__jsonNet35BinaryCompatibility() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jsonNet35BinaryCompatibility;
}
constexpr bool const& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__jsonNet35BinaryCompatibility() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jsonNet35BinaryCompatibility;
}
constexpr void Newtonsoft::Json::Bson::BsonReader::__cordl_internal_set__jsonNet35BinaryCompatibility(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jsonNet35BinaryCompatibility = value;
}
constexpr ::System::DateTimeKind& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__dateTimeKindHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateTimeKindHandling;
}
constexpr ::System::DateTimeKind const& Newtonsoft::Json::Bson::BsonReader::__cordl_internal_get__dateTimeKindHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateTimeKindHandling;
}
constexpr void Newtonsoft::Json::Bson::BsonReader::__cordl_internal_set__dateTimeKindHandling(::System::DateTimeKind value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dateTimeKindHandling = value;
}
inline void Newtonsoft::Json::Bson::BsonReader::setStaticF_SeqRange1(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "SeqRange1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Newtonsoft::Json::Bson::BsonReader::getStaticF_SeqRange1() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "SeqRange1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get>();
}
inline void Newtonsoft::Json::Bson::BsonReader::setStaticF_SeqRange2(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "SeqRange2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Newtonsoft::Json::Bson::BsonReader::getStaticF_SeqRange2() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "SeqRange2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get>();
}
inline void Newtonsoft::Json::Bson::BsonReader::setStaticF_SeqRange3(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "SeqRange3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Newtonsoft::Json::Bson::BsonReader::getStaticF_SeqRange3() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "SeqRange3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get>();
}
inline void Newtonsoft::Json::Bson::BsonReader::setStaticF_SeqRange4(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "SeqRange4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Newtonsoft::Json::Bson::BsonReader::getStaticF_SeqRange4() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "SeqRange4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get>();
}
inline bool Newtonsoft::Json::Bson::BsonReader::get_JsonNet35BinaryCompatibility() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(),
                                                                             "get_JsonNet35BinaryCompatibility", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonReader::set_JsonNet35BinaryCompatibility(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "set_JsonNet35BinaryCompatibility",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::Bson::BsonReader::get_ReadRootValueAsArray() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(),
                                                                             "get_ReadRootValueAsArray", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonReader::set_ReadRootValueAsArray(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "set_ReadRootValueAsArray",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::DateTimeKind Newtonsoft::Json::Bson::BsonReader::get_DateTimeKindHandling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(),
                                                                             "get_DateTimeKindHandling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeKind, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonReader::set_DateTimeKindHandling(::System::DateTimeKind value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "set_DateTimeKindHandling", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTimeKind>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonReader::_ctor(::System::IO::Stream* stream) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream);
}
inline void Newtonsoft::Json::Bson::BsonReader::_ctor(::System::IO::BinaryReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::BinaryReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void Newtonsoft::Json::Bson::BsonReader::_ctor(::System::IO::Stream* stream, bool readRootValueAsArray, ::System::DateTimeKind dateTimeKindHandling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTimeKind>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, readRootValueAsArray, dateTimeKindHandling);
}
inline void Newtonsoft::Json::Bson::BsonReader::_ctor(::System::IO::BinaryReader* reader, bool readRootValueAsArray, ::System::DateTimeKind dateTimeKindHandling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::BinaryReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTimeKind>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, readRootValueAsArray, dateTimeKindHandling);
}
inline ::StringW Newtonsoft::Json::Bson::BsonReader::ReadElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "ReadElement",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Bson::BsonReader::Read() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonReader::Close() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Bson::BsonReader::ReadCodeWScope() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "ReadCodeWScope",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Bson::BsonReader::ReadReference() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "ReadReference",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Bson::BsonReader::ReadNormal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "ReadNormal",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonReader::PopContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "PopContext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonReader::PushContext(::Newtonsoft::Json::Bson::BsonReader_ContainerContext* newContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "PushContext", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonReader_ContainerContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newContext);
}
inline uint8_t Newtonsoft::Json::Bson::BsonReader::ReadByte() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "ReadByte",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonReader::ReadType(::Newtonsoft::Json::Bson::BsonType type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "ReadType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Newtonsoft::Json::Bson::BsonReader::ReadBinary(::ByRef<::Newtonsoft::Json::Bson::BsonBinaryType> binaryType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "ReadBinary", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Newtonsoft::Json::Bson::BsonBinaryType>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, binaryType);
}
inline ::StringW Newtonsoft::Json::Bson::BsonReader::ReadString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "ReadString",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Bson::BsonReader::ReadLengthString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "ReadLengthString",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Bson::BsonReader::GetString(int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "GetString",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, length);
}
inline int32_t Newtonsoft::Json::Bson::BsonReader::GetLastFullCharStop(int32_t start) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "GetLastFullCharStop",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, start);
}
inline int32_t Newtonsoft::Json::Bson::BsonReader::BytesInSequence(uint8_t b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "BytesInSequence",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, b);
}
inline void Newtonsoft::Json::Bson::BsonReader::EnsureBuffers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "EnsureBuffers",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline double_t Newtonsoft::Json::Bson::BsonReader::ReadDouble() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "ReadDouble",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::Bson::BsonReader::ReadInt32() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "ReadInt32",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int64_t Newtonsoft::Json::Bson::BsonReader::ReadInt64() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "ReadInt64",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Bson::BsonType Newtonsoft::Json::Bson::BsonReader::ReadType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "ReadType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Bson::BsonType, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonReader::MovePosition(int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "MovePosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, count);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Newtonsoft::Json::Bson::BsonReader::ReadBytes(int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonReader*>::get(), "ReadBytes",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, count);
}
inline ::Newtonsoft::Json::Bson::BsonReader* Newtonsoft::Json::Bson::BsonReader::New_ctor(::System::IO::Stream* stream) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Bson::BsonReader*>(stream));
}
inline ::Newtonsoft::Json::Bson::BsonReader* Newtonsoft::Json::Bson::BsonReader::New_ctor(::System::IO::BinaryReader* reader) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Bson::BsonReader*>(reader));
}
inline ::Newtonsoft::Json::Bson::BsonReader* Newtonsoft::Json::Bson::BsonReader::New_ctor(::System::IO::Stream* stream, bool readRootValueAsArray, ::System::DateTimeKind dateTimeKindHandling) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Bson::BsonReader*>(stream, readRootValueAsArray, dateTimeKindHandling));
}
inline ::Newtonsoft::Json::Bson::BsonReader* Newtonsoft::Json::Bson::BsonReader::New_ctor(::System::IO::BinaryReader* reader, bool readRootValueAsArray, ::System::DateTimeKind dateTimeKindHandling) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Bson::BsonReader*>(reader, readRootValueAsArray, dateTimeKindHandling));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Bson::BsonReader::BsonReader() {}
