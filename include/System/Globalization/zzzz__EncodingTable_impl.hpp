#pragma once
// IWYU pragma private; include "System\Globalization\EncodingTable.hpp"
#include "System/Globalization/zzzz__InternalCodePageDataItem_impl.hpp"
#include "System/Globalization/zzzz__InternalEncodingDataItem_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__EncodingTable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Globalization/zzzz__CodePageDataItem_def.hpp"
#include "System/Globalization/zzzz__InternalCodePageDataItem_def.hpp"
#include "System/Globalization/zzzz__InternalEncodingDataItem_def.hpp"
//  Writing Method size for method: ::System::Globalization::EncodingTable.GetNumEncodingItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Globalization::EncodingTable::GetNumEncodingItems)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5bd3200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::EncodingTable*>(), { "GetNumEncodingItems", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::EncodingTable.ENC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::InternalEncodingDataItem (*)(::StringW, uint16_t)>(&::System::Globalization::EncodingTable::ENC)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bd3268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::EncodingTable*>(), { "ENC", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::EncodingTable.MapCodePageDataItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::InternalCodePageDataItem (*)(uint16_t, uint16_t, ::StringW, uint32_t)>(
    &::System::Globalization::EncodingTable::MapCodePageDataItem)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5bd3270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::EncodingTable*>(),
                                                { "MapCodePageDataItem", {}, { ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::EncodingTable.internalGetCodePageFromName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::System::Globalization::EncodingTable::internalGetCodePageFromName)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5bd8d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::EncodingTable*>(), { "internalGetCodePageFromName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::EncodingTable.GetCodePageFromName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::System::Globalization::EncodingTable::GetCodePageFromName)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5bd8f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::EncodingTable*>(), { "GetCodePageFromName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::EncodingTable.GetCodePageDataItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CodePageDataItem* (*)(int32_t)>(&::System::Globalization::EncodingTable::GetCodePageDataItem)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x5bd922c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::EncodingTable*>(), { "GetCodePageDataItem", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void System::Globalization::EncodingTable::setStaticF_encodingDataPtr(::ArrayW<::System::Globalization::InternalEncodingDataItem> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Globalization::InternalEncodingDataItem>, "encodingDataPtr", ::System::Globalization::EncodingTable*>(
      std::forward<::ArrayW<::System::Globalization::InternalEncodingDataItem>>(value));
}
inline ::ArrayW<::System::Globalization::InternalEncodingDataItem> System::Globalization::EncodingTable::getStaticF_encodingDataPtr() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Globalization::InternalEncodingDataItem>, "encodingDataPtr", ::System::Globalization::EncodingTable*>();
}
inline void System::Globalization::EncodingTable::setStaticF_codePageDataPtr(::ArrayW<::System::Globalization::InternalCodePageDataItem> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Globalization::InternalCodePageDataItem>, "codePageDataPtr", ::System::Globalization::EncodingTable*>(
      std::forward<::ArrayW<::System::Globalization::InternalCodePageDataItem>>(value));
}
inline ::ArrayW<::System::Globalization::InternalCodePageDataItem> System::Globalization::EncodingTable::getStaticF_codePageDataPtr() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Globalization::InternalCodePageDataItem>, "codePageDataPtr", ::System::Globalization::EncodingTable*>();
}
inline void System::Globalization::EncodingTable::setStaticF_lastEncodingItem(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "lastEncodingItem", ::System::Globalization::EncodingTable*>(std::forward<int32_t>(value));
}
inline int32_t System::Globalization::EncodingTable::getStaticF_lastEncodingItem() {
  return ::cordl_internals::getStaticField<int32_t, "lastEncodingItem", ::System::Globalization::EncodingTable*>();
}
inline void System::Globalization::EncodingTable::setStaticF_hashByName(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*, "hashByName", ::System::Globalization::EncodingTable*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* System::Globalization::EncodingTable::getStaticF_hashByName() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*, "hashByName", ::System::Globalization::EncodingTable*>();
}
inline void System::Globalization::EncodingTable::setStaticF_hashByCodePage(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Globalization::CodePageDataItem*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Globalization::CodePageDataItem*>*, "hashByCodePage", ::System::Globalization::EncodingTable*>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Globalization::CodePageDataItem*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Globalization::CodePageDataItem*>* System::Globalization::EncodingTable::getStaticF_hashByCodePage() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Globalization::CodePageDataItem*>*, "hashByCodePage",
                                           ::System::Globalization::EncodingTable*>();
}
inline int32_t System::Globalization::EncodingTable::GetNumEncodingItems() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::EncodingTable*>(), { "GetNumEncodingItems", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::System::Globalization::InternalEncodingDataItem System::Globalization::EncodingTable::ENC(::StringW name, uint16_t cp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::EncodingTable*>(), { "ENC", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::InternalEncodingDataItem>(nullptr, ___internal_method, name, cp);
}
inline ::System::Globalization::InternalCodePageDataItem System::Globalization::EncodingTable::MapCodePageDataItem(uint16_t cp, uint16_t fcp, ::StringW names, uint32_t flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::EncodingTable*>(),
                                              { "MapCodePageDataItem", {}, { ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::InternalCodePageDataItem>(nullptr, ___internal_method, cp, fcp, names, flags);
}
inline int32_t System::Globalization::EncodingTable::internalGetCodePageFromName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::EncodingTable*>(), { "internalGetCodePageFromName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, name);
}
inline int32_t System::Globalization::EncodingTable::GetCodePageFromName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::EncodingTable*>(), { "GetCodePageFromName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, name);
}
inline ::System::Globalization::CodePageDataItem* System::Globalization::EncodingTable::GetCodePageDataItem(int32_t codepage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::EncodingTable*>(), { "GetCodePageDataItem", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CodePageDataItem*>(nullptr, ___internal_method, codepage);
}
// Ctor Parameters []
constexpr ::System::Globalization::EncodingTable::EncodingTable() {}
