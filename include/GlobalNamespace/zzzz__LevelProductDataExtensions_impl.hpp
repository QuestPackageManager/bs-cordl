#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelProductDataExtensions.hpp"
#include "GlobalNamespace/zzzz__ILevelProductData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LevelProductDataExtensions_def.hpp"
#include "GlobalNamespace/zzzz__ILevelPackProductData_1_def.hpp"
#include "GlobalNamespace/zzzz__ILevelProductData_def.hpp"
#include "GlobalNamespace/zzzz__LevelProductDataExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LevelProductDataExtensions___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelProductDataExtensions___c::*)()>(&::GlobalNamespace::LevelProductDataExtensions___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x39f6174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelProductDataExtensions___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelProductDataExtensions___c._GetDiscontinuedLevelIds_b__3_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LevelProductDataExtensions___c::*)(::GlobalNamespace::ILevelProductData*)>(
    &::GlobalNamespace::LevelProductDataExtensions___c::_GetDiscontinuedLevelIds_b__3_0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x39f6178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelProductDataExtensions___c*>(),
                                                                                           { "<GetDiscontinuedLevelIds>b__3_0", {}, { ::i2c::type_of<::GlobalNamespace::ILevelProductData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelProductDataExtensions___c._GetDiscontinuedLevelIds_b__3_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LevelProductDataExtensions___c::*)(::GlobalNamespace::ILevelProductData*)>(
    &::GlobalNamespace::LevelProductDataExtensions___c::_GetDiscontinuedLevelIds_b__3_1)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x39f6228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelProductDataExtensions___c*>(),
                                                                                           { "<GetDiscontinuedLevelIds>b__3_1", {}, { ::i2c::type_of<::GlobalNamespace::ILevelProductData*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LevelProductDataExtensions___c::setStaticF___9(::GlobalNamespace::LevelProductDataExtensions___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::LevelProductDataExtensions___c*, "<>9", ::GlobalNamespace::LevelProductDataExtensions___c*>(
      std::forward<::GlobalNamespace::LevelProductDataExtensions___c*>(value));
}
inline ::GlobalNamespace::LevelProductDataExtensions___c* GlobalNamespace::LevelProductDataExtensions___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::LevelProductDataExtensions___c*, "<>9", ::GlobalNamespace::LevelProductDataExtensions___c*>();
}
inline void GlobalNamespace::LevelProductDataExtensions___c::setStaticF___9__3_0(::System::Func_2<::GlobalNamespace::ILevelProductData*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::ILevelProductData*, bool>*, "<>9__3_0", ::GlobalNamespace::LevelProductDataExtensions___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::ILevelProductData*, bool>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::ILevelProductData*, bool>* GlobalNamespace::LevelProductDataExtensions___c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::ILevelProductData*, bool>*, "<>9__3_0", ::GlobalNamespace::LevelProductDataExtensions___c*>();
}
inline void GlobalNamespace::LevelProductDataExtensions___c::setStaticF___9__3_1(::System::Func_2<::GlobalNamespace::ILevelProductData*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::ILevelProductData*, ::StringW>*, "<>9__3_1", ::GlobalNamespace::LevelProductDataExtensions___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::ILevelProductData*, ::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::ILevelProductData*, ::StringW>* GlobalNamespace::LevelProductDataExtensions___c::getStaticF___9__3_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::ILevelProductData*, ::StringW>*, "<>9__3_1", ::GlobalNamespace::LevelProductDataExtensions___c*>();
}
inline void GlobalNamespace::LevelProductDataExtensions___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelProductDataExtensions___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::LevelProductDataExtensions___c::_GetDiscontinuedLevelIds_b__3_0(::GlobalNamespace::ILevelProductData* levelProductData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelProductDataExtensions___c*>(),
                                                                                         { "<GetDiscontinuedLevelIds>b__3_0", {}, { ::i2c::type_of<::GlobalNamespace::ILevelProductData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, levelProductData);
}
inline ::StringW GlobalNamespace::LevelProductDataExtensions___c::_GetDiscontinuedLevelIds_b__3_1(::GlobalNamespace::ILevelProductData* levelProductData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelProductDataExtensions___c*>(),
                                                                                         { "<GetDiscontinuedLevelIds>b__3_1", {}, { ::i2c::type_of<::GlobalNamespace::ILevelProductData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, levelProductData);
}
inline ::GlobalNamespace::LevelProductDataExtensions___c* GlobalNamespace::LevelProductDataExtensions___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LevelProductDataExtensions___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelProductDataExtensions___c::LevelProductDataExtensions___c() {}
template <typename TLevelProductData>
inline void GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>::setStaticF___9(::GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>*, "<>9", ::GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>*>(
      std::forward<::GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>*>(value));
}
template <typename TLevelProductData>
inline ::GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>* GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>*, "<>9",
                                           ::GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>*>();
}
template <typename TLevelProductData> inline void GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>::setStaticF___9__0_0(::System::Func_2<TLevelProductData, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<TLevelProductData, bool>*, "<>9__0_0", ::GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>*>(
      std::forward<::System::Func_2<TLevelProductData, bool>*>(value));
}
template <typename TLevelProductData> inline ::System::Func_2<TLevelProductData, bool>* GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>::getStaticF___9__0_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<TLevelProductData, bool>*, "<>9__0_0", ::GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>*>();
}
template <typename TLevelProductData> inline void GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>::setStaticF___9__0_2(::System::Func_2<TLevelProductData, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<TLevelProductData, ::StringW>*, "<>9__0_2", ::GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>*>(
      std::forward<::System::Func_2<TLevelProductData, ::StringW>*>(value));
}
template <typename TLevelProductData> inline ::System::Func_2<TLevelProductData, ::StringW>* GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>::getStaticF___9__0_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<TLevelProductData, ::StringW>*, "<>9__0_2", ::GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>*>();
}
template <typename TLevelProductData> inline void GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TLevelProductData> inline bool GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>::_GetDiscontinuedLevelIds_b__0_0(TLevelProductData levelProductData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>*>(),
                                                                                         { "<GetDiscontinuedLevelIds>b__0_0", {}, { ::i2c::type_of<TLevelProductData>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, levelProductData);
}
template <typename TLevelProductData> inline ::StringW GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>::_GetDiscontinuedLevelIds_b__0_2(TLevelProductData levelProductData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>*>(),
                                                                                         { "<GetDiscontinuedLevelIds>b__0_2", {}, { ::i2c::type_of<TLevelProductData>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, levelProductData);
}
template <typename TLevelProductData>
inline ::GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>* GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>*>());
}
// Ctor Parameters []
template <typename TLevelProductData> constexpr ::GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>::LevelProductDataExtensions___c__0_1() {}
template <typename TLevelProductData>
constexpr ::System::Func_2<TLevelProductData, bool>*& GlobalNamespace::LevelProductDataExtensions___c__DisplayClass0_0_1<TLevelProductData>::__cordl_internal_get_isLevelOwned() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isLevelOwned;
}
template <typename TLevelProductData>
constexpr ::System::Func_2<TLevelProductData, bool>* const& GlobalNamespace::LevelProductDataExtensions___c__DisplayClass0_0_1<TLevelProductData>::__cordl_internal_get_isLevelOwned() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isLevelOwned;
}
template <typename TLevelProductData>
constexpr void GlobalNamespace::LevelProductDataExtensions___c__DisplayClass0_0_1<TLevelProductData>::__cordl_internal_set_isLevelOwned(::System::Func_2<TLevelProductData, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isLevelOwned = value;
}
template <typename TLevelProductData> inline void GlobalNamespace::LevelProductDataExtensions___c__DisplayClass0_0_1<TLevelProductData>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelProductDataExtensions___c__DisplayClass0_0_1<TLevelProductData>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TLevelProductData>
inline bool GlobalNamespace::LevelProductDataExtensions___c__DisplayClass0_0_1<TLevelProductData>::_GetDiscontinuedLevelIds_b__1(TLevelProductData levelProductData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelProductDataExtensions___c__DisplayClass0_0_1<TLevelProductData>*>(),
                                                                                         { "<GetDiscontinuedLevelIds>b__1", {}, { ::i2c::type_of<TLevelProductData>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, levelProductData);
}
template <typename TLevelProductData>
inline ::GlobalNamespace::LevelProductDataExtensions___c__DisplayClass0_0_1<TLevelProductData>* GlobalNamespace::LevelProductDataExtensions___c__DisplayClass0_0_1<TLevelProductData>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LevelProductDataExtensions___c__DisplayClass0_0_1<TLevelProductData>*>());
}
// Ctor Parameters []
template <typename TLevelProductData> constexpr ::GlobalNamespace::LevelProductDataExtensions___c__DisplayClass0_0_1<TLevelProductData>::LevelProductDataExtensions___c__DisplayClass0_0_1() {}
template <typename TLevelProductData>
constexpr ::System::Func_2<TLevelProductData, bool>*& GlobalNamespace::LevelProductDataExtensions___c__DisplayClass1_0_1<TLevelProductData>::__cordl_internal_get_isLevelOwned() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isLevelOwned;
}
template <typename TLevelProductData>
constexpr ::System::Func_2<TLevelProductData, bool>* const& GlobalNamespace::LevelProductDataExtensions___c__DisplayClass1_0_1<TLevelProductData>::__cordl_internal_get_isLevelOwned() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isLevelOwned;
}
template <typename TLevelProductData>
constexpr void GlobalNamespace::LevelProductDataExtensions___c__DisplayClass1_0_1<TLevelProductData>::__cordl_internal_set_isLevelOwned(::System::Func_2<TLevelProductData, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isLevelOwned = value;
}
template <typename TLevelProductData> inline void GlobalNamespace::LevelProductDataExtensions___c__DisplayClass1_0_1<TLevelProductData>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelProductDataExtensions___c__DisplayClass1_0_1<TLevelProductData>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TLevelProductData>
inline bool GlobalNamespace::LevelProductDataExtensions___c__DisplayClass1_0_1<TLevelProductData>::_HasLevelPackEntitlement_b__0(TLevelProductData levelProductData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelProductDataExtensions___c__DisplayClass1_0_1<TLevelProductData>*>(),
                                                                                         { "<HasLevelPackEntitlement>b__0", {}, { ::i2c::type_of<TLevelProductData>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, levelProductData);
}
template <typename TLevelProductData>
inline ::GlobalNamespace::LevelProductDataExtensions___c__DisplayClass1_0_1<TLevelProductData>* GlobalNamespace::LevelProductDataExtensions___c__DisplayClass1_0_1<TLevelProductData>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LevelProductDataExtensions___c__DisplayClass1_0_1<TLevelProductData>*>());
}
// Ctor Parameters []
template <typename TLevelProductData> constexpr ::GlobalNamespace::LevelProductDataExtensions___c__DisplayClass1_0_1<TLevelProductData>::LevelProductDataExtensions___c__DisplayClass1_0_1() {}
//  Writing Method size for method: ::GlobalNamespace::LevelProductDataExtensions.IsDiscontinued
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::ILevelProductData*>*)>(
    &::GlobalNamespace::LevelProductDataExtensions::IsDiscontinued)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x39e3b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelProductDataExtensions*>(),
                                                             { "IsDiscontinued", {}, { ::i2c::type_of<::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::ILevelProductData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelProductDataExtensions.GetDiscontinuedLevelIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)(::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::ILevelProductData*>*)>(
        &::GlobalNamespace::LevelProductDataExtensions::GetDiscontinuedLevelIds)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x39e3c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelProductDataExtensions*>(),
                                                { "GetDiscontinuedLevelIds", {}, { ::i2c::type_of<::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::ILevelProductData*>*>() } })));
    return ___internal_method;
  }
};
template <typename TLevelProductData>
  requires(::cordl_internals::type_constraint<TLevelProductData, ::GlobalNamespace::ILevelProductData*>)
