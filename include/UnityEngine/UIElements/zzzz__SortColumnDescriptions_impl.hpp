#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/SortColumnDescriptions.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_impl.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_impl.hpp"
#include "System/Collections/zzzz__IEnumerable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectTraits_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__SortColumnDescriptions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__SortColumnDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__SortColumnDescriptions_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectListAttributeDescription_1_def.hpp"
template <typename T> inline void UnityEngine::UIElements::SortColumnDescriptions_UxmlObjectFactory_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions_UxmlObjectFactory_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::SortColumnDescriptions_UxmlObjectFactory_1<T>* UnityEngine::UIElements::SortColumnDescriptions_UxmlObjectFactory_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::SortColumnDescriptions_UxmlObjectFactory_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::SortColumnDescriptions_UxmlObjectFactory_1<T>::SortColumnDescriptions_UxmlObjectFactory_1() {}
template <typename T>
constexpr ::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<::UnityEngine::UIElements::SortColumnDescription*>*&
UnityEngine::UIElements::SortColumnDescriptions_UxmlObjectTraits_1<T>::__cordl_internal_get_m_SortColumnDescriptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortColumnDescriptions;
}
template <typename T>
constexpr ::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<::UnityEngine::UIElements::SortColumnDescription*>* const&
UnityEngine::UIElements::SortColumnDescriptions_UxmlObjectTraits_1<T>::__cordl_internal_get_m_SortColumnDescriptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortColumnDescriptions;
}
template <typename T>
constexpr void UnityEngine::UIElements::SortColumnDescriptions_UxmlObjectTraits_1<T>::__cordl_internal_set_m_SortColumnDescriptions(
    ::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<::UnityEngine::UIElements::SortColumnDescription*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_SortColumnDescriptions, value);
}
template <typename T>
inline void UnityEngine::UIElements::SortColumnDescriptions_UxmlObjectTraits_1<T>::Init(::ByRef<T> obj, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                                        ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions_UxmlObjectTraits_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, bag, cc);
}
template <typename T> inline void UnityEngine::UIElements::SortColumnDescriptions_UxmlObjectTraits_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions_UxmlObjectTraits_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::SortColumnDescriptions_UxmlObjectTraits_1<T>* UnityEngine::UIElements::SortColumnDescriptions_UxmlObjectTraits_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::SortColumnDescriptions_UxmlObjectTraits_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::SortColumnDescriptions_UxmlObjectTraits_1<T>::SortColumnDescriptions_UxmlObjectTraits_1() {}
//  Writing Method size for method: ::UnityEngine::UIElements::SortColumnDescriptions.add_changed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::SortColumnDescriptions::*)(::System::Action*)>(
    &::UnityEngine::UIElements::SortColumnDescriptions::add_changed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4a014c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions*>::get(), "add_changed",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SortColumnDescriptions.remove_changed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::SortColumnDescriptions::*)(::System::Action*)>(
    &::UnityEngine::UIElements::SortColumnDescriptions::remove_changed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4a0155c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions*>::get(), "remove_changed",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SortColumnDescriptions.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::SortColumnDescription*>* (
    ::UnityEngine::UIElements::SortColumnDescriptions::*)()>(&::UnityEngine::UIElements::SortColumnDescriptions::GetEnumerator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4a015f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions*>::get(),
                                                                               "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SortColumnDescriptions.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::UIElements::SortColumnDescriptions::*)()>(
    &::UnityEngine::UIElements::SortColumnDescriptions::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4a01698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SortColumnDescriptions.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::SortColumnDescriptions::*)(::UnityEngine::UIElements::SortColumnDescription*)>(
    &::UnityEngine::UIElements::SortColumnDescriptions::Add)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x4a0169c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SortColumnDescription*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SortColumnDescriptions.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::SortColumnDescriptions::*)()>(
    &::UnityEngine::UIElements::SortColumnDescriptions::Clear)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x49fff04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions*>::get(),
                                                                               "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SortColumnDescriptions.Contains
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::SortColumnDescriptions::*)(::UnityEngine::UIElements::SortColumnDescription*)>(
    &::UnityEngine::UIElements::SortColumnDescriptions::Contains)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x4a01a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions*>::get(), "Contains", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SortColumnDescription*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SortColumnDescriptions.CopyTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::SortColumnDescriptions::*)(
    ::ArrayW<::UnityEngine::UIElements::SortColumnDescription*, ::Array<::UnityEngine::UIElements::SortColumnDescription*>*>, int32_t)>(&::UnityEngine::UIElements::SortColumnDescriptions::CopyTo)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4a01b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions*>::get(), "CopyTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::SortColumnDescription*, ::Array<::UnityEngine::UIElements::SortColumnDescription*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SortColumnDescriptions.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::SortColumnDescriptions::*)(::UnityEngine::UIElements::SortColumnDescription*)>(
    &::UnityEngine::UIElements::SortColumnDescriptions::Remove)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x4a0190c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions*>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SortColumnDescription*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SortColumnDescriptions.OnDescriptionChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::SortColumnDescriptions::*)(::UnityEngine::UIElements::SortColumnDescription*)>(
    &::UnityEngine::UIElements::SortColumnDescriptions::OnDescriptionChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4a01bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions*>::get(), "OnDescriptionChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SortColumnDescription*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SortColumnDescriptions.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::SortColumnDescriptions::*)()>(
    &::UnityEngine::UIElements::SortColumnDescriptions::get_Count)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4a01c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions*>::get(),
                                                                               "get_Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SortColumnDescriptions.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::SortColumnDescriptions::*)()>(
    &::UnityEngine::UIElements::SortColumnDescriptions::get_IsReadOnly)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x4a01ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions*>::get(),
                                                                               "get_IsReadOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SortColumnDescriptions.Insert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::UIElements::SortColumnDescriptions::*)(int32_t, ::UnityEngine::UIElements::SortColumnDescription*)>(&::UnityEngine::UIElements::SortColumnDescriptions::Insert)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x4a01750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions*>::get(), "Insert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SortColumnDescription*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::SortColumnDescriptions._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::SortColumnDescriptions::*)()>(
    &::UnityEngine::UIElements::SortColumnDescriptions::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4a0024c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::UIElements::SortColumnDescription*>*& UnityEngine::UIElements::SortColumnDescriptions::__cordl_internal_get_m_Descriptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Descriptions;
}
constexpr ::System::Collections::Generic::IList_1<::UnityEngine::UIElements::SortColumnDescription*>* const&
UnityEngine::UIElements::SortColumnDescriptions::__cordl_internal_get_m_Descriptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Descriptions;
}
constexpr void UnityEngine::UIElements::SortColumnDescriptions::__cordl_internal_set_m_Descriptions(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::SortColumnDescription*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Descriptions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& UnityEngine::UIElements::SortColumnDescriptions::__cordl_internal_get_changed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___changed;
}
constexpr ::System::Action* const& UnityEngine::UIElements::SortColumnDescriptions::__cordl_internal_get_changed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___changed;
}
constexpr void UnityEngine::UIElements::SortColumnDescriptions::__cordl_internal_set_changed(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___changed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::SortColumnDescriptions::add_changed(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions*>::get(), "add_changed",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::SortColumnDescriptions::remove_changed(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions*>::get(), "remove_changed",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::SortColumnDescription*>* UnityEngine::UIElements::SortColumnDescriptions::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions*>::get(),
                                                                             "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::SortColumnDescription*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::UIElements::SortColumnDescriptions::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::SortColumnDescriptions::Add(::UnityEngine::UIElements::SortColumnDescription* item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SortColumnDescription*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
inline void UnityEngine::UIElements::SortColumnDescriptions::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::SortColumnDescriptions::Contains(::UnityEngine::UIElements::SortColumnDescription* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions*>::get(), "Contains", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SortColumnDescription*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
inline void UnityEngine::UIElements::SortColumnDescriptions::CopyTo(::ArrayW<::UnityEngine::UIElements::SortColumnDescription*, ::Array<::UnityEngine::UIElements::SortColumnDescription*>*> array,
                                                                    int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions*>::get(), "CopyTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::SortColumnDescription*, ::Array<::UnityEngine::UIElements::SortColumnDescription*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, arrayIndex);
}
inline bool UnityEngine::UIElements::SortColumnDescriptions::Remove(::UnityEngine::UIElements::SortColumnDescription* desc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions*>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SortColumnDescription*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, desc);
}
inline void UnityEngine::UIElements::SortColumnDescriptions::OnDescriptionChanged(::UnityEngine::UIElements::SortColumnDescription* desc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions*>::get(), "OnDescriptionChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SortColumnDescription*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, desc);
}
inline int32_t UnityEngine::UIElements::SortColumnDescriptions::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions*>::get(),
                                                                             "get_Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::SortColumnDescriptions::get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions*>::get(),
                                                                             "get_IsReadOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::SortColumnDescriptions::Insert(int32_t index, ::UnityEngine::UIElements::SortColumnDescription* desc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions*>::get(), "Insert", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SortColumnDescription*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, desc);
}
inline void UnityEngine::UIElements::SortColumnDescriptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SortColumnDescriptions*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::SortColumnDescriptions* UnityEngine::UIElements::SortColumnDescriptions::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::SortColumnDescriptions*>());
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::UnityEngine::UIElements::SortColumnDescription*>"
constexpr UnityEngine::UIElements::SortColumnDescriptions::operator ::System::Collections::Generic::ICollection_1<::UnityEngine::UIElements::SortColumnDescription*>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::UnityEngine::UIElements::SortColumnDescription*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::UnityEngine::UIElements::SortColumnDescription*>"
constexpr ::System::Collections::Generic::ICollection_1<::UnityEngine::UIElements::SortColumnDescription*>*
UnityEngine::UIElements::SortColumnDescriptions::i___System__Collections__Generic__ICollection_1___UnityEngine__UIElements__SortColumnDescription__() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::UnityEngine::UIElements::SortColumnDescription*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::SortColumnDescription*>"
constexpr UnityEngine::UIElements::SortColumnDescriptions::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::SortColumnDescription*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::SortColumnDescription*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::SortColumnDescription*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::SortColumnDescription*>*
UnityEngine::UIElements::SortColumnDescriptions::i___System__Collections__Generic__IEnumerable_1___UnityEngine__UIElements__SortColumnDescription__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::SortColumnDescription*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::UIElements::SortColumnDescriptions::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::UIElements::SortColumnDescriptions::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::SortColumnDescriptions::SortColumnDescriptions() {}
