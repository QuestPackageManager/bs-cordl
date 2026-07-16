#pragma once
// IWYU pragma private; include "System/Data/RelatedView.hpp"
#include "System/Data/zzzz__DataKey_impl.hpp"
#include "System/Data/zzzz__DataView_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__RelatedView_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Data/zzzz__DataKey_def.hpp"
#include "System/Data/zzzz__DataRowVersion_def.hpp"
#include "System/Data/zzzz__DataRowView_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/Data/zzzz__DataViewRowState_def.hpp"
#include "System/Data/zzzz__IFilter_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::RelatedView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::RelatedView::*)(::ArrayW<::System::Data::DataColumn*>, ::ArrayW<::System::Object*>)>(
    &::System::Data::RelatedView::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6046808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RelatedView*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::RelatedView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::RelatedView::*)(::System::Data::DataRowView*, ::System::Data::DataKey, ::ArrayW<::System::Data::DataColumn*>)>(
    &::System::Data::RelatedView::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6046924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::RelatedView*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Data::DataRowView*>(), ::i2c::type_of<::System::Data::DataKey>(), ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::RelatedView.GetParentValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Data::RelatedView::*)()>(&::System::Data::RelatedView::GetParentValues)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6046a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RelatedView*>(), { "GetParentValues", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::RelatedView.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::RelatedView::*)(::System::Data::DataRow*, ::System::Data::DataRowVersion)>(&::System::Data::RelatedView::Invoke)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6046ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::RelatedView*>(), { "Invoke", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowVersion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::RelatedView.GetFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::IFilter* (::System::Data::RelatedView::*)()>(&::System::Data::RelatedView::GetFilter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6046c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::RelatedView*>(), { ::i2c::class_of<::System::Data::RelatedView*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::RelatedView.AddNew
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRowView* (::System::Data::RelatedView::*)()>(&::System::Data::RelatedView::AddNew)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6046c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::RelatedView*>(), { ::i2c::class_of<::System::Data::RelatedView*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::RelatedView.SetIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::RelatedView::*)(::StringW, ::System::Data::DataViewRowState, ::System::Data::IFilter*)>(
    &::System::Data::RelatedView::SetIndex)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6046cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::RelatedView*>(), { ::i2c::class_of<::System::Data::RelatedView*>(), 47 }));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<::System::Data::DataKey>& System::Data::RelatedView::__cordl_internal_get__parentKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentKey;
}
constexpr ::System::Nullable_1<::System::Data::DataKey> const& System::Data::RelatedView::__cordl_internal_get__parentKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentKey;
}
constexpr void System::Data::RelatedView::__cordl_internal_set__parentKey(::System::Nullable_1<::System::Data::DataKey> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parentKey = value;
}
constexpr ::System::Data::DataKey& System::Data::RelatedView::__cordl_internal_get__childKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childKey;
}
constexpr ::System::Data::DataKey const& System::Data::RelatedView::__cordl_internal_get__childKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childKey;
}
constexpr void System::Data::RelatedView::__cordl_internal_set__childKey(::System::Data::DataKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____childKey = value;
}
constexpr ::System::Data::DataRowView*& System::Data::RelatedView::__cordl_internal_get__parentRowView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentRowView;
}
constexpr ::System::Data::DataRowView* const& System::Data::RelatedView::__cordl_internal_get__parentRowView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentRowView;
}
constexpr void System::Data::RelatedView::__cordl_internal_set__parentRowView(::System::Data::DataRowView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parentRowView = value;
}
constexpr ::ArrayW<::System::Object*>& System::Data::RelatedView::__cordl_internal_get__filterValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterValues;
}
constexpr ::ArrayW<::System::Object*> const& System::Data::RelatedView::__cordl_internal_get__filterValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterValues;
}
constexpr void System::Data::RelatedView::__cordl_internal_set__filterValues(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____filterValues = value;
}
inline void System::Data::RelatedView::_ctor(::ArrayW<::System::Data::DataColumn*> columns, ::ArrayW<::System::Object*> values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RelatedView*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, columns, values);
}
inline void System::Data::RelatedView::_ctor(::System::Data::DataRowView* parentRowView, ::System::Data::DataKey parentKey, ::ArrayW<::System::Data::DataColumn*> childKeyColumns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::RelatedView*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Data::DataRowView*>(), ::i2c::type_of<::System::Data::DataKey>(), ::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentRowView, parentKey, childKeyColumns);
}
inline ::ArrayW<::System::Object*> System::Data::RelatedView::GetParentValues() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::RelatedView*>(), { "GetParentValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method);
}
inline bool System::Data::RelatedView::Invoke(::System::Data::DataRow* row, ::System::Data::DataRowVersion version) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::RelatedView*>(), { "Invoke", {}, { ::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<::System::Data::DataRowVersion>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, row, version);
}
inline ::System::Data::IFilter* System::Data::RelatedView::GetFilter() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::RelatedView*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::IFilter*>(this, ___internal_method);
}
inline ::System::Data::DataRowView* System::Data::RelatedView::AddNew() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::RelatedView*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::DataRowView*>(this, ___internal_method);
}
inline void System::Data::RelatedView::SetIndex(::StringW newSort, ::System::Data::DataViewRowState newRowStates, ::System::Data::IFilter* newRowFilter) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::RelatedView*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSort, newRowStates, newRowFilter);
}
inline ::System::Data::RelatedView* System::Data::RelatedView::New_ctor(::ArrayW<::System::Data::DataColumn*> columns, ::ArrayW<::System::Object*> values) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::RelatedView*>(columns, values));
}
inline ::System::Data::RelatedView* System::Data::RelatedView::New_ctor(::System::Data::DataRowView* parentRowView, ::System::Data::DataKey parentKey,
                                                                        ::ArrayW<::System::Data::DataColumn*> childKeyColumns) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::RelatedView*>(parentRowView, parentKey, childKeyColumns));
}
/// @brief Convert operator to "::System::Data::IFilter"
constexpr System::Data::RelatedView::operator ::System::Data::IFilter*() noexcept {
  return static_cast<::System::Data::IFilter*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Data::IFilter"
constexpr ::System::Data::IFilter* System::Data::RelatedView::i___System__Data__IFilter() noexcept {
  return static_cast<::System::Data::IFilter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Data::RelatedView::RelatedView() {}
