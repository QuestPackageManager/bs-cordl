#pragma once
// IWYU pragma private; include "System\AggregateException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "System/zzzz__AggregateException_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::AggregateException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::AggregateException::*)()>(&::System::AggregateException::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5bace0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AggregateException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AggregateException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::AggregateException::*)(::System::Collections::Generic::IEnumerable_1<::System::Exception*>*)>(
    &::System::AggregateException::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bacf44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::AggregateException*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Exception*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AggregateException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::AggregateException::*)(::ArrayW<::System::Exception*>)>(&::System::AggregateException::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bad068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AggregateException*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Exception*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AggregateException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::AggregateException::*)(::StringW, ::System::Collections::Generic::IEnumerable_1<::System::Exception*>*)>(
    &::System::AggregateException::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5bacfa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AggregateException*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Exception*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AggregateException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::AggregateException::*)(::StringW, ::ArrayW<::System::Exception*>)>(&::System::AggregateException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bad0c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AggregateException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Exception*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AggregateException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::AggregateException::*)(::StringW, ::System::Collections::Generic::IList_1<::System::Exception*>*)>(
    &::System::AggregateException::_ctor)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x5bad0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AggregateException*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Exception*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AggregateException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::AggregateException::*)(
    ::System::Collections::Generic::IEnumerable_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*)>(&::System::AggregateException::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bad4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AggregateException*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AggregateException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::AggregateException::*)(
    ::StringW, ::System::Collections::Generic::IEnumerable_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*)>(&::System::AggregateException::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5bad514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::AggregateException*>(),
            { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AggregateException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::AggregateException::*)(
    ::StringW, ::System::Collections::Generic::IList_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*)>(&::System::AggregateException::_ctor)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x5bad5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::AggregateException*>(),
                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AggregateException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::AggregateException::*)(::System::Runtime::Serialization::SerializationInfo*,
                                                                                              ::System::Runtime::Serialization::StreamingContext)>(&::System::AggregateException::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5bada28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::AggregateException*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AggregateException.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::AggregateException::*)(::System::Runtime::Serialization::SerializationInfo*,
                                                                                              ::System::Runtime::Serialization::StreamingContext)>(&::System::AggregateException::GetObjectData)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5badbf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::AggregateException*>(), { ::i2c::class_of<::System::AggregateException*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AggregateException.get_InnerExceptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>* (::System::AggregateException::*)()>(
    &::System::AggregateException::get_InnerExceptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5badd50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AggregateException*>(), { "get_InnerExceptions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AggregateException.Flatten
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::AggregateException* (::System::AggregateException::*)()>(&::System::AggregateException::Flatten)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x5badd58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AggregateException*>(), { "Flatten", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AggregateException.get_Message
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::AggregateException::*)()>(&::System::AggregateException::get_Message)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5bae13c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::AggregateException*>(), { ::i2c::class_of<::System::AggregateException*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AggregateException.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::AggregateException::*)()>(&::System::AggregateException::ToString)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5bae2e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::AggregateException*>(), { ::i2c::class_of<::System::AggregateException*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>*& System::AggregateException::__cordl_internal_get_m_innerExceptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_innerExceptions;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>* const& System::AggregateException::__cordl_internal_get_m_innerExceptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_innerExceptions;
}
constexpr void System::AggregateException::__cordl_internal_set_m_innerExceptions(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_innerExceptions = value;
}
inline void System::AggregateException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AggregateException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::AggregateException::_ctor(::System::Collections::Generic::IEnumerable_1<::System::Exception*>* innerExceptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::AggregateException*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Exception*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerExceptions);
}
inline void System::AggregateException::_ctor(::ArrayW<::System::Exception*> innerExceptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AggregateException*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Exception*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerExceptions);
}
inline void System::AggregateException::_ctor(::StringW message, ::System::Collections::Generic::IEnumerable_1<::System::Exception*>* innerExceptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AggregateException*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Exception*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, innerExceptions);
}
inline void System::AggregateException::_ctor(::StringW message, ::ArrayW<::System::Exception*> innerExceptions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AggregateException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Exception*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, innerExceptions);
}
inline void System::AggregateException::_ctor(::StringW message, ::System::Collections::Generic::IList_1<::System::Exception*>* innerExceptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AggregateException*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Exception*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, innerExceptions);
}
inline void System::AggregateException::_ctor(::System::Collections::Generic::IEnumerable_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* innerExceptionInfos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AggregateException*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerExceptionInfos);
}
inline void System::AggregateException::_ctor(::StringW message, ::System::Collections::Generic::IEnumerable_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* innerExceptionInfos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::AggregateException*>(),
          { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, innerExceptionInfos);
}
inline void System::AggregateException::_ctor(::StringW message, ::System::Collections::Generic::IList_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* innerExceptionInfos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::AggregateException*>(),
                          { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, innerExceptionInfos);
}
inline void System::AggregateException::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::AggregateException*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::AggregateException::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::AggregateException*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>* System::AggregateException::get_InnerExceptions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AggregateException*>(), { "get_InnerExceptions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>*>(this, ___internal_method);
}
inline ::System::AggregateException* System::AggregateException::Flatten() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AggregateException*>(), { "Flatten", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::AggregateException*>(this, ___internal_method);
}
inline ::StringW System::AggregateException::get_Message() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::AggregateException*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::AggregateException::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::AggregateException*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::AggregateException* System::AggregateException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::AggregateException*>());
}
inline ::System::AggregateException* System::AggregateException::New_ctor(::System::Collections::Generic::IEnumerable_1<::System::Exception*>* innerExceptions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::AggregateException*>(innerExceptions));
}
inline ::System::AggregateException* System::AggregateException::New_ctor(::ArrayW<::System::Exception*> innerExceptions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::AggregateException*>(innerExceptions));
}
inline ::System::AggregateException* System::AggregateException::New_ctor(::StringW message, ::System::Collections::Generic::IEnumerable_1<::System::Exception*>* innerExceptions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::AggregateException*>(message, innerExceptions));
}
inline ::System::AggregateException* System::AggregateException::New_ctor(::StringW message, ::ArrayW<::System::Exception*> innerExceptions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::AggregateException*>(message, innerExceptions));
}
inline ::System::AggregateException* System::AggregateException::New_ctor(::StringW message, ::System::Collections::Generic::IList_1<::System::Exception*>* innerExceptions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::AggregateException*>(message, innerExceptions));
}
inline ::System::AggregateException*
System::AggregateException::New_ctor(::System::Collections::Generic::IEnumerable_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* innerExceptionInfos) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::AggregateException*>(innerExceptionInfos));
}
inline ::System::AggregateException*
System::AggregateException::New_ctor(::StringW message, ::System::Collections::Generic::IEnumerable_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* innerExceptionInfos) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::AggregateException*>(message, innerExceptionInfos));
}
inline ::System::AggregateException* System::AggregateException::New_ctor(::StringW message,
                                                                          ::System::Collections::Generic::IList_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* innerExceptionInfos) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::AggregateException*>(message, innerExceptionInfos));
}
inline ::System::AggregateException* System::AggregateException::New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::AggregateException*>(info, context));
}
// Ctor Parameters []
constexpr ::System::AggregateException::AggregateException() {}
