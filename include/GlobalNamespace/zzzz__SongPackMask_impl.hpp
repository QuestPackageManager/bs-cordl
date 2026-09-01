#pragma once
// IWYU pragma private; include "GlobalNamespace\SongPackMask.hpp"
#include "GlobalNamespace/zzzz__BitMask256_impl.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "GlobalNamespace/zzzz__BitMask256_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SongPackMask._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPackMask::*)(::StringW)>(&::GlobalNamespace::SongPackMask::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3784abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMask._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPackMask::*)(::GlobalNamespace::BitMask256)>(&::GlobalNamespace::SongPackMask::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3784b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BitMask256>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMask._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPackMask::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::GlobalNamespace::SongPackMask::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3784b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMask.get_all
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SongPackMask (*)()>(&::GlobalNamespace::SongPackMask::get_all)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3784bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { "get_all", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMask.op_BitwiseOr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SongPackMask (*)(::GlobalNamespace::SongPackMask, ::GlobalNamespace::SongPackMask)>(
    &::GlobalNamespace::SongPackMask::op_BitwiseOr)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3784bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(),
                                                             { "op_BitwiseOr", {}, { ::i2c::type_of<::GlobalNamespace::SongPackMask>(), ::i2c::type_of<::GlobalNamespace::SongPackMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMask.op_BitwiseAnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SongPackMask (*)(::GlobalNamespace::SongPackMask, ::GlobalNamespace::SongPackMask)>(
    &::GlobalNamespace::SongPackMask::op_BitwiseAnd)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3784bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(),
                                                             { "op_BitwiseAnd", {}, { ::i2c::type_of<::GlobalNamespace::SongPackMask>(), ::i2c::type_of<::GlobalNamespace::SongPackMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMask.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::SongPackMask, ::GlobalNamespace::SongPackMask)>(&::GlobalNamespace::SongPackMask::op_Equality)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3784bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::SongPackMask>(), ::i2c::type_of<::GlobalNamespace::SongPackMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMask.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::SongPackMask, ::GlobalNamespace::SongPackMask)>(&::GlobalNamespace::SongPackMask::op_Inequality)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3784c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::SongPackMask>(), ::i2c::type_of<::GlobalNamespace::SongPackMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMask.op_Implicit___GlobalNamespace__SongPackMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SongPackMask (*)(::StringW)>(&::GlobalNamespace::SongPackMask::op_Implicit___GlobalNamespace__SongPackMask)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3784c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { "op_Implicit", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMask.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SongPackMask::*)(::GlobalNamespace::SongPackMask)>(&::GlobalNamespace::SongPackMask::Contains)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3784ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { "Contains", {}, { ::i2c::type_of<::GlobalNamespace::SongPackMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMask.DifferenceFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SongPackMask::*)(::GlobalNamespace::SongPackMask)>(&::GlobalNamespace::SongPackMask::DifferenceFrom)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3784cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { "DifferenceFrom", {}, { ::i2c::type_of<::GlobalNamespace::SongPackMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMask.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPackMask::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::SongPackMask::Serialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3784d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMask.CreateFromSerializedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SongPackMask (::GlobalNamespace::SongPackMask::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::SongPackMask::CreateFromSerializedData)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3784d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { "CreateFromSerializedData", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMask.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SongPackMask (*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::SongPackMask::Deserialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3784d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMask.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SongPackMask::*)()>(&::GlobalNamespace::SongPackMask::ToString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3784dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { ::i2c::class_of<::GlobalNamespace::SongPackMask>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMask.ToShortString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SongPackMask::*)()>(&::GlobalNamespace::SongPackMask::ToShortString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3784e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { "ToShortString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMask.ToBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::GlobalNamespace::SongPackMask::*)()>(&::GlobalNamespace::SongPackMask::ToBytes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3784e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { "ToBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMask.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SongPackMask::*)()>(&::GlobalNamespace::SongPackMask::GetHashCode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3784ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { ::i2c::class_of<::GlobalNamespace::SongPackMask>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMask.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SongPackMask::*)(::GlobalNamespace::SongPackMask)>(&::GlobalNamespace::SongPackMask::Equals)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3784f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::SongPackMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMask.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SongPackMask::*)(::System::Object*)>(&::GlobalNamespace::SongPackMask::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3784f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { ::i2c::class_of<::GlobalNamespace::SongPackMask>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMask.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::GlobalNamespace::SongPackMask>)>(&::GlobalNamespace::SongPackMask::TryParse)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x3785020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SongPackMask>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMask.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SongPackMask (*)(::StringW)>(&::GlobalNamespace::SongPackMask::Parse)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3785160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMask.FromBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SongPackMask (*)(::ArrayW<uint8_t>, int32_t)>(&::GlobalNamespace::SongPackMask::FromBytes)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x37851f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { "FromBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SongPackMask::_ctor(::StringW packId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, packId);
}
inline void GlobalNamespace::SongPackMask::_ctor(::GlobalNamespace::BitMask256 bloomFilter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BitMask256>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bloomFilter);
}
inline void GlobalNamespace::SongPackMask::_ctor(::System::Collections::Generic::IEnumerable_1<::StringW>* packs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, packs);
}
inline ::GlobalNamespace::SongPackMask GlobalNamespace::SongPackMask::get_all() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { "get_all", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SongPackMask>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::SongPackMask GlobalNamespace::SongPackMask::op_BitwiseOr(::GlobalNamespace::SongPackMask a, ::GlobalNamespace::SongPackMask b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(),
                                                           { "op_BitwiseOr", {}, { ::i2c::type_of<::GlobalNamespace::SongPackMask>(), ::i2c::type_of<::GlobalNamespace::SongPackMask>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SongPackMask>(nullptr, ___internal_method, a, b);
}
inline ::GlobalNamespace::SongPackMask GlobalNamespace::SongPackMask::op_BitwiseAnd(::GlobalNamespace::SongPackMask a, ::GlobalNamespace::SongPackMask b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(),
                                                           { "op_BitwiseAnd", {}, { ::i2c::type_of<::GlobalNamespace::SongPackMask>(), ::i2c::type_of<::GlobalNamespace::SongPackMask>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SongPackMask>(nullptr, ___internal_method, a, b);
}
inline bool GlobalNamespace::SongPackMask::op_Equality(::GlobalNamespace::SongPackMask a, ::GlobalNamespace::SongPackMask b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::SongPackMask>(), ::i2c::type_of<::GlobalNamespace::SongPackMask>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool GlobalNamespace::SongPackMask::op_Inequality(::GlobalNamespace::SongPackMask a, ::GlobalNamespace::SongPackMask b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::SongPackMask>(), ::i2c::type_of<::GlobalNamespace::SongPackMask>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::GlobalNamespace::SongPackMask GlobalNamespace::SongPackMask::op_Implicit___GlobalNamespace__SongPackMask(::StringW id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { "op_Implicit", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SongPackMask>(nullptr, ___internal_method, id);
}
inline bool GlobalNamespace::SongPackMask::Contains(::GlobalNamespace::SongPackMask other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { "Contains", {}, { ::i2c::type_of<::GlobalNamespace::SongPackMask>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t GlobalNamespace::SongPackMask::DifferenceFrom(::GlobalNamespace::SongPackMask other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { "DifferenceFrom", {}, { ::i2c::type_of<::GlobalNamespace::SongPackMask>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline void GlobalNamespace::SongPackMask::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline ::GlobalNamespace::SongPackMask GlobalNamespace::SongPackMask::CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { "CreateFromSerializedData", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SongPackMask>(*this, ___internal_method, reader);
}
inline ::GlobalNamespace::SongPackMask GlobalNamespace::SongPackMask::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SongPackMask>(nullptr, ___internal_method, reader);
}
inline ::StringW GlobalNamespace::SongPackMask::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SongPackMask>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::SongPackMask::ToShortString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { "ToShortString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::ArrayW<uint8_t> GlobalNamespace::SongPackMask::ToBytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { "ToBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::SongPackMask::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SongPackMask>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool GlobalNamespace::SongPackMask::Equals(::GlobalNamespace::SongPackMask other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::SongPackMask>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::SongPackMask::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SongPackMask>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool GlobalNamespace::SongPackMask::TryParse(::StringW stringSerializedMask, ::by_ref<::GlobalNamespace::SongPackMask> songPackMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SongPackMask>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, stringSerializedMask, songPackMask);
}
inline ::GlobalNamespace::SongPackMask GlobalNamespace::SongPackMask::Parse(::StringW stringSerializedMask) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SongPackMask>(nullptr, ___internal_method, stringSerializedMask);
}
inline ::GlobalNamespace::SongPackMask GlobalNamespace::SongPackMask::FromBytes(::ArrayW<uint8_t> bytes, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMask>(), { "FromBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SongPackMask>(nullptr, ___internal_method, bytes, offset);
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SongPackMask>"
constexpr GlobalNamespace::SongPackMask::operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SongPackMask>*() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SongPackMask>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SongPackMask>"
constexpr ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SongPackMask>*
GlobalNamespace::SongPackMask::i___LiteNetLib__Utils__INetImmutableSerializable_1___GlobalNamespace__SongPackMask_() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SongPackMask>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable"
constexpr GlobalNamespace::SongPackMask::operator ::LiteNetLib::Utils::INetImmutableSerializable*() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable"
constexpr ::LiteNetLib::Utils::INetImmutableSerializable* GlobalNamespace::SongPackMask::i___LiteNetLib__Utils__INetImmutableSerializable() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::SongPackMask>"
constexpr GlobalNamespace::SongPackMask::operator ::System::IEquatable_1<::GlobalNamespace::SongPackMask>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::SongPackMask>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::SongPackMask>"
constexpr ::System::IEquatable_1<::GlobalNamespace::SongPackMask>* GlobalNamespace::SongPackMask::i___System__IEquatable_1___GlobalNamespace__SongPackMask_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::SongPackMask>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_bloomFilter", ty: "::GlobalNamespace::BitMask256", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SongPackMask::SongPackMask(::GlobalNamespace::BitMask256 _bloomFilter) noexcept {
  this->_bloomFilter = _bloomFilter;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongPackMask::SongPackMask() {}
