#pragma once
#include "Newtonsoft/Json/Bson/zzzz__BsonValue_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonBoolean_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonBoolean._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonBoolean::*)(bool)>(&::Newtonsoft::Json::Bson::BsonBoolean::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2a9bbc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonBoolean*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Bson::BsonBoolean::setStaticF_False(::Newtonsoft::Json::Bson::BsonBoolean* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Bson::BsonBoolean*, "False", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonBoolean*>::get>(
      std::forward<::Newtonsoft::Json::Bson::BsonBoolean*>(value));
}
inline ::Newtonsoft::Json::Bson::BsonBoolean* Newtonsoft::Json::Bson::BsonBoolean::getStaticF_False() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Bson::BsonBoolean*, "False", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonBoolean*>::get>();
}
inline void Newtonsoft::Json::Bson::BsonBoolean::setStaticF_True(::Newtonsoft::Json::Bson::BsonBoolean* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Bson::BsonBoolean*, "True", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonBoolean*>::get>(
      std::forward<::Newtonsoft::Json::Bson::BsonBoolean*>(value));
}
inline ::Newtonsoft::Json::Bson::BsonBoolean* Newtonsoft::Json::Bson::BsonBoolean::getStaticF_True() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Bson::BsonBoolean*, "True", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonBoolean*>::get>();
}
inline ::Newtonsoft::Json::Bson::BsonBoolean* Newtonsoft::Json::Bson::BsonBoolean::New_ctor(bool value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Bson::BsonBoolean*>(value));
}
inline void Newtonsoft::Json::Bson::BsonBoolean::_ctor(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonBoolean*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Bson::BsonBoolean::BsonBoolean() {}
