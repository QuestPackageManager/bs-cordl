#pragma once
// IWYU pragma private; include "GlobalNamespace\EnvironmentLightGroups.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentLightGroups_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentLightGroups_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentLightGroups_def.hpp"
#include "GlobalNamespace/zzzz__ILightGroup_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnvironmentLightGroups___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentLightGroups___c::*)()>(&::GlobalNamespace::EnvironmentLightGroups___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3708d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentLightGroups___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentLightGroups___c._Sort_b__9_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::EnvironmentLightGroups___c::*)(::GlobalNamespace::LightGroupSO*)>(
    &::GlobalNamespace::EnvironmentLightGroups___c::_Sort_b__9_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3708d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentLightGroups___c*>(), { "<Sort>b__9_0", {}, { ::i2c::type_of<::GlobalNamespace::LightGroupSO*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EnvironmentLightGroups___c::setStaticF___9(::GlobalNamespace::EnvironmentLightGroups___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::EnvironmentLightGroups___c*, "<>9", ::GlobalNamespace::EnvironmentLightGroups___c*>(
      std::forward<::GlobalNamespace::EnvironmentLightGroups___c*>(value));
}
inline ::GlobalNamespace::EnvironmentLightGroups___c* GlobalNamespace::EnvironmentLightGroups___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::EnvironmentLightGroups___c*, "<>9", ::GlobalNamespace::EnvironmentLightGroups___c*>();
}
inline void GlobalNamespace::EnvironmentLightGroups___c::setStaticF___9__9_0(::System::Func_2<::UnityW<::GlobalNamespace::LightGroupSO>, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::LightGroupSO>, int32_t>*, "<>9__9_0", ::GlobalNamespace::EnvironmentLightGroups___c*>(
      std::forward<::System::Func_2<::UnityW<::GlobalNamespace::LightGroupSO>, int32_t>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::LightGroupSO>, int32_t>* GlobalNamespace::EnvironmentLightGroups___c::getStaticF___9__9_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::LightGroupSO>, int32_t>*, "<>9__9_0", ::GlobalNamespace::EnvironmentLightGroups___c*>();
}
inline void GlobalNamespace::EnvironmentLightGroups___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentLightGroups___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::EnvironmentLightGroups___c::_Sort_b__9_0(::GlobalNamespace::LightGroupSO* s) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentLightGroups___c*>(), { "<Sort>b__9_0", {}, { ::i2c::type_of<::GlobalNamespace::LightGroupSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s);
}
inline ::GlobalNamespace::EnvironmentLightGroups___c* GlobalNamespace::EnvironmentLightGroups___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnvironmentLightGroups___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentLightGroups___c::EnvironmentLightGroups___c() {}
//  Writing Method size for method: ::GlobalNamespace::EnvironmentLightGroups.get_lightGroups
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILightGroup*>* (::GlobalNamespace::EnvironmentLightGroups::*)()>(
    &::GlobalNamespace::EnvironmentLightGroups::get_lightGroups)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3708994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentLightGroups*>(), { "get_lightGroups", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentLightGroups.get_lightGroupSOList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* (::GlobalNamespace::EnvironmentLightGroups::*)()>(
    &::GlobalNamespace::EnvironmentLightGroups::get_lightGroupSOList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370899c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentLightGroups*>(), { "get_lightGroupSOList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentLightGroups._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentLightGroups::*)(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>*)>(
    &::GlobalNamespace::EnvironmentLightGroups::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37089a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentLightGroups*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentLightGroups.GetDataForGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ILightGroup* (::GlobalNamespace::EnvironmentLightGroups::*)(int32_t)>(
    &::GlobalNamespace::EnvironmentLightGroups::GetDataForGroup)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x37089ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentLightGroups*>(), { "GetDataForGroup", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentLightGroups.Sort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentLightGroups::*)()>(&::GlobalNamespace::EnvironmentLightGroups::Sort)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x3708bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentLightGroups*>(), { "Sort", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>*& GlobalNamespace::EnvironmentLightGroups::__cordl_internal_get__lightGroupSOList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroupSOList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* const& GlobalNamespace::EnvironmentLightGroups::__cordl_internal_get__lightGroupSOList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroupSOList;
}
constexpr void GlobalNamespace::EnvironmentLightGroups::__cordl_internal_set__lightGroupSOList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightGroupSOList = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::LightGroupSO>>*& GlobalNamespace::EnvironmentLightGroups::__cordl_internal_get__lightGroupSODict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroupSODict;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::LightGroupSO>>* const&
GlobalNamespace::EnvironmentLightGroups::__cordl_internal_get__lightGroupSODict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroupSODict;
}
constexpr void
GlobalNamespace::EnvironmentLightGroups::__cordl_internal_set__lightGroupSODict(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::LightGroupSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightGroupSODict = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>*& GlobalNamespace::EnvironmentLightGroups::__cordl_internal_get__lightGroupSOListForLightGroupDataDict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroupSOListForLightGroupDataDict;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* const&
GlobalNamespace::EnvironmentLightGroups::__cordl_internal_get__lightGroupSOListForLightGroupDataDict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroupSOListForLightGroupDataDict;
}
constexpr void
GlobalNamespace::EnvironmentLightGroups::__cordl_internal_set__lightGroupSOListForLightGroupDataDict(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightGroupSOListForLightGroupDataDict = value;
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILightGroup*>* GlobalNamespace::EnvironmentLightGroups::get_lightGroups() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentLightGroups*>(), { "get_lightGroups", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILightGroup*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* GlobalNamespace::EnvironmentLightGroups::get_lightGroupSOList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentLightGroups*>(), { "get_lightGroupSOList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>*>(this, ___internal_method);
}
inline void GlobalNamespace::EnvironmentLightGroups::_ctor(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* lightGroups) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentLightGroups*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lightGroups);
}
inline ::GlobalNamespace::ILightGroup* GlobalNamespace::EnvironmentLightGroups::GetDataForGroup(int32_t groupId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentLightGroups*>(), { "GetDataForGroup", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILightGroup*>(this, ___internal_method, groupId);
}
inline void GlobalNamespace::EnvironmentLightGroups::Sort() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentLightGroups*>(), { "Sort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentLightGroups* GlobalNamespace::EnvironmentLightGroups::New_ctor(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::LightGroupSO>>* lightGroups) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnvironmentLightGroups*>(lightGroups));
}
/// @brief Convert operator to "::GlobalNamespace::IEnvironmentLightGroups"
constexpr GlobalNamespace::EnvironmentLightGroups::operator ::GlobalNamespace::IEnvironmentLightGroups*() noexcept {
  return static_cast<::GlobalNamespace::IEnvironmentLightGroups*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IEnvironmentLightGroups"
constexpr ::GlobalNamespace::IEnvironmentLightGroups* GlobalNamespace::EnvironmentLightGroups::i___GlobalNamespace__IEnvironmentLightGroups() noexcept {
  return static_cast<::GlobalNamespace::IEnvironmentLightGroups*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentLightGroups::EnvironmentLightGroups() {}
