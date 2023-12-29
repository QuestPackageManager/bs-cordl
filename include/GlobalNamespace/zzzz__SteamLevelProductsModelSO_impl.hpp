#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SteamLevelProductsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__SteamLevelProductsModelSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData.get_appId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::*)()>(
    &::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::get_appId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222dc7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>::get(), "get_appId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData.get_levelId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::*)()>(
    &::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::get_levelId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222dc84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>::get(), "get_levelId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::*)()>(
    &::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222dc8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr uint32_t& GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::__get__appId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appId;
}
constexpr uint32_t const& GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::__get__appId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appId;
}
constexpr void GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::__set__appId(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appId = value;
}
constexpr ::StringW& GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::__get__levelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelId;
}
constexpr ::StringW const& GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::__get__levelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelId;
}
constexpr void GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::__set__levelId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline uint32_t GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::get_appId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>::get(), "get_appId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::get_levelId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>::get(), "get_levelId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData* GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>());
}
inline void GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData::__SteamLevelProductsModelSO__LevelProductData() {}
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData.get_bundleId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::*)()>(
    &::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::get_bundleId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222dc94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>::get(), "get_bundleId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData.get_levelPackId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::*)()>(
    &::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::get_levelPackId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222dc9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>::get(),
                                                 "get_levelPackId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData.get_levelProductsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*> (
        ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::*)()>(&::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::get_levelProductsData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222dca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>::get(),
                                                 "get_levelProductsData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::*)()>(
    &::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x222dcac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr uint32_t& GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::__get__bundleId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bundleId;
}
constexpr uint32_t const& GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::__get__bundleId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bundleId;
}
constexpr void GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::__set__bundleId(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bundleId = value;
}
constexpr ::StringW& GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::__get__levelPackId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackId;
}
constexpr ::StringW const& GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::__get__levelPackId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackId;
}
constexpr void GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::__set__levelPackId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelPackId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*>&
GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::__get__levelProductsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelProductsData;
}
constexpr ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*> const&
GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::__get__levelProductsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelProductsData;
}
constexpr void GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::__set__levelProductsData(
    ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelProductsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline uint32_t GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::get_bundleId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>::get(), "get_bundleId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::get_levelPackId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>::get(), "get_levelPackId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*>
GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::get_levelProductsData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>::get(),
                                               "get_levelProductsData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*>,
                                             false>(this, ___internal_method);
}
inline ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData* GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>());
}
inline void GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData::__SteamLevelProductsModelSO__LevelPackProductData() {}
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductsModelSO.get_levelPackProductsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*> (
        ::GlobalNamespace::SteamLevelProductsModelSO::*)()>(&::GlobalNamespace::SteamLevelProductsModelSO::get_levelPackProductsData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222d934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductsModelSO*>::get(),
                                                                               "get_levelPackProductsData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductsModelSO.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SteamLevelProductsModelSO::*)()>(&::GlobalNamespace::SteamLevelProductsModelSO::OnEnable)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x222d93c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductsModelSO*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductsModelSO*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductsModelSO.GetLevelProductData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData* (
    ::GlobalNamespace::SteamLevelProductsModelSO::*)(::StringW)>(&::GlobalNamespace::SteamLevelProductsModelSO::GetLevelProductData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x222daa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductsModelSO*>::get(), "GetLevelProductData",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductsModelSO.GetLevelPackProductData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData* (
    ::GlobalNamespace::SteamLevelProductsModelSO::*)(::StringW)>(&::GlobalNamespace::SteamLevelProductsModelSO::GetLevelPackProductData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x222db18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductsModelSO*>::get(), "GetLevelPackProductData",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SteamLevelProductsModelSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SteamLevelProductsModelSO::*)()>(&::GlobalNamespace::SteamLevelProductsModelSO::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x222db90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductsModelSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*>&
GlobalNamespace::SteamLevelProductsModelSO::__get__levelPackProductsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackProductsData;
}
constexpr ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*> const&
GlobalNamespace::SteamLevelProductsModelSO::__get__levelPackProductsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackProductsData;
}
constexpr void GlobalNamespace::SteamLevelProductsModelSO::__set__levelPackProductsData(
    ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelPackProductsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*&
GlobalNamespace::SteamLevelProductsModelSO::__get__levelIdToProductData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelIdToProductData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>*> const&
GlobalNamespace::SteamLevelProductsModelSO::__get__levelIdToProductData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelIdToProductData;
}
constexpr void GlobalNamespace::SteamLevelProductsModelSO::__set__levelIdToProductData(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelIdToProductData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*&
GlobalNamespace::SteamLevelProductsModelSO::__get__levelPackIdToProductData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackIdToProductData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*> const&
GlobalNamespace::SteamLevelProductsModelSO::__get__levelPackIdToProductData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackIdToProductData;
}
constexpr void GlobalNamespace::SteamLevelProductsModelSO::__set__levelPackIdToProductData(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelPackIdToProductData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*>
GlobalNamespace::SteamLevelProductsModelSO::get_levelPackProductsData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductsModelSO*>::get(),
                                                                             "get_levelPackProductsData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*, ::Array<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*>*>, false>(this,
                                                                                                                                                                               ___internal_method);
}
inline void GlobalNamespace::SteamLevelProductsModelSO::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductsModelSO*>::get(), "OnEnable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData* GlobalNamespace::SteamLevelProductsModelSO::GetLevelProductData(::StringW levelId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductsModelSO*>::get(), "GetLevelProductData",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SteamLevelProductsModelSO__LevelProductData*, false>(this, ___internal_method, levelId);
}
inline ::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData* GlobalNamespace::SteamLevelProductsModelSO::GetLevelPackProductData(::StringW levelPackId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductsModelSO*>::get(), "GetLevelPackProductData",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SteamLevelProductsModelSO__LevelPackProductData*, false>(this, ___internal_method, levelPackId);
}
inline ::GlobalNamespace::SteamLevelProductsModelSO* GlobalNamespace::SteamLevelProductsModelSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SteamLevelProductsModelSO*>());
}
inline void GlobalNamespace::SteamLevelProductsModelSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SteamLevelProductsModelSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SteamLevelProductsModelSO::SteamLevelProductsModelSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
