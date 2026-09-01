#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\TryCatchFinallyHandler.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ExceptionHandler_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__TryCatchFinallyHandler_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ExceptionFilter_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ExceptionHandler_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler.get_IsFinallyBlockExist
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::*)()>(
    &::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::get_IsFinallyBlockExist)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fa0eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*>(), { "get_IsFinallyBlockExist", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler.get_Handlers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*> (::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::*)()>(
    &::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::get_Handlers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa0ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*>(), { "get_Handlers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler.get_IsCatchBlockExist
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::*)()>(
    &::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::get_IsCatchBlockExist)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fa0ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*>(), { "get_IsCatchBlockExist", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::*)(
    int32_t, int32_t, int32_t, ::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*>)>(&::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fa0ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::*)(
    int32_t, int32_t, int32_t, int32_t, int32_t, ::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*>)>(&::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fa0ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler.HasHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Exception*, ::by_ref<::System::Linq::Expressions::Interpreter::ExceptionHandler*>, ::by_ref<::System::Object*>)>(
    &::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::HasHandler)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5fa0f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*>(),
                                                { "HasHandler",
                                                  {},
                                                  { ::i2c::type_of<::System::Linq::Expressions::Interpreter::InterpretedFrame*>(), ::i2c::type_of<::System::Exception*>(),
                                                    ::i2c::type_of<::by_ref<::System::Linq::Expressions::Interpreter::ExceptionHandler*>>(), ::i2c::type_of<::by_ref<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler.FilterPasses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::by_ref<::System::Object*>, ::System::Linq::Expressions::Interpreter::ExceptionFilter*)>(
        &::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::FilterPasses)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5fa106c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*>(),
                                                             { "FilterPasses",
                                                               {},
                                                               { ::i2c::type_of<::System::Linq::Expressions::Interpreter::InterpretedFrame*>(), ::i2c::type_of<::by_ref<::System::Object*>>(),
                                                                 ::i2c::type_of<::System::Linq::Expressions::Interpreter::ExceptionFilter*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::__cordl_internal_get_TryStartIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TryStartIndex;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::__cordl_internal_get_TryStartIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TryStartIndex;
}
constexpr void System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::__cordl_internal_set_TryStartIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TryStartIndex = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::__cordl_internal_get_TryEndIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TryEndIndex;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::__cordl_internal_get_TryEndIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TryEndIndex;
}
constexpr void System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::__cordl_internal_set_TryEndIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TryEndIndex = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::__cordl_internal_get_FinallyStartIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FinallyStartIndex;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::__cordl_internal_get_FinallyStartIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FinallyStartIndex;
}
constexpr void System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::__cordl_internal_set_FinallyStartIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FinallyStartIndex = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::__cordl_internal_get_FinallyEndIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FinallyEndIndex;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::__cordl_internal_get_FinallyEndIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FinallyEndIndex;
}
constexpr void System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::__cordl_internal_set_FinallyEndIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FinallyEndIndex = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::__cordl_internal_get_GotoEndTargetIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GotoEndTargetIndex;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::__cordl_internal_get_GotoEndTargetIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GotoEndTargetIndex;
}
constexpr void System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::__cordl_internal_set_GotoEndTargetIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___GotoEndTargetIndex = value;
}
constexpr ::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*>& System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::__cordl_internal_get__handlers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handlers;
}
constexpr ::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*> const& System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::__cordl_internal_get__handlers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handlers;
}
constexpr void System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::__cordl_internal_set__handlers(::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handlers = value;
}
inline bool System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::get_IsFinallyBlockExist() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*>(), { "get_IsFinallyBlockExist", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*> System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::get_Handlers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*>(), { "get_Handlers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*>>(this, ___internal_method);
}
inline bool System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::get_IsCatchBlockExist() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*>(), { "get_IsCatchBlockExist", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::_ctor(int32_t tryStart, int32_t tryEnd, int32_t gotoEndTargetIndex,
                                                                                  ::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*> handlers) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tryStart, tryEnd, gotoEndTargetIndex, handlers);
}
inline void System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::_ctor(int32_t tryStart, int32_t tryEnd, int32_t gotoEndLabelIndex, int32_t finallyStart, int32_t finallyEnd,
                                                                                  ::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*> handlers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tryStart, tryEnd, gotoEndLabelIndex, finallyStart, finallyEnd, handlers);
}
inline bool System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::HasHandler(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ::System::Exception* exception,
                                                                                       ::by_ref<::System::Linq::Expressions::Interpreter::ExceptionHandler*> handler,
                                                                                       ::by_ref<::System::Object*> unwrappedException) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*>(),
                                              { "HasHandler",
                                                {},
                                                { ::i2c::type_of<::System::Linq::Expressions::Interpreter::InterpretedFrame*>(), ::i2c::type_of<::System::Exception*>(),
                                                  ::i2c::type_of<::by_ref<::System::Linq::Expressions::Interpreter::ExceptionHandler*>>(), ::i2c::type_of<::by_ref<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, frame, exception, handler, unwrappedException);
}
inline bool System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::FilterPasses(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ::by_ref<::System::Object*> exception,
                                                                                         ::System::Linq::Expressions::Interpreter::ExceptionFilter* filter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*>(),
                                                           { "FilterPasses",
                                                             {},
                                                             { ::i2c::type_of<::System::Linq::Expressions::Interpreter::InterpretedFrame*>(), ::i2c::type_of<::by_ref<::System::Object*>>(),
                                                               ::i2c::type_of<::System::Linq::Expressions::Interpreter::ExceptionFilter*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, frame, exception, filter);
}
inline ::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*
System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::New_ctor(int32_t tryStart, int32_t tryEnd, int32_t gotoEndTargetIndex,
                                                                         ::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*> handlers) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*>(tryStart, tryEnd, gotoEndTargetIndex, handlers));
}
inline ::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*
System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::New_ctor(int32_t tryStart, int32_t tryEnd, int32_t gotoEndLabelIndex, int32_t finallyStart, int32_t finallyEnd,
                                                                         ::ArrayW<::System::Linq::Expressions::Interpreter::ExceptionHandler*> handlers) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*>(tryStart, tryEnd, gotoEndLabelIndex, finallyStart, finallyEnd, handlers));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler::TryCatchFinallyHandler() {}
