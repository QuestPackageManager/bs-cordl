#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassLight.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassLight_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassLightTypeSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassLight_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassRendererSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight_LightsDataItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassLight_LightsDataItem::*)(
    ::GlobalNamespace::BloomPrePassLightTypeSO*, ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BloomPrePassLight>>*)>(
    &::GlobalNamespace::BloomPrePassLight_LightsDataItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56b0cdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight_LightsDataItem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BloomPrePassLightTypeSO*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BloomPrePassLight>>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>& GlobalNamespace::BloomPrePassLight_LightsDataItem::__cordl_internal_get_lightType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightType;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO> const& GlobalNamespace::BloomPrePassLight_LightsDataItem::__cordl_internal_get_lightType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightType;
}
constexpr void GlobalNamespace::BloomPrePassLight_LightsDataItem::__cordl_internal_set_lightType(::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BloomPrePassLight>>*& GlobalNamespace::BloomPrePassLight_LightsDataItem::__cordl_internal_get_lights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lights;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BloomPrePassLight>>* const& GlobalNamespace::BloomPrePassLight_LightsDataItem::__cordl_internal_get_lights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lights;
}
constexpr void GlobalNamespace::BloomPrePassLight_LightsDataItem::__cordl_internal_set_lights(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BloomPrePassLight>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lights)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BloomPrePassLight_LightsDataItem::_ctor(::GlobalNamespace::BloomPrePassLightTypeSO* lightType,
                                                                     ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BloomPrePassLight>>* lights) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight_LightsDataItem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BloomPrePassLightTypeSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BloomPrePassLight>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightType, lights);
}
inline ::GlobalNamespace::BloomPrePassLight_LightsDataItem*
GlobalNamespace::BloomPrePassLight_LightsDataItem::New_ctor(::GlobalNamespace::BloomPrePassLightTypeSO* lightType,
                                                            ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BloomPrePassLight>>* lights) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BloomPrePassLight_LightsDataItem*>(lightType, lights));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassLight_LightsDataItem::BloomPrePassLight_LightsDataItem() {}
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.get_bloomLightsDict
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<
    ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>, ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BloomPrePassLight>>*>* (*)()>(
    &::GlobalNamespace::BloomPrePassLight::get_bloomLightsDict)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x56b0840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                                                               "get_bloomLightsDict", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.get_lightsDataItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassLight_LightsDataItem*>* (*)()>(
    &::GlobalNamespace::BloomPrePassLight::get_lightsDataItems)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x56b089c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                                                               "get_lightsDataItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassLight::*)()>(&::GlobalNamespace::BloomPrePassLight::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56b08f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassLight::*)()>(&::GlobalNamespace::BloomPrePassLight::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56b0be8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassLight::*)()>(&::GlobalNamespace::BloomPrePassLight::OnDestroy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56b0cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.RegisterLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassLight::*)()>(&::GlobalNamespace::BloomPrePassLight::RegisterLight)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x56b08fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), "RegisterLight",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.UnregisterLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassLight::*)()>(&::GlobalNamespace::BloomPrePassLight::UnregisterLight)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x56b0bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), "UnregisterLight",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.DidRegisterLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassLight::*)()>(&::GlobalNamespace::BloomPrePassLight::DidRegisterLight)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.FillInputData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassLight::*)(
    ::ByRef<int32_t>, ::ArrayW<::GlobalNamespace::BloomPrePassRendererSO_InputData, ::Array<::GlobalNamespace::BloomPrePassRendererSO_InputData>*>)>(
    &::GlobalNamespace::BloomPrePassLight::FillInputData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.Refresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassLight::*)()>(&::GlobalNamespace::BloomPrePassLight::Refresh)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassLight::*)()>(&::GlobalNamespace::BloomPrePassLight::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56b0ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>& GlobalNamespace::BloomPrePassLight::__cordl_internal_get__lightType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightType;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO> const& GlobalNamespace::BloomPrePassLight::__cordl_internal_get__lightType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightType;
}
constexpr void GlobalNamespace::BloomPrePassLight::__cordl_internal_set__lightType(::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>& GlobalNamespace::BloomPrePassLight::__cordl_internal_get__registeredWithLightType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registeredWithLightType;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO> const& GlobalNamespace::BloomPrePassLight::__cordl_internal_get__registeredWithLightType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registeredWithLightType;
}
constexpr void GlobalNamespace::BloomPrePassLight::__cordl_internal_set__registeredWithLightType(::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____registeredWithLightType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::BloomPrePassLight::__cordl_internal_get__isRegistered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isRegistered;
}
constexpr bool const& GlobalNamespace::BloomPrePassLight::__cordl_internal_get__isRegistered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isRegistered;
}
constexpr void GlobalNamespace::BloomPrePassLight::__cordl_internal_set__isRegistered(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isRegistered = value;
}
constexpr bool& GlobalNamespace::BloomPrePassLight::__cordl_internal_get__isBeingDestroyed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isBeingDestroyed;
}
constexpr bool const& GlobalNamespace::BloomPrePassLight::__cordl_internal_get__isBeingDestroyed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isBeingDestroyed;
}
constexpr void GlobalNamespace::BloomPrePassLight::__cordl_internal_set__isBeingDestroyed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isBeingDestroyed = value;
}
inline void GlobalNamespace::BloomPrePassLight::setStaticF__bloomLightsDict(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>, ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BloomPrePassLight>>*>*
        value) {
  ::cordl_internals::setStaticField<
      ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>, ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BloomPrePassLight>>*>*,
      "_bloomLightsDict", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>,
                                                                ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BloomPrePassLight>>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>, ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BloomPrePassLight>>*>*
GlobalNamespace::BloomPrePassLight::getStaticF__bloomLightsDict() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>, ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BloomPrePassLight>>*>*,
      "_bloomLightsDict", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get>();
}
inline void GlobalNamespace::BloomPrePassLight::setStaticF__lightsDataItems(::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassLight_LightsDataItem*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassLight_LightsDataItem*>*, "_lightsDataItems",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get>(
      std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassLight_LightsDataItem*>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassLight_LightsDataItem*>* GlobalNamespace::BloomPrePassLight::getStaticF__lightsDataItems() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassLight_LightsDataItem*>*, "_lightsDataItems",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get>();
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>, ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BloomPrePassLight>>*>*
GlobalNamespace::BloomPrePassLight::get_bloomLightsDict() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                                                             "get_bloomLightsDict", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>, ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BloomPrePassLight>>*>*,
      false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassLight_LightsDataItem*>* GlobalNamespace::BloomPrePassLight::get_lightsDataItems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                                                             "get_lightsDataItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassLight_LightsDataItem*>*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassLight::OnEnable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassLight::OnDisable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassLight::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassLight::RegisterLight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), "RegisterLight",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassLight::UnregisterLight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), "UnregisterLight",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassLight::DidRegisterLight() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassLight::FillInputData(::ByRef<int32_t> lightNum,
                                                              ::ArrayW<::GlobalNamespace::BloomPrePassRendererSO_InputData, ::Array<::GlobalNamespace::BloomPrePassRendererSO_InputData>*> data) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightNum, data);
}
inline void GlobalNamespace::BloomPrePassLight::Refresh() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassLight::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassLight* GlobalNamespace::BloomPrePassLight::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BloomPrePassLight*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassLight::BloomPrePassLight() {}
