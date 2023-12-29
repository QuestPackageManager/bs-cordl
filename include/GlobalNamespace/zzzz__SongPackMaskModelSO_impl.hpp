#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__SongPackMaskModelSO_impl.hpp"
#include "Polyglot/zzzz__Language_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SongPackMaskModelSO_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMaskModelSO_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPackCollectionSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPackSO_def.hpp"
#include "GlobalNamespace/zzzz__PreviewBeatmapLevelPackSO_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SongPackMaskModelSO__SongPackDataType::__SongPackMaskModelSO__SongPackDataType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SongPackMaskModelSO__SongPackDataType::__SongPackMaskModelSO__SongPackDataType() {}
constexpr ::GlobalNamespace::__SongPackMaskModelSO__SongPackDataType GlobalNamespace::__SongPackMaskModelSO__SongPackDataType::SingleBeatmapLevelPack{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__SongPackMaskModelSO__SongPackDataType GlobalNamespace::__SongPackMaskModelSO__SongPackDataType::MultipleBeatmapLevelPacks{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__SongPackMaskModelSO__SongPackDataType GlobalNamespace::__SongPackMaskModelSO__SongPackDataType::SinglePreviewBeatmapLevelPack{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__SongPackMaskModelSO__SongPackDataType GlobalNamespace::__SongPackMaskModelSO__SongPackDataType::MultiplePreviewBeatmapLevelPacks{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__SongPackMaskModelSO__SongPackDataType GlobalNamespace::__SongPackMaskModelSO__SongPackDataType::SingleBeatmapLevelPackCollection{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__SongPackMaskModelSO__SongPackDataType GlobalNamespace::__SongPackMaskModelSO__SongPackDataType::MultipleBeatmapLevelPackCollections{ static_cast<int32_t>(0x5) };
//  Writing Method size for method: ::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::*)()>(
    &::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2215154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c._get_songPackMask_b__11_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::*)(
    ::GlobalNamespace::IBeatmapLevelPack*)>(&::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::_get_songPackMask_b__11_0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x221515c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c*>::get(), "<get_songPackMask>b__11_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c._get_songPackMask_b__11_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::*)(
    ::GlobalNamespace::BeatmapLevelPackSO*)>(&::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::_get_songPackMask_b__11_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22151f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c*>::get(), "<get_songPackMask>b__11_1", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPackSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c._get_songPackMask_b__11_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::*)(
    ::GlobalNamespace::PreviewBeatmapLevelPackSO*)>(&::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::_get_songPackMask_b__11_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2215210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c*>::get(), "<get_songPackMask>b__11_2", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PreviewBeatmapLevelPackSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c._get_songPackMask_b__11_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::*)(::GlobalNamespace::BeatmapLevelPackCollectionSO*)>(
        &::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::_get_songPackMask_b__11_3)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2215228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c*>::get(), "<get_songPackMask>b__11_3", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPackCollectionSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c._get_songPackMask_b__11_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::*)(
    ::GlobalNamespace::IBeatmapLevelPack*)>(&::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::_get_songPackMask_b__11_4)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x221533c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c*>::get(), "<get_songPackMask>b__11_4", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::setStaticF___9(::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c*>::get>(
      std::forward<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c*>(value));
}
inline ::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c* GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c*>::get>();
}
inline void GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::setStaticF___9__11_0(::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*, ::StringW>*, "<>9__11_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*, ::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*, ::StringW>* GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::getStaticF___9__11_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*, ::StringW>*, "<>9__11_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c*>::get>();
}
inline void GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::setStaticF___9__11_1(::System::Func_2<::GlobalNamespace::BeatmapLevelPackSO*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::BeatmapLevelPackSO*, ::StringW>*, "<>9__11_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::BeatmapLevelPackSO*, ::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::BeatmapLevelPackSO*, ::StringW>* GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::getStaticF___9__11_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::BeatmapLevelPackSO*, ::StringW>*, "<>9__11_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c*>::get>();
}
inline void GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::setStaticF___9__11_2(::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelPackSO*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelPackSO*, ::StringW>*, "<>9__11_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelPackSO*, ::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelPackSO*, ::StringW>* GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::getStaticF___9__11_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::PreviewBeatmapLevelPackSO*, ::StringW>*, "<>9__11_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c*>::get>();
}
inline void GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::setStaticF___9__11_4(::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*, ::StringW>*, "<>9__11_4",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*, ::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*, ::StringW>* GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::getStaticF___9__11_4() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*, ::StringW>*, "<>9__11_4",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c*>::get>();
}
inline void GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::setStaticF___9__11_3(
    ::System::Func_2<::GlobalNamespace::BeatmapLevelPackCollectionSO*, ::System::Collections::Generic::IEnumerable_1<::StringW>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::BeatmapLevelPackCollectionSO*, ::System::Collections::Generic::IEnumerable_1<::StringW>*>*, "<>9__11_3",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::BeatmapLevelPackCollectionSO*, ::System::Collections::Generic::IEnumerable_1<::StringW>*>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::BeatmapLevelPackCollectionSO*, ::System::Collections::Generic::IEnumerable_1<::StringW>*>*
GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::getStaticF___9__11_3() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::BeatmapLevelPackCollectionSO*, ::System::Collections::Generic::IEnumerable_1<::StringW>*>*, "<>9__11_3",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c*>::get>();
}
inline ::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c* GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c*>());
}
inline void GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::_get_songPackMask_b__11_0(::GlobalNamespace::IBeatmapLevelPack* pack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c*>::get(), "<get_songPackMask>b__11_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, pack);
}
inline ::StringW GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::_get_songPackMask_b__11_1(::GlobalNamespace::BeatmapLevelPackSO* pack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c*>::get(), "<get_songPackMask>b__11_1", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPackSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, pack);
}
inline ::StringW GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::_get_songPackMask_b__11_2(::GlobalNamespace::PreviewBeatmapLevelPackSO* pack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c*>::get(), "<get_songPackMask>b__11_2", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PreviewBeatmapLevelPackSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, pack);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>*
GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::_get_songPackMask_b__11_3(::GlobalNamespace::BeatmapLevelPackCollectionSO* collection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c*>::get(), "<get_songPackMask>b__11_3", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPackCollectionSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*, false>(this, ___internal_method, collection);
}
inline ::StringW GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::_get_songPackMask_b__11_4(::GlobalNamespace::IBeatmapLevelPack* pack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c*>::get(), "<get_songPackMask>b__11_4", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, pack);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem____c::__SongPackMaskModelSO__SongPackMaskItem____c() {}
//  Writing Method size for method: ::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem.get_serializedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::*)()>(
    &::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::get_serializedName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2214ce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*>::get(), "get_serializedName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem.get_songPackMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SongPackMask (::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::*)()>(
    &::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::get_songPackMask)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x2214d24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*>::get(), "get_songPackMask",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem.get_containsMultiplePacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::*)()>(
    &::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::get_containsMultiplePacks)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22150c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*>::get(),
                                                 "get_containsMultiplePacks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::*)()>(
    &::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22150e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__SongPackMaskModelSO__SongPackDataType& GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::__get__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr ::GlobalNamespace::__SongPackMaskModelSO__SongPackDataType const& GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::__get__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr void GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::__set__type(::GlobalNamespace::__SongPackMaskModelSO__SongPackDataType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____type = value;
}
constexpr ::GlobalNamespace::BeatmapLevelPackSO*& GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::__get__beatmapLevelPack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelPack;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPackSO*> const& GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::__get__beatmapLevelPack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelPack;
}
constexpr void GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::__set__beatmapLevelPack(::GlobalNamespace::BeatmapLevelPackSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelPack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PreviewBeatmapLevelPackSO*& GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::__get__previewBeatmapLevelPack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewBeatmapLevelPack;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PreviewBeatmapLevelPackSO*> const& GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::__get__previewBeatmapLevelPack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewBeatmapLevelPack;
}
constexpr void GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::__set__previewBeatmapLevelPack(::GlobalNamespace::PreviewBeatmapLevelPackSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____previewBeatmapLevelPack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::__get__serializedName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializedName;
}
constexpr ::StringW const& GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::__get__serializedName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializedName;
}
constexpr void GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::__set__serializedName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____serializedName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelPackCollectionSO*& GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::__get__levelPackCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackCollection;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPackCollectionSO*> const& GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::__get__levelPackCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackCollection;
}
constexpr void GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::__set__levelPackCollection(::GlobalNamespace::BeatmapLevelPackCollectionSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelPackCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelPackSO*>*& GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::__get__beatmapLevelPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelPacks;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelPackSO*>*> const&
GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::__get__beatmapLevelPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelPacks;
}
constexpr void GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::__set__beatmapLevelPacks(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelPackSO*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelPacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelPackSO*>*& GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::__get__previewBeatmapLevelPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewBeatmapLevelPacks;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelPackSO*>*> const&
GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::__get__previewBeatmapLevelPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewBeatmapLevelPacks;
}
constexpr void GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::__set__previewBeatmapLevelPacks(::System::Collections::Generic::List_1<::GlobalNamespace::PreviewBeatmapLevelPackSO*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____previewBeatmapLevelPacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelPackCollectionSO*>*& GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::__get__levelPackCollections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackCollections;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelPackCollectionSO*>*> const&
GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::__get__levelPackCollections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackCollections;
}
constexpr void GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::__set__levelPackCollections(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelPackCollectionSO*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelPackCollections)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::get_serializedName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*>::get(),
                                                                             "get_serializedName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SongPackMask GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::get_songPackMask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*>::get(),
                                                                             "get_songPackMask", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SongPackMask, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::get_containsMultiplePacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*>::get(),
                                                                             "get_containsMultiplePacks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem* GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*>());
}
inline void GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem::__SongPackMaskModelSO__SongPackMaskItem() {}
//  Writing Method size for method: ::GlobalNamespace::SongPackMaskModelSO.get_defaultSongPackMaskItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GlobalNamespace::SongPackMaskModelSO::*)()>(
    &::GlobalNamespace::SongPackMaskModelSO::get_defaultSongPackMaskItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2214370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskModelSO*>::get(),
                                                                               "get_defaultSongPackMaskItems", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMaskModelSO.get_customSongPackMaskItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*, ::Array<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*>*> (::GlobalNamespace::SongPackMaskModelSO::*)()>(
    &::GlobalNamespace::SongPackMaskModelSO::get_customSongPackMaskItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2214378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskModelSO*>::get(),
                                                                               "get_customSongPackMaskItems", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMaskModelSO.get_ostAndExtrasCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevelPackCollectionSO* (::GlobalNamespace::SongPackMaskModelSO::*)()>(
    &::GlobalNamespace::SongPackMaskModelSO::get_ostAndExtrasCollection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2214380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskModelSO*>::get(),
                                                                               "get_ostAndExtrasCollection", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMaskModelSO.get_dlcCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevelPackCollectionSO* (::GlobalNamespace::SongPackMaskModelSO::*)()>(
    &::GlobalNamespace::SongPackMaskModelSO::get_dlcCollection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2214388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskModelSO*>::get(),
                                                                               "get_dlcCollection", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMaskModelSO.ToLocalizedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::SongPackMaskModelSO::*)(::StringW)>(
    &::GlobalNamespace::SongPackMaskModelSO::ToLocalizedName)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2214390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskModelSO*>::get(), "ToLocalizedName", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMaskModelSO.ToLocalizedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::SongPackMaskModelSO::*)(::StringW, ByRef<bool>)>(
    &::GlobalNamespace::SongPackMaskModelSO::ToLocalizedName)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x22143a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskModelSO*>::get(), "ToLocalizedName", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMaskModelSO.ToSongPackMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SongPackMaskModelSO::*)(::StringW, ByRef<::GlobalNamespace::SongPackMask>)>(
    &::GlobalNamespace::SongPackMaskModelSO::ToSongPackMask)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2214b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskModelSO*>::get(), "ToSongPackMask", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::SongPackMask>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMaskModelSO.ToSongPackMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SongPackMask (::GlobalNamespace::SongPackMaskModelSO::*)(::StringW)>(
    &::GlobalNamespace::SongPackMaskModelSO::ToSongPackMask)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2214bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskModelSO*>::get(), "ToSongPackMask", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMaskModelSO.ToSerializedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SongPackMaskModelSO::*)(::GlobalNamespace::SongPackMask, ByRef<::StringW>)>(
    &::GlobalNamespace::SongPackMaskModelSO::ToSerializedName)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2214bec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskModelSO*>::get(), "ToSerializedName", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMaskModelSO.ToSerializedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::SongPackMaskModelSO::*)(::GlobalNamespace::SongPackMask)>(
    &::GlobalNamespace::SongPackMaskModelSO::ToSerializedName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2214c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskModelSO*>::get(), "ToSerializedName", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMaskModelSO.LazyInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPackMaskModelSO::*)()>(&::GlobalNamespace::SongPackMaskModelSO::LazyInit)> {
  constexpr static std::size_t size = 0x6e4;
  constexpr static std::size_t addrs = 0x2214464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskModelSO*>::get(), "LazyInit",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMaskModelSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPackMaskModelSO::*)()>(&::GlobalNamespace::SongPackMaskModelSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22150e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskModelSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::SongPackMaskModelSO::__get__defaultSongPackMaskItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultSongPackMaskItems;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GlobalNamespace::SongPackMaskModelSO::__get__defaultSongPackMaskItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultSongPackMaskItems;
}
constexpr void GlobalNamespace::SongPackMaskModelSO::__set__defaultSongPackMaskItems(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultSongPackMaskItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*, ::Array<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*>*>&
GlobalNamespace::SongPackMaskModelSO::__get__customSongPackMaskItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customSongPackMaskItems;
}
constexpr ::ArrayW<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*, ::Array<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*>*> const&
GlobalNamespace::SongPackMaskModelSO::__get__customSongPackMaskItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customSongPackMaskItems;
}
constexpr void GlobalNamespace::SongPackMaskModelSO::__set__customSongPackMaskItems(
    ::ArrayW<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*, ::Array<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____customSongPackMaskItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelPackCollectionSO*& GlobalNamespace::SongPackMaskModelSO::__get__ostAndExtrasCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ostAndExtrasCollection;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPackCollectionSO*> const& GlobalNamespace::SongPackMaskModelSO::__get__ostAndExtrasCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ostAndExtrasCollection;
}
constexpr void GlobalNamespace::SongPackMaskModelSO::__set__ostAndExtrasCollection(::GlobalNamespace::BeatmapLevelPackCollectionSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ostAndExtrasCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelPackCollectionSO*& GlobalNamespace::SongPackMaskModelSO::__get__dlcCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcCollection;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPackCollectionSO*> const& GlobalNamespace::SongPackMaskModelSO::__get__dlcCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dlcCollection;
}
constexpr void GlobalNamespace::SongPackMaskModelSO::__set__dlcCollection(::GlobalNamespace::BeatmapLevelPackCollectionSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dlcCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Polyglot::Language& GlobalNamespace::SongPackMaskModelSO::__get__currentLocalizedLanguage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentLocalizedLanguage;
}
constexpr ::Polyglot::Language const& GlobalNamespace::SongPackMaskModelSO::__get__currentLocalizedLanguage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentLocalizedLanguage;
}
constexpr void GlobalNamespace::SongPackMaskModelSO::__set__currentLocalizedLanguage(::Polyglot::Language value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentLocalizedLanguage = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::ValueTuple_2<::StringW, bool>>*& GlobalNamespace::SongPackMaskModelSO::__get__songPackSerializedNameToLocalizedNameDict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackSerializedNameToLocalizedNameDict;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::ValueTuple_2<::StringW, bool>>*> const&
GlobalNamespace::SongPackMaskModelSO::__get__songPackSerializedNameToLocalizedNameDict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackSerializedNameToLocalizedNameDict;
}
constexpr void
GlobalNamespace::SongPackMaskModelSO::__set__songPackSerializedNameToLocalizedNameDict(::System::Collections::Generic::Dictionary_2<::StringW, ::System::ValueTuple_2<::StringW, bool>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songPackSerializedNameToLocalizedNameDict)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMask>*& GlobalNamespace::SongPackMaskModelSO::__get__songPackSerializedNameToMaskDict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackSerializedNameToMaskDict;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMask>*> const&
GlobalNamespace::SongPackMaskModelSO::__get__songPackSerializedNameToMaskDict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackSerializedNameToMaskDict;
}
constexpr void GlobalNamespace::SongPackMaskModelSO::__set__songPackSerializedNameToMaskDict(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMask>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songPackSerializedNameToMaskDict)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask, ::StringW>*& GlobalNamespace::SongPackMaskModelSO::__get__songPackMaskToSerializedNameDict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackMaskToSerializedNameDict;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask, ::StringW>*> const&
GlobalNamespace::SongPackMaskModelSO::__get__songPackMaskToSerializedNameDict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackMaskToSerializedNameDict;
}
constexpr void GlobalNamespace::SongPackMaskModelSO::__set__songPackMaskToSerializedNameDict(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SongPackMask, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songPackMaskToSerializedNameDict)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::SongPackMaskModelSO::get_defaultSongPackMaskItems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskModelSO*>::get(),
                                                                             "get_defaultSongPackMaskItems", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*, ::Array<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*>*>
