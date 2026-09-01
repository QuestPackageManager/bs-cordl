#pragma once
// IWYU pragma private; include "GlobalNamespace\CampaignProgressModel.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CampaignProgressModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CampaignProgressModel.get_numberOfClearedMissions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CampaignProgressModel::*)()>(&::GlobalNamespace::CampaignProgressModel::get_numberOfClearedMissions)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3755e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CampaignProgressModel*>(), { "get_numberOfClearedMissions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CampaignProgressModel.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CampaignProgressModel::*)()>(&::GlobalNamespace::CampaignProgressModel::Awake)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3755f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CampaignProgressModel*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CampaignProgressModel.IsMissionRegistered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CampaignProgressModel::*)(::StringW)>(&::GlobalNamespace::CampaignProgressModel::IsMissionRegistered)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3755ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CampaignProgressModel*>(), { "IsMissionRegistered", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CampaignProgressModel.RegisterMissionId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CampaignProgressModel::*)(::StringW)>(&::GlobalNamespace::CampaignProgressModel::RegisterMissionId)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3756060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CampaignProgressModel*>(), { "RegisterMissionId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CampaignProgressModel.IsMissionCleared
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CampaignProgressModel::*)(::StringW)>(&::GlobalNamespace::CampaignProgressModel::IsMissionCleared)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x37560dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CampaignProgressModel*>(), { "IsMissionCleared", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CampaignProgressModel.IsMissionFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CampaignProgressModel::*)(::StringW)>(&::GlobalNamespace::CampaignProgressModel::IsMissionFinal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3756108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CampaignProgressModel*>(), { "IsMissionFinal", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CampaignProgressModel.SetFinalMissionId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CampaignProgressModel::*)(::StringW)>(&::GlobalNamespace::CampaignProgressModel::SetFinalMissionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3756110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CampaignProgressModel*>(), { "SetFinalMissionId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CampaignProgressModel.WillFinishGameAfterThisMission
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CampaignProgressModel::*)(::StringW)>(&::GlobalNamespace::CampaignProgressModel::WillFinishGameAfterThisMission)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3756118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CampaignProgressModel*>(), { "WillFinishGameAfterThisMission", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CampaignProgressModel.SetMissionCleared
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CampaignProgressModel::*)(::StringW)>(&::GlobalNamespace::CampaignProgressModel::SetMissionCleared)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375615c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CampaignProgressModel*>(), { "SetMissionCleared", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CampaignProgressModel.__SetMissionCleared
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CampaignProgressModel::*)(::StringW, bool)>(&::GlobalNamespace::CampaignProgressModel::__SetMissionCleared)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3756164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CampaignProgressModel*>(), { "__SetMissionCleared", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CampaignProgressModel.UpdateNumberOfClearedMissions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CampaignProgressModel::*)()>(&::GlobalNamespace::CampaignProgressModel::UpdateNumberOfClearedMissions)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x3755e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CampaignProgressModel*>(), { "UpdateNumberOfClearedMissions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CampaignProgressModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CampaignProgressModel::*)()>(&::GlobalNamespace::CampaignProgressModel::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x37561ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CampaignProgressModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::CampaignProgressModel::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::CampaignProgressModel::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::CampaignProgressModel::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataModel = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::CampaignProgressModel::__cordl_internal_get__missionIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionIds;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& GlobalNamespace::CampaignProgressModel::__cordl_internal_get__missionIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionIds;
}
constexpr void GlobalNamespace::CampaignProgressModel::__cordl_internal_set__missionIds(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionIds = value;
}
constexpr ::StringW& GlobalNamespace::CampaignProgressModel::__cordl_internal_get__finalMissionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finalMissionId;
}
constexpr ::StringW const& GlobalNamespace::CampaignProgressModel::__cordl_internal_get__finalMissionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finalMissionId;
}
constexpr void GlobalNamespace::CampaignProgressModel::__cordl_internal_set__finalMissionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____finalMissionId = value;
}
constexpr bool& GlobalNamespace::CampaignProgressModel::__cordl_internal_get__numberOfClearedMissionsDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfClearedMissionsDirty;
}
constexpr bool const& GlobalNamespace::CampaignProgressModel::__cordl_internal_get__numberOfClearedMissionsDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfClearedMissionsDirty;
}
constexpr void GlobalNamespace::CampaignProgressModel::__cordl_internal_set__numberOfClearedMissionsDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numberOfClearedMissionsDirty = value;
}
constexpr int32_t& GlobalNamespace::CampaignProgressModel::__cordl_internal_get__numberOfClearedMissions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfClearedMissions;
}
constexpr int32_t const& GlobalNamespace::CampaignProgressModel::__cordl_internal_get__numberOfClearedMissions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfClearedMissions;
}
constexpr void GlobalNamespace::CampaignProgressModel::__cordl_internal_set__numberOfClearedMissions(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numberOfClearedMissions = value;
}
inline int32_t GlobalNamespace::CampaignProgressModel::get_numberOfClearedMissions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CampaignProgressModel*>(), { "get_numberOfClearedMissions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::CampaignProgressModel::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CampaignProgressModel*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CampaignProgressModel::IsMissionRegistered(::StringW missionId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CampaignProgressModel*>(), { "IsMissionRegistered", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, missionId);
}
inline void GlobalNamespace::CampaignProgressModel::RegisterMissionId(::StringW missionId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CampaignProgressModel*>(), { "RegisterMissionId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, missionId);
}
inline bool GlobalNamespace::CampaignProgressModel::IsMissionCleared(::StringW missionId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CampaignProgressModel*>(), { "IsMissionCleared", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, missionId);
}
inline bool GlobalNamespace::CampaignProgressModel::IsMissionFinal(::StringW missionId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CampaignProgressModel*>(), { "IsMissionFinal", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, missionId);
}
inline void GlobalNamespace::CampaignProgressModel::SetFinalMissionId(::StringW missionId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CampaignProgressModel*>(), { "SetFinalMissionId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, missionId);
}
inline bool GlobalNamespace::CampaignProgressModel::WillFinishGameAfterThisMission(::StringW missionId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CampaignProgressModel*>(), { "WillFinishGameAfterThisMission", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, missionId);
}
inline void GlobalNamespace::CampaignProgressModel::SetMissionCleared(::StringW missionId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CampaignProgressModel*>(), { "SetMissionCleared", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, missionId);
}
inline void GlobalNamespace::CampaignProgressModel::__SetMissionCleared(::StringW missionId, bool cleared) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CampaignProgressModel*>(), { "__SetMissionCleared", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, missionId, cleared);
}
inline int32_t GlobalNamespace::CampaignProgressModel::UpdateNumberOfClearedMissions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CampaignProgressModel*>(), { "UpdateNumberOfClearedMissions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::CampaignProgressModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CampaignProgressModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CampaignProgressModel* GlobalNamespace::CampaignProgressModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CampaignProgressModel*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CampaignProgressModel::CampaignProgressModel() {}
