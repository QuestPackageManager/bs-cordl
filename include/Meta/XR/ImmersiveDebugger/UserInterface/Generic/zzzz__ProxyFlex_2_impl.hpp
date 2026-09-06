#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/ProxyFlex_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ProxyFlex_2_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Flex_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__LayoutStyle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ProxyController_1_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ScrollView_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template <typename ControllerType, typename ProxyControllerType>
constexpr int32_t& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::__cordl_internal_get__maximumNumberOfProxies() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maximumNumberOfProxies;
}
template <typename ControllerType, typename ProxyControllerType>
constexpr int32_t const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::__cordl_internal_get__maximumNumberOfProxies() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maximumNumberOfProxies;
}
template <typename ControllerType, typename ProxyControllerType>
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::__cordl_internal_set__maximumNumberOfProxies(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maximumNumberOfProxies = value;
}
template <typename ControllerType, typename ProxyControllerType>
constexpr ::System::Collections::Generic::Dictionary_2<ControllerType, ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>*>*&
Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::__cordl_internal_get__targetsDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetsDictionary;
}
template <typename ControllerType, typename ProxyControllerType>
constexpr ::System::Collections::Generic::Dictionary_2<ControllerType, ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>*>* const&
Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::__cordl_internal_get__targetsDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetsDictionary;
}
template <typename ControllerType, typename ProxyControllerType>
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::__cordl_internal_set__targetsDictionary(
    ::System::Collections::Generic::Dictionary_2<ControllerType, ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyController_1<ControllerType>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetsDictionary = value;
}
template <typename ControllerType, typename ProxyControllerType>
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView>&
Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::__cordl_internal_get__scrollView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollView;
}
template <typename ControllerType, typename ProxyControllerType>
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> const&
Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::__cordl_internal_get__scrollView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollView;
}
template <typename ControllerType, typename ProxyControllerType>
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::__cordl_internal_set__scrollView(
    ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scrollView = value;
}
template <typename ControllerType, typename ProxyControllerType>
constexpr ::System::Collections::Generic::List_1<ProxyControllerType>*&
Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::__cordl_internal_get__proxyChildren() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____proxyChildren;
}
template <typename ControllerType, typename ProxyControllerType>
constexpr ::System::Collections::Generic::List_1<ProxyControllerType>* const&
Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::__cordl_internal_get__proxyChildren() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____proxyChildren;
}
template <typename ControllerType, typename ProxyControllerType>
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::__cordl_internal_set__proxyChildren(
    ::System::Collections::Generic::List_1<ProxyControllerType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____proxyChildren = value;
}
template <typename ControllerType, typename ProxyControllerType>
constexpr bool& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::__cordl_internal_get__Dirty_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Dirty_k__BackingField;
}
template <typename ControllerType, typename ProxyControllerType>
constexpr bool const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::__cordl_internal_get__Dirty_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Dirty_k__BackingField;
}
template <typename ControllerType, typename ProxyControllerType>
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::__cordl_internal_set__Dirty_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Dirty_k__BackingField = value;
}
template <typename ControllerType, typename ProxyControllerType>
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>&
Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::__cordl_internal_get__before() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____before;
}
template <typename ControllerType, typename ProxyControllerType>
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller> const&
Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::__cordl_internal_get__before() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____before;
}
template <typename ControllerType, typename ProxyControllerType>
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::__cordl_internal_set__before(
    ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____before = value;
}
template <typename ControllerType, typename ProxyControllerType>
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>&
Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::__cordl_internal_get__after() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____after;
}
template <typename ControllerType, typename ProxyControllerType>
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller> const&
Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::__cordl_internal_get__after() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____after;
}
template <typename ControllerType, typename ProxyControllerType>
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::__cordl_internal_set__after(
    ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____after = value;
}
template <typename ControllerType, typename ProxyControllerType>
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle>&
Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::__cordl_internal_get__childrenLayoutStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childrenLayoutStyle;
}
template <typename ControllerType, typename ProxyControllerType>
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle> const&
Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::__cordl_internal_get__childrenLayoutStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childrenLayoutStyle;
}
template <typename ControllerType, typename ProxyControllerType>
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::__cordl_internal_set__childrenLayoutStyle(
    ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____childrenLayoutStyle = value;
}
template <typename ControllerType, typename ProxyControllerType>
constexpr float_t& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::__cordl_internal_get__lastScroll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastScroll;
}
template <typename ControllerType, typename ProxyControllerType>
constexpr float_t const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::__cordl_internal_get__lastScroll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastScroll;
}
template <typename ControllerType, typename ProxyControllerType>
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::__cordl_internal_set__lastScroll(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastScroll = value;
}
template <typename ControllerType, typename ProxyControllerType> inline bool Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::get_Dirty() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>*>(), { "get_Dirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename ControllerType, typename ProxyControllerType>
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::set_Dirty(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>*>(),
                                                           { "set_Dirty", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename ControllerType, typename ProxyControllerType>
inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::get_Flex() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>*>(), { "get_Flex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>>(this, ___internal_method);
}
template <typename ControllerType, typename ProxyControllerType>
inline int32_t Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::get_NumberOfProxies() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>*>(), { "get_NumberOfProxies", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename ControllerType, typename ProxyControllerType>
inline int32_t Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::get_NumberOfControllers() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>*>(), { "get_NumberOfControllers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename ControllerType, typename ProxyControllerType>
inline void
Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::_ctor(int32_t numberOfInstantiatedControllers, int32_t maximumNumberOfProxies,
                                                                                                             ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle* layoutStyle,
                                                                                                             ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView* scrollView) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle*>(),
                                                  ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numberOfInstantiatedControllers, maximumNumberOfProxies, layoutStyle, scrollView);
}
template <typename ControllerType, typename ProxyControllerType>
inline ProxyControllerType Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::AppendProxy() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>*>(), { "AppendProxy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<ProxyControllerType>(this, ___internal_method);
}
template <typename ControllerType, typename ProxyControllerType>
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::RemoveProxy(ProxyControllerType proxy) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>*>(),
                                                           { "RemoveProxy", {}, { ::i2c::type_of<ProxyControllerType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, proxy);
}
template <typename ControllerType, typename ProxyControllerType> inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename ControllerType, typename ProxyControllerType> inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::Update() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename ControllerType, typename ProxyControllerType>
inline bool Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::HasScrolledEnough() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>*>(), { "HasScrolledEnough", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename ControllerType, typename ProxyControllerType> inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::Fill() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>*>(), { "Fill", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename ControllerType, typename ProxyControllerType>
inline float_t Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::ComputeTotalHeight() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>*>(), { "ComputeTotalHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template <typename ControllerType, typename ProxyControllerType>
inline float_t Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::ComputeTotalUsefulHeight() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>*>(), { "ComputeTotalUsefulHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template <typename ControllerType, typename ProxyControllerType>
inline float_t Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::ComputeStartHeightFromProgress(float_t progress) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>*>(),
                                                           { "ComputeStartHeightFromProgress", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, progress);
}
template <typename ControllerType, typename ProxyControllerType>
inline int32_t Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::GetItemIndexAtHeight(float_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>*>(),
                                                           { "GetItemIndexAtHeight", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, height);
}
template <typename ControllerType, typename ProxyControllerType>
inline float_t Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::ComputeHeight(int32_t startIndex, int32_t endIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>*>(),
                                                           { "ComputeHeight", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, startIndex, endIndex);
}
template <typename ControllerType, typename ProxyControllerType>
inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>*
Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::New_ctor(int32_t numberOfInstantiatedControllers, int32_t maximumNumberOfProxies,
                                                                                                                ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle* layoutStyle,
                                                                                                                ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView* scrollView) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>*>(
                                              numberOfInstantiatedControllers, maximumNumberOfProxies, layoutStyle, scrollView));
}
// Ctor Parameters []
template <typename ControllerType, typename ProxyControllerType> constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ProxyFlex_2<ControllerType, ProxyControllerType>::ProxyFlex_2() {}