GlobalNamespace::SongPackMaskModelSO::get_customSongPackMaskItems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskModelSO*>::get(),
                                                                             "get_customSongPackMaskItems", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*, ::Array<::GlobalNamespace::__SongPackMaskModelSO__SongPackMaskItem*>*>, false>(
      this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelPackCollectionSO* GlobalNamespace::SongPackMaskModelSO::get_ostAndExtrasCollection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskModelSO*>::get(),
                                                                             "get_ostAndExtrasCollection", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelPackCollectionSO*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelPackCollectionSO* GlobalNamespace::SongPackMaskModelSO::get_dlcCollection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskModelSO*>::get(),
                                                                             "get_dlcCollection", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelPackCollectionSO*, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::SongPackMaskModelSO::ToLocalizedName(::StringW serializedName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskModelSO*>::get(), "ToLocalizedName", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, serializedName);
}
inline ::StringW GlobalNamespace::SongPackMaskModelSO::ToLocalizedName(::StringW serializedName, ByRef<bool> plural) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskModelSO*>::get(), "ToLocalizedName", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, serializedName, plural);
}
inline bool GlobalNamespace::SongPackMaskModelSO::ToSongPackMask(::StringW serializedName, ByRef<::GlobalNamespace::SongPackMask> songPackMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskModelSO*>::get(), "ToSongPackMask", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::SongPackMask>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, serializedName, songPackMask);
}
inline ::GlobalNamespace::SongPackMask GlobalNamespace::SongPackMaskModelSO::ToSongPackMask(::StringW serializedName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskModelSO*>::get(), "ToSongPackMask", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SongPackMask, false>(this, ___internal_method, serializedName);
}
inline bool GlobalNamespace::SongPackMaskModelSO::ToSerializedName(::GlobalNamespace::SongPackMask songPackMask, ByRef<::StringW> serializedName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskModelSO*>::get(), "ToSerializedName", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, songPackMask, serializedName);
}
inline ::StringW GlobalNamespace::SongPackMaskModelSO::ToSerializedName(::GlobalNamespace::SongPackMask songPackMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskModelSO*>::get(), "ToSerializedName", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, songPackMask);
}
inline void GlobalNamespace::SongPackMaskModelSO::LazyInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskModelSO*>::get(), "LazyInit",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SongPackMaskModelSO* GlobalNamespace::SongPackMaskModelSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SongPackMaskModelSO*>());
}
inline void GlobalNamespace::SongPackMaskModelSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPackMaskModelSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongPackMaskModelSO::SongPackMaskModelSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
