#pragma once
// IWYU pragma private; include "UnityEngine/BeforeRenderHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__BeforeRenderHelper_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
#include "UnityEngine/zzzz__BeforeRenderHelper_def.hpp"
// Ctor Parameters [CppParam { name: "order", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "callback", ty: "::UnityEngine::Events::UnityAction*", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::BeforeRenderHelper_OrderBlock::BeforeRenderHelper_OrderBlock(int32_t order, ::UnityEngine::Events::UnityAction* callback) noexcept {
  this->order = order;
  this->callback = callback;
}
// Ctor Parameters []
constexpr ::UnityEngine::BeforeRenderHelper_OrderBlock::BeforeRenderHelper_OrderBlock() {}
//  Writing Method size for method: ::UnityEngine::BeforeRenderHelper.GetUpdateOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Events::UnityAction*)>(&::UnityEngine::BeforeRenderHelper::GetUpdateOrder)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6a7e048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BeforeRenderHelper*>(), { "GetUpdateOrder", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::BeforeRenderHelper.RegisterCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Events::UnityAction*)>(&::UnityEngine::BeforeRenderHelper::RegisterCallback)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x6a7e15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BeforeRenderHelper*>(), { "RegisterCallback", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::BeforeRenderHelper.UnregisterCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Events::UnityAction*)>(&::UnityEngine::BeforeRenderHelper::UnregisterCallback)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x6a7e4a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BeforeRenderHelper*>(), { "UnregisterCallback", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::BeforeRenderHelper.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::BeforeRenderHelper::Invoke)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6a7e7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BeforeRenderHelper*>(), { "Invoke", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::BeforeRenderHelper::setStaticF_s_OrderBlocks(::System::Collections::Generic::List_1<::UnityEngine::BeforeRenderHelper_OrderBlock>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::BeforeRenderHelper_OrderBlock>*, "s_OrderBlocks", ::UnityEngine::BeforeRenderHelper*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::BeforeRenderHelper_OrderBlock>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::BeforeRenderHelper_OrderBlock>* UnityEngine::BeforeRenderHelper::getStaticF_s_OrderBlocks() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::BeforeRenderHelper_OrderBlock>*, "s_OrderBlocks", ::UnityEngine::BeforeRenderHelper*>();
}
inline int32_t UnityEngine::BeforeRenderHelper::GetUpdateOrder(::UnityEngine::Events::UnityAction* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BeforeRenderHelper*>(), { "GetUpdateOrder", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, callback);
}
inline void UnityEngine::BeforeRenderHelper::RegisterCallback(::UnityEngine::Events::UnityAction* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BeforeRenderHelper*>(), { "RegisterCallback", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void UnityEngine::BeforeRenderHelper::UnregisterCallback(::UnityEngine::Events::UnityAction* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BeforeRenderHelper*>(), { "UnregisterCallback", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void UnityEngine::BeforeRenderHelper::Invoke() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::BeforeRenderHelper*>(), { "Invoke", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::BeforeRenderHelper::BeforeRenderHelper() {}
