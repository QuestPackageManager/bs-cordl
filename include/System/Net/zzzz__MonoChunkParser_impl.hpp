#pragma once
#include "System/Net/zzzz__MonoChunkParser_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__MonoChunkParser_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Net/zzzz__MonoChunkParser_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::__MonoChunkParser__State::__MonoChunkParser__State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::__MonoChunkParser__State::__MonoChunkParser__State() {}
constexpr ::System::Net::__MonoChunkParser__State System::Net::__MonoChunkParser__State::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::__MonoChunkParser__State System::Net::__MonoChunkParser__State::PartialSize{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::__MonoChunkParser__State System::Net::__MonoChunkParser__State::Body{ static_cast<int32_t>(0x2) };
constexpr ::System::Net::__MonoChunkParser__State System::Net::__MonoChunkParser__State::BodyFinished{ static_cast<int32_t>(0x3) };
constexpr ::System::Net::__MonoChunkParser__State System::Net::__MonoChunkParser__State::Trailer{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::System::Net::__MonoChunkParser__Chunk._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__MonoChunkParser__Chunk::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::Net::__MonoChunkParser__Chunk::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x29d48bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__MonoChunkParser__Chunk*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__MonoChunkParser__Chunk.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::__MonoChunkParser__Chunk::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Net::__MonoChunkParser__Chunk::Read)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x29d3dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__MonoChunkParser__Chunk*>::get(), "Read", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Net::__MonoChunkParser__Chunk::__get_Bytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Bytes;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Net::__MonoChunkParser__Chunk::__get_Bytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Bytes;
}
constexpr void System::Net::__MonoChunkParser__Chunk::__set_Bytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Bytes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Net::__MonoChunkParser__Chunk::__get_Offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Offset;
}
constexpr int32_t const& System::Net::__MonoChunkParser__Chunk::__get_Offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Offset;
}
constexpr void System::Net::__MonoChunkParser__Chunk::__set_Offset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Offset = value;
}
inline ::System::Net::__MonoChunkParser__Chunk* System::Net::__MonoChunkParser__Chunk::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> chunk) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::__MonoChunkParser__Chunk*>(chunk));
}
inline void System::Net::__MonoChunkParser__Chunk::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> chunk) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__MonoChunkParser__Chunk*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, chunk);
}
inline int32_t System::Net::__MonoChunkParser__Chunk::Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__MonoChunkParser__Chunk*>::get(), "Read", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, size);
}
// Ctor Parameters []
constexpr ::System::Net::__MonoChunkParser__Chunk::__MonoChunkParser__Chunk() {}
//  Writing Method size for method: ::System::Net::MonoChunkParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::MonoChunkParser::*)(::System::Net::WebHeaderCollection*)>(
    &::System::Net::MonoChunkParser::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x29d39ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebHeaderCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::MonoChunkParser::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Net::MonoChunkParser::Read)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29d3aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser*>::get(), "Read", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.ReadFromChunks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::MonoChunkParser::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Net::MonoChunkParser::ReadFromChunks)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x29d3aa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser*>::get(), "ReadFromChunks", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::MonoChunkParser::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Net::MonoChunkParser::Write)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x29d3e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser*>::get(), "Write", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.InternalWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::MonoChunkParser::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ByRef<int32_t>, int32_t)>(
    &::System::Net::MonoChunkParser::InternalWrite)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x29d3e40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser*>::get(), "InternalWrite", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.get_WantMore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::MonoChunkParser::*)()>(&::System::Net::MonoChunkParser::get_WantMore)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x29d4788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser*>::get(), "get_WantMore",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.get_DataAvailable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::MonoChunkParser::*)()>(&::System::Net::MonoChunkParser::get_DataAvailable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x29d47b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser*>::get(), "get_DataAvailable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.get_ChunkLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::MonoChunkParser::*)()>(&::System::Net::MonoChunkParser::get_ChunkLeft)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29d48b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser*>::get(), "get_ChunkLeft",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.ReadBody
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::__MonoChunkParser__State (::System::Net::MonoChunkParser::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ByRef<int32_t>, int32_t)>(&::System::Net::MonoChunkParser::ReadBody)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x29d4284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser*>::get(), "ReadBody", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.GetChunkSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::__MonoChunkParser__State (::System::Net::MonoChunkParser::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ByRef<int32_t>, int32_t)>(&::System::Net::MonoChunkParser::GetChunkSize)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x29d3f7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser*>::get(), "GetChunkSize", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.RemoveChunkExtension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Net::MonoChunkParser::RemoveChunkExtension)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x29d493c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser*>::get(), "RemoveChunkExtension", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.ReadCRLF
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::__MonoChunkParser__State (::System::Net::MonoChunkParser::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ByRef<int32_t>, int32_t)>(&::System::Net::MonoChunkParser::ReadCRLF)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x29d43bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser*>::get(), "ReadCRLF", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.ReadTrailer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::__MonoChunkParser__State (::System::Net::MonoChunkParser::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ByRef<int32_t>, int32_t)>(&::System::Net::MonoChunkParser::ReadTrailer)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x29d44bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser*>::get(), "ReadTrailer", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.ThrowProtocolViolation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::System::Net::MonoChunkParser::ThrowProtocolViolation)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x29d48e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser*>::get(), "ThrowProtocolViolation", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebHeaderCollection*& System::Net::MonoChunkParser::__get_headers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::WebHeaderCollection*> const& System::Net::MonoChunkParser::__get_headers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr void System::Net::MonoChunkParser::__set_headers(::System::Net::WebHeaderCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___headers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Net::MonoChunkParser::__get_chunkSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunkSize;
}
constexpr int32_t const& System::Net::MonoChunkParser::__get_chunkSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunkSize;
}
constexpr void System::Net::MonoChunkParser::__set_chunkSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chunkSize = value;
}
constexpr int32_t& System::Net::MonoChunkParser::__get_chunkRead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunkRead;
}
constexpr int32_t const& System::Net::MonoChunkParser::__get_chunkRead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunkRead;
}
constexpr void System::Net::MonoChunkParser::__set_chunkRead(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chunkRead = value;
}
constexpr int32_t& System::Net::MonoChunkParser::__get_totalWritten() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalWritten;
}
constexpr int32_t const& System::Net::MonoChunkParser::__get_totalWritten() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalWritten;
}
constexpr void System::Net::MonoChunkParser::__set_totalWritten(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___totalWritten = value;
}
constexpr ::System::Net::__MonoChunkParser__State& System::Net::MonoChunkParser::__get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr ::System::Net::__MonoChunkParser__State const& System::Net::MonoChunkParser::__get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr void System::Net::MonoChunkParser::__set_state(::System::Net::__MonoChunkParser__State value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___state = value;
}
constexpr ::System::Text::StringBuilder*& System::Net::MonoChunkParser::__get_saved() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saved;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& System::Net::MonoChunkParser::__get_saved() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saved;
}
constexpr void System::Net::MonoChunkParser::__set_saved(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___saved)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::MonoChunkParser::__get_sawCR() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sawCR;
}
constexpr bool const& System::Net::MonoChunkParser::__get_sawCR() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sawCR;
}
constexpr void System::Net::MonoChunkParser::__set_sawCR(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sawCR = value;
}
constexpr bool& System::Net::MonoChunkParser::__get_gotit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gotit;
}
constexpr bool const& System::Net::MonoChunkParser::__get_gotit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gotit;
}
constexpr void System::Net::MonoChunkParser::__set_gotit(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gotit = value;
}
constexpr int32_t& System::Net::MonoChunkParser::__get_trailerState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailerState;
}
constexpr int32_t const& System::Net::MonoChunkParser::__get_trailerState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trailerState;
}
constexpr void System::Net::MonoChunkParser::__set_trailerState(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___trailerState = value;
}
constexpr ::System::Collections::ArrayList*& System::Net::MonoChunkParser::__get_chunks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunks;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& System::Net::MonoChunkParser::__get_chunks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunks;
}
constexpr void System::Net::MonoChunkParser::__set_chunks(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chunks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::MonoChunkParser* System::Net::MonoChunkParser::New_ctor(::System::Net::WebHeaderCollection* headers) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::MonoChunkParser*>(headers));
}
inline void System::Net::MonoChunkParser::_ctor(::System::Net::WebHeaderCollection* headers) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebHeaderCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, headers);
}
inline int32_t System::Net::MonoChunkParser::Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser*>::get(), "Read", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, size);
}
inline int32_t System::Net::MonoChunkParser::ReadFromChunks(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser*>::get(), "ReadFromChunks", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, size);
}
inline void System::Net::MonoChunkParser::Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser*>::get(), "Write", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, offset, size);
}
inline void System::Net::MonoChunkParser::InternalWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ByRef<int32_t> offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser*>::get(), "InternalWrite", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, offset, size);
}
inline bool System::Net::MonoChunkParser::get_WantMore() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser*>::get(), "get_WantMore",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Net::MonoChunkParser::get_DataAvailable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser*>::get(), "get_DataAvailable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Net::MonoChunkParser::get_ChunkLeft() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser*>::get(), "get_ChunkLeft",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Net::__MonoChunkParser__State System::Net::MonoChunkParser::ReadBody(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ByRef<int32_t> offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser*>::get(), "ReadBody", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::__MonoChunkParser__State, false>(this, ___internal_method, buffer, offset, size);
}
inline ::System::Net::__MonoChunkParser__State System::Net::MonoChunkParser::GetChunkSize(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ByRef<int32_t> offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser*>::get(), "GetChunkSize", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::__MonoChunkParser__State, false>(this, ___internal_method, buffer, offset, size);
}
inline ::StringW System::Net::MonoChunkParser::RemoveChunkExtension(::StringW input) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser*>::get(), "RemoveChunkExtension", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, input);
}
inline ::System::Net::__MonoChunkParser__State System::Net::MonoChunkParser::ReadCRLF(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ByRef<int32_t> offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser*>::get(), "ReadCRLF", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::__MonoChunkParser__State, false>(this, ___internal_method, buffer, offset, size);
}
inline ::System::Net::__MonoChunkParser__State System::Net::MonoChunkParser::ReadTrailer(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ByRef<int32_t> offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser*>::get(), "ReadTrailer", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::__MonoChunkParser__State, false>(this, ___internal_method, buffer, offset, size);
}
inline void System::Net::MonoChunkParser::ThrowProtocolViolation(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::MonoChunkParser*>::get(), "ThrowProtocolViolation", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::System::Net::MonoChunkParser::MonoChunkParser() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
