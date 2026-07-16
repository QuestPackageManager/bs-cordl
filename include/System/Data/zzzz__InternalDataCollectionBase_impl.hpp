#pragma once
// IWYU pragma private; include "System/Data/InternalDataCollectionBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__InternalDataCollectionBase_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/ComponentModel/zzzz__CollectionChangeEventArgs_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::InternalDataCollectionBase.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::InternalDataCollectionBase::*)()>(&::System::Data::InternalDataCollectionBase::get_Count)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x601640c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::InternalDataCollectionBase*>(), { ::i2c::class_of<::System::Data::InternalDataCollectionBase*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::InternalDataCollectionBase.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::InternalDataCollectionBase::*)(::System::Array*, int32_t)>(&::System::Data::InternalDataCollectionBase::CopyTo)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6016438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::InternalDataCollectionBase*>(), { ::i2c::class_of<::System::Data::InternalDataCollectionBase*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::InternalDataCollectionBase.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Data::InternalDataCollectionBase::*)()>(
    &::System::Data::InternalDataCollectionBase::GetEnumerator)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6016480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::InternalDataCollectionBase*>(), { ::i2c::class_of<::System::Data::InternalDataCollectionBase*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::InternalDataCollectionBase.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::InternalDataCollectionBase::*)()>(&::System::Data::InternalDataCollectionBase::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60164ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::InternalDataCollectionBase*>(), { "get_IsSynchronized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::InternalDataCollectionBase.NamesEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::InternalDataCollectionBase::*)(::StringW, ::StringW, bool, ::System::Globalization::CultureInfo*)>(
    &::System::Data::InternalDataCollectionBase::NamesEqual)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x60164b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::InternalDataCollectionBase*>(),
                            { "NamesEqual", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::InternalDataCollectionBase.get_SyncRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::InternalDataCollectionBase::*)()>(&::System::Data::InternalDataCollectionBase::get_SyncRoot)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6016558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::InternalDataCollectionBase*>(), { "get_SyncRoot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::InternalDataCollectionBase.get_List
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::System::Data::InternalDataCollectionBase::*)()>(&::System::Data::InternalDataCollectionBase::get_List)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601655c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::InternalDataCollectionBase*>(), { ::i2c::class_of<::System::Data::InternalDataCollectionBase*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::InternalDataCollectionBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::InternalDataCollectionBase::*)()>(&::System::Data::InternalDataCollectionBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6016564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::InternalDataCollectionBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Data::InternalDataCollectionBase::setStaticF_s_refreshEventArgs(::System::ComponentModel::CollectionChangeEventArgs* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::CollectionChangeEventArgs*, "s_refreshEventArgs", ::System::Data::InternalDataCollectionBase*>(
      std::forward<::System::ComponentModel::CollectionChangeEventArgs*>(value));
}
inline ::System::ComponentModel::CollectionChangeEventArgs* System::Data::InternalDataCollectionBase::getStaticF_s_refreshEventArgs() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::CollectionChangeEventArgs*, "s_refreshEventArgs", ::System::Data::InternalDataCollectionBase*>();
}
inline int32_t System::Data::InternalDataCollectionBase::get_Count() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::InternalDataCollectionBase*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Data::InternalDataCollectionBase::CopyTo(::System::Array* ar, int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::InternalDataCollectionBase*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ar, index);
}
inline ::System::Collections::IEnumerator* System::Data::InternalDataCollectionBase::GetEnumerator() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::InternalDataCollectionBase*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline bool System::Data::InternalDataCollectionBase::get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::InternalDataCollectionBase*>(), { "get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Data::InternalDataCollectionBase::NamesEqual(::StringW s1, ::StringW s2, bool fCaseSensitive, ::System::Globalization::CultureInfo* locale) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::InternalDataCollectionBase*>(),
                          { "NamesEqual", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s1, s2, fCaseSensitive, locale);
}
inline ::System::Object* System::Data::InternalDataCollectionBase::get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::InternalDataCollectionBase*>(), { "get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::ArrayList* System::Data::InternalDataCollectionBase::get_List() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::InternalDataCollectionBase*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method);
}
inline void System::Data::InternalDataCollectionBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::InternalDataCollectionBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Data::InternalDataCollectionBase* System::Data::InternalDataCollectionBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::InternalDataCollectionBase*>());
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Data::InternalDataCollectionBase::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Data::InternalDataCollectionBase::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Data::InternalDataCollectionBase::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Data::InternalDataCollectionBase::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Data::InternalDataCollectionBase::InternalDataCollectionBase() {}
