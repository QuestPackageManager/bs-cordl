#pragma once
// IWYU pragma private; include "BGLib\DotnetExtension\Disposables\ConcurrentCompositeDisposable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/DotnetExtension/Disposables/zzzz__ConcurrentCompositeDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::*)()>(
    &::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::get_Count)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x330fd3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::*)()>(
    &::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x330fe30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(), { "get_IsReadOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::*)()>(
    &::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x330fe38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::*)(int32_t)>(
    &::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x330fed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::*)(::ArrayW<::System::IDisposable*>)>(
    &::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x330ffc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::IDisposable*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::*)(
    ::System::Collections::Generic::IEnumerable_1<::System::IDisposable*>*)>(&::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x33100bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::IDisposable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::*)(::System::IDisposable*)>(
    &::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::Add)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x33101b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(), { "Add", {}, { ::i2c::type_of<::System::IDisposable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::*)(::System::IDisposable*)>(
    &::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::Remove)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x3310348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(), { "Remove", {}, { ::i2c::type_of<::System::IDisposable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::*)()>(
    &::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::Clear)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x33104a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::*)(::System::IDisposable*)>(
    &::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::Contains)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x33105b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(), { "Contains", {}, { ::i2c::type_of<::System::IDisposable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::*)(::ArrayW<::System::IDisposable*>, int32_t)>(
    &::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::CopyTo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x33106c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(),
                                                                                           { "CopyTo", {}, { ::i2c::type_of<::ArrayW<::System::IDisposable*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::IDisposable*>* (
    ::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::*)()>(&::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::GetEnumerator)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x3310880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::*)()>(
    &::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33109ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::*)()>(
    &::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::Dispose)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x33109b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::__cordl_internal_get__gate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gate;
}
constexpr ::System::Object* const& BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::__cordl_internal_get__gate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gate;
}
constexpr void BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::__cordl_internal_set__gate(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gate = value;
}
constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>*& BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::__cordl_internal_get__disposables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposables;
}
constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>* const& BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::__cordl_internal_get__disposables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposables;
}
constexpr void BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::__cordl_internal_set__disposables(::System::Collections::Generic::List_1<::System::IDisposable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposables = value;
}
inline int32_t BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::get_IsReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(), { "get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline void BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::_ctor(::ArrayW<::System::IDisposable*> checkers) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::IDisposable*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, checkers);
}
inline void BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::_ctor(::System::Collections::Generic::IEnumerable_1<::System::IDisposable*>* checkers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::IDisposable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, checkers);
}
inline void BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::Add(::System::IDisposable* item) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(), { "Add", {}, { ::i2c::type_of<::System::IDisposable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline bool BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::Remove(::System::IDisposable* item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(), { "Remove", {}, { ::i2c::type_of<::System::IDisposable*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline void BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::Contains(::System::IDisposable* item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(), { "Contains", {}, { ::i2c::type_of<::System::IDisposable*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline void BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::CopyTo(::ArrayW<::System::IDisposable*> array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(),
                                                                                         { "CopyTo", {}, { ::i2c::type_of<::ArrayW<::System::IDisposable*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::IDisposable*>* BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::IDisposable*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable* BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>());
}
inline ::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable* BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(capacity));
}
inline ::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable* BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::New_ctor(::ArrayW<::System::IDisposable*> checkers) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(checkers));
}
inline ::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*
BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::New_ctor(::System::Collections::Generic::IEnumerable_1<::System::IDisposable*>* checkers) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>(checkers));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::IDisposable*>"
constexpr BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::operator ::System::Collections::Generic::ICollection_1<::System::IDisposable*>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::System::IDisposable*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::IDisposable*>"
constexpr ::System::Collections::Generic::ICollection_1<::System::IDisposable*>*
BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::i___System__Collections__Generic__ICollection_1___System__IDisposable__() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::System::IDisposable*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::IDisposable*>"
constexpr BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::operator ::System::Collections::Generic::IEnumerable_1<::System::IDisposable*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::IDisposable*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::IDisposable*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::IDisposable*>*
BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::i___System__Collections__Generic__IEnumerable_1___System__IDisposable__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::IDisposable*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable::ConcurrentCompositeDisposable() {}
