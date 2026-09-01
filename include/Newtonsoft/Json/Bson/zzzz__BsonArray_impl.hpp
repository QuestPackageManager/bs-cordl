#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Bson\BsonArray.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonArray_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonType_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonArray.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonArray::*)(::Newtonsoft::Json::Bson::BsonToken*)>(&::Newtonsoft::Json::Bson::BsonArray::Add)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5dae5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonArray*>(), { "Add", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonToken*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonArray.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Bson::BsonType (::Newtonsoft::Json::Bson::BsonArray::*)()>(&::Newtonsoft::Json::Bson::BsonArray::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dae654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonArray*>(), { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonArray*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonArray.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Bson::BsonToken*>* (::Newtonsoft::Json::Bson::BsonArray::*)()>(
    &::Newtonsoft::Json::Bson::BsonArray::GetEnumerator)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5dac354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonArray*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonArray.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Newtonsoft::Json::Bson::BsonArray::*)()>(
    &::Newtonsoft::Json::Bson::BsonArray::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5dae65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonArray*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonArray::*)()>(&::Newtonsoft::Json::Bson::BsonArray::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5dae660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonArray*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>*& Newtonsoft::Json::Bson::BsonArray::__cordl_internal_get__children() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____children;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>* const& Newtonsoft::Json::Bson::BsonArray::__cordl_internal_get__children() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____children;
}
constexpr void Newtonsoft::Json::Bson::BsonArray::__cordl_internal_set__children(::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____children = value;
}
inline void Newtonsoft::Json::Bson::BsonArray::Add(::Newtonsoft::Json::Bson::BsonToken* token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonArray*>(), { "Add", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::Newtonsoft::Json::Bson::BsonType Newtonsoft::Json::Bson::BsonArray::get_Type() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Bson::BsonArray*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Bson::BsonType>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Bson::BsonToken*>* Newtonsoft::Json::Bson::BsonArray::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonArray*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Bson::BsonToken*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Newtonsoft::Json::Bson::BsonArray::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonArray*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonArray::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonArray*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Bson::BsonArray* Newtonsoft::Json::Bson::BsonArray::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Bson::BsonArray*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Bson::BsonToken*>"
constexpr Newtonsoft::Json::Bson::BsonArray::operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Bson::BsonToken*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Bson::BsonToken*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Bson::BsonToken*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Bson::BsonToken*>*
Newtonsoft::Json::Bson::BsonArray::i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Bson__BsonToken__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Bson::BsonToken*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr Newtonsoft::Json::Bson::BsonArray::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Newtonsoft::Json::Bson::BsonArray::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Bson::BsonArray::BsonArray() {}
