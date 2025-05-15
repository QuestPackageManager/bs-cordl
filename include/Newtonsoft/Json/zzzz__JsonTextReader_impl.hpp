#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonTextReader.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__StringBuffer_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__StringReference_impl.hpp"
#include "Newtonsoft/Json/zzzz__IArrayPool_1_def.hpp"
#include "Newtonsoft/Json/zzzz__IJsonLineInfo_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonNameTable_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReaderException_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_impl.hpp"
#include "Newtonsoft/Json/zzzz__ReadType_def.hpp"
#include "Newtonsoft/Json/zzzz__ReadType_impl.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/Numerics/zzzz__BigInteger_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTimeOffset_impl.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Decimal_impl.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40::*)()>(
        &::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40::
            MoveNext)> {
  constexpr static std::size_t size = 0xdf8;
  constexpr static std::size_t addrs = 0x3e90b68;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40>::
            get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e91960;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40>::
            get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void
Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40>::
          get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void
Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40>::
          get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40::
operator ::System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<bool>>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_i_5__2", ty:
// "::System::Numerics::BigInteger", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_isTrue_5__3", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40::
    JsonTextReader__DoReadAsBooleanAsync_d__40(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<
            ::System::Nullable_1<bool>>
            __t__builder,
        ::Newtonsoft::Json::JsonTextReader *__4__this,
        ::System::Threading::CancellationToken cancellationToken,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>
                __u__1,
        ::System::Numerics::BigInteger _i_5__2, bool _isTrue_5__3,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->_i_5__2 = _i_5__2;
  this->_isTrue_5__3 = _isTrue_5__3;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsBooleanAsync_d__40::
    JsonTextReader__DoReadAsBooleanAsync_d__40() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42::*)()>(
        &::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42::
            MoveNext)> {
  constexpr static std::size_t size = 0xe10;
  constexpr static std::size_t addrs = 0x3e919dc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42>::
            get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e927ec;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42>::
            get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void
Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42>::get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void
Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42>::get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42::
operator ::System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t,::Array<uint8_t>*>>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_isWrapped_5__2", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_data_5__3", ty:
// "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::ArrayW<uint8_t,::Array<uint8_t>*>>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42::
    JsonTextReader__DoReadAsBytesAsync_d__42(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<
            ::ArrayW<uint8_t, ::Array<uint8_t> *>>
            __t__builder,
        ::Newtonsoft::Json::JsonTextReader *__4__this,
        ::System::Threading::CancellationToken cancellationToken,
        bool _isWrapped_5__2,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>
                __u__1,
        ::ArrayW<uint8_t, ::Array<uint8_t> *> _data_5__3,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<
                ::ArrayW<uint8_t, ::Array<uint8_t> *>>
                __u__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->_isWrapped_5__2 = _isWrapped_5__2;
  this->__u__1 = __u__1;
  this->_data_5__3 = _data_5__3;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsBytesAsync_d__42::
    JsonTextReader__DoReadAsBytesAsync_d__42() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45::*)()>(
        &::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45::
            MoveNext)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x3e92868;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45>::
            get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e92b0c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45>::
            get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void
Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45>::
          get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void
Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45>::
          get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45::
operator ::System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<::System::DateTime>>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45::
    JsonTextReader__DoReadAsDateTimeAsync_d__45(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<
            ::System::Nullable_1<::System::DateTime>>
            __t__builder,
        ::Newtonsoft::Json::JsonTextReader *__4__this,
        ::System::Threading::CancellationToken cancellationToken,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object *>
                __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeAsync_d__45::
    JsonTextReader__DoReadAsDateTimeAsync_d__45() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47::
            *)()>(
        &::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47::
            MoveNext)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x3e92b88;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::
                JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47>::get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47::
            *)(::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e92e64;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::
                JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47>::get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::
    JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::
              JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47>::get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void Newtonsoft::Json::
    JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47::SetStateMachine(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::
              JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47>::get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47::
operator ::System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<::System::DateTimeOffset>>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::
    JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47::
        JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47(
            int32_t __1__state,
            ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<
                ::System::Nullable_1<::System::DateTimeOffset>>
                __t__builder,
            ::Newtonsoft::Json::JsonTextReader *__4__this,
            ::System::Threading::CancellationToken cancellationToken,
            ::System::Runtime::CompilerServices::
                ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<
                    ::System::Object *>
                    __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::
    JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47::
        JsonTextReader__DoReadAsDateTimeOffsetAsync_d__47() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49::*)()>(
        &::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49::
            MoveNext)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x3e92ee0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49>::
            get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e931bc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49>::
            get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void
Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49>::
          get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void
Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49>::
          get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49::
operator ::System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<::System::Decimal>>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49::
    JsonTextReader__DoReadAsDecimalAsync_d__49(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<
            ::System::Nullable_1<::System::Decimal>>
            __t__builder,
        ::Newtonsoft::Json::JsonTextReader *__4__this,
        ::System::Threading::CancellationToken cancellationToken,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object *>
                __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsDecimalAsync_d__49::
    JsonTextReader__DoReadAsDecimalAsync_d__49() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51::*)()>(
        &::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51::
            MoveNext)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x3e93238;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51>::
            get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e93504;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51>::
            get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void
Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51>::get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void
Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51>::get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51::
operator ::System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<double_t>>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51::
    JsonTextReader__DoReadAsDoubleAsync_d__51(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<
            ::System::Nullable_1<double_t>>
            __t__builder,
        ::Newtonsoft::Json::JsonTextReader *__4__this,
        ::System::Threading::CancellationToken cancellationToken,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object *>
                __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsDoubleAsync_d__51::
    JsonTextReader__DoReadAsDoubleAsync_d__51() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53::*)()>(
        &::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53::
            MoveNext)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x3e93580;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53>::
            get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e93820;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53>::
            get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void
Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53>::get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void
Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53>::get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53::
operator ::System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<int32_t>>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53::
    JsonTextReader__DoReadAsInt32Async_d__53(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<
            ::System::Nullable_1<int32_t>>
            __t__builder,
        ::Newtonsoft::Json::JsonTextReader *__4__this,
        ::System::Threading::CancellationToken cancellationToken,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object *>
                __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsInt32Async_d__53::
    JsonTextReader__DoReadAsInt32Async_d__53() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55::*)()>(
        &::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55::
            MoveNext)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x3e9389c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55>::
            get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e93b1c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55>::
            get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void
Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55>::get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void
Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55>::get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55::
operator ::System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55::
    JsonTextReader__DoReadAsStringAsync_d__55(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>
            __t__builder,
        ::Newtonsoft::Json::JsonTextReader *__4__this,
        ::System::Threading::CancellationToken cancellationToken,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object *>
                __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsStringAsync_d__55::
    JsonTextReader__DoReadAsStringAsync_d__55() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3::*)()>(
        &::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x3e93b98;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3>::get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e93ec0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3>::get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3>::get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3>::get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3::operator ::
    System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "task", ty:
// "::System::Threading::Tasks::Task_1<bool>*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3::
    JsonTextReader__DoReadAsync_d__3(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>
            __t__builder,
        ::System::Threading::Tasks::Task_1<bool> *task,
        ::Newtonsoft::Json::JsonTextReader *__4__this,
        ::System::Threading::CancellationToken cancellationToken,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>
                __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->task = task;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__DoReadAsync_d__3::
    JsonTextReader__DoReadAsync_d__3() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17::*)()>(
        &::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17::
            MoveNext)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x3e93f3c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17>::
            get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3e9431c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17>::
            get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void
Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17>::get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void
Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17>::get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17::
operator ::System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17::
    JsonTextReader__EatWhitespaceAsync_d__17(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder
            __t__builder,
        ::Newtonsoft::Json::JsonTextReader *__4__this,
        ::System::Threading::CancellationToken cancellationToken,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>
                __u__1,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__EatWhitespaceAsync_d__17::
    JsonTextReader__EatWhitespaceAsync_d__17() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35::*)()>(
        &::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35::MoveNext)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x3e94384;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35>::get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3e94740;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35>::get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void
Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35>::get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void
Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35>::get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35::operator ::
    System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35::
    JsonTextReader__HandleNullAsync_d__35(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder
            __t__builder,
        ::Newtonsoft::Json::JsonTextReader *__4__this,
        ::System::Threading::CancellationToken cancellationToken,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>
                __u__1,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__HandleNullAsync_d__35::
    JsonTextReader__HandleNullAsync_d__35() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21::*)()>(
        &::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21::
            MoveNext)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x3e947a8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21>::get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3e94aa8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21>::get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void
Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21>::get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void
Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21>::get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21::operator ::
    System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "newToken", ty:
// "::Newtonsoft::Json::JsonToken", modifiers: "", def_value: Some("{}") },
// CppParam { name: "tokenValue", ty: "::System::Object*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21::
    JsonTextReader__MatchAndSetAsync_d__21(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder
            __t__builder,
        ::Newtonsoft::Json::JsonTextReader *__4__this, ::StringW value,
        ::System::Threading::CancellationToken cancellationToken,
        ::Newtonsoft::Json::JsonToken newToken, ::System::Object *tokenValue,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>
                __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->value = value;
  this->cancellationToken = cancellationToken;
  this->newToken = newToken;
  this->tokenValue = tokenValue;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__MatchAndSetAsync_d__21::
    JsonTextReader__MatchAndSetAsync_d__21() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19::*)()>(
        &::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x3e94b10;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19>::get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e94da0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19>::get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void
Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19>::get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void
Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19>::get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19::operator ::
    System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19::
    JsonTextReader__MatchValueAsync_d__19(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>
            __t__builder,
        ::Newtonsoft::Json::JsonTextReader *__4__this, ::StringW value,
        ::System::Threading::CancellationToken cancellationToken,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>
                __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->value = value;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__MatchValueAsync_d__19::
    JsonTextReader__MatchValueAsync_d__19() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::
            JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20::*)()>(
        &::Newtonsoft::Json::
            JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20::
                MoveNext)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x3e94e1c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::
                JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20>::
            get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::
            JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::
            JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20::
                SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e951f4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::
                JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20>::
            get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::
    JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::
              JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20>::
          get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void Newtonsoft::Json::
    JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20::SetStateMachine(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::
              JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20>::
          get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::
    JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20::
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::
    JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20::
        JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20(
            int32_t __1__state,
            ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>
                __t__builder,
            ::Newtonsoft::Json::JsonTextReader *__4__this, ::StringW value,
            ::System::Threading::CancellationToken cancellationToken,
            ::System::Runtime::CompilerServices::
                ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>
                    __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->value = value;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::
    JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20::
        JsonTextReader__MatchValueWithTrailingSeparatorAsync_d__20() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16::*)()>(
        &::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16::
            MoveNext)> {
  constexpr static std::size_t size = 0x854;
  constexpr static std::size_t addrs = 0x3e95270;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16>::get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3e95ac4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16>::get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void
Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16>::get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void
Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16>::get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16::operator ::
    System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "setToken", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_singlelineComment_5__2", ty:
// "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_initialPosition_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16::
    JsonTextReader__ParseCommentAsync_d__16(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder
            __t__builder,
        ::Newtonsoft::Json::JsonTextReader *__4__this,
        ::System::Threading::CancellationToken cancellationToken, bool setToken,
        bool _singlelineComment_5__2, int32_t _initialPosition_5__3,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>
                __u__1,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>
                __u__2,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->setToken = setToken;
  this->_singlelineComment_5__2 = _singlelineComment_5__2;
  this->_initialPosition_5__3 = _initialPosition_5__3;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ParseCommentAsync_d__16::
    JsonTextReader__ParseCommentAsync_d__16() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25::*)()>(
        &::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25::
            MoveNext)> {
  constexpr static std::size_t size = 0x9a8;
  constexpr static std::size_t addrs = 0x3e95b2c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25>::
            get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3e964d4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25>::
            get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void
Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25>::
          get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void
Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25>::
          get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25::
operator ::System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>",
// modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_initialPosition_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "_endPosition_5__3", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_constructorName_5__4", ty:
// "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__2", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25::
    JsonTextReader__ParseConstructorAsync_d__25(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder
            __t__builder,
        ::Newtonsoft::Json::JsonTextReader *__4__this,
        ::System::Threading::CancellationToken cancellationToken,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>
                __u__1,
        int32_t _initialPosition_5__2, int32_t _endPosition_5__3,
        ::StringW _constructorName_5__4,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>
                __u__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->_initialPosition_5__2 = _initialPosition_5__2;
  this->_endPosition_5__3 = _endPosition_5__3;
  this->_constructorName_5__4 = _constructorName_5__4;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ParseConstructorAsync_d__25::
    JsonTextReader__ParseConstructorAsync_d__25() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29::*)()>(
        &::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29::
            MoveNext)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x3e9653c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29>::get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3e96784;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29>::get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void
Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29>::get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void
Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29>::get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29::operator ::
    System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "readType", ty:
// "::Newtonsoft::Json::ReadType", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_firstChar_5__2", ty: "char16_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_initialPosition_5__3", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29::
    JsonTextReader__ParseNumberAsync_d__29(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder
            __t__builder,
        ::Newtonsoft::Json::JsonTextReader *__4__this,
        ::System::Threading::CancellationToken cancellationToken,
        ::Newtonsoft::Json::ReadType readType, char16_t _firstChar_5__2,
        int32_t _initialPosition_5__3,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->readType = readType;
  this->_firstChar_5__2 = _firstChar_5__2;
  this->_initialPosition_5__3 = _initialPosition_5__3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ParseNumberAsync_d__29::
    JsonTextReader__ParseNumberAsync_d__29() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26::*)()>(
        &::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26::
            MoveNext)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x3e967ec;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26>::
            get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e96aa4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26>::
            get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void
Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26>::get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void
Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26>::get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26::
operator ::System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "readType", ty:
// "::Newtonsoft::Json::ReadType", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken",
// ty: "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__7__wrap1", ty:
// "::Newtonsoft::Json::ReadType", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26::
    JsonTextReader__ParseNumberNaNAsync_d__26(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<
            ::System::Object *>
            __t__builder,
        ::Newtonsoft::Json::ReadType readType,
        ::Newtonsoft::Json::JsonTextReader *__4__this,
        ::System::Threading::CancellationToken cancellationToken,
        ::Newtonsoft::Json::ReadType __7__wrap1,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>
                __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->readType = readType;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__7__wrap1 = __7__wrap1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ParseNumberNaNAsync_d__26::
    JsonTextReader__ParseNumberNaNAsync_d__26() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::
            JsonTextReader__ParseNumberNegativeInfinityAsync_d__28::*)()>(
        &::Newtonsoft::Json::
            JsonTextReader__ParseNumberNegativeInfinityAsync_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x3e96b20;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::
                JsonTextReader__ParseNumberNegativeInfinityAsync_d__28>::get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::
            JsonTextReader__ParseNumberNegativeInfinityAsync_d__28::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::
            JsonTextReader__ParseNumberNegativeInfinityAsync_d__28::
                SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e96dd8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::
                JsonTextReader__ParseNumberNegativeInfinityAsync_d__28>::get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::
    JsonTextReader__ParseNumberNegativeInfinityAsync_d__28::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::
              JsonTextReader__ParseNumberNegativeInfinityAsync_d__28>::get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void Newtonsoft::Json::
    JsonTextReader__ParseNumberNegativeInfinityAsync_d__28::SetStateMachine(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::
              JsonTextReader__ParseNumberNegativeInfinityAsync_d__28>::get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::
    JsonTextReader__ParseNumberNegativeInfinityAsync_d__28::
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__ParseNumberNegativeInfinityAsync_d__28::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "readType", ty:
// "::Newtonsoft::Json::ReadType", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken",
// ty: "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__7__wrap1", ty:
// "::Newtonsoft::Json::ReadType", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::
    JsonTextReader__ParseNumberNegativeInfinityAsync_d__28::
        JsonTextReader__ParseNumberNegativeInfinityAsync_d__28(
            int32_t __1__state,
            ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<
                ::System::Object *>
                __t__builder,
            ::Newtonsoft::Json::ReadType readType,
            ::Newtonsoft::Json::JsonTextReader *__4__this,
            ::System::Threading::CancellationToken cancellationToken,
            ::Newtonsoft::Json::ReadType __7__wrap1,
            ::System::Runtime::CompilerServices::
                ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>
                    __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->readType = readType;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__7__wrap1 = __7__wrap1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::
    JsonTextReader__ParseNumberNegativeInfinityAsync_d__28::
        JsonTextReader__ParseNumberNegativeInfinityAsync_d__28() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::
            JsonTextReader__ParseNumberPositiveInfinityAsync_d__27::*)()>(
        &::Newtonsoft::Json::
            JsonTextReader__ParseNumberPositiveInfinityAsync_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x3e96e54;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::
                JsonTextReader__ParseNumberPositiveInfinityAsync_d__27>::get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::
            JsonTextReader__ParseNumberPositiveInfinityAsync_d__27::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::
            JsonTextReader__ParseNumberPositiveInfinityAsync_d__27::
                SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e9710c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::
                JsonTextReader__ParseNumberPositiveInfinityAsync_d__27>::get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::
    JsonTextReader__ParseNumberPositiveInfinityAsync_d__27::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::
              JsonTextReader__ParseNumberPositiveInfinityAsync_d__27>::get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void Newtonsoft::Json::
    JsonTextReader__ParseNumberPositiveInfinityAsync_d__27::SetStateMachine(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::
              JsonTextReader__ParseNumberPositiveInfinityAsync_d__27>::get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::
    JsonTextReader__ParseNumberPositiveInfinityAsync_d__27::
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__ParseNumberPositiveInfinityAsync_d__27::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "readType", ty:
// "::Newtonsoft::Json::ReadType", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken",
// ty: "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__7__wrap1", ty:
// "::Newtonsoft::Json::ReadType", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::
    JsonTextReader__ParseNumberPositiveInfinityAsync_d__27::
        JsonTextReader__ParseNumberPositiveInfinityAsync_d__27(
            int32_t __1__state,
            ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<
                ::System::Object *>
                __t__builder,
            ::Newtonsoft::Json::ReadType readType,
            ::Newtonsoft::Json::JsonTextReader *__4__this,
            ::System::Threading::CancellationToken cancellationToken,
            ::Newtonsoft::Json::ReadType __7__wrap1,
            ::System::Runtime::CompilerServices::
                ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>
                    __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->readType = readType;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__7__wrap1 = __7__wrap1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::
    JsonTextReader__ParseNumberPositiveInfinityAsync_d__27::
        JsonTextReader__ParseNumberPositiveInfinityAsync_d__27() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15::*)()>(
        &::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15::
            MoveNext)> {
  constexpr static std::size_t size = 0x62c;
  constexpr static std::size_t addrs = 0x3e97188;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15>::get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e977b4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15>::get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void
Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15>::get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void
Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15>::get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15::operator ::
    System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15::
    JsonTextReader__ParseObjectAsync_d__15(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>
            __t__builder,
        ::Newtonsoft::Json::JsonTextReader *__4__this,
        ::System::Threading::CancellationToken cancellationToken,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>
                __u__1,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>
                __u__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ParseObjectAsync_d__15::
    JsonTextReader__ParseObjectAsync_d__15() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4::*)()>(
        &::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4::
            MoveNext)> {
  constexpr static std::size_t size = 0x688;
  constexpr static std::size_t addrs = 0x3e97830;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4>::
            get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e97eb8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4>::
            get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void
Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4>::get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void
Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4>::get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4::
operator ::System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "ignoreComments", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4::
    JsonTextReader__ParsePostValueAsync_d__4(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>
            __t__builder,
        ::Newtonsoft::Json::JsonTextReader *__4__this,
        ::System::Threading::CancellationToken cancellationToken,
        bool ignoreComments,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>
                __u__1,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->ignoreComments = ignoreComments;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ParsePostValueAsync_d__4::
    JsonTextReader__ParsePostValueAsync_d__4() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31::*)()>(
        &::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31::
            MoveNext)> {
  constexpr static std::size_t size = 0x678;
  constexpr static std::size_t addrs = 0x3e97f34;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31>::
            get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e985ac;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31>::
            get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void
Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31>::get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void
Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31>::get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31::
operator ::System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_quoteChar_5__2", ty: "char16_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "_propertyName_5__3", ty:
// "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31::
    JsonTextReader__ParsePropertyAsync_d__31(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>
            __t__builder,
        ::Newtonsoft::Json::JsonTextReader *__4__this,
        ::System::Threading::CancellationToken cancellationToken,
        char16_t _quoteChar_5__2, ::StringW _propertyName_5__3,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->_quoteChar_5__2 = _quoteChar_5__2;
  this->_propertyName_5__3 = _propertyName_5__3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ParsePropertyAsync_d__31::
    JsonTextReader__ParsePropertyAsync_d__31() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18::*)()>(
        &::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18::
            MoveNext)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x3e98628;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18>::get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3e98878;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18>::get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void
Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18>::get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void
Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18>::get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18::operator ::
    System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "quote", ty: "char16_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "readType", ty:
// "::Newtonsoft::Json::ReadType", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18::
    JsonTextReader__ParseStringAsync_d__18(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder
            __t__builder,
        ::System::Threading::CancellationToken cancellationToken,
        ::Newtonsoft::Json::JsonTextReader *__4__this, char16_t quote,
        ::Newtonsoft::Json::ReadType readType,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->cancellationToken = cancellationToken;
  this->__4__this = __4__this;
  this->quote = quote;
  this->readType = readType;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ParseStringAsync_d__18::
    JsonTextReader__ParseStringAsync_d__18() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12::*)()>(
        &::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12::
            MoveNext)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x3e988e0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12>::get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e98b58;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12>::get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void
Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12>::get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void
Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12>::get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12::operator ::
    System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<char16_t>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12::
    JsonTextReader__ParseUnicodeAsync_d__12(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<char16_t>
            __t__builder,
        ::Newtonsoft::Json::JsonTextReader *__4__this,
        ::System::Threading::CancellationToken cancellationToken,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>
                __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ParseUnicodeAsync_d__12::
    JsonTextReader__ParseUnicodeAsync_d__12() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33::
            *)()>(
        &::Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33::
            MoveNext)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x3e98bd4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::
                JsonTextReader__ParseUnquotedPropertyAsync_d__33>::get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33::
            *)(::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3e98ee8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::
                JsonTextReader__ParseUnquotedPropertyAsync_d__33>::get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void
Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::
              JsonTextReader__ParseUnquotedPropertyAsync_d__33>::get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33::
    SetStateMachine(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::
              JsonTextReader__ParseUnquotedPropertyAsync_d__33>::get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33::
operator ::System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_initialPosition_5__2", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33::
    JsonTextReader__ParseUnquotedPropertyAsync_d__33(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder
            __t__builder,
        ::Newtonsoft::Json::JsonTextReader *__4__this,
        ::System::Threading::CancellationToken cancellationToken,
        int32_t _initialPosition_5__2,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>
                __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->_initialPosition_5__2 = _initialPosition_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ParseUnquotedPropertyAsync_d__33::
    JsonTextReader__ParseUnquotedPropertyAsync_d__33() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8::*)()>(
        &::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x11c0;
  constexpr static std::size_t addrs = 0x3e98f50;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8>::get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e9a110;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8>::get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8>::get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void
Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8>::get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8::operator ::
    System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__4", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8::
    JsonTextReader__ParseValueAsync_d__8(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>
            __t__builder,
        ::Newtonsoft::Json::JsonTextReader *__4__this,
        ::System::Threading::CancellationToken cancellationToken,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>
                __u__1,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>
                __u__3,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object *>
                __u__4) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
  this->__u__4 = __u__4;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ParseValueAsync_d__8::
    JsonTextReader__ParseValueAsync_d__8() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11::
            *)()>(
        &::Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11::
            MoveNext)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x3e9a18c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::
                JsonTextReader__ProcessCarriageReturnAsync_d__11>::get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11::
            *)(::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3e9a3b8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::
                JsonTextReader__ProcessCarriageReturnAsync_d__11>::get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void
Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::
              JsonTextReader__ProcessCarriageReturnAsync_d__11>::get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11::
    SetStateMachine(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::
              JsonTextReader__ProcessCarriageReturnAsync_d__11>::get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11::
operator ::System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "task", ty:
// "::System::Threading::Tasks::Task_1<bool>*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11::
    JsonTextReader__ProcessCarriageReturnAsync_d__11(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder
            __t__builder,
        ::System::Threading::Tasks::Task_1<bool> *task,
        ::Newtonsoft::Json::JsonTextReader *__4__this,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>
                __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->task = task;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ProcessCarriageReturnAsync_d__11::
    JsonTextReader__ProcessCarriageReturnAsync_d__11() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14::*)()>(
        &::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x3e9a420;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14>::get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e9a6c0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14>::get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14>::get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void
Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14>::get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14::operator ::
    System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "relativePosition", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "append", ty: "bool", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_charsRequired_5__2", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14::
    JsonTextReader__ReadCharsAsync_d__14(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>
            __t__builder,
        ::Newtonsoft::Json::JsonTextReader *__4__this, int32_t relativePosition,
        bool append, ::System::Threading::CancellationToken cancellationToken,
        int32_t _charsRequired_5__2,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>
                __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->relativePosition = relativePosition;
  this->append = append;
  this->cancellationToken = cancellationToken;
  this->_charsRequired_5__2 = _charsRequired_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ReadCharsAsync_d__14::
    JsonTextReader__ReadCharsAsync_d__14() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7::*)()>(
        &::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x3e9a73c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7>::get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e9aa6c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7>::get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7>::get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void
Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7>::get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7::operator ::
    System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "append", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "charsRequired", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7::
    JsonTextReader__ReadDataAsync_d__7(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>
            __t__builder,
        ::Newtonsoft::Json::JsonTextReader *__4__this, bool append,
        int32_t charsRequired,
        ::System::Threading::CancellationToken cancellationToken,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>
                __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->append = append;
  this->charsRequired = charsRequired;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ReadDataAsync_d__7::
    JsonTextReader__ReadDataAsync_d__7() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36::*)()>(
        &::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36::
            MoveNext)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x3e9aae8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36>::get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3e9b000;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36>::get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void
Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36>::get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void
Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36>::get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36::operator ::
    System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36::
    JsonTextReader__ReadFinishedAsync_d__36(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder
            __t__builder,
        ::Newtonsoft::Json::JsonTextReader *__4__this,
        ::System::Threading::CancellationToken cancellationToken,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>
                __u__1,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ReadFinishedAsync_d__36::
    JsonTextReader__ReadFinishedAsync_d__36() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5::*)()>(
        &::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5::
            MoveNext)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0x3e9b068;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5>::
            get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e9b5b4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5>::
            get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void
Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5>::
          get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void
Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5>::
          get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5::
operator ::System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5::
    JsonTextReader__ReadFromFinishedAsync_d__5(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>
            __t__builder,
        ::Newtonsoft::Json::JsonTextReader *__4__this,
        ::System::Threading::CancellationToken cancellationToken,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>
                __u__1,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ReadFromFinishedAsync_d__5::
    JsonTextReader__ReadFromFinishedAsync_d__5() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::
            JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43::*)()>(
        &::Newtonsoft::Json::
            JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43::MoveNext)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x3e9b630;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::
                JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43>::get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::
            JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::
            JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43::
                SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3e9bba8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::
                JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43>::get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::
    JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::
              JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43>::get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void Newtonsoft::Json::
    JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43::SetStateMachine(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::
              JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43>::get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::
    JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43::
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::
    JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43::
        JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43(
            int32_t __1__state,
            ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder
                __t__builder,
            ::Newtonsoft::Json::JsonTextReader *__4__this,
            ::System::Threading::CancellationToken cancellationToken,
            ::System::Runtime::CompilerServices::
                ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::
    JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43::
        JsonTextReader__ReadIntoWrappedTypeObjectAsync_d__43() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34::*)()>(
        &::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34::
            MoveNext)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x3e9bc10;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34>::get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e9bea4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34>::get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void
Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34>::get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void
Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34>::get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34::operator ::
    System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34::
    JsonTextReader__ReadNullCharAsync_d__34(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>
            __t__builder,
        ::Newtonsoft::Json::JsonTextReader *__4__this,
        ::System::Threading::CancellationToken cancellationToken,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>
                __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ReadNullCharAsync_d__34::
    JsonTextReader__ReadNullCharAsync_d__34() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32::
            *)()>(
        &::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32::
            MoveNext)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x3e9bf20;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::
                JsonTextReader__ReadNumberIntoBufferAsync_d__32>::get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3e9c1e0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::
                JsonTextReader__ReadNumberIntoBufferAsync_d__32>::get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void
Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32>::
          get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32::
    SetStateMachine(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32>::
          get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32::
operator ::System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_charPos_5__2", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32::
    JsonTextReader__ReadNumberIntoBufferAsync_d__32(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder
            __t__builder,
        ::Newtonsoft::Json::JsonTextReader *__4__this,
        ::System::Threading::CancellationToken cancellationToken,
        int32_t _charPos_5__2,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>
                __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->_charPos_5__2 = _charPos_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ReadNumberIntoBufferAsync_d__32::
    JsonTextReader__ReadNumberIntoBufferAsync_d__32() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38::*)()>(
        &::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38::
            MoveNext)> {
  constexpr static std::size_t size = 0xf44;
  constexpr static std::size_t addrs = 0x3e9c248;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38>::
            get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e9d18c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38>::
            get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void
Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38>::
          get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void
Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38>::
          get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38::
operator ::System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "readType", ty:
// "::Newtonsoft::Json::ReadType", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38::
    JsonTextReader__ReadNumberValueAsync_d__38(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<
            ::System::Object *>
            __t__builder,
        ::Newtonsoft::Json::JsonTextReader *__4__this,
        ::System::Threading::CancellationToken cancellationToken,
        ::Newtonsoft::Json::ReadType readType,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>
                __u__1,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object *>
                __u__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->readType = readType;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ReadNumberValueAsync_d__38::
    JsonTextReader__ReadNumberValueAsync_d__38() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::
                          JsonTextReader__ReadStringIntoBufferAsync_d__9::*)()>(
        &::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9::
            MoveNext)> {
  constexpr static std::size_t size = 0xc9c;
  constexpr static std::size_t addrs = 0x3e9d208;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::
                JsonTextReader__ReadStringIntoBufferAsync_d__9>::get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3e9dea4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::
                JsonTextReader__ReadStringIntoBufferAsync_d__9>::get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void
Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9>::
          get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9::
    SetStateMachine(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9>::
          get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9::
operator ::System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "quote", ty: "char16_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_charPos_5__2", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_initialPosition_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "_lastWritePosition_5__4", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_escapeStartPos_5__5", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_writeChar_5__6", ty: "char16_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<char16_t>",
// modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_anotherHighSurrogate_5__7", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_highSurrogate_5__8", ty: "char16_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__4", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9::
    JsonTextReader__ReadStringIntoBufferAsync_d__9(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder
            __t__builder,
        ::Newtonsoft::Json::JsonTextReader *__4__this,
        ::System::Threading::CancellationToken cancellationToken,
        char16_t quote, int32_t _charPos_5__2, int32_t _initialPosition_5__3,
        int32_t _lastWritePosition_5__4, int32_t _escapeStartPos_5__5,
        char16_t _writeChar_5__6,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>
                __u__1,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>
                __u__2,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<char16_t>
                __u__3,
        bool _anotherHighSurrogate_5__7, char16_t _highSurrogate_5__8,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__4) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->quote = quote;
  this->_charPos_5__2 = _charPos_5__2;
  this->_initialPosition_5__3 = _initialPosition_5__3;
  this->_lastWritePosition_5__4 = _lastWritePosition_5__4;
  this->_escapeStartPos_5__5 = _escapeStartPos_5__5;
  this->_writeChar_5__6 = _writeChar_5__6;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
  this->_anotherHighSurrogate_5__7 = _anotherHighSurrogate_5__7;
  this->_highSurrogate_5__8 = _highSurrogate_5__8;
  this->__u__4 = __u__4;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ReadStringIntoBufferAsync_d__9::
    JsonTextReader__ReadStringIntoBufferAsync_d__9() {}
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37::*)()>(
        &::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37::
            MoveNext)> {
  constexpr static std::size_t size = 0x10f8;
  constexpr static std::size_t addrs = 0x3e9df0c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37>::
            get(),
        "MoveNext", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (
        ::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37::*)(
        ::System::Runtime::CompilerServices::IAsyncStateMachine *)>(
        &::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37::
            SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e9f004;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37>::
            get(),
        "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Runtime::CompilerServices::IAsyncStateMachine
                    *>::get()})));
    return ___internal_method;
  }
};
inline void
Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37::MoveNext() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37>::
          get(),
      "MoveNext", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void
Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine *stateMachine) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37>::
          get(),
      "SetStateMachine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *,
                   1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Runtime::CompilerServices::IAsyncStateMachine *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, stateMachine);
}
/// @brief Convert operator to
/// "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37::
operator ::System::Runtime::CompilerServices::IAsyncStateMachine *() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine *
Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37::
    i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine *>(
      static_cast<void *>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Object*>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "readType", ty:
// "::Newtonsoft::Json::ReadType", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_expected_5__2",
// ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__2", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object*>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37::
    JsonTextReader__ReadStringValueAsync_d__37(
        int32_t __1__state,
        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<
            ::System::Object *>
            __t__builder,
        ::Newtonsoft::Json::JsonTextReader *__4__this,
        ::System::Threading::CancellationToken cancellationToken,
        ::Newtonsoft::Json::ReadType readType,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>
                __u__1,
        ::StringW _expected_5__2,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2,
        ::System::Runtime::CompilerServices::
            ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Object *>
                __u__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->readType = readType;
  this->__u__1 = __u__1;
  this->_expected_5__2 = _expected_5__2;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader__ReadStringValueAsync_d__37::
    JsonTextReader__ReadStringValueAsync_d__37() {}
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<bool> *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ReadAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3e87b8c;

  inline static const ::MethodInfo *methodInfo() {

    static auto *___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            5));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.DoReadAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<bool> *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::DoReadAsync)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x3e87b9c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "DoReadAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.DoReadAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<bool> *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(::System::Threading::Tasks::Task_1<bool> *,
               ::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::DoReadAsync)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3e880f8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "DoReadAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::Tasks::Task_1<bool> *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParsePostValueAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<bool> *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(bool, ::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ParsePostValueAsync)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x3e87fe4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParsePostValueAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadFromFinishedAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<bool> *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ReadFromFinishedAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3e88200;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ReadFromFinishedAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadDataAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<int32_t> *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(bool, ::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ReadDataAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3e882fc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ReadDataAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadDataAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<int32_t> *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(bool, int32_t, ::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ReadDataAsync)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3e8830c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ReadDataAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseValueAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<bool> *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ParseValueAsync)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3e87de8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseValueAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadStringIntoBufferAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(char16_t, ::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ReadStringIntoBufferAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3e88424;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ReadStringIntoBufferAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ProcessCarriageReturnAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(bool, ::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ProcessCarriageReturnAsync)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3e88508;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ProcessCarriageReturnAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ProcessCarriageReturnAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(::System::Threading::Tasks::Task_1<bool> *)>(
        &::Newtonsoft::Json::JsonTextReader::ProcessCarriageReturnAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3e88730;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ProcessCarriageReturnAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::Tasks::Task_1<bool> *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseUnicodeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<char16_t> *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ParseUnicodeAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3e88800;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseUnicodeAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.EnsureCharsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<bool> *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(int32_t, bool, ::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::EnsureCharsAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3e88608;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "EnsureCharsAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadCharsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<bool> *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(int32_t, bool, ::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ReadCharsAsync)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3e888f8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ReadCharsAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseObjectAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<bool> *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ParseObjectAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3e87ee8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseObjectAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseCommentAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(bool, ::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ParseCommentAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3e88a10;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseCommentAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.EatWhitespaceAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::EatWhitespaceAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3e88af4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "EatWhitespaceAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseStringAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(char16_t, ::Newtonsoft::Json::ReadType,
               ::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ParseStringAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3e88bc8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseStringAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::Newtonsoft::Json::ReadType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.MatchValueAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<bool> *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(::StringW, ::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::MatchValueAsync)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3e88cb4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "MatchValueAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.MatchValueWithTrailingSeparatorAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<bool> *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(::StringW, ::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::
            MatchValueWithTrailingSeparatorAsync)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3e88dbc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "MatchValueWithTrailingSeparatorAsync",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.MatchAndSetAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(::StringW, ::Newtonsoft::Json::JsonToken, ::System::Object *,
               ::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::MatchAndSetAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3e88ec4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "MatchAndSetAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::Newtonsoft::Json::JsonToken>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Object *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseTrueAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ParseTrueAsync)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3e88fb8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseTrueAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseFalseAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ParseFalseAsync)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3e89060;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseFalseAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseNullAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ParseNullAsync)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3e89104;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseNullAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseConstructorAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ParseConstructorAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3e8917c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseConstructorAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseNumberNaNAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Object *> *(
        ::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType,
                                               ::System::Threading::
                                                   CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ParseNumberNaNAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3e89254;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseNumberNaNAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::Newtonsoft::Json::ReadType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseNumberPositiveInfinityAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Object *> *(
        ::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType,
                                               ::System::Threading::
                                                   CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::
            ParseNumberPositiveInfinityAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3e89360;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseNumberPositiveInfinityAsync",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::Newtonsoft::Json::ReadType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseNumberNegativeInfinityAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Object *> *(
        ::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType,
                                               ::System::Threading::
                                                   CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::
            ParseNumberNegativeInfinityAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3e8946c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseNumberNegativeInfinityAsync",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::Newtonsoft::Json::ReadType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseNumberAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task *(
        ::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType,
                                               ::System::Threading::
                                                   CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ParseNumberAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3e89578;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseNumberAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::Newtonsoft::Json::ReadType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseUndefinedAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ParseUndefinedAsync)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3e89654;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseUndefinedAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParsePropertyAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<bool> *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ParsePropertyAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3e896cc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParsePropertyAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadNumberIntoBufferAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ReadNumberIntoBufferAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3e897c8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ReadNumberIntoBufferAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseUnquotedPropertyAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ParseUnquotedPropertyAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3e8989c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseUnquotedPropertyAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadNullCharAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<bool> *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ReadNullCharAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3e89970;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ReadNullCharAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.HandleNullAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::HandleNullAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3e89a68;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "HandleNullAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadFinishedAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ReadFinishedAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3e89b3c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ReadFinishedAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadStringValueAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Object *> *(
        ::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType,
                                               ::System::Threading::
                                                   CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ReadStringValueAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3e89c10;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ReadStringValueAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::Newtonsoft::Json::ReadType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadNumberValueAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Object *> *(
        ::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType,
                                               ::System::Threading::
                                                   CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ReadNumberValueAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3e89d20;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ReadNumberValueAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::Newtonsoft::Json::ReadType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadAsBooleanAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<bool>>
                    *(::Newtonsoft::Json::JsonTextReader::
                          *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ReadAsBooleanAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3e89e30;

  inline static const ::MethodInfo *methodInfo() {

    static auto *___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            6));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.DoReadAsBooleanAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<bool>>
                    *(::Newtonsoft::Json::JsonTextReader::
                          *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::DoReadAsBooleanAsync)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3e89e40;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "DoReadAsBooleanAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadAsBytesAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<
        ::ArrayW<uint8_t, ::Array<uint8_t> *>> *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ReadAsBytesAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3e89f40;

  inline static const ::MethodInfo *methodInfo() {

    static auto *___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            7));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.DoReadAsBytesAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<
        ::ArrayW<uint8_t, ::Array<uint8_t> *>> *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::DoReadAsBytesAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3e89f50;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "DoReadAsBytesAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadIntoWrappedTypeObjectAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ReadIntoWrappedTypeObjectAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3e8a040;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ReadIntoWrappedTypeObjectAsync",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadAsDateTimeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<
        ::System::DateTime>> *(::Newtonsoft::Json::JsonTextReader::
                                   *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ReadAsDateTimeAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3e8a110;

  inline static const ::MethodInfo *methodInfo() {

    static auto *___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            8));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.DoReadAsDateTimeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<
        ::System::DateTime>> *(::Newtonsoft::Json::JsonTextReader::
                                   *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::DoReadAsDateTimeAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3e8a120;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "DoReadAsDateTimeAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadAsDateTimeOffsetAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<
        ::System::Nullable_1<::System::DateTimeOffset>> *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ReadAsDateTimeOffsetAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3e8a218;

  inline static const ::MethodInfo *methodInfo() {

    static auto *___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            9));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.DoReadAsDateTimeOffsetAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<
        ::System::Nullable_1<::System::DateTimeOffset>> *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::DoReadAsDateTimeOffsetAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3e8a228;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "DoReadAsDateTimeOffsetAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadAsDecimalAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<
        ::System::Decimal>> *(::Newtonsoft::Json::JsonTextReader::
                                  *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ReadAsDecimalAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3e8a320;

  inline static const ::MethodInfo *methodInfo() {

    static auto *___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            10));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.DoReadAsDecimalAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<
        ::System::Decimal>> *(::Newtonsoft::Json::JsonTextReader::
                                  *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::DoReadAsDecimalAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3e8a330;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "DoReadAsDecimalAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadAsDoubleAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<
        double_t>> *(::Newtonsoft::Json::JsonTextReader::
                         *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ReadAsDoubleAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3e8a428;

  inline static const ::MethodInfo *methodInfo() {

    static auto *___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            11));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.DoReadAsDoubleAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<
        double_t>> *(::Newtonsoft::Json::JsonTextReader::
                         *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::DoReadAsDoubleAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3e8a438;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "DoReadAsDoubleAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadAsInt32Async
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<
        int32_t>> *(::Newtonsoft::Json::JsonTextReader::
                        *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ReadAsInt32Async)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3e8a530;

  inline static const ::MethodInfo *methodInfo() {

    static auto *___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            12));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.DoReadAsInt32Async
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Nullable_1<
        int32_t>> *(::Newtonsoft::Json::JsonTextReader::
                        *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::DoReadAsInt32Async)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3e8a540;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "DoReadAsInt32Async", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadAsStringAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::StringW> *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::ReadAsStringAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3e8a638;

  inline static const ::MethodInfo *methodInfo() {

    static auto *___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            13));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.DoReadAsStringAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::StringW> *(
        ::Newtonsoft::Json::JsonTextReader::
            *)(::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::JsonTextReader::DoReadAsStringAsync)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x3e8a648;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "DoReadAsStringAsync", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Threading::CancellationToken>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(
        ::System::IO::TextReader *)>(
        &::Newtonsoft::Json::JsonTextReader::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3e7ac9c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        ".ctor", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::IO::TextReader *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.get_PropertyNameTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Newtonsoft::Json::JsonNameTable *(
        ::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::get_PropertyNameTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e8a730;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "get_PropertyNameTable", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.set_PropertyNameTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(
        ::Newtonsoft::Json::JsonNameTable *)>(
        &::Newtonsoft::Json::JsonTextReader::set_PropertyNameTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e8a738;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "set_PropertyNameTable", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::Newtonsoft::Json::JsonNameTable *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.get_ArrayPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Newtonsoft::Json::IArrayPool_1<char16_t> *(
        ::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::get_ArrayPool)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e8a740;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "get_ArrayPool", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.set_ArrayPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(
        ::Newtonsoft::Json::IArrayPool_1<char16_t> *)>(
        &::Newtonsoft::Json::JsonTextReader::set_ArrayPool)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3e8a748;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "set_ArrayPool", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::Newtonsoft::Json::IArrayPool_1<char16_t> *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.EnsureBufferNotEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::EnsureBufferNotEmpty)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3e8a7a4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "EnsureBufferNotEmpty", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.SetNewLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(bool)>(
        &::Newtonsoft::Json::JsonTextReader::SetNewLine)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3e886d0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "SetNewLine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.OnNewLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(int32_t)>(
        &::Newtonsoft::Json::JsonTextReader::OnNewLine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3e8a7f8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "OnNewLine", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(
        char16_t, ::Newtonsoft::Json::ReadType)>(
        &::Newtonsoft::Json::JsonTextReader::ParseString)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3e8a808;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseString", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::Newtonsoft::Json::ReadType>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseReadString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(
        char16_t, ::Newtonsoft::Json::ReadType)>(
        &::Newtonsoft::Json::JsonTextReader::ParseReadString)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x3e8ad70;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseReadString", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::Newtonsoft::Json::ReadType>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.BlockCopyChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<char16_t, ::Array<char16_t> *>, int32_t,
                         ::ArrayW<char16_t, ::Array<char16_t> *>, int32_t,
                         int32_t)>(
        &::Newtonsoft::Json::JsonTextReader::BlockCopyChars)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3e8b168;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "BlockCopyChars", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<char16_t, ::Array<char16_t> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<char16_t, ::Array<char16_t> *>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ShiftBufferIfNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::ShiftBufferIfNeeded)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3e8a850;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ShiftBufferIfNeeded", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::Newtonsoft::Json::JsonTextReader::*)(bool)>(
        &::Newtonsoft::Json::JsonTextReader::ReadData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3e8b17c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ReadData", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.PrepareBufferForReadData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(bool, int32_t)>(
        &::Newtonsoft::Json::JsonTextReader::PrepareBufferForReadData)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x3e8b218;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "PrepareBufferForReadData", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::Newtonsoft::Json::JsonTextReader::*)(bool, int32_t)>(
        &::Newtonsoft::Json::JsonTextReader::ReadData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3e8b188;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ReadData", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.EnsureChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(int32_t, bool)>(
        &::Newtonsoft::Json::JsonTextReader::EnsureChars)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3e8b3b0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "EnsureChars", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ReadChars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(int32_t, bool)>(
        &::Newtonsoft::Json::JsonTextReader::ReadChars)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3e8b3d0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ReadChars", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::Read)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x3e8b440;

  inline static const ::MethodInfo *methodInfo() {

    static auto *___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            21));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadAsInt32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Nullable_1<int32_t> (
        ::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::ReadAsInt32)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3e8c268;

  inline static const ::MethodInfo *methodInfo() {

    static auto *___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            22));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadAsDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Nullable_1<::System::DateTime> (
        ::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::ReadAsDateTime)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3e8c6c8;

  inline static const ::MethodInfo *methodInfo() {

    static auto *___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            28));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadAsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::ReadAsString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3e8cc14;

  inline static const ::MethodInfo *methodInfo() {

    static auto *___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            23));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadAsBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<uint8_t, ::Array<uint8_t> *> (
        ::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::ReadAsBytes)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x3e8cc78;

  inline static const ::MethodInfo *methodInfo() {

    static auto *___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            24));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadStringValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object *(
        ::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(
        &::Newtonsoft::Json::JsonTextReader::ReadStringValue)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x3e8c758;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ReadStringValue", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::Newtonsoft::Json::ReadType>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.FinishReadQuotedStringValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object *(
        ::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(
        &::Newtonsoft::Json::JsonTextReader::FinishReadQuotedStringValue)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x3e8d528;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "FinishReadQuotedStringValue", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::Newtonsoft::Json::ReadType>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.CreateUnexpectedCharacterException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Newtonsoft::Json::JsonReaderException *(
        ::Newtonsoft::Json::JsonTextReader::*)(char16_t)>(
        &::Newtonsoft::Json::JsonTextReader::
            CreateUnexpectedCharacterException)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3e8d2a8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "CreateUnexpectedCharacterException",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadAsBoolean
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Nullable_1<bool> (
        ::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::ReadAsBoolean)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x3e8da08;

  inline static const ::MethodInfo *methodInfo() {

    static auto *___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            26));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ProcessValueComma
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::ProcessValueComma)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3e8d23c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ProcessValueComma", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadNumberValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object *(
        ::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(
        &::Newtonsoft::Json::JsonTextReader::ReadNumberValue)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x3e8c2f8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ReadNumberValue", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::Newtonsoft::Json::ReadType>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.FinishReadQuotedNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object *(
        ::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(
        &::Newtonsoft::Json::JsonTextReader::FinishReadQuotedNumber)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3e8df80;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "FinishReadQuotedNumber", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::Newtonsoft::Json::ReadType>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadAsDateTimeOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Nullable_1<::System::DateTimeOffset> (
        ::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::ReadAsDateTimeOffset)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3e8e108;

  inline static const ::MethodInfo *methodInfo() {

    static auto *___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            29));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadAsDecimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Nullable_1<::System::Decimal> (
        ::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::ReadAsDecimal)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3e8e1d4;

  inline static const ::MethodInfo *methodInfo() {

    static auto *___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            27));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadAsDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Nullable_1<double_t> (
        ::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::ReadAsDouble)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3e8e2a0;

  inline static const ::MethodInfo *methodInfo() {

    static auto *___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            25));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.HandleNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::HandleNull)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3e8d16c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "HandleNull", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadFinished
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::ReadFinished)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x3e8d3dc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ReadFinished", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadNullChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::ReadNullChar)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3e8d11c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ReadNullChar", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.EnsureBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::EnsureBuffer)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3e87da4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "EnsureBuffer", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadStringIntoBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(char16_t)>(
        &::Newtonsoft::Json::JsonTextReader::ReadStringIntoBuffer)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x3e8a904;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ReadStringIntoBuffer", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.FinishReadStringIntoBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(int32_t, int32_t,
                                                             int32_t)>(
        &::Newtonsoft::Json::JsonTextReader::FinishReadStringIntoBuffer)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3e8e490;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "FinishReadStringIntoBuffer", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.WriteCharToBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(char16_t, int32_t,
                                                             int32_t)>(
        &::Newtonsoft::Json::JsonTextReader::WriteCharToBuffer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3e8e440;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "WriteCharToBuffer", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ConvertUnicode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<char16_t (::Newtonsoft::Json::JsonTextReader::*)(bool)>(
        &::Newtonsoft::Json::JsonTextReader::ConvertUnicode)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x3e8e528;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ConvertUnicode", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseUnicode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<char16_t (::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::ParseUnicode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3e8e400;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseUnicode", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadNumberIntoBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::ReadNumberIntoBuffer)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3e8e67c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ReadNumberIntoBuffer", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadNumberCharIntoBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(char16_t,
                                                             int32_t)>(
        &::Newtonsoft::Json::JsonTextReader::ReadNumberCharIntoBuffer)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x3e8e700;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ReadNumberCharIntoBuffer", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ClearRecentString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::ClearRecentString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3e8e87c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ClearRecentString", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParsePostValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(bool)>(
        &::Newtonsoft::Json::JsonTextReader::ParsePostValue)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x3e8bc1c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParsePostValue", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::ParseObject)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x3e8ba8c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseObject", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::ParseProperty)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x3e8e888;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseProperty", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ValidIdentifierChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(char16_t)>(
        &::Newtonsoft::Json::JsonTextReader::ValidIdentifierChar)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e8eaac;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ValidIdentifierChar", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseUnquotedProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::ParseUnquotedProperty)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3e8eb28;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseUnquotedProperty", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ReadUnquotedPropertyReportIfDone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(
        char16_t, int32_t)>(&::Newtonsoft::Json::JsonTextReader::
                                ReadUnquotedPropertyReportIfDone)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x3e8ec1c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ReadUnquotedPropertyReportIfDone",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::ParseValue)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x3e8b66c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseValue", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ProcessLineFeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::ProcessLineFeed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3e8d3c0;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ProcessLineFeed", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ProcessCarriageReturn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(bool)>(
        &::Newtonsoft::Json::JsonTextReader::ProcessCarriageReturn)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3e8d378;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ProcessCarriageReturn", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.EatWhitespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::EatWhitespace)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x3e8bec8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "EatWhitespace", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseConstructor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::ParseConstructor)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x3e8ef1c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseConstructor", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(
        ::Newtonsoft::Json::ReadType)>(
        &::Newtonsoft::Json::JsonTextReader::ParseNumber)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3e8d804;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseNumber", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::Newtonsoft::Json::ReadType>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseReadNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(
        ::Newtonsoft::Json::ReadType, char16_t, int32_t)>(
        &::Newtonsoft::Json::JsonTextReader::ParseReadNumber)> {
  constexpr static std::size_t size = 0xfcc;
  constexpr static std::size_t addrs = 0x3e8f2e8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseReadNumber", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::Newtonsoft::Json::ReadType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ThrowReaderError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Newtonsoft::Json::JsonReaderException *(
        ::Newtonsoft::Json::JsonTextReader::*)(::StringW,
                                               ::System::Exception *)>(
        &::Newtonsoft::Json::JsonTextReader::ThrowReaderError)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e902b4;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ThrowReaderError", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Exception *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.BigIntegerParse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object *(*)(::StringW,
                                      ::System::Globalization::CultureInfo *)>(
        &::Newtonsoft::Json::JsonTextReader::BigIntegerParse)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3e90330;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "BigIntegerParse", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Globalization::CultureInfo *>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseComment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(bool)>(
        &::Newtonsoft::Json::JsonTextReader::ParseComment)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x3e8bfdc;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseComment", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.EndComment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)(bool, int32_t,
                                                             int32_t)>(
        &::Newtonsoft::Json::JsonTextReader::EndComment)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3e903b8;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "EndComment", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                int32_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.MatchValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(::StringW)>(
        &::Newtonsoft::Json::JsonTextReader::MatchValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3e90418;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "MatchValue", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.MatchValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(bool, ::StringW)>(
        &::Newtonsoft::Json::JsonTextReader::MatchValue)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3e90474;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "MatchValue", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.MatchValueWithTrailingSeparator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(::StringW)>(
        &::Newtonsoft::Json::JsonTextReader::MatchValueWithTrailingSeparator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3e8d86c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "MatchValueWithTrailingSeparator",
        std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::StringW>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.IsSeparator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)(char16_t)>(
        &::Newtonsoft::Json::JsonTextReader::IsSeparator)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3e90554;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "IsSeparator", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                char16_t>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseTrue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::ParseTrue)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3e8ed6c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseTrue", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.ParseNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::ParseNull)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3e8e354;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseNull", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseUndefined
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::ParseUndefined)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3e8f23c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseUndefined", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseFalse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::ParseFalse)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3e8ee44;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseFalse", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseNumberNegativeInfinity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object *(
        ::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(
        &::Newtonsoft::Json::JsonTextReader::ParseNumberNegativeInfinity)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e8d788;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseNumberNegativeInfinity", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::Newtonsoft::Json::ReadType>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseNumberNegativeInfinity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object *(::Newtonsoft::Json::JsonTextReader::
                                       *)(::Newtonsoft::Json::ReadType, bool)>(
        &::Newtonsoft::Json::JsonTextReader::ParseNumberNegativeInfinity)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x3e906ac;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseNumberNegativeInfinity", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::Newtonsoft::Json::ReadType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseNumberPositiveInfinity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object *(
        ::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(
        &::Newtonsoft::Json::JsonTextReader::ParseNumberPositiveInfinity)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e8d910;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseNumberPositiveInfinity", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::Newtonsoft::Json::ReadType>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseNumberPositiveInfinity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object *(::Newtonsoft::Json::JsonTextReader::
                                       *)(::Newtonsoft::Json::ReadType, bool)>(
        &::Newtonsoft::Json::JsonTextReader::ParseNumberPositiveInfinity)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x3e90800;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseNumberPositiveInfinity", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::Newtonsoft::Json::ReadType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseNumberNaN
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object *(
        ::Newtonsoft::Json::JsonTextReader::*)(::Newtonsoft::Json::ReadType)>(
        &::Newtonsoft::Json::JsonTextReader::ParseNumberNaN)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e8d98c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseNumberNaN", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::Newtonsoft::Json::ReadType>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.ParseNumberNaN
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object *(::Newtonsoft::Json::JsonTextReader::
                                       *)(::Newtonsoft::Json::ReadType, bool)>(
        &::Newtonsoft::Json::JsonTextReader::ParseNumberNaN)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x3e90954;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "ParseNumberNaN", std::span<const Il2CppClass *const, 0>(),
        ::std::array<const Il2CppType *, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::Newtonsoft::Json::ReadType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                bool>::get()})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonTextReader.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::Close)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3e90aa8;

  inline static const ::MethodInfo *methodInfo() {

    static auto *___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                ::Newtonsoft::Json::JsonTextReader *>::get(),
            31));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.HasLineInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::HasLineInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e90b08;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "HasLineInfo", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.get_LineNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::get_LineNumber)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3e90b10;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "get_LineNumber", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Newtonsoft::Json::JsonTextReader.get_LinePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::Newtonsoft::Json::JsonTextReader::*)()>(
        &::Newtonsoft::Json::JsonTextReader::get_LinePosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3e90b5c;

  inline static const ::MethodInfo *methodInfo() {
    static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
            ::Newtonsoft::Json::JsonTextReader *>::get(),
        "get_LinePosition", std::span<const Il2CppClass *const, 0>(),
        ::std::span<const Il2CppType *const, 0>())));
    return ___internal_method;
  }
};
constexpr bool &
Newtonsoft::Json::JsonTextReader::__cordl_internal_get__safeAsync() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  return this->____safeAsync;
}
constexpr bool const &
Newtonsoft::Json::JsonTextReader::__cordl_internal_get__safeAsync() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  return this->____safeAsync;
}
constexpr void
Newtonsoft::Json::JsonTextReader::__cordl_internal_set__safeAsync(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  this->____safeAsync = value;
}
constexpr ::System::IO::TextReader *&
Newtonsoft::Json::JsonTextReader::__cordl_internal_get__reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  return this->____reader;
}
constexpr ::System::IO::TextReader *const &
Newtonsoft::Json::JsonTextReader::__cordl_internal_get__reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  return this->____reader;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__reader(
    ::System::IO::TextReader *value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  il2cpp_functions::gc_wbarrier_set_field(
      this, static_cast<void **>(static_cast<void *>(&this->____reader)),
      cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<char16_t, ::Array<char16_t> *> &
Newtonsoft::Json::JsonTextReader::__cordl_internal_get__chars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  return this->____chars;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t> *> const &
Newtonsoft::Json::JsonTextReader::__cordl_internal_get__chars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  return this->____chars;
}
constexpr void Newtonsoft::Json::JsonTextReader::__cordl_internal_set__chars(
    ::ArrayW<char16_t, ::Array<char16_t> *> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  il2cpp_functions::gc_wbarrier_set_field(
      this, static_cast<void **>(static_cast<void *>(&this->____chars)),
      cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t &
Newtonsoft::Json::JsonTextReader::__cordl_internal_get__charsUsed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  return this->____charsUsed;
}
constexpr int32_t const &
Newtonsoft::Json::JsonTextReader::__cordl_internal_get__charsUsed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  return this->____charsUsed;
}
constexpr void
Newtonsoft::Json::JsonTextReader::__cordl_internal_set__charsUsed(
    int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  this->____charsUsed = value;
}
constexpr int32_t &
Newtonsoft::Json::JsonTextReader::__cordl_internal_get__charPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  return this->____charPos;
}
constexpr int32_t const &
Newtonsoft::Json::JsonTextReader::__cordl_internal_get__charPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  return this->____charPos;
}
constexpr void
Newtonsoft::Json::JsonTextReader::__cordl_internal_set__charPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  this->____charPos = value;
}
constexpr int32_t &
Newtonsoft::Json::JsonTextReader::__cordl_internal_get__lineStartPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  return this->____lineStartPos;
}
constexpr int32_t const &
Newtonsoft::Json::JsonTextReader::__cordl_internal_get__lineStartPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  return this->____lineStartPos;
}
constexpr void
Newtonsoft::Json::JsonTextReader::__cordl_internal_set__lineStartPos(
    int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  this->____lineStartPos = value;
}
constexpr int32_t &
Newtonsoft::Json::JsonTextReader::__cordl_internal_get__lineNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  return this->____lineNumber;
}
constexpr int32_t const &
Newtonsoft::Json::JsonTextReader::__cordl_internal_get__lineNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  return this->____lineNumber;
}
constexpr void
Newtonsoft::Json::JsonTextReader::__cordl_internal_set__lineNumber(
    int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  this->____lineNumber = value;
}
constexpr bool &
Newtonsoft::Json::JsonTextReader::__cordl_internal_get__isEndOfFile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  return this->____isEndOfFile;
}
constexpr bool const &
Newtonsoft::Json::JsonTextReader::__cordl_internal_get__isEndOfFile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  return this->____isEndOfFile;
}
constexpr void
Newtonsoft::Json::JsonTextReader::__cordl_internal_set__isEndOfFile(
    bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  this->____isEndOfFile = value;
}
constexpr ::Newtonsoft::Json::Utilities::StringBuffer &
Newtonsoft::Json::JsonTextReader::__cordl_internal_get__stringBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  return this->____stringBuffer;
}
constexpr ::Newtonsoft::Json::Utilities::StringBuffer const &
Newtonsoft::Json::JsonTextReader::__cordl_internal_get__stringBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  return this->____stringBuffer;
}
constexpr void
Newtonsoft::Json::JsonTextReader::__cordl_internal_set__stringBuffer(
    ::Newtonsoft::Json::Utilities::StringBuffer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  this->____stringBuffer = value;
}
constexpr ::Newtonsoft::Json::Utilities::StringReference &
Newtonsoft::Json::JsonTextReader::__cordl_internal_get__stringReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  return this->____stringReference;
}
constexpr ::Newtonsoft::Json::Utilities::StringReference const &
Newtonsoft::Json::JsonTextReader::__cordl_internal_get__stringReference()
    const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  return this->____stringReference;
}
constexpr void
Newtonsoft::Json::JsonTextReader::__cordl_internal_set__stringReference(
    ::Newtonsoft::Json::Utilities::StringReference value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  this->____stringReference = value;
}
constexpr ::Newtonsoft::Json::IArrayPool_1<char16_t> *&
Newtonsoft::Json::JsonTextReader::__cordl_internal_get__arrayPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  return this->____arrayPool;
}
constexpr ::Newtonsoft::Json::IArrayPool_1<char16_t> *const &
Newtonsoft::Json::JsonTextReader::__cordl_internal_get__arrayPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  return this->____arrayPool;
}
constexpr void
Newtonsoft::Json::JsonTextReader::__cordl_internal_set__arrayPool(
    ::Newtonsoft::Json::IArrayPool_1<char16_t> *value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  il2cpp_functions::gc_wbarrier_set_field(
      this, static_cast<void **>(static_cast<void *>(&this->____arrayPool)),
      cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::JsonNameTable *&Newtonsoft::Json::JsonTextReader::
    __cordl_internal_get__PropertyNameTable_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  return this->____PropertyNameTable_k__BackingField;
}
constexpr ::Newtonsoft::Json::JsonNameTable *const &
Newtonsoft::Json::JsonTextReader::
    __cordl_internal_get__PropertyNameTable_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  return this->____PropertyNameTable_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonTextReader::
    __cordl_internal_set__PropertyNameTable_k__BackingField(
        ::Newtonsoft::Json::JsonNameTable *value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const *>(this));
  il2cpp_functions::gc_wbarrier_set_field(
      this,
      static_cast<void **>(
          static_cast<void *>(&this->____PropertyNameTable_k__BackingField)),
      cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Threading::Tasks::Task_1<bool> *
Newtonsoft::Json::JsonTextReader::ReadAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  auto *___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(
          reinterpret_cast<Il2CppObject *>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      5)));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<bool> *, false>(
      this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool> *
Newtonsoft::Json::JsonTextReader::DoReadAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "DoReadAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<bool> *, false>(
      this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool> *
Newtonsoft::Json::JsonTextReader::DoReadAsync(
    ::System::Threading::Tasks::Task_1<bool> *task,
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "DoReadAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::Tasks::Task_1<bool> *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<bool> *, false>(
      this, ___internal_method, task, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool> *
Newtonsoft::Json::JsonTextReader::ParsePostValueAsync(
    bool ignoreComments,
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParsePostValueAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<bool> *, false>(
      this, ___internal_method, ignoreComments, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool> *
Newtonsoft::Json::JsonTextReader::ReadFromFinishedAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ReadFromFinishedAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<bool> *, false>(
      this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<int32_t> *
Newtonsoft::Json::JsonTextReader::ReadDataAsync(
    bool append, ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ReadDataAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<int32_t> *, false>(
      this, ___internal_method, append, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<int32_t> *
Newtonsoft::Json::JsonTextReader::ReadDataAsync(
    bool append, int32_t charsRequired,
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ReadDataAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<int32_t> *, false>(
      this, ___internal_method, append, charsRequired, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool> *
Newtonsoft::Json::JsonTextReader::ParseValueAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseValueAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<bool> *, false>(
      this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task *
Newtonsoft::Json::JsonTextReader::ReadStringIntoBufferAsync(
    char16_t quote, ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ReadStringIntoBufferAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task *,
                                             false>(this, ___internal_method,
                                                    quote, cancellationToken);
}
inline ::System::Threading::Tasks::Task *
Newtonsoft::Json::JsonTextReader::ProcessCarriageReturnAsync(
    bool append, ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ProcessCarriageReturnAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task *,
                                             false>(this, ___internal_method,
                                                    append, cancellationToken);
}
inline ::System::Threading::Tasks::Task *
Newtonsoft::Json::JsonTextReader::ProcessCarriageReturnAsync(
    ::System::Threading::Tasks::Task_1<bool> *task) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ProcessCarriageReturnAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::Tasks::Task_1<bool> *>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task *,
                                             false>(this, ___internal_method,
                                                    task);
}
inline ::System::Threading::Tasks::Task_1<char16_t> *
Newtonsoft::Json::JsonTextReader::ParseUnicodeAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseUnicodeAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<char16_t> *, false>(
      this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool> *
Newtonsoft::Json::JsonTextReader::EnsureCharsAsync(
    int32_t relativePosition, bool append,
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "EnsureCharsAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<bool> *, false>(
      this, ___internal_method, relativePosition, append, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool> *
Newtonsoft::Json::JsonTextReader::ReadCharsAsync(
    int32_t relativePosition, bool append,
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ReadCharsAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<bool> *, false>(
      this, ___internal_method, relativePosition, append, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool> *
Newtonsoft::Json::JsonTextReader::ParseObjectAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseObjectAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<bool> *, false>(
      this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task *
Newtonsoft::Json::JsonTextReader::ParseCommentAsync(
    bool setToken, ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseCommentAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task *,
                                             false>(
      this, ___internal_method, setToken, cancellationToken);
}
inline ::System::Threading::Tasks::Task *
Newtonsoft::Json::JsonTextReader::EatWhitespaceAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "EatWhitespaceAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task *,
                                             false>(this, ___internal_method,
                                                    cancellationToken);
}
inline ::System::Threading::Tasks::Task *
Newtonsoft::Json::JsonTextReader::ParseStringAsync(
    char16_t quote, ::Newtonsoft::Json::ReadType readType,
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseStringAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::Newtonsoft::Json::ReadType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task *,
                                             false>(
      this, ___internal_method, quote, readType, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool> *
Newtonsoft::Json::JsonTextReader::MatchValueAsync(
    ::StringW value, ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "MatchValueAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<bool> *, false>(
      this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool> *
Newtonsoft::Json::JsonTextReader::MatchValueWithTrailingSeparatorAsync(
    ::StringW value, ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "MatchValueWithTrailingSeparatorAsync",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<bool> *, false>(
      this, ___internal_method, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task *
Newtonsoft::Json::JsonTextReader::MatchAndSetAsync(
    ::StringW value, ::Newtonsoft::Json::JsonToken newToken,
    ::System::Object *tokenValue,
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "MatchAndSetAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::Newtonsoft::Json::JsonToken>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Object *>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task *,
                                             false>(
      this, ___internal_method, value, newToken, tokenValue, cancellationToken);
}
inline ::System::Threading::Tasks::Task *
Newtonsoft::Json::JsonTextReader::ParseTrueAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseTrueAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task *,
                                             false>(this, ___internal_method,
                                                    cancellationToken);
}
inline ::System::Threading::Tasks::Task *
Newtonsoft::Json::JsonTextReader::ParseFalseAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseFalseAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task *,
                                             false>(this, ___internal_method,
                                                    cancellationToken);
}
inline ::System::Threading::Tasks::Task *
Newtonsoft::Json::JsonTextReader::ParseNullAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseNullAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task *,
                                             false>(this, ___internal_method,
                                                    cancellationToken);
}
inline ::System::Threading::Tasks::Task *
Newtonsoft::Json::JsonTextReader::ParseConstructorAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseConstructorAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task *,
                                             false>(this, ___internal_method,
                                                    cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Object *> *
Newtonsoft::Json::JsonTextReader::ParseNumberNaNAsync(
    ::Newtonsoft::Json::ReadType readType,
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseNumberNaNAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::Newtonsoft::Json::ReadType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<::System::Object *> *, false>(
      this, ___internal_method, readType, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Object *> *
Newtonsoft::Json::JsonTextReader::ParseNumberPositiveInfinityAsync(
    ::Newtonsoft::Json::ReadType readType,
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseNumberPositiveInfinityAsync",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::Newtonsoft::Json::ReadType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<::System::Object *> *, false>(
      this, ___internal_method, readType, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Object *> *
Newtonsoft::Json::JsonTextReader::ParseNumberNegativeInfinityAsync(
    ::Newtonsoft::Json::ReadType readType,
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseNumberNegativeInfinityAsync",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::Newtonsoft::Json::ReadType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<::System::Object *> *, false>(
      this, ___internal_method, readType, cancellationToken);
}
inline ::System::Threading::Tasks::Task *
Newtonsoft::Json::JsonTextReader::ParseNumberAsync(
    ::Newtonsoft::Json::ReadType readType,
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseNumberAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::Newtonsoft::Json::ReadType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task *,
                                             false>(
      this, ___internal_method, readType, cancellationToken);
}
inline ::System::Threading::Tasks::Task *
Newtonsoft::Json::JsonTextReader::ParseUndefinedAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseUndefinedAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task *,
                                             false>(this, ___internal_method,
                                                    cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool> *
Newtonsoft::Json::JsonTextReader::ParsePropertyAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParsePropertyAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<bool> *, false>(
      this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task *
Newtonsoft::Json::JsonTextReader::ReadNumberIntoBufferAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ReadNumberIntoBufferAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task *,
                                             false>(this, ___internal_method,
                                                    cancellationToken);
}
inline ::System::Threading::Tasks::Task *
Newtonsoft::Json::JsonTextReader::ParseUnquotedPropertyAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseUnquotedPropertyAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task *,
                                             false>(this, ___internal_method,
                                                    cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool> *
Newtonsoft::Json::JsonTextReader::ReadNullCharAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ReadNullCharAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<bool> *, false>(
      this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task *
Newtonsoft::Json::JsonTextReader::HandleNullAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "HandleNullAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task *,
                                             false>(this, ___internal_method,
                                                    cancellationToken);
}
inline ::System::Threading::Tasks::Task *
Newtonsoft::Json::JsonTextReader::ReadFinishedAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ReadFinishedAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task *,
                                             false>(this, ___internal_method,
                                                    cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Object *> *
Newtonsoft::Json::JsonTextReader::ReadStringValueAsync(
    ::Newtonsoft::Json::ReadType readType,
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ReadStringValueAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::Newtonsoft::Json::ReadType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<::System::Object *> *, false>(
      this, ___internal_method, readType, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Object *> *
Newtonsoft::Json::JsonTextReader::ReadNumberValueAsync(
    ::Newtonsoft::Json::ReadType readType,
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ReadNumberValueAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::Newtonsoft::Json::ReadType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<::System::Object *> *, false>(
      this, ___internal_method, readType, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<bool>> *
Newtonsoft::Json::JsonTextReader::ReadAsBooleanAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  auto *___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(
          reinterpret_cast<Il2CppObject *>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      6)));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<::System::Nullable_1<bool>> *, false>(
      this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<bool>> *
Newtonsoft::Json::JsonTextReader::DoReadAsBooleanAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "DoReadAsBooleanAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<::System::Nullable_1<bool>> *, false>(
      this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<
    ::ArrayW<uint8_t, ::Array<uint8_t> *>> *
Newtonsoft::Json::JsonTextReader::ReadAsBytesAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  auto *___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(
          reinterpret_cast<Il2CppObject *>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      7)));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t> *>>
          *,
      false>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<
    ::ArrayW<uint8_t, ::Array<uint8_t> *>> *
Newtonsoft::Json::JsonTextReader::DoReadAsBytesAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "DoReadAsBytesAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t> *>>
          *,
      false>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task *
Newtonsoft::Json::JsonTextReader::ReadIntoWrappedTypeObjectAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ReadIntoWrappedTypeObjectAsync",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task *,
                                             false>(this, ___internal_method,
                                                    cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<
    ::System::Nullable_1<::System::DateTime>> *
Newtonsoft::Json::JsonTextReader::ReadAsDateTimeAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  auto *___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(
          reinterpret_cast<Il2CppObject *>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      8)));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<
          ::System::Nullable_1<::System::DateTime>> *,
      false>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<
    ::System::Nullable_1<::System::DateTime>> *
Newtonsoft::Json::JsonTextReader::DoReadAsDateTimeAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "DoReadAsDateTimeAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<
          ::System::Nullable_1<::System::DateTime>> *,
      false>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<
    ::System::Nullable_1<::System::DateTimeOffset>> *
Newtonsoft::Json::JsonTextReader::ReadAsDateTimeOffsetAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  auto *___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(
          reinterpret_cast<Il2CppObject *>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      9)));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<
          ::System::Nullable_1<::System::DateTimeOffset>> *,
      false>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<
    ::System::Nullable_1<::System::DateTimeOffset>> *
Newtonsoft::Json::JsonTextReader::DoReadAsDateTimeOffsetAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "DoReadAsDateTimeOffsetAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<
          ::System::Nullable_1<::System::DateTimeOffset>> *,
      false>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<
    ::System::Nullable_1<::System::Decimal>> *
Newtonsoft::Json::JsonTextReader::ReadAsDecimalAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  auto *___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(
          reinterpret_cast<Il2CppObject *>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      10)));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<
          ::System::Nullable_1<::System::Decimal>> *,
      false>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<
    ::System::Nullable_1<::System::Decimal>> *
Newtonsoft::Json::JsonTextReader::DoReadAsDecimalAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "DoReadAsDecimalAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<
          ::System::Nullable_1<::System::Decimal>> *,
      false>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<double_t>> *
Newtonsoft::Json::JsonTextReader::ReadAsDoubleAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  auto *___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(
          reinterpret_cast<Il2CppObject *>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      11)));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<::System::Nullable_1<double_t>> *,
      false>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<double_t>> *
Newtonsoft::Json::JsonTextReader::DoReadAsDoubleAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "DoReadAsDoubleAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<::System::Nullable_1<double_t>> *,
      false>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>> *
Newtonsoft::Json::JsonTextReader::ReadAsInt32Async(
    ::System::Threading::CancellationToken cancellationToken) {
  auto *___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(
          reinterpret_cast<Il2CppObject *>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      12)));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>> *,
      false>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>> *
Newtonsoft::Json::JsonTextReader::DoReadAsInt32Async(
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "DoReadAsInt32Async", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<::System::Nullable_1<int32_t>> *,
      false>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::StringW> *
Newtonsoft::Json::JsonTextReader::ReadAsStringAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  auto *___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(
          reinterpret_cast<Il2CppObject *>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      13)));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<::StringW> *, false>(
      this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::StringW> *
Newtonsoft::Json::JsonTextReader::DoReadAsStringAsync(
    ::System::Threading::CancellationToken cancellationToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "DoReadAsStringAsync", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Threading::CancellationToken>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<::StringW> *, false>(
      this, ___internal_method, cancellationToken);
}
inline void
Newtonsoft::Json::JsonTextReader::_ctor(::System::IO::TextReader *reader) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      ".ctor", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::IO::TextReader *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, reader);
}
inline ::Newtonsoft::Json::JsonNameTable *
Newtonsoft::Json::JsonTextReader::get_PropertyNameTable() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "get_PropertyNameTable", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::Newtonsoft::Json::JsonNameTable *, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::set_PropertyNameTable(
    ::Newtonsoft::Json::JsonNameTable *value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "set_PropertyNameTable", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::Newtonsoft::Json::JsonNameTable *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value);
}
inline ::Newtonsoft::Json::IArrayPool_1<char16_t> *
Newtonsoft::Json::JsonTextReader::get_ArrayPool() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "get_ArrayPool", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::Newtonsoft::Json::IArrayPool_1<char16_t> *, false>(this,
                                                           ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::set_ArrayPool(
    ::Newtonsoft::Json::IArrayPool_1<char16_t> *value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "set_ArrayPool", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::Newtonsoft::Json::IArrayPool_1<char16_t> *>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextReader::EnsureBufferNotEmpty() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "EnsureBufferNotEmpty", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::SetNewLine(bool hasNextChar) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "SetNewLine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, hasNextChar);
}
inline void Newtonsoft::Json::JsonTextReader::OnNewLine(int32_t pos) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "OnNewLine", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, pos);
}
inline void Newtonsoft::Json::JsonTextReader::ParseString(
    char16_t quote, ::Newtonsoft::Json::ReadType readType) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseString", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::Newtonsoft::Json::ReadType>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, quote, readType);
}
inline void Newtonsoft::Json::JsonTextReader::ParseReadString(
    char16_t quote, ::Newtonsoft::Json::ReadType readType) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseReadString", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::Newtonsoft::Json::ReadType>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, quote, readType);
}
inline void Newtonsoft::Json::JsonTextReader::BlockCopyChars(
    ::ArrayW<char16_t, ::Array<char16_t> *> src, int32_t srcOffset,
    ::ArrayW<char16_t, ::Array<char16_t> *> dst, int32_t dstOffset,
    int32_t count) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "BlockCopyChars", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<char16_t, ::Array<char16_t> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<char16_t, ::Array<char16_t> *>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      nullptr, ___internal_method, src, srcOffset, dst, dstOffset, count);
}
inline void Newtonsoft::Json::JsonTextReader::ShiftBufferIfNeeded() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ShiftBufferIfNeeded", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline int32_t Newtonsoft::Json::JsonTextReader::ReadData(bool append) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ReadData", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, append);
}
inline void Newtonsoft::Json::JsonTextReader::PrepareBufferForReadData(
    bool append, int32_t charsRequired) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "PrepareBufferForReadData", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, append, charsRequired);
}
inline int32_t
Newtonsoft::Json::JsonTextReader::ReadData(bool append, int32_t charsRequired) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ReadData", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method, append, charsRequired);
}
inline bool
Newtonsoft::Json::JsonTextReader::EnsureChars(int32_t relativePosition,
                                              bool append) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "EnsureChars", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      this, ___internal_method, relativePosition, append);
}
inline bool
Newtonsoft::Json::JsonTextReader::ReadChars(int32_t relativePosition,
                                            bool append) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ReadChars", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      this, ___internal_method, relativePosition, append);
}
inline bool Newtonsoft::Json::JsonTextReader::Read() {
  auto *___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(
          reinterpret_cast<Il2CppObject *>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      21)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this,
                                                          ___internal_method);
}
inline ::System::Nullable_1<int32_t>
Newtonsoft::Json::JsonTextReader::ReadAsInt32() {
  auto *___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(
          reinterpret_cast<Il2CppObject *>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      22)));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>,
                                             false>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::DateTime>
