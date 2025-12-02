#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutNative.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData::*)()>(
    &::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6acf6b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___message)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData* UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData::LayoutNative_LayoutLogData() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutNative.CalculateLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, float_t, float_t, int32_t, ::System::IntPtr, ::System::IntPtr)>(
    &::UnityEngine::UIElements::Layout::LayoutNative::CalculateLayout)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6acf588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutNative*>::get(), "CalculateLayout", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutNative.LayoutLog_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType, ::StringW)>(
    &::UnityEngine::UIElements::Layout::LayoutNative::LayoutLog_Internal)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6acf5fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutNative*>::get(), "LayoutLog_Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Layout::LayoutNative::setStaticF_onLayoutLog(::System::Action_1<::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData*>*, "onLayoutLog",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutNative*>::get>(
      std::forward<::System::Action_1<::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData*>*>(value));
}
inline ::System::Action_1<::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData*>* UnityEngine::UIElements::Layout::LayoutNative::getStaticF_onLayoutLog() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogData*>*, "onLayoutLog",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutNative*>::get>();
}
inline void UnityEngine::UIElements::Layout::LayoutNative::CalculateLayout(::System::IntPtr node, float_t parentWidth, float_t parentHeight, int32_t parentDirection, ::System::IntPtr state,
                                                                           ::System::IntPtr exceptionGCHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutNative*>::get(), "CalculateLayout", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, node, parentWidth, parentHeight, parentDirection, state, exceptionGCHandle);
}
inline void UnityEngine::UIElements::Layout::LayoutNative::LayoutLog_Internal(::System::IntPtr nodePtr, ::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType type, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutNative*>::get(), "LayoutLog_Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutNative_LayoutLogEventType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nodePtr, type, message);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutNative::LayoutNative() {}
