#pragma once
// IWYU pragma private; include "System/Data/Merger.hpp"
#include "System/Data/zzzz__MissingSchemaAction_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__Merger_def.hpp"
#include "System/Data/zzzz__DataKey_def.hpp"
#include "System/Data/zzzz__DataRelation_def.hpp"
#include "System/Data/zzzz__DataSet_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__MissingSchemaAction_def.hpp"
#include "System/Data/zzzz__PropertyCollection_def.hpp"
//  Writing Method size for method: ::System::Data::Merger._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Merger::*)(::System::Data::DataSet*, bool, ::System::Data::MissingSchemaAction)>(
    &::System::Data::Merger::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x41813a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Merger*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::MissingSchemaAction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Merger._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Merger::*)(::System::Data::DataTable*, bool, ::System::Data::MissingSchemaAction)>(
    &::System::Data::Merger::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x41813e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Merger*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::MissingSchemaAction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Merger.MergeDataSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Merger::*)(::System::Data::DataSet*)>(&::System::Data::Merger::MergeDataSet)> {
  constexpr static std::size_t size = 0x10ec;
  constexpr static std::size_t addrs = 0x4181438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Merger*>::get(), "MergeDataSet", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Merger.MergeTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Merger::*)(::System::Data::DataTable*)>(&::System::Data::Merger::MergeTable)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x4183000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Merger*>::get(), "MergeTable", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Merger.MergeTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Merger::*)(::System::Data::DataTable*, ::System::Data::DataTable*)>(
    &::System::Data::Merger::MergeTable)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x418322c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Merger*>::get(), "MergeTable", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Merger.MergeSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataTable* (::System::Data::Merger::*)(::System::Data::DataTable*)>(
    &::System::Data::Merger::MergeSchema)> {
  constexpr static std::size_t size = 0x710;
  constexpr static std::size_t addrs = 0x418381c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Merger*>::get(), "MergeSchema", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Merger.MergeTableData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Merger::*)(::System::Data::DataTable*)>(&::System::Data::Merger::MergeTableData)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4182524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Merger*>::get(), "MergeTableData", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Merger.MergeConstraints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Merger::*)(::System::Data::DataSet*)>(&::System::Data::Merger::MergeConstraints)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x41825ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Merger*>::get(), "MergeConstraints", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Merger.MergeConstraints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Merger::*)(::System::Data::DataTable*)>(&::System::Data::Merger::MergeConstraints)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x4183f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Merger*>::get(), "MergeConstraints", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Merger.MergeRelation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Merger::*)(::System::Data::DataRelation*)>(&::System::Data::Merger::MergeRelation)> {
  constexpr static std::size_t size = 0x790;
  constexpr static std::size_t addrs = 0x418261c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Merger*>::get(), "MergeRelation", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRelation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Merger.MergeExtendedProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Merger::*)(::System::Data::PropertyCollection*, ::System::Data::PropertyCollection*)>(
    &::System::Data::Merger::MergeExtendedProperties)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x4182dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Merger*>::get(), "MergeExtendedProperties", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::PropertyCollection*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::PropertyCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::Merger.GetSrcKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataKey (::System::Data::Merger::*)(::System::Data::DataTable*, ::System::Data::DataTable*)>(
    &::System::Data::Merger::GetSrcKey)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x41836d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Merger*>::get(), "GetSrcKey", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataSet*& System::Data::Merger::__cordl_internal_get__dataSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSet;
}
constexpr ::System::Data::DataSet* const& System::Data::Merger::__cordl_internal_get__dataSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSet;
}
constexpr void System::Data::Merger::__cordl_internal_set__dataSet(::System::Data::DataSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dataSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataTable*& System::Data::Merger::__cordl_internal_get__dataTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataTable;
}
constexpr ::System::Data::DataTable* const& System::Data::Merger::__cordl_internal_get__dataTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataTable;
}
constexpr void System::Data::Merger::__cordl_internal_set__dataTable(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dataTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Data::Merger::__cordl_internal_get__preserveChanges() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preserveChanges;
}
constexpr bool const& System::Data::Merger::__cordl_internal_get__preserveChanges() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preserveChanges;
}
constexpr void System::Data::Merger::__cordl_internal_set__preserveChanges(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____preserveChanges = value;
}
constexpr ::System::Data::MissingSchemaAction& System::Data::Merger::__cordl_internal_get__missingSchemaAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missingSchemaAction;
}
constexpr ::System::Data::MissingSchemaAction const& System::Data::Merger::__cordl_internal_get__missingSchemaAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missingSchemaAction;
}
constexpr void System::Data::Merger::__cordl_internal_set__missingSchemaAction(::System::Data::MissingSchemaAction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missingSchemaAction = value;
}
constexpr bool& System::Data::Merger::__cordl_internal_get__isStandAlonetable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isStandAlonetable;
}
constexpr bool const& System::Data::Merger::__cordl_internal_get__isStandAlonetable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isStandAlonetable;
}
constexpr void System::Data::Merger::__cordl_internal_set__isStandAlonetable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isStandAlonetable = value;
}
constexpr bool& System::Data::Merger::__cordl_internal_get__IgnoreNSforTableLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IgnoreNSforTableLookup;
}
constexpr bool const& System::Data::Merger::__cordl_internal_get__IgnoreNSforTableLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IgnoreNSforTableLookup;
}
constexpr void System::Data::Merger::__cordl_internal_set__IgnoreNSforTableLookup(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IgnoreNSforTableLookup = value;
}
inline void System::Data::Merger::_ctor(::System::Data::DataSet* dataSet, bool preserveChanges, ::System::Data::MissingSchemaAction missingSchemaAction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Merger*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::MissingSchemaAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataSet, preserveChanges, missingSchemaAction);
}
inline void System::Data::Merger::_ctor(::System::Data::DataTable* dataTable, bool preserveChanges, ::System::Data::MissingSchemaAction missingSchemaAction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Merger*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::MissingSchemaAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataTable, preserveChanges, missingSchemaAction);
}
inline void System::Data::Merger::MergeDataSet(::System::Data::DataSet* source) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Merger*>::get(), "MergeDataSet", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source);
}
inline void System::Data::Merger::MergeTable(::System::Data::DataTable* src) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Merger*>::get(), "MergeTable", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, src);
}
inline void System::Data::Merger::MergeTable(::System::Data::DataTable* src, ::System::Data::DataTable* dst) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Merger*>::get(), "MergeTable", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, src, dst);
}
inline ::System::Data::DataTable* System::Data::Merger::MergeSchema(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Merger*>::get(), "MergeSchema", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*, false>(this, ___internal_method, table);
}
inline void System::Data::Merger::MergeTableData(::System::Data::DataTable* src) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Merger*>::get(), "MergeTableData", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, src);
}
inline void System::Data::Merger::MergeConstraints(::System::Data::DataSet* source) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Merger*>::get(), "MergeConstraints", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source);
}
inline void System::Data::Merger::MergeConstraints(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Merger*>::get(), "MergeConstraints", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, table);
}
inline void System::Data::Merger::MergeRelation(::System::Data::DataRelation* relation) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Merger*>::get(), "MergeRelation", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRelation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, relation);
}
inline void System::Data::Merger::MergeExtendedProperties(::System::Data::PropertyCollection* src, ::System::Data::PropertyCollection* dst) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Merger*>::get(), "MergeExtendedProperties", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::PropertyCollection*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::PropertyCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, src, dst);
}
inline ::System::Data::DataKey System::Data::Merger::GetSrcKey(::System::Data::DataTable* src, ::System::Data::DataTable* dst) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Merger*>::get(), "GetSrcKey", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataKey, false>(this, ___internal_method, src, dst);
}
inline ::System::Data::Merger* System::Data::Merger::New_ctor(::System::Data::DataSet* dataSet, bool preserveChanges, ::System::Data::MissingSchemaAction missingSchemaAction) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::Merger*>(dataSet, preserveChanges, missingSchemaAction));
}
inline ::System::Data::Merger* System::Data::Merger::New_ctor(::System::Data::DataTable* dataTable, bool preserveChanges, ::System::Data::MissingSchemaAction missingSchemaAction) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::Merger*>(dataTable, preserveChanges, missingSchemaAction));
}
// Ctor Parameters []
constexpr ::System::Data::Merger::Merger() {}
