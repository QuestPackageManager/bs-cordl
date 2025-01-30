#pragma once
// IWYU pragma private; include "MidiParser/MidiFile.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MidiParser/zzzz__MidiFile_def.hpp"
#include "MidiParser/zzzz__MidiFile_def.hpp"
#include "MidiParser/zzzz__MidiTrack_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::MidiParser::MidiFile_Reader.Read16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ByRef<int32_t>)>(&::MidiParser::MidiFile_Reader::Read16)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3c2b388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiFile_Reader*>::get(), "Read16", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MidiParser::MidiFile_Reader.Read32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ByRef<int32_t>)>(&::MidiParser::MidiFile_Reader::Read32)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3c2b2f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiFile_Reader*>::get(), "Read32", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MidiParser::MidiFile_Reader.Read8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ByRef<int32_t>)>(&::MidiParser::MidiFile_Reader::Read8)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3c2b90c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiFile_Reader*>::get(), "Read8", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MidiParser::MidiFile_Reader.ReadAllBytesFromStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::System::IO::Stream*)>(
    &::MidiParser::MidiFile_Reader::ReadAllBytesFromStream)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x3c2b944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiFile_Reader*>::get(), "ReadAllBytesFromStream", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MidiParser::MidiFile_Reader.ReadString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ByRef<int32_t>, int32_t)>(
    &::MidiParser::MidiFile_Reader::ReadString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3c2b2a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiFile_Reader*>::get(), "ReadString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MidiParser::MidiFile_Reader.ReadVarInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ByRef<int32_t>)>(&::MidiParser::MidiFile_Reader::ReadVarInt)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3c2b80c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiFile_Reader*>::get(), "ReadVarInt", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
inline int32_t MidiParser::MidiFile_Reader::Read16(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ByRef<int32_t> i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiFile_Reader*>::get(), "Read16", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, data, i);
}
inline int32_t MidiParser::MidiFile_Reader::Read32(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ByRef<int32_t> i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiFile_Reader*>::get(), "Read32", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, data, i);
}
inline uint8_t MidiParser::MidiFile_Reader::Read8(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ByRef<int32_t> i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiFile_Reader*>::get(), "Read8", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, data, i);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> MidiParser::MidiFile_Reader::ReadAllBytesFromStream(::System::IO::Stream* input) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiFile_Reader*>::get(), "ReadAllBytesFromStream", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, input);
}
inline ::StringW MidiParser::MidiFile_Reader::ReadString(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ByRef<int32_t> i, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiFile_Reader*>::get(), "ReadString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, data, i, length);
}
inline int32_t MidiParser::MidiFile_Reader::ReadVarInt(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ByRef<int32_t> i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiFile_Reader*>::get(), "ReadVarInt", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, data, i);
}
// Ctor Parameters []
constexpr ::MidiParser::MidiFile_Reader::MidiFile_Reader() {}
//  Writing Method size for method: ::MidiParser::MidiFile._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::MidiParser::MidiFile::*)(::StringW)>(&::MidiParser::MidiFile::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3c2af64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiFile*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MidiParser::MidiFile._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::MidiParser::MidiFile::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::MidiParser::MidiFile::_ctor)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x3c2af88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiFile*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MidiParser::MidiFile.ParseMetaEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ByRef<int32_t>, uint8_t, ::ByRef<int32_t>, ::ByRef<int32_t>)>(
    &::MidiParser::MidiFile::ParseMetaEvent)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3c2b71c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiFile*>::get(), "ParseMetaEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MidiParser::MidiFile.ParseTrack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MidiParser::MidiTrack* (*)(int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ByRef<int32_t>)>(
    &::MidiParser::MidiFile::ParseTrack)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x3c2b3dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiFile*>::get(), "ParseTrack", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& MidiParser::MidiFile::__cordl_internal_get_format() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___format;
}
constexpr int32_t const& MidiParser::MidiFile::__cordl_internal_get_format() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___format;
}
constexpr void MidiParser::MidiFile::__cordl_internal_set_format(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___format = value;
}
constexpr int32_t& MidiParser::MidiFile::__cordl_internal_get_ticksPerQuarterNote() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ticksPerQuarterNote;
}
constexpr int32_t const& MidiParser::MidiFile::__cordl_internal_get_ticksPerQuarterNote() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ticksPerQuarterNote;
}
constexpr void MidiParser::MidiFile::__cordl_internal_set_ticksPerQuarterNote(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ticksPerQuarterNote = value;
}
constexpr ::ArrayW<::MidiParser::MidiTrack*, ::Array<::MidiParser::MidiTrack*>*>& MidiParser::MidiFile::__cordl_internal_get_tracks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tracks;
}
constexpr ::ArrayW<::MidiParser::MidiTrack*, ::Array<::MidiParser::MidiTrack*>*> const& MidiParser::MidiFile::__cordl_internal_get_tracks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tracks;
}
constexpr void MidiParser::MidiFile::__cordl_internal_set_tracks(::ArrayW<::MidiParser::MidiTrack*, ::Array<::MidiParser::MidiTrack*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tracks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& MidiParser::MidiFile::__cordl_internal_get_tracksCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tracksCount;
}
constexpr int32_t const& MidiParser::MidiFile::__cordl_internal_get_tracksCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tracksCount;
}
constexpr void MidiParser::MidiFile::__cordl_internal_set_tracksCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tracksCount = value;
}
inline void MidiParser::MidiFile::_ctor(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiFile*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, path);
}
inline void MidiParser::MidiFile::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiFile*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline bool MidiParser::MidiFile::ParseMetaEvent(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ByRef<int32_t> position, uint8_t metaEventType, ::ByRef<int32_t> data1, ::ByRef<int32_t> data2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiFile*>::get(), "ParseMetaEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, data, position, metaEventType, data1, data2);
}
inline ::MidiParser::MidiTrack* MidiParser::MidiFile::ParseTrack(int32_t index, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ByRef<int32_t> position) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiFile*>::get(), "ParseTrack", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::MidiParser::MidiTrack*, false>(nullptr, ___internal_method, index, data, position);
}
inline ::MidiParser::MidiFile* MidiParser::MidiFile::New_ctor(::StringW path) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::MidiParser::MidiFile*>(path));
}
inline ::MidiParser::MidiFile* MidiParser::MidiFile::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::MidiParser::MidiFile*>(data));
}
// Ctor Parameters []
constexpr ::MidiParser::MidiFile::MidiFile() {}
