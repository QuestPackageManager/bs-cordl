#pragma once
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarData_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerAvatarData::*)(
    ::StringW, ::UnityEngine::Color32, ::UnityEngine::Color32, ::StringW, ::UnityEngine::Color32, ::StringW, ::UnityEngine::Color32, ::StringW, ::UnityEngine::Color32, ::StringW,
    ::UnityEngine::Color32, ::UnityEngine::Color32, ::UnityEngine::Color32, ::StringW, ::StringW, ::StringW)>(&::GlobalNamespace::MultiplayerAvatarData::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1231268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarData>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarData.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerAvatarData::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::MultiplayerAvatarData::Serialize)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x12312b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarData>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarData.CreateFromSerializedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerAvatarData (::GlobalNamespace::MultiplayerAvatarData::*)(
    ::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::MultiplayerAvatarData::CreateFromSerializedData)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1231470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarData>::get(), "CreateFromSerializedData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarData.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerAvatarData (*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::MultiplayerAvatarData::Deserialize)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x12314a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarData>::get(), "Deserialize", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarData.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerAvatarData::*)(::GlobalNamespace::MultiplayerAvatarData)>(
    &::GlobalNamespace::MultiplayerAvatarData::Equals)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x12316b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarData>::get(), "Equals", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerAvatarData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarData.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerAvatarData::*)(::System::Object*)>(
    &::GlobalNamespace::MultiplayerAvatarData::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x123198c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarData>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarData>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarData.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::MultiplayerAvatarData::*)()>(&::GlobalNamespace::MultiplayerAvatarData::GetHashCode)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x1231a1c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarData>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarData>::get(), 2));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerAvatarData>"
constexpr GlobalNamespace::MultiplayerAvatarData::operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerAvatarData>*() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerAvatarData>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::MultiplayerAvatarData>"
constexpr GlobalNamespace::MultiplayerAvatarData::operator ::System::IEquatable_1<::GlobalNamespace::MultiplayerAvatarData>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::MultiplayerAvatarData>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::MultiplayerAvatarData::_ctor(::StringW headTopId, ::UnityEngine::Color32 headTopPrimaryColor, ::UnityEngine::Color32 headTopSecondaryColor, ::StringW glassesId,
                                                          ::UnityEngine::Color32 glassesColor, ::StringW facialHairId, ::UnityEngine::Color32 facialHairColor, ::StringW handsId,
                                                          ::UnityEngine::Color32 handsColor, ::StringW clothesId, ::UnityEngine::Color32 clothesPrimaryColor,
                                                          ::UnityEngine::Color32 clothesSecondaryColor, ::UnityEngine::Color32 clothesDetailColor, ::StringW skinColorId, ::StringW eyesId,
                                                          ::StringW mouthId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarData>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, headTopId, headTopPrimaryColor, headTopSecondaryColor, glassesId, glassesColor, facialHairId, facialHairColor,
                                                          handsId, handsColor, clothesId, clothesPrimaryColor, clothesSecondaryColor, clothesDetailColor, skinColorId, eyesId, mouthId);
}
inline void GlobalNamespace::MultiplayerAvatarData::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarData>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline ::GlobalNamespace::MultiplayerAvatarData GlobalNamespace::MultiplayerAvatarData::CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarData>::get(), "CreateFromSerializedData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerAvatarData, false>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::MultiplayerAvatarData GlobalNamespace::MultiplayerAvatarData::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarData>::get(), "Deserialize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerAvatarData, false>(nullptr, ___internal_method, reader);
}
inline bool GlobalNamespace::MultiplayerAvatarData::Equals(::GlobalNamespace::MultiplayerAvatarData other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarData>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerAvatarData>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool GlobalNamespace::MultiplayerAvatarData::Equals(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarData>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::MultiplayerAvatarData::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerAvatarData>::get(), "GetHashCode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "headTopId", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "headTopPrimaryColor", ty: "::UnityEngine::Color32", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "headTopSecondaryColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "glassesId", ty: "::StringW", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "glassesColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "facialHairId", ty: "::StringW", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "facialHairColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "handsId", ty: "::StringW", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "handsColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "clothesId", ty: "::StringW", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "clothesPrimaryColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "clothesSecondaryColor", ty:
// "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "clothesDetailColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "skinColorId", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "eyesId", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "mouthId", ty:
// "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::MultiplayerAvatarData::MultiplayerAvatarData(::StringW headTopId, ::UnityEngine::Color32 headTopPrimaryColor, ::UnityEngine::Color32 headTopSecondaryColor,
                                                                          ::StringW glassesId, ::UnityEngine::Color32 glassesColor, ::StringW facialHairId, ::UnityEngine::Color32 facialHairColor,
                                                                          ::StringW handsId, ::UnityEngine::Color32 handsColor, ::StringW clothesId, ::UnityEngine::Color32 clothesPrimaryColor,
                                                                          ::UnityEngine::Color32 clothesSecondaryColor, ::UnityEngine::Color32 clothesDetailColor, ::StringW skinColorId,
                                                                          ::StringW eyesId, ::StringW mouthId) noexcept {
  this->headTopId = headTopId;
  this->headTopPrimaryColor = headTopPrimaryColor;
  this->headTopSecondaryColor = headTopSecondaryColor;
  this->glassesId = glassesId;
  this->glassesColor = glassesColor;
  this->facialHairId = facialHairId;
  this->facialHairColor = facialHairColor;
  this->handsId = handsId;
  this->handsColor = handsColor;
  this->clothesId = clothesId;
  this->clothesPrimaryColor = clothesPrimaryColor;
  this->clothesSecondaryColor = clothesSecondaryColor;
  this->clothesDetailColor = clothesDetailColor;
  this->skinColorId = skinColorId;
  this->eyesId = eyesId;
  this->mouthId = mouthId;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerAvatarData::MultiplayerAvatarData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
