#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\WorldSpaceDataStore.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__WorldSpaceDataStore_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__WorldSpaceData_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::WorldSpaceDataStore.SetWorldSpaceData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::WorldSpaceData)>(
    &::UnityEngine::UIElements::WorldSpaceDataStore::SetWorldSpaceData)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6cd17a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldSpaceDataStore*>(),
                                         { "SetWorldSpaceData", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::WorldSpaceData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WorldSpaceDataStore.GetWorldSpaceData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::WorldSpaceData (*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::WorldSpaceDataStore::GetWorldSpaceData)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6cd186c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldSpaceDataStore*>(),
                                                                                           { "GetWorldSpaceData", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::WorldSpaceDataStore::setStaticF_m_WorldSpaceData(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::UIElements::WorldSpaceData>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::UIElements::WorldSpaceData>*, "m_WorldSpaceData",
                                    ::UnityEngine::UIElements::WorldSpaceDataStore*>(
      std::forward<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::UIElements::WorldSpaceData>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::UIElements::WorldSpaceData>* UnityEngine::UIElements::WorldSpaceDataStore::getStaticF_m_WorldSpaceData() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::UIElements::WorldSpaceData>*, "m_WorldSpaceData",
                                           ::UnityEngine::UIElements::WorldSpaceDataStore*>();
}
inline void UnityEngine::UIElements::WorldSpaceDataStore::SetWorldSpaceData(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::WorldSpaceData data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldSpaceDataStore*>(),
                                       { "SetWorldSpaceData", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::WorldSpaceData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ve, data);
}
inline ::UnityEngine::UIElements::WorldSpaceData UnityEngine::UIElements::WorldSpaceDataStore::GetWorldSpaceData(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldSpaceDataStore*>(),
                                                                                         { "GetWorldSpaceData", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::WorldSpaceData>(nullptr, ___internal_method, ve);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::WorldSpaceDataStore::WorldSpaceDataStore() {}
