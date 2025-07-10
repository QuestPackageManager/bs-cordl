#pragma once
// IWYU pragma private; include "System/Data/XmlDataTreeWriter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__XmlDataTreeWriter_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/Data/zzzz__DataSet_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::XmlDataTreeWriter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlDataTreeWriter::*)(::System::Data::DataSet*)>(&::System::Data::XmlDataTreeWriter::_ctor)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x41b8d2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataTreeWriter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataTreeWriter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlDataTreeWriter::*)(::System::Data::DataTable*, bool)>(
    &::System::Data::XmlDataTreeWriter::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x41b8534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataTreeWriter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataTreeWriter.CreateToplevelTables
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Data::DataTable*, ::Array<::System::Data::DataTable*>*> (::System::Data::XmlDataTreeWriter::*)()>(
    &::System::Data::XmlDataTreeWriter::CreateToplevelTables)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x41baacc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataTreeWriter*>::get(),
                                                                               "CreateToplevelTables", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataTreeWriter.CreateTablesHierarchy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlDataTreeWriter::*)(::System::Data::DataTable*)>(
    &::System::Data::XmlDataTreeWriter::CreateTablesHierarchy)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x41ba748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataTreeWriter*>::get(), "CreateTablesHierarchy", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataTreeWriter.RowHasErrors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Data::DataRow*)>(&::System::Data::XmlDataTreeWriter::RowHasErrors)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x41b9bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataTreeWriter*>::get(), "RowHasErrors", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataTreeWriter.SaveDiffgramData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlDataTreeWriter::*)(::System::Xml::XmlWriter*, ::System::Collections::Hashtable*)>(
    &::System::Data::XmlDataTreeWriter::SaveDiffgramData)> {
  constexpr static std::size_t size = 0x6a8;
  constexpr static std::size_t addrs = 0x41b8684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataTreeWriter*>::get(), "SaveDiffgramData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataTreeWriter.Save
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlDataTreeWriter::*)(::System::Xml::XmlWriter*, bool)>(
    &::System::Data::XmlDataTreeWriter::Save)> {
  constexpr static std::size_t size = 0x8d4;
  constexpr static std::size_t addrs = 0x41bc6f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataTreeWriter*>::get(), "Save", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataTreeWriter.GetNestedChildRelations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (::System::Data::XmlDataTreeWriter::*)(::System::Data::DataRow*)>(
    &::System::Data::XmlDataTreeWriter::GetNestedChildRelations)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x41bcfc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataTreeWriter*>::get(), "GetNestedChildRelations", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataTreeWriter.XmlDataRowWriter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XmlDataTreeWriter::*)(::System::Data::DataRow*, ::StringW)>(
    &::System::Data::XmlDataTreeWriter::XmlDataRowWriter)> {
  constexpr static std::size_t size = 0x193c;
  constexpr static std::size_t addrs = 0x41badb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataTreeWriter*>::get(), "XmlDataRowWriter", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XmlDataTreeWriter.PreserveSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Object*)>(&::System::Data::XmlDataTreeWriter::PreserveSpace)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x41ba68c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataTreeWriter*>::get(), "PreserveSpace", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlWriter*& System::Data::XmlDataTreeWriter::__cordl_internal_get__xmlw() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmlw;
}
constexpr ::System::Xml::XmlWriter* const& System::Data::XmlDataTreeWriter::__cordl_internal_get__xmlw() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmlw;
}
constexpr void System::Data::XmlDataTreeWriter::__cordl_internal_set__xmlw(::System::Xml::XmlWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____xmlw)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataSet*& System::Data::XmlDataTreeWriter::__cordl_internal_get__ds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ds;
}
constexpr ::System::Data::DataSet* const& System::Data::XmlDataTreeWriter::__cordl_internal_get__ds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ds;
}
constexpr void System::Data::XmlDataTreeWriter::__cordl_internal_set__ds(::System::Data::DataSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataTable*& System::Data::XmlDataTreeWriter::__cordl_internal_get__dt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dt;
}
constexpr ::System::Data::DataTable* const& System::Data::XmlDataTreeWriter::__cordl_internal_get__dt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dt;
}
constexpr void System::Data::XmlDataTreeWriter::__cordl_internal_set__dt(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dt)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Data::XmlDataTreeWriter::__cordl_internal_get__dTables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dTables;
}
constexpr ::System::Collections::ArrayList* const& System::Data::XmlDataTreeWriter::__cordl_internal_get__dTables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dTables;
}
constexpr void System::Data::XmlDataTreeWriter::__cordl_internal_set__dTables(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dTables)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Data::DataTable*, ::Array<::System::Data::DataTable*>*>& System::Data::XmlDataTreeWriter::__cordl_internal_get__topLevelTables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topLevelTables;
}
constexpr ::ArrayW<::System::Data::DataTable*, ::Array<::System::Data::DataTable*>*> const& System::Data::XmlDataTreeWriter::__cordl_internal_get__topLevelTables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topLevelTables;
}
constexpr void System::Data::XmlDataTreeWriter::__cordl_internal_set__topLevelTables(::ArrayW<::System::Data::DataTable*, ::Array<::System::Data::DataTable*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____topLevelTables)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Data::XmlDataTreeWriter::__cordl_internal_get__fFromTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fFromTable;
}
constexpr bool const& System::Data::XmlDataTreeWriter::__cordl_internal_get__fFromTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fFromTable;
}
constexpr void System::Data::XmlDataTreeWriter::__cordl_internal_set__fFromTable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fFromTable = value;
}
constexpr bool& System::Data::XmlDataTreeWriter::__cordl_internal_get__isDiffgram() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDiffgram;
}
constexpr bool const& System::Data::XmlDataTreeWriter::__cordl_internal_get__isDiffgram() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDiffgram;
}
constexpr void System::Data::XmlDataTreeWriter::__cordl_internal_set__isDiffgram(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isDiffgram = value;
}
constexpr ::System::Collections::Hashtable*& System::Data::XmlDataTreeWriter::__cordl_internal_get__rowsOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowsOrder;
}
constexpr ::System::Collections::Hashtable* const& System::Data::XmlDataTreeWriter::__cordl_internal_get__rowsOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowsOrder;
}
constexpr void System::Data::XmlDataTreeWriter::__cordl_internal_set__rowsOrder(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rowsOrder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Data::XmlDataTreeWriter::__cordl_internal_get__writeHierarchy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writeHierarchy;
}
constexpr bool const& System::Data::XmlDataTreeWriter::__cordl_internal_get__writeHierarchy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writeHierarchy;
}
constexpr void System::Data::XmlDataTreeWriter::__cordl_internal_set__writeHierarchy(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____writeHierarchy = value;
}
inline void System::Data::XmlDataTreeWriter::_ctor(::System::Data::DataSet* ds) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataTreeWriter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ds);
}
inline void System::Data::XmlDataTreeWriter::_ctor(::System::Data::DataTable* dt, bool writeHierarchy) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataTreeWriter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dt, writeHierarchy);
}
inline ::ArrayW<::System::Data::DataTable*, ::Array<::System::Data::DataTable*>*> System::Data::XmlDataTreeWriter::CreateToplevelTables() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataTreeWriter*>::get(), "CreateToplevelTables",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataTable*, ::Array<::System::Data::DataTable*>*>, false>(this, ___internal_method);
}
inline void System::Data::XmlDataTreeWriter::CreateTablesHierarchy(::System::Data::DataTable* dt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataTreeWriter*>::get(), "CreateTablesHierarchy", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dt);
}
inline bool System::Data::XmlDataTreeWriter::RowHasErrors(::System::Data::DataRow* row) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataTreeWriter*>::get(), "RowHasErrors", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, row);
}
inline void System::Data::XmlDataTreeWriter::SaveDiffgramData(::System::Xml::XmlWriter* xw, ::System::Collections::Hashtable* rowsOrder) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataTreeWriter*>::get(), "SaveDiffgramData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xw, rowsOrder);
}
inline void System::Data::XmlDataTreeWriter::Save(::System::Xml::XmlWriter* xw, bool writeSchema) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataTreeWriter*>::get(), "Save", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xw, writeSchema);
}
inline ::System::Collections::ArrayList* System::Data::XmlDataTreeWriter::GetNestedChildRelations(::System::Data::DataRow* row) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataTreeWriter*>::get(), "GetNestedChildRelations", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(this, ___internal_method, row);
}
inline void System::Data::XmlDataTreeWriter::XmlDataRowWriter(::System::Data::DataRow* row, ::StringW encodedTableName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataTreeWriter*>::get(), "XmlDataRowWriter", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, row, encodedTableName);
}
inline bool System::Data::XmlDataTreeWriter::PreserveSpace(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XmlDataTreeWriter*>::get(), "PreserveSpace", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
inline ::System::Data::XmlDataTreeWriter* System::Data::XmlDataTreeWriter::New_ctor(::System::Data::DataSet* ds) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::XmlDataTreeWriter*>(ds));
}
inline ::System::Data::XmlDataTreeWriter* System::Data::XmlDataTreeWriter::New_ctor(::System::Data::DataTable* dt, bool writeHierarchy) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::XmlDataTreeWriter*>(dt, writeHierarchy));
}
// Ctor Parameters []
constexpr ::System::Data::XmlDataTreeWriter::XmlDataTreeWriter() {}
