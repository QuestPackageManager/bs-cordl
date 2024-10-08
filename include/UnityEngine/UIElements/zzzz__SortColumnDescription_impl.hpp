#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/SortColumnDescription.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__SortDirection_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectTraits_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__SortColumnDescription_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__Column_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__SortColumnDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__SortDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlEnumAttributeDescription_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlIntAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
template <typename T> inline ::UnityEngine::UIElements::__SortColumnDescription__UxmlObjectFactory_1<T>* UnityEngine::UIElements::__SortColumnDescription__UxmlObjectFactory_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__SortColumnDescription__UxmlObjectFactory_1<T>*>());
}
template <typename T> inline void UnityEngine::UIElements::__SortColumnDescription__UxmlObjectFactory_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__SortColumnDescription__UxmlObjectFactory_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::__SortColumnDescription__UxmlObjectFactory_1<T>::__SortColumnDescription__UxmlObjectFactory_1() {}
template <typename T>
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::__SortColumnDescription__UxmlObjectTraits_1<T>::__cordl_internal_get_m_ColumnName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColumnName;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const&
UnityEngine::UIElements::__SortColumnDescription__UxmlObjectTraits_1<T>::__cordl_internal_get_m_ColumnName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColumnName;
}
template <typename T>
constexpr void UnityEngine::UIElements::__SortColumnDescription__UxmlObjectTraits_1<T>::__cordl_internal_set_m_ColumnName(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ColumnName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& UnityEngine::UIElements::__SortColumnDescription__UxmlObjectTraits_1<T>::__cordl_internal_get_m_ColumnIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColumnIndex;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const&
UnityEngine::UIElements::__SortColumnDescription__UxmlObjectTraits_1<T>::__cordl_internal_get_m_ColumnIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColumnIndex;
}
template <typename T>
constexpr void UnityEngine::UIElements::__SortColumnDescription__UxmlObjectTraits_1<T>::__cordl_internal_set_m_ColumnIndex(::UnityEngine::UIElements::UxmlIntAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ColumnIndex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SortDirection>*&
UnityEngine::UIElements::__SortColumnDescription__UxmlObjectTraits_1<T>::__cordl_internal_get_m_SortDescription() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortDescription;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SortDirection>*> const&
UnityEngine::UIElements::__SortColumnDescription__UxmlObjectTraits_1<T>::__cordl_internal_get_m_SortDescription() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortDescription;
}
template <typename T>
constexpr void UnityEngine::UIElements::__SortColumnDescription__UxmlObjectTraits_1<T>::__cordl_internal_set_m_SortDescription(
    ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SortDirection>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SortDescription)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline void UnityEngine::UIElements::__SortColumnDescription__UxmlObjectTraits_1<T>::Init(ByRef<T> obj, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                                          ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__SortColumnDescription__UxmlObjectTraits_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, bag, cc);
}
template <typename T> inline ::UnityEngine::UIElements::__SortColumnDescription__UxmlObjectTraits_1<T>* UnityEngine::UIElements::__SortColumnDescription__UxmlObjectTraits_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__SortColumnDescription__UxmlObjectTraits_1<T>*>());
}
template <typename T> inline void UnityEngine::UIElements::__SortColumnDescription__UxmlObjectTraits_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__SortColumnDescription__UxmlObjectTraits_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::__SortColumnDescription__UxmlObjectTraits_1<T>::__SortColumnDescription__UxmlObjectTraits_1() {}
//  Writing Method size for method: ::UnityEngine::UIElements::SortColumnDescription.get_columnName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::SortColumnDescription::*)()>(
    &::UnityEngine::UIElements::SortColumnDescription::get_columnName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4985690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescription*>::get(),
                                                                               "get_columnName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SortColumnDescription.set_columnName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::SortColumnDescription::*)(::StringW)>(
    &::UnityEngine::UIElements::SortColumnDescription::set_columnName)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4985698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescription*>::get(), "set_columnName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SortColumnDescription.get_columnIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::SortColumnDescription::*)()>(
    &::UnityEngine::UIElements::SortColumnDescription::get_columnIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49856ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescription*>::get(),
                                                                               "get_columnIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SortColumnDescription.set_columnIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::SortColumnDescription::*)(int32_t)>(
    &::UnityEngine::UIElements::SortColumnDescription::set_columnIndex)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x49856f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescription*>::get(), "set_columnIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SortColumnDescription.get_column
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Column* (::UnityEngine::UIElements::SortColumnDescription::*)()>(
    &::UnityEngine::UIElements::SortColumnDescription::get_column)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4985728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescription*>::get(),
                                                                               "get_column", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SortColumnDescription.set_column
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::SortColumnDescription::*)(::UnityEngine::UIElements::Column*)>(
    &::UnityEngine::UIElements::SortColumnDescription::set_column)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4985730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescription*>::get(), "set_column", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Column*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SortColumnDescription.get_direction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::SortDirection (::UnityEngine::UIElements::SortColumnDescription::*)()>(
    &::UnityEngine::UIElements::SortColumnDescription::get_direction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4985738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescription*>::get(),
                                                                               "get_direction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SortColumnDescription.set_direction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::SortColumnDescription::*)(::UnityEngine::UIElements::SortDirection)>(
    &::UnityEngine::UIElements::SortColumnDescription::set_direction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4985740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescription*>::get(), "set_direction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SortDirection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SortColumnDescription.add_changed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::SortColumnDescription::*)(
    ::System::Action_1<::UnityEngine::UIElements::SortColumnDescription*>*)>(&::UnityEngine::UIElements::SortColumnDescription::add_changed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x4985774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescription*>::get(), "add_changed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::SortColumnDescription*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SortColumnDescription.remove_changed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::SortColumnDescription::*)(
    ::System::Action_1<::UnityEngine::UIElements::SortColumnDescription*>*)>(&::UnityEngine::UIElements::SortColumnDescription::remove_changed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x4985824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescription*>::get(), "remove_changed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::SortColumnDescription*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SortColumnDescription._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::SortColumnDescription::*)()>(
    &::UnityEngine::UIElements::SortColumnDescription::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x49858d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescription*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SortColumnDescription._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::SortColumnDescription::*)(int32_t, ::UnityEngine::UIElements::SortDirection)>(
    &::UnityEngine::UIElements::SortColumnDescription::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x49858e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescription*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SortDirection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SortColumnDescription._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::SortColumnDescription::*)(::StringW, ::UnityEngine::UIElements::SortDirection)>(
    &::UnityEngine::UIElements::SortColumnDescription::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x4985974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescription*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SortDirection>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::UIElements::SortColumnDescription::__cordl_internal_get_m_ColumnIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColumnIndex;
}
constexpr int32_t const& UnityEngine::UIElements::SortColumnDescription::__cordl_internal_get_m_ColumnIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColumnIndex;
}
constexpr void UnityEngine::UIElements::SortColumnDescription::__cordl_internal_set_m_ColumnIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColumnIndex = value;
}
constexpr ::StringW& UnityEngine::UIElements::SortColumnDescription::__cordl_internal_get_m_ColumnName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColumnName;
}
constexpr ::StringW const& UnityEngine::UIElements::SortColumnDescription::__cordl_internal_get_m_ColumnName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColumnName;
}
constexpr void UnityEngine::UIElements::SortColumnDescription::__cordl_internal_set_m_ColumnName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ColumnName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::SortDirection& UnityEngine::UIElements::SortColumnDescription::__cordl_internal_get_m_SortDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortDirection;
}
constexpr ::UnityEngine::UIElements::SortDirection const& UnityEngine::UIElements::SortColumnDescription::__cordl_internal_get_m_SortDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortDirection;
}
constexpr void UnityEngine::UIElements::SortColumnDescription::__cordl_internal_set_m_SortDirection(::UnityEngine::UIElements::SortDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SortDirection = value;
}
constexpr ::UnityEngine::UIElements::Column*& UnityEngine::UIElements::SortColumnDescription::__cordl_internal_get__column_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____column_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Column*> const& UnityEngine::UIElements::SortColumnDescription::__cordl_internal_get__column_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____column_k__BackingField;
}
constexpr void UnityEngine::UIElements::SortColumnDescription::__cordl_internal_set__column_k__BackingField(::UnityEngine::UIElements::Column* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____column_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::UIElements::SortColumnDescription*>*& UnityEngine::UIElements::SortColumnDescription::__cordl_internal_get_changed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___changed;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::UIElements::SortColumnDescription*>*> const&
UnityEngine::UIElements::SortColumnDescription::__cordl_internal_get_changed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___changed;
}
constexpr void UnityEngine::UIElements::SortColumnDescription::__cordl_internal_set_changed(::System::Action_1<::UnityEngine::UIElements::SortColumnDescription*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___changed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW UnityEngine::UIElements::SortColumnDescription::get_columnName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescription*>::get(),
                                                                             "get_columnName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::SortColumnDescription::set_columnName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescription*>::get(), "set_columnName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::SortColumnDescription::get_columnIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescription*>::get(),
                                                                             "get_columnIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::SortColumnDescription::set_columnIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescription*>::get(), "set_columnIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::Column* UnityEngine::UIElements::SortColumnDescription::get_column() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescription*>::get(),
                                                                             "get_column", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Column*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::SortColumnDescription::set_column(::UnityEngine::UIElements::Column* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescription*>::get(), "set_column", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Column*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::SortDirection UnityEngine::UIElements::SortColumnDescription::get_direction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescription*>::get(),
                                                                             "get_direction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::SortDirection, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::SortColumnDescription::set_direction(::UnityEngine::UIElements::SortDirection value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescription*>::get(), "set_direction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SortDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::SortColumnDescription::add_changed(::System::Action_1<::UnityEngine::UIElements::SortColumnDescription*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescription*>::get(), "add_changed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::SortColumnDescription*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::SortColumnDescription::remove_changed(::System::Action_1<::UnityEngine::UIElements::SortColumnDescription*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescription*>::get(), "remove_changed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::SortColumnDescription*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::SortColumnDescription* UnityEngine::UIElements::SortColumnDescription::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::SortColumnDescription*>());
}
inline void UnityEngine::UIElements::SortColumnDescription::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescription*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::SortColumnDescription* UnityEngine::UIElements::SortColumnDescription::New_ctor(int32_t columnIndex, ::UnityEngine::UIElements::SortDirection direction) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::SortColumnDescription*>(columnIndex, direction));
}
inline void UnityEngine::UIElements::SortColumnDescription::_ctor(int32_t columnIndex, ::UnityEngine::UIElements::SortDirection direction) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescription*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SortDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, columnIndex, direction);
}
inline ::UnityEngine::UIElements::SortColumnDescription* UnityEngine::UIElements::SortColumnDescription::New_ctor(::StringW columnName, ::UnityEngine::UIElements::SortDirection direction) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::SortColumnDescription*>(columnName, direction));
}
inline void UnityEngine::UIElements::SortColumnDescription::_ctor(::StringW columnName, ::UnityEngine::UIElements::SortDirection direction) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescription*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SortDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, columnName, direction);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::SortColumnDescription::SortColumnDescription() {}
