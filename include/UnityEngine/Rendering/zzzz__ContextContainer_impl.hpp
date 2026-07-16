#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ContextContainer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextItem_def.hpp"
template <typename T> inline void UnityEngine::Rendering::ContextContainer_TypeId_1<T>::setStaticF_value(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "value", ::UnityEngine::Rendering::ContextContainer_TypeId_1<T>*>(std::forward<uint32_t>(value));
}
template <typename T> inline uint32_t UnityEngine::Rendering::ContextContainer_TypeId_1<T>::getStaticF_value() {
  return ::cordl_internals::getStaticField<uint32_t, "value", ::UnityEngine::Rendering::ContextContainer_TypeId_1<T>*>();
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::ContextContainer_TypeId_1<T>::ContextContainer_TypeId_1() {}
// Ctor Parameters [CppParam { name: "storage", ty: "::UnityEngine::Rendering::ContextItem*", modifiers: "", def_value: Some("{}") }, CppParam { name: "isSet", ty: "bool", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Rendering::ContextContainer_Item::ContextContainer_Item(::UnityEngine::Rendering::ContextItem* storage, bool isSet) noexcept {
  this->storage = storage;
  this->isSet = isSet;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ContextContainer_Item::ContextContainer_Item() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ContextContainer.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ContextContainer::*)(uint32_t)>(&::UnityEngine::Rendering::ContextContainer::Contains)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6750bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ContextContainer*>(), { "Contains", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ContextContainer.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ContextContainer::*)()>(&::UnityEngine::Rendering::ContextContainer::Dispose)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6750c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ContextContainer*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ContextContainer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ContextContainer::*)()>(&::UnityEngine::Rendering::ContextContainer::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6750dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ContextContainer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Rendering::ContextContainer_Item>& UnityEngine::Rendering::ContextContainer::__cordl_internal_get_m_Items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Items;
}
constexpr ::ArrayW<::UnityEngine::Rendering::ContextContainer_Item> const& UnityEngine::Rendering::ContextContainer::__cordl_internal_get_m_Items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Items;
}
constexpr void UnityEngine::Rendering::ContextContainer::__cordl_internal_set_m_Items(::ArrayW<::UnityEngine::Rendering::ContextContainer_Item> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Items = value;
}
constexpr ::System::Collections::Generic::List_1<uint32_t>*& UnityEngine::Rendering::ContextContainer::__cordl_internal_get_m_ActiveItemIndices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveItemIndices;
}
constexpr ::System::Collections::Generic::List_1<uint32_t>* const& UnityEngine::Rendering::ContextContainer::__cordl_internal_get_m_ActiveItemIndices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveItemIndices;
}
constexpr void UnityEngine::Rendering::ContextContainer::__cordl_internal_set_m_ActiveItemIndices(::System::Collections::Generic::List_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActiveItemIndices = value;
}
inline void UnityEngine::Rendering::ContextContainer::setStaticF_s_TypeCount(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "s_TypeCount", ::UnityEngine::Rendering::ContextContainer*>(std::forward<uint32_t>(value));
}
inline uint32_t UnityEngine::Rendering::ContextContainer::getStaticF_s_TypeCount() {
  return ::cordl_internals::getStaticField<uint32_t, "s_TypeCount", ::UnityEngine::Rendering::ContextContainer*>();
}
template <typename T> inline T UnityEngine::Rendering::ContextContainer::Get() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ContextContainer*>(), { "Get", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::Rendering::ContextContainer::Create() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ContextContainer*>(), { "Create", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::Rendering::ContextContainer::GetOrCreate() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ContextContainer*>(), { "GetOrCreate", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::Rendering::ContextContainer::Contains() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ContextContainer*>(), { "Contains", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::ContextContainer::Contains(uint32_t typeId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ContextContainer*>(), { "Contains", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, typeId);
}
template <typename T> inline T UnityEngine::Rendering::ContextContainer::CreateAndGetData(uint32_t typeId) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ContextContainer*>(), { "CreateAndGetData", { ::i2c::class_of<T>() }, { ::i2c::type_of<uint32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, typeId);
}
inline void UnityEngine::Rendering::ContextContainer::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ContextContainer*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ContextContainer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ContextContainer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ContextContainer* UnityEngine::Rendering::ContextContainer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ContextContainer*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::ContextContainer::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::ContextContainer::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ContextContainer::ContextContainer() {}
