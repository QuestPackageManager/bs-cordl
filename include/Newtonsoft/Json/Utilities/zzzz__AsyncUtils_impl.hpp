#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/AsyncUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__AsyncUtils_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__AsyncUtils_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::AsyncUtils___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Utilities::AsyncUtils___c::*)()>(&::Newtonsoft::Json::Utilities::AsyncUtils___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d1885c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::AsyncUtils___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::AsyncUtils___c._FromCanceled_b__5_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Utilities::AsyncUtils___c::*)()>(&::Newtonsoft::Json::Utilities::AsyncUtils___c::_FromCanceled_b__5_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d18860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::AsyncUtils___c*>(), { "<FromCanceled>b__5_0", {}, {} })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Utilities::AsyncUtils___c::setStaticF___9(::Newtonsoft::Json::Utilities::AsyncUtils___c* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Utilities::AsyncUtils___c*, "<>9", ::Newtonsoft::Json::Utilities::AsyncUtils___c*>(
      std::forward<::Newtonsoft::Json::Utilities::AsyncUtils___c*>(value));
}
inline ::Newtonsoft::Json::Utilities::AsyncUtils___c* Newtonsoft::Json::Utilities::AsyncUtils___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Utilities::AsyncUtils___c*, "<>9", ::Newtonsoft::Json::Utilities::AsyncUtils___c*>();
}
inline void Newtonsoft::Json::Utilities::AsyncUtils___c::setStaticF___9__5_0(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "<>9__5_0", ::Newtonsoft::Json::Utilities::AsyncUtils___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Newtonsoft::Json::Utilities::AsyncUtils___c::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::Action*, "<>9__5_0", ::Newtonsoft::Json::Utilities::AsyncUtils___c*>();
}
inline void Newtonsoft::Json::Utilities::AsyncUtils___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::AsyncUtils___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Utilities::AsyncUtils___c::_FromCanceled_b__5_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::AsyncUtils___c*>(), { "<FromCanceled>b__5_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Utilities::AsyncUtils___c* Newtonsoft::Json::Utilities::AsyncUtils___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Utilities::AsyncUtils___c*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::AsyncUtils___c::AsyncUtils___c() {}
template <typename T> inline void Newtonsoft::Json::Utilities::AsyncUtils___c__6_1<T>::setStaticF___9(::Newtonsoft::Json::Utilities::AsyncUtils___c__6_1<T>* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Utilities::AsyncUtils___c__6_1<T>*, "<>9", ::Newtonsoft::Json::Utilities::AsyncUtils___c__6_1<T>*>(
      std::forward<::Newtonsoft::Json::Utilities::AsyncUtils___c__6_1<T>*>(value));
}
template <typename T> inline ::Newtonsoft::Json::Utilities::AsyncUtils___c__6_1<T>* Newtonsoft::Json::Utilities::AsyncUtils___c__6_1<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Utilities::AsyncUtils___c__6_1<T>*, "<>9", ::Newtonsoft::Json::Utilities::AsyncUtils___c__6_1<T>*>();
}
template <typename T> inline void Newtonsoft::Json::Utilities::AsyncUtils___c__6_1<T>::setStaticF___9__6_0(::System::Func_1<T>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<T>*, "<>9__6_0", ::Newtonsoft::Json::Utilities::AsyncUtils___c__6_1<T>*>(std::forward<::System::Func_1<T>*>(value));
}
template <typename T> inline ::System::Func_1<T>* Newtonsoft::Json::Utilities::AsyncUtils___c__6_1<T>::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<T>*, "<>9__6_0", ::Newtonsoft::Json::Utilities::AsyncUtils___c__6_1<T>*>();
}
template <typename T> inline void Newtonsoft::Json::Utilities::AsyncUtils___c__6_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::AsyncUtils___c__6_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline T Newtonsoft::Json::Utilities::AsyncUtils___c__6_1<T>::_FromCanceled_b__6_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::AsyncUtils___c__6_1<T>*>(), { "<FromCanceled>b__6_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline ::Newtonsoft::Json::Utilities::AsyncUtils___c__6_1<T>* Newtonsoft::Json::Utilities::AsyncUtils___c__6_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Utilities::AsyncUtils___c__6_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::Newtonsoft::Json::Utilities::AsyncUtils___c__6_1<T>::AsyncUtils___c__6_1() {}
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::AsyncUtils.ToAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (*)(bool)>(&::Newtonsoft::Json::Utilities::AsyncUtils::ToAsync)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5d18114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::AsyncUtils*>(), { "ToAsync", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::AsyncUtils.CancelIfRequestedAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::Utilities::AsyncUtils::CancelIfRequestedAsync)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5d18190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::AsyncUtils*>(),
                                                                                           { "CancelIfRequestedAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::AsyncUtils.FromCanceled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::Threading::CancellationToken)>(&::Newtonsoft::Json::Utilities::AsyncUtils::FromCanceled)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5d1823c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::AsyncUtils*>(), { "FromCanceled", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::AsyncUtils.WriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::IO::TextWriter*, char16_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::Utilities::AsyncUtils::WriteAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5d18368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::AsyncUtils*>(),
                                         { "WriteAsync", {}, { ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::AsyncUtils.WriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::IO::TextWriter*, ::StringW, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::Utilities::AsyncUtils::WriteAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5d18440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::AsyncUtils*>(),
                            { "WriteAsync", {}, { ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::AsyncUtils.WriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::IO::TextWriter*, ::ArrayW<char16_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(
    &::Newtonsoft::Json::Utilities::AsyncUtils::WriteAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5d18518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::AsyncUtils*>(),
                                                             { "WriteAsync",
                                                               {},
                                                               { ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::AsyncUtils.ReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<int32_t>* (*)(::System::IO::TextReader*, ::ArrayW<char16_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(
        &::Newtonsoft::Json::Utilities::AsyncUtils::ReadAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5d1860c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::AsyncUtils*>(),
                                                             { "ReadAsync",
                                                               {},
                                                               { ::i2c::type_of<::System::IO::TextReader*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::AsyncUtils.IsCompletedSuccessfully
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Threading::Tasks::Task*)>(&::Newtonsoft::Json::Utilities::AsyncUtils::IsCompletedSuccessfully)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5d1871c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::AsyncUtils*>(), { "IsCompletedSuccessfully", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Utilities::AsyncUtils::setStaticF_False(::System::Threading::Tasks::Task_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Task_1<bool>*, "False", ::Newtonsoft::Json::Utilities::AsyncUtils*>(std::forward<::System::Threading::Tasks::Task_1<bool>*>(value));
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::Utilities::AsyncUtils::getStaticF_False() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task_1<bool>*, "False", ::Newtonsoft::Json::Utilities::AsyncUtils*>();
}
inline void Newtonsoft::Json::Utilities::AsyncUtils::setStaticF_True(::System::Threading::Tasks::Task_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Task_1<bool>*, "True", ::Newtonsoft::Json::Utilities::AsyncUtils*>(std::forward<::System::Threading::Tasks::Task_1<bool>*>(value));
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::Utilities::AsyncUtils::getStaticF_True() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task_1<bool>*, "True", ::Newtonsoft::Json::Utilities::AsyncUtils*>();
}
inline void Newtonsoft::Json::Utilities::AsyncUtils::setStaticF_CompletedTask(::System::Threading::Tasks::Task* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Task*, "CompletedTask", ::Newtonsoft::Json::Utilities::AsyncUtils*>(std::forward<::System::Threading::Tasks::Task*>(value));
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::Utilities::AsyncUtils::getStaticF_CompletedTask() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task*, "CompletedTask", ::Newtonsoft::Json::Utilities::AsyncUtils*>();
}
inline ::System::Threading::Tasks::Task_1<bool>* Newtonsoft::Json::Utilities::AsyncUtils::ToAsync(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::AsyncUtils*>(), { "ToAsync", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(nullptr, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::Utilities::AsyncUtils::CancelIfRequestedAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::AsyncUtils*>(), { "CancelIfRequestedAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, cancellationToken);
}
template <typename T> inline ::System::Threading::Tasks::Task_1<T>* Newtonsoft::Json::Utilities::AsyncUtils::CancelIfRequestedAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::AsyncUtils*>(),
                                                           { "CancelIfRequestedAsync", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*>(nullptr, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::Utilities::AsyncUtils::FromCanceled(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::AsyncUtils*>(), { "FromCanceled", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, cancellationToken);
}
template <typename T> inline ::System::Threading::Tasks::Task_1<T>* Newtonsoft::Json::Utilities::AsyncUtils::FromCanceled(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::AsyncUtils*>(), { "FromCanceled", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*>(nullptr, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::Utilities::AsyncUtils::WriteAsync(::System::IO::TextWriter* writer, char16_t value,
                                                                                             ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::AsyncUtils*>(),
                                       { "WriteAsync", {}, { ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, writer, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::Utilities::AsyncUtils::WriteAsync(::System::IO::TextWriter* writer, ::StringW value,
                                                                                             ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::AsyncUtils*>(),
                                       { "WriteAsync", {}, { ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, writer, value, cancellationToken);
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::Utilities::AsyncUtils::WriteAsync(::System::IO::TextWriter* writer, ::ArrayW<char16_t> value, int32_t start, int32_t count,
                                                                                             ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::AsyncUtils*>(),
                                                           { "WriteAsync",
                                                             {},
                                                             { ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, writer, value, start, count, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* Newtonsoft::Json::Utilities::AsyncUtils::ReadAsync(::System::IO::TextReader* reader, ::ArrayW<char16_t> buffer, int32_t index, int32_t count,
                                                                                                       ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::AsyncUtils*>(),
                                                           { "ReadAsync",
                                                             {},
                                                             { ::i2c::type_of<::System::IO::TextReader*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(nullptr, ___internal_method, reader, buffer, index, count, cancellationToken);
}
inline bool Newtonsoft::Json::Utilities::AsyncUtils::IsCompletedSuccessfully(::System::Threading::Tasks::Task* task) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::AsyncUtils*>(), { "IsCompletedSuccessfully", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, task);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::AsyncUtils::AsyncUtils() {}
