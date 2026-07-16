#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerBadgesProvider.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgesProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgesModelSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgesProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgesProvider___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerBadgesProvider___c::*)()>(&::GlobalNamespace::MultiplayerBadgesProvider___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3732118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgesProvider___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgesProvider___c._SelectBadgesAndPutThemIntoResults_b__7_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerBadgesProvider___c::*)(::GlobalNamespace::MultiplayerPlayerResultsData*)>(
    &::GlobalNamespace::MultiplayerBadgesProvider___c::_SelectBadgesAndPutThemIntoResults_b__7_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x373211c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgesProvider___c*>(),
                                                             { "<SelectBadgesAndPutThemIntoResults>b__7_0", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerPlayerResultsData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgesProvider___c._SelectBadgesAndPutThemIntoResults_b__7_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MultiplayerBadgesProvider___c::*)(::GlobalNamespace::MultiplayerPlayerResultsData*)>(
    &::GlobalNamespace::MultiplayerBadgesProvider___c::_SelectBadgesAndPutThemIntoResults_b__7_1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3732144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgesProvider___c*>(),
                                                             { "<SelectBadgesAndPutThemIntoResults>b__7_1", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerPlayerResultsData*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MultiplayerBadgesProvider___c::setStaticF___9(::GlobalNamespace::MultiplayerBadgesProvider___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MultiplayerBadgesProvider___c*, "<>9", ::GlobalNamespace::MultiplayerBadgesProvider___c*>(
      std::forward<::GlobalNamespace::MultiplayerBadgesProvider___c*>(value));
}
inline ::GlobalNamespace::MultiplayerBadgesProvider___c* GlobalNamespace::MultiplayerBadgesProvider___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MultiplayerBadgesProvider___c*, "<>9", ::GlobalNamespace::MultiplayerBadgesProvider___c*>();
}
inline void GlobalNamespace::MultiplayerBadgesProvider___c::setStaticF___9__7_0(::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, bool>*, "<>9__7_0", ::GlobalNamespace::MultiplayerBadgesProvider___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, bool>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, bool>* GlobalNamespace::MultiplayerBadgesProvider___c::getStaticF___9__7_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, bool>*, "<>9__7_0", ::GlobalNamespace::MultiplayerBadgesProvider___c*>();
}
inline void GlobalNamespace::MultiplayerBadgesProvider___c::setStaticF___9__7_1(::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, int32_t>*, "<>9__7_1", ::GlobalNamespace::MultiplayerBadgesProvider___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, int32_t>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, int32_t>* GlobalNamespace::MultiplayerBadgesProvider___c::getStaticF___9__7_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::MultiplayerPlayerResultsData*, int32_t>*, "<>9__7_1", ::GlobalNamespace::MultiplayerBadgesProvider___c*>();
}
inline void GlobalNamespace::MultiplayerBadgesProvider___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgesProvider___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerBadgesProvider___c::_SelectBadgesAndPutThemIntoResults_b__7_0(::GlobalNamespace::MultiplayerPlayerResultsData* result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgesProvider___c*>(),
                                                           { "<SelectBadgesAndPutThemIntoResults>b__7_0", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerPlayerResultsData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline int32_t GlobalNamespace::MultiplayerBadgesProvider___c::_SelectBadgesAndPutThemIntoResults_b__7_1(::GlobalNamespace::MultiplayerPlayerResultsData* p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgesProvider___c*>(),
                                                           { "<SelectBadgesAndPutThemIntoResults>b__7_1", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerPlayerResultsData*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, p);
}
inline ::GlobalNamespace::MultiplayerBadgesProvider___c* GlobalNamespace::MultiplayerBadgesProvider___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerBadgesProvider___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerBadgesProvider___c::MultiplayerBadgesProvider___c() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgesProvider.SelectBadgesAndPutThemIntoResults
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerBadgesProvider::*)(
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*)>(&::GlobalNamespace::MultiplayerBadgesProvider::SelectBadgesAndPutThemIntoResults)> {
  constexpr static std::size_t size = 0x12bc;
  constexpr static std::size_t addrs = 0x3730e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgesProvider*>(),
                            { "SelectBadgesAndPutThemIntoResults", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgesProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerBadgesProvider::*)()>(&::GlobalNamespace::MultiplayerBadgesProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x37320c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgesProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::MultiplayerBadgesProvider::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::MultiplayerBadgesProvider::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::MultiplayerBadgesProvider::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataModel = value;
}
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::MultiplayerBadgesProvider::__cordl_internal_get__beatmapKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKey;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::MultiplayerBadgesProvider::__cordl_internal_get__beatmapKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKey;
}
constexpr void GlobalNamespace::MultiplayerBadgesProvider::__cordl_internal_set__beatmapKey(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapKey = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerBadgesModelSO>& GlobalNamespace::MultiplayerBadgesProvider::__cordl_internal_get__multiplayerBadgesModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerBadgesModel;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerBadgesModelSO> const& GlobalNamespace::MultiplayerBadgesProvider::__cordl_internal_get__multiplayerBadgesModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerBadgesModel;
}
constexpr void GlobalNamespace::MultiplayerBadgesProvider::__cordl_internal_set__multiplayerBadgesModel(::UnityW<::GlobalNamespace::MultiplayerBadgesModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerBadgesModel = value;
}
inline void
GlobalNamespace::MultiplayerBadgesProvider::SelectBadgesAndPutThemIntoResults(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* playerResults) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgesProvider*>(),
                          { "SelectBadgesAndPutThemIntoResults", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerResults);
}
inline void GlobalNamespace::MultiplayerBadgesProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgesProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerBadgesProvider* GlobalNamespace::MultiplayerBadgesProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerBadgesProvider*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerBadgesProvider::MultiplayerBadgesProvider() {}
