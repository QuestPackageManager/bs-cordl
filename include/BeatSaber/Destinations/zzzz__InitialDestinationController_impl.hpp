#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/InitialDestinationController.hpp"
#include "BeatSaber/Destinations/zzzz__DestinationFlags_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Destinations/zzzz__InitialDestinationController_def.hpp"
#include "BeatSaber/Destinations/zzzz__Destination_def.hpp"
#include "BeatSaber/Destinations/zzzz__IInitialDestinationResolver_def.hpp"
#include "BeatSaber/Destinations/zzzz__InitialDestinationController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__13.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__13::*)()>(
    &::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x3280710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__13>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__13.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__13::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x32809d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__13>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__13::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__13>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__13>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::Destinations::InitialDestinationController*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__13::InitialDestinationController__InitializeInternalAsync_d__13(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BeatSaber::Destinations::InitialDestinationController* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::InitialDestinationController__InitializeInternalAsync_d__13::InitialDestinationController__InitializeInternalAsync_d__13() {}
//  Writing Method size for method: ::BeatSaber::Destinations::InitialDestinationController.get_initialDestination
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Destinations::Destination* (::BeatSaber::Destinations::InitialDestinationController::*)()>(
    &::BeatSaber::Destinations::InitialDestinationController::get_initialDestination)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x328042c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(), { "get_initialDestination", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::InitialDestinationController.get_hasCustomDestination
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::Destinations::InitialDestinationController::*)()>(
    &::BeatSaber::Destinations::InitialDestinationController::get_hasCustomDestination)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3280494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(), { "get_hasCustomDestination", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::InitialDestinationController.InitializeScenesAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::Destinations::InitialDestinationController::*)()>(
    &::BeatSaber::Destinations::InitialDestinationController::InitializeScenesAsync)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32804a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(), { "InitializeScenesAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::InitialDestinationController.SetTargetDestination
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Destinations::InitialDestinationController::*)(::BeatSaber::Destinations::Destination*)>(
    &::BeatSaber::Destinations::InitialDestinationController::SetTargetDestination)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x32805bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(),
                                                                                           { "SetTargetDestination", {}, { ::i2c::type_of<::BeatSaber::Destinations::Destination*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::InitialDestinationController.SetDestinationResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Destinations::InitialDestinationController::*)(::BeatSaber::Destinations::IInitialDestinationResolver*)>(
    &::BeatSaber::Destinations::InitialDestinationController::SetDestinationResolver)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3280618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(),
                                                             { "SetDestinationResolver", {}, { ::i2c::type_of<::BeatSaber::Destinations::IInitialDestinationResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::InitialDestinationController.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Destinations::InitialDestinationController::*)()>(&::BeatSaber::Destinations::InitialDestinationController::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3280674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::InitialDestinationController.InitializeInternalAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::Destinations::InitialDestinationController::*)()>(
    &::BeatSaber::Destinations::InitialDestinationController::InitializeInternalAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x328050c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(), { "InitializeInternalAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Destinations::InitialDestinationController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Destinations::InitialDestinationController::*)()>(&::BeatSaber::Destinations::InitialDestinationController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3280680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Destinations::Destination*& BeatSaber::Destinations::InitialDestinationController::__cordl_internal_get__initialDestinationOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialDestinationOverride;
}
constexpr ::BeatSaber::Destinations::Destination* const& BeatSaber::Destinations::InitialDestinationController::__cordl_internal_get__initialDestinationOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialDestinationOverride;
}
constexpr void BeatSaber::Destinations::InitialDestinationController::__cordl_internal_set__initialDestinationOverride(::BeatSaber::Destinations::Destination* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialDestinationOverride = value;
}
constexpr ::BeatSaber::Destinations::IInitialDestinationResolver*& BeatSaber::Destinations::InitialDestinationController::__cordl_internal_get__initialDestinationResolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialDestinationResolver;
}
constexpr ::BeatSaber::Destinations::IInitialDestinationResolver* const& BeatSaber::Destinations::InitialDestinationController::__cordl_internal_get__initialDestinationResolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialDestinationResolver;
}
constexpr void BeatSaber::Destinations::InitialDestinationController::__cordl_internal_set__initialDestinationResolver(::BeatSaber::Destinations::IInitialDestinationResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialDestinationResolver = value;
}
constexpr ::System::Threading::Tasks::Task*& BeatSaber::Destinations::InitialDestinationController::__cordl_internal_get__initializationTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializationTask;
}
constexpr ::System::Threading::Tasks::Task* const& BeatSaber::Destinations::InitialDestinationController::__cordl_internal_get__initializationTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializationTask;
}
constexpr void BeatSaber::Destinations::InitialDestinationController::__cordl_internal_set__initializationTask(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initializationTask = value;
}
inline void BeatSaber::Destinations::InitialDestinationController::setStaticF_kDefaultInitialDestination(::BeatSaber::Destinations::Destination* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Destinations::Destination*, "kDefaultInitialDestination", ::BeatSaber::Destinations::InitialDestinationController*>(
      std::forward<::BeatSaber::Destinations::Destination*>(value));
}
inline ::BeatSaber::Destinations::Destination* BeatSaber::Destinations::InitialDestinationController::getStaticF_kDefaultInitialDestination() {
  return ::cordl_internals::getStaticField<::BeatSaber::Destinations::Destination*, "kDefaultInitialDestination", ::BeatSaber::Destinations::InitialDestinationController*>();
}
inline ::BeatSaber::Destinations::Destination* BeatSaber::Destinations::InitialDestinationController::get_initialDestination() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(), { "get_initialDestination", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Destinations::Destination*>(this, ___internal_method);
}
inline bool BeatSaber::Destinations::InitialDestinationController::get_hasCustomDestination() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(), { "get_hasCustomDestination", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BeatSaber::Destinations::InitialDestinationController::InitializeScenesAsync() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(), { "InitializeScenesAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void BeatSaber::Destinations::InitialDestinationController::SetTargetDestination(::BeatSaber::Destinations::Destination* targetDestination) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(),
                                                                                         { "SetTargetDestination", {}, { ::i2c::type_of<::BeatSaber::Destinations::Destination*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetDestination);
}
inline void BeatSaber::Destinations::InitialDestinationController::SetDestinationResolver(::BeatSaber::Destinations::IInitialDestinationResolver* initialDestinationResolver) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(),
                                                           { "SetDestinationResolver", {}, { ::i2c::type_of<::BeatSaber::Destinations::IInitialDestinationResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialDestinationResolver);
}
inline void BeatSaber::Destinations::InitialDestinationController::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BeatSaber::Destinations::InitialDestinationController::InitializeInternalAsync() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(), { "InitializeInternalAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void BeatSaber::Destinations::InitialDestinationController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::InitialDestinationController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Destinations::InitialDestinationController* BeatSaber::Destinations::InitialDestinationController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Destinations::InitialDestinationController*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::InitialDestinationController::InitialDestinationController() {}
constexpr ::BeatSaber::Destinations::DestinationFlags BeatSaber::Destinations::InitialDestinationController::kDefaultInitialDestinationFlags{ static_cast<int32_t>(0x2) };
