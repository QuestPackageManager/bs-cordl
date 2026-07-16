#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/MessageDictionary.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MessageDictionary_def.hpp"
#include "System/Collections/zzzz__DictionaryEntry_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MessageDictionary_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::*)(
    ::System::Runtime::Remoting::Messaging::MessageDictionary*)>(&::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5b454d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::*)()>(
    &::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b455ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator*>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::*)()>(
    &::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5b45764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::*)()>(
    &::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::Reset)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b4592c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator.get_Entry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::DictionaryEntry (::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::*)()>(
    &::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::get_Entry)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5b45614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator*>(), { "get_Entry", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator.get_Key
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::*)()>(
    &::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::get_Key)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b459dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator*>(), { "get_Key", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::*)()>(
    &::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::get_Value)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b459e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Remoting::Messaging::MessageDictionary*& System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::__cordl_internal_get__methodDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____methodDictionary;
}
constexpr ::System::Runtime::Remoting::Messaging::MessageDictionary* const&
System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::__cordl_internal_get__methodDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____methodDictionary;
}
constexpr void System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::__cordl_internal_set__methodDictionary(::System::Runtime::Remoting::Messaging::MessageDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____methodDictionary = value;
}
constexpr ::System::Collections::IDictionaryEnumerator*& System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::__cordl_internal_get__hashtableEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashtableEnum;
}
constexpr ::System::Collections::IDictionaryEnumerator* const& System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::__cordl_internal_get__hashtableEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashtableEnum;
}
constexpr void System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::__cordl_internal_set__hashtableEnum(::System::Collections::IDictionaryEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hashtableEnum = value;
}
constexpr int32_t& System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::__cordl_internal_get__posMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____posMethod;
}
constexpr int32_t const& System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::__cordl_internal_get__posMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____posMethod;
}
constexpr void System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::__cordl_internal_set__posMethod(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____posMethod = value;
}
inline void System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::_ctor(::System::Runtime::Remoting::Messaging::MessageDictionary* methodDictionary) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodDictionary);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::DictionaryEntry System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::get_Entry() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator*>(), { "get_Entry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::DictionaryEntry>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::get_Key() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator*>(), { "get_Key", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::get_Value() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator*
System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::New_ctor(::System::Runtime::Remoting::Messaging::MessageDictionary* methodDictionary) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator*>(methodDictionary));
}
/// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
constexpr System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::operator ::System::Collections::IDictionaryEnumerator*() noexcept {
  return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IDictionaryEnumerator"
constexpr ::System::Collections::IDictionaryEnumerator* System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::i___System__Collections__IDictionaryEnumerator() noexcept {
  return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator::MessageDictionary_DictionaryEnumerator() {}
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::MessageDictionary::*)(::System::Runtime::Remoting::Messaging::IMethodMessage*)>(
    &::System::Runtime::Remoting::Messaging::MessageDictionary::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b42130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMethodMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary.HasUserData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(
    &::System::Runtime::Remoting::Messaging::MessageDictionary::HasUserData)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5b3f010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "HasUserData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary.get_InternalDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (::System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(
    &::System::Runtime::Remoting::Messaging::MessageDictionary::get_InternalDictionary)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b3f124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "get_InternalDictionary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary.set_MethodKeys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::MessageDictionary::*)(::ArrayW<::StringW>)>(
    &::System::Runtime::Remoting::Messaging::MessageDictionary::set_MethodKeys)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4437c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "set_MethodKeys", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary.AllocInternalProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (::System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(
    &::System::Runtime::Remoting::Messaging::MessageDictionary::AllocInternalProperties)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b44384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary.GetInternalProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (::System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(
    &::System::Runtime::Remoting::Messaging::MessageDictionary::GetInternalProperties)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b41248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "GetInternalProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary.IsOverridenKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Messaging::MessageDictionary::*)(::StringW)>(
    &::System::Runtime::Remoting::Messaging::MessageDictionary::IsOverridenKey)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b443ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "IsOverridenKey", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary.get_IsFixedSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(
    &::System::Runtime::Remoting::Messaging::MessageDictionary::get_IsFixedSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b44470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "get_IsFixedSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(
    &::System::Runtime::Remoting::Messaging::MessageDictionary::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b44478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "get_IsReadOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::MessageDictionary::*)(::System::Object*)>(
    &::System::Runtime::Remoting::Messaging::MessageDictionary::get_Item)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5b44480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "get_Item", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::MessageDictionary::*)(::System::Object*, ::System::Object*)>(
    &::System::Runtime::Remoting::Messaging::MessageDictionary::set_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b445bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(),
                                                                                           { "set_Item", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary.GetMethodProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::MessageDictionary::*)(::StringW)>(
    &::System::Runtime::Remoting::Messaging::MessageDictionary::GetMethodProperty)> {
  constexpr static std::size_t size = 0x5ac;
  constexpr static std::size_t addrs = 0x5b42510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary.SetMethodProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::MessageDictionary::*)(::StringW, ::System::Object*)>(
    &::System::Runtime::Remoting::Messaging::MessageDictionary::SetMethodProperty)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x5b42d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary.get_Keys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(
    &::System::Runtime::Remoting::Messaging::MessageDictionary::get_Keys)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x5b44718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "get_Keys", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary.get_Values
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(
    &::System::Runtime::Remoting::Messaging::MessageDictionary::get_Values)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x5b44b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "get_Values", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::MessageDictionary::*)(::System::Object*, ::System::Object*)>(
    &::System::Runtime::Remoting::Messaging::MessageDictionary::Add)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5b445c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(),
                                                                                           { "Add", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(&::System::Runtime::Remoting::Messaging::MessageDictionary::Clear)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b44f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Messaging::MessageDictionary::*)(::System::Object*)>(
    &::System::Runtime::Remoting::Messaging::MessageDictionary::Contains)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5b44fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "Contains", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::MessageDictionary::*)(::System::Object*)>(
    &::System::Runtime::Remoting::Messaging::MessageDictionary::Remove)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5b45104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "Remove", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(
    &::System::Runtime::Remoting::Messaging::MessageDictionary::get_Count)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5b45278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(
    &::System::Runtime::Remoting::Messaging::MessageDictionary::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b45344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "get_IsSynchronized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary.get_SyncRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(
    &::System::Runtime::Remoting::Messaging::MessageDictionary::get_SyncRoot)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b4534c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "get_SyncRoot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::MessageDictionary::*)(::System::Array*, int32_t)>(
    &::System::Runtime::Remoting::Messaging::MessageDictionary::CopyTo)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5b45350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(),
                                                                                           { "CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(
    &::System::Runtime::Remoting::Messaging::MessageDictionary::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b45414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::MessageDictionary.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionaryEnumerator* (::System::Runtime::Remoting::Messaging::MessageDictionary::*)()>(
    &::System::Runtime::Remoting::Messaging::MessageDictionary::GetEnumerator)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b45474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IDictionary*& System::Runtime::Remoting::Messaging::MessageDictionary::__cordl_internal_get__internalProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____internalProperties;
}
constexpr ::System::Collections::IDictionary* const& System::Runtime::Remoting::Messaging::MessageDictionary::__cordl_internal_get__internalProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____internalProperties;
}
constexpr void System::Runtime::Remoting::Messaging::MessageDictionary::__cordl_internal_set__internalProperties(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____internalProperties = value;
}
constexpr ::System::Runtime::Remoting::Messaging::IMethodMessage*& System::Runtime::Remoting::Messaging::MessageDictionary::__cordl_internal_get__message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____message;
}
constexpr ::System::Runtime::Remoting::Messaging::IMethodMessage* const& System::Runtime::Remoting::Messaging::MessageDictionary::__cordl_internal_get__message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____message;
}
constexpr void System::Runtime::Remoting::Messaging::MessageDictionary::__cordl_internal_set__message(::System::Runtime::Remoting::Messaging::IMethodMessage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____message = value;
}
constexpr ::ArrayW<::StringW>& System::Runtime::Remoting::Messaging::MessageDictionary::__cordl_internal_get__methodKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____methodKeys;
}
constexpr ::ArrayW<::StringW> const& System::Runtime::Remoting::Messaging::MessageDictionary::__cordl_internal_get__methodKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____methodKeys;
}
constexpr void System::Runtime::Remoting::Messaging::MessageDictionary::__cordl_internal_set__methodKeys(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____methodKeys = value;
}
constexpr bool& System::Runtime::Remoting::Messaging::MessageDictionary::__cordl_internal_get__ownProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ownProperties;
}
constexpr bool const& System::Runtime::Remoting::Messaging::MessageDictionary::__cordl_internal_get__ownProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ownProperties;
}
constexpr void System::Runtime::Remoting::Messaging::MessageDictionary::__cordl_internal_set__ownProperties(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ownProperties = value;
}
inline void System::Runtime::Remoting::Messaging::MessageDictionary::_ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMethodMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline bool System::Runtime::Remoting::Messaging::MessageDictionary::HasUserData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "HasUserData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::IDictionary* System::Runtime::Remoting::Messaging::MessageDictionary::get_InternalDictionary() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "get_InternalDictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::MessageDictionary::set_MethodKeys(::ArrayW<::StringW> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "set_MethodKeys", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::IDictionary* System::Runtime::Remoting::Messaging::MessageDictionary::AllocInternalProperties() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(this, ___internal_method);
}
inline ::System::Collections::IDictionary* System::Runtime::Remoting::Messaging::MessageDictionary::GetInternalProperties() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "GetInternalProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Messaging::MessageDictionary::IsOverridenKey(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "IsOverridenKey", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline bool System::Runtime::Remoting::Messaging::MessageDictionary::get_IsFixedSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "get_IsFixedSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Messaging::MessageDictionary::get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::MessageDictionary::get_Item(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "get_Item", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key);
}
inline void System::Runtime::Remoting::Messaging::MessageDictionary::set_Item(::System::Object* key, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(),
                                                                                         { "set_Item", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::MessageDictionary::GetMethodProperty(::StringW key) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key);
}
inline void System::Runtime::Remoting::Messaging::MessageDictionary::SetMethodProperty(::StringW key, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline ::System::Collections::ICollection* System::Runtime::Remoting::Messaging::MessageDictionary::get_Keys() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "get_Keys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
inline ::System::Collections::ICollection* System::Runtime::Remoting::Messaging::MessageDictionary::get_Values() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::MessageDictionary::Add(::System::Object* key, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(),
                                                                                         { "Add", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void System::Runtime::Remoting::Messaging::MessageDictionary::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Messaging::MessageDictionary::Contains(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "Contains", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline void System::Runtime::Remoting::Messaging::MessageDictionary::Remove(::System::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "Remove", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline int32_t System::Runtime::Remoting::Messaging::MessageDictionary::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Messaging::MessageDictionary::get_IsSynchronized() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::MessageDictionary::get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::MessageDictionary::CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(),
                                                                                         { "CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline ::System::Collections::IEnumerator* System::Runtime::Remoting::Messaging::MessageDictionary::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IDictionaryEnumerator* System::Runtime::Remoting::Messaging::MessageDictionary::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::MessageDictionary*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::MessageDictionary* System::Runtime::Remoting::Messaging::MessageDictionary::New_ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Messaging::MessageDictionary*>(message));
}
/// @brief Convert operator to "::System::Collections::IDictionary"
constexpr System::Runtime::Remoting::Messaging::MessageDictionary::operator ::System::Collections::IDictionary*() noexcept {
  return static_cast<::System::Collections::IDictionary*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IDictionary"
constexpr ::System::Collections::IDictionary* System::Runtime::Remoting::Messaging::MessageDictionary::i___System__Collections__IDictionary() noexcept {
  return static_cast<::System::Collections::IDictionary*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Runtime::Remoting::Messaging::MessageDictionary::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Runtime::Remoting::Messaging::MessageDictionary::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Runtime::Remoting::Messaging::MessageDictionary::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Runtime::Remoting::Messaging::MessageDictionary::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::MessageDictionary::MessageDictionary() {}
