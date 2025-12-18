#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Oculus/Entitlements.hpp"
#include "OculusStudios/Platform/Core/zzzz__Vendor_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/Platform/Oculus/zzzz__Entitlements_def.hpp"
#include "Oculus/Platform/Models/zzzz__PurchaseList_def.hpp"
#include "Oculus/Platform/Models/zzzz__Purchase_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatformEntitlements_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatformLogger_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IProductDefinition_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__PlatformInitParams_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__Product_def.hpp"
#include "OculusStudios/Platform/Oculus/zzzz__Entitlements_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::Entitlements___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Oculus::Entitlements___c::*)()>(
    &::OculusStudios::Platform::Oculus::Entitlements___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d82b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::Entitlements___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::Entitlements___c._GetAllProductsAsync_b__5_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OculusStudios::Platform::Oculus::Entitlements___c::*)(::Oculus::Platform::Models::Purchase*)>(
    &::OculusStudios::Platform::Oculus::Entitlements___c::_GetAllProductsAsync_b__5_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d82b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::Entitlements___c*>::get(), "<GetAllProductsAsync>b__5_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::Purchase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::Entitlements___c._GetAllProductsAsync_b__5_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OculusStudios::Platform::Oculus::Entitlements___c::*)(::OculusStudios::Platform::Core::Product*)>(
    &::OculusStudios::Platform::Oculus::Entitlements___c::_GetAllProductsAsync_b__5_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d82b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::Entitlements___c*>::get(), "<GetAllProductsAsync>b__5_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::Product*>::get() })));
    return ___internal_method;
  }
};
inline void OculusStudios::Platform::Oculus::Entitlements___c::setStaticF___9(::OculusStudios::Platform::Oculus::Entitlements___c* value) {
  ::cordl_internals::setStaticField<::OculusStudios::Platform::Oculus::Entitlements___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::Entitlements___c*>::get>(
      std::forward<::OculusStudios::Platform::Oculus::Entitlements___c*>(value));
}
inline ::OculusStudios::Platform::Oculus::Entitlements___c* OculusStudios::Platform::Oculus::Entitlements___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::OculusStudios::Platform::Oculus::Entitlements___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::Entitlements___c*>::get>();
}
inline void OculusStudios::Platform::Oculus::Entitlements___c::setStaticF___9__5_0(::System::Func_2<::Oculus::Platform::Models::Purchase*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Oculus::Platform::Models::Purchase*, ::StringW>*, "<>9__5_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::Entitlements___c*>::get>(
      std::forward<::System::Func_2<::Oculus::Platform::Models::Purchase*, ::StringW>*>(value));
}
inline ::System::Func_2<::Oculus::Platform::Models::Purchase*, ::StringW>* OculusStudios::Platform::Oculus::Entitlements___c::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Oculus::Platform::Models::Purchase*, ::StringW>*, "<>9__5_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::Entitlements___c*>::get>();
}
inline void OculusStudios::Platform::Oculus::Entitlements___c::setStaticF___9__5_1(::System::Func_2<::OculusStudios::Platform::Core::Product*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::OculusStudios::Platform::Core::Product*, ::StringW>*, "<>9__5_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::Entitlements___c*>::get>(
      std::forward<::System::Func_2<::OculusStudios::Platform::Core::Product*, ::StringW>*>(value));
}
inline ::System::Func_2<::OculusStudios::Platform::Core::Product*, ::StringW>* OculusStudios::Platform::Oculus::Entitlements___c::getStaticF___9__5_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::OculusStudios::Platform::Core::Product*, ::StringW>*, "<>9__5_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::Entitlements___c*>::get>();
}
inline void OculusStudios::Platform::Oculus::Entitlements___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::Entitlements___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW OculusStudios::Platform::Oculus::Entitlements___c::_GetAllProductsAsync_b__5_0(::Oculus::Platform::Models::Purchase* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::Entitlements___c*>::get(), "<GetAllProductsAsync>b__5_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Models::Purchase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
inline ::StringW OculusStudios::Platform::Oculus::Entitlements___c::_GetAllProductsAsync_b__5_1(::OculusStudios::Platform::Core::Product* product) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::Entitlements___c*>::get(), "<GetAllProductsAsync>b__5_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::Product*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, product);
}
inline ::OculusStudios::Platform::Oculus::Entitlements___c* OculusStudios::Platform::Oculus::Entitlements___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::Platform::Oculus::Entitlements___c*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Oculus::Entitlements___c::Entitlements___c() {}
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0::*)()>(
    &::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d82b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0._GetAllProductsAsync_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OculusStudios::Platform::Core::Product* (::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0::*)(::OculusStudios::Platform::Core::IProductDefinition*)>(
        &::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0::_GetAllProductsAsync_b__3)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5d82b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0*>::get(), "<GetAllProductsAsync>b__3",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::IProductDefinition*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::OculusStudios::Platform::Core::Product*>*&
OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0::__cordl_internal_get_productMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___productMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::OculusStudios::Platform::Core::Product*>* const&
OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0::__cordl_internal_get_productMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___productMap;
}
constexpr void OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0::__cordl_internal_set_productMap(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::OculusStudios::Platform::Core::Product*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___productMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_2<::OculusStudios::Platform::Core::IProductDefinition*, ::OculusStudios::Platform::Core::Product*>*&
OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0::__cordl_internal_get___9__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__3;
}
constexpr ::System::Func_2<::OculusStudios::Platform::Core::IProductDefinition*, ::OculusStudios::Platform::Core::Product*>* const&
OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0::__cordl_internal_get___9__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__3;
}
constexpr void OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0::__cordl_internal_set___9__3(
    ::System::Func_2<::OculusStudios::Platform::Core::IProductDefinition*, ::OculusStudios::Platform::Core::Product*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OculusStudios::Platform::Core::Product*
OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0::_GetAllProductsAsync_b__3(::OculusStudios::Platform::Core::IProductDefinition* definition) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0*>::get(), "<GetAllProductsAsync>b__3",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::IProductDefinition*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::Platform::Core::Product*, false>(this, ___internal_method, definition);
}
inline ::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0* OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0::Entitlements___c__DisplayClass5_0() {}
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_1::*)()>(
    &::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d82c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_1*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_1._GetAllProductsAsync_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_1::*)(::System::Collections::Generic::KeyValuePair_2<::StringW, ::Oculus::Platform::Models::Purchase*>)>(
        &::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_1::_GetAllProductsAsync_b__2)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d82c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_1*>::get(), "<GetAllProductsAsync>b__2",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Oculus::Platform::Models::Purchase*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_1::__cordl_internal_get_vendorProductId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vendorProductId;
}
constexpr ::StringW const& OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_1::__cordl_internal_get_vendorProductId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vendorProductId;
}
constexpr void OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_1::__cordl_internal_set_vendorProductId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___vendorProductId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_1*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool
OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_1::_GetAllProductsAsync_b__2(::System::Collections::Generic::KeyValuePair_2<::StringW, ::Oculus::Platform::Models::Purchase*> x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_1*>::get(), "<GetAllProductsAsync>b__2",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Oculus::Platform::Models::Purchase*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_1* OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_1*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_1::Entitlements___c__DisplayClass5_1() {}
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::Entitlements__GetAllProductsAsync_d__5.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Oculus::Entitlements__GetAllProductsAsync_d__5::*)()>(
    &::OculusStudios::Platform::Oculus::Entitlements__GetAllProductsAsync_d__5::MoveNext)> {
  constexpr static std::size_t size = 0xfd8;
  constexpr static std::size_t addrs = 0x5d82ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::Entitlements__GetAllProductsAsync_d__5>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::Entitlements__GetAllProductsAsync_d__5.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Oculus::Entitlements__GetAllProductsAsync_d__5::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::OculusStudios::Platform::Oculus::Entitlements__GetAllProductsAsync_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d83d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::Entitlements__GetAllProductsAsync_d__5>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void OculusStudios::Platform::Oculus::Entitlements__GetAllProductsAsync_d__5::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::Entitlements__GetAllProductsAsync_d__5>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::Platform::Oculus::Entitlements__GetAllProductsAsync_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::Entitlements__GetAllProductsAsync_d__5>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OculusStudios::Platform::Oculus::Entitlements__GetAllProductsAsync_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::Platform::Oculus::Entitlements__GetAllProductsAsync_d__5::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::Product*>*>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__4__this", ty: "::OculusStudios::Platform::Oculus::Entitlements*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty:
// "::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PurchaseList*>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::Platform::Oculus::Entitlements__GetAllProductsAsync_d__5::Entitlements__GetAllProductsAsync_d__5(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::Product*>*> __t__builder,
    ::OculusStudios::Platform::Oculus::Entitlements* __4__this, ::OculusStudios::Platform::Oculus::Entitlements___c__DisplayClass5_0* __8__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PurchaseList*>*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__8__1 = __8__1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Oculus::Entitlements__GetAllProductsAsync_d__5::Entitlements__GetAllProductsAsync_d__5() {}
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::Entitlements._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Oculus::Entitlements::*)(::OculusStudios::Platform::Core::PlatformInitParams*)>(
    &::OculusStudios::Platform::Oculus::Entitlements::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d828c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::Entitlements*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::PlatformInitParams*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::Entitlements.GetAllProductsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::Product*>*>* (::OculusStudios::Platform::Oculus::Entitlements::*)()>(
    &::OculusStudios::Platform::Oculus::Entitlements::GetAllProductsAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5d82980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::Entitlements*>::get(),
                                                                               "GetAllProductsAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::Entitlements.RegisterNewProducts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Oculus::Entitlements::*)(
    ::System::Collections::Generic::IEnumerable_1<::OculusStudios::Platform::Core::IProductDefinition*>*)>(&::OculusStudios::Platform::Oculus::Entitlements::RegisterNewProducts)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5d82a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::Entitlements*>::get(), "RegisterNewProducts", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::OculusStudios::Platform::Core::IProductDefinition*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::OculusStudios::Platform::Core::IPlatformLogger*& OculusStudios::Platform::Oculus::Entitlements::__cordl_internal_get_logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logger;
}
constexpr ::OculusStudios::Platform::Core::IPlatformLogger* const& OculusStudios::Platform::Oculus::Entitlements::__cordl_internal_get_logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logger;
}
constexpr void OculusStudios::Platform::Oculus::Entitlements::__cordl_internal_set_logger(::OculusStudios::Platform::Core::IPlatformLogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___logger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::IProductDefinition*>*& OculusStudios::Platform::Oculus::Entitlements::__cordl_internal_get_productDefinitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___productDefinitions;
}
constexpr ::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::IProductDefinition*>* const&
OculusStudios::Platform::Oculus::Entitlements::__cordl_internal_get_productDefinitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___productDefinitions;
}
constexpr void
OculusStudios::Platform::Oculus::Entitlements::__cordl_internal_set_productDefinitions(::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::IProductDefinition*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___productDefinitions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::Product*>*& OculusStudios::Platform::Oculus::Entitlements::__cordl_internal_get_productInstances() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___productInstances;
}
constexpr ::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::Product*>* const& OculusStudios::Platform::Oculus::Entitlements::__cordl_internal_get_productInstances() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___productInstances;
}
constexpr void OculusStudios::Platform::Oculus::Entitlements::__cordl_internal_set_productInstances(::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::Product*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___productInstances)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void OculusStudios::Platform::Oculus::Entitlements::_ctor(::OculusStudios::Platform::Core::PlatformInitParams* initParams) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::Entitlements*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::PlatformInitParams*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initParams);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::Product*>*>*
OculusStudios::Platform::Oculus::Entitlements::GetAllProductsAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::Entitlements*>::get(),
                                                                             "GetAllProductsAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::Product*>*>*, false>(
      this, ___internal_method);
}
inline void
OculusStudios::Platform::Oculus::Entitlements::RegisterNewProducts(::System::Collections::Generic::IEnumerable_1<::OculusStudios::Platform::Core::IProductDefinition*>* productDefinitions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::Entitlements*>::get(), "RegisterNewProducts", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::OculusStudios::Platform::Core::IProductDefinition*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, productDefinitions);
}
inline ::OculusStudios::Platform::Oculus::Entitlements* OculusStudios::Platform::Oculus::Entitlements::New_ctor(::OculusStudios::Platform::Core::PlatformInitParams* initParams) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::Platform::Oculus::Entitlements*>(initParams));
}
/// @brief Convert operator to "::OculusStudios::Platform::Core::IPlatformEntitlements"
constexpr OculusStudios::Platform::Oculus::Entitlements::operator ::OculusStudios::Platform::Core::IPlatformEntitlements*() noexcept {
  return static_cast<::OculusStudios::Platform::Core::IPlatformEntitlements*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::Platform::Core::IPlatformEntitlements"
constexpr ::OculusStudios::Platform::Core::IPlatformEntitlements* OculusStudios::Platform::Oculus::Entitlements::i___OculusStudios__Platform__Core__IPlatformEntitlements() noexcept {
  return static_cast<::OculusStudios::Platform::Core::IPlatformEntitlements*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Oculus::Entitlements::Entitlements() {}
constexpr ::OculusStudios::Platform::Core::Vendor OculusStudios::Platform::Oculus::Entitlements::VENDOR{ static_cast<uint8_t>(0x2u) };
