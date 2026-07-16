#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLUtils.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLUtils_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLUtils_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> constexpr ::StringW& OculusStudios::GraphQL::Client::GraphQLUtils___c__DisplayClass6_0_1<T>::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
template <typename T> constexpr ::StringW const& OculusStudios::GraphQL::Client::GraphQLUtils___c__DisplayClass6_0_1<T>::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
template <typename T> constexpr void OculusStudios::GraphQL::Client::GraphQLUtils___c__DisplayClass6_0_1<T>::__cordl_internal_set_data(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
template <typename T> inline void OculusStudios::GraphQL::Client::GraphQLUtils___c__DisplayClass6_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLUtils___c__DisplayClass6_0_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline T OculusStudios::GraphQL::Client::GraphQLUtils___c__DisplayClass6_0_1<T>::_DeserializeAsync_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLUtils___c__DisplayClass6_0_1<T>*>(), { "<DeserializeAsync>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline ::OculusStudios::GraphQL::Client::GraphQLUtils___c__DisplayClass6_0_1<T>* OculusStudios::GraphQL::Client::GraphQLUtils___c__DisplayClass6_0_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::GraphQLUtils___c__DisplayClass6_0_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::OculusStudios::GraphQL::Client::GraphQLUtils___c__DisplayClass6_0_1<T>::GraphQLUtils___c__DisplayClass6_0_1() {}
template <typename T> inline void OculusStudios::GraphQL::Client::GraphQLUtils__DeserializeAsync_d__6_1<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLUtils__DeserializeAsync_d__6_1<T>>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline void OculusStudios::GraphQL::Client::GraphQLUtils__DeserializeAsync_d__6_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLUtils__DeserializeAsync_d__6_1<T>>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr OculusStudios::GraphQL::Client::GraphQLUtils__DeserializeAsync_d__6_1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::GraphQL::Client::GraphQLUtils__DeserializeAsync_d__6_1<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty: "::StringW", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<T>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::OculusStudios::GraphQL::Client::GraphQLUtils__DeserializeAsync_d__6_1<T>::GraphQLUtils__DeserializeAsync_d__6_1(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, ::StringW data,
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<T> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->data = data;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T> constexpr ::OculusStudios::GraphQL::Client::GraphQLUtils__DeserializeAsync_d__6_1<T>::GraphQLUtils__DeserializeAsync_d__6_1() {}
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLUtils.ConvertObject2Json
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Object*)>(&::OculusStudios::GraphQL::Client::GraphQLUtils::ConvertObject2Json)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5f2068c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLUtils*>(), { "ConvertObject2Json", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLUtils.Convert4Json
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* (*)(::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*)>(
        &::OculusStudios::GraphQL::Client::GraphQLUtils::Convert4Json)> {
  constexpr static std::size_t size = 0x824;
  constexpr static std::size_t addrs = 0x5f1fac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLUtils*>(),
                                                             { "Convert4Json", {}, { ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*>() } })));
    return ___internal_method;
  }
};
template <typename T> inline T OculusStudios::GraphQL::Client::GraphQLUtils::ConvertString2Enum(::StringW str) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLUtils*>(), { "ConvertString2Enum", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, str);
}
template <typename T> inline ::System::Collections::Generic::List_1<T>* OculusStudios::GraphQL::Client::GraphQLUtils::ConvertString2Enum(::System::Collections::Generic::List_1<::StringW>* strList) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLUtils*>(),
                                                           { "ConvertString2Enum", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, strList);
}
inline ::System::Object* OculusStudios::GraphQL::Client::GraphQLUtils::ConvertObject2Json(::System::Object* item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLUtils*>(), { "ConvertObject2Json", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, item);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*
OculusStudios::GraphQL::Client::GraphQLUtils::Convert4Json(::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* inDict) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLUtils*>(),
                                                           { "Convert4Json", {}, { ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*>(nullptr, ___internal_method, inDict);
}
template <typename T> inline bool OculusStudios::GraphQL::Client::GraphQLUtils::IsUnknown(T enumValue) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLUtils*>(), { "IsUnknown", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, enumValue);
}
template <typename T> inline ::System::Threading::Tasks::Task_1<T>* OculusStudios::GraphQL::Client::GraphQLUtils::DeserializeAsync(::StringW data) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLUtils*>(), { "DeserializeAsync", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::GraphQLUtils::GraphQLUtils() {}
