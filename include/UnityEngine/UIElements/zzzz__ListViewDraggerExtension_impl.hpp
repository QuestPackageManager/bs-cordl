#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\ListViewDraggerExtension.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewDraggerExtension_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_def.hpp"
#include "UnityEngine/UIElements/zzzz__ReusableCollectionItem_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDraggerExtension.GetRecycledItemFromId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ReusableCollectionItem* (*)(::UnityEngine::UIElements::BaseVerticalCollectionView*, int32_t)>(
    &::UnityEngine::UIElements::ListViewDraggerExtension::GetRecycledItemFromId)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x6d8fb28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDraggerExtension*>(),
                                                { "GetRecycledItemFromId", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVerticalCollectionView*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewDraggerExtension.GetRecycledItemFromIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ReusableCollectionItem* (*)(::UnityEngine::UIElements::BaseVerticalCollectionView*, int32_t)>(
    &::UnityEngine::UIElements::ListViewDraggerExtension::GetRecycledItemFromIndex)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x6d8fe24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDraggerExtension*>(),
                                                { "GetRecycledItemFromIndex", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVerticalCollectionView*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::ReusableCollectionItem* UnityEngine::UIElements::ListViewDraggerExtension::GetRecycledItemFromId(::UnityEngine::UIElements::BaseVerticalCollectionView* listView,
                                                                                                                                   int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDraggerExtension*>(),
                                                           { "GetRecycledItemFromId", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVerticalCollectionView*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ReusableCollectionItem*>(nullptr, ___internal_method, listView, id);
}
inline ::UnityEngine::UIElements::ReusableCollectionItem* UnityEngine::UIElements::ListViewDraggerExtension::GetRecycledItemFromIndex(::UnityEngine::UIElements::BaseVerticalCollectionView* listView,
                                                                                                                                      int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ListViewDraggerExtension*>(),
                                              { "GetRecycledItemFromIndex", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVerticalCollectionView*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ReusableCollectionItem*>(nullptr, ___internal_method, listView, index);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ListViewDraggerExtension::ListViewDraggerExtension() {}
