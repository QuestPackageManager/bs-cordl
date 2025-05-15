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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::Events::UnityAction*)>(&::UnityEngine::BeforeRenderHelper::GetUpdateOrder)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x4874524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BeforeRenderHelper*>::get(), "GetUpdateOrder", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::BeforeRenderHelper.RegisterCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Events::UnityAction*)>(&::UnityEngine::BeforeRenderHelper::RegisterCallback)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x4863b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BeforeRenderHelper*>::get(), "RegisterCallback", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::BeforeRenderHelper.UnregisterCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Events::UnityAction*)>(&::UnityEngine::BeforeRenderHelper::UnregisterCallback)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x4863eec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BeforeRenderHelper*>::get(), "UnregisterCallback", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::BeforeRenderHelper.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::BeforeRenderHelper::Invoke)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x4864aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BeforeRenderHelper*>::get(), "Invoke",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::BeforeRenderHelper::setStaticF_s_OrderBlocks(::System::Collections::Generic::List_1<::UnityEngine::BeforeRenderHelper_OrderBlock>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::BeforeRenderHelper_OrderBlock>*, "s_OrderBlocks",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BeforeRenderHelper*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::BeforeRenderHelper_OrderBlock>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::BeforeRenderHelper_OrderBlock>* UnityEngine::BeforeRenderHelper::getStaticF_s_OrderBlocks() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::BeforeRenderHelper_OrderBlock>*, "s_OrderBlocks",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BeforeRenderHelper*>::get>();
}
inline int32_t UnityEngine::BeforeRenderHelper::GetUpdateOrder(::UnityEngine::Events::UnityAction* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BeforeRenderHelper*>::get(), "GetUpdateOrder", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, callback);
}
inline void UnityEngine::BeforeRenderHelper::RegisterCallback(::UnityEngine::Events::UnityAction* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BeforeRenderHelper*>::get(), "RegisterCallback", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
inline void UnityEngine::BeforeRenderHelper::UnregisterCallback(::UnityEngine::Events::UnityAction* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BeforeRenderHelper*>::get(), "UnregisterCallback", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
inline void UnityEngine::BeforeRenderHelper::Invoke() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BeforeRenderHelper*>::get(), "Invoke",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::BeforeRenderHelper::BeforeRenderHelper() {}
