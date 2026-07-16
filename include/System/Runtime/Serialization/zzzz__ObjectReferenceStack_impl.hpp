#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ObjectReferenceStack.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectReferenceStack_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectReferenceStack.Push
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectReferenceStack::*)(::System::Object*)>(
    &::System::Runtime::Serialization::ObjectReferenceStack::Push)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x6154158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectReferenceStack>(), { "Push", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectReferenceStack.EnsureSetAsIsReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectReferenceStack::*)(::System::Object*)>(
    &::System::Runtime::Serialization::ObjectReferenceStack::EnsureSetAsIsReference)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6154370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectReferenceStack>(), { "EnsureSetAsIsReference", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectReferenceStack.Pop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectReferenceStack::*)(::System::Object*)>(
    &::System::Runtime::Serialization::ObjectReferenceStack::Pop)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x61544b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectReferenceStack>(), { "Pop", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectReferenceStack.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::ObjectReferenceStack::*)(::System::Object*)>(
    &::System::Runtime::Serialization::ObjectReferenceStack::Contains)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6154534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectReferenceStack>(), { "Contains", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectReferenceStack.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::ObjectReferenceStack::*)()>(&::System::Runtime::Serialization::ObjectReferenceStack::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x615462c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectReferenceStack>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::ObjectReferenceStack::Push(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectReferenceStack>(), { "Push", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, obj);
}
inline void System::Runtime::Serialization::ObjectReferenceStack::EnsureSetAsIsReference(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectReferenceStack>(), { "EnsureSetAsIsReference", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, obj);
}
inline void System::Runtime::Serialization::ObjectReferenceStack::Pop(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectReferenceStack>(), { "Pop", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, obj);
}
inline bool System::Runtime::Serialization::ObjectReferenceStack::Contains(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectReferenceStack>(), { "Contains", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t System::Runtime::Serialization::ObjectReferenceStack::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectReferenceStack>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "objectArray", ty: "::ArrayW<::System::Object*>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "isReferenceArray", ty: "::ArrayW<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "objectDictionary", ty:
// "::System::Collections::Generic::Dictionary_2<::System::Object*,::System::Object*>*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::ObjectReferenceStack::ObjectReferenceStack(int32_t count, ::ArrayW<::System::Object*> objectArray, ::ArrayW<bool> isReferenceArray,
                                                                                       ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* objectDictionary) noexcept {
  this->count = count;
  this->objectArray = objectArray;
  this->isReferenceArray = isReferenceArray;
  this->objectDictionary = objectDictionary;
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ObjectReferenceStack::ObjectReferenceStack() {}