Newtonsoft::Json::JsonTextReader::ReadAsDateTime() {
  auto *___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(
          reinterpret_cast<Il2CppObject *>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      28)));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Nullable_1<::System::DateTime>, false>(this,
                                                       ___internal_method);
}
inline ::StringW Newtonsoft::Json::JsonTextReader::ReadAsString() {
  auto *___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(
          reinterpret_cast<Il2CppObject *>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      23)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(
      this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t> *>
Newtonsoft::Json::JsonTextReader::ReadAsBytes() {
  auto *___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(
          reinterpret_cast<Il2CppObject *>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      24)));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<uint8_t, ::Array<uint8_t> *>, false>(this, ___internal_method);
}
inline ::System::Object *Newtonsoft::Json::JsonTextReader::ReadStringValue(
    ::Newtonsoft::Json::ReadType readType) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ReadStringValue", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::Newtonsoft::Json::ReadType>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Object *, false>(
      this, ___internal_method, readType);
}
inline ::System::Object *
Newtonsoft::Json::JsonTextReader::FinishReadQuotedStringValue(
    ::Newtonsoft::Json::ReadType readType) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "FinishReadQuotedStringValue", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::Newtonsoft::Json::ReadType>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Object *, false>(
      this, ___internal_method, readType);
}
inline ::Newtonsoft::Json::JsonReaderException *
Newtonsoft::Json::JsonTextReader::CreateUnexpectedCharacterException(
    char16_t c) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "CreateUnexpectedCharacterException",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::Newtonsoft::Json::JsonReaderException *, false>(this,
                                                        ___internal_method, c);
}
inline ::System::Nullable_1<bool>
Newtonsoft::Json::JsonTextReader::ReadAsBoolean() {
  auto *___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(
          reinterpret_cast<Il2CppObject *>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      26)));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>, false>(
      this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ProcessValueComma() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ProcessValueComma", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline ::System::Object *Newtonsoft::Json::JsonTextReader::ReadNumberValue(
    ::Newtonsoft::Json::ReadType readType) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ReadNumberValue", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::Newtonsoft::Json::ReadType>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Object *, false>(
      this, ___internal_method, readType);
}
inline ::System::Object *
Newtonsoft::Json::JsonTextReader::FinishReadQuotedNumber(
    ::Newtonsoft::Json::ReadType readType) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "FinishReadQuotedNumber", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::Newtonsoft::Json::ReadType>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Object *, false>(
      this, ___internal_method, readType);
}
inline ::System::Nullable_1<::System::DateTimeOffset>
Newtonsoft::Json::JsonTextReader::ReadAsDateTimeOffset() {
  auto *___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(
          reinterpret_cast<Il2CppObject *>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      29)));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Nullable_1<::System::DateTimeOffset>, false>(
      this, ___internal_method);
}
inline ::System::Nullable_1<::System::Decimal>
Newtonsoft::Json::JsonTextReader::ReadAsDecimal() {
  auto *___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(
          reinterpret_cast<Il2CppObject *>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      27)));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Nullable_1<::System::Decimal>, false>(this, ___internal_method);
}
inline ::System::Nullable_1<double_t>
Newtonsoft::Json::JsonTextReader::ReadAsDouble() {
  auto *___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(
          reinterpret_cast<Il2CppObject *>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      25)));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<double_t>,
                                             false>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::HandleNull() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "HandleNull", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ReadFinished() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ReadFinished", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline bool Newtonsoft::Json::JsonTextReader::ReadNullChar() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ReadNullChar", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this,
                                                          ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::EnsureBuffer() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "EnsureBuffer", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void
