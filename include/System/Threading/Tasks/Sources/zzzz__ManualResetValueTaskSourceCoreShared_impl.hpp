#pragma once
// IWYU pragma private; include "System\Threading\Tasks\Sources\ManualResetValueTaskSourceCoreShared.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ManualResetValueTaskSourceCoreShared_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared.ThrowInvalidOperationException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared::ThrowInvalidOperationException)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5cc8b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared*>(), { "ThrowInvalidOperationException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared.CompletionSentinel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared::CompletionSentinel)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5cc8bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared*>(),
                                                                                           { "CompletionSentinel", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared::setStaticF_s_sentinel(::System::Action_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "s_sentinel", ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared*>(
      std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared::getStaticF_s_sentinel() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "s_sentinel", ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared*>();
}
inline void System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared::ThrowInvalidOperationException() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared*>(), { "ThrowInvalidOperationException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared::CompletionSentinel(::System::Object* _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared*>(),
                                                                                         { "CompletionSentinel", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _);
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared::ManualResetValueTaskSourceCoreShared() {}
