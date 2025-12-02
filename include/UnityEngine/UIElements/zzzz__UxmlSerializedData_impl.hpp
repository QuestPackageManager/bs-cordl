#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlSerializedData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlSerializedData_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlSerializedData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlSerializedData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags::UxmlSerializedData_UxmlAttributeFlags(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags::UxmlSerializedData_UxmlAttributeFlags() {}
constexpr ::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags::Ignore{ static_cast<uint8_t>(0x0u) };
constexpr ::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags::OverriddenInUxml{ static_cast<uint8_t>(0x1u) };
constexpr ::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags::DefaultValue{ static_cast<uint8_t>(0x2u) };
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlSerializedData.CreateInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::UIElements::UxmlSerializedData::*)()>(
    &::UnityEngine::UIElements::UxmlSerializedData::CreateInstance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlSerializedData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlSerializedData*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlSerializedData.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UxmlSerializedData::*)(::System::Object*)>(
    &::UnityEngine::UIElements::UxmlSerializedData::Deserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlSerializedData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlSerializedData*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlSerializedData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UxmlSerializedData::*)()>(&::UnityEngine::UIElements::UxmlSerializedData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a8cc54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlSerializedData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::UIElements::UxmlSerializedData::__cordl_internal_get_uxmlAssetId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uxmlAssetId;
}
constexpr int32_t const& UnityEngine::UIElements::UxmlSerializedData::__cordl_internal_get_uxmlAssetId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uxmlAssetId;
}
constexpr void UnityEngine::UIElements::UxmlSerializedData::__cordl_internal_set_uxmlAssetId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___uxmlAssetId = value;
}
inline void UnityEngine::UIElements::UxmlSerializedData::setStaticF_s_CurrentDeserializeFlags(::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags, "s_CurrentDeserializeFlags",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlSerializedData*>::get>(
      std::forward<::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags>(value));
}
inline ::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags UnityEngine::UIElements::UxmlSerializedData::getStaticF_s_CurrentDeserializeFlags() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags, "s_CurrentDeserializeFlags",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlSerializedData*>::get>();
}
inline ::System::Object* UnityEngine::UIElements::UxmlSerializedData::CreateInstance() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlSerializedData*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UxmlSerializedData::Deserialize(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlSerializedData*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline void UnityEngine::UIElements::UxmlSerializedData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlSerializedData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UxmlSerializedData* UnityEngine::UIElements::UxmlSerializedData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UxmlSerializedData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlSerializedData::UxmlSerializedData() {}
constexpr ::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags UnityEngine::UIElements::UxmlSerializedData::k_DefaultFlags{ static_cast<uint8_t>(0x1u) };
