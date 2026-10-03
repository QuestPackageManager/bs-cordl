#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeAsset.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Pool/zzzz__PooledObject_1_impl.hpp"
#include "UnityEngine/zzzz__LazyLoadReference_1_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAsset_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IBaseUxmlObjectFactory_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "UnityEngine/UIElements/zzzz__TemplateContainer_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlAsset_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlNamespaceDefinition_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectAsset_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementAsset_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAsset_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset_UsingEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset_UsingEntry::*)(::StringW, ::StringW)>(
    &::UnityEngine::UIElements::VisualTreeAsset_UsingEntry::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x714ea40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset_UsingEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset_UsingEntry::*)(::StringW, ::UnityEngine::UIElements::VisualTreeAsset*)>(
    &::UnityEngine::UIElements::VisualTreeAsset_UsingEntry::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x714eea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::VisualTreeAsset_UsingEntry::setStaticF_comparer(::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>*, "comparer",
                                    ::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>(
      std::forward<::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>*>(value));
}
inline ::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>* UnityEngine::UIElements::VisualTreeAsset_UsingEntry::getStaticF_comparer() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>*, "comparer",
                                           ::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>();
}
inline void UnityEngine::UIElements::VisualTreeAsset_UsingEntry::_ctor(::StringW alias, ::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, alias, path);
}
inline void UnityEngine::UIElements::VisualTreeAsset_UsingEntry::_ctor(::StringW alias, ::UnityEngine::UIElements::VisualTreeAsset* asset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, alias, asset);
}
// Ctor Parameters [CppParam { name: "alias", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "asset", ty: "::UnityW<::UnityEngine::UIElements::VisualTreeAsset>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::VisualTreeAsset_UsingEntry::VisualTreeAsset_UsingEntry(::StringW alias, ::StringW path, ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> asset) noexcept {
  this->alias = alias;
  this->path = path;
  this->asset = asset;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeAsset_UsingEntry::VisualTreeAsset_UsingEntry() {}
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer::*)(
    ::UnityEngine::UIElements::VisualTreeAsset_UsingEntry, ::UnityEngine::UIElements::VisualTreeAsset_UsingEntry)>(&::UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer::Compare)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x7150cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer*>(),
                            { "Compare", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>(), ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x7150cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer::Compare(::UnityEngine::UIElements::VisualTreeAsset_UsingEntry x, ::UnityEngine::UIElements::VisualTreeAsset_UsingEntry y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer*>(),
                          { "Compare", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>(), ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline void UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer* UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>"
constexpr UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer::operator ::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>*
UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer::i___System__Collections__Generic__IComparer_1___UnityEngine__UIElements__VisualTreeAsset_UsingEntry_() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer::VisualTreeAsset_UsingEntryComparer() {}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "insertionPointId", ty: "int32_t", modifiers: "", def_value:
// Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::VisualTreeAsset_SlotDefinition::VisualTreeAsset_SlotDefinition(::StringW name, int32_t insertionPointId) noexcept {
  this->name = name;
  this->insertionPointId = insertionPointId;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeAsset_SlotDefinition::VisualTreeAsset_SlotDefinition() {}
// Ctor Parameters [CppParam { name: "slotName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "assetId", ty: "int32_t", modifiers: "", def_value:
// Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry::VisualTreeAsset_SlotUsageEntry(::StringW slotName, int32_t assetId) noexcept {
  this->slotName = slotName;
  this->assetId = assetId;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry::VisualTreeAsset_SlotUsageEntry() {}
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset_AssetEntry.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::UIElements::VisualTreeAsset_AssetEntry::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset_AssetEntry::get_type)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x714c3e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset_AssetEntry>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset_AssetEntry.get_path
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::VisualTreeAsset_AssetEntry::*)()>(&::UnityEngine::UIElements::VisualTreeAsset_AssetEntry::get_path)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7150cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset_AssetEntry>(), { "get_path", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset_AssetEntry.get_asset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::UIElements::VisualTreeAsset_AssetEntry::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset_AssetEntry::get_asset)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x714c848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset_AssetEntry>(), { "get_asset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset_AssetEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset_AssetEntry::*)(::StringW, ::System::Type*, ::UnityEngine::Object*)>(
    &::UnityEngine::UIElements::VisualTreeAsset_AssetEntry::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x714c564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset_AssetEntry>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
inline ::System::Type* UnityEngine::UIElements::VisualTreeAsset_AssetEntry::get_type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset_AssetEntry>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(*this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::VisualTreeAsset_AssetEntry::get_path() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset_AssetEntry>(), { "get_path", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::UIElements::VisualTreeAsset_AssetEntry::get_asset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset_AssetEntry>(), { "get_asset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset_AssetEntry::_ctor(::StringW path, ::System::Type* type, ::UnityEngine::Object* asset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset_AssetEntry>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, path, type, asset);
}
// Ctor Parameters [CppParam { name: "m_Path", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_TypeFullName", ty: "::StringW", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "m_AssetReference", ty: "::UnityEngine::LazyLoadReference_1<::UnityW<::UnityEngine::Object>>", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "m_InstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_CachedType", ty: "::System::Type*", modifiers: "", def_value: Some("{}"),
// comment: None }]
constexpr ::UnityEngine::UIElements::VisualTreeAsset_AssetEntry::VisualTreeAsset_AssetEntry(::StringW m_Path, ::StringW m_TypeFullName,
                                                                                            ::UnityEngine::LazyLoadReference_1<::UnityW<::UnityEngine::Object>> m_AssetReference, int32_t m_InstanceID,
                                                                                            ::System::Type* m_CachedType) noexcept {
  this->m_Path = m_Path;
  this->m_TypeFullName = m_TypeFullName;
  this->m_AssetReference = m_AssetReference;
  this->m_InstanceID = m_InstanceID;
  this->m_CachedType = m_CachedType;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeAsset_AssetEntry::VisualTreeAsset_AssetEntry() {}
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass69_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass69_0::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass69_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x714e8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass69_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass69_0._CloneSetupRecursively_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass69_0::*)(::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry)>(
    &::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass69_0::_CloneSetupRecursively_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x7150cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass69_0*>(),
                                                             { "<CloneSetupRecursively>b__0", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::VisualElementAsset*& UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass69_0::__cordl_internal_get_childVea() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___childVea;
}
constexpr ::UnityEngine::UIElements::VisualElementAsset* const& UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass69_0::__cordl_internal_get_childVea() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___childVea;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass69_0::__cordl_internal_set_childVea(::UnityEngine::UIElements::VisualElementAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___childVea = value;
}
inline void UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass69_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass69_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass69_0::_CloneSetupRecursively_b__0(::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry u) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass69_0*>(),
                                                           { "<CloneSetupRecursively>b__0", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, u);
}
inline ::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass69_0* UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass69_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass69_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass69_0::VisualTreeAsset___c__DisplayClass69_0() {}
// Ctor Parameters [CppParam { name: "asset", ty: "::UnityEngine::UIElements::VisualElementAsset*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass80_0::VisualTreeAsset___c__DisplayClass80_0(::UnityEngine::UIElements::VisualElementAsset* asset) noexcept {
  this->asset = asset;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass80_0::VisualTreeAsset___c__DisplayClass80_0() {}
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::*)(int32_t)>(
    &::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x714f64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x7150cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::MoveNext)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x7150d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88.__m__Finally1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::__m__Finally1)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x7151068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88*>(), { "<>m__Finally1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88.System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlAsset__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UxmlAsset* (::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlAsset__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x715111c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<UnityEngine.UIElements.UxmlAsset>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x7151124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x715115c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88.System_Collections_Generic_IEnumerable_UnityEngine_UIElements_UxmlAsset__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UxmlAsset*>* (::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::*)()>(
        &::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::System_Collections_Generic_IEnumerable_UnityEngine_UIElements_UxmlAsset__GetEnumerator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x7151164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88*>(),
                                                                                           { "System.Collections.Generic.IEnumerable<UnityEngine.UIElements.UxmlAsset>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x7151204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::UnityEngine::UIElements::UxmlAsset*& UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::UnityEngine::UIElements::UxmlAsset* const& UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::__cordl_internal_set___2__current(::UnityEngine::UIElements::UxmlAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::UnityEngine::UIElements::UxmlAsset*& UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::__cordl_internal_get_asset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asset;
}
constexpr ::UnityEngine::UIElements::UxmlAsset* const& UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::__cordl_internal_get_asset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asset;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::__cordl_internal_set_asset(::UnityEngine::UIElements::UxmlAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___asset = value;
}
constexpr ::UnityEngine::UIElements::UxmlAsset*& UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::__cordl_internal_get___3__asset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__asset;
}
constexpr ::UnityEngine::UIElements::UxmlAsset* const& UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::__cordl_internal_get___3__asset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__asset;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::__cordl_internal_set___3__asset(::UnityEngine::UIElements::UxmlAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__asset = value;
}
constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::__cordl_internal_set___4__this(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr int32_t& UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::__cordl_internal_get__i_5__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__1;
}
constexpr int32_t const& UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::__cordl_internal_get__i_5__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__1;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::__cordl_internal_set__i_5__1(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____i_5__1 = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UxmlAsset*>*& UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::__cordl_internal_get___s__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__2;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UxmlAsset*>* const&
UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::__cordl_internal_get___s__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__2;
}
constexpr void
UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::__cordl_internal_set___s__2(::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UxmlAsset*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____s__2 = value;
}
constexpr ::UnityEngine::UIElements::UxmlAsset*& UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::__cordl_internal_get__child_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____child_5__3;
}
constexpr ::UnityEngine::UIElements::UxmlAsset* const& UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::__cordl_internal_get__child_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____child_5__3;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::__cordl_internal_set__child_5__3(::UnityEngine::UIElements::UxmlAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____child_5__3 = value;
}
inline void UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88*>(), { "<>m__Finally1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UxmlAsset*
UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlAsset__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<UnityEngine.UIElements.UxmlAsset>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UxmlAsset*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UxmlAsset*>*
UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::System_Collections_Generic_IEnumerable_UnityEngine_UIElements_UxmlAsset__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88*>(),
                                                                                         { "System.Collections.Generic.IEnumerable<UnityEngine.UIElements.UxmlAsset>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UxmlAsset*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88* UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UxmlAsset*>"
constexpr UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UxmlAsset*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UxmlAsset*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UxmlAsset*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UxmlAsset*>*
UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::i___System__Collections__Generic__IEnumerable_1___UnityEngine__UIElements__UxmlAsset__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UxmlAsset*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UxmlAsset*>"
constexpr UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UxmlAsset*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UxmlAsset*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UxmlAsset*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UxmlAsset*>*
UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::i___System__Collections__Generic__IEnumerator_1___UnityEngine__UIElements__UxmlAsset__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UxmlAsset*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversal_d__88::VisualTreeAsset__DepthFirstTraversal_d__88() {}
template <typename T> constexpr int32_t& UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr void UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename T> constexpr T& UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr T const& UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr void UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::__cordl_internal_set___2__current(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
template <typename T> constexpr int32_t& UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr void UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename T> constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T>
constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T>
constexpr void UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::__cordl_internal_set___4__this(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UxmlAsset*>*&
UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::__cordl_internal_get__elements_5__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elements_5__1;
}
template <typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UxmlAsset*>* const&
UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::__cordl_internal_get__elements_5__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elements_5__1;
}
template <typename T>
constexpr void UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::__cordl_internal_set__elements_5__1(
    ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UxmlAsset*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elements_5__1 = value;
}
template <typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UxmlAsset*>*&
UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::__cordl_internal_get___s__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__2;
}
template <typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UxmlAsset*>* const&
UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::__cordl_internal_get___s__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__2;
}
template <typename T>
constexpr void UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::__cordl_internal_set___s__2(
    ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UxmlAsset*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____s__2 = value;
}
template <typename T> constexpr ::UnityEngine::UIElements::UxmlAsset*& UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::__cordl_internal_get__element_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____element_5__3;
}
template <typename T>
constexpr ::UnityEngine::UIElements::UxmlAsset* const& UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::__cordl_internal_get__element_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____element_5__3;
}
template <typename T> constexpr void UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::__cordl_internal_set__element_5__3(::UnityEngine::UIElements::UxmlAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____element_5__3 = value;
}
template <typename T> constexpr T& UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::__cordl_internal_get__tElement_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tElement_5__4;
}
template <typename T> constexpr T const& UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::__cordl_internal_get__tElement_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tElement_5__4;
}
template <typename T> constexpr void UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::__cordl_internal_set__tElement_5__4(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tElement_5__4 = value;
}
template <typename T> inline void UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template <typename T> inline void UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>*>(), { "<>m__Finally1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::System_Collections_Generic_IEnumerator_T__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<T>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::System::Object* UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>*>(),
                                                                                         { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>*>(),
                                                                                         { "System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>*>(),
                                                                                         { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
template <typename T>
inline ::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>* UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>*
UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>*
UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::i___System__Collections__Generic__IEnumerator_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1<T>::VisualTreeAsset__DepthFirstTraversalOfType_d__87_1() {}
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::*)(int32_t)>(
    &::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x714bde0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x7151208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::MoveNext)> {
  constexpr static std::size_t size = 0x74c;
  constexpr static std::size_t addrs = 0x715144c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40.__m__Finally1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__m__Finally1)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x7151cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40*>(), { "<>m__Finally1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40.__m__Finally2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__m__Finally2)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x7151c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40*>(), { "<>m__Finally2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40.__m__Finally3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__m__Finally3)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x7151c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40*>(), { "<>m__Finally3", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40.__m__Finally4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__m__Finally4)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x7151b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40*>(), { "<>m__Finally4", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40.__m__Finally5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__m__Finally5)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x7151be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40*>(), { "<>m__Finally5", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40.System_Collections_Generic_IEnumerator_UnityEngine_UIElements_StyleSheet__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UIElements::StyleSheet> (::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::System_Collections_Generic_IEnumerator_UnityEngine_UIElements_StyleSheet__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7151d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<UnityEngine.UIElements.StyleSheet>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x7151d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7151d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40.System_Collections_Generic_IEnumerable_UnityEngine_UIElements_StyleSheet__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* (::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::*)()>(
        &::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::System_Collections_Generic_IEnumerable_UnityEngine_UIElements_StyleSheet__GetEnumerator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x7151d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40*>(),
                                                                                           { "System.Collections.Generic.IEnumerable<UnityEngine.UIElements.StyleSheet>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x7151df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet>& UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet> const& UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_set___2__current(::UnityW<::UnityEngine::UIElements::StyleSheet> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_set___4__this(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::UnityEngine::Pool::PooledObject_1<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*>&
UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get__setHandle_5__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setHandle_5__1;
}
constexpr ::UnityEngine::Pool::PooledObject_1<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*> const&
UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get__setHandle_5__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setHandle_5__1;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_set__setHandle_5__1(
    ::UnityEngine::Pool::PooledObject_1<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setHandle_5__1 = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*&
UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get__sent_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sent_5__2;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* const&
UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get__sent_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sent_5__2;
}
constexpr void
UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_set__sent_5__2(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sent_5__2 = value;
}
constexpr ::UnityEngine::Pool::PooledObject_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlAsset*>*>&
UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get____5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->______5__3;
}
constexpr ::UnityEngine::Pool::PooledObject_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlAsset*>*> const&
UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get____5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->______5__3;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_set____5__3(
    ::UnityEngine::Pool::PooledObject_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlAsset*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->______5__3 = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlAsset*>*& UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get__list_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list_5__4;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlAsset*>* const&
UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get__list_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list_5__4;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_set__list_5__4(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlAsset*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____list_5__4 = value;
}
constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::UxmlAsset*>& UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get___s__5() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__5;
}
constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::UxmlAsset*> const&
UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get___s__5() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__5;
}
constexpr void
UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_set___s__5(::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::UxmlAsset*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____s__5 = value;
}
constexpr ::UnityEngine::UIElements::UxmlAsset*& UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get__asset_5__6() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asset_5__6;
}
constexpr ::UnityEngine::UIElements::UxmlAsset* const& UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get__asset_5__6() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asset_5__6;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_set__asset_5__6(::UnityEngine::UIElements::UxmlAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____asset_5__6 = value;
}
constexpr ::UnityEngine::UIElements::VisualElementAsset*& UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get__vea_5__7() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vea_5__7;
}
constexpr ::UnityEngine::UIElements::VisualElementAsset* const& UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get__vea_5__7() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vea_5__7;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_set__vea_5__7(::UnityEngine::UIElements::VisualElementAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____vea_5__7 = value;
}
constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityW<::UnityEngine::UIElements::StyleSheet>>&
UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get___s__8() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__8;
}
constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityW<::UnityEngine::UIElements::StyleSheet>> const&
UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get___s__8() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__8;
}
constexpr void
UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_set___s__8(::System::Collections::Generic::List_1_Enumerator<::UnityW<::UnityEngine::UIElements::StyleSheet>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____s__8 = value;
}
constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet>& UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get__stylesheet_5__9() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stylesheet_5__9;
}
constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet> const& UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get__stylesheet_5__9() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stylesheet_5__9;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_set__stylesheet_5__9(::UnityW<::UnityEngine::UIElements::StyleSheet> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stylesheet_5__9 = value;
}
constexpr ::System::Collections::Generic::List_1_Enumerator<::StringW>& UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get___s__10() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__10;
}
constexpr ::System::Collections::Generic::List_1_Enumerator<::StringW> const& UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get___s__10() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__10;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_set___s__10(::System::Collections::Generic::List_1_Enumerator<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____s__10 = value;
}
constexpr ::StringW& UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get__stylesheetPath_5__11() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stylesheetPath_5__11;
}
constexpr ::StringW const& UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get__stylesheetPath_5__11() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stylesheetPath_5__11;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_set__stylesheetPath_5__11(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stylesheetPath_5__11 = value;
}
constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet>& UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get__stylesheet_5__12() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stylesheet_5__12;
}
constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet> const& UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_get__stylesheet_5__12() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stylesheet_5__12;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__cordl_internal_set__stylesheet_5__12(::UnityW<::UnityEngine::UIElements::StyleSheet> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stylesheet_5__12 = value;
}
inline void UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40*>(), { "<>m__Finally1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__m__Finally2() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40*>(), { "<>m__Finally2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__m__Finally3() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40*>(), { "<>m__Finally3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__m__Finally4() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40*>(), { "<>m__Finally4", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::__m__Finally5() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40*>(), { "<>m__Finally5", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::UIElements::StyleSheet>
UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::System_Collections_Generic_IEnumerator_UnityEngine_UIElements_StyleSheet__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<UnityEngine.UIElements.StyleSheet>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::StyleSheet>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*
UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::System_Collections_Generic_IEnumerable_UnityEngine_UIElements_StyleSheet__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40*>(),
                                                                                         { "System.Collections.Generic.IEnumerable<UnityEngine.UIElements.StyleSheet>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40* UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>"
constexpr UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*
UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::i___System__Collections__Generic__IEnumerable_1___UnityW___UnityEngine__UIElements__StyleSheet__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>"
constexpr UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*
UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::i___System__Collections__Generic__IEnumerator_1___UnityW___UnityEngine__UIElements__StyleSheet__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__40::VisualTreeAsset__get_stylesheets_d__40() {}
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::*)(int32_t)>(
    &::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x714bb94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x7151dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::MoveNext)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x7151e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30.__m__Finally1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::__m__Finally1)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x715234c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30*>(), { "<>m__Finally1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30.System_Collections_Generic_IEnumerator_UnityEngine_UIElements_VisualTreeAsset__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UIElements::VisualTreeAsset> (::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::System_Collections_Generic_IEnumerator_UnityEngine_UIElements_VisualTreeAsset__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7152394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualTreeAsset>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x715239c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x71523d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30.System_Collections_Generic_IEnumerable_UnityEngine_UIElements_VisualTreeAsset__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* (::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::*)()>(
        &::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::System_Collections_Generic_IEnumerable_UnityEngine_UIElements_VisualTreeAsset__GetEnumerator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x71523dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30*>(),
                                                             { "System.Collections.Generic.IEnumerable<UnityEngine.UIElements.VisualTreeAsset>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x7152474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::__cordl_internal_set___2__current(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::__cordl_internal_set___4__this(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*&
UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::__cordl_internal_get__sent_5__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sent_5__1;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* const&
UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::__cordl_internal_get__sent_5__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sent_5__1;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::__cordl_internal_set__sent_5__1(
    ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sent_5__1 = value;
}
constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>&
UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::__cordl_internal_get___s__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__2;
}
constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry> const&
UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::__cordl_internal_get___s__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____s__2;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::__cordl_internal_set___s__2(
    ::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____s__2 = value;
}
constexpr ::UnityEngine::UIElements::VisualTreeAsset_UsingEntry& UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::__cordl_internal_get__entry_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entry_5__3;
}
constexpr ::UnityEngine::UIElements::VisualTreeAsset_UsingEntry const& UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::__cordl_internal_get__entry_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entry_5__3;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::__cordl_internal_set__entry_5__3(::UnityEngine::UIElements::VisualTreeAsset_UsingEntry value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____entry_5__3 = value;
}
constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::__cordl_internal_get__vta_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vta_5__4;
}
constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::__cordl_internal_get__vta_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vta_5__4;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::__cordl_internal_set__vta_5__4(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____vta_5__4 = value;
}
inline void UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30*>(), { "<>m__Finally1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>
UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::System_Collections_Generic_IEnumerator_UnityEngine_UIElements_VisualTreeAsset__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualTreeAsset>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*
UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::System_Collections_Generic_IEnumerable_UnityEngine_UIElements_VisualTreeAsset__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30*>(),
                                                                                         { "System.Collections.Generic.IEnumerable<UnityEngine.UIElements.VisualTreeAsset>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30* UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>"
constexpr UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::operator ::System::Collections::Generic::IEnumerable_1<
    ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*
UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::i___System__Collections__Generic__IEnumerable_1___UnityW___UnityEngine__UIElements__VisualTreeAsset__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>"
constexpr UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::operator ::System::Collections::Generic::IEnumerator_1<
    ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*
UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::i___System__Collections__Generic__IEnumerator_1___UnityW___UnityEngine__UIElements__VisualTreeAsset__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__30::VisualTreeAsset__get_templateDependencies_d__30() {}
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.get_importedWithErrors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::VisualTreeAsset::*)()>(&::UnityEngine::UIElements::VisualTreeAsset::get_importedWithErrors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x714ba14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "get_importedWithErrors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.set_importedWithErrors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(bool)>(&::UnityEngine::UIElements::VisualTreeAsset::set_importedWithErrors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x714ba1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "set_importedWithErrors", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.get_hasEditorElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::VisualTreeAsset::*)()>(&::UnityEngine::UIElements::VisualTreeAsset::get_hasEditorElements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x714ba24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "get_hasEditorElements", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.set_hasEditorElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(bool)>(&::UnityEngine::UIElements::VisualTreeAsset::set_hasEditorElements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x714ba2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "set_hasEditorElements", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.get_importerWithUpdatedUrls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::VisualTreeAsset::*)()>(&::UnityEngine::UIElements::VisualTreeAsset::get_importerWithUpdatedUrls)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x714ba34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "get_importerWithUpdatedUrls", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.set_importerWithUpdatedUrls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(bool)>(&::UnityEngine::UIElements::VisualTreeAsset::set_importerWithUpdatedUrls)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x714ba3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "set_importerWithUpdatedUrls", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.get_importedWithWarnings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::VisualTreeAsset::*)()>(&::UnityEngine::UIElements::VisualTreeAsset::get_importedWithWarnings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x714ba44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "get_importedWithWarnings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.set_importedWithWarnings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(bool)>(&::UnityEngine::UIElements::VisualTreeAsset::set_importedWithWarnings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x714ba4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "set_importedWithWarnings", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.GetNextChildSerialNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::VisualTreeAsset::*)()>(&::UnityEngine::UIElements::VisualTreeAsset::GetNextChildSerialNumber)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x714ba54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "GetNextChildSerialNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.get_usings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>* (
    ::UnityEngine::UIElements::VisualTreeAsset::*)()>(&::UnityEngine::UIElements::VisualTreeAsset::get_usings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x714bb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "get_usings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.get_templateDependencies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* (
    ::UnityEngine::UIElements::VisualTreeAsset::*)()>(&::UnityEngine::UIElements::VisualTreeAsset::get_templateDependencies)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x714bb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "get_templateDependencies", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.GetOrCreateInlineStyleSheet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UIElements::StyleSheet> (::UnityEngine::UIElements::VisualTreeAsset::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset::GetOrCreateInlineStyleSheet)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x714bbb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "GetOrCreateInlineStyleSheet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.get_visualTreeNoAlloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElementAsset* (::UnityEngine::UIElements::VisualTreeAsset::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset::get_visualTreeNoAlloc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x714bc5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "get_visualTreeNoAlloc", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.get_visualTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElementAsset* (::UnityEngine::UIElements::VisualTreeAsset::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset::get_visualTree)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x714bc64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "get_visualTree", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.SetRootAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(::UnityEngine::UIElements::VisualElementAsset*)>(
    &::UnityEngine::UIElements::VisualTreeAsset::SetRootAsset)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x714bcf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                                                           { "SetRootAsset", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElementAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.get_stylesheets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* (
    ::UnityEngine::UIElements::VisualTreeAsset::*)()>(&::UnityEngine::UIElements::VisualTreeAsset::get_stylesheets)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x714bd70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "get_stylesheets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.AddUxmlObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UxmlObjectAsset* (
    ::UnityEngine::UIElements::VisualTreeAsset::*)(::UnityEngine::UIElements::UxmlAsset*, ::StringW, ::StringW, ::UnityEngine::UIElements::UxmlNamespaceDefinition)>(
    &::UnityEngine::UIElements::VisualTreeAsset::AddUxmlObject)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x714be00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                                                           { "AddUxmlObject",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::UIElements::UxmlAsset*>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::UIElements::UxmlNamespaceDefinition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.GetNextUxmlAssetId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::VisualTreeAsset::*)(int32_t)>(&::UnityEngine::UIElements::VisualTreeAsset::GetNextUxmlAssetId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x714bf54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "GetNextUxmlAssetId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.Awake__Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)()>(&::UnityEngine::UIElements::VisualTreeAsset::Awake__Internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x714bfb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "Awake__Internal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.SetupReferences
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)()>(&::UnityEngine::UIElements::VisualTreeAsset::SetupReferences)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x714bfb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "SetupReferences", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.AssetEntryExists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::VisualTreeAsset::*)(::StringW, ::System::Type*)>(
    &::UnityEngine::UIElements::VisualTreeAsset::AssetEntryExists)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x714c270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                                                           { "AssetEntryExists", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.RegisterAssetEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(::StringW, ::System::Type*, ::UnityEngine::Object*)>(
    &::UnityEngine::UIElements::VisualTreeAsset::RegisterAssetEntry)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x714c474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                { "RegisterAssetEntry", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.TransferAssetEntries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(::UnityEngine::UIElements::VisualTreeAsset*)>(
    &::UnityEngine::UIElements::VisualTreeAsset::TransferAssetEntries)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x714c618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                                                           { "TransferAssetEntries", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.GetAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::UIElements::VisualTreeAsset::*)(::StringW, ::System::Type*)>(
    &::UnityEngine::UIElements::VisualTreeAsset::GetAsset)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x714c6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "GetAsset", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.GetAssetType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::UIElements::VisualTreeAsset::*)(::StringW)>(&::UnityEngine::UIElements::VisualTreeAsset::GetAssetType)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x714c8c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "GetAssetType", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.GetUxmlObjectFactory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IBaseUxmlObjectFactory* (::UnityEngine::UIElements::VisualTreeAsset::*)(::UnityEngine::UIElements::UxmlObjectAsset*)>(
    &::UnityEngine::UIElements::VisualTreeAsset::GetUxmlObjectFactory)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x714c9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                                                           { "GetUxmlObjectFactory", {}, { ::i2c::type_of<::UnityEngine::UIElements::UxmlObjectAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.get_slots
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotDefinition>* (
    ::UnityEngine::UIElements::VisualTreeAsset::*)()>(&::UnityEngine::UIElements::VisualTreeAsset::get_slots)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x714cdac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "get_slots", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.get_contentContainerId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::VisualTreeAsset::*)()>(&::UnityEngine::UIElements::VisualTreeAsset::get_contentContainerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x714cdb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "get_contentContainerId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.set_contentContainerId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(int32_t)>(&::UnityEngine::UIElements::VisualTreeAsset::set_contentContainerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x714cdbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "set_contentContainerId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.Instantiate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TemplateContainer* (::UnityEngine::UIElements::VisualTreeAsset::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset::Instantiate)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x714cdc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "Instantiate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.Instantiate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TemplateContainer* (::UnityEngine::UIElements::VisualTreeAsset::*)(::StringW)>(
    &::UnityEngine::UIElements::VisualTreeAsset::Instantiate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x714d410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "Instantiate", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.CloneTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TemplateContainer* (::UnityEngine::UIElements::VisualTreeAsset::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset::CloneTree)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x714d430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "CloneTree", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.CloneTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TemplateContainer* (::UnityEngine::UIElements::VisualTreeAsset::*)(::StringW)>(
    &::UnityEngine::UIElements::VisualTreeAsset::CloneTree)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x714d434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "CloneTree", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.CloneTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeAsset::CloneTree)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x714d454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "CloneTree", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.CloneTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(::UnityEngine::UIElements::VisualElement*, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::UnityEngine::UIElements::VisualTreeAsset::CloneTree)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x714d46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                            { "CloneTree", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.CloneTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::CreationContext)>(
    &::UnityEngine::UIElements::VisualTreeAsset::CloneTree)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x714d084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                { "CloneTree", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::CreationContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.CloneSetupRecursively
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::VisualTreeAsset::*)(::UnityEngine::UIElements::VisualElementAsset*, ::UnityEngine::UIElements::CreationContext)>(
        &::UnityEngine::UIElements::VisualTreeAsset::CloneSetupRecursively)> {
  constexpr static std::size_t size = 0x9b4;
  constexpr static std::size_t addrs = 0x714d8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                            { "CloneSetupRecursively", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElementAsset*>(), ::i2c::type_of<::UnityEngine::UIElements::CreationContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.TryGetSlotInsertionPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::VisualTreeAsset::*)(int32_t, ::by_ref<::StringW>)>(
    &::UnityEngine::UIElements::VisualTreeAsset::TryGetSlotInsertionPoint)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x714e824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                                                           { "TryGetSlotInsertionPoint", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.TryGetUsingEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::VisualTreeAsset::*)(::StringW, ::by_ref<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>)>(
    &::UnityEngine::UIElements::VisualTreeAsset::TryGetUsingEntry)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x714e8ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                { "TryGetUsingEntry", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.RemoveUsingEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(::UnityEngine::UIElements::VisualTreeAsset_UsingEntry)>(
    &::UnityEngine::UIElements::VisualTreeAsset::RemoveUsingEntry)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x714ea4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                                                           { "RemoveUsingEntry", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.ResolveTemplate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UIElements::VisualTreeAsset> (::UnityEngine::UIElements::VisualTreeAsset::*)(::StringW)>(
    &::UnityEngine::UIElements::VisualTreeAsset::ResolveTemplate)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x714eacc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "ResolveTemplate", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.TemplateExists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::VisualTreeAsset::*)(::StringW)>(&::UnityEngine::UIElements::VisualTreeAsset::TemplateExists)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x714ec40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "TemplateExists", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.RegisterTemplate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(::StringW, ::StringW)>(&::UnityEngine::UIElements::VisualTreeAsset::RegisterTemplate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x714ed40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "RegisterTemplate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.RegisterTemplate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(::StringW, ::UnityEngine::UIElements::VisualTreeAsset*)>(
    &::UnityEngine::UIElements::VisualTreeAsset::RegisterTemplate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x714ee84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                             { "RegisterTemplate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.TryRegisterTemplate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::VisualTreeAsset::*)(::StringW, ::UnityEngine::UIElements::VisualTreeAsset*)>(
    &::UnityEngine::UIElements::VisualTreeAsset::TryRegisterTemplate)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x714eeb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                             { "TryRegisterTemplate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.TryUnregisterTemplate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::VisualTreeAsset::*)(::StringW)>(&::UnityEngine::UIElements::VisualTreeAsset::TryUnregisterTemplate)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x714f0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "TryUnregisterTemplate", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.InsertUsingEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(::UnityEngine::UIElements::VisualTreeAsset_UsingEntry)>(
    &::UnityEngine::UIElements::VisualTreeAsset::InsertUsingEntry)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x714ed60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                                                           { "InsertUsingEntry", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (*)(::UnityEngine::UIElements::VisualElementAsset*, ::UnityEngine::UIElements::CreationContext)>(
    &::UnityEngine::UIElements::VisualTreeAsset::Create)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x714e264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                { "Create", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElementAsset*>(), ::i2c::type_of<::UnityEngine::UIElements::CreationContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.AssignClassListFromAssetToElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::VisualElementAsset*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeAsset::AssignClassListFromAssetToElement)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x714d658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
            { "AssignClassListFromAssetToElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElementAsset*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.AssignStyleSheetFromAssetToElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::VisualElementAsset*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualTreeAsset::AssignStyleSheetFromAssetToElement)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x714d6c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
            { "AssignStyleSheetFromAssetToElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElementAsset*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.get_contentHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::VisualTreeAsset::*)()>(&::UnityEngine::UIElements::VisualTreeAsset::get_contentHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x714f5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "get_contentHash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.set_contentHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(int32_t)>(&::UnityEngine::UIElements::VisualTreeAsset::set_contentHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x714f5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "set_contentHash", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.DepthFirstTraversal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UxmlAsset*>* (::UnityEngine::UIElements::VisualTreeAsset::*)()>(
    &::UnityEngine::UIElements::VisualTreeAsset::DepthFirstTraversal)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x714ba68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "DepthFirstTraversal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.DepthFirstTraversal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UxmlAsset*>* (
    ::UnityEngine::UIElements::VisualTreeAsset::*)(::UnityEngine::UIElements::UxmlAsset*)>(&::UnityEngine::UIElements::VisualTreeAsset::DepthFirstTraversal)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x714f5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "DepthFirstTraversal", {}, { ::i2c::type_of<::UnityEngine::UIElements::UxmlAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.DepthFirstTraversalIndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::VisualTreeAsset::*)(::UnityEngine::UIElements::UxmlAsset*)>(
    &::UnityEngine::UIElements::VisualTreeAsset::DepthFirstTraversalIndexOf)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x714f66c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                                                           { "DepthFirstTraversalIndexOf", {}, { ::i2c::type_of<::UnityEngine::UIElements::UxmlAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.GenerateNewId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::VisualTreeAsset::*)(::UnityEngine::UIElements::VisualElementAsset*)>(
    &::UnityEngine::UIElements::VisualTreeAsset::GenerateNewId)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x714f958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                                                           { "GenerateNewId", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElementAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.AddElementToDocument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElementAsset* (::UnityEngine::UIElements::VisualTreeAsset::*)(::UnityEngine::UIElements::VisualElementAsset*,
                                                                                                                                                      ::UnityEngine::UIElements::VisualElementAsset*)>(
    &::UnityEngine::UIElements::VisualTreeAsset::AddElementToDocument)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x714f9f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                            { "AddElementToDocument", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElementAsset*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElementAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.ReparentElementInDocument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElementAsset* (
    ::UnityEngine::UIElements::VisualTreeAsset::*)(::UnityEngine::UIElements::VisualElementAsset*, ::UnityEngine::UIElements::VisualElementAsset*, int32_t)>(
    &::UnityEngine::UIElements::VisualTreeAsset::ReparentElementInDocument)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x714fa5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                            { "ReparentElementInDocument",
                              {},
                              { ::i2c::type_of<::UnityEngine::UIElements::VisualElementAsset*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElementAsset*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.Swallow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)(
    ::UnityEngine::UIElements::VisualElementAsset*, ::UnityEngine::UIElements::VisualTreeAsset*)>(&::UnityEngine::UIElements::VisualTreeAsset::Swallow)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x714fbdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                         { "Swallow", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElementAsset*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.UpdateUxmlObjectAssetsParentId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::VisualElementAsset*)>(&::UnityEngine::UIElements::VisualTreeAsset::UpdateUxmlObjectAssetsParentId)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x714ffec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                             { "UpdateUxmlObjectAssetsParentId", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElementAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.SwallowStyleRule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::VisualTreeAsset*, ::UnityEngine::UIElements::VisualTreeAsset*,
                                                                ::UnityEngine::UIElements::VisualElementAsset*)>(&::UnityEngine::UIElements::VisualTreeAsset::SwallowStyleRule)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x71501f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                             { "SwallowStyleRule",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::VisualElementAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset.AddElementOfType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElementAsset* (
    ::UnityEngine::UIElements::VisualTreeAsset::*)(::UnityEngine::UIElements::VisualElementAsset*, ::StringW)>(&::UnityEngine::UIElements::VisualTreeAsset::AddElementOfType)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x7150394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                             { "AddElementOfType", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElementAsset*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualTreeAsset::*)()>(&::UnityEngine::UIElements::VisualTreeAsset::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x7150a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeAsset._Create_g__CreateError_80_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (*)(::by_ref<::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass80_0>)>(
    &::UnityEngine::UIElements::VisualTreeAsset::_Create_g__CreateError_80_0)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x714f3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                             { "<Create>g__CreateError|80_0", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass80_0>>() } })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_ImportedWithErrors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImportedWithErrors;
}
constexpr bool const& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_ImportedWithErrors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImportedWithErrors;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_set_m_ImportedWithErrors(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ImportedWithErrors = value;
}
constexpr bool& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_HasEditorElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasEditorElements;
}
constexpr bool const& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_HasEditorElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasEditorElements;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_set_m_HasEditorElements(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasEditorElements = value;
}
constexpr bool& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_HasUpdatedUrls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasUpdatedUrls;
}
constexpr bool const& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_HasUpdatedUrls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasUpdatedUrls;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_set_m_HasUpdatedUrls(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasUpdatedUrls = value;
}
constexpr bool& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_ImportedWithWarnings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImportedWithWarnings;
}
constexpr bool const& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_ImportedWithWarnings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImportedWithWarnings;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_set_m_ImportedWithWarnings(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ImportedWithWarnings = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>*& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_Usings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Usings;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>* const& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_Usings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Usings;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_set_m_Usings(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Usings = value;
}
constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet>& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_inlineSheet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inlineSheet;
}
constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet> const& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_inlineSheet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inlineSheet;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_set_inlineSheet(::UnityW<::UnityEngine::UIElements::StyleSheet> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inlineSheet = value;
}
constexpr ::UnityEngine::UIElements::VisualElementAsset*& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_VisualTree() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisualTree;
}
constexpr ::UnityEngine::UIElements::VisualElementAsset* const& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_VisualTree() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisualTree;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_set_m_VisualTree(::UnityEngine::UIElements::VisualElementAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VisualTree = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_AssetEntry>*& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_AssetEntries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetEntries;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_AssetEntry>* const& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_AssetEntries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetEntries;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_set_m_AssetEntries(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_AssetEntry>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AssetEntries = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotDefinition>*& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_Slots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Slots;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotDefinition>* const& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_Slots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Slots;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_set_m_Slots(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotDefinition>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Slots = value;
}
constexpr int32_t& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_ContentContainerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentContainerId;
}
constexpr int32_t const& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_ContentContainerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentContainerId;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_set_m_ContentContainerId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContentContainerId = value;
}
constexpr int32_t& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_ContentHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentHash;
}
constexpr int32_t const& UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_get_m_ContentHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentHash;
}
constexpr void UnityEngine::UIElements::VisualTreeAsset::__cordl_internal_set_m_ContentHash(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContentHash = value;
}
inline void UnityEngine::UIElements::VisualTreeAsset::setStaticF_NoRegisteredFactoryErrorMessage(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "NoRegisteredFactoryErrorMessage", ::UnityEngine::UIElements::VisualTreeAsset*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::VisualTreeAsset::getStaticF_NoRegisteredFactoryErrorMessage() {
  return ::cordl_internals::getStaticField<::StringW, "NoRegisteredFactoryErrorMessage", ::UnityEngine::UIElements::VisualTreeAsset*>();
}
inline void
UnityEngine::UIElements::VisualTreeAsset::setStaticF_s_TemporarySlotInsertionPoints(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*, "s_TemporarySlotInsertionPoints",
                                    ::UnityEngine::UIElements::VisualTreeAsset*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::VisualTreeAsset::getStaticF_s_TemporarySlotInsertionPoints() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>*, "s_TemporarySlotInsertionPoints",
                                           ::UnityEngine::UIElements::VisualTreeAsset*>();
}
inline void UnityEngine::UIElements::VisualTreeAsset::setStaticF_s_VeaIdsPath(::System::Collections::Generic::List_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "s_VeaIdsPath", ::UnityEngine::UIElements::VisualTreeAsset*>(
      std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* UnityEngine::UIElements::VisualTreeAsset::getStaticF_s_VeaIdsPath() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "s_VeaIdsPath", ::UnityEngine::UIElements::VisualTreeAsset*>();
}
inline bool UnityEngine::UIElements::VisualTreeAsset::get_importedWithErrors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "get_importedWithErrors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset::set_importedWithErrors(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "set_importedWithErrors", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::VisualTreeAsset::get_hasEditorElements() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "get_hasEditorElements", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset::set_hasEditorElements(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "set_hasEditorElements", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::VisualTreeAsset::get_importerWithUpdatedUrls() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "get_importerWithUpdatedUrls", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset::set_importerWithUpdatedUrls(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "set_importerWithUpdatedUrls", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::VisualTreeAsset::get_importedWithWarnings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "get_importedWithWarnings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset::set_importedWithWarnings(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "set_importedWithWarnings", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::VisualTreeAsset::GetNextChildSerialNumber() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "GetNextChildSerialNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>* UnityEngine::UIElements::VisualTreeAsset::get_usings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "get_usings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* UnityEngine::UIElements::VisualTreeAsset::get_templateDependencies() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "get_templateDependencies", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::UIElements::StyleSheet> UnityEngine::UIElements::VisualTreeAsset::GetOrCreateInlineStyleSheet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "GetOrCreateInlineStyleSheet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::StyleSheet>>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElementAsset* UnityEngine::UIElements::VisualTreeAsset::get_visualTreeNoAlloc() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "get_visualTreeNoAlloc", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElementAsset*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElementAsset* UnityEngine::UIElements::VisualTreeAsset::get_visualTree() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "get_visualTree", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElementAsset*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset::SetRootAsset(::UnityEngine::UIElements::VisualElementAsset* root) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "SetRootAsset", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElementAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* UnityEngine::UIElements::VisualTreeAsset::get_stylesheets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "get_stylesheets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UxmlObjectAsset* UnityEngine::UIElements::VisualTreeAsset::AddUxmlObject(::UnityEngine::UIElements::UxmlAsset* parent, ::StringW fieldUxmlName,
                                                                                                           ::StringW fullTypeName, ::UnityEngine::UIElements::UxmlNamespaceDefinition xmlNamespace) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                                                         { "AddUxmlObject",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::UIElements::UxmlAsset*>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::UIElements::UxmlNamespaceDefinition>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UxmlObjectAsset*>(this, ___internal_method, parent, fieldUxmlName, fullTypeName, xmlNamespace);
}
inline int32_t UnityEngine::UIElements::VisualTreeAsset::GetNextUxmlAssetId(int32_t parentId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "GetNextUxmlAssetId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, parentId);
}
inline void UnityEngine::UIElements::VisualTreeAsset::Awake__Internal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "Awake__Internal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset::SetupReferences() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "SetupReferences", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
  requires(::cordl_internals::default_constructor_constraint<T>)
inline ::System::Collections::Generic::List_1<T>* UnityEngine::UIElements::VisualTreeAsset::GetUxmlObjects(::UnityEngine::UIElements::IUxmlAttributes* asset,
                                                                                                           ::UnityEngine::UIElements::CreationContext cc) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
          { "GetUxmlObjects", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::UIElements::IUxmlAttributes*>(), ::i2c::type_of<::UnityEngine::UIElements::CreationContext>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(this, ___internal_method, asset, cc);
}
inline bool UnityEngine::UIElements::VisualTreeAsset::AssetEntryExists(::StringW path, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                                                         { "AssetEntryExists", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, path, type);
}
inline void UnityEngine::UIElements::VisualTreeAsset::RegisterAssetEntry(::StringW path, ::System::Type* type, ::UnityEngine::Object* asset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                              { "RegisterAssetEntry", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, type, asset);
}
inline void UnityEngine::UIElements::VisualTreeAsset::TransferAssetEntries(::UnityEngine::UIElements::VisualTreeAsset* otherVta) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                                                         { "TransferAssetEntries", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherVta);
}
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline T UnityEngine::UIElements::VisualTreeAsset::GetAsset(::StringW path) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "GetAsset", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, path);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::UIElements::VisualTreeAsset::GetAsset(::StringW path, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "GetAsset", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, path, type);
}
inline ::System::Type* UnityEngine::UIElements::VisualTreeAsset::GetAssetType(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "GetAssetType", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, path);
}
inline ::UnityEngine::UIElements::IBaseUxmlObjectFactory* UnityEngine::UIElements::VisualTreeAsset::GetUxmlObjectFactory(::UnityEngine::UIElements::UxmlObjectAsset* uxmlObjectAsset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                                                         { "GetUxmlObjectFactory", {}, { ::i2c::type_of<::UnityEngine::UIElements::UxmlObjectAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IBaseUxmlObjectFactory*>(this, ___internal_method, uxmlObjectAsset);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotDefinition>* UnityEngine::UIElements::VisualTreeAsset::get_slots() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "get_slots", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotDefinition>*>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::VisualTreeAsset::get_contentContainerId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "get_contentContainerId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset::set_contentContainerId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "set_contentContainerId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::TemplateContainer* UnityEngine::UIElements::VisualTreeAsset::Instantiate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "Instantiate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TemplateContainer*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TemplateContainer* UnityEngine::UIElements::VisualTreeAsset::Instantiate(::StringW bindingPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "Instantiate", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TemplateContainer*>(this, ___internal_method, bindingPath);
}
inline ::UnityEngine::UIElements::TemplateContainer* UnityEngine::UIElements::VisualTreeAsset::CloneTree() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "CloneTree", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TemplateContainer*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TemplateContainer* UnityEngine::UIElements::VisualTreeAsset::CloneTree(::StringW bindingPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "CloneTree", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TemplateContainer*>(this, ___internal_method, bindingPath);
}
inline void UnityEngine::UIElements::VisualTreeAsset::CloneTree(::UnityEngine::UIElements::VisualElement* target) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "CloneTree", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void UnityEngine::UIElements::VisualTreeAsset::CloneTree(::UnityEngine::UIElements::VisualElement* target, ::by_ref<int32_t> firstElementIndex, ::by_ref<int32_t> elementAddedCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                          { "CloneTree", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, firstElementIndex, elementAddedCount);
}
inline void UnityEngine::UIElements::VisualTreeAsset::CloneTree(::UnityEngine::UIElements::VisualElement* target, ::UnityEngine::UIElements::CreationContext cc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                              { "CloneTree", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::CreationContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, cc);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::VisualTreeAsset::CloneSetupRecursively(::UnityEngine::UIElements::VisualElementAsset* asset,
                                                                                                                 ::UnityEngine::UIElements::CreationContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                          { "CloneSetupRecursively", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElementAsset*>(), ::i2c::type_of<::UnityEngine::UIElements::CreationContext>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method, asset, context);
}
inline bool UnityEngine::UIElements::VisualTreeAsset::TryGetSlotInsertionPoint(int32_t insertionPointId, ::by_ref<::StringW> slotName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                                                         { "TryGetSlotInsertionPoint", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, insertionPointId, slotName);
}
inline bool UnityEngine::UIElements::VisualTreeAsset::TryGetUsingEntry(::StringW templateName, ::by_ref<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry> entry) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                              { "TryGetUsingEntry", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, templateName, entry);
}
inline void UnityEngine::UIElements::VisualTreeAsset::RemoveUsingEntry(::UnityEngine::UIElements::VisualTreeAsset_UsingEntry entry) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                                                         { "RemoveUsingEntry", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry);
}
inline ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> UnityEngine::UIElements::VisualTreeAsset::ResolveTemplate(::StringW templateName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "ResolveTemplate", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>(this, ___internal_method, templateName);
}
inline bool UnityEngine::UIElements::VisualTreeAsset::TemplateExists(::StringW templateName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "TemplateExists", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, templateName);
}
inline void UnityEngine::UIElements::VisualTreeAsset::RegisterTemplate(::StringW templateName, ::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "RegisterTemplate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, templateName, path);
}
inline void UnityEngine::UIElements::VisualTreeAsset::RegisterTemplate(::StringW templateName, ::UnityEngine::UIElements::VisualTreeAsset* asset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                           { "RegisterTemplate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, templateName, asset);
}
inline bool UnityEngine::UIElements::VisualTreeAsset::TryRegisterTemplate(::StringW templateName, ::UnityEngine::UIElements::VisualTreeAsset* asset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                           { "TryRegisterTemplate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, templateName, asset);
}
inline bool UnityEngine::UIElements::VisualTreeAsset::TryUnregisterTemplate(::StringW templateName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "TryUnregisterTemplate", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, templateName);
}
inline void UnityEngine::UIElements::VisualTreeAsset::InsertUsingEntry(::UnityEngine::UIElements::VisualTreeAsset_UsingEntry entry) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                                                         { "InsertUsingEntry", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::VisualTreeAsset::Create(::UnityEngine::UIElements::VisualElementAsset* asset,
                                                                                                  ::UnityEngine::UIElements::CreationContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                              { "Create", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElementAsset*>(), ::i2c::type_of<::UnityEngine::UIElements::CreationContext>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(nullptr, ___internal_method, asset, ctx);
}
inline void UnityEngine::UIElements::VisualTreeAsset::AssignClassListFromAssetToElement(::UnityEngine::UIElements::VisualElementAsset* asset, ::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
          { "AssignClassListFromAssetToElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElementAsset*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, asset, element);
}
inline void UnityEngine::UIElements::VisualTreeAsset::AssignStyleSheetFromAssetToElement(::UnityEngine::UIElements::VisualElementAsset* asset, ::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
          { "AssignStyleSheetFromAssetToElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElementAsset*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, asset, element);
}
inline int32_t UnityEngine::UIElements::VisualTreeAsset::get_contentHash() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "get_contentHash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeAsset::set_contentHash(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "set_contentHash", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UxmlAsset*>* UnityEngine::UIElements::VisualTreeAsset::DepthFirstTraversal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "DepthFirstTraversal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UxmlAsset*>*>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* UnityEngine::UIElements::VisualTreeAsset::DepthFirstTraversalOfType() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "DepthFirstTraversalOfType", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UxmlAsset*>*
UnityEngine::UIElements::VisualTreeAsset::DepthFirstTraversal(::UnityEngine::UIElements::UxmlAsset* asset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "DepthFirstTraversal", {}, { ::i2c::type_of<::UnityEngine::UIElements::UxmlAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UxmlAsset*>*>(this, ___internal_method, asset);
}
inline int32_t UnityEngine::UIElements::VisualTreeAsset::DepthFirstTraversalIndexOf(::UnityEngine::UIElements::UxmlAsset* uxmlAsset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                                                         { "DepthFirstTraversalIndexOf", {}, { ::i2c::type_of<::UnityEngine::UIElements::UxmlAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, uxmlAsset);
}
inline int32_t UnityEngine::UIElements::VisualTreeAsset::GenerateNewId(::UnityEngine::UIElements::VisualElementAsset* vea) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { "GenerateNewId", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElementAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, vea);
}
inline ::UnityEngine::UIElements::VisualElementAsset* UnityEngine::UIElements::VisualTreeAsset::AddElementToDocument(::UnityEngine::UIElements::VisualElementAsset* vea,
                                                                                                                     ::UnityEngine::UIElements::VisualElementAsset* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                          { "AddElementToDocument", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElementAsset*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElementAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElementAsset*>(this, ___internal_method, vea, parent);
}
inline ::UnityEngine::UIElements::VisualElementAsset* UnityEngine::UIElements::VisualTreeAsset::ReparentElementInDocument(::UnityEngine::UIElements::VisualElementAsset* vea,
                                                                                                                          ::UnityEngine::UIElements::VisualElementAsset* newParent, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                          { "ReparentElementInDocument",
                            {},
                            { ::i2c::type_of<::UnityEngine::UIElements::VisualElementAsset*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElementAsset*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElementAsset*>(this, ___internal_method, vea, newParent, index);
}
inline void UnityEngine::UIElements::VisualTreeAsset::Swallow(::UnityEngine::UIElements::VisualElementAsset* parent, ::UnityEngine::UIElements::VisualTreeAsset* other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                              { "Swallow", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElementAsset*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, other);
}
inline void UnityEngine::UIElements::VisualTreeAsset::UpdateUxmlObjectAssetsParentId(::UnityEngine::UIElements::VisualElementAsset* visualElementAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                           { "UpdateUxmlObjectAssetsParentId", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElementAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, visualElementAsset);
}
inline void UnityEngine::UIElements::VisualTreeAsset::SwallowStyleRule(::UnityEngine::UIElements::VisualTreeAsset* previous, ::UnityEngine::UIElements::VisualTreeAsset* next,
                                                                       ::UnityEngine::UIElements::VisualElementAsset* vea) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                           { "SwallowStyleRule",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::VisualElementAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, previous, next, vea);
}
inline ::UnityEngine::UIElements::VisualElementAsset* UnityEngine::UIElements::VisualTreeAsset::AddElementOfType(::UnityEngine::UIElements::VisualElementAsset* parent, ::StringW fullTypeName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                           { "AddElementOfType", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElementAsset*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElementAsset*>(this, ___internal_method, parent, fullTypeName);
}
inline void UnityEngine::UIElements::VisualTreeAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement*
UnityEngine::UIElements::VisualTreeAsset::_Create_g__CreateError_80_0(::by_ref<::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass80_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualTreeAsset*>(),
                                                           { "<Create>g__CreateError|80_0", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass80_0>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::UIElements::VisualTreeAsset* UnityEngine::UIElements::VisualTreeAsset::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::VisualTreeAsset*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeAsset::VisualTreeAsset() {}
