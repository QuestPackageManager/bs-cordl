#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\Layout\LayoutNative.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutNode_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutNative_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutNative_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType::LayoutNative_LayoutLogEventType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType::LayoutNative_LayoutLogEventType() {}
constexpr ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType::Error{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType::Measure{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType::Layout{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType::CacheUsage{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType::BeginLayout{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType::EndLayout{ static_cast<int32_t>(0x6) };
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData::*)()>(
    &::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d03df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::Layout::LayoutNode& UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData::__cordl_internal_get_node() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___node;
}
constexpr ::UnityEngine::UIElements::Layout::LayoutNode const& UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData::__cordl_internal_get_node() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___node;
}
constexpr void UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData::__cordl_internal_set_node(::UnityEngine::UIElements::Layout::LayoutNode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___node = value;
}
constexpr ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType& UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData::__cordl_internal_get_eventType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventType;
}
constexpr ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType const& UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData::__cordl_internal_get_eventType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventType;
}
constexpr void UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData::__cordl_internal_set_eventType(::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eventType = value;
}
constexpr ::StringW& UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData::__cordl_internal_get_message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___message;
}
constexpr ::StringW const& UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData::__cordl_internal_get_message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___message;
}
constexpr void UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData::__cordl_internal_set_message(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___message = value;
}
inline void UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData* UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData::LayoutNative_LayoutLogData() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutNative.CalculateLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t, float_t, int32_t, ::System::IntPtr, ::System::IntPtr)>(
    &::UnityEngine::UIElements::Layout::LayoutNative::CalculateLayout)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6d03ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutNative*>(),
                                                                                           { "CalculateLayout",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutNative.LayoutLog_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType, ::StringW)>(
    &::UnityEngine::UIElements::Layout::LayoutNative::LayoutLog_Internal)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6d03d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutNative*>(),
            { "LayoutLog_Internal", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Layout::LayoutNative::setStaticF_onLayoutLog(::System::Action_1<::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData*>*, "onLayoutLog", ::UnityEngine::UIElements::Layout::LayoutNative*>(
      std::forward<::System::Action_1<::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData*>*>(value));
}
inline ::System::Action_1<::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData*>* UnityEngine::UIElements::Layout::LayoutNative::getStaticF_onLayoutLog() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData*>*, "onLayoutLog", ::UnityEngine::UIElements::Layout::LayoutNative*>();
}
inline void UnityEngine::UIElements::Layout::LayoutNative::CalculateLayout(::System::IntPtr node, float_t parentWidth, float_t parentHeight, int32_t parentDirection, ::System::IntPtr state,
                                                                           ::System::IntPtr exceptionGCHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutNative*>(),
                                                                                         { "CalculateLayout",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, node, parentWidth, parentHeight, parentDirection, state, exceptionGCHandle);
}
inline void UnityEngine::UIElements::Layout::LayoutNative::LayoutLog_Internal(::System::IntPtr nodePtr, ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType type, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutNative*>(),
          { "LayoutLog_Internal", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nodePtr, type, message);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutNative::LayoutNative() {}
