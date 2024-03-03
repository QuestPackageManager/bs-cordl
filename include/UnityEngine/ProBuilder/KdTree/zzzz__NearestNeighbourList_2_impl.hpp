#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__NearestNeighbourList_2_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__INearestNeighbourList_2_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__ITypeMath_1_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__PriorityQueue_2_def.hpp"
/// @brief Convert operator to "::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem,TDistance>"
template <typename TItem, typename TDistance>
constexpr UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>::operator ::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem, TDistance>*() noexcept {
  return static_cast<::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem, TDistance>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem,TDistance>"
template <typename TItem, typename TDistance>
constexpr ::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem, TDistance>*
UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>::i___UnityEngine__ProBuilder__KdTree__INearestNeighbourList_2_TItem_TDistance_() noexcept {
  return static_cast<::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem, TDistance>*>(static_cast<void*>(this));
}
template <typename TItem, typename TDistance>
constexpr ::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TDistance>*& UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>::__cordl_internal_get_queue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___queue;
}
template <typename TItem, typename TDistance>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TDistance>*> const&
UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>::__cordl_internal_get_queue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___queue;
}
template <typename TItem, typename TDistance>
constexpr void UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>::__cordl_internal_set_queue(::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TDistance>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___queue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TItem, typename TDistance>
constexpr ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance>*& UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>::__cordl_internal_get_distanceMath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distanceMath;
}
template <typename TItem, typename TDistance>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance>*> const&
UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>::__cordl_internal_get_distanceMath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distanceMath;
}
template <typename TItem, typename TDistance>
constexpr void UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>::__cordl_internal_set_distanceMath(::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___distanceMath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TItem, typename TDistance> constexpr int32_t& UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>::__cordl_internal_get_maxCapacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCapacity;
}
template <typename TItem, typename TDistance> constexpr int32_t const& UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>::__cordl_internal_get_maxCapacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCapacity;
}
template <typename TItem, typename TDistance> constexpr void UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>::__cordl_internal_set_maxCapacity(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxCapacity = value;
}
template <typename TItem, typename TDistance>
inline ::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>*
UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>::New_ctor(int32_t maxCapacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance>* distanceMath) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>*>(maxCapacity, distanceMath));
}
template <typename TItem, typename TDistance>
inline void UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>::_ctor(int32_t maxCapacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance>* distanceMath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxCapacity, distanceMath);
}
template <typename TItem, typename TDistance> inline int32_t UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>::get_MaxCapacity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>*>::get(),
                                               "get_MaxCapacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TItem, typename TDistance> inline int32_t UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>*>::get(), "get_Count",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TItem, typename TDistance> inline bool UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>::Add(TItem item, TDistance distance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TDistance>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item, distance);
}
template <typename TItem, typename TDistance> inline TItem UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>::GetFurtherest() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>*>::get(),
                                               "GetFurtherest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TItem, false>(this, ___internal_method);
}
template <typename TItem, typename TDistance> inline TDistance UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>::GetFurtherestDistance() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>*>::get(),
                                               "GetFurtherestDistance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TDistance, false>(this, ___internal_method);
}
template <typename TItem, typename TDistance> inline TItem UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>::RemoveFurtherest() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>*>::get(),
                                               "RemoveFurtherest", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TItem, false>(this, ___internal_method);
}
template <typename TItem, typename TDistance> inline bool UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>::get_IsCapacityReached() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>*>::get(),
                                               "get_IsCapacityReached", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TItem, typename TDistance> constexpr ::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<TItem, TDistance>::NearestNeighbourList_2() {}
