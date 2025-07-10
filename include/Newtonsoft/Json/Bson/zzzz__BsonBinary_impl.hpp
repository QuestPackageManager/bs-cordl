#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonBinary.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonBinaryType_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonValue_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonBinary_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonBinaryType_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonBinary.get_BinaryType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Bson::BsonBinaryType (::Newtonsoft::Json::Bson::BsonBinary::*)()>(
    &::Newtonsoft::Json::Bson::BsonBinary::get_BinaryType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3f530ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonBinary*>::get(), "get_BinaryType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonBinary.set_BinaryType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonBinary::*)(::Newtonsoft::Json::Bson::BsonBinaryType)>(
    &::Newtonsoft::Json::Bson::BsonBinary::set_BinaryType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3f530b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonBinary*>::get(), "set_BinaryType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonBinaryType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonBinary._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Newtonsoft::Json::Bson::BsonBinary::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Newtonsoft::Json::Bson::BsonBinaryType)>(&::Newtonsoft::Json::Bson::BsonBinary::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3f530bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonBinary*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonBinaryType>::get() })));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType& Newtonsoft::Json::Bson::BsonBinary::__cordl_internal_get__BinaryType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BinaryType_k__BackingField;
}
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType const& Newtonsoft::Json::Bson::BsonBinary::__cordl_internal_get__BinaryType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BinaryType_k__BackingField;
}
constexpr void Newtonsoft::Json::Bson::BsonBinary::__cordl_internal_set__BinaryType_k__BackingField(::Newtonsoft::Json::Bson::BsonBinaryType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BinaryType_k__BackingField = value;
}
inline ::Newtonsoft::Json::Bson::BsonBinaryType Newtonsoft::Json::Bson::BsonBinary::get_BinaryType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonBinary*>::get(), "get_BinaryType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Bson::BsonBinaryType, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonBinary::set_BinaryType(::Newtonsoft::Json::Bson::BsonBinaryType value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonBinary*>::get(), "set_BinaryType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonBinaryType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonBinary::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> value, ::Newtonsoft::Json::Bson::BsonBinaryType binaryType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonBinary*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonBinaryType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, binaryType);
}
inline ::Newtonsoft::Json::Bson::BsonBinary* Newtonsoft::Json::Bson::BsonBinary::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> value, ::Newtonsoft::Json::Bson::BsonBinaryType binaryType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Bson::BsonBinary*>(value, binaryType));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Bson::BsonBinary::BsonBinary() {}
