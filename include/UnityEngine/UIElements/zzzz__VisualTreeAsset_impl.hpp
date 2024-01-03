#pragma once
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementAsset_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAsset_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAsset_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAsset_def.hpp"
#include "UnityEngine/UIElements/zzzz__TemplateAsset_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementAsset_def.hpp"
#include "UnityEngine/UIElements/zzzz__TemplateContainer_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry::*)(::StringW, ::StringW)>(
    &::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e13448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::__VisualTreeAsset__UsingEntry::setStaticF_comparer(::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>*, "comparer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>::get>(
      std::forward<::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>*>(value));
}
inline ::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>* UnityEngine::UIElements::__VisualTreeAsset__UsingEntry::getStaticF_comparer() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>*, "comparer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>::get>();
}
inline void UnityEngine::UIElements::__VisualTreeAsset__UsingEntry::_ctor(::StringW alias, ::StringW path) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, alias, path);
}
// Ctor Parameters [CppParam { name: "alias", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "asset", ty: "::UnityEngine::UIElements::VisualTreeAsset*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry::__VisualTreeAsset__UsingEntry(::StringW alias, ::StringW path, ::UnityEngine::UIElements::VisualTreeAsset* asset) noexcept {
  this->alias = alias;
  this->path = path;
  this->asset = asset;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry::__VisualTreeAsset__UsingEntry() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer::*)(
    ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry, ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry)>(&::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer::Compare)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2e138d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer*>::get(), "Compare", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e138c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>"
constexpr UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer::operator ::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>*>(static_cast<void*>(this));
}
inline int32_t UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer::Compare(::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry x,
                                                                                       ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer*>::get(), "Compare", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x, y);
}
inline ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer* UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer*>());
}
inline void UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer::__VisualTreeAsset__UsingEntryComparer() {}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "insertionPointId", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition::__VisualTreeAsset__SlotDefinition(::StringW name, int32_t insertionPointId) noexcept {
  this->name = name;
  this->insertionPointId = insertionPointId;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition::__VisualTreeAsset__SlotDefinition() {}
// Ctor Parameters [CppParam { name: "slotName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "assetId", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry::__VisualTreeAsset__SlotUsageEntry(::StringW slotName, int32_t assetId) noexcept {
  this->slotName = slotName;
  this->assetId = assetId;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry::__VisualTreeAsset__SlotUsageEntry() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::*)(int32_t)>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2e1152c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2e138e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
                                                 "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x2e1390c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
                                                 "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17.__m__Finally1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2e13dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
                                                 "<>m__Finally1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17.System_Collections_Generic_IEnumerator_UnityEngine_UIElements_VisualTreeAsset__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::UIElements::VisualTreeAsset* (::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::*)()>(
        &::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::System_Collections_Generic_IEnumerator_UnityEngine_UIElements_VisualTreeAsset__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e13e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
                                    "System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualTreeAsset>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2e13e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e13e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17.System_Collections_Generic_IEnumerable_UnityEngine_UIElements_VisualTreeAsset__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::VisualTreeAsset*>* (::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::*)()>(
        &::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::System_Collections_Generic_IEnumerable_UnityEngine_UIElements_VisualTreeAsset__GetEnumerator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2e13e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
                                    "System.Collections.Generic.IEnumerable<UnityEngine.UIElements.VisualTreeAsset>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::IEnumerator* (::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::*)()>(
        &::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e13f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::VisualTreeAsset*>"
constexpr UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::VisualTreeAsset*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::VisualTreeAsset*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::VisualTreeAsset*>"
constexpr UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::VisualTreeAsset*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::VisualTreeAsset*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::UnityEngine::UIElements::VisualTreeAsset*& UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualTreeAsset*> const&
UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__set___2__current(::UnityEngine::UIElements::VisualTreeAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::UnityEngine::UIElements::VisualTreeAsset*& UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualTreeAsset*> const& UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__set___4__this(::UnityEngine::UIElements::VisualTreeAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualTreeAsset*>*& UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__get__sent_5__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sent_5__1;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualTreeAsset*>*> const&
UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__get__sent_5__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sent_5__1;
}
constexpr void
UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__set__sent_5__1(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualTreeAsset*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sent_5__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>&
UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__get___s__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__2;
}
constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry> const&
UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__get___s__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__2;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__set___s__2(
    ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____s__2 = value;
}
constexpr ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry& UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__get__entry_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entry_5__3;
}
constexpr ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry const& UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__get__entry_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entry_5__3;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__set__entry_5__3(::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____entry_5__3 = value;
}
constexpr ::UnityEngine::UIElements::VisualTreeAsset*& UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__get__vta_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vta_5__4;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualTreeAsset*> const& UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__get__vta_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vta_5__4;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__set__vta_5__4(::UnityEngine::UIElements::VisualTreeAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vta_5__4)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17* UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>(__1__state));
}
inline void UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
                                               "<>m__Finally1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualTreeAsset*
UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::System_Collections_Generic_IEnumerator_UnityEngine_UIElements_VisualTreeAsset__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
                                  "System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualTreeAsset>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualTreeAsset*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::VisualTreeAsset*>*
UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::System_Collections_Generic_IEnumerable_UnityEngine_UIElements_VisualTreeAsset__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
                                  "System.Collections.Generic.IEnumerable<UnityEngine.UIElements.VisualTreeAsset>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::VisualTreeAsset*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17::__VisualTreeAsset___get_templateDependencies_d__17() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::*)(int32_t)>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2e115d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2e13f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(),
                                                 "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0x2e1401c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21.__m__Finally1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2e14678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(), "<>m__Finally1",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21.__m__Finally2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__m__Finally2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2e145d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(), "<>m__Finally2",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21.__m__Finally3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__m__Finally3)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2e14628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(), "<>m__Finally3",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21.System_Collections_Generic_IEnumerator_UnityEngine_UIElements_StyleSheet__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleSheet* (::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::System_Collections_Generic_IEnumerator_UnityEngine_UIElements_StyleSheet__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e146c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(),
                                    "System.Collections.Generic.IEnumerator<UnityEngine.UIElements.StyleSheet>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2e146d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e14710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21.System_Collections_Generic_IEnumerable_UnityEngine_UIElements_StyleSheet__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StyleSheet*>* (::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::*)()>(
        &::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::System_Collections_Generic_IEnumerable_UnityEngine_UIElements_StyleSheet__GetEnumerator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2e14718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(),
                                    "System.Collections.Generic.IEnumerable<UnityEngine.UIElements.StyleSheet>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e147b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StyleSheet*>"
constexpr UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StyleSheet*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StyleSheet*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StyleSheet*>"
constexpr UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StyleSheet*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StyleSheet*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::UnityEngine::UIElements::StyleSheet*& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleSheet*> const& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__set___2__current(::UnityEngine::UIElements::StyleSheet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::UnityEngine::UIElements::VisualTreeAsset*& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualTreeAsset*> const& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__set___4__this(::UnityEngine::UIElements::VisualTreeAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::StyleSheet*>*& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__get__sent_5__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sent_5__1;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::StyleSheet*>*> const&
UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__get__sent_5__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sent_5__1;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__set__sent_5__1(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::StyleSheet*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sent_5__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::VisualElementAsset*>& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__get___s__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__2;
}
constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::VisualElementAsset*> const&
UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__get___s__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__2;
}
constexpr void
UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__set___s__2(::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::VisualElementAsset*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____s__2 = value;
}
constexpr ::UnityEngine::UIElements::VisualElementAsset*& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__get__vea_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vea_5__3;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElementAsset*> const& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__get__vea_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vea_5__3;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__set__vea_5__3(::UnityEngine::UIElements::VisualElementAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vea_5__3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::StyleSheet*>& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__get___s__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__4;
}
constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::StyleSheet*> const& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__get___s__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__4;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__set___s__4(::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::StyleSheet*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____s__4 = value;
}
constexpr ::UnityEngine::UIElements::StyleSheet*& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__get__stylesheet_5__5() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stylesheet_5__5;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleSheet*> const& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__get__stylesheet_5__5() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stylesheet_5__5;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__set__stylesheet_5__5(::UnityEngine::UIElements::StyleSheet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stylesheet_5__5)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::__List_1__Enumerator<::StringW>& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__get___s__6() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__6;
}
constexpr ::System::Collections::Generic::__List_1__Enumerator<::StringW> const& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__get___s__6() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__6;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__set___s__6(::System::Collections::Generic::__List_1__Enumerator<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____s__6 = value;
}
constexpr ::StringW& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__get__stylesheetPath_5__7() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stylesheetPath_5__7;
}
constexpr ::StringW const& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__get__stylesheetPath_5__7() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stylesheetPath_5__7;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__set__stylesheetPath_5__7(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stylesheetPath_5__7)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::StyleSheet*& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__get__stylesheet_5__8() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stylesheet_5__8;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleSheet*> const& UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__get__stylesheet_5__8() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stylesheet_5__8;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__set__stylesheet_5__8(::UnityEngine::UIElements::StyleSheet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stylesheet_5__8)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21* UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>(__1__state));
}
inline void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(), "<>m__Finally1",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__m__Finally2() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(), "<>m__Finally2",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__m__Finally3() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(), "<>m__Finally3",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StyleSheet*
UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::System_Collections_Generic_IEnumerator_UnityEngine_UIElements_StyleSheet__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(),
                                  "System.Collections.Generic.IEnumerator<UnityEngine.UIElements.StyleSheet>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleSheet*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StyleSheet*>*
UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::System_Collections_Generic_IEnumerable_UnityEngine_UIElements_StyleSheet__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(),
                                  "System.Collections.Generic.IEnumerable<UnityEngine.UIElements.StyleSheet>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StyleSheet*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21::__VisualTreeAsset___get_stylesheets_d__21() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0::*)()>(
    &::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e13194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0._CloneSetupRecursively_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0::*)(
    ::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry)>(&::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0::_CloneSetupRecursively_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2e147bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0*>::get(), "<CloneSetupRecursively>b__0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::VisualElementAsset*& UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0::__get_childVea() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___childVea;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElementAsset*> const& UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0::__get_childVea() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___childVea;
}
constexpr void UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0::__set_childVea(::UnityEngine::UIElements::VisualElementAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___childVea)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0* UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0*>());
}
inline void UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0::_CloneSetupRecursively_b__0(::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry u) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0*>::get(), "<CloneSetupRecursively>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, u);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0::__VisualTreeAsset____c__DisplayClass45_0() {}
// Ctor Parameters [CppParam { name: "asset", ty: "::UnityEngine::UIElements::VisualElementAsset*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass49_0::__VisualTreeAsset____c__DisplayClass49_0(::UnityEngine::UIElements::VisualElementAsset* asset) noexcept {
  this->asset = asset;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass49_0::__VisualTreeAsset____c__DisplayClass49_0() {}
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.get_importedWithErrors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::VisualTreeAsset::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset::get_importedWithErrors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e11440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                               "get_importedWithErrors", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.set_importedWithErrors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(bool)>(
    &::UnityEngine::UIElements::VisualTreeAsset::set_importedWithErrors)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e11448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "set_importedWithErrors",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.get_importedWithWarnings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::VisualTreeAsset::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset::get_importedWithWarnings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e11454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                               "get_importedWithWarnings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.set_importedWithWarnings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(bool)>(
    &::UnityEngine::UIElements::VisualTreeAsset::set_importedWithWarnings)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e1145c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "set_importedWithWarnings",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.GetNextChildSerialNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::VisualTreeAsset::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset::GetNextChildSerialNumber)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2e11468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                               "GetNextChildSerialNumber", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.get_templateDependencies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::VisualTreeAsset*>* (
    ::UnityEngine::UIElements::VisualTreeAsset::*)()>(&::UnityEngine::UIElements::VisualTreeAsset::get_templateDependencies)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2e114c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                               "get_templateDependencies", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.get_stylesheets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StyleSheet*>* (
    ::UnityEngine::UIElements::VisualTreeAsset::*)()>(&::UnityEngine::UIElements::VisualTreeAsset::get_stylesheets)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2e11570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                               "get_stylesheets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.get_visualElementAssets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>* (
    ::UnityEngine::UIElements::VisualTreeAsset::*)()>(&::UnityEngine::UIElements::VisualTreeAsset::get_visualElementAssets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e11618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                               "get_visualElementAssets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.set_visualElementAssets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*)>(&::UnityEngine::UIElements::VisualTreeAsset::set_visualElementAssets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e11620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "set_visualElementAssets", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.get_templateAssets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* (
    ::UnityEngine::UIElements::VisualTreeAsset::*)()>(&::UnityEngine::UIElements::VisualTreeAsset::get_templateAssets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e11628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                               "get_templateAssets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.set_templateAssets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>*)>(&::UnityEngine::UIElements::VisualTreeAsset::set_templateAssets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e11630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "set_templateAssets", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.get_slots
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>* (
    ::UnityEngine::UIElements::VisualTreeAsset::*)()>(&::UnityEngine::UIElements::VisualTreeAsset::get_slots)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e11638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "get_slots",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.set_slots
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>*)>(&::UnityEngine::UIElements::VisualTreeAsset::set_slots)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e11640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "set_slots", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.get_contentContainerId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::VisualTreeAsset::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset::get_contentContainerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e11648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                               "get_contentContainerId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.set_contentContainerId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(int32_t)>(
    &::UnityEngine::UIElements::VisualTreeAsset::set_contentContainerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e11650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "set_contentContainerId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.Instantiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TemplateContainer* (::UnityEngine::UIElements::VisualTreeAsset::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset::Instantiate)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2e11658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                               "Instantiate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.Instantiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TemplateContainer* (::UnityEngine::UIElements::VisualTreeAsset::*)(::StringW)>(
    &::UnityEngine::UIElements::VisualTreeAsset::Instantiate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2e11e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "Instantiate", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.CloneTree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TemplateContainer* (::UnityEngine::UIElements::VisualTreeAsset::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset::CloneTree)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2e11e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "CloneTree",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.CloneTree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TemplateContainer* (::UnityEngine::UIElements::VisualTreeAsset::*)(::StringW)>(
    &::UnityEngine::UIElements::VisualTreeAsset::CloneTree)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2e11e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "CloneTree", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.CloneTree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeAsset::CloneTree)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2e11e9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "CloneTree", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.CloneTree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(
    ::UnityEngine::UIElements::VisualElement*, ByRef<int32_t>, ByRef<int32_t>)>(&::UnityEngine::UIElements::VisualTreeAsset::CloneTree)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2e11eb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "CloneTree", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.CloneTree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(
    ::UnityEngine::UIElements::VisualElement*, ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*,
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>*)>(&::UnityEngine::UIElements::VisualTreeAsset::CloneTree)> {
  constexpr static std::size_t size = 0x680;
  constexpr static std::size_t addrs = 0x2e117d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "CloneTree", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.CloneSetupRecursively
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (
    ::UnityEngine::UIElements::VisualTreeAsset::*)(::UnityEngine::UIElements::VisualElementAsset*,
                                                   ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*>*,
                                                   ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::VisualTreeAsset::CloneSetupRecursively)> {
  constexpr static std::size_t size = 0x848;
  constexpr static std::size_t addrs = 0x2e122d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "CloneSetupRecursively", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElementAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.CompareForOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::UIElements::VisualElementAsset*, ::UnityEngine::UIElements::VisualElementAsset*)>(
    &::UnityEngine::UIElements::VisualTreeAsset::CompareForOrder)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2e1319c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "CompareForOrder", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElementAsset*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElementAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.TryGetSlotInsertionPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::VisualTreeAsset::*)(int32_t, ByRef<::StringW>)>(
    &::UnityEngine::UIElements::VisualTreeAsset::TryGetSlotInsertionPoint)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2e130dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "TryGetSlotInsertionPoint", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.ResolveTemplate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualTreeAsset* (::UnityEngine::UIElements::VisualTreeAsset::*)(::StringW)>(
    &::UnityEngine::UIElements::VisualTreeAsset::ResolveTemplate)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x2e131d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "ResolveTemplate",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::UnityEngine::UIElements::VisualElement* (*)(::UnityEngine::UIElements::VisualElementAsset*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::VisualTreeAsset::Create)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x2e12b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "Create", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElementAsset*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.AssignClassListFromAssetToElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::VisualElementAsset*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeAsset::AssignClassListFromAssetToElement)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2e1209c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "AssignClassListFromAssetToElement", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElementAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.AssignStyleSheetFromAssetToElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::VisualElementAsset*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeAsset::AssignStyleSheetFromAssetToElement)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2e12108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "AssignStyleSheetFromAssetToElement", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElementAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.get_contentHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::VisualTreeAsset::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset::get_contentHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e13780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                               "get_contentHash", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.set_contentHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(int32_t)>(
    &::UnityEngine::UIElements::VisualTreeAsset::set_contentHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e13788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "set_contentHash",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)()>(&::UnityEngine::UIElements::VisualTreeAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e13790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset._Create_g__CreateError_49_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::UIElements::VisualElement* (*)(ByRef<::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass49_0>)>(
        &::UnityEngine::UIElements::VisualTreeAsset::_Create_g__CreateError_49_0)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2e1345c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "<Create>g__CreateError|49_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass49_0>>::get() })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::UIElements::VisualTreeAsset::__get_m_ImportedWithErrors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImportedWithErrors;
}
constexpr bool const& UnityEngine::UIElements::VisualTreeAsset::__get_m_ImportedWithErrors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImportedWithErrors;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset::__set_m_ImportedWithErrors(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ImportedWithErrors = value;
}
constexpr bool& UnityEngine::UIElements::VisualTreeAsset::__get_m_ImportedWithWarnings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImportedWithWarnings;
}
constexpr bool const& UnityEngine::UIElements::VisualTreeAsset::__get_m_ImportedWithWarnings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImportedWithWarnings;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset::__set_m_ImportedWithWarnings(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ImportedWithWarnings = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>*& UnityEngine::UIElements::VisualTreeAsset::__get_m_Usings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Usings;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>*> const&
UnityEngine::UIElements::VisualTreeAsset::__get_m_Usings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Usings;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset::__set_m_Usings(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Usings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::StyleSheet*& UnityEngine::UIElements::VisualTreeAsset::__get_inlineSheet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inlineSheet;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleSheet*> const& UnityEngine::UIElements::VisualTreeAsset::__get_inlineSheet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inlineSheet;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset::__set_inlineSheet(::UnityEngine::UIElements::StyleSheet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inlineSheet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*& UnityEngine::UIElements::VisualTreeAsset::__get_m_VisualElementAssets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisualElementAssets;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*> const&
UnityEngine::UIElements::VisualTreeAsset::__get_m_VisualElementAssets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisualElementAssets;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset::__set_m_VisualElementAssets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VisualElementAssets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>*& UnityEngine::UIElements::VisualTreeAsset::__get_m_TemplateAssets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TemplateAssets;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>*> const&
UnityEngine::UIElements::VisualTreeAsset::__get_m_TemplateAssets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TemplateAssets;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset::__set_m_TemplateAssets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TemplateAssets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>*& UnityEngine::UIElements::VisualTreeAsset::__get_m_Slots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Slots;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>*> const&
UnityEngine::UIElements::VisualTreeAsset::__get_m_Slots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Slots;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset::__set_m_Slots(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Slots)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::UIElements::VisualTreeAsset::__get_m_ContentContainerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentContainerId;
}
constexpr int32_t const& UnityEngine::UIElements::VisualTreeAsset::__get_m_ContentContainerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentContainerId;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset::__set_m_ContentContainerId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContentContainerId = value;
}
constexpr int32_t& UnityEngine::UIElements::VisualTreeAsset::__get_m_ContentHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentHash;
}
constexpr int32_t const& UnityEngine::UIElements::VisualTreeAsset::__get_m_ContentHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentHash;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset::__set_m_ContentHash(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContentHash = value;
}
inline void UnityEngine::UIElements::VisualTreeAsset::setStaticF_LinkedVEAInTemplatePropertyName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "LinkedVEAInTemplatePropertyName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::VisualTreeAsset::getStaticF_LinkedVEAInTemplatePropertyName() {
  return ::cordl_internals::getStaticField<::StringW, "LinkedVEAInTemplatePropertyName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get>();
}
inline void
UnityEngine::UIElements::VisualTreeAsset::setStaticF_s_TemporarySlotInsertionPoints(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*, "s_TemporarySlotInsertionPoints",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::VisualTreeAsset::getStaticF_s_TemporarySlotInsertionPoints() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*, "s_TemporarySlotInsertionPoints",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get>();
}
inline bool UnityEngine::UIElements::VisualTreeAsset::get_importedWithErrors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                             "get_importedWithErrors", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset::set_importedWithErrors(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "set_importedWithErrors",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::VisualTreeAsset::get_importedWithWarnings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                             "get_importedWithWarnings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset::set_importedWithWarnings(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "set_importedWithWarnings",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::VisualTreeAsset::GetNextChildSerialNumber() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                             "GetNextChildSerialNumber", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::VisualTreeAsset*>* UnityEngine::UIElements::VisualTreeAsset::get_templateDependencies() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                             "get_templateDependencies", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::VisualTreeAsset*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StyleSheet*>* UnityEngine::UIElements::VisualTreeAsset::get_stylesheets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                             "get_stylesheets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StyleSheet*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>* UnityEngine::UIElements::VisualTreeAsset::get_visualElementAssets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                             "get_visualElementAssets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset::set_visualElementAssets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "set_visualElementAssets", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* UnityEngine::UIElements::VisualTreeAsset::get_templateAssets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                             "get_templateAssets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset::set_templateAssets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "set_templateAssets", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>* UnityEngine::UIElements::VisualTreeAsset::get_slots() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "get_slots",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset::set_slots(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "set_slots", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::VisualTreeAsset::get_contentContainerId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                             "get_contentContainerId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset::set_contentContainerId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "set_contentContainerId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::TemplateContainer* UnityEngine::UIElements::VisualTreeAsset::Instantiate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "Instantiate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TemplateContainer*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TemplateContainer* UnityEngine::UIElements::VisualTreeAsset::Instantiate(::StringW bindingPath) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "Instantiate", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TemplateContainer*, false>(this, ___internal_method, bindingPath);
}
inline ::UnityEngine::UIElements::TemplateContainer* UnityEngine::UIElements::VisualTreeAsset::CloneTree() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "CloneTree",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TemplateContainer*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TemplateContainer* UnityEngine::UIElements::VisualTreeAsset::CloneTree(::StringW bindingPath) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "CloneTree", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TemplateContainer*, false>(this, ___internal_method, bindingPath);
}
inline void UnityEngine::UIElements::VisualTreeAsset::CloneTree(::UnityEngine::UIElements::VisualElement* target) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "CloneTree", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target);
}
inline void UnityEngine::UIElements::VisualTreeAsset::CloneTree(::UnityEngine::UIElements::VisualElement* target, ByRef<int32_t> firstElementIndex, ByRef<int32_t> elementAddedCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "CloneTree", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, firstElementIndex, elementAddedCount);
}
inline void UnityEngine::UIElements::VisualTreeAsset::CloneTree(::UnityEngine::UIElements::VisualElement* target,
                                                                ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* slotInsertionPoints,
                                                                ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>* attributeOverrides) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "CloneTree", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, slotInsertionPoints, attributeOverrides);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::VisualTreeAsset::CloneSetupRecursively(
    ::UnityEngine::UIElements::VisualElementAsset* root,
    ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*>* idToChildren,
    ::UnityEngine::UIElements::CreationContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "CloneSetupRecursively", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElementAsset*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                            ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method, root, idToChildren, context);
}
inline int32_t UnityEngine::UIElements::VisualTreeAsset::CompareForOrder(::UnityEngine::UIElements::VisualElementAsset* a, ::UnityEngine::UIElements::VisualElementAsset* b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "CompareForOrder", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElementAsset*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElementAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::UIElements::VisualTreeAsset::TryGetSlotInsertionPoint(int32_t insertionPointId, ByRef<::StringW> slotName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "TryGetSlotInsertionPoint", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, insertionPointId, slotName);
}
inline ::UnityEngine::UIElements::VisualTreeAsset* UnityEngine::UIElements::VisualTreeAsset::ResolveTemplate(::StringW templateName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "ResolveTemplate",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualTreeAsset*, false>(this, ___internal_method, templateName);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::VisualTreeAsset::Create(::UnityEngine::UIElements::VisualElementAsset* asset,
                                                                                                  ::UnityEngine::UIElements::CreationContext ctx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "Create", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElementAsset*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(nullptr, ___internal_method, asset, ctx);
}
inline void UnityEngine::UIElements::VisualTreeAsset::AssignClassListFromAssetToElement(::UnityEngine::UIElements::VisualElementAsset* asset, ::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "AssignClassListFromAssetToElement", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElementAsset*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asset, element);
}
inline void UnityEngine::UIElements::VisualTreeAsset::AssignStyleSheetFromAssetToElement(::UnityEngine::UIElements::VisualElementAsset* asset, ::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "AssignStyleSheetFromAssetToElement", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElementAsset*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asset, element);
}
inline int32_t UnityEngine::UIElements::VisualTreeAsset::get_contentHash() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(),
                                                                             "get_contentHash", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset::set_contentHash(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "set_contentHash",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::VisualTreeAsset* UnityEngine::UIElements::VisualTreeAsset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::VisualTreeAsset*>());
}
inline void UnityEngine::UIElements::VisualTreeAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement*
UnityEngine::UIElements::VisualTreeAsset::_Create_g__CreateError_49_0(ByRef<::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass49_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeAsset*>::get(), "<Create>g__CreateError|49_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass49_0>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeAsset::VisualTreeAsset() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
