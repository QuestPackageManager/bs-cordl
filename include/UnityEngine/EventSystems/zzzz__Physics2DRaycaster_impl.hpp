#pragma once
#include "UnityEngine/EventSystems/zzzz__PhysicsRaycaster_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__Physics2DRaycaster_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__RaycastHit2D_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
//  Writing Method size for method: ::UnityEngine::EventSystems::Physics2DRaycaster._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::Physics2DRaycaster::*)()>(
    &::UnityEngine::EventSystems::Physics2DRaycaster::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2da0428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::Physics2DRaycaster*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::Physics2DRaycaster.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::Physics2DRaycaster::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&::UnityEngine::EventSystems::Physics2DRaycaster::Raycast)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x2da0478;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::Physics2DRaycaster*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::Physics2DRaycaster*>::get(), 17));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*>& UnityEngine::EventSystems::Physics2DRaycaster::__get_m_Hits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Hits;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> const& UnityEngine::EventSystems::Physics2DRaycaster::__get_m_Hits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Hits;
}
constexpr void UnityEngine::EventSystems::Physics2DRaycaster::__set_m_Hits(::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Hits)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::EventSystems::Physics2DRaycaster* UnityEngine::EventSystems::Physics2DRaycaster::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::EventSystems::Physics2DRaycaster*>());
}
inline void UnityEngine::EventSystems::Physics2DRaycaster::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::Physics2DRaycaster*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::Physics2DRaycaster::Raycast(::UnityEngine::EventSystems::PointerEventData* eventData,
                                                                   ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::Physics2DRaycaster*>::get(), "Raycast", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData, resultAppendList);
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::Physics2DRaycaster::Physics2DRaycaster() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