Newtonsoft::Json::JsonTextReader::ReadStringIntoBuffer(char16_t quote) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ReadStringIntoBuffer", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, quote);
}
inline void Newtonsoft::Json::JsonTextReader::FinishReadStringIntoBuffer(
    int32_t charPos, int32_t initialPosition, int32_t lastWritePosition) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "FinishReadStringIntoBuffer", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, charPos, initialPosition, lastWritePosition);
}
inline void Newtonsoft::Json::JsonTextReader::WriteCharToBuffer(
    char16_t writeChar, int32_t lastWritePosition, int32_t writeToPosition) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "WriteCharToBuffer", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, writeChar, lastWritePosition, writeToPosition);
}
inline char16_t
Newtonsoft::Json::JsonTextReader::ConvertUnicode(bool enoughChars) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ConvertUnicode", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(
      this, ___internal_method, enoughChars);
}
inline char16_t Newtonsoft::Json::JsonTextReader::ParseUnicode() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseUnicode", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(
      this, ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ReadNumberIntoBuffer() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ReadNumberIntoBuffer", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline bool
Newtonsoft::Json::JsonTextReader::ReadNumberCharIntoBuffer(char16_t currentChar,
                                                           int32_t charPos) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ReadNumberCharIntoBuffer", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      this, ___internal_method, currentChar, charPos);
}
inline void Newtonsoft::Json::JsonTextReader::ClearRecentString() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ClearRecentString", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline bool
Newtonsoft::Json::JsonTextReader::ParsePostValue(bool ignoreComments) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParsePostValue", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      this, ___internal_method, ignoreComments);
}
inline bool Newtonsoft::Json::JsonTextReader::ParseObject() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseObject", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this,
                                                          ___internal_method);
}
inline bool Newtonsoft::Json::JsonTextReader::ParseProperty() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseProperty", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this,
                                                          ___internal_method);
}
inline bool
Newtonsoft::Json::JsonTextReader::ValidIdentifierChar(char16_t value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ValidIdentifierChar", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonTextReader::ParseUnquotedProperty() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseUnquotedProperty", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline bool Newtonsoft::Json::JsonTextReader::ReadUnquotedPropertyReportIfDone(
    char16_t currentChar, int32_t initialPosition) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ReadUnquotedPropertyReportIfDone",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      this, ___internal_method, currentChar, initialPosition);
}
inline bool Newtonsoft::Json::JsonTextReader::ParseValue() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseValue", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this,
                                                          ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ProcessLineFeed() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ProcessLineFeed", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void
