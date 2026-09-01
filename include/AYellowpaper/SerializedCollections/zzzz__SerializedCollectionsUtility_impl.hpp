#pragma once
// IWYU pragma private; include "AYellowpaper\SerializedCollections\SerializedCollectionsUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "AYellowpaper/SerializedCollections/zzzz__SerializedCollectionsUtility_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::AYellowpaper::SerializedCollections::SerializedCollectionsUtility.IsValidKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*)>(&::AYellowpaper::SerializedCollections::SerializedCollectionsUtility::IsValidKey)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x3257700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::AYellowpaper::SerializedCollections::SerializedCollectionsUtility*>(), { "IsValidKey", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline bool AYellowpaper::SerializedCollections::SerializedCollectionsUtility::IsValidKey(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AYellowpaper::SerializedCollections::SerializedCollectionsUtility*>(), { "IsValidKey", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj);
}
template <typename T> inline bool AYellowpaper::SerializedCollections::SerializedCollectionsUtility::KeysAreEqual(T key, ::System::Object* otherKey) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AYellowpaper::SerializedCollections::SerializedCollectionsUtility*>(),
                                                           { "KeysAreEqual", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, key, otherKey);
}
// Ctor Parameters []
constexpr ::AYellowpaper::SerializedCollections::SerializedCollectionsUtility::SerializedCollectionsUtility() {}
