#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__EncodingTable_def.hpp"
#include "System/Globalization/zzzz__InternalCodePageDataItem_def.hpp"
#include "System/Globalization/zzzz__InternalEncodingDataItem_def.hpp"
#include "System/Globalization/zzzz__CodePageDataItem_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::System::Globalization::EncodingTable.GetNumEncodingItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::Globalization::EncodingTable::GetNumEncodingItems)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x256c824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::EncodingTable*>::get(),
                                                                               "GetNumEncodingItems", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::EncodingTable.ENC
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::InternalEncodingDataItem (*)(::StringW, uint16_t)>(
    &::System::Globalization::EncodingTable::ENC)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x256c888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::EncodingTable*>::get(), "ENC", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::EncodingTable.MapCodePageDataItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::InternalCodePageDataItem (*)(uint16_t, uint16_t, ::StringW, uint32_t)>(
    &::System::Globalization::EncodingTable::MapCodePageDataItem)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x256c890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::EncodingTable*>::get(), "MapCodePageDataItem", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::EncodingTable.internalGetCodePageFromName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&::System::Globalization::EncodingTable::internalGetCodePageFromName)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x2571d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::EncodingTable*>::get(), "internalGetCodePageFromName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::EncodingTable.GetCodePageFromName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&::System::Globalization::EncodingTable::GetCodePageFromName)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x2571fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::EncodingTable*>::get(), "GetCodePageFromName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::EncodingTable.GetCodePageDataItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CodePageDataItem* (*)(int32_t)>(
    &::System::Globalization::EncodingTable::GetCodePageDataItem)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x2572238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::EncodingTable*>::get(), "GetCodePageDataItem",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void
System::Globalization::EncodingTable::setStaticF_encodingDataPtr(::ArrayW<::System::Globalization::InternalEncodingDataItem, ::Array<::System::Globalization::InternalEncodingDataItem>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Globalization::InternalEncodingDataItem, ::Array<::System::Globalization::InternalEncodingDataItem>*>, "encodingDataPtr",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::EncodingTable*>::get>(
      std::forward<::ArrayW<::System::Globalization::InternalEncodingDataItem, ::Array<::System::Globalization::InternalEncodingDataItem>*>>(value));
}
inline ::ArrayW<::System::Globalization::InternalEncodingDataItem, ::Array<::System::Globalization::InternalEncodingDataItem>*> System::Globalization::EncodingTable::getStaticF_encodingDataPtr() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Globalization::InternalEncodingDataItem, ::Array<::System::Globalization::InternalEncodingDataItem>*>, "encodingDataPtr",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::EncodingTable*>::get>();
}
inline void
System::Globalization::EncodingTable::setStaticF_codePageDataPtr(::ArrayW<::System::Globalization::InternalCodePageDataItem, ::Array<::System::Globalization::InternalCodePageDataItem>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Globalization::InternalCodePageDataItem, ::Array<::System::Globalization::InternalCodePageDataItem>*>, "codePageDataPtr",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::EncodingTable*>::get>(
      std::forward<::ArrayW<::System::Globalization::InternalCodePageDataItem, ::Array<::System::Globalization::InternalCodePageDataItem>*>>(value));
}
inline ::ArrayW<::System::Globalization::InternalCodePageDataItem, ::Array<::System::Globalization::InternalCodePageDataItem>*> System::Globalization::EncodingTable::getStaticF_codePageDataPtr() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Globalization::InternalCodePageDataItem, ::Array<::System::Globalization::InternalCodePageDataItem>*>, "codePageDataPtr",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::EncodingTable*>::get>();
}
inline void System::Globalization::EncodingTable::setStaticF_lastEncodingItem(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "lastEncodingItem", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::EncodingTable*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Globalization::EncodingTable::getStaticF_lastEncodingItem() {
  return ::cordl_internals::getStaticField<int32_t, "lastEncodingItem", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::EncodingTable*>::get>();
}
inline void System::Globalization::EncodingTable::setStaticF_hashByName(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*, "hashByName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::EncodingTable*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* System::Globalization::EncodingTable::getStaticF_hashByName() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*, "hashByName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::EncodingTable*>::get>();
}
inline void System::Globalization::EncodingTable::setStaticF_hashByCodePage(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Globalization::CodePageDataItem*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Globalization::CodePageDataItem*>*, "hashByCodePage",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::EncodingTable*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Globalization::CodePageDataItem*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Globalization::CodePageDataItem*>* System::Globalization::EncodingTable::getStaticF_hashByCodePage() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Globalization::CodePageDataItem*>*, "hashByCodePage",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::EncodingTable*>::get>();
}
inline int32_t System::Globalization::EncodingTable::GetNumEncodingItems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::EncodingTable*>::get(),
                                                                             "GetNumEncodingItems", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline ::System::Globalization::InternalEncodingDataItem System::Globalization::EncodingTable::ENC(::StringW name, uint16_t cp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::EncodingTable*>::get(), "ENC", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::InternalEncodingDataItem, false>(nullptr, ___internal_method, name, cp);
}
inline ::System::Globalization::InternalCodePageDataItem System::Globalization::EncodingTable::MapCodePageDataItem(uint16_t cp, uint16_t fcp, ::StringW names, uint32_t flags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::EncodingTable*>::get(), "MapCodePageDataItem", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::InternalCodePageDataItem, false>(nullptr, ___internal_method, cp, fcp, names, flags);
}
inline int32_t System::Globalization::EncodingTable::internalGetCodePageFromName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::EncodingTable*>::get(), "internalGetCodePageFromName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, name);
}
inline int32_t System::Globalization::EncodingTable::GetCodePageFromName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::EncodingTable*>::get(), "GetCodePageFromName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, name);
}
inline ::System::Globalization::CodePageDataItem* System::Globalization::EncodingTable::GetCodePageDataItem(int32_t codepage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::EncodingTable*>::get(), "GetCodePageDataItem",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CodePageDataItem*, false>(nullptr, ___internal_method, codepage);
}
// Ctor Parameters []
constexpr ::System::Globalization::EncodingTable::EncodingTable() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
