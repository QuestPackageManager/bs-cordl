#pragma once
// IWYU pragma private; include "BGLib\UnityExtension\SerializableHashSetBase.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/UnityExtension/zzzz__SerializableHashSetBase_def.hpp"
#include "BGLib/UnityExtension/zzzz__SerializableHashSetBase_def.hpp"
#include "System/Collections/Generic/zzzz__ISet_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::SerializableHashSetBase_Storage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::SerializableHashSetBase_Storage::*)()>(&::BGLib::UnityExtension::SerializableHashSetBase_Storage::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x332aa10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSetBase_Storage*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void BGLib::UnityExtension::SerializableHashSetBase_Storage::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSetBase_Storage*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::UnityExtension::SerializableHashSetBase_Storage* BGLib::UnityExtension::SerializableHashSetBase_Storage::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::SerializableHashSetBase_Storage*>());
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::SerializableHashSetBase_Storage::SerializableHashSetBase_Storage() {}
template <typename TValue> inline void BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValue> inline void BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>::_ctor(::System::Collections::Generic::ISet_1<TValue>* set) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::ISet_1<TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, set);
}
template <typename TValue>
inline void BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>::_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                    ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
template <typename TValue> inline ::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>* BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>*>());
}
template <typename TValue>
inline ::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>*
BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>::New_ctor(::System::Collections::Generic::ISet_1<TValue>* set) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>*>(set));
}
template <typename TValue>
inline ::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>*
BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>::New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>*>(info, context));
}
// Ctor Parameters []
template <typename TValue> constexpr ::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<TValue>::SerializableHashSetBase_HashSet_1() {}
//  Writing Method size for method: ::BGLib::UnityExtension::SerializableHashSetBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::SerializableHashSetBase::*)()>(&::BGLib::UnityExtension::SerializableHashSetBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x332aa0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSetBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void BGLib::UnityExtension::SerializableHashSetBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSetBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::UnityExtension::SerializableHashSetBase* BGLib::UnityExtension::SerializableHashSetBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::SerializableHashSetBase*>());
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::SerializableHashSetBase::SerializableHashSetBase() {}