Newtonsoft::Json::JsonTextReader::ProcessCarriageReturn(bool append) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ProcessCarriageReturn", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, append);
}
inline void Newtonsoft::Json::JsonTextReader::EatWhitespace() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "EatWhitespace", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ParseConstructor() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseConstructor", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ParseNumber(
    ::Newtonsoft::Json::ReadType readType) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseNumber", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::Newtonsoft::Json::ReadType>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, readType);
}
inline void Newtonsoft::Json::JsonTextReader::ParseReadNumber(
    ::Newtonsoft::Json::ReadType readType, char16_t firstChar,
    int32_t initialPosition) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseReadNumber", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::Newtonsoft::Json::ReadType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, readType, firstChar, initialPosition);
}
inline ::Newtonsoft::Json::JsonReaderException *
Newtonsoft::Json::JsonTextReader::ThrowReaderError(::StringW message,
                                                   ::System::Exception *ex) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ThrowReaderError", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Exception *>::get()})));
  return ::cordl_internals::RunMethodRethrow<
      ::Newtonsoft::Json::JsonReaderException *, false>(
      this, ___internal_method, message, ex);
}
inline ::System::Object *Newtonsoft::Json::JsonTextReader::BigIntegerParse(
    ::StringW number, ::System::Globalization::CultureInfo *culture) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "BigIntegerParse", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Globalization::CultureInfo *>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Object *, false>(
      nullptr, ___internal_method, number, culture);
}
inline void Newtonsoft::Json::JsonTextReader::ParseComment(bool setToken) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseComment", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, setToken);
}
inline void Newtonsoft::Json::JsonTextReader::EndComment(
    bool setToken, int32_t initialPosition, int32_t endPosition) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "EndComment", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              int32_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<void, false>(
      this, ___internal_method, setToken, initialPosition, endPosition);
}
inline bool Newtonsoft::Json::JsonTextReader::MatchValue(::StringW value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "MatchValue", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      this, ___internal_method, value);
}
inline bool Newtonsoft::Json::JsonTextReader::MatchValue(bool enoughChars,
                                                         ::StringW value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "MatchValue", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      this, ___internal_method, enoughChars, value);
}
inline bool Newtonsoft::Json::JsonTextReader::MatchValueWithTrailingSeparator(
    ::StringW value) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "MatchValueWithTrailingSeparator",
      std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::StringW>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      this, ___internal_method, value);
}
inline bool Newtonsoft::Json::JsonTextReader::IsSeparator(char16_t c) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "IsSeparator", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              char16_t>::get()})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(
      this, ___internal_method, c);
}
inline void Newtonsoft::Json::JsonTextReader::ParseTrue() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseTrue", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ParseNull() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseNull", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ParseUndefined() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseUndefined", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline void Newtonsoft::Json::JsonTextReader::ParseFalse() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseFalse", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline ::System::Object *
Newtonsoft::Json::JsonTextReader::ParseNumberNegativeInfinity(
    ::Newtonsoft::Json::ReadType readType) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseNumberNegativeInfinity", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::Newtonsoft::Json::ReadType>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Object *, false>(
      this, ___internal_method, readType);
}
inline ::System::Object *
Newtonsoft::Json::JsonTextReader::ParseNumberNegativeInfinity(
    ::Newtonsoft::Json::ReadType readType, bool matched) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseNumberNegativeInfinity", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::Newtonsoft::Json::ReadType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Object *, false>(
      this, ___internal_method, readType, matched);
}
inline ::System::Object *
Newtonsoft::Json::JsonTextReader::ParseNumberPositiveInfinity(
    ::Newtonsoft::Json::ReadType readType) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseNumberPositiveInfinity", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::Newtonsoft::Json::ReadType>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Object *, false>(
      this, ___internal_method, readType);
}
inline ::System::Object *
Newtonsoft::Json::JsonTextReader::ParseNumberPositiveInfinity(
    ::Newtonsoft::Json::ReadType readType, bool matched) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseNumberPositiveInfinity", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::Newtonsoft::Json::ReadType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Object *, false>(
      this, ___internal_method, readType, matched);
}
inline ::System::Object *Newtonsoft::Json::JsonTextReader::ParseNumberNaN(
    ::Newtonsoft::Json::ReadType readType) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseNumberNaN", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::Newtonsoft::Json::ReadType>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Object *, false>(
      this, ___internal_method, readType);
}
inline ::System::Object *Newtonsoft::Json::JsonTextReader::ParseNumberNaN(
    ::Newtonsoft::Json::ReadType readType, bool matched) {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "ParseNumberNaN", std::span<const Il2CppClass *const, 0>(),
      ::std::array<const Il2CppType *, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::Newtonsoft::Json::ReadType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              bool>::get()})));
  return ::cordl_internals::RunMethodRethrow<::System::Object *, false>(
      this, ___internal_method, readType, matched);
}
inline void Newtonsoft::Json::JsonTextReader::Close() {
  auto *___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(
          reinterpret_cast<Il2CppObject *>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      31)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this,
                                                          ___internal_method);
}
inline bool Newtonsoft::Json::JsonTextReader::HasLineInfo() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "HasLineInfo", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this,
                                                          ___internal_method);
}
inline int32_t Newtonsoft::Json::JsonTextReader::get_LineNumber() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "get_LineNumber", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method);
}
inline int32_t Newtonsoft::Json::JsonTextReader::get_LinePosition() {
  static auto *___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
          ::Newtonsoft::Json::JsonTextReader *>::get(),
      "get_LinePosition", std::span<const Il2CppClass *const, 0>(),
      ::std::span<const Il2CppType *const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(
      this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonTextReader *
Newtonsoft::Json::JsonTextReader::New_ctor(::System::IO::TextReader *reader) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::Newtonsoft::Json::JsonTextReader *>(
          reader));
}
/// @brief Convert operator to "::Newtonsoft::Json::IJsonLineInfo"
constexpr Newtonsoft::Json::JsonTextReader::operator ::Newtonsoft::Json::
    IJsonLineInfo *() noexcept {
  return static_cast<::Newtonsoft::Json::IJsonLineInfo *>(
      static_cast<void *>(this));
}
/// @brief Convert to "::Newtonsoft::Json::IJsonLineInfo"
constexpr ::Newtonsoft::Json::IJsonLineInfo *Newtonsoft::Json::JsonTextReader::
    i___Newtonsoft__Json__IJsonLineInfo() noexcept {
  return static_cast<::Newtonsoft::Json::IJsonLineInfo *>(
      static_cast<void *>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonTextReader::JsonTextReader() {}
