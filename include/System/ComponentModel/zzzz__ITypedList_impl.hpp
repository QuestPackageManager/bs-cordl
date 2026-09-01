#pragma once
// IWYU pragma private; include "System\ComponentModel\ITypedList.hpp"
#include "System/ComponentModel/zzzz__ITypedList_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptorCollection_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ITypedList.GetListName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::ITypedList::*)(::ArrayW<::System::ComponentModel::PropertyDescriptor*>)>(
    &::System::ComponentModel::ITypedList::GetListName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ITypedList*>(), { ::i2c::class_of<::System::ComponentModel::ITypedList*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ITypedList.GetItemProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (
    ::System::ComponentModel::ITypedList::*)(::ArrayW<::System::ComponentModel::PropertyDescriptor*>)>(&::System::ComponentModel::ITypedList::GetItemProperties)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ComponentModel::ITypedList*>(), { ::i2c::class_of<::System::ComponentModel::ITypedList*>(), 1 }));
    return ___internal_method;
  }
};
inline ::StringW System::ComponentModel::ITypedList::GetListName(::ArrayW<::System::ComponentModel::PropertyDescriptor*> listAccessors) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ITypedList*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, listAccessors);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::ITypedList::GetItemProperties(::ArrayW<::System::ComponentModel::PropertyDescriptor*> listAccessors) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ComponentModel::ITypedList*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(this, ___internal_method, listAccessors);
}
