#pragma once
#include "GlobalNamespace/zzzz__BitMask128_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__BitMask128_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarsData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerAvatarsData::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>*, ::System::Collections::Generic::IEnumerable_1<uint32_t>*)>(&::GlobalNamespace::MultiplayerAvatarsData::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x12a3428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarsData>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<uint32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarsData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerAvatarsData::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>*, ::GlobalNamespace::BitMask128)>(&::GlobalNamespace::MultiplayerAvatarsData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x12a3494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarsData>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BitMask128>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarsData.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerAvatarsData::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::MultiplayerAvatarsData::Serialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x12a34a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarsData>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarsData.SerializeAvatarsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerAvatarsData::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::MultiplayerAvatarsData::SerializeAvatarsData)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x12a34c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarsData>::get(), "SerializeAvatarsData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarsData.CreateFromSerializedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerAvatarsData (::GlobalNamespace::MultiplayerAvatarsData::*)(
    ::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::MultiplayerAvatarsData::CreateFromSerializedData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x12a3668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarsData>::get(), "CreateFromSerializedData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarsData.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerAvatarsData (*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::MultiplayerAvatarsData::Deserialize)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x12a36a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarsData>::get(), "Deserialize", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarsData.DeserializeAvatarsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>* (*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::MultiplayerAvatarsData::DeserializeAvatarsData)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x12a36d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarsData>::get(), "DeserializeAvatarsData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarsData.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerAvatarsData::*)(::GlobalNamespace::MultiplayerAvatarsData)>(
    &::GlobalNamespace::MultiplayerAvatarsData::Equals)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x12a3808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarsData>::get(), "Equals", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerAvatarsData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarsData.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerAvatarsData::*)(::System::Object*)>(
    &::GlobalNamespace::MultiplayerAvatarsData::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x12a396c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarsData>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarsData>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarsData.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::MultiplayerAvatarsData::*)()>(&::GlobalNamespace::MultiplayerAvatarsData::GetHashCode)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x12a39fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarsData>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarsData>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarsData.SupportsOptionalAvatarDataType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerAvatarsData::*)(uint32_t)>(
    &::GlobalNamespace::MultiplayerAvatarsData::SupportsOptionalAvatarDataType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x12a3c24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarsData>::get(), "SupportsOptionalAvatarDataType",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerAvatarsData>"
constexpr GlobalNamespace::MultiplayerAvatarsData::operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerAvatarsData>*() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerAvatarsData>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::MultiplayerAvatarsData>"
constexpr GlobalNamespace::MultiplayerAvatarsData::operator ::System::IEquatable_1<::GlobalNamespace::MultiplayerAvatarsData>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::MultiplayerAvatarsData>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::MultiplayerAvatarsData::_ctor(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>* multiplayerAvatarsData,
                                                           ::System::Collections::Generic::IEnumerable_1<uint32_t>* supportedAvatarTypeIdHashes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarsData>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<uint32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, multiplayerAvatarsData, supportedAvatarTypeIdHashes);
}
inline void GlobalNamespace::MultiplayerAvatarsData::_ctor(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>* multiplayerAvatarsData,
                                                           ::GlobalNamespace::BitMask128 supportedAvatarTypeIdHashesBloomFilter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarsData>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BitMask128>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, multiplayerAvatarsData, supportedAvatarTypeIdHashesBloomFilter);
}
inline void GlobalNamespace::MultiplayerAvatarsData::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarsData>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::MultiplayerAvatarsData::SerializeAvatarsData(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarsData>::get(), "SerializeAvatarsData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline ::GlobalNamespace::MultiplayerAvatarsData GlobalNamespace::MultiplayerAvatarsData::CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarsData>::get(), "CreateFromSerializedData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerAvatarsData, false>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::MultiplayerAvatarsData GlobalNamespace::MultiplayerAvatarsData::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarsData>::get(), "Deserialize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerAvatarsData, false>(nullptr, ___internal_method, reader);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>* GlobalNamespace::MultiplayerAvatarsData::DeserializeAvatarsData(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarsData>::get(), "DeserializeAvatarsData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>*, false>(nullptr, ___internal_method, reader);
}
inline bool GlobalNamespace::MultiplayerAvatarsData::Equals(::GlobalNamespace::MultiplayerAvatarsData other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarsData>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerAvatarsData>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool GlobalNamespace::MultiplayerAvatarsData::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarsData>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::MultiplayerAvatarsData::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarsData>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerAvatarsData::SupportsOptionalAvatarDataType(uint32_t typeHash) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarsData>::get(), "SupportsOptionalAvatarDataType",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, typeHash);
}
// Ctor Parameters [CppParam { name: "multiplayerAvatarsData", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>*", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "supportedAvatarTypeIdHashesBloomFilter", ty: "::GlobalNamespace::BitMask128", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiplayerAvatarsData::MultiplayerAvatarsData(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>* multiplayerAvatarsData,
                                                                            ::GlobalNamespace::BitMask128 supportedAvatarTypeIdHashesBloomFilter) noexcept {
  this->multiplayerAvatarsData = multiplayerAvatarsData;
  this->supportedAvatarTypeIdHashesBloomFilter = supportedAvatarTypeIdHashesBloomFilter;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerAvatarsData::MultiplayerAvatarsData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