inline ::ArrayW<::StringW> GlobalNamespace::LevelProductDataExtensions::GetDiscontinuedLevelIds(::System::Collections::Generic::IEnumerable_1<TLevelProductData>* levelProductsData,
                                                                                                bool isOwnershipDataValid, ::System::Func_2<TLevelProductData, bool>* isLevelOwned) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelProductDataExtensions*>(),
                                                                                              { "GetDiscontinuedLevelIds",
                                                                                                { ::i2c::class_of<TLevelProductData>() },
                                                                                                { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<TLevelProductData>*>(),
                                                                                                  ::i2c::type_of<bool>(), ::i2c::type_of<::System::Func_2<TLevelProductData, bool>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TLevelProductData>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, levelProductsData, isOwnershipDataValid, isLevelOwned);
}
template <typename TLevelProductData>
  requires(::cordl_internals::type_constraint<TLevelProductData, ::GlobalNamespace::ILevelProductData*>)
inline bool GlobalNamespace::LevelProductDataExtensions::HasLevelPackEntitlement(/* [Nullable(new[] { 2, 1 })] */ ::GlobalNamespace::ILevelPackProductData_1<TLevelProductData>* levelPackProductData,
                                                                                 ::System::Func_2<TLevelProductData, bool>* isLevelOwned) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelProductDataExtensions*>(),
                                              { "HasLevelPackEntitlement",
                                                { ::i2c::class_of<TLevelProductData>() },
                                                { ::i2c::type_of<::GlobalNamespace::ILevelPackProductData_1<TLevelProductData>*>(), ::i2c::type_of<::System::Func_2<TLevelProductData, bool>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TLevelProductData>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, levelPackProductData, isLevelOwned);
}
inline bool
GlobalNamespace::LevelProductDataExtensions::IsDiscontinued(/* [Nullable(new[] { 2, 1 })] */ ::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::ILevelProductData*>* levelPackProductData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelProductDataExtensions*>(),
                                                           { "IsDiscontinued", {}, { ::i2c::type_of<::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::ILevelProductData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, levelPackProductData);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GlobalNamespace::LevelProductDataExtensions::GetDiscontinuedLevelIds(
    /* [Nullable(new[] { 2, 1 })] */ ::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::ILevelProductData*>* levelPackProductData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelProductDataExtensions*>(),
                                              { "GetDiscontinuedLevelIds", {}, { ::i2c::type_of<::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::ILevelProductData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(nullptr, ___internal_method, levelPackProductData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelProductDataExtensions::LevelProductDataExtensions() {}
