#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/MockedEntitlements.hpp"
#include "OculusStudios/Platform/Core/zzzz__Vendor_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/Platform/Core/zzzz__MockedEntitlements_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatformEntitlements_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatformLogger_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IProductDefinition_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__MockedEntitlements_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__PlatformInitParams_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__Product_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedEntitlements___c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Core::MockedEntitlements___c__DisplayClass5_0::*)()>(
    &::OculusStudios::Platform::Core::MockedEntitlements___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d19fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedEntitlements___c__DisplayClass5_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedEntitlements___c__DisplayClass5_0._GetAllProductsAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OculusStudios::Platform::Core::MockedEntitlements___c__DisplayClass5_0::*)(
    ::OculusStudios::Platform::Core::Product*)>(&::OculusStudios::Platform::Core::MockedEntitlements___c__DisplayClass5_0::_GetAllProductsAsync_b__0)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5d19fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedEntitlements___c__DisplayClass5_0*>::get(), "<GetAllProductsAsync>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::Product*>::get() })));
    return ___internal_method;
  }
};
constexpr ::OculusStudios::Platform::Core::IProductDefinition*& OculusStudios::Platform::Core::MockedEntitlements___c__DisplayClass5_0::__cordl_internal_get_child() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___child;
}
constexpr ::OculusStudios::Platform::Core::IProductDefinition* const& OculusStudios::Platform::Core::MockedEntitlements___c__DisplayClass5_0::__cordl_internal_get_child() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___child;
}
constexpr void OculusStudios::Platform::Core::MockedEntitlements___c__DisplayClass5_0::__cordl_internal_set_child(::OculusStudios::Platform::Core::IProductDefinition* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___child)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void OculusStudios::Platform::Core::MockedEntitlements___c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedEntitlements___c__DisplayClass5_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool OculusStudios::Platform::Core::MockedEntitlements___c__DisplayClass5_0::_GetAllProductsAsync_b__0(::OculusStudios::Platform::Core::Product* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedEntitlements___c__DisplayClass5_0*>::get(), "<GetAllProductsAsync>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::Product*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::OculusStudios::Platform::Core::MockedEntitlements___c__DisplayClass5_0* OculusStudios::Platform::Core::MockedEntitlements___c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::Platform::Core::MockedEntitlements___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Core::MockedEntitlements___c__DisplayClass5_0::MockedEntitlements___c__DisplayClass5_0() {}
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedEntitlements__GetAllProductsAsync_d__5.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Core::MockedEntitlements__GetAllProductsAsync_d__5::*)()>(
    &::OculusStudios::Platform::Core::MockedEntitlements__GetAllProductsAsync_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x1044;
  constexpr static std::size_t addrs = 0x5d1a094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedEntitlements__GetAllProductsAsync_d__5>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedEntitlements__GetAllProductsAsync_d__5.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Core::MockedEntitlements__GetAllProductsAsync_d__5::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::OculusStudios::Platform::Core::MockedEntitlements__GetAllProductsAsync_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d1b0d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedEntitlements__GetAllProductsAsync_d__5>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void OculusStudios::Platform::Core::MockedEntitlements__GetAllProductsAsync_d__5::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedEntitlements__GetAllProductsAsync_d__5>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::Platform::Core::MockedEntitlements__GetAllProductsAsync_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedEntitlements__GetAllProductsAsync_d__5>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OculusStudios::Platform::Core::MockedEntitlements__GetAllProductsAsync_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::Platform::Core::MockedEntitlements__GetAllProductsAsync_d__5::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::Product*>*>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__4__this", ty: "::OculusStudios::Platform::Core::MockedEntitlements*", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::Platform::Core::MockedEntitlements__GetAllProductsAsync_d__5::MockedEntitlements__GetAllProductsAsync_d__5(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::Product*>*> __t__builder,
    ::OculusStudios::Platform::Core::MockedEntitlements* __4__this) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Core::MockedEntitlements__GetAllProductsAsync_d__5::MockedEntitlements__GetAllProductsAsync_d__5() {}
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedEntitlements._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Core::MockedEntitlements::*)(::OculusStudios::Platform::Core::PlatformInitParams*)>(
    &::OculusStudios::Platform::Core::MockedEntitlements::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d19db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedEntitlements*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::PlatformInitParams*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedEntitlements.GetAllProductsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::Product*>*>* (::OculusStudios::Platform::Core::MockedEntitlements::*)()>(
    &::OculusStudios::Platform::Core::MockedEntitlements::GetAllProductsAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5d19e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedEntitlements*>::get(),
                                                                               "GetAllProductsAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedEntitlements.RegisterNewProducts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Core::MockedEntitlements::*)(
    ::System::Collections::Generic::IEnumerable_1<::OculusStudios::Platform::Core::IProductDefinition*>*)>(&::OculusStudios::Platform::Core::MockedEntitlements::RegisterNewProducts)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5d19f4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedEntitlements*>::get(), "RegisterNewProducts", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::OculusStudios::Platform::Core::IProductDefinition*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::OculusStudios::Platform::Core::IPlatformLogger*& OculusStudios::Platform::Core::MockedEntitlements::__cordl_internal_get_logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logger;
}
constexpr ::OculusStudios::Platform::Core::IPlatformLogger* const& OculusStudios::Platform::Core::MockedEntitlements::__cordl_internal_get_logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logger;
}
constexpr void OculusStudios::Platform::Core::MockedEntitlements::__cordl_internal_set_logger(::OculusStudios::Platform::Core::IPlatformLogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___logger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::IProductDefinition*>*& OculusStudios::Platform::Core::MockedEntitlements::__cordl_internal_get_productDefinitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___productDefinitions;
}
constexpr ::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::IProductDefinition*>* const&
OculusStudios::Platform::Core::MockedEntitlements::__cordl_internal_get_productDefinitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___productDefinitions;
}
constexpr void
OculusStudios::Platform::Core::MockedEntitlements::__cordl_internal_set_productDefinitions(::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::IProductDefinition*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___productDefinitions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::Product*>*& OculusStudios::Platform::Core::MockedEntitlements::__cordl_internal_get_productInstances() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___productInstances;
}
constexpr ::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::Product*>* const& OculusStudios::Platform::Core::MockedEntitlements::__cordl_internal_get_productInstances() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___productInstances;
}
constexpr void OculusStudios::Platform::Core::MockedEntitlements::__cordl_internal_set_productInstances(::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::Product*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___productInstances)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void OculusStudios::Platform::Core::MockedEntitlements::_ctor(::OculusStudios::Platform::Core::PlatformInitParams* initParams) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedEntitlements*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::PlatformInitParams*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initParams);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::Product*>*>*
OculusStudios::Platform::Core::MockedEntitlements::GetAllProductsAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedEntitlements*>::get(),
                                                                             "GetAllProductsAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::Product*>*>*, false>(
      this, ___internal_method);
}
inline void
OculusStudios::Platform::Core::MockedEntitlements::RegisterNewProducts(::System::Collections::Generic::IEnumerable_1<::OculusStudios::Platform::Core::IProductDefinition*>* productDefinitions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedEntitlements*>::get(), "RegisterNewProducts", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::OculusStudios::Platform::Core::IProductDefinition*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, productDefinitions);
}
inline ::OculusStudios::Platform::Core::MockedEntitlements* OculusStudios::Platform::Core::MockedEntitlements::New_ctor(::OculusStudios::Platform::Core::PlatformInitParams* initParams) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::Platform::Core::MockedEntitlements*>(initParams));
}
/// @brief Convert operator to "::OculusStudios::Platform::Core::IPlatformEntitlements"
constexpr OculusStudios::Platform::Core::MockedEntitlements::operator ::OculusStudios::Platform::Core::IPlatformEntitlements*() noexcept {
  return static_cast<::OculusStudios::Platform::Core::IPlatformEntitlements*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::Platform::Core::IPlatformEntitlements"
constexpr ::OculusStudios::Platform::Core::IPlatformEntitlements* OculusStudios::Platform::Core::MockedEntitlements::i___OculusStudios__Platform__Core__IPlatformEntitlements() noexcept {
  return static_cast<::OculusStudios::Platform::Core::IPlatformEntitlements*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Core::MockedEntitlements::MockedEntitlements() {}
constexpr ::OculusStudios::Platform::Core::Vendor OculusStudios::Platform::Core::MockedEntitlements::VENDOR{ static_cast<uint8_t>(0x2u) };
