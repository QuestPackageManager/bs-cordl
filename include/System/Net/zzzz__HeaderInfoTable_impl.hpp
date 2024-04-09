#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__HeaderInfoTable_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Net/zzzz__HeaderInfo_def.hpp"
#include "System/Net/zzzz__HeaderParser_def.hpp"
//  Writing Method size for method: ::System::Net::HeaderInfoTable.ParseSingleValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (*)(::StringW)>(&::System::Net::HeaderInfoTable::ParseSingleValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2ed77b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HeaderInfoTable*>::get(), "ParseSingleValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HeaderInfoTable.ParseMultiValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (*)(::StringW)>(&::System::Net::HeaderInfoTable::ParseMultiValue)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2ed7848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HeaderInfoTable*>::get(), "ParseMultiValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HeaderInfoTable.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HeaderInfo* (::System::Net::HeaderInfoTable::*)(::StringW)>(
    &::System::Net::HeaderInfoTable::get_Item)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2ed17e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HeaderInfoTable*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HeaderInfoTable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HeaderInfoTable::*)()>(&::System::Net::HeaderInfoTable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ed3f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HeaderInfoTable*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Net::HeaderInfoTable::setStaticF_HeaderHashTable(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "HeaderHashTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HeaderInfoTable*>::get>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Net::HeaderInfoTable::getStaticF_HeaderHashTable() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "HeaderHashTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HeaderInfoTable*>::get>();
}
inline void System::Net::HeaderInfoTable::setStaticF_UnknownHeaderInfo(::System::Net::HeaderInfo* value) {
  ::cordl_internals::setStaticField<::System::Net::HeaderInfo*, "UnknownHeaderInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HeaderInfoTable*>::get>(
      std::forward<::System::Net::HeaderInfo*>(value));
}
inline ::System::Net::HeaderInfo* System::Net::HeaderInfoTable::getStaticF_UnknownHeaderInfo() {
  return ::cordl_internals::getStaticField<::System::Net::HeaderInfo*, "UnknownHeaderInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HeaderInfoTable*>::get>();
}
inline void System::Net::HeaderInfoTable::setStaticF_SingleParser(::System::Net::HeaderParser* value) {
  ::cordl_internals::setStaticField<::System::Net::HeaderParser*, "SingleParser", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HeaderInfoTable*>::get>(
      std::forward<::System::Net::HeaderParser*>(value));
}
inline ::System::Net::HeaderParser* System::Net::HeaderInfoTable::getStaticF_SingleParser() {
  return ::cordl_internals::getStaticField<::System::Net::HeaderParser*, "SingleParser", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HeaderInfoTable*>::get>();
}
inline void System::Net::HeaderInfoTable::setStaticF_MultiParser(::System::Net::HeaderParser* value) {
  ::cordl_internals::setStaticField<::System::Net::HeaderParser*, "MultiParser", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HeaderInfoTable*>::get>(
      std::forward<::System::Net::HeaderParser*>(value));
}
inline ::System::Net::HeaderParser* System::Net::HeaderInfoTable::getStaticF_MultiParser() {
  return ::cordl_internals::getStaticField<::System::Net::HeaderParser*, "MultiParser", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HeaderInfoTable*>::get>();
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Net::HeaderInfoTable::ParseSingleValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HeaderInfoTable*>::get(), "ParseSingleValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(nullptr, ___internal_method, value);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Net::HeaderInfoTable::ParseMultiValue(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HeaderInfoTable*>::get(), "ParseMultiValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(nullptr, ___internal_method, value);
}
inline ::System::Net::HeaderInfo* System::Net::HeaderInfoTable::get_Item(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HeaderInfoTable*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HeaderInfo*, false>(this, ___internal_method, name);
}
inline ::System::Net::HeaderInfoTable* System::Net::HeaderInfoTable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::HeaderInfoTable*>());
}
inline void System::Net::HeaderInfoTable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HeaderInfoTable*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::HeaderInfoTable::HeaderInfoTable() {}
